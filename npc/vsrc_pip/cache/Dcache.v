`include "defines.v"
//未实现uncache
module Dcache(
    input                                   clk,rst_n,
//from PIPLINE
    input           [`addr_width-1:0]       addr_i,
    //valid表示有效的读取请求，op表示操作类型，icache恒为0,表示读
    input                                   valid_i,op_i,
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
    output                                  cacheRdValid_o,
    //axi可以接受读请求的信号
    input                                   axiRdReady,
    //读取长度，icache恒为4,为一个cacheline的大小，这里未使用
    output          [7:0]                   fetchLenth,
    //最后一个数据信号
    input                                   rdLast_i,
    output          [`addr_width-1:0]       cacheRdAddr_o,
    output          [`addr_width-1:0]       cacheWrAddr_o,
    input           [`XLEN-1:0]             rdData_i,
    //数据有效信号
    input                                   dataValid_i,
    //AXI可以接受写请求信号
    input                                   axiWrReady,
    //axi写请求有效信号
    output                                  cacheWrValid_o,
    output          [255:0]                 cacheWrData_o,
    output          [7:0]                   storeLenth
);




localparam  idle    = 3'b000,
            compare = 3'b001,
            miss    = 3'b010,           //ls要加一个状态：wrWait，确保发生写缺失的时候要先写后读（其实可以判断一下是否需要写，若不要写则进入getData）
            getdata = 3'b011,
            replace = 3'b111;

reg     [2:0]   cacheCurState,cacheNexState;
wire            cacheHit;
wire            way1Hit,way2Hit;
wire    [127:0] dataWay1_1,dataWay1_2,dataWay2_1,dataWay2_2;
reg    [127:0] inDataWay1_1,inDataWay1_2,inDataWay2_1,inDataWay2_2;
reg            wenWay1,wenWay2;

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
            if(valid_i) begin
                cacheNexState = compare;
            end
            else begin
                cacheNexState = idle;
            end
        end
        compare: begin
            if(cacheHit) begin
                if(valid_i) begin
                    cacheNexState = compare;
                end
                else begin
                    cacheNexState = idle;
                end
            end
            else begin
                cacheNexState = miss;
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
        default: begin
            cacheNexState = idle;
        end  
    endcase
end

wire                    idleEn = cacheCurState == idle;
reg [`addr_width:0]     reqLatch;
wire    [4:0]           offset = reqLatch[4:0];
wire    [5:0]           index = reqLatch[10:5];
wire    [20:0]          tag = reqLatch[31:11];
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        reqLatch <= 'b0;
    end
    //在compare到compare锁存地址信息时，要保证上一个请求是hit的，否则下一拍会进入miss，而保存的数据失效
    //同时要保证在stall时不锁存，因为1、stall有可能是由cache缺失或其他自身原因造成，此时不能锁存其他数据
    //2、有可能由其他阶段造成如ls部分stall等，此时也不能锁存，否则会锁存下一拍的地址，但是pc还没有变化，导致取得的指令出错
    else if(((idleEn && valid_i) || (compareEn && valid_i && cacheHit) && stall_n)) begin
        reqLatch <= {op_i,addr_i};
    end
end

//addrOk信号仅在idle或者compare且上一拍pc命中的情况下为高，表示新的pc可以被接收
always @(*) begin
    if(idleEn || (compareEn && cacheHit)) begin
        addr_ok_o = 1'b1;
    end
    else begin
        addr_ok_o = 1'b0;
    end
end       

reg [63:0]   validArray1;
reg [63:0]   validArray2;    //共2way，每way有64行，每行256bit，用两个sram拼接，每两个sram共用一个validbit
wire        bitValid1,bitValid2;
reg        bitValid1_d,bitValid2_d;

//valid Bit的写入在getdata的末尾写入
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        validArray1 <= 'b0;
        validArray2 <= 'b0;
    end
    else if(getdataEn) begin
        validArray1[index] <= bitValid1_d;
        validArray2[index] <= bitValid2_d;
    end
end

assign bitValid1 = validArray1[index];
assign bitValid2 = validArray2[index];


reg [20:0]  tagArray1[0:63];
reg [20:0]  tagArray2[0:63];
reg [20:0]  tagArray1_d,tagArray2_d;

wire [20:0] tagWay1_q,tagWay2_q;
reg        validWay1_q,validWay2_q;

//tag的写入同样在getdata的末尾写入
//此处是否能优化呢，即将tagArray1_d和tagArray2_d用一个信号表示，使用信号控制写入tagarray1还是2
always @(posedge clk or negedge rst_n) begin
    if(getdataEn) begin
        tagArray1[index] <= tagArray1_d;
        tagArray2[index] <= tagArray2_d;
    end
end

assign tagWay1_q = tagArray1[index];
assign tagWay2_q = tagArray2[index];

//hit信号产生
assign  way1Hit = (~(|(tagWay1_q ^ tag)) && bitValid1) ? 'b1 : 'b0;
assign  way2Hit = (~(|(tagWay2_q ^ tag)) && bitValid2) ? 'b1 : 'b0;
assign  cacheHit = way1Hit || way2Hit;
//dataOk信号仅在compare阶段并且命中的情况下为高，
assign data_ok_o = compareEn && cacheHit;
//notok信号在idle阶段不置高
assign data_notok_o = (compareEn && ~cacheHit) || getdataEn || missEn || replaceEn;

wire    compareEn = cacheCurState == compare;

wire [255:0]    way1Data = {dataWay1_2,dataWay1_1};
wire [255:0]    way2Data = {dataWay2_2,dataWay2_1};
// wire test = (idleEn && valid_i) || (compareEn && valid_i && cacheHit);
reg [`XLEN-1:0] rdDataRegWay1,rdDataRegWay2;
always @(*) begin
    if((idleEn && valid_i) || (compareEn && valid_i && cacheHit)) begin
            case(offset[4:3])
                2'b00: rdDataRegWay1 = missFlag ? rdBuffer[63:0]    : way1Data[63:0]   ;
                2'b01: rdDataRegWay1 = missFlag ? rdBuffer[127:64]  : way1Data[127:64] ;
                2'b10: rdDataRegWay1 = missFlag ? rdBuffer[191:128] : way1Data[191:128];
                2'b11: rdDataRegWay1 = missFlag ? rdBuffer[255:192] : way1Data[255:192];
            endcase
            case(offset[4:3])
                2'b00: rdDataRegWay2 = missFlag ? rdBuffer[63:0]    : way2Data[63:0];
                2'b01: rdDataRegWay2 = missFlag ? rdBuffer[127:64]  : way2Data[127:64];
                2'b10: rdDataRegWay2 = missFlag ? rdBuffer[191:128] : way2Data[191:128];
                2'b11: rdDataRegWay2 = missFlag ? rdBuffer[255:192] : way2Data[255:192];
            endcase
    end
    else begin
        rdDataRegWay1 = 'b0;
        rdDataRegWay2 = 'b0;
    end
end

assign rd_data_o = ({64{way1Hit}}&rdDataRegWay1)
                 | ({64{way2Hit}}&rdDataRegWay2);

wire    missEn = cacheCurState == miss;
wire    getdataEn = cacheCurState == getdata;
wire [63:0] addrToRead = {32'b0,tag,index,5'b0};
reg [31:0] randomBit;
reg        missFlag;
//由于根据sram模型，写入数据再读出至少需要两个周期，而为了获得更好的性能，在写入后即可读出数据，故需一个信号指示使用rdBUffer里存放的数据而不是sram的
always @(posedge clk or negedge rst_n) begin
    if(~rst_n)begin
        missFlag <= 'b0;
    end
    //将missFlag延后写入sram(即replace阶段)一个周期，防止读出错误数据
    else if(replaceEn) begin        //在接入AXI后要加上LAST作为判断条件
        missFlag <= 'b1;
    end
    else begin
        missFlag <= 'b0;
    end
end

assign cacheRdValid_o = missEn && axiRdReady;
assign cacheRdAddr_o = addrToRead[31:0];
reg [1:0]   rdCnt;
//这一部分将axi过来的数据保持在buffer中，在一次存入cache的sram
//icache每次读内存都是固定的读4个64位word，所以使用一个2位的计数器循环计数
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        rdCnt <= 'b0;
    end
    else if(getdataEn && dataValid_i) begin
        rdCnt <= rdCnt + 'b1;
    end
end
reg [255:0] rdBuffer;
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        rdBuffer <= 'b0;
    end 
    else if(getdataEn && dataValid_i) begin
        rdBuffer[rdCnt*64+:64] <= rdData_i;
    end
end

//根据随机决定替换哪个way
always randomBit = $random;
always @(*) begin
    if(getdataEn && rdLast_i) begin
        //TODO 真‘伪随机
        if(randomBit[0]) begin
            bitValid1_d = 1'b1;
            bitValid2_d = 1'b0;
            tagArray1_d = tag;
            tagArray2_d = 'b0;
        end
        else begin
            bitValid1_d = 1'b0;
            bitValid2_d = 1'b1;
            tagArray1_d = 'b0;
            tagArray2_d = tag;
        end
    end
    else begin
        bitValid1_d = 1'b0;
        bitValid2_d = 1'b0;
        tagArray1_d = 'b0;
        tagArray2_d = 'b0;
    end
end

wire    replaceEn = cacheCurState == replace;
//这里延后一个周期将写是能拉高写入，防止高位无法写入（即最后64位数据）
//不仅在替换时要写入，store命中也要写入
always @(*) begin
    if((replaceEn && needWrBk_Reg) || (compareEn && cacheHit && reqLatch[32])) begin
        if(randomBit[0]) begin
            wenWay1 = 1'b1;
            wenWay2 = 1'b0;
        end
        else begin
            wenWay1 = 1'b0;
            wenWay2 = 1'b1;
        end
    end
    else if(compareEn && cacheHit && reqLatch[32]) begin
        if(way1Hit) begin
            wenWay1 = 1'b1;
            wenWay2 = 1'b0;
        end
        else begin
            wenWay1 = 1'b0;
            wenWay2 = 1'b1;
        end
    end
    else begin
        wenWay2 = 1'b0;
        wenWay1 = 1'b0;
    end
end


//写控制逻辑
//1、写命中；2、写miss但不dirty；3、写miss且dirty
//待添加快速写入（在读回数据时写入），非阻塞模式

//在compare阶段锁存要写入的数据、mask
reg [63:0]  wrDataLatch;
reg [7:0]   wrSizeLatch;
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        wrDataLatch <= 'b0;
        wrSizeLatch <= 'b0;
    end
    else if(compareEn && reqLatch[32]) begin
        wrDataLatch <= wr_data_i;
        wrSizeLatch <= wr_mask_i;
    end
end

reg [63:0]   dirtyArray1;
reg [63:0]   dirtyArray2;
//写Miss逻辑

//写入：
wire        wrLow,wrHigh;
assign  wrLow  = reqLatch[32] & ~reqLatch[4];
assign  wrHigh = reqLatch[32] &  reqLatch[4];
wire [63:0]    storeData;
//注意看赋值，目前还是阻塞模式
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
assign storeData = wr_data_i << {reqLatch[2:0],3'b0};

wire  [63:0]  sramMask;
assign sramMask[7:0]    = {8{wr_mask_i[0]}};
assign sramMask[15:8]   = {8{wr_mask_i[1]}};
assign sramMask[23:16]    = {8{wr_mask_i[2]}};
assign sramMask[31:24]    = {8{wr_mask_i[3]}};
assign sramMask[39:32]    = {8{wr_mask_i[4]}};
assign sramMask[47:40]    = {8{wr_mask_i[5]}};
assign sramMask[55:48]    = {8{wr_mask_i[6]}};
assign sramMask[63:56]    = {8{wr_mask_i[7]}};

//由于流水线字长为64,而一块sram是128,所以还要选择高低位

assign inDataWay1_1 = reqLatch[32] ? (reqLatch[3] ? {storeData,64'b0} : {64'b0,storeData}) : rdBuffer[127:0];
assign inDataWay1_2 = reqLatch[32] ? (reqLatch[3] ? {storeData,64'b0} : {64'b0,storeData}) : rdBuffer[255:128];
assign inDataWay2_1 = reqLatch[32] ? (reqLatch[3] ? {storeData,64'b0} : {64'b0,storeData}) : rdBuffer[127:0];
assign inDataWay2_2 = reqLatch[32] ? (reqLatch[3] ? {storeData,64'b0} : {64'b0,storeData}) : rdBuffer[255:128];

wire    [127:0]     maskWay1_1,maskWay1_2,maskWay2_1,maskWay2_2;
assign maskWay1_1 = reqLatch[32] ? (wrLow  ? (reqLatch[3] ? {sramMask,64'b0} : {64'b0,sramMask}) : 'b0) : 'b1;
assign maskWay1_2 = reqLatch[32] ? (wrHigh ? (reqLatch[3] ? {sramMask,64'b0} : {64'b0,sramMask}) : 'b0) : 'b1;
assign maskWay2_1 = reqLatch[32] ? (wrLow ? (reqLatch[3] ? {sramMask,64'b0} : {64'b0,sramMask}) : 'b0) : 'b1;
assign maskWay2_2 = reqLatch[32] ? (wrHigh ? (reqLatch[3] ? {sramMask,64'b0} : {64'b0,sramMask}) : 'b0) : 'b1;


always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        dirtyArray1 <= 'b0;
        dirtyArray2 <= 'b0;
    end
    else if(compareEn && cacheHit && reqLatch[32]) begin
        if(way1Hit) begin
            dirtyArray1[index] <= 1'b1;
        end
        else begin
            dirtyArray2[index] <= 1'b1;
        end
    end
    else if(getdataEn && rdLast_i) begin
        if(way1Hit) begin
            dirtyArray1[index] <= 1'b0;
        end
        else begin
            dirtyArray2[index] <= 1'b0;
        end
    end
end

wire        wrMiss;
assign wrMiss = compareEn && reqLatch[32] && ~cacheHit;

//TODO
reg [31:0] randomBit2 ;
always randomBit2 = $random;
reg replaceWay;//0就是way1,1就是way2
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        replaceWay <= 'b0;
    end
    else if(compareEn)begin
        replaceWay <= randomBit2[0];
    end
end
wire        needWrBk;
assign needWrBk = wrMiss && (dirtyArray1[randomBit2] || dirtyArray2[randomBit2]);
reg     needWrBk_Reg;
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        needWrBk_Reg <= 'b0;
    end
    else if(compareEn) begin
        needWrBk_Reg <= needWrBk;
    end
    if(axiWrReady && needWrBk_Reg) begin
        needWrBk_Reg <= 'b0;
    end
end

wire            uncache = 0;                //TODO

assign cacheWrValid_o = needWrBk_Reg;
wire    [31:0]  addrToWrite;

assign addrToWrite = replaceWay ? {tagArray2[index],index,5'b0} : {tagArray1[index],index,5'b0};
assign cacheWrAddr_o = addrToWrite;

assign cacheWrData_o = replaceWay ? way1Data : way2Data;
assign storeLenth = uncache ? 'd1 : 'd4;

// always @(posedge clk or negedge rst_n) begin
    
// end


//片选信号仅在idle且读有效、compare且命中且读有效、写使能有效这三种情况拉高
//关于地址信号：在需要写入数据时，无论如何都要使用latch住的地址，在读的时候若stall了也要使用latch的，而在正常执行的时候要使用cache模块输入的地址
S011HD1P_X32Y2D128_BW iramWay1_1 (
  .Q (dataWay1_1 ),
  .CLK (clk ),
  .CEN (~((idleEn && valid_i) || (compareEn) || wenWay1) ),
  .WEN (~wenWay1 ),
  .BWEN (~maskWay1_1 ),
  .A (wenWay1 ? index : stall_n ? addr_i[10:5] : index ),
  .D  (inDataWay1_1)
);

S011HD1P_X32Y2D128_BW iramWay1_2 (
  .Q (dataWay1_2 ),
  .CLK (clk ),
  .CEN (~((idleEn && valid_i) || (compareEn) || wenWay1) ),
  .WEN (~wenWay1 ),
  .BWEN (~maskWay1_2 ),
  .A (wenWay1 ? index : stall_n ? addr_i[10:5] : index ),
  .D  ( inDataWay1_2)
);

S011HD1P_X32Y2D128_BW iramWay2_1 (
  .Q (dataWay2_1 ),
  .CLK (clk ),
  .CEN (~((idleEn && valid_i) || (compareEn) || wenWay2) ),
  .WEN (~wenWay2 ),
  .BWEN (~maskWay2_1 ),
  .A (wenWay2 ? index : stall_n ? addr_i[10:5] : index ),
  .D  ( inDataWay2_1)
);

S011HD1P_X32Y2D128_BW iramWay2_2 (
  .Q (dataWay2_2 ),
  .CLK (clk ),
  .CEN (~((idleEn && valid_i) || (compareEn) || wenWay2) ),
  .WEN (~wenWay2 ),
  .BWEN (~maskWay2_2 ),
  .A (wenWay2 ? index : stall_n ? addr_i[10:5] : index ),
  .D  ( inDataWay2_2)
);



endmodule
