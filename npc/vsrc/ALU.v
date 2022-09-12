`include "defines.v"
module ALU(
    input       [4:0]           ALUctr,
    input       [`XLEN-1:0]     src1,
    input       [`XLEN-1:0]     src2,
    input                       DivEn,
    input       [2:0]           DivSel,

    output      [`XLEN-1:0]     ALUres,
    output  reg                 less,
    output                      zero
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

wire    [`XLEN-1:0]     DivOut;
DIVIDER  divider(
    .src1(src1),
    .src2(src2),
    .DivSel(DivSel),
    .DivOut(DivOut)
);

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

assign shft_src = sft_l_r ? src1 :
                            {
                             src1[ 0], src1[ 1], src1[ 2], src1[ 3], src1[ 4], src1[ 5], src1[ 6], src1[ 7], 
                             src1[ 8], src1[ 9], src1[10], src1[11], src1[12], src1[13], src1[14], src1[15],
                             src1[16], src1[17], src1[18], src1[19], src1[20], src1[21], src1[22], src1[23],
                             src1[24], src1[25], src1[26], src1[27], src1[28], src1[29], src1[30], src1[31],
                             src1[32], src1[33], src1[34], src1[35], src1[36], src1[37], src1[38], src1[39],
                             src1[40], src1[41], src1[42], src1[43], src1[44], src1[45], src1[46], src1[47],
                             src1[48], src1[49], src1[50], src1[51], src1[52], src1[53], src1[54], src1[55],
                             src1[56], src1[57], src1[58], src1[59], src1[60], src1[61], src1[62], src1[63]
                            };
assign shft_res  = shft_src >> src2;
assign sr_mask   = (`XLEN'hffff_ffff_ffff_ffff >> src2[5:0]);
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
        // `DivMul: begin
        //         DivOut = (src1 * src2);
        // end
        // `DivMulh: begin
        //     DivOut = $signed(src1) * $signed(src2);
        // end
        // `DivMulhsu: begin
        //     DivOut = $signed(src1) * $unsigned(src2);
        // end
        // `DivMulhu: begin
        //     DivOut = $unsigned(src1) * $unsigned(src2);
        // end
        // `DivDiv: begin
        //         DivOut = $signed(src1) / $signed(src2);
        // end
        // `DivRem: begin
        //         DivOut = $signed(src1) % $signed(src2);
        // end
        // `DivDivu: begin
        //         DivOut = $unsigned(src1) / $unsigned(src2);
        // end
        // `DivRemu: begin
        //     DivOut = $unsigned(src1) % $unsigned(src2);
        // end
        default: begin
            DivOut = `XLEN'b0;
        end
    endcase
end
endmodule //DIVIDER

