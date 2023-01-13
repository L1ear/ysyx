`include "defines.v"
module cache(
    input                                   clk,rst_n,
//from PIPLINE
    input           [`addr_width-1:0]       addr_i,
    input                                   valid_i,op_i,
    input           [`XLEN-1:0]             wr_data_i,
    input           [7:0]                   wr_mask_i,
    output  reg                             addr_ok_o,
    output                                  data_ok_o,
    output          [`XLEN-1:0]             rd_data_o,


//to AXI
    output                                  cacheRdValid_o,
    input                                   rdLast_i,
    output          [`addr_width-1:0]       cacheAddr_o,
    input           [`XLEN-1:0]             rdData_i
);




localparam  idle    = 3'b000,
            compare = 3'b001,
            miss    = 3'b010,
            getdata = 3'b011;

reg     [2:0]   cacheCurState,cacheNexState;
wire            cacheHit;
wire            way1Hit,way2Hit;
wire    [127:0] dataWay1_1,dataWay1_2,dataWay2_1,dataWay2_2;
reg    [127:0] inDataWay1_1,inDataWay1_2,inDataWay2_1,inDataWay2_2;
reg            wenWay1_1,wenWay1_2,wenWay2_1,wenWay2_2;

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
            //TODO
            cacheNexState = getdata;
        end
        getdata: begin
            //TODO
            cacheNexState = idle;       //有问题，要该（validbit的问题）
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
    else if((idleEn && valid_i) || (compareEn && valid_i && cacheHit)) begin
        reqLatch <= {op_i,addr_i};
        addr_ok_o <= 1'b1;
    end
    else begin
        addr_ok_o <= 1'b0;
    end
end

       

reg [63:0]   validArray1;
reg [63:0]   validArray2;    //共2way，每way有64行，每行256bit，用两个sram拼接，每两个sram共用一个validbit
reg        bitValid1,bitValid2;
reg        bitValid1_d,bitValid2_d;
//TODO
always @(posedge clk or negedge rst_n) begin
    if(getdataEn) begin
        validArray1[index] <= bitValid1_d;
        validArray2[index] <= bitValid2_d;
    end
end
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        bitValid1 <= 'b0;
        bitValid2 <= 'b0;
    end
    else if((idleEn && valid_i) || (compareEn && valid_i && cacheHit)) begin
        bitValid1 <= validArray1[addr_i[10:5]];
        bitValid2 <= validArray2[addr_i[10:5]];
    end
end

reg [20:0]  tagArray1[0:63];
reg [20:0]  tagArray2[0:63];
reg [20:0]  tagArray1_d,tagArray2_d;

reg [20:0] tagWay1_q,tagWay2_q;
reg        validWay1_q,validWay2_q;

always @(posedge clk or negedge rst_n) begin
    if(getdataEn) begin
        tagArray1[index] <= tagArray1_d;
        tagArray2[index] <= tagArray2_d;
    end
end
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        tagWay1_q <= 'b0;
        tagWay2_q <= 'b0;
        validWay1_q <= 'b0;
        validWay2_q <= 'b0;
    end
    else if((idleEn && valid_i) || (compareEn && valid_i && cacheHit)) begin
        tagWay1_q <= tagArray1[addr_i[10:5]];
        tagWay2_q <= tagArray2[addr_i[10:5]];
        validWay1_q <= validArray1[addr_i[10:5]];
        validWay2_q <= validArray2[addr_i[10:5]];
    end
end

assign  way1Hit = (~(|(tagWay1_q ^ tag)) && bitValid1) ? 'b1 : 'b0;
assign  way2Hit = (~(|(tagWay2_q ^ tag)) && bitValid2) ? 'b1 : 'b0;
assign  cacheHit = way1Hit || way2Hit;


wire    compareEn = cacheCurState == compare;

wire [255:0]    way1Data = {dataWay1_2,dataWay1_1};
wire [255:0]    way2Data = {dataWay2_2,dataWay2_1};
reg [`XLEN-1:0] rdDataRegWay1,rdDataRegWay2;
always @(*) begin
    if((idleEn && valid_i) || (compareEn && valid_i && cacheHit)) begin
            case(offset[4:3])
                2'b00: rdDataRegWay1 = way1Data[63:0];
                2'b01: rdDataRegWay1 = way1Data[127:64];
                2'b10: rdDataRegWay1 = way1Data[191:128];
                2'b11: rdDataRegWay1 = way1Data[255:192];
            endcase
            case(offset[4:3])
                2'b00: rdDataRegWay2 = way2Data[63:0];
                2'b01: rdDataRegWay2 = way2Data[127:64];
                2'b10: rdDataRegWay2 = way2Data[191:128];
                2'b11: rdDataRegWay2 = way2Data[255:192];
            endcase
    end
    else begin
        rdDataRegWay1 = 'b0;
        rdDataRegWay2 = 'b0;
    end
end

assign rd_data_o = ({64{way1Hit}}&rdDataRegWay1)
                 | ({64{way2Hit}}&rdDataRegWay2);


wire    getdataEn = cacheCurState == getdata;
wire [63:0] addrToRead = {32'b0,tag,11'b0};
reg [31:0] randomBit;
always @(*) begin
    randomBit = $random;
    if(getdataEn) begin
        //TODO 真‘伪随机
        
        if(randomBit[0]) begin
            axiSlaveRead(addrToRead, 3, inDataWay1_1[63:0]);
            axiSlaveRead(addrToRead+8, 3, inDataWay1_1[127:64]);
            axiSlaveRead(addrToRead+16, 3, inDataWay1_2[63:0]);
            axiSlaveRead(addrToRead+24, 3, inDataWay1_2[127:64]);
            inDataWay2_1 = {$random,$random,$random,$random};
            inDataWay2_2 = {$random,$random,$random,$random};
            wenWay1_1 = 1'b1;
            wenWay1_2 = 1'b1;
            wenWay2_1 = 1'b0;
            wenWay2_2 = 1'b0;
            bitValid1_d = 1'b1;
            bitValid2_d = 1'b0;
            tagArray1_d = tag;
            tagArray2_d = 'b0;
        end
        else begin
            axiSlaveRead(addrToRead, 3, inDataWay2_1[63:0]);
            axiSlaveRead(addrToRead+8, 3, inDataWay2_1[127:64]);
            axiSlaveRead(addrToRead+16, 3, inDataWay2_2[63:0]);
            axiSlaveRead(addrToRead+24, 3, inDataWay2_2[127:64]);
            inDataWay1_1 = {$random,$random,$random,$random};
            inDataWay1_2 = {$random,$random,$random,$random};
            wenWay2_1 = 1'b1;
            wenWay2_2 = 1'b1;
            wenWay1_1 = 1'b0;
            wenWay1_2 = 1'b0;
            bitValid1_d = 1'b0;
            bitValid2_d = 1'b1;
            tagArray1_d = 'b0;
            tagArray2_d = tag;
        end
    end
    else begin
        inDataWay1_1 = {$random,$random,$random,$random};
        inDataWay1_2 = {$random,$random,$random,$random};
        inDataWay2_1 = {$random,$random,$random,$random};
        inDataWay2_2 = {$random,$random,$random,$random};
        wenWay1_1 = 1'b0;
        wenWay1_2 = 1'b0;
        wenWay2_1 = 1'b0;
        wenWay2_2 = 1'b0;
        bitValid1_d = 1'b0;
        bitValid2_d = 1'b0;
        tagArray1_d = 'b0;
        tagArray2_d = 'b0;
    end
end



S011HD1P_X32Y2D128_BW iramWay1_1 (
  .Q (dataWay1_1 ),
  .CLK (clk ),
  .CEN (~((idleEn && valid_i) || (compareEn && valid_i && cacheHit) || wenWay1_1) ),
  .WEN (~wenWay1_1 ),
  .BWEN (0 ),
  .A (index ),
  .D  (inDataWay1_1)
);

S011HD1P_X32Y2D128_BW iramWay1_2 (
  .Q (dataWay1_2 ),
  .CLK (clk ),
  .CEN (~((idleEn && valid_i) || (compareEn && valid_i && cacheHit) || wenWay1_2) ),
  .WEN (~wenWay1_2 ),
  .BWEN (0 ),
  .A (index ),
  .D  ( inDataWay1_2)
);

S011HD1P_X32Y2D128_BW iramWay2_1 (
  .Q (dataWay2_1 ),
  .CLK (clk ),
  .CEN (~((idleEn && valid_i) || (compareEn && valid_i && cacheHit) || wenWay2_1) ),
  .WEN (~wenWay2_1 ),
  .BWEN (0 ),
  .A (index ),
  .D  ( inDataWay2_1)
);

S011HD1P_X32Y2D128_BW iramWay2_2 (
  .Q (dataWay2_2 ),
  .CLK (clk ),
  .CEN (~((idleEn && valid_i) || (compareEn && valid_i && cacheHit) || wenWay2_2) ),
  .WEN (~wenWay2_2 ),
  .BWEN (0 ),
  .A (index ),
  .D  ( inDataWay2_2)
);
// reg     [`XLEN-1:0]     data_1[0:255];
// reg     [`XLEN-1:0]     data_2[0:255];
// reg     [54     :0]     tagvd_1[0:255];
// reg     [54     :0]     tagvd_2[0:255];

// wire    index = addr[10:3];
// wire    tag = addr[63:11];
// wire    tag_1 = tagvd_1[index][52:0];
// wire    tag_2 = tagvd_2[index][52:0];

// wire    hit_1 = (tag == tag_1) && tagvd_1[addr[10:3]][53];
// wire    hit_2 = (tag == tag_2) && tagvd_2[addr[10:3]][53];
// assign  valid = hit_1 || hit_2;

// assign  data_o = ({64{hit_1}} && data_1[index]) ||
//                  ({64{hit_2}} && data_2[index]);
// // always@()begin

// // end


endmodule
