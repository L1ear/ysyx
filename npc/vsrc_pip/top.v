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
wire    [`XLEN-1:0]     src1_ex,src2_ex,rs2_ex;
wire    [4      :0]     aluctr_id,aluctr_ex;
wire    [`XLEN-1:0]     pc_ex,instr_ex;  
wire    [`XLEN-1:0]     alures_ex;  
wire    [`XLEN-1:0]     pc_ls,instr_ls,rs2_ls,alures_ls;  
wire    [`XLEN-1:0]     lsres_ls;  
wire    [`XLEN-1:0]     pc_wb,instr_wb,alures_wb,lsres_wb;  

wire    [`XLEN-1:0]     wb_data;
wire    [4      :0]     wb_rdid;
wire                    wb_wren;


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
    .wb_data_i      (wb_data),
    .wb_rdid_i      (wb_rdid),
    .wb_wren_i      (wb_wren), 

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

    .pc_ex_reg_o    (pc_ex),
    .instr_ex_reg_o (instr_ex),
    .src1_ex_reg_o  (src1_ex),
    .src2_ex_reg_o  (src2_ex),
    .rs2_ex_reg_o   (rs2_ex),
    .aluctr_ex_reg_o(aluctr_ex)
);

ex_stage ex_stage_u(
    // .PC_ex_i,
    // .instr_ex_i,
    // .rs2_ex_i,
    // .mem_wren_ex_i,
    // .mem_lden_ex_i,
    // .mem_op_ex_i,
    .aluctr         (aluctr_ex),
    .src1           (src1_ex),
    .src2           (src2_ex),

    // .PC_ex_o,
    // .instr_ex_o,
    // .rs2_ex_o,
    .alures_o       (alures_ex)
    // .mem_wren_ex_o,
    // .mem_lden_ex_o,
    // .mem_op_ex_o
);

L_S_reg L_S_reg_u(
    .clk            (clk),
    .rstn           (rst_n),
    .PC_ls_reg_i    (pc_ex),
    .instr_ls_reg_i (instr_ex),
    .rs2_ls_reg_i   (rs2_ex),
    .alures_ls_reg_i(alures_ex),

    .PC_ls_reg_o    (pc_ls),
    .instr_ls_reg_o (instr_ls),
    .rs2_ls_reg_o   (rs2_ls),
    .alures_ls_reg_o(alures_ls)
);

ls_stage ls_u(
    .clk            (clk),
    .rst_n          (rst_n),
    .pc             (pc_ls),
    .instr_i        (instr_ls),
    .alures_i       (alures_ls),
    .rs2_i          (rs2_ls),

    .ls_res_o       (lsres_ls)
);

WB_reg wb_reg_u(
    .clk            (clk),
    .rst_n          (rst_n),
    .pc_wb_reg_i    (pc_ls),
    .instr_wb_reg_i (instr_ls),
    .alures_wb_reg_i(alures_ls),
    .lsres_wb_reg_i (lsres_ls),

    .pc_wb_reg_o    (pc_wb),
    .instr_wb_reg_o (instr_wb),
    .alures_wb_reg_o(alures_wb),
    .lsres_wb_reg_o (lsres_wb)
);

WB_stage wb_stage_u(
    .pc_i           (pc_wb),
    .instr_i        (instr_wb),
    .alures_i       (alures_wb),
    .lsres_i        (lsres_wb),

    .rd_idx_o       (wb_rdid),
    .rd_wren_o      (wb_wren),
    .rd_data_o      (wb_data)
);

endmodule //top