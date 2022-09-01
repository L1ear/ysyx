`include "defines.v"
module ex_stage (
    input           [`XLEN-1:0]     PC_ex_i,instr_ex_i,rs2_ex_i,
    input                           mem_wren_ex_i,
    input                           mem_lden_ex_i,
    input           [2      :0]     mem_op_ex_i,
    input           [4      :0]     aluctr,
    input           [`XLEN-1:0]     src1,
    input           [`XLEN-1:0]     src2,
    
    output          [`XLEN-1:0]     PC_ex_o,instr_ex_o,rs2_ex_o,
    output          [`XLEN-1:0]     alures_o,
    output                          mem_wren_ex_o,
    output                          mem_lden_ex_o,
    output          [2      :0]     mem_op_ex_o
);


ALU  u_ALU (
    .ALUctr                  ( ALUctr   ),
    .src1                    ( src1     ),
    .src2                    ( src2     ),
    .DivEn                   ( 1'b0     ),
    .DivSel                  ( 3'b0     ),

    .ALUres                  ( ALUres_o ),
    .less                    (          ),
    .zero                    (          )
);

assign PC_ex_o = PC_ex_i;
assign instr_ex_o = instr_ex_i;
assign rs2_ex_o = rs2_ex_i;
assign mem_wren_ex_o = mem_wren_ex_i;
assign mem_lden_ex_o = mem_lden_ex_i;
assign mem_op_ex_o = mem_op_ex_i;

endmodule