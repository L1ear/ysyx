`include "defines.v"
// //fw_src_sel
// `define     rf          2'b0
// `define     ex          2'd1
// `define     ls          2'd2
// `define     wb          2'd3
module ex_stage (
    // input                           mem_wren_ex_i,
    // input                           mem_lden_ex_i,
    // input           [2      :0]     mem_op_ex_i,
    input           [4      :0]     aluctr,
    // input           [`XLEN-1:0]     src1,
    // input           [`XLEN-1:0]     src2,
    input           [`XLEN-1:0]     rs1_ex_i,rs2_ex_i,imm_ex_i,
    input           [`XLEN-1:0]     pc_ex_i,
    input           [`inst_len-1:0] instr_ex_i,
    input                           is_jalr_ex_i,is_jal_ex_i,is_brc_ex_i,
    input                           src1sel_ex_i,
    input           [1      :0]     src2sel_ex_i,
    input           [1      :0]     rs1_sel_i,rs2_sel_i,
    input           [`XLEN-1:0]     alures_fw_i,lsres_fw_i,wbres_fw_i,
    input                           DivEn_i,
    input       [2:0]               DivSel_i,

    // output          [`XLEN-1:0]     PC_ex_o,instr_ex_o,rs2_ex_o,
    output          [`XLEN-1:0]     alures_o,
    output          [`XLEN-1:0]     pc_next_o,
    output          [`XLEN-1:0]     rs2_o,
    output                          is_jump_o
    // output                          mem_wren_ex_o,
    // output                          mem_lden_ex_o,
    // output          [2      :0]     mem_op_ex_o
);

wire    [`XLEN-1:0]     src1,src2;
reg     [`XLEN-1:0]     rs1,rs2;

always @(*) begin
    case(rs1_sel_i)
        `rf: begin
            rs1 = rs1_ex_i;
        end
        `ex: begin
            rs1 = alures_fw_i;
        end
        `ls: begin
            rs1 = lsres_fw_i;
        end
        `wb: begin
            rs1 = wbres_fw_i;
        end
    endcase
end

always @(*) begin
    case(rs2_sel_i)
        `rf: begin
            rs2 = rs2_ex_i;
        end
        `ex: begin
            rs2 = alures_fw_i;
        end
        `ls: begin
            rs2 = lsres_fw_i;
        end
        `wb: begin
            rs2 = wbres_fw_i;
        end
    endcase
end
assign rs2_o = rs2;

assign src1 = src1sel_ex_i ? pc_ex_i : rs1;
assign src2 = src2sel_ex_i[1] ? `XLEN'd4 :
                                src2sel_ex_i[0] ? imm_ex_i : rs2;


ALU  u_ALU (
    .ALUctr                  ( aluctr   ),
    .src1                    ( src1     ),
    .src2                    ( src2     ),
    .DivEn                   ( DivEn_i   ),
    .DivSel                  ( DivSel_i ),

    .ALUres                  ( alures_o ),
    .less                    (          ),
    .zero                    (          )
);

bcu bcu_u(
    .rs1_i(rs1),
    .rs2_i(rs2),
    .is_jalr_i(is_jalr_ex_i),
    .is_jal_i(is_jal_ex_i),
    .is_brc_i(is_brc_ex_i),
    .fun_3(instr_ex_i[14:12]),
    .imm_i(imm_ex_i),
    .pc_i(pc_ex_i),
    .brc_pc_o(pc_next_o),
    .is_jump_o(is_jump_o)
);

// assign PC_ex_o = PC_ex_i;
// assign instr_ex_o = instr_ex_i;
// assign rs2_ex_o = rs2_ex_i;
// assign mem_wren_ex_o = mem_wren_ex_i;
// assign mem_lden_ex_o = mem_lden_ex_i;
// assign mem_op_ex_o = mem_op_ex_i;

endmodule