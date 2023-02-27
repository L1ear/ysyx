`include "defines.v"
module L_S_reg (
    input                           clk,rstn,
    input           [`XLEN-1:0]     PC_ls_reg_i,rs2_ls_reg_i,
    input           [`inst_len-1:0] instr_ls_reg_i,
    input           [`XLEN-1:0]     alures_ls_reg_i,
    input                           wben_ls_reg_i,
    input                           trap_ls_reg_i,
    input                           stall_n,

    // input                           mem_wren_ls_reg_i,
    // input                           mem_lden_ls_reg_i,
    // input           [2      :0]     mem_op_ls_reg_i,
    // output   reg                    mem_wren_ls_reg_o,
    // output   reg                    mem_lden_ls_reg_o,
    // output   reg    [2      :0]     mem_op_ls_reg_o,
    output   reg    [`XLEN-1:0]     PC_ls_reg_o,rs2_ls_reg_o,
    output   reg    [`inst_len-1:0] instr_ls_reg_o,
    output   reg    [`XLEN-1:0]     alures_ls_reg_o,
    output   reg                    wben_ls_reg_o,
    output   reg                    trap_ls_reg_o

);


stl_reg #(
  .WIDTH     (3*`XLEN + `inst_len + 2),
  .RESET_VAL (0)
)ls_reg(
  .i_clk   (clk),
  .i_rst_n (rstn),
  .i_wen   (stall_n),
  .i_din   ({PC_ls_reg_i, instr_ls_reg_i, rs2_ls_reg_i, alures_ls_reg_i, wben_ls_reg_i, trap_ls_reg_i}),
  .o_dout  ({PC_ls_reg_o, instr_ls_reg_o, rs2_ls_reg_o, alures_ls_reg_o, wben_ls_reg_o, trap_ls_reg_o})
);


endmodule