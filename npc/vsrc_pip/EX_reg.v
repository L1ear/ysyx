`include "defines.v"
module EX_reg (
    input                           clk,rst_n,
    input           [`XLEN-1:0]     pc_ex_reg_i,
    input           [`inst_len-1:0]     instr_ex_reg_i,
    input           [`XLEN-1:0]     imm_ex_reg_i,
    input           [`XLEN-1:0]     rs2_ex_reg_i,rs1_ex_reg_i,
    input           [4      :0]     aluctr_ex_reg_i,
    input                           is_jalr_ex_reg_i,is_jal_ex_reg_i,is_brc_ex_reg_i,
    input                           src1sel_ex_reg_i,
    input           [1      :0]     src2sel_ex_reg_i,
    input                           wben_ex_reg_i,
    input           [4      :0]     rs1_idx_ex_reg_i,rs2_idx_ex_reg_i,
    input                           stall_n,flush,
    input                           DivEn_ex_reg_i,
    input           [2      :0]     DivSel_ex_reg_i,
    input                           trap_ex_reg_i,

    output   reg    [`XLEN-1:0]     pc_ex_reg_o,
    output   reg    [`inst_len-1:0]     instr_ex_reg_o,
    // output   reg    [`XLEN-1:0]     src1_ex_reg_o,src2_ex_reg_o,
    output   reg    [`XLEN-1:0]     rs2_ex_reg_o,rs1_ex_reg_o,imm_ex_reg_o,
    output   reg    [4      :0]     aluctr_ex_reg_o,
    output   reg                    is_jalr_ex_reg_o,is_jal_ex_reg_o,is_brc_ex_reg_o,
    output   reg                    src1sel_ex_reg_o,
    output   reg     [1      :0]    src2sel_ex_reg_o,
    output   reg                    wben_ex_reg_o,
    output   reg    [4      :0]     rs1_idx_ex_reg_o,rs2_idx_ex_reg_o,
    output   reg                    DivEn_ex_reg_o,
    output   reg    [2      :0]     DivSel_ex_reg_o,
    output   reg                    trap_ex_reg_o
);

//只对关键控制信号清零
wire    [`XLEN-1:0]         pc_ex_reg;
wire    [`inst_len-1:0]     instr_ex_reg;
wire                        is_jalr_ex_reg;
wire                        is_jal_ex_reg;
wire                        is_brc_ex_reg;
wire                        wben_ex_reg;
wire                        trap_ex_reg;

assign  pc_ex_reg       = flush ? `XLEN'b0  : pc_ex_reg_i;
assign  instr_ex_reg    = flush ? `inst_len : instr_ex_reg_i;
assign  is_jalr_ex_reg  = flush ? 1'b0      : is_jalr_ex_reg_i;
assign  is_jal_ex_reg   = flush ? 1'b0      : is_jal_ex_reg_i;
assign  is_brc_ex_reg   = flush ? 1'b0      : is_brc_ex_reg_i;
assign  wben_ex_reg     = flush ? 1'b0      : wben_ex_reg_i;
assign  trap_ex_reg     = flush ? 1'b0      : trap_ex_reg_i;

stl_reg #(
  .WIDTH     (4*`XLEN + `inst_len + 31),
  .RESET_VAL (0)
)id_reg(
  .i_clk   (clk),
  .i_rst_n (rst_n),
  .i_wen   (stall_n),
  .i_din   ({pc_ex_reg, instr_ex_reg, rs2_ex_reg_i, rs1_ex_reg_i, imm_ex_reg_i, aluctr_ex_reg_i, is_jalr_ex_reg, is_jal_ex_reg,
             is_brc_ex_reg, src1sel_ex_reg_i, src2sel_ex_reg_i, wben_ex_reg, rs1_idx_ex_reg_i, rs2_idx_ex_reg_i, DivEn_ex_reg_i,
             DivSel_ex_reg_i, trap_ex_reg}),
  .o_dout  ({pc_ex_reg_o, instr_ex_reg_o, rs2_ex_reg_o, rs1_ex_reg_o, imm_ex_reg_o, aluctr_ex_reg_o, is_jalr_ex_reg_o, is_jal_ex_reg_o,
             is_brc_ex_reg_o, src1sel_ex_reg_o, src2sel_ex_reg_o, wben_ex_reg_o, rs1_idx_ex_reg_o, rs2_idx_ex_reg_o, DivEn_ex_reg_o,
             DivSel_ex_reg_o, trap_ex_reg_o})
);

endmodule