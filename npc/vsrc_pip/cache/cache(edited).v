`include "defines.v"
//未实现uncache
//uncache map: 0x80000000~0x8fffffff(高四位为1000，为cache片段，其他全部uncache)
module Dcache_modified(
    input                                   clk,rst_n,
//from PIPLINE
    input           [`addr_width-1:0]       addr_i,
    //valid表示有效的读取请求，op表示操作类型，icache恒为0,表示读
    input                                   exValid_i,
    input                                   lsValid_i,
    input                                   op_i,
    //写数据以及mask，icache无效
    input           [`XLEN-1:0]             wr_data_i,
    input           [7:0]                   wr_mask_i,
    //流水线stall信号，低有效
    input                                   stall_n,
    //回给if模块的地址接收有效信号，为高时表示可以处理新的请求的地址
    output  reg                             addr_ok_o,
    output                                  data_ok_o,  //reserve
    //数据无效信号，为高时表示此时输出的数据无效
    output                                  data_notok_o,
    output          [`XLEN-1:0]             rd_data_o,


//to AXI
    //cache发出读请求有效信号
    output                                  cacheRdValid_o,//
    //axi可以接受读请求的信号
    input                                   axiRdReady,//
    //读取长度，icache恒为4,为一个cacheline的大小，这里未使用
    output          [7:0]                   fetchLenth,//
    //最后一个数据信号
    input                                   rdLast_i,//
    output          [`addr_width-1:0]       cacheRdAddr_o,//
    output          [`addr_width-1:0]       cacheWrAddr_o,//
    input           [`XLEN-1:0]             rdData_i,//
    //数据有效信号
    input                                   dataValid_i,
    //AXI可以接受写请求信号
    input                                   axiWrReady,//
    //axi写请求有效信号
    output                                  cacheWrValid_o,//
    output          [255:0]                 cacheWrData_o,//
    output          [7:0]                   storeLenth,//

    output          [7:0]                   cacheWrMask_o,
    output          [2:0]                   cacheWrSize_o
);


localparam  idle        = 3'b000,
            compare     = 3'b001,
            miss        = 3'b010,           //ls要加一个状态：wrWait，确保发生写缺失的时候要先写后读（其实可以判断一下是否需要写，若不要写则进入getData）
            getdata     = 3'b011,
            replace     = 3'b111,
            uncacheOp   = 3'b110;           //添加uncacheOp用来处理非缓存操作

            always @(posedge clk or negedge rst_n) begin
                if(~rst_n) begin
                    cacheCurState <= idle;
                end
                else begin
                    cacheCurState <= cacheNexState;
                end
            end
            
            always @(*) begin
                case (cacheCurState)
                    idle: begin
                        //在uncache请求是不进行cache操作
                        if(exValid_i && stall_n ) begin       
                            cacheNexState = compare;
                        end
                        else begin
                            cacheNexState = idle;
                        end
                    end
                    compare: begin
                        if(uncached) begin
                            cacheNexState = uncacheOp;//若触发uncache条件则进入uncacheOp处理
                        end
                        else if(cacheHit) begin
                            //后面的那个条件是为了防止在stall的条件下，ex阶段的指令已经流到了ls阶段，exValid失效，但这条指
                            //令由于被stall住了，数据并没有被lsu接受，所以必须要呆在compare阶段保证数据输出，等到stall结束后再回到idle
                            //但是对于写请求却不需要这样处理，因为写入只要一个周期，写入了就ok了，不需要一直呆在compare
                            if(exValid_i && stall_n || lsValid_i && ~reqLatch[32] && ~stall_n) begin
                                cacheNexState = compare;     
                            end
                            else begin
                                cacheNexState = idle;
                            end
                        end
                        else if(lsValid_i) begin
                    //如果miss且需要写回，但是axi正写忙，则需要等axi写就绪后再读
                            if(reqLatch[32] && axiWrBusy) begin
                                cacheNexState = compare;
                            end
                            else begin
                                cacheNexState = miss;
                            end
                        end
                        else if(exValid_i) begin
                            cacheNexState = compare;
                        end
                        else begin
                            cacheNexState = idle;
                        end
                    end
                    miss: begin
                        if(axiRdReady) begin
                            cacheNexState = getdata;
                        end
                        else begin
                            cacheNexState = miss;
                        end
                    end
                    getdata: begin
                        if(rdLast_i) begin
                            cacheNexState = replace;       //有问题，要该（validbit的问题）
                        end
                        else begin
                            cacheNexState = getdata;
                        end
                    end 
                    //此处须添加一个replace的阶段，为了防止在完成替换后，下一个pc命中，但是读数据的时候与在同一way上的写入操作产生冲突（即读取与写入的地址不一样）
                    replace: begin
                        if(needWrBk_Reg) begin
                            cacheNexState = replace;
                        end
                        else begin
                            cacheNexState = compare;
                        end    
                    end
                    uncacheOp: begin
                        if(uncacheOpOk && stall_n) begin
                            cacheNexState = compare;
                        end
                        else begin
                            cacheNexState = uncacheOp;
                        end
                    end
                    default: begin
                        cacheNexState = idle;
                    end  
                endcase
            end

endmodule
