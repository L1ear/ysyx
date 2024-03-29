`include "defines.v"
module ALU(
    input                       clk,rst_n,
    input       [4:0]           ALUctr,
    input       [`XLEN-1:0]     src1,
    input       [`XLEN-1:0]     src2,
    input                       DivEn,
    input       [2:0]           DivSel,
    input                       flush_alu,

    output      [`XLEN-1:0]     ALUres,
    output  reg                 less,
    output                      zero,
    output                      aluNotOk
);

/*
ALUctr[3]|[2:0]
       0 | 000:   add
       1 | 000；  sub
       x | 001:   leftshift
       0 | 010:   slt, with signed-less
       1 | 010：  slt, with unsigned-less
       x | 011:   output src2
       x | 100:   xor
       0 | 101:   rsl
       1 | 101:   rsa
       x | 110:   or
       x | 111:   and
*/

reg [`XLEN-1:0]     ALUout;
wire                    cin;
wire    [`XLEN-1:0]     src2_cin = src2 ^ {`XLEN{cin}};
wire    [`XLEN-1:0]     Adder_o;
wire                    u_s_mux;
wire                    sft_a_l;
wire                    sft_l_r;
wire    [2:0]           out_mux;
wire    [`XLEN-1:0]     shift;   

wire                    carry,overflow;
wire    [`XLEN-1:0]     XOR = src1 ^ src2;
wire    [`XLEN-1:0]     OR  = src1 | src2;
wire    [`XLEN-1:0]     AND = src1 & src2;
// wire            shift_l = src1 << src2[4:0];                //注意修改
// wire            shift_r = (sft_a_l)? src1 >>> src2[4:0]:src1 >> src2[4:0];

Adder   Adder_main(
    .src1(src1),
    .src2(src2_cin),
    .cin(cin),
    .Adder_o(Adder_o),
    .carry(carry),
    .zero(zero),
    .overflow(overflow)
);

control ALU_Control(
    .ALUctr(ALUctr[3:0]),
    .out_mux(out_mux),
    .sft_a_l(sft_a_l),
    .sft_l_r(sft_l_r),
    .add_sub(cin),
    .u_s(u_s_mux)
);

shifter64 shifter(
    .ALUctr(ALUctr[4]),
    .src1(src1),    
    .src2(src2[5:0]),    
    .sft_l_r(sft_l_r),
    .sft_a_l(sft_a_l), 
    .shift(shift)  
);
//lock src1&ssrc2 
reg [63:0]  src1Reg,src2Reg;
wire        diffIn;
assign diffIn = ~(src1Reg == src1) || ~(src2Reg == src2);
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        src1Reg <= 'b0;
        src2Reg <= 'b0;
    end
    else if(DivEn && diffIn) begin
        src1Reg <= src1;
        src2Reg <= src2;
    end
end
wire mul_valid;
assign mul_valid = diffIn && DivEn && ~DivSel[2];  //with diffIn, valid will only last for 1 cycle
wire mul_resValid;
mul_top Multiplier (
  .clk          (clk ),
  .rst_n        (rst_n ),
  .mul_valid    (mul_valid ),
  .flush        (flush_alu ),
  .mul_type     (DivSel[1:0] ),
  .multiplicand (src1 ),
  .multiplier   (src2 ),
  .out_valid    (mul_resValid ),
  .result       (mulOut )
);


assign aluNotOk = DivEn && ~mul_resValid || DivEn && ~div_resValid;

wire    [`XLEN-1:0]     DivOut;
wire    [`XLEN-1:0]     mulOut;
wire    [`XLEN-1:0]     divOut;
wire div_valid;
assign div_valid = diffIn && DivEn && DivSel[2];  //with diffIn, valid will only last for 1 cycle
wire div_resValid;

divTop divider(
  .clk (clk ),
  .rst_n (rst_n ),
  .dividend (ALUctr[4]? {{32{1'b0}},src1[31:0]} : src1 ),
  .divisor (ALUctr[4]? {{32{1'b0}},src2[31:0]} : src2 ),
  .div_valid (div_valid ),
  .div_type (DivSel[1:0] ),
  .flush (flush_alu ),
  .out_valid (div_resValid ),
  .result (divOut )
);

assign DivOut = DivSel[2] ? divOut : mulOut;


//Less
// assign less = (u_s_mux)? carry^cin : ALUout[`XLEN-1]^overflow;
always @(*) begin
    if(u_s_mux) begin
        less = carry^cin;
    end
    else begin
        less = Adder_o[`XLEN-1]^overflow;
    end
end

//out_mux
always @(*) begin
    if (DivEn) begin
        ALUout = DivOut;
    end
    else
        case(out_mux)
            3'h0: begin
                ALUout = Adder_o;
            end
            3'h1,3'h5: begin
                ALUout = shift;
            end
            3'h2: begin
                ALUout = {63'b0,less};    //零扩展
            end
            3'h3: begin
                ALUout = src2;
            end
            3'h4: begin
                ALUout = XOR;
            end
            3'h6: begin
                ALUout = OR;
            end
            3'h7: begin
                ALUout = AND;
            end
        endcase
end
assign ALUres = ALUctr[4] ? {{32{ALUout[31]}}, ALUout[31:0]} : ALUout;

endmodule


//Adder
module Adder(
    input       [`XLEN-1:0]     src1,
    input       [`XLEN-1:0]     src2,
    input                       cin,
    output  reg [`XLEN-1:0]     Adder_o,
    output  reg                 carry,
    output  reg                 zero,
    output  reg                 overflow
);
always @(*) begin
    {carry,Adder_o} = src1 + src2 +{63'b000,cin};
    overflow = (src1[`XLEN-1] == src2[`XLEN-1]) && (Adder_o[`XLEN-1] != src1[`XLEN-1]);
    zero = ~(|Adder_o);
end

endmodule

//ALUcontrol
module control(
    input  [3:0]    ALUctr,
    output [2:0]    out_mux,
    output          sft_a_l,
    output          sft_l_r,
    output          add_sub,
    output          u_s
);
assign out_mux = ALUctr[2:0];
// always @(*) begin
//     case(ALUctr[2:0])
//         3'b000: begin
//             add_sub = ALUctr[3];           //1-sub; 0-add
//         end
//         3'b010: begin
//             add_sub = 1;
//             u_s = ALUctr[3];               //1-unsigned;0-signed
//         end
//         3'b001: begin
//             sft_l_r = 0;                   //0-left;1-right
//         end
//         3'b101: begin
//             sft_l_r = 1;
//             sft_a_l = ALUctr[3];           //0-logic;1-arith
//         end
//     endcase
// end
//上下等效(大概?)
assign add_sub = ALUctr[1] | ALUctr[3];
assign u_s = ALUctr[3];
assign sft_l_r = ALUctr[2];
assign sft_a_l = ALUctr[3];
endmodule


module shifter64(
    input                   ALUctr, //[4]
    input [`XLEN-1:0]       src1,     
    input [5:0]             src2,      
    input                   sft_l_r,
    input                   sft_a_l,  
    output     [`XLEN-1:0]  shift  
);

wire    [`XLEN-1:0]         shft_src;
wire    [`XLEN-1:0]         shft_res;
wire    [`XLEN-1:0]         sr_mask;
wire    [`XLEN-1:0]         sr_mask_n;
wire    [`XLEN-1:0]         srl_res;
wire    [`XLEN-1:0]         sra_res;
wire    [`XLEN-1:0]         sll_res;
wire    [5:0]               shft_src2;
wire    [`XLEN-1:0]         shft_src1;
assign shft_src2 = ALUctr ? {1'b0,src2[4:0]} : src2;
assign shft_src1 = ALUctr ? {32'b0,src1[31:0]} : src1;
assign shft_src = sft_l_r ? ALUctr ? {32'b0,src1[31:0]} : src1 :
                            {
                             shft_src1[ 0], shft_src1[ 1], shft_src1[ 2], shft_src1[ 3], shft_src1[ 4], shft_src1[ 5], shft_src1[ 6], shft_src1[ 7], 
                             shft_src1[ 8], shft_src1[ 9], shft_src1[10], shft_src1[11], shft_src1[12], shft_src1[13], shft_src1[14], shft_src1[15],
                             shft_src1[16], shft_src1[17], shft_src1[18], shft_src1[19], shft_src1[20], shft_src1[21], shft_src1[22], shft_src1[23],
                             shft_src1[24], shft_src1[25], shft_src1[26], shft_src1[27], shft_src1[28], shft_src1[29], shft_src1[30], shft_src1[31],
                             shft_src1[32], shft_src1[33], shft_src1[34], shft_src1[35], shft_src1[36], shft_src1[37], shft_src1[38], shft_src1[39],
                             shft_src1[40], shft_src1[41], shft_src1[42], shft_src1[43], shft_src1[44], shft_src1[45], shft_src1[46], shft_src1[47],
                             shft_src1[48], shft_src1[49], shft_src1[50], shft_src1[51], shft_src1[52], shft_src1[53], shft_src1[54], shft_src1[55],
                             shft_src1[56], shft_src1[57], shft_src1[58], shft_src1[59], shft_src1[60], shft_src1[61], shft_src1[62], shft_src1[63]
                            };
assign shft_res  = shft_src >> shft_src2;
assign sr_mask   = (`XLEN'hffff_ffff_ffff_ffff >> shft_src2[5:0]);
assign sr_mask_n = ~sr_mask;
assign srl_res   = ALUctr ? shft_res & {32'b0, sr_mask[63:32]} :                                                              //32位
                          shft_res;                                                                                         //64位
//                                    31位为高则置位                        否则清零（因为符号扩展嘛）                                    
assign sra_res   = ALUctr ? src1[31] ? shft_res | {32'b1, sr_mask_n[63:32]} : shft_res & {32'b0, sr_mask[63:32]}        //32位操作
                          : shft_res | {{64{src1[63]}} & sr_mask_n};                                                           //64位操作
assign sll_res   = {
                    shft_res[ 0], shft_res[ 1], shft_res[ 2], shft_res[ 3], shft_res[ 4], shft_res[ 5], shft_res[ 6], shft_res[ 7], 
                    shft_res[ 8], shft_res[ 9], shft_res[10], shft_res[11], shft_res[12], shft_res[13], shft_res[14], shft_res[15],
                    shft_res[16], shft_res[17], shft_res[18], shft_res[19], shft_res[20], shft_res[21], shft_res[22], shft_res[23],
                    shft_res[24], shft_res[25], shft_res[26], shft_res[27], shft_res[28], shft_res[29], shft_res[30], shft_res[31],
                    shft_res[32], shft_res[33], shft_res[34], shft_res[35], shft_res[36], shft_res[37], shft_res[38], shft_res[39],
                    shft_res[40], shft_res[41], shft_res[42], shft_res[43], shft_res[44], shft_res[45], shft_res[46], shft_res[47],
                    shft_res[48], shft_res[49], shft_res[50], shft_res[51], shft_res[52], shft_res[53], shft_res[54], shft_res[55],
                    shft_res[56], shft_res[57], shft_res[58], shft_res[59], shft_res[60], shft_res[61], shft_res[62], shft_res[63]
                   };
assign shift = sft_l_r ?  sft_a_l ? sra_res : srl_res
                        : sll_res;
endmodule


//暂未作除零及溢出的处理
module DIVIDER (
    input       [`XLEN-1:0]     src1,src2,
    input       [2:0]           DivSel,
    output  reg [`XLEN-1:0]     DivOut
);
always @(*) begin
    case (DivSel)
        `DivMul: begin
                DivOut = (src1 * src2);
        end
        `DivMulh: begin
            DivOut = ($signed(src1) * $signed(src2))>>64;
        end
        `DivMulhsu: begin
            DivOut = ($signed(src1) * $unsigned(src2))>>64;
        end
        `DivMulhu: begin
            DivOut = ($unsigned(src1) * $unsigned(src2))>>64;
        end
        `DivDiv: begin
                DivOut = $signed(src1) / $signed(src2);
        end
        `DivRem: begin
                DivOut = $signed(src1) % $signed(src2);
        end
        `DivDivu: begin
                DivOut = $unsigned(src1) / $unsigned(src2);
        end
        `DivRemu: begin
            DivOut = $unsigned(src1) % $unsigned(src2);
        end
        default: begin
            DivOut = `XLEN'b0;
        end
    endcase
end
endmodule //DIVIDER

