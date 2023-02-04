`include "defines.v"

module axi_dcache # (
    parameter RW_DATA_WIDTH     = 64,
    parameter RW_ADDR_WIDTH     = 64,
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 64,
    parameter AXI_ID_WIDTH      = 4,
    parameter AXI_STRB_WIDTH    = AXI_DATA_WIDTH/8,
    parameter AXI_USER_WIDTH    = 1
)(
    input                               clock,
    input                               reset,
    //读部分
	input                                   rw_valid_i,             //cacheRdValid_o
	output reg                              rw_ready_o,             //
    output reg [RW_DATA_WIDTH-1:0]          data_read_o,            //rdData_i
    input  [RW_ADDR_WIDTH-1:0]              rw_addr_i,              //cacheAddr_o
    input  [7:0]                            fetchLenth,              //cache模块发来的取值长度
    output                                  rdLast_o,                           
    output                                  dataValid_o,
    //写部分
    input                                   wr_valid_i,         //写有效
    output reg                              wr_ready_o,            //读完成
    input  [255:0]                          cacheWrData_i,
    output          [7:0]                   storeLenth,
    input  [AXI_STRB_WIDTH-1:0]             rw_w_mask_i,        
    input  [63:0]                           cacheWrAddr_i,          //IF&MEM输入信号



    // Advanced eXtensible Interface
    input                               axi_aw_ready_i,     //lite         
    output                              axi_aw_valid_o,     //lite
    output [AXI_ADDR_WIDTH-1:0]         axi_aw_addr_o,      //lite
    output [2:0]                        axi_aw_prot_o,
    output [AXI_ID_WIDTH-1:0]           axi_aw_id_o,
    output [AXI_USER_WIDTH-1:0]         axi_aw_user_o,
    output [7:0]                        axi_aw_len_o,       
    output [2:0]                        axi_aw_size_o,
    output [1:0]                        axi_aw_burst_o,
    output                              axi_aw_lock_o,
    output [3:0]                        axi_aw_cache_o,
    output [3:0]                        axi_aw_qos_o,
    output [3:0]                        axi_aw_region_o,

    input                               axi_w_ready_i,      //lite              
    output                              axi_w_valid_o,      //lite
    output [AXI_DATA_WIDTH-1:0]         axi_w_data_o,       //lite
    output [AXI_DATA_WIDTH/8-1:0]       axi_w_strb_o,       //lite
    output                              axi_w_last_o,       //lite
    output [AXI_USER_WIDTH-1:0]         axi_w_user_o,
    
    output                              axi_b_ready_o,      //lite           
    input                               axi_b_valid_i,      //lite
    input  [1:0]                        axi_b_resp_i,       //lite            
    input  [AXI_ID_WIDTH-1:0]           axi_b_id_i,
    input  [AXI_USER_WIDTH-1:0]         axi_b_user_i,

    input                               axi_ar_ready_i,     //lite              
    output                              axi_ar_valid_o,     //lite
    output [AXI_ADDR_WIDTH-1:0]         axi_ar_addr_o,      //lite
    output [2:0]                        axi_ar_prot_o,
    output [AXI_ID_WIDTH-1:0]           axi_ar_id_o,
    output [AXI_USER_WIDTH-1:0]         axi_ar_user_o,
    output [7:0]                        axi_ar_len_o,       //lite
    output [2:0]                        axi_ar_size_o,      //lite
    output [1:0]                        axi_ar_burst_o,
    output                              axi_ar_lock_o,
    output [3:0]                        axi_ar_cache_o,
    output [3:0]                        axi_ar_qos_o,
    output [3:0]                        axi_ar_region_o,
    
    output                              axi_r_ready_o,      //lite            
    input                               axi_r_valid_i,      //lite            
    input  [1:0]                        axi_r_resp_i,
    input  [AXI_DATA_WIDTH-1:0]         axi_r_data_i,       //lite
    input                               axi_r_last_i,
    input  [AXI_ID_WIDTH-1:0]           axi_r_id_i,
    input  [AXI_USER_WIDTH-1:0]         axi_r_user_i
);
    
    // ------------------State Machine------------------TODO

    // 写通道状态切换

    parameter       w_state_idle = 2'b00,
                    w_state_aw_wait = 2'b01,
                    w_state_dw_wait = 2'b11,
                    w_state_b_wait_trans_ok = 2'b10;
    reg     [1:0]   w_state,w_state_next;
    reg             aw_valid,w_valid,b_ready,trans_ok;
    wire            wrLast;
    always @(posedge clock or negedge reset) begin
        if(~reset) begin
            w_state <= w_state_idle;
        end
        else begin
            w_state <= w_state_next;
        end
    end
//状态切换
    always @(*) begin
        case(w_state) 
            w_state_idle: begin
                if(wr_valid_i) begin
                    w_state_next = w_state_aw_wait;
                end
                else begin
                    w_state_next = w_state_idle;
                end
            end 
            w_state_aw_wait: begin
                if(axi_aw_ready_i) begin
                    w_state_next = w_state_dw_wait;
                end
                else begin
                    w_state_next = w_state_aw_wait;
                end
            end
            w_state_dw_wait: begin
                if(axi_w_ready_i && wrLast) begin
                    w_state_next = w_state_b_wait_trans_ok;
                end
                else begin
                    w_state_next = w_state_dw_wait;
                end
            end
            w_state_b_wait_trans_ok: begin
                if(axi_b_valid_i) begin
                    w_state_next = w_state_idle;
                end
                else begin
                    w_state_next = w_state_b_wait_trans_ok;
                end
            end
        endcase
    end
reg     [`XLEN-1:0]     wrAddr_reg;
reg     [255:0]         wr_data_reg;
always @(posedge clock) begin
        if((w_state == w_state_idle) && wr_valid_i) begin
            wrAddr_reg <= cacheWrAddr_i;
            wr_data_reg <= cacheWrData_i;
        end
end

reg [1:0]   wrCnt;
always @(posedge clock or negedge reset) begin
    if(~reset) begin
        wrCnt <= 'b0;
    end
    else if((w_state == w_state_idle) && wr_valid_i) begin
        wrCnt <= 'b0;        
    end
    else if((w_state == w_state_dw_wait) && axi_w_ready_i && ~wrLast) begin
        wrCnt <= wrCnt + 'b1;
    end
end
// //输出逻辑
assign aw_valid = w_state == w_state_aw_wait;
assign w_valid  = w_state == w_state_dw_wait;
assign b_ready  = (w_state == w_state_b_wait_trans_ok);
assign wrLast   = w_state == w_state_dw_wait && wrCnt == lenthReg[1:0];
assign wr_ready_o = w_state == w_state_idle;
    // always @(posedge clock) begin
    //     if((w_state == w_state_b_wait_trans_ok) && axi_b_valid_i) begin
    //         trans_ok <= 1'b1;
    //     end
    //     else if(w_state != w_state_b_wait_trans_ok) begin
    //         trans_ok <= 1'b0;
    //     end
    // end

reg [7:0]   lenthReg;
always @(posedge clock or negedge reset) begin
    if(~reset) begin
        lenthReg <= 'b0;
    end
    else if((w_state == w_state_idle) && wr_valid_i)begin
        lenthReg <= storeLenth;
    end
end


    // 读通道状态切换
    parameter       r_state_idle = 2'b00,
                    r_state_ar_wait = 2'b01,
                    r_state_r_wait = 2'b11,
                    r_state_trans_ok = 2'b10;    
    reg     [1:0]   r_state,r_state_next;
    wire            ar_valid,r_ready;
    // reg             instr_valid;
    reg     [`XLEN-1:0]     rdAddr_reg;
    always @(posedge clock or negedge reset) begin
        if(~reset) begin
            r_state <= r_state_idle;
        end
        else begin
            r_state <= r_state_next;
        end
    end
  always @(*) begin
      case(r_state)
          r_state_idle: begin
              if(rw_valid_i)        r_state_next = r_state_ar_wait;
              else                  r_state_next = r_state_idle;
          end
          r_state_ar_wait: begin
              if(axi_ar_ready_i)    r_state_next = r_state_r_wait;
              else                  r_state_next = r_state_ar_wait;
          end
          r_state_r_wait: begin
              if(axi_r_last_i)     r_state_next = r_state_idle;
              else                  r_state_next = r_state_r_wait;
          end
          default: begin
            r_state_next = r_state_idle;
          end
      endcase
  end

//锁存地址
always @(posedge clock or negedge reset) begin
    if(~reset) begin
        rdAddr_reg <= 'b0;
    end
    else if((r_state == r_state_idle) && rw_valid_i) begin
        rdAddr_reg <= rw_addr_i;
    end
end

assign rw_ready_o = r_state == r_state_idle;
assign rdLast_o = axi_r_last_i;
assign dataValid_o = axi_r_valid_i && axi_r_ready_o;
assign ar_valid = r_state == r_state_ar_wait;
assign r_ready = r_state == r_state_r_wait;
assign data_read_o = axi_r_data_i;
// assign instr_fetching = ~(r_state == r_state_idle);
    // assign rw_ready_o = instr_valid_reg;
    // assign data_read_o = rd_data_reg;
    
    // ------------------Read Transaction------------------

    // Read address channel signals
    assign axi_ar_valid_o   = ar_valid;
    assign axi_ar_addr_o    = rdAddr_reg;
    assign axi_ar_prot_o    = `AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;  //初始化信号即可
    assign axi_ar_id_o      = axi_id;                                                                           //初始化信号即可                        
    assign axi_ar_user_o    = axi_user;                                                                         //初始化信号即可
    assign axi_ar_len_o     = axi_len;                                                                          
    assign axi_ar_size_o    = axi_size;
    assign axi_ar_burst_o   = `AXI_BURST_TYPE_INCR;
    assign axi_ar_lock_o    = 1'b0;                                                                             //初始化信号即可
    assign axi_ar_cache_o   = `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;                                 //初始化信号即可
    assign axi_ar_qos_o     = 4'h0;                                                                             //初始化信号即可

    // Read data channel signals
    assign axi_r_ready_o    = r_ready;

    // // ------------------Write Transaction------------------
    parameter AXI_SIZE      = $clog2(AXI_DATA_WIDTH / 8);
    wire [AXI_ID_WIDTH-1:0] axi_id              = 'b1;
    wire [AXI_USER_WIDTH-1:0] axi_user          = {AXI_USER_WIDTH{1'b0}};
    wire [7:0] axi_len      =  8'd3 ;
    wire [2:0] axi_size     = AXI_SIZE[2:0];
    // 写地址通道  以下没有备注初始化信号的都可能是你需要产生和用到的
    assign axi_aw_valid_o   = aw_valid;
    assign axi_aw_addr_o    = wrAddr_reg;
    assign axi_aw_prot_o    = `AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;  //初始化信号即可
    assign axi_aw_id_o      = axi_id;                                                                           //初始化信号即可
    assign axi_aw_user_o    = axi_user;                                                                         //初始化信号即可
    assign axi_aw_len_o     = storeLenth;
    assign axi_aw_size_o    = 0;
    assign axi_aw_burst_o   = `AXI_BURST_TYPE_INCR;                                                             
    assign axi_aw_lock_o    = 1'b0;                                                                             //初始化信号即可
    assign axi_aw_cache_o   = `AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE;                                  //初始化信号即可
    assign axi_aw_qos_o     = 4'h0;                                                                             //初始化信号即可
    assign axi_aw_region_o  = 4'h0;                                                                             //初始化信号即可

    // 写数据通道
    assign axi_w_valid_o    = w_valid;
    wire    [5:0]      shift = {wrAddr_reg[2:0],3'b0};
    assign axi_w_data_o     = wr_data_reg[63:0] << shift;
    assign axi_w_strb_o     = 'hff;
    // assign axi_w_data_o     = wr_data_reg[wrCnt*64+:64];
    assign axi_w_strb_o     = rw_w_mask_i << wrAddr_reg[2:0];
    assign axi_w_last_o     = wrLast;
    assign axi_w_user_o     = axi_user;                                                                         //初始化信号即可

    // 写应答通道
    assign axi_b_ready_o    = b_ready;



endmodule
