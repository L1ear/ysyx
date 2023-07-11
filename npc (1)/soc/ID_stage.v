
module ID_stage (
    input                           clk,rst_n,
    // input           [`XLEN-1:0]     pc_i,
    input           [`inst_len-1:0] instr_i,

    input           [`XLEN-1:0]     wb_data_i,
    input           [4      :0]     wb_rdid_i,
    input                           wb_wren_i,                

    output          [`XLEN-1:0]     rs1_o,rs2_o,imm_o,
    // output          [`XLEN-1:0]     src1_o,src2_o,
    output                          src1sel,
    output          [1      :0]     src2sel,
    output          [4      :0]     aluctr_o,
    output                          is_jalr_id_o,is_jal_id_o,is_brc_id_o,
    output                          wben_id_o,
    output          [4      :0]     rs1_idx,rs2_idx,

    output                          DivEn,
    output          [2:0]           DivSel    ,
    output                          trap_id_o,in_trap_id,out_trap_id,
    output                          fence_id
    // output          [`XLEN-1:0]     pc_next_o,
    // output                          is_jump_o
);

wire    [4      :0]     ext_op;
wire    [`XLEN-1:0]     imm;
wire    [`XLEN-1:0]     rs1,rs2;


assign rs2_o = rs2;
assign rs1_o = rs1;
assign imm_o = imm;

decoder decoder_u(
    // .pc_i(pc_i),
    .instr_i(instr_i),
    .ext_op_o(ext_op),
    .src1sel_o(src1sel),
    .src2sel_o(src2sel),
    .aluctr_o(aluctr_o),
    .is_jalr_o(is_jalr_id_o),
    .is_jal_o(is_jal_id_o),
    .is_brc_o(is_brc_id_o),
    .wb_en_o(wben_id_o),
    .rs1_idx_o(rs1_idx),
    .rs2_idx_o(rs2_idx),
    .DivEn(DivEn),
    .DivSel(DivSel),
    .trap_id_o(trap_id_o),
    .in_trap_id(in_trap_id),
    .out_trap_id(out_trap_id),
    .fence_id(fence_id)
);
imm_ext imm_ext_u(
    .instr_imm_i(instr_i[31:7]),
    .ext_op_i(ext_op),
    .imm_o(imm)
);
regfile regfile_u(
    .clk(clk),
    .rst_n(rst_n),
    .rs1_addr_i(rs1_idx),
    .rs1_data_o(rs1),
    .rs2_addr_i(rs2_idx),
    .rs2_data_o(rs2),
    .wr_addr_i(wb_rdid_i),
    .wr_data_i(wb_data_i),
    .wr_en(wb_wren_i)
);

endmodule



