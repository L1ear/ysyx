`include "defines.v"
module top (
    input                       clk,rst_n
);

wire    [`XLEN-1:0]     pc_next;
wire    [`XLEN-1:0]     pc_new;
wire                    is_jump;
wire    [`XLEN-1:0]     pc_jump;

wire    [`XLEN-1:0]     instr_if_id_reg;
wire    [`XLEN-1:0]     pc_id,instr_id;  
wire    [`XLEN-1:0]     src1_id,src2_id,rs2_id;
wire    [4      :0]     aluctr_id,aluctr_ex;


PC_reg PC_reg_u(
    .clk            (clk),
    .rst_n          (rst_n),
    .pc_i           (pc_next),

    .pc_new_o       (pc_new)    
);

IF_stage IF_u(
    .pc_i           (pc_new),
    .is_jump_i      (is_jump),
    .pc_jump_i      (pc_jump),

    .pc_next_o      (pc_next),
    .instr_o        (instr_if_id_reg)
);

ID_reg ID_reg_u(
    .clk            (clk),
    .rst_n          (rst_n),
    .pc_id_reg_i    (pc_new),   
    .instr_id_reg_i (instr_if_id_reg),

    .pc_id_reg_o    (pc_id),
    .instr_id_reg_o (instr_id)
);

ID_stage ID_u(
    .clk            (clk),
    .rst_n          (rst_n),
    .pc_i           (pc_id),
    .instr_i        (instr_id),

    .rs2_o          (rs2_id),
    .src1_o         (src1_id),
    .src2_o         (src2_id),    
    .aluctr_o       (aluctr_id),
    .pc_next_o      (pc_jump),
    .is_jump_o      (is_jump)
);

EX_reg EX_reg_u(
    .clk            (clk),
    .rst_n          (rst_n),
    .pc_ex_reg_i    (pc_id),
    .instr_ex_reg_i (instr_id),
    .src1_ex_reg_i  (src1_id),
    .src2_ex_reg_i  (src2_id),
    .rs2_ex_reg_i   (rs2_id),
    .aluctr_ex_reg_i(aluctr_id),

    .pc_ex_reg_o    (),
    .instr_ex_reg_o,
    .src1_ex_reg_o,
    .src2_ex_reg_o,
    .rs2_ex_reg_o,
    .aluctr_ex_reg_o
);

ex_stage ex_stage_u(
    .PC_ex_i,
    .instr_ex_i,
    .rs2_ex_i,
    .mem_wren_ex_i,
    .mem_lden_ex_i,
    .mem_op_ex_i,
    .aluctr,
    .src1,
    .src2,

    .PC_ex_o,
    .instr_ex_o,
    .rs2_ex_o,
    .alures_o,
    .mem_wren_ex_o,
    .mem_lden_ex_o,
    .mem_op_ex_o
);

endmodule //top