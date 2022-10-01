`include "defines.v"
module WB_reg (
    input                           clk,rst_n,
    input           [`XLEN-1:0]     pc_wb_reg_i,
    input           [`inst_len-1:0] instr_wb_reg_i,
    input           [`XLEN-1:0]     alures_wb_reg_i,
    input           [`XLEN-1:0]     lsres_wb_reg_i,
    input                           wben_wb_reg_i,
    input           [`XLEN-1:0]     csrdata_wb_reg_i,

    output   reg    [`XLEN-1:0]     pc_wb_reg_o,
    output   reg    [`inst_len-1:0] instr_wb_reg_o,
    output   reg    [`XLEN-1:0]     alures_wb_reg_o,lsres_wb_reg_o,
    output   reg                    wben_wb_reg_o,
    output   reg    [`XLEN-1:0]     csrdata_wb_reg_o
);


stl_reg #(
  .WIDTH     (4*`XLEN + `inst_len + 1),
  .RESET_VAL (0)
)id_reg(
  .i_clk   (clk),
  .i_rst_n (rst_n),
  .i_wen   (1'b1),
  .i_din   ({pc_wb_reg_i, instr_wb_reg_i, alures_wb_reg_i, lsres_wb_reg_i, wben_wb_reg_i, csrdata_wb_reg_i}),
  .o_dout  ({pc_wb_reg_o, instr_wb_reg_o, alures_wb_reg_o, lsres_wb_reg_o, wben_wb_reg_o, csrdata_wb_reg_o})
);

endmodule //WB_reg