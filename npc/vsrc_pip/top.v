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
    // input           [`XLEN-1:0]     sram_rdata,
    // input                           sram_data_valid,
    // output          [`XLEN-1:0]     sram_addr,
    // output                          sram_ren,
    // output                          sram_addr_valid,

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

    input                               axi_mmio_ar_ready_i,     //lite              
    output                              axi_mmio_ar_valid_o,     //lite
    output [AXI_ADDR_WIDTH-1:0]         axi_mmio_ar_addr_o,      //lite
    output [2:0]                        axi_mmio_ar_prot_o,
    output [AXI_ID_WIDTH-1:0]           axi_mmio_ar_id_o,
    output [AXI_USER_WIDTH-1:0]         axi_mmio_ar_user_o,
    output [7:0]                        axi_mmio_ar_len_o,       //lite
    output [2:0]                        axi_mmio_ar_size_o,      //lite
    output [1:0]                        axi_mmio_ar_burst_o,
    output                              axi_mmio_ar_lock_o,
    output [3:0]                        axi_mmio_ar_cache_o,
    output [3:0]                        axi_mmio_ar_qos_o,
    output [3:0]                        axi_mmio_ar_region_o,
  
    output                              axi_mmio_r_ready_o,      //lite            
    input                               axi_mmio_r_valid_i,      //lite            
    input  [1:0]                        axi_mmio_r_resp_i,
    input  [AXI_DATA_WIDTH-1:0]         axi_mmio_r_data_i,       //lite
    input                               axi_mmio_r_last_i,
    input  [AXI_ID_WIDTH-1:0]           axi_mmio_r_id_i,
    input  [AXI_USER_WIDTH-1:0]         axi_mmio_r_user_i,

    input                               axi_mmio_aw_ready_i,     //lite        
    output                              axi_mmio_aw_valid_o,     //lite
    output [AXI_ADDR_WIDTH-1:0]         axi_mmio_aw_addr_o,      //lite
    output [2:0]                        axi_mmio_aw_prot_o,
    output [AXI_ID_WIDTH-1:0]           axi_mmio_aw_id_o,
    output [AXI_USER_WIDTH-1:0]         axi_mmio_aw_user_o,
    output [7:0]                        axi_mmio_aw_len_o,       
    output [2:0]                        axi_mmio_aw_size_o,
    output [1:0]                        axi_mmio_aw_burst_o,
    output                              axi_mmio_aw_lock_o,
    output [3:0]                        axi_mmio_aw_cache_o,
    output [3:0]                        axi_mmio_aw_qos_o,
    output [3:0]                        axi_mmio_aw_region_o,
    input                               axi_mmio_w_ready_i,      //lite        
    output                              axi_mmio_w_valid_o,      //lite
    output [AXI_DATA_WIDTH-1:0]         axi_mmio_w_data_o,       //lite
    output [AXI_DATA_WIDTH/8-1:0]       axi_mmio_w_strb_o,       //lite
    output                              axi_mmio_w_last_o,
    output [AXI_USER_WIDTH-1:0]         axi_mmio_w_user_o,
        
    output                              axi_mmio_b_ready_o,      //lite        
    input                               axi_mmio_b_valid_i,      //lite
    input  [1:0]                        axi_mmio_b_resp_i,       //lite        
    input  [AXI_ID_WIDTH-1:0]           axi_mmio_b_id_i,
    input  [AXI_USER_WIDTH-1:0]         axi_mmio_b_user_i

// ls sram interface
//     output          [`XLEN-1:0]     ls_sram_addr,
//     output                          ls_sram_rd_en,          
//     output                          ls_sram_wr_en,
//     output          [`XLEN-1:0]     ls_sram_wr_data,
//     output          [7      :0]     ls_sram_wr_mask,
//     input                           ls_sram_rd_data_valid,
//     input                           ls_sram_wr_data_ok,
//     input           [`XLEN-1:0]     ls_sram_rd_data

);
//axi signal
wire                              instr_fetching;
wire                              if_axi_ar_ready_i;     //lite              
wire                              if_axi_ar_valid_o;     //lite
wire [AXI_ADDR_WIDTH-1:0]         if_axi_ar_addr_o;      //lite
wire [2:0]                        if_axi_ar_prot_o;
wire [AXI_ID_WIDTH-1:0]           if_axi_ar_id_o;
wire [AXI_USER_WIDTH-1:0]         if_axi_ar_user_o;
wire [7:0]                        if_axi_ar_len_o;       //lite
wire [2:0]                        if_axi_ar_size_o;      //lite
wire [1:0]                        if_axi_ar_burst_o;
wire                              if_axi_ar_lock_o;
wire [3:0]                        if_axi_ar_cache_o;
wire [3:0]                        if_axi_ar_qos_o;
wire [3:0]                        if_axi_ar_region_o;
wire                              if_axi_r_ready_o;      //lite            
wire                              if_axi_r_valid_i;      //lite            
wire [1:0]                        if_axi_r_resp_i;
wire [AXI_DATA_WIDTH-1:0]         if_axi_r_data_i;       //lite
wire                              if_axi_r_last_i;
wire [AXI_ID_WIDTH-1:0]           if_axi_r_id_i;
wire [AXI_USER_WIDTH-1:0]         if_axi_r_user_i;

wire                              ls_axi_aw_ready_i;     //lite         
wire                              ls_axi_aw_valid_o;     //lite
wire [AXI_ADDR_WIDTH-1:0]         ls_axi_aw_addr_o;      //lite
wire [2:0]                        ls_axi_aw_prot_o;
wire [AXI_ID_WIDTH-1:0]           ls_axi_aw_id_o;
wire [AXI_USER_WIDTH-1:0]         ls_axi_aw_user_o;
wire [7:0]                        ls_axi_aw_len_o;       
wire [2:0]                        ls_axi_aw_size_o;
wire [1:0]                        ls_axi_aw_burst_o;
wire                              ls_axi_aw_lock_o;
wire [3:0]                        ls_axi_aw_cache_o;
wire [3:0]                        ls_axi_aw_qos_o;
wire [3:0]                        ls_axi_aw_region_o;
wire                              ls_axi_w_ready_i;      //lite              
wire                              ls_axi_w_valid_o;      //lite
wire [AXI_DATA_WIDTH-1:0]         ls_axi_w_data_o;       //lite
wire [AXI_DATA_WIDTH/8-1:0]       ls_axi_w_strb_o;       //lite
wire                              ls_axi_w_last_o;       //lite
wire [AXI_USER_WIDTH-1:0]         ls_axi_w_user_o;
wire                              ls_axi_b_ready_o;      //lite           
wire                              ls_axi_b_valid_i;      //lite
wire [1:0]                        ls_axi_b_resp_i;       //lite            
wire [AXI_ID_WIDTH-1:0]           ls_axi_b_id_i;
wire [AXI_USER_WIDTH-1:0]         ls_axi_b_user_i;
wire                              ls_axi_ar_ready_i;     //lite              
wire                              ls_axi_ar_valid_o;     //lite
wire [AXI_ADDR_WIDTH-1:0]         ls_axi_ar_addr_o;      //lite
wire [2:0]                        ls_axi_ar_prot_o;
wire [AXI_ID_WIDTH-1:0]           ls_axi_ar_id_o;
wire [AXI_USER_WIDTH-1:0]         ls_axi_ar_user_o;
wire [7:0]                        ls_axi_ar_len_o;       //lite
wire [2:0]                        ls_axi_ar_size_o;      //lite
wire [1:0]                        ls_axi_ar_burst_o;
wire                              ls_axi_ar_lock_o;
wire [3:0]                        ls_axi_ar_cache_o;
wire [3:0]                        ls_axi_ar_qos_o;
wire [3:0]                        ls_axi_ar_region_o;
wire                              ls_axi_r_ready_o;      //lite            
wire                              ls_axi_r_valid_i;      //lite            
wire [1:0]                        ls_axi_r_resp_i;
wire [AXI_DATA_WIDTH-1:0]         ls_axi_r_data_i;       //lite
wire                              ls_axi_r_last_i;
wire [AXI_ID_WIDTH-1:0]           ls_axi_r_id_i;
wire [AXI_USER_WIDTH-1:0]         ls_axi_r_user_i;

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
wire    [`XLEN-1:0]     sram_addr;
wire                    sram_ren;
wire                    sram_addr_valid;
wire                    cacheAddrOk_i;
wire                    cacheDataOk_i;

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
wire                    rden_ls,wren_ls;
wire                    ls_addr_ok_i;

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
wire    [`XLEN-1:0]     ls_sram_addr;           
wire                    ls_sram_rd_en;          
wire                    ls_sram_wr_en;          
wire    [`XLEN-1:0]     ls_sram_wr_data;        
wire    [7      :0]     ls_sram_wr_mask;        
wire                    ls_sram_rd_data_valid;  
wire                    ls_sram_wr_data_ok;     
wire    [`XLEN-1:0]     ls_sram_rd_data;  
wire    [2      :0]     ls_sram_wr_size;
wire    [2      :0]     ls_sram_rd_size;      

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

axi_crossbar axi_crossbar_u(
//if interface  id: 0
    .instr_fetching (instr_fetching),
    .if_axi_ar_ready_o  (if_axi_ar_ready_i ),     //lite              
    .if_axi_ar_valid_i  (if_axi_ar_valid_o ),     //lite
    .if_axi_ar_addr_i   (if_axi_ar_addr_o  ),      //lite
    .if_axi_ar_prot_i   (if_axi_ar_prot_o  ),
    .if_axi_ar_id_i     (if_axi_ar_id_o    ),
    .if_axi_ar_user_i   (if_axi_ar_user_o  ),
    .if_axi_ar_len_i    (if_axi_ar_len_o   ),       //lite
    .if_axi_ar_size_i   (if_axi_ar_size_o  ),      //lite
    .if_axi_ar_burst_i  (if_axi_ar_burst_o ),
    .if_axi_ar_lock_i   (if_axi_ar_lock_o  ),
    .if_axi_ar_cache_i  (if_axi_ar_cache_o ),
    .if_axi_ar_qos_i    (if_axi_ar_qos_o   ),
    .if_axi_ar_region_i (if_axi_ar_region_o),

    .if_axi_r_ready_i   (if_axi_r_ready_o  ),      //lite            
    .if_axi_r_valid_o   (if_axi_r_valid_i  ),      //lite            
    .if_axi_r_resp_o    (if_axi_r_resp_i   ),
    .if_axi_r_data_o    (if_axi_r_data_i   ),       //lite
    .if_axi_r_last_o    (if_axi_r_last_i   ),
    .if_axi_r_id_o      (if_axi_r_id_i     ),
    .if_axi_r_user_o    (if_axi_r_user_i   ),
//ls interface  id: 1
    .ls_axi_aw_ready_o  (ls_axi_aw_ready_i ),     //lite         
    .ls_axi_aw_valid_i  (ls_axi_aw_valid_o ),     //lite
    .ls_axi_aw_addr_i   (ls_axi_aw_addr_o  ),      //lite
    .ls_axi_aw_prot_i   (ls_axi_aw_prot_o  ),
    .ls_axi_aw_id_i     (ls_axi_aw_id_o    ),
    .ls_axi_aw_user_i   (ls_axi_aw_user_o  ),
    .ls_axi_aw_len_i    (ls_axi_aw_len_o   ),       
    .ls_axi_aw_size_i   (ls_axi_aw_size_o  ),
    .ls_axi_aw_burst_i  (ls_axi_aw_burst_o ),
    .ls_axi_aw_lock_i   (ls_axi_aw_lock_o  ),
    .ls_axi_aw_cache_i  (ls_axi_aw_cache_o ),
    .ls_axi_aw_qos_i    (ls_axi_aw_qos_o   ),
    .ls_axi_aw_region_i (ls_axi_aw_region_o),

    .ls_axi_w_ready_o   (ls_axi_w_ready_i  ),      //lite              
    .ls_axi_w_valid_i   (ls_axi_w_valid_o  ),      //lite
    .ls_axi_w_data_i    (ls_axi_w_data_o   ),       //lite
    .ls_axi_w_strb_i    (ls_axi_w_strb_o   ),       //lite
    .ls_axi_w_last_i    (ls_axi_w_last_o   ),       //lite
    .ls_axi_w_user_i    (ls_axi_w_user_o   ),

    .ls_axi_b_ready_i   (ls_axi_b_ready_o  ),      //lite           
    .ls_axi_b_valid_o   (ls_axi_b_valid_i  ),      //lite
    .ls_axi_b_resp_o    (ls_axi_b_resp_i   ),       //lite            
    .ls_axi_b_id_o      (ls_axi_b_id_i     ),
    .ls_axi_b_user_o    (ls_axi_b_user_i   ),

    .ls_axi_ar_ready_o  (ls_axi_ar_ready_i ),     //lite              
    .ls_axi_ar_valid_i  (ls_axi_ar_valid_o ),     //lite
    .ls_axi_ar_addr_i   (ls_axi_ar_addr_o  ),      //lite
    .ls_axi_ar_prot_i   (ls_axi_ar_prot_o  ),
    .ls_axi_ar_id_i     (ls_axi_ar_id_o    ),
    .ls_axi_ar_user_i   (ls_axi_ar_user_o  ),
    .ls_axi_ar_len_i    (ls_axi_ar_len_o   ),       //lite
    .ls_axi_ar_size_i   (ls_axi_ar_size_o  ),      //lite
    .ls_axi_ar_burst_i  (ls_axi_ar_burst_o ),
    .ls_axi_ar_lock_i   (ls_axi_ar_lock_o  ),
    .ls_axi_ar_cache_i  (ls_axi_ar_cache_o ),
    .ls_axi_ar_qos_i    (ls_axi_ar_qos_o   ),
    .ls_axi_ar_region_i (ls_axi_ar_region_o),

    .ls_axi_r_ready_i   (ls_axi_r_ready_o  ),      //lite            
    .ls_axi_r_valid_o   (ls_axi_r_valid_i  ),      //lite            
    .ls_axi_r_resp_o    (ls_axi_r_resp_i   ),
    .ls_axi_r_data_o    (ls_axi_r_data_i   ),       //lite
    .ls_axi_r_last_o    (ls_axi_r_last_i   ),
    .ls_axi_r_id_o      (ls_axi_r_id_i     ),
    .ls_axi_r_user_o    (ls_axi_r_user_i   ),
//mem
    .axi_aw_ready_i     (axi_aw_ready_i    ),     //lite         
    .axi_aw_valid_o     (axi_aw_valid_o    ),     //lite
    .axi_aw_addr_o      (axi_aw_addr_o     ),      //lite
    .axi_aw_prot_o      (axi_aw_prot_o     ),
    .axi_aw_id_o        (axi_aw_id_o       ),
    .axi_aw_user_o      (axi_aw_user_o     ),
    .axi_aw_len_o       (axi_aw_len_o      ),       
    .axi_aw_size_o      (axi_aw_size_o     ),
    .axi_aw_burst_o     (axi_aw_burst_o    ),
    .axi_aw_lock_o      (axi_aw_lock_o     ),
    .axi_aw_cache_o     (axi_aw_cache_o    ),
    .axi_aw_qos_o       (axi_aw_qos_o      ),
    .axi_aw_region_o    (axi_aw_region_o   ),

    .axi_w_ready_i      (axi_w_ready_i     ),      //lite              
    .axi_w_valid_o      (axi_w_valid_o     ),      //lite
    .axi_w_data_o       (axi_w_data_o      ),       //lite
    .axi_w_strb_o       (axi_w_strb_o      ),       //lite
    .axi_w_last_o       (axi_w_last_o      ),       //lite
    .axi_w_user_o       (axi_w_user_o      ),
    
    .axi_b_ready_o      (axi_b_ready_o),      //lite           
    .axi_b_valid_i      (axi_b_valid_i),      //lite
    .axi_b_resp_i       (axi_b_resp_i ),       //lite            
    .axi_b_id_i         (axi_b_id_i   ),
    .axi_b_user_i       (axi_b_user_i ),

    .axi_ar_ready_i     (axi_ar_ready_i  ),     //lite              
    .axi_ar_valid_o     (axi_ar_valid_o  ),     //lite
    .axi_ar_addr_o      (axi_ar_addr_o   ),      //lite
    .axi_ar_prot_o      (axi_ar_prot_o   ),
    .axi_ar_id_o        (axi_ar_id_o     ),
    .axi_ar_user_o      (axi_ar_user_o   ),
    .axi_ar_len_o       (axi_ar_len_o    ),       //lite
    .axi_ar_size_o      (axi_ar_size_o   ),      //lite
    .axi_ar_burst_o     (axi_ar_burst_o  ),
    .axi_ar_lock_o      (axi_ar_lock_o   ),
    .axi_ar_cache_o     (axi_ar_cache_o  ),
    .axi_ar_qos_o       (axi_ar_qos_o    ),
    .axi_ar_region_o    (axi_ar_region_o ),
    
    .axi_r_ready_o      (axi_r_ready_o ),      //lite            
    .axi_r_valid_i      (axi_r_valid_i ),      //lite            
    .axi_r_resp_i       (axi_r_resp_i  ),
    .axi_r_data_i       (axi_r_data_i  ),       //lite
    .axi_r_last_i       (axi_r_last_i  ),
    .axi_r_id_i         (axi_r_id_i    ),
    .axi_r_user_i       (axi_r_user_i  ),
//mmio
    .axi_mmio_aw_ready_i    (axi_mmio_aw_ready_i  ),
    .axi_mmio_aw_valid_o    (axi_mmio_aw_valid_o  ),
    .axi_mmio_aw_addr_o     (axi_mmio_aw_addr_o   ), 
    .axi_mmio_aw_prot_o     (axi_mmio_aw_prot_o   ),
    .axi_mmio_aw_id_o       (axi_mmio_aw_id_o     ),
    .axi_mmio_aw_user_o     (axi_mmio_aw_user_o   ),
    .axi_mmio_aw_len_o      (axi_mmio_aw_len_o    ),  
    .axi_mmio_aw_size_o     (axi_mmio_aw_size_o   ),
    .axi_mmio_aw_burst_o    (axi_mmio_aw_burst_o  ),
    .axi_mmio_aw_lock_o     (axi_mmio_aw_lock_o   ),
    .axi_mmio_aw_cache_o    (axi_mmio_aw_cache_o  ),
    .axi_mmio_aw_qos_o      (axi_mmio_aw_qos_o    ),
    .axi_mmio_aw_region_o   (axi_mmio_aw_region_o ),
    .axi_mmio_w_ready_i     (axi_mmio_w_ready_i   ), 
    .axi_mmio_w_valid_o     (axi_mmio_w_valid_o   ), 
    .axi_mmio_w_data_o      (axi_mmio_w_data_o    ),  
    .axi_mmio_w_strb_o      (axi_mmio_w_strb_o    ),  
    .axi_mmio_w_last_o      (axi_mmio_w_last_o    ),  
    .axi_mmio_w_user_o      (axi_mmio_w_user_o    ),
    .axi_mmio_b_ready_o     (axi_mmio_b_ready_o   ), 
    .axi_mmio_b_valid_i     (axi_mmio_b_valid_i   ), 
    .axi_mmio_b_resp_i      (axi_mmio_b_resp_i    ),  
    .axi_mmio_b_id_i        (axi_mmio_b_id_i      ),
    .axi_mmio_b_user_i      (axi_mmio_b_user_i    ),
    .axi_mmio_ar_ready_i    (axi_mmio_ar_ready_i  ),
    .axi_mmio_ar_valid_o    (axi_mmio_ar_valid_o  ),
    .axi_mmio_ar_addr_o     (axi_mmio_ar_addr_o   ), 
    .axi_mmio_ar_prot_o     (axi_mmio_ar_prot_o   ),
    .axi_mmio_ar_id_o       (axi_mmio_ar_id_o     ),
    .axi_mmio_ar_user_o     (axi_mmio_ar_user_o   ),
    .axi_mmio_ar_len_o      (axi_mmio_ar_len_o    ),  
    .axi_mmio_ar_size_o     (axi_mmio_ar_size_o   ), 
    .axi_mmio_ar_burst_o    (axi_mmio_ar_burst_o  ),
    .axi_mmio_ar_lock_o     (axi_mmio_ar_lock_o   ),
    .axi_mmio_ar_cache_o    (axi_mmio_ar_cache_o  ),
    .axi_mmio_ar_qos_o      (axi_mmio_ar_qos_o    ),
    .axi_mmio_ar_region_o   (axi_mmio_ar_region_o ),
    .axi_mmio_r_ready_o     (axi_mmio_r_ready_o   ), 
    .axi_mmio_r_valid_i     (axi_mmio_r_valid_i   ), 
    .axi_mmio_r_resp_i      (axi_mmio_r_resp_i    ),
    .axi_mmio_r_data_i      (axi_mmio_r_data_i    ),  
    .axi_mmio_r_last_i      (axi_mmio_r_last_i    ),
    .axi_mmio_r_id_i        (axi_mmio_r_id_i      ),
    .axi_mmio_r_user_i      (axi_mmio_r_user_i    )
);

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
    .cacheAddrOk_i  (cacheAddrOk_i),
    .cacheDataOk_i  (cacheDataOk_i),
    .sram_addr      (sram_addr),
    .sram_ren       (sram_ren),
    .sram_addr_valid(sram_addr_valid)
);

Icache cache_dut (
  .clk (clk ),
  .rst_n (rst_n ),

  .addr_i (sram_addr[31:0] ),
  .valid_i (sram_addr_valid ),
  .stall_n (if_stall_n),
  .op_i (0 ),
  .wr_data_i (0 ),
  .wr_mask_i (0 ),
  .addr_ok_o (cacheAddrOk_i ),
  .data_ok_o ( ),
  .data_notok_o(cacheDataOk_i),
  .rd_data_o (sram_rdata ),
//to AXI
  .cacheRdValid_o   (rw_valid_i ),
  .axiRdReady       (rw_ready_o ),
  .fetchLenth       (fetchLenth ),
  .rdLast_i         (rdLast_o   ),
  .cacheAddr_o      (rw_addr_i  ),
  .rdData_i         (data_read_o),
  .dataValid_i      (dataValid_o)
);
wire rw_valid_i ;
wire rw_ready_o ;
wire [7:0]fetchLenth ;
wire rdLast_o   ;
wire [31:0]rw_addr_i  ;
wire [63:0]data_read_o;
wire dataValid_o;
axi_icache axi_icache_dut (
  .clock (clk ),
  .reset (rst_n ),
  .rw_valid_i (rw_valid_i ),
  .rw_ready_o (rw_ready_o ),
  .data_read_o (data_read_o ),
  .rw_addr_i ({32'b0,rw_addr_i} ),
  .fetchLenth (fetchLenth ),
  .rdLast_o (rdLast_o ),
  .dataValid_o (dataValid_o ),

  .instr_fetching (instr_fetching ),

  .axi_ar_ready_i (if_axi_ar_ready_i ),
  .axi_ar_valid_o (if_axi_ar_valid_o ),
  .axi_ar_addr_o (if_axi_ar_addr_o ),
  .axi_ar_prot_o (if_axi_ar_prot_o ),
  .axi_ar_id_o (if_axi_ar_id_o ),
  .axi_ar_user_o (if_axi_ar_user_o ),
  .axi_ar_len_o (if_axi_ar_len_o ),
  .axi_ar_size_o (if_axi_ar_size_o ),
  .axi_ar_burst_o (if_axi_ar_burst_o ),
  .axi_ar_lock_o (if_axi_ar_lock_o ),
  .axi_ar_cache_o (if_axi_ar_cache_o ),
  .axi_ar_qos_o (if_axi_ar_qos_o ),
  .axi_ar_region_o (if_axi_ar_region_o ),

  .axi_r_ready_o (if_axi_r_ready_o ),
  .axi_r_valid_i (if_axi_r_valid_i ),
  .axi_r_resp_i (if_axi_r_resp_i ),
  .axi_r_data_i (if_axi_r_data_i ),
  .axi_r_last_i (if_axi_r_last_i ),
  .axi_r_id_i (if_axi_r_id_i ),
  .axi_r_user_i  ( if_axi_r_user_i)
);


// axi_if axi_if_u(
//     .clock          (clk),
//     .reset          (rst_n),

// 	.rw_valid_i     (sram_addr_valid),         //IF&MEM输入信号
// 	.rw_ready_o     (sram_data_valid),         //IF&MEM输入信号
//     .data_read_o    (),//sram_rdata),        //IF&MEM输入信号
//     .rw_addr_i      (sram_addr),          //IF&MEM输入信号
//     .instr_fetching (instr_fetching),

//     .axi_ar_ready_i (if_axi_ar_ready_i),     //lite              
//     .axi_ar_valid_o (if_axi_ar_valid_o),     //lite
//     .axi_ar_addr_o  (if_axi_ar_addr_o  ),      //lite
//     .axi_ar_prot_o  (if_axi_ar_prot_o  ),
//     .axi_ar_id_o    (if_axi_ar_id_o    ),
//     .axi_ar_user_o  (if_axi_ar_user_o  ),
//     .axi_ar_len_o   (if_axi_ar_len_o   ),       //lite
//     .axi_ar_size_o  (if_axi_ar_size_o  ),     //lite
//     .axi_ar_burst_o (if_axi_ar_burst_o ),
//     .axi_ar_lock_o  (if_axi_ar_lock_o  ),
//     .axi_ar_cache_o (if_axi_ar_cache_o ),
//     .axi_ar_qos_o   (if_axi_ar_qos_o   ),
//     .axi_ar_region_o(if_axi_ar_region_o),

//     .axi_r_ready_o  (if_axi_r_ready_o ),      //lite            
//     .axi_r_valid_i  (if_axi_r_valid_i ),      //lite            
//     .axi_r_resp_i   (if_axi_r_resp_i  ),
//     .axi_r_data_i   (if_axi_r_data_i  ),       //lite
//     .axi_r_last_i   (if_axi_r_last_i  ),
//     .axi_r_id_i     (if_axi_r_id_i    ),
//     .axi_r_user_i   (if_axi_r_user_i  )
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
    .is_jump_o      (is_jump),

    .exNotOk        (),
    .ls_addr_ok_i   (ls_addr_ok_i),
    .rden_ls        (rden_ls),
    .wren_ls        (wren_ls)
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

    .ls_sram_addr           (ls_sram_addr           ), //dont need anymore
    .ls_sram_rd_en          (ls_sram_rd_en          ), //         
    .ls_sram_wr_en          (ls_sram_wr_en          ), //
    .ls_sram_wr_data        (ls_sram_wr_data        ), 
    .ls_sram_wr_mask        (ls_sram_wr_mask        ),
    .ls_sram_wr_size        (ls_sram_wr_size        ), 
    .ls_sram_rd_size        (ls_sram_rd_size        ),
    .ls_sram_rd_data_valid  (dataNotOk  ),
    .ls_sram_wr_data_ok     (dataNotOk     ),
    .ls_sram_rd_data        (ls_sram_rd_data        )
);

//
wire    dataNotOk;

Dcache Dcache_u (
  .clk (clk ),
  .rst_n (rst_n ),
  //ex-part
  .addr_i ((rden_ls || wren_ls) ? alures_ex[31:0] : 'b0 ),
  .exValid_i ((rden_ls || wren_ls)),
  .lsValid_i ((ls_sram_wr_en || ls_sram_rd_en) ),
  .op_i ( ~rden_ls | wren_ls ),
  .addr_ok_o (ls_addr_ok_i ),
  //ls-part
  .wr_data_i        (ls_sram_wr_data ),
  .wr_mask_i        (ls_sram_wr_mask ),
    //这个stall可能要改
  .stall_n          (ls_stall_n ),

  .data_ok_o        ( ),
  .data_notok_o     (dataNotOk ),
  .rd_data_o        (ls_sram_rd_data ),
  //to AXI
  .cacheRdValid_o   (DcacheRdValid ),
  .axiRdReady       (lsAxiRdReady ),
  .fetchLenth       (lsFetchLenth ),
  .rdLast_i         (lsRdLast ),
  .cacheRdAddr_o    (DcacheRdAddr[31:0] ),
  .cacheWrAddr_o    (DcacheWrAddr[31:0] ),
  .rdData_i         (lsAxiRdData ),
  .dataValid_i      (lsAxiRdDataVAlid ),
  .axiWrReady       (lsAxiWrReady ),
  .cacheWrValid_o   (DcacheWrValid ),
  .cacheWrData_o    (lsAxiWrData ),
  .storeLenth       (lsStoreLenth )
);

wire        DcacheRdValid,DcacheWrValid;
wire        lsAxiRdReady;
wire [7:0]  lsFetchLenth;
wire        lsRdLast;
wire [63:0] DcacheRdAddr,DcacheWrAddr;
wire [63:0] lsAxiRdData;  
wire        lsAxiRdDataVAlid;   
wire        lsAxiWrReady;   
wire [255:0]lsAxiWrData;
wire [7:0]  lsStoreLenth;

axi_dcache axi_ls_u(
    .clock          (clk),
    .reset          (rst_n),

	.rw_valid_i     (DcacheRdValid),//ls_sram_rd_en          ),         //IF&MEM输入信号
	.rw_ready_o     (lsAxiRdReady),//ls_sram_rd_data_valid  ),         //IF&MEM输入信号
    .data_read_o    (lsAxiRdData),//ls_sram_rd_data        ),        //IF&MEM输入信号
    .rw_addr_i      (DcacheRdAddr),//ls_sram_addr           ),          //IF&MEM输入信号
    .fetchLenth     (lsFetchLenth),
    .rdLast_o       (lsRdLast),
    .dataValid_o    (lsAxiRdDataVAlid),
    .wr_valid_i     (DcacheWrValid),
    .wr_ready_o     (lsAxiWrReady),
    .cacheWrData_i  (lsAxiWrData),
    .storeLenth     (lsStoreLenth),
    .rw_w_mask_i    ('h01),
    .cacheWrAddr_i  (DcacheWrAddr),
    // .wr_valid_i     (DcacheWrValid_o),//ls_sram_wr_en          ),         //写有效
    // .wr_ok_o        (),//ls_sram_wr_data_ok     ),            //读完成
    // .rw_w_data_i    (),//ls_sram_wr_data        ),        //写数据
    // .rw_w_mask_i    (),//ls_sram_wr_mask        ), 
    // .wr_size_i      (),//ls_sram_wr_size        ),
    // .rd_size_i      (),//ls_sram_rd_size        ),       


    .axi_aw_ready_i (ls_axi_aw_ready_i ),     //lite         
    .axi_aw_valid_o (ls_axi_aw_valid_o ),     //lite
    .axi_aw_addr_o  (ls_axi_aw_addr_o  ),      //lite
    .axi_aw_prot_o  (ls_axi_aw_prot_o  ),
    .axi_aw_id_o    (ls_axi_aw_id_o    ),
    .axi_aw_user_o  (ls_axi_aw_user_o  ),
    .axi_aw_len_o   (ls_axi_aw_len_o   ),       
    .axi_aw_size_o  (ls_axi_aw_size_o  ),
    .axi_aw_burst_o (ls_axi_aw_burst_o ),
    .axi_aw_lock_o  (ls_axi_aw_lock_o  ),
    .axi_aw_cache_o (ls_axi_aw_cache_o ),
    .axi_aw_qos_o   (ls_axi_aw_qos_o   ),
    .axi_aw_region_o(ls_axi_aw_region_o),

    .axi_w_ready_i  (ls_axi_w_ready_i),      //lite              
    .axi_w_valid_o  (ls_axi_w_valid_o),      //lite
    .axi_w_data_o   (ls_axi_w_data_o ),       //lite
    .axi_w_strb_o   (ls_axi_w_strb_o ),       //lite
    .axi_w_last_o   (ls_axi_w_last_o ),  
    .axi_w_user_o   (ls_axi_w_user_o ),

    .axi_b_ready_o  (ls_axi_b_ready_o),      //lite           
    .axi_b_valid_i  (ls_axi_b_valid_i),      //lite
    .axi_b_resp_i   (ls_axi_b_resp_i ),       //lite            
    .axi_b_id_i     (ls_axi_b_id_i   ),
    .axi_b_user_i   (ls_axi_b_user_i ),

    .axi_ar_ready_i (ls_axi_ar_ready_i),     //lite              
    .axi_ar_valid_o (ls_axi_ar_valid_o),     //lite
    .axi_ar_addr_o  (ls_axi_ar_addr_o  ),      //lite
    .axi_ar_prot_o  (ls_axi_ar_prot_o  ),
    .axi_ar_id_o    (ls_axi_ar_id_o    ),
    .axi_ar_user_o  (ls_axi_ar_user_o  ),
    .axi_ar_len_o   (ls_axi_ar_len_o   ),       //lite
    .axi_ar_size_o  (ls_axi_ar_size_o  ),     //lite
    .axi_ar_burst_o (ls_axi_ar_burst_o ),
    .axi_ar_lock_o  (ls_axi_ar_lock_o  ),
    .axi_ar_cache_o (ls_axi_ar_cache_o ),
    .axi_ar_qos_o   (ls_axi_ar_qos_o   ),
    .axi_ar_region_o(ls_axi_ar_region_o),

    .axi_r_ready_o  (ls_axi_r_ready_o ),      //lite            
    .axi_r_valid_i  (ls_axi_r_valid_i ),      //lite            
    .axi_r_resp_i   (ls_axi_r_resp_i  ),
    .axi_r_data_i   (ls_axi_r_data_i  ),       //lite
    .axi_r_last_i   (ls_axi_r_last_i  ),
    .axi_r_id_i     (ls_axi_r_id_i    ),
    .axi_r_user_i   (ls_axi_r_user_i  )
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

// myip_AXI_Lite_v1_0_S00_AXI 
// #(
//   .C_S_AXI_DATA_WIDTH(`XLEN),
//   .C_S_AXI_ADDR_WIDTH (`XLEN)
// )
// ifAxiSlaveRam_u (
//   .S_AXI_ACLK (clk ),
//   .S_AXI_ARESETN (rst_n ),
//   .S_AXI_AWADDR ( ),
//   .S_AXI_AWSIZE (),
//   .S_AXI_AWPROT ( ),
//   .S_AXI_AWVALID ( ),
//   .S_AXI_AWREADY ( ),
//   .S_AXI_WDATA ( ),
//   .S_AXI_WSTRB ( ),
//   .S_AXI_WVALID ( ),
//   .S_AXI_WREADY ( ),
//   .S_AXI_BRESP ( ),
//   .S_AXI_BVALID ( ),
//   .S_AXI_BREADY ( ),
//   .S_AXI_ARADDR (if_axi_ar_addr_o ),
//   .S_AXI_ARPROT (if_axi_ar_prot_o ),
//   .S_AXI_ARVALID (if_axi_ar_valid_o ),
//   .S_AXI_ARREADY (if_axi_ar_ready_i ),
//   .S_AXI_ARSIZE (if_axi_ar_size_o ),
//   .S_AXI_RDATA (if_axi_r_data_i ),
//   .S_AXI_RRESP (if_axi_r_resp_i ),
//   .S_AXI_RVALID (if_axi_r_valid_i ),
//   .S_AXI_RREADY  ( if_axi_r_ready_o)
// );

// myip_AXI_Lite_v1_0_S00_AXI 
// #(
//   .C_S_AXI_DATA_WIDTH(`XLEN),
//   .C_S_AXI_ADDR_WIDTH (`XLEN)
// )
// lsAxiSlaveRam_u (
//   .S_AXI_ACLK (clk ),
//   .S_AXI_ARESETN (rst_n ),
//   .S_AXI_AWADDR (ls_axi_aw_addr_o ),
//   .S_AXI_AWPROT (ls_axi_aw_prot_o ),
//   .S_AXI_AWSIZE (ls_axi_aw_size_o),
//   .S_AXI_AWVALID (ls_axi_aw_valid_o ),
//   .S_AXI_AWREADY (ls_axi_aw_ready_i ),
//   .S_AXI_WDATA (ls_axi_w_data_o ),
//   .S_AXI_WSTRB (ls_axi_w_strb_o ),
//   .S_AXI_WVALID (ls_axi_w_valid_o ),
//   .S_AXI_WREADY (ls_axi_w_ready_i ),
//   .S_AXI_BRESP (ls_axi_b_resp_i ),
//   .S_AXI_BVALID (ls_axi_b_valid_i ),
//   .S_AXI_BREADY (ls_axi_b_ready_o ),
//   .S_AXI_ARADDR (ls_axi_ar_addr_o ),
//   .S_AXI_ARPROT (ls_axi_ar_prot_o ),
//   .S_AXI_ARVALID (ls_axi_ar_valid_o ),
//   .S_AXI_ARREADY (ls_axi_ar_ready_i ),
//   .S_AXI_ARSIZE (ls_axi_ar_size_o ),
//   .S_AXI_RDATA (ls_axi_r_data_i ),
//   .S_AXI_RRESP (ls_axi_r_resp_i ),
//   .S_AXI_RVALID (ls_axi_r_valid_i ),
//   .S_AXI_RREADY  ( ls_axi_r_ready_o)
// );

endmodule //top

