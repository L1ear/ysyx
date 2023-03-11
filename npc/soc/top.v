module ysyx_22040734 (
    input                           clock,
    input                           reset,
    input                           io_interrupt,

    input                               io_master_arready,          
    output                              io_master_arvalid,    
    output [31:0]         io_master_araddr,     
    output [3:0]           io_master_arid,
    output [7:0]                        io_master_arlen,      
    output [2:0]                        io_master_arsize,     
    output [1:0]                        io_master_arburst,
    
    output                              io_master_rready,         
    input                               io_master_rvalid,         
    input  [1:0]                        io_master_rresp,
    input  [63:0]         io_master_rdata,       
    input                               io_master_rlast,
    input  [3:0]           io_master_rid,

    input                               io_master_awready,    
    output                              io_master_awvalid,    
    output [31:0]         io_master_awaddr,      
    output [3:0]           io_master_awid,
    output [7:0]                        io_master_awlen,       
    output [2:0]                        io_master_awsize,
    output [1:0]                        io_master_awburst,

    input                               io_master_wready,             
    output                              io_master_wvalid,     
    output [63:0]         io_master_wdata,       
    output [7:0]       io_master_wstrb,       
    output                              io_master_wlast,
        
    output                              io_master_bready,             
    input                               io_master_bvalid,     
    input  [1:0]                        io_master_bresp,              
    input  [3:0]           io_master_bid,

    output                              io_slave_awready,
    input                               io_slave_awvalid,
    input [3:0]                          io_slave_awid,  
    input   [31:0]                         io_slave_awaddr ,
    input   [7:0]                          io_slave_awlen  ,
    input   [2:0]                          io_slave_awsize ,
    input   [1:0]                          io_slave_awburst,
    output                              io_slave_wready ,
    input                               io_slave_wvalid ,
    input [63:0]                         io_slave_wdata  ,
    input [7:0]                          io_slave_wstrb  ,
    input                               io_slave_wlast  ,
    input                               io_slave_bready ,
    output                              io_slave_bvalid,
    output [3:0]                         io_slave_bid ,
    output [1:0]                         io_slave_bresp,
    output                              io_slave_arready,
    input                               io_slave_arvalid,
    input [3:0]                          io_slave_arid   ,
    input [31:0]                         io_slave_araddr ,
    input [7:0]                          io_slave_arlen ,
    input [2:0]                          io_slave_arsize ,
    input [1:0]                          io_slave_arburst,
    input                               io_slave_rready ,
    output                              io_slave_rvalid ,
    output [3:0]                         io_slave_rid    ,
    output [1:0]                         io_slave_rresp  ,
    output [63:0]                        io_slave_rdata  ,
    output                              io_slave_rlast  ,


    output  [5:0]                         io_sram0_addr,    
    output                              io_sram0_cen,     
    output                              io_sram0_wen,     
    output [127:0]                       io_sram0_wmask,   
    output [127:0]                       io_sram0_wdata,   
    input [127:0]                        io_sram0_rdata,   

    output [5:0]                         io_sram1_addr,    
    output                              io_sram1_cen,     
    output                              io_sram1_wen,     
    output [127:0]                       io_sram1_wmask,   
    output [127:0]                       io_sram1_wdata,   
    input [127:0]                        io_sram1_rdata,  

    output [5:0]                         io_sram2_addr,    
    output                              io_sram2_cen,     
    output                              io_sram2_wen,     
    output [127:0]                       io_sram2_wmask,   
    output [127:0]                       io_sram2_wdata,   
    input [127:0]                        io_sram2_rdata,  

    output [5:0]                         io_sram3_addr,    
    output                              io_sram3_cen,     
    output                              io_sram3_wen,     
    output [127:0]                       io_sram3_wmask,   
    output [127:0]                       io_sram3_wdata,   
    input [127:0]                        io_sram3_rdata,  

    output [5:0]                         io_sram4_addr,    
    output                              io_sram4_cen,     
    output                              io_sram4_wen,     
    output [127:0]                       io_sram4_wmask,   
    output [127:0]                       io_sram4_wdata,   
    input [127:0]                        io_sram4_rdata, 

    output [5:0]                         io_sram5_addr,    
    output                              io_sram5_cen,     
    output                              io_sram5_wen,     
    output [127:0]                       io_sram5_wmask,   
    output [127:0]                       io_sram5_wdata,   
    input [127:0]                        io_sram5_rdata,   

    output [5:0]                         io_sram6_addr,    
    output                              io_sram6_cen,     
    output                              io_sram6_wen,     
    output  [127:0]                       io_sram6_wmask,   
    output  [127:0]                       io_sram6_wdata,   
    input [127:0]                        io_sram6_rdata,  

    output [5:0]                         io_sram7_addr,    
    output                              io_sram7_cen,     
    output                              io_sram7_wen,     
    output [127:0]                       io_sram7_wmask,   
    output [127:0]                       io_sram7_wdata,   
    input [127:0]                        io_sram7_rdata   

);
localparam  RW_DATA_WIDTH     = 64;
localparam  RW_ADDR_WIDTH     = 64;
localparam  AXI_DATA_WIDTH    = 64;
localparam  AXI_ADDR_WIDTH    = 64;
localparam  AXI_ID_WIDTH      = 4;
localparam  AXI_STRB_WIDTH    = AXI_DATA_WIDTH/8;
localparam  AXI_USER_WIDTH    = 1;
wire clk = clock;
wire rst_n = ~reset;

wire                              axi_ar_ready_i = io_master_arready;     //lite              
wire                              axi_ar_valid_o;     //lite
wire [AXI_ADDR_WIDTH-1:0]         axi_ar_addr_o;      //lite
wire [2:0]                        axi_ar_prot_o;
wire [AXI_ID_WIDTH-1:0]           axi_ar_id_o;
wire [AXI_USER_WIDTH-1:0]         axi_ar_user_o;
wire [7:0]                        axi_ar_len_o;       //lite
wire [2:0]                        axi_ar_size_o;      //lite
wire [1:0]                        axi_ar_burst_o;
wire                              axi_ar_lock_o;
wire [3:0]                        axi_ar_cache_o;
wire [3:0]                        axi_ar_qos_o;
wire [3:0]                        axi_ar_region_o;

wire                              axi_r_ready_o;      //lite            
wire                              axi_r_valid_i = io_master_rvalid;      //lite            
wire [1:0]                        axi_r_resp_i = io_master_rresp;
wire [AXI_DATA_WIDTH-1:0]         axi_r_data_i = io_master_rdata;       //lite
wire                              axi_r_last_i = io_master_rlast;
wire [AXI_ID_WIDTH-1:0]           axi_r_id_i = io_master_rid;
wire [AXI_USER_WIDTH-1:0]         axi_r_user_i = 'b0;

wire                              axi_aw_ready_i = io_master_awready;     //lite        
wire                              axi_aw_valid_o;     //lite
wire [AXI_ADDR_WIDTH-1:0]         axi_aw_addr_o;      //lite
wire [2:0]                        axi_aw_prot_o;
wire [AXI_ID_WIDTH-1:0]           axi_aw_id_o;
wire [AXI_USER_WIDTH-1:0]         axi_aw_user_o;
wire [7:0]                        axi_aw_len_o;       
wire [2:0]                        axi_aw_size_o;
wire [1:0]                        axi_aw_burst_o;
wire                              axi_aw_lock_o;
wire [3:0]                        axi_aw_cache_o;
wire [3:0]                        axi_aw_qos_o;
wire [3:0]                        axi_aw_region_o;
wire                              axi_w_ready_i = io_master_wready;      //lite        
wire                              axi_w_valid_o;      //lite
wire [AXI_DATA_WIDTH-1:0]         axi_w_data_o;       //lite
wire [AXI_DATA_WIDTH/8-1:0]       axi_w_strb_o;       //lite
wire                              axi_w_last_o;
wire [AXI_USER_WIDTH-1:0]         axi_w_user_o;

wire                              axi_b_ready_o;      //lite        
wire                              axi_b_valid_i = io_master_bvalid;      //lite
wire [1:0]                        axi_b_resp_i = io_master_bresp;       //lite        
wire [AXI_ID_WIDTH-1:0]           axi_b_id_i = io_master_bid;
wire [AXI_USER_WIDTH-1:0]         axi_b_user_i = 'b0;

assign io_master_arvalid =        axi_ar_valid_o;     //lite
assign io_master_araddr =         axi_ar_addr_o[31:0];      //lite
assign io_master_arid  =          axi_ar_id_o;
assign io_master_arlen =          axi_ar_len_o;       //lite
assign io_master_arsize =         axi_ar_size_o;      //lite
assign io_master_arburst =        axi_ar_burst_o;

assign io_master_rready =         axi_r_ready_o;

assign io_master_awvalid =        axi_aw_valid_o;
assign io_master_awid =           axi_aw_id_o;
assign io_master_awaddr =         axi_aw_addr_o[31:0];
assign io_master_awlen =          axi_aw_len_o;
assign io_master_awsize =         axi_aw_size_o;
assign io_master_awburst =        axi_aw_burst_o;

assign io_master_wvalid =         axi_w_valid_o;
assign io_master_wdata =          axi_w_data_o;
assign io_master_wstrb =          axi_w_strb_o;
assign io_master_wlast =          axi_w_last_o;
assign io_master_bready =         axi_b_ready_o;

assign io_slave_awready = 'b0;
assign io_slave_wready  = 'b0;
assign io_slave_bvalid  = 'b0;
assign io_slave_bid     = 'b0;
assign io_slave_bresp   = 'b0;
assign io_slave_arready = 'b0;
assign io_slave_rvalid  = 'b0;
assign io_slave_rid     = 'b0;
assign io_slave_rresp   = 'b0;
assign io_slave_rdata   = 'b0;
assign io_slave_rlast   = 'b0;


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

// //for verilator
// assign  pc_diff = pc_wb;
// assign  pc_decoding = pc_id;
// assign  instr_diff = instr_wb;
// assign  stall_n_diff = wb_stall_n;

axi_arbiter axi_arbiter_u(
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
    .axi_r_user_i       (axi_r_user_i  )
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
    .cacheAddrOk_i  (cacheAddrOk_i),
    .cacheDataOk_i  (cacheDataOk_i),
    .sram_addr      (sram_addr),
    .sram_ren       (sram_ren),
    .sram_addr_valid(sram_addr_valid)
);

wire unused1;

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
  .data_ok_o (unused1 ),
  .data_notok_o(cacheDataOk_i),
  .rd_data_o (sram_rdata ),
//to AXI
  .cacheRdValid_o   (rw_valid_i ),
  .axiRdReady       (rw_ready_o ),
  .fetchLenth       (fetchLenth ),
  .rdLast_i         (rdLast_o   ),
  .cacheAddr_o      (rw_addr_i  ),
  .rdData_i         (data_read_o),
  .dataValid_i      (dataValid_o),

  .io_sram0_addr    (io_sram0_addr   ),   
  .io_sram0_cen     (io_sram0_cen    ),    
  .io_sram0_wen     (io_sram0_wen    ),    
  .io_sram0_wmask   (io_sram0_wmask  ),  
  .io_sram0_wdata   (io_sram0_wdata  ),  
  .io_sram0_rdata   (io_sram0_rdata  ),  
  .io_sram1_addr    (io_sram1_addr   ),   
  .io_sram1_cen     (io_sram1_cen    ),    
  .io_sram1_wen     (io_sram1_wen    ),    
  .io_sram1_wmask   (io_sram1_wmask  ),  
  .io_sram1_wdata   (io_sram1_wdata  ),  
  .io_sram1_rdata   (io_sram1_rdata  ),  
  .io_sram2_addr    (io_sram2_addr   ),   
  .io_sram2_cen     (io_sram2_cen    ),    
  .io_sram2_wen     (io_sram2_wen    ),    
  .io_sram2_wmask   (io_sram2_wmask  ),  
  .io_sram2_wdata   (io_sram2_wdata  ),  
  .io_sram2_rdata   (io_sram2_rdata  ),  
  .io_sram3_addr    (io_sram3_addr   ),   
  .io_sram3_cen     (io_sram3_cen    ),    
  .io_sram3_wen     (io_sram3_wen    ),    
  .io_sram3_wmask   (io_sram3_wmask  ),  
  .io_sram3_wdata   (io_sram3_wdata  ),  
  .io_sram3_rdata   (io_sram3_rdata)
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

wire unused2;

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

    .exNotOk        (unused2),
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
    .stall_n        (ls_stall_n),

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
wire    unused3;

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

//   .data_ok_o        (unused3 ),
  .data_notok_o     (dataNotOk ),
  .rd_data_o        (ls_sram_rd_data ),
  //to AXI
  .ls_sram_wr_size        (ls_sram_wr_size        ), 
  .ls_sram_rd_size        (ls_sram_rd_size        ),
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
  .storeLenth       (lsStoreLenth ),
  .cacheWrMask_o    (lsStoreMask),
  .cacheWrSize_o    (lsStoreSize),
  .cacheRdSize_o    (lsLoadSize),

  .io_sram4_addr    (io_sram4_addr    ),    
  .io_sram4_cen     (io_sram4_cen     ),     
  .io_sram4_wen     (io_sram4_wen     ),     
  .io_sram4_wmask   (io_sram4_wmask   ),   
  .io_sram4_wdata   (io_sram4_wdata   ),   
  .io_sram4_rdata   (io_sram4_rdata ), 
  .io_sram5_addr    (io_sram5_addr    ),       
  .io_sram5_cen     (io_sram5_cen     ),     
  .io_sram5_wen     (io_sram5_wen     ),     
  .io_sram5_wmask   (io_sram5_wmask   ),   
  .io_sram5_wdata   (io_sram5_wdata   ),   
  .io_sram5_rdata   (io_sram5_rdata   ),   
  .io_sram6_addr    (io_sram6_addr    ),    
  .io_sram6_cen     (io_sram6_cen     ),     
  .io_sram6_wen     (io_sram6_wen     ),     
  .io_sram6_wmask   (io_sram6_wmask   ),   
  .io_sram6_wdata   (io_sram6_wdata   ),   
  .io_sram6_rdata   (io_sram6_rdata  ),  
  .io_sram7_addr    (io_sram7_addr    ),    
  .io_sram7_cen     (io_sram7_cen     ),     
  .io_sram7_wen     (io_sram7_wen     ),     
  .io_sram7_wmask   (io_sram7_wmask   ),   
  .io_sram7_wdata   (io_sram7_wdata   ),   
  .io_sram7_rdata   (io_sram7_rdata)
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
wire [7:0]  lsStoreMask;
wire [2:0]  lsStoreSize,lsLoadSize;

assign DcacheRdAddr[63:32] = 'b0;
assign DcacheWrAddr[63:32] = 'b0;

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
    .storeSize      (lsStoreSize),
    .loadSize      (lsLoadSize),
    .rw_w_mask_i    (lsStoreMask),
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




endmodule //top