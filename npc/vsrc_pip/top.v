`include "defines.v"
module top # (
    parameter RW_DATA_WIDTH     = 64,
    parameter RW_ADDR_WIDTH     = 64,
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 64,
    parameter AXI_ID_WIDTH      = 4,
    parameter AXI_STRB_WIDTH    = AXI_DATA_WIDTH/8,
    parameter AXI_USER_WIDTH    = 1
)(
    input                           clk,rst_n,

    output          [`XLEN-1:0]     pc_diff,pc_decoding,
    output          [`inst_len-1:0] instr_diff,
	output	        [`XLEN-1:0]		regA0,
    output                          stall_n_diff,

//instr sram  interface
    input           [`XLEN-1:0]     sram_rdata,
    input                           sram_data_valid,
    output          [`XLEN-1:0]     sram_addr,
    output                          sram_ren,
    output                          sram_addr_valid,

    input                               axi_ar_ready_i,     //lite              
    output                              axi_ar_valid_o,     //lite
    output [AXI_ADDR_WIDTH-1:0]         axi_ar_addr_o,      //lite
    output [2:0]                        axi_ar_prot_o,
    output [AXI_ID_WIDTH-1:0]           axi_ar_id_o,
    output [AXI_USER_WIDTH-1:0]         axi_ar_user_o,
    output [7:0]                        axi_ar_len_o,       //lite
    output [2:0]                        axi_ar_size_o,      //lite
    output [1:0]                        axi_ar_burst_o,
    output                              axi_ar_lock_o,
    output [3:0]                        axi_ar_cache_o,
    output [3:0]                        axi_ar_qos_o,
    output [3:0]                        axi_ar_region_o,
    
    output                              axi_r_ready_o,      //lite            
    input                               axi_r_valid_i,      //lite            
    input  [1:0]                        axi_r_resp_i,
    input  [AXI_DATA_WIDTH-1:0]         axi_r_data_i,       //lite
    input                               axi_r_last_i,
    input  [AXI_ID_WIDTH-1:0]           axi_r_id_i,
    input  [AXI_USER_WIDTH-1:0]         axi_r_user_i,

    input                               axi_aw_ready_i,     //lite        
    output                              axi_aw_valid_o,     //lite
    output [AXI_ADDR_WIDTH-1:0]         axi_aw_addr_o,      //lite
    output [2:0]                        axi_aw_prot_o,
    output [AXI_ID_WIDTH-1:0]           axi_aw_id_o,
    output [AXI_USER_WIDTH-1:0]         axi_aw_user_o,
    output [7:0]                        axi_aw_len_o,       
    output [2:0]                        axi_aw_size_o,
    output [1:0]                        axi_aw_burst_o,
    output                              axi_aw_lock_o,
    output [3:0]                        axi_aw_cache_o,
    output [3:0]                        axi_aw_qos_o,
    output [3:0]                        axi_aw_region_o,
    input                               axi_w_ready_i,      //lite        
    output                              axi_w_valid_o,      //lite
    output [AXI_DATA_WIDTH-1:0]         axi_w_data_o,       //lite
    output [AXI_DATA_WIDTH/8-1:0]       axi_w_strb_o,       //lite
    output                              axi_w_last_o,
    output [AXI_USER_WIDTH-1:0]         axi_w_user_o,
        
    output                              axi_b_ready_o,      //lite        
    input                               axi_b_valid_i,      //lite
    input  [1:0]                        axi_b_resp_i,       //lite        
    input  [AXI_ID_WIDTH-1:0]           axi_b_id_i,
    input  [AXI_USER_WIDTH-1:0]         axi_b_user_i,

//ls sram interface
    output          [`XLEN-1:0]     ls_sram_addr,
    output                          ls_sram_rd_en,          
    output                          ls_sram_wr_en,
    output          [`XLEN-1:0]     ls_sram_wr_data,
    output          [7      :0]     ls_sram_wr_mask,
    input                           ls_sram_rd_data_valid,
    input                           ls_sram_wr_data_ok,
    input           [`XLEN-1:0]     ls_sram_rd_data

);

//if signal
wire    [`XLEN-1:0]     pc_next;
wire    [`XLEN-1:0]     pc_new;
wire                    is_jump;
wire    [`XLEN-1:0]     pc_jump;
wire                    pc_stall_n;
wire                    if_stall_n;
wire                    if_instr_valid;
wire                    sram_data_valid;
wire    [`XLEN-1:0]     sram_rdata;

//id signal-----------------------------------------------------
wire    [`inst_len-1:0] instr_if_id_reg;
wire    [`XLEN-1:0]     pc_id;
wire    [`inst_len-1:0] instr_id;  
wire    [`XLEN-1:0]     rs2_id,rs1_id,imm_id;
wire                    src1sel_id;
wire    [1      :0]     src2sel_id;
wire    [4      :0]     aluctr_id;
wire                    is_brc_id,is_jal_id,is_jalr_id;
wire                    wben_id;
wire    [4      :0]     rs1_idx_id,rs2_idx_id;
wire                    id_stall_n;
wire                    DivEn_id;
wire    [2      :0]     DivSel_id;
wire                    in_trap_id;
wire                    out_trap_id;
wire                    trap_id;
wire                    ld_use_hazard;
wire                    id_flush;

//ex signal------------------------------------------------------
wire    [`XLEN-1:0]     pc_ex;
wire    [`inst_len-1:0] instr_ex;  
wire    [`XLEN-1:0]     alures_ex;  
wire                    src1sel_ex;
wire    [1      :0]     src2sel_ex;
wire    [`XLEN-1:0]     rs2_ex,rs1_ex,imm_ex,rs2_ex_u_o;
wire    [4      :0]     aluctr_ex;
wire                    is_brc_ex,is_jal_ex,is_jalr_ex;
wire                    wben_ex;
wire                    DivEn_ex;
wire    [2      :0]     DivSel_ex;
wire                    trap_ex;
wire                    ex_stall_n;

wire    [`XLEN-1:0]     wbres_fw;
wire    [1      :0]     rs1_sel,rs2_sel;
wire    [4      :0]     rs1_idx_ex,rs2_idx_ex;
wire                    ex_flush;

//ls signal------------------------------------------------------
wire    [`XLEN-1:0]     pc_ls,rs2_ls,alures_ls;  
wire    [`inst_len-1:0] instr_ls;
wire    [`XLEN-1:0]     lsres_ls;  
wire                    wben_ls;
wire    [`XLEN-1:0]     csrdata_ls;
wire    [`XLEN-1:0]     csr_mtvec,csr_mepc;
wire                    trap_ls;
wire                    ls_stall_n;
wire                    ls_not_ok;

//wb signal------------------------------------------------------
wire    [`XLEN-1:0]     pc_wb,alures_wb,lsres_wb;  
wire    [`inst_len-1:0] instr_wb;
wire    [`XLEN-1:0]     wb_data;
wire    [4      :0]     wb_rdid;
// wire                    wb_wren;
wire                    wben_wb;
wire    [`XLEN-1:0]     csrdata_wb;
wire                    wb_stall_n;

//for verilator
assign  pc_diff = pc_wb;
assign  pc_decoding = pc_id;
assign  instr_diff = instr_wb;
assign  stall_n_diff = wb_stall_n;


IF_stage IF_u(
    .clk            (clk),
    .rst_n          (rst_n),
    .is_jump_i      (is_jump),
    .pc_jump_i      (pc_jump),
    .csr_mtvec      (csr_mtvec),
    .csr_mepc       (csr_mepc),
    .in_trap_id     (in_trap_id),
    .out_trap_id    (out_trap_id),
    .stall_n        (if_stall_n),

    .pc_new_o       (pc_new),
    .instr_o        (instr_if_id_reg),
    .if_instr_valid (if_instr_valid),
    .sram_rdata     (sram_rdata),
    .sram_data_valid(sram_data_valid),
    .sram_addr      (sram_addr),
    .sram_ren       (sram_ren),
    .sram_addr_valid(sram_addr_valid)
);

// axi_if axi_if_u(
//     .clock          (clk),
//     .reset          (rst_n),

// 	.rw_valid_i     (sram_addr_valid),         //IF&MEM输入信号
// 	.rw_ready_o     (sram_data_valid),         //IF&MEM输入信号
//     .data_read_o    (sram_rdata),        //IF&MEM输入信号
//     .rw_addr_i      (sram_addr),          //IF&MEM输入信号

//     .axi_aw_ready_i (axi_aw_ready_i ),     //lite         
//     .axi_aw_valid_o (axi_aw_valid_o ),     //lite
//     .axi_aw_addr_o  (axi_aw_addr_o  ),      //lite
//     .axi_aw_prot_o  (axi_aw_prot_o  ),
//     .axi_aw_id_o    (axi_aw_id_o    ),
//     .axi_aw_user_o  (axi_aw_user_o  ),
//     .axi_aw_len_o   (axi_aw_len_o   ),       
//     .axi_aw_size_o  (axi_aw_size_o  ),
//     .axi_aw_burst_o (axi_aw_burst_o ),
//     .axi_aw_lock_o  (axi_aw_lock_o  ),
//     .axi_aw_cache_o (axi_aw_cache_o ),
//     .axi_aw_qos_o   (axi_aw_qos_o   ),
//     .axi_aw_region_o(axi_aw_region_o),

//     .axi_w_ready_i  (axi_w_ready_i),      //lite              
//     .axi_w_valid_o  (axi_w_valid_o),      //lite
//     .axi_w_data_o   (axi_w_data_o ),       //lite
//     .axi_w_strb_o   (axi_w_strb_o ),       //lite
//     .axi_w_last_o   (axi_w_last_o ),  
//     .axi_w_user_o   (axi_w_user_o ),

//     .axi_b_ready_o  (axi_b_ready_o),      //lite           
//     .axi_b_valid_i  (axi_b_valid_i),      //lite
//     .axi_b_resp_i   (axi_b_resp_i ),       //lite            
//     .axi_b_id_i     (axi_b_id_i   ),
//     .axi_b_user_i   (axi_b_user_i ),

//     .axi_ar_ready_i (axi_ar_ready_i),     //lite              
//     .axi_ar_valid_o (axi_ar_valid_o),     //lite
//     .axi_ar_addr_o  (axi_ar_addr_o  ),      //lite
//     .axi_ar_prot_o  (axi_ar_prot_o  ),
//     .axi_ar_id_o    (axi_ar_id_o    ),
//     .axi_ar_user_o  (axi_ar_user_o  ),
//     .axi_ar_len_o   (axi_ar_len_o   ),       //lite
//     .axi_ar_size_o  (axi_ar_size_o  ),     //lite
//     .axi_ar_burst_o (axi_ar_burst_o ),
//     .axi_ar_lock_o  (axi_ar_lock_o  ),
//     .axi_ar_cache_o (axi_ar_cache_o ),
//     .axi_ar_qos_o   (axi_ar_qos_o   ),
//     .axi_ar_region_o(axi_ar_region_o),

//     .axi_r_ready_o  (axi_r_ready_o ),      //lite            
//     .axi_r_valid_i  (axi_r_valid_i ),      //lite            
//     .axi_r_resp_i   (axi_r_resp_i  ),
//     .axi_r_data_i   (axi_r_data_i  ),       //lite
//     .axi_r_last_i   (axi_r_last_i  ),
//     .axi_r_id_i     (axi_r_id_i    ),
//     .axi_r_user_i   (axi_r_user_i  )
// );

ID_reg ID_reg_u(
    .clk            (clk),
    .rst_n          (rst_n),
    .pc_id_reg_i    (pc_new),   
    .instr_id_reg_i (instr_if_id_reg),
    .stall_n        (id_stall_n),
    .flush          (id_flush),

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
    .wb_wren_i      (wben_wb), 
    .pc_wb_i        (pc_wb),
    .instr_wb_i     (instr_wb),
    .DivEn          (DivEn_id),
    .DivSel         (DivSel_id),  

    .rs1_o          (rs1_id),
    .rs2_o          (rs2_id),
    .imm_o          (imm_id),
    .src1sel        (src1sel_id),
    .src2sel        (src2sel_id),    
    .aluctr_o       (aluctr_id),
    .is_brc_id_o    (is_brc_id),
    .is_jal_id_o    (is_jal_id),
    .is_jalr_id_o   (is_jalr_id),
    .wben_id_o      (wben_id),
    .rs1_idx        (rs1_idx_id),
    .rs2_idx        (rs2_idx_id),
    .regA0          (regA0),
    .trap_id_o      (trap_id),
    .in_trap_id     (in_trap_id),
    .out_trap_id    (out_trap_id)
);

hazard_detect hazard_detect_u(
    .instr_id_i     (instr_id),
    .instr_ex_i     (instr_ex),
    .hazard         (ld_use_hazard)
);

EX_reg EX_reg_u(
    .clk            (clk),
    .rst_n          (rst_n),
    .pc_ex_reg_i    (pc_id),
    .instr_ex_reg_i (instr_id),
    // .src1_ex_reg_i  (src1sel_id),
    // .src2_ex_reg_i  (src2sel_id),
    .rs2_ex_reg_i   (rs2_id),
    .rs1_ex_reg_i   (rs1_id),
    .imm_ex_reg_i   (imm_id),
    .aluctr_ex_reg_i(aluctr_id),
    .is_brc_ex_reg_i(is_brc_id),
    .is_jal_ex_reg_i(is_jal_id),
    .is_jalr_ex_reg_i(is_jalr_id),
    .src1sel_ex_reg_i(src1sel_id),
    .src2sel_ex_reg_i(src2sel_id),
    .wben_ex_reg_i(wben_id),
    .rs1_idx_ex_reg_i(rs1_idx_id),
    .rs2_idx_ex_reg_i(rs2_idx_id),
    .stall_n(ex_stall_n),
    .flush(ex_flush),
    .DivEn_ex_reg_i (DivEn_id),
    .DivSel_ex_reg_i(DivSel_id),
    .trap_ex_reg_i  (trap_id),


    .pc_ex_reg_o    (pc_ex),
    .instr_ex_reg_o (instr_ex),
    // .src1_ex_reg_o  (src1_ex),
    // .src2_ex_reg_o  (src2_ex),
    .rs2_ex_reg_o   (rs2_ex),
    .rs1_ex_reg_o   (rs1_ex),
    .imm_ex_reg_o   (imm_ex),
    .aluctr_ex_reg_o(aluctr_ex),
    .is_brc_ex_reg_o(is_brc_ex),
    .is_jal_ex_reg_o(is_jal_ex),
    .is_jalr_ex_reg_o(is_jalr_ex),
    .src1sel_ex_reg_o(src1sel_ex),
    .src2sel_ex_reg_o(src2sel_ex),
    .wben_ex_reg_o(wben_ex),
    .rs1_idx_ex_reg_o(rs1_idx_ex),
    .rs2_idx_ex_reg_o(rs2_idx_ex) ,
    .DivEn_ex_reg_o (DivEn_ex),
    .DivSel_ex_reg_o(DivSel_ex),
    .trap_ex_reg_o  (trap_ex)
);

ex_stage ex_stage_u(
    // .PC_ex_i,
    // .instr_ex_i,
    // .rs2_ex_i,
    // .mem_wren_ex_i,
    // .mem_lden_ex_i,
    // .mem_op_ex_i,
    .aluctr         (aluctr_ex),
    // .src1           (src1_ex),
    // .src2           (src2_ex),
    .rs1_ex_i       (rs1_ex),
    .rs2_ex_i       (rs2_ex),
    .imm_ex_i       (imm_ex),
    .pc_ex_i        (pc_ex),
    .instr_ex_i     (instr_ex),
    .is_jalr_ex_i   (is_jalr_ex),
    .is_jal_ex_i    (is_jal_ex),
    .is_brc_ex_i    (is_brc_ex),
    .src1sel_ex_i   (src1sel_ex),
    .src2sel_ex_i   (src2sel_ex),
    .alures_fw_i    (alures_ls),
    .lsres_fw_i     (wb_data),
    .wbres_fw_i     (wbres_fw),
    .rs1_sel_i      (rs1_sel),
    .rs2_sel_i      (rs2_sel),
    .DivEn_i        (DivEn_ex),
    .DivSel_i       (DivSel_ex),


    // .PC_ex_o,
    // .instr_ex_o,
    // .rs2_ex_o,
    .rs2_o          (rs2_ex_u_o),
    .alures_o       (alures_ex),
    .pc_next_o      (pc_jump),
    .is_jump_o      (is_jump)
    // .mem_wren_ex_o,
    // .mem_lden_ex_o,
    // .mem_op_ex_o
);

forwarding  forwarding_u(
    .clk            (clk),
    .rst_n          (rst_n),
    .rs1_ido_idx    (rs1_idx_ex),
    .rs2_ido_idx    (rs2_idx_ex),
    .rd_exo_idx     (instr_ls[11:7]),
    .rd_lso_idx     (instr_wb[11:7]),
    .wben_ls        (wben_ls),
    .wben_wb        (wben_wb),
    .wb_data_i      (wb_data),
    .wb_stall_n     (wb_stall_n),

    .rs1_sel        (rs1_sel),
    .rs2_sel        (rs2_sel),
    .wb_data_o      (wbres_fw)
);

L_S_reg L_S_reg_u(
    .clk            (clk),
    .rstn           (rst_n),
    .PC_ls_reg_i    (pc_ex),
    .instr_ls_reg_i (instr_ex),
    .rs2_ls_reg_i   (rs2_ex_u_o),
    .alures_ls_reg_i(alures_ex),
    .wben_ls_reg_i  (wben_ex),
    .trap_ls_reg_i  (trap_ex),
    .stall_n        (ls_stall_n),

    .PC_ls_reg_o    (pc_ls),
    .instr_ls_reg_o (instr_ls),
    .rs2_ls_reg_o   (rs2_ls),
    .alures_ls_reg_o(alures_ls),
    .wben_ls_reg_o  (wben_ls),
    .trap_ls_reg_o  (trap_ls)
);

ls_stage ls_u(
    .clk            (clk),
    .rst_n          (rst_n),
    .pc             (pc_ls),
    .instr_i        (instr_ls),
    .alures_i       (alures_ls),
    .rs2_i          (rs2_ls),
    .alures_last_i  (alures_wb),
    .instr_last_i   (instr_wb),
    .wb_data_i      (lsres_wb),
    .trap_ls_i      (trap_ls),
    .ls_not_ok      (ls_not_ok),

    .ls_res_o       (lsres_ls),
    .csr_data_o     (csrdata_ls),
    .mtvec_o        (csr_mtvec),
    .mepc_o         (csr_mepc),

    .ls_sram_addr           (ls_sram_addr           ),
    .ls_sram_rd_en          (ls_sram_rd_en          ),          
    .ls_sram_wr_en          (ls_sram_wr_en          ),
    .ls_sram_wr_data        (ls_sram_wr_data        ),
    .ls_sram_wr_mask        (ls_sram_wr_mask        ),
    .ls_sram_rd_data_valid  (ls_sram_rd_data_valid  ),
    .ls_sram_wr_data_ok     (ls_sram_wr_data_ok     ),
    .ls_sram_rd_data        (ls_sram_rd_data        )
);

WB_reg wb_reg_u(
    .clk            (clk),
    .rst_n          (rst_n),
    .pc_wb_reg_i    (pc_ls),
    .instr_wb_reg_i (instr_ls),
    .alures_wb_reg_i(alures_ls),
    .lsres_wb_reg_i (lsres_ls),
    .wben_wb_reg_i  (wben_ls),
    .csrdata_wb_reg_i(csrdata_ls),
    .stall_n        (wb_stall_n),

    .pc_wb_reg_o    (pc_wb),
    .instr_wb_reg_o (instr_wb),
    .alures_wb_reg_o(alures_wb),
    .lsres_wb_reg_o (lsres_wb),
    .wben_wb_reg_o  (wben_wb),
    .csrdata_wb_reg_o(csrdata_wb)
);

WB_stage wb_stage_u(
    .pc_i           (pc_wb),
    .instr_i        (instr_wb),
    .alures_i       (alures_wb),
    .lsres_i        (lsres_wb),
    .csrdata_i      (csrdata_wb),

    .rd_idx_o       (wb_rdid),
    // .rd_wren_o      (wb_wren),
    .rd_data_o      (wb_data)
);

pipline_ctrl pipline_ctrl_u(
    .clk                (clk),
    .rst_n              (rst_n),
    .ld_use_hazard      (ld_use_hazard),
    .is_jump            (is_jump),
    .in_trap_id         (in_trap_id),
    .out_trap_id        (out_trap_id),
    .if_instr_valid     (if_instr_valid),
    .ls_not_ok          (ls_not_ok),
    
    .pc_stall_n         (pc_stall_n),
    .if_stall_n         (if_stall_n),
    .id_stall_n         (id_stall_n),
    .ex_stall_n         (ex_stall_n),
    .ls_stall_n         (ls_stall_n),
    .wb_stall_n         (wb_stall_n),
    .id_flush           (id_flush),
    .ex_flush           (ex_flush)
);

endmodule //top