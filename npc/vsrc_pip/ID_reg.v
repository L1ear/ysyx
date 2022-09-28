`include "defines.v"
module ID_reg (
    input                           clk,rst_n,
    input           [`XLEN-1:0]     pc_id_reg_i,
    input           [`inst_len-1:0] instr_id_reg_i,
    input                           stall_n,flush,in_trap_id,out_trap_id,

    output  reg     [`XLEN-1:0]     pc_id_reg_o,
    output  reg     [`inst_len-1:0] instr_id_reg_o
);

wire  [`XLEN-1:0]       pc_id_reg;
wire  [`inst_len-1:0]       instr_id_reg;

assign pc_id_reg = (flush || in_trap_id || out_trap_id) ? `XLEN'b0 : pc_id_reg_i;
assign instr_id_reg = (flush || in_trap_id || out_trap_id) ? `inst_len'b0 : instr_id_reg_i;        //为了仿真方便，就替换成0,而不是nop


stl_reg #(
  WIDTH = 1,
  RESET_VAL = 0
)id_reg(
  .i_clk   (clk),
  .i_rst_n (rst_n),
  .i_wen   (stall_n),
  .i_din   ({pc_id_reg, instr_id_reg}),
  .o_dout  ({pc_id_reg_o, instr_id_reg_o})
);

endmodule