`include "defines.v"
module ALU(
    input       [3:0]           ALUctr,
    input       [`XLEN-1:0]     src1,
    input       [`XLEN-1:0]     src2,
    input                       DivEn,
    input       [2:0]           DivSel,
    input                       Div32,

    output  reg [`XLEN-1:0]     ALUout,
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
    .ALUctr(ALUctr),
    .out_mux(out_mux),
    .sft_a_l(sft_a_l),
    .sft_l_r(sft_l_r),
    .add_sub(cin),
    .u_s(u_s_mux)
);

barrelshifter64 shifter(
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
    .Div32(Div32),
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


module barrelshifter64(
    input [`XLEN-1:0]       src1,     
    input [5:0]             src2,      
    input                   sft_l_r,
    input                   sft_a_l,  
    output reg [`XLEN-1:0]  shift  
);
reg [`XLEN-1:0]     temp;
always @(*) begin
    if (~sft_l_r) begin
        temp = src2[0] ? {{src1[62:0]}, 1'b0} : src1;
        temp = src2[1] ? {{temp[61:0]}, 2'b0} : temp;
        temp = src2[2] ? {{temp[59:0]}, 4'b0} : temp;
        temp = src2[3] ? {{temp[55:0]}, 8'b0} : temp;
        temp = src2[4] ? {{temp[47:0]}, 16'b0} : temp;
        temp = src2[5] ? {{temp[31:0]}, 32'b0} : temp;
    end
    else begin
        if(sft_a_l) begin
            temp = src2[0] ? {{src1[63]}, src1[63:1]} : src1;
            temp = src2[1] ? {{2{temp[63]}}, temp[63:2]} : temp;
            temp = src2[2] ? {{4{temp[63]}}, temp[63:4]} : temp;
            temp = src2[3] ? {{8{temp[63]}}, temp[63:8]} : temp;
            temp = src2[4] ? {{16{temp[63]}}, temp[63:16]} : temp;
            temp = src2[5] ? {{32{temp[63]}}, temp[63:32]} : temp;          
        end
        else begin
            temp = src2[0] ? {{1'b0}, src1[63:1]} : src1;
            temp = src2[1] ? {{2{1'b0}}, temp[63:2]} : temp;
            temp = src2[2] ? {{4{1'b0}}, temp[63:4]} : temp;
            temp = src2[3] ? {{8{1'b0}}, temp[63:8]} : temp;
            temp = src2[4] ? {{16{1'b0}}, temp[63:16]} : temp;
            temp = src2[5] ? {{32{1'b0}}, temp[63:32]} : temp;    
        end
    end
end

endmodule


//暂未作除零及溢出的处理
module DIVIDER (
    input       [`XLEN-1:0]     src1,src2,
    input       [2:0]           DivSel,
    input                       Div32,
    output  reg [`XLEN-1:0]     DivOut
);
reg [127:0] tmp;
always @(*) begin
    tmp = 128'b0;
    case (DivSel)
        `DivMul: begin
            if (Div32) begin
                tmp[63:0] = src1[31:0] * src2[31:0];
                DivOut = {{32{tmp[31]}},tmp[31:0]};
            end
            else
                DivOut = (src1 * src2);
        end
        `DivMulh: begin
            DivOut = $signed(src1) * $signed(src2);
        end
        `DivMulhsu: begin
            DivOut = $signed(src1) * $unsigned(src2);
        end
        `DivMulhu: begin
            DivOut = $unsigned(src1) * $unsigned(src2);
        end
        `DivDiv: begin
            if(Div32) begin
                tmp[31:0] = $signed(src1[31:0]) / $signed(src2[31:0]);
                DivOut = {{32{tmp[31]}},tmp[31:0]};
            end
            else
                DivOut = $signed(src1) / $signed(src2);
        end
        `DivRem: begin
            if(Div32) begin
                tmp[31:0] = $signed(src1[31:0]) % $signed(src2[31:0]);
                DivOut = {{32{tmp[31]}},tmp[31:0]};
            end
            else
                DivOut = $signed(src1) % $signed(src2);
        end
        `DivDivu: begin
            if(Div32) begin
                tmp[31:0] = $unsigned(src1[31:0]) / $unsigned(src2[31:0]);
                DivOut = {{32{tmp[31]}},tmp[31:0]};
            end
            else
                DivOut = $unsigned(src1) / $unsigned(src2);
        end
        `DivRemu: begin
            if(Div32) begin
                tmp[31:0] = $unsigned(src1[31:0]) % $unsigned(src2[31:0]);
                DivOut = {{32{tmp[31]}},tmp[31:0]};
            end
            else
            DivOut = $unsigned(src1) % $unsigned(src2);
        end
        default: begin
            DivOut = `XLEN'b0;
        end
    endcase
end
endmodule //DIVIDER

