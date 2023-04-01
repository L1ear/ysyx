
// import "DPI-C" function void ebreak();
// import "DPI-C" function void difftest_step(input longint pc);



`define		XLEN	            64
`define     addr_width          32
`define     reg_addr_width      5

`define     csrAddrWidth        12

`define     inst_len            32

`define     RegfileAddrWidth    5

`define     ecallArg            5'd17           //R(17)

//fw_src_sel
`define     rf                  2'b00
`define     ex                  2'b01
`define     ls                  2'b10
`define     wb                  2'b11

//immediate expension opcode(one-hot-code)
`define     immI                5'b00001
`define     immU                5'b00010
`define     immS                5'b00100
`define     immJ                5'b01000
`define     immB                5'b10000
`define     immZI               5'b10001

//OpCode defines
`define     system              5'b11100
`define     lui                 5'b01101
`define     auipc               5'b00101
`define     OP_IMM              5'b00100
`define     OP_IMM_32           5'b00110
`define     OP_REG              5'b01100
`define     OP_REG_32           5'b01110
`define     jal                 5'b11011
`define     jalr                5'b11001
`define     branch              5'b11000
`define     load                5'b00000
`define     store               5'b01000
`define     fence               5'b00011

//src1 select defines
`define     Rs1                 1'b0
`define     PC                  1'b1

//src2 select defines
`define     Rs2                 2'b00
`define     imm                 2'b01
`define     src_4               2'b11
`define     src_0               2'b10

//fun3 defines
//OP_REG
`define     add_sub             3'b000
`define     sll                 3'b001
`define     slt                 3'b010
`define     sltu                3'b011
`define     Xor                 3'b100
`define     sr_l_a              3'b101
`define     Or                  3'b110
`define     And                 3'b111
//OP_IMM
`define     addi                3'b000
`define     slli                3'b001
`define     slti                3'b010
`define     sltiu               3'b011
`define     Xori                3'b100
`define     sri_l_a             3'b101
`define     Ori                 3'b110
`define     Andi                3'b111
//branch op defines
`define     Beq                 3'b000
`define     Bne                 3'b001
`define     Blt                 3'b100
`define     Bge                 3'b101
`define     Bltu                3'b110
`define     Bgeu                3'b111
//save or load 
`define     sb                  3'b000
`define     sh                  3'b001
`define     sw                  3'b010
`define     sd                  3'b011
`define     lb                  3'b000
`define     lbu                 3'b100
`define     lh                  3'b001
`define     lhu                 3'b101
`define     lw                  3'b010
`define     lwu                 3'b110
`define     ld                  3'b011
//syscall
`define     env                 3'b000
`define     csrrw               3'b001
`define     csrrwi              3'b101
`define     csrrs               3'b010
`define     csrrsi               3'b110
`define     csrrc               3'b011
`define     csrrci              3'b111

//ALU out sel
`define     out_64              1'b0
`define     out_32              1'b1

//Register write control
`define     AluOut              1'b0
`define     DmemOut             1'b1
//branch control defines
`define     NonBranch           3'b000
`define     JalCon              3'b001                 
`define     JalrCon             3'b010
`define     BeqCon              3'b100
`define     BneCon              3'b101
`define     BltCon              3'b110
`define     BgeCon              3'b111
//ALu control defines
`define     AluAdd_64           5'b00000
`define     AluAdd_32           5'b10000
`define     AluSub_64           5'b01000
`define     AluSub_32           5'b11000
`define     AluSll_64           5'b00001
`define     AluSll_32           5'b10001
`define     AluSlt              5'b00010
`define     AluSltu             5'b01010
`define     AluSrc2             5'b00011
`define     AluXor              5'b00100
`define     AluSrl_64           5'b00101
`define     AluSrl_32           5'b10101
`define     AluSra_64           5'b01101
`define     AluSra_32           5'b11101
`define     AluOr               5'b00110
`define     AluAnd              5'b00111
//DIVIDER controls
`define     DivMul              3'b000
`define     DivMulh             3'b001
`define     DivMulhsu           3'b010
`define     DivMulhu            3'b011
`define     DivDiv              3'b100
`define     DivDivu             3'b101
`define     DivRem              3'b110
`define     DivRemu             3'b111

//mcause define
`define     ecall_m             64'd11

//CSR defines
`define     mepc                12'h341
`define     mtvec               12'h305
`define     mstatus             12'h300
`define     mcause              12'h342

`define     csrrw               3'b001
`define     csrrs               3'b010
`define     csrrc               3'b011

`define AXI_BURST_TYPE_FIXED                                2'b00               //突发类型  FIFO
`define AXI_BURST_TYPE_INCR                                 2'b01               //ram  
`define AXI_BURST_TYPE_WRAP                                 2'b10
// Access permissions
`define AXI_PROT_UNPRIVILEGED_ACCESS                        3'b000
`define AXI_PROT_PRIVILEGED_ACCESS                          3'b001
`define AXI_PROT_SECURE_ACCESS                              3'b000
`define AXI_PROT_NON_SECURE_ACCESS                          3'b010
`define AXI_PROT_DATA_ACCESS                                3'b000
`define AXI_PROT_INSTRUCTION_ACCESS                         3'b100
// Memory types (AR)
`define AXI_ARCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
`define AXI_ARCACHE_DEVICE_BUFFERABLE                       4'b0001
`define AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
`define AXI_ARCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
`define AXI_ARCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b1010
`define AXI_ARCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b1110
`define AXI_ARCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1010
`define AXI_ARCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
`define AXI_ARCACHE_WRITE_BACK_NO_ALLOCATE                  4'b1011
`define AXI_ARCACHE_WRITE_BACK_READ_ALLOCATE                4'b1111
`define AXI_ARCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1011
`define AXI_ARCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111
// Memory types (AW)
`define AXI_AWCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
`define AXI_AWCACHE_DEVICE_BUFFERABLE                       4'b0001
`define AXI_AWCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
`define AXI_AWCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
`define AXI_AWCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b0110
`define AXI_AWCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b0110
`define AXI_AWCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1110
`define AXI_AWCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
`define AXI_AWCACHE_WRITE_BACK_NO_ALLOCATE                  4'b0111
`define AXI_AWCACHE_WRITE_BACK_READ_ALLOCATE                4'b0111
`define AXI_AWCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1111
`define AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111

`define AXI_SIZE_BYTES_1                                    3'b000                //突发宽度一个数据的宽度
`define AXI_SIZE_BYTES_2                                    3'b001
`define AXI_SIZE_BYTES_4                                    3'b010
`define AXI_SIZE_BYTES_8                                    3'b011
`define AXI_SIZE_BYTES_16                                   3'b100
`define AXI_SIZE_BYTES_32                                   3'b101
`define AXI_SIZE_BYTES_64                                   3'b110
`define AXI_SIZE_BYTES_128                                  3'b111

// `define                         5'
// `define                         5'
// `define                         5'
//TO DO
// `define     NOP                 32'b0000000_00000_00000_000_00000_0010011           //NOP


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

wire                    ex_not_ok;

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
wire [63 : 0]                         clint_axi_araddr;
wire [2 : 0]                          clint_axi_arprot;
wire                                  clint_axi_arvalid;
wire                                  clint_axi_arready;
wire [2:0]                            clint_axi_arsize;

wire  [63 : 0]                        clint_axi_rdata;
wire  [1 : 0]                         clint_axi_rresp;
wire                                  clint_axi_rvalid;
wire                                  clint_axi_rready;   

wire [2:0]                            clint_axi_awsize;
wire [63 : 0]                         clint_axi_awaddr;
wire [2 : 0]                          clint_axi_awprot;
wire                                  clint_axi_awvalid;
wire                                  clint_axi_awready;

wire [63 : 0]                         clint_axi_wdata;
wire [7 : 0]                          clint_axi_wstrb;
wire                                  clint_axi_wvalid;
wire                                  clint_axi_wready;

wire  [1 : 0]                         clint_axi_bresp;
wire                                  clint_axi_bvalid;
wire                                  clint_axi_bready;
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
    .axi_r_user_i       (axi_r_user_i  ),
    .clint_axi_araddr   (clint_axi_araddr ),
    .clint_axi_arprot   (clint_axi_arprot ),
    .clint_axi_arvalid  (clint_axi_arvalid),
    .clint_axi_arready  (clint_axi_arready),
    .clint_axi_arsize   (clint_axi_arsize ),

    .clint_axi_rdata    (clint_axi_rdata ),
    .clint_axi_rresp    (clint_axi_rresp ),
    .clint_axi_rvalid   (clint_axi_rvalid),
    .clint_axi_rready   (clint_axi_rready),   

    .clint_axi_awsize   (clint_axi_awsize ),
    .clint_axi_awaddr   (clint_axi_awaddr ),
    .clint_axi_awprot   (clint_axi_awprot ),
    .clint_axi_awvalid  (clint_axi_awvalid),
    .clint_axi_awready  (clint_axi_awready),

    .clint_axi_wdata    (clint_axi_wdata ),
    .clint_axi_wstrb    (clint_axi_wstrb ),
    .clint_axi_wvalid   (clint_axi_wvalid),  
    .clint_axi_wready   (clint_axi_wready),

    .clint_axi_bresp    (clint_axi_bresp  ),
    .clint_axi_bvalid   (clint_axi_bvalid ),
    .clint_axi_bready   (clint_axi_bready )
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
    .in_intr_ls     (in_intr_ls),

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
  .clrValid     (clear_Icache),
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
wire fence_id,fence_ex;
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
    .out_trap_id    (out_trap_id),
    .fence_id       (fence_id)
);

wire    ld_csr_hazard;
hazard_detect hazard_detect_u(
    .instr_id_i     (instr_id),
    .instr_ex_i     (instr_ex),
    .instr_ls_i     (instr_ls),
    .instr_wb_i     (instr_wb),
    
    .ld_use_hazard  (ld_use_hazard),
    .ld_csr_hazard  (ld_csr_hazard)
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
    .fence_ex_reg_i (fence_id),


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
    .trap_ex_reg_o  (trap_ex),
    .fence_ex_reg_o     (fence_ex)
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

    .exNotOk        (ex_not_ok),
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

wire ls_flush;
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
    .flush_i        (ls_flush),
    .fence_ls_reg_i (fence_ex),

    .PC_ls_reg_o    (pc_ls),
    .instr_ls_reg_o (instr_ls),
    .rs2_ls_reg_o   (rs2_ls),
    .alures_ls_reg_o(alures_ls),
    .wben_ls_reg_o  (wben_ls),
    .trap_ls_reg_o  (trap_ls),
    .fence_ls_reg_o (fence_ls)
);

wire    in_intr_ls;
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
    .wb_csr_data_i  (csrdata_wb),
    .trap_ls_i      (trap_ls),
    .ls_not_ok      (ls_not_ok),
    .stall_n        (ls_stall_n),
    .if_stall_n     (if_stall_n),

    .ls_res_o       (lsres_ls),
    .csr_data_o     (csrdata_ls),
    .mtvec_o        (csr_mtvec),
    .mepc_o         (csr_mepc),
    .in_intr_ls     (in_intr_ls),
    .ld_csr_hazard  (ld_csr_hazard),

    .wb_pc          (pc_wb),
    .ex_pc          (pc_ex),
    .id_pc          (pc_id),
    .if_pc          (pc_new),

    .clint_axi_araddr   (clint_axi_araddr ),
    .clint_axi_arprot   (clint_axi_arprot ),
    .clint_axi_arvalid  (clint_axi_arvalid),
    .clint_axi_arready  (clint_axi_arready),
    .clint_axi_arsize   (clint_axi_arsize ),

    .clint_axi_rdata    (clint_axi_rdata ),
    .clint_axi_rresp    (clint_axi_rresp ),
    .clint_axi_rvalid   (clint_axi_rvalid),
    .clint_axi_rready   (clint_axi_rready),   

    .clint_axi_awsize   (clint_axi_awsize ),
    .clint_axi_awaddr   (clint_axi_awaddr ),
    .clint_axi_awprot   (clint_axi_awprot ),
    .clint_axi_awvalid  (clint_axi_awvalid),
    .clint_axi_awready  (clint_axi_awready),

    .clint_axi_wdata    (clint_axi_wdata ),
    .clint_axi_wstrb    (clint_axi_wstrb ),
    .clint_axi_wvalid   (clint_axi_wvalid),  
    .clint_axi_wready   (clint_axi_wready),

    .clint_axi_bresp    (clint_axi_bresp  ),
    .clint_axi_bvalid   (clint_axi_bvalid ),
    .clint_axi_bready   (clint_axi_bready ),

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

wire    fence_ls;
wire    clear_Icache;
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
  .fence_clean      (fence_ex),
  .clear_Icache     (clear_Icache),

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
    .ex_not_ok          (ex_not_ok),
    .ls_not_ok          (ls_not_ok),
    .in_intr_ls         (in_intr_ls),
    .fence_ex           (fence_ex),
    .fence_id           (fence_id),
    .fence_ls           (fence_ls),
    
    .pc_stall_n         (pc_stall_n),
    .if_stall_n         (if_stall_n),
    .id_stall_n         (id_stall_n),
    .ex_stall_n         (ex_stall_n),
    .ls_stall_n         (ls_stall_n),
    .wb_stall_n         (wb_stall_n),
    .id_flush           (id_flush),
    .ex_flush           (ex_flush),
    .ls_flush           (ls_flush)
);




endmodule //top
module ID_stage (
    input                           clk,rst_n,
    input           [`XLEN-1:0]     pc_i,
    input           [`XLEN-1:0]     pc_wb_i,                    //for diff-test
    input           [`inst_len-1:0] instr_wb_i,                 //for ebreak
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
// wire                    is_jalr,is_jal,is_brc;
wire    [`XLEN-1:0]     imm;
wire    [`XLEN-1:0]     rs1,rs2;
// wire    [`4     :0]     rs1_idx,rs2_idx;
// wire                    src1sel;
// wire    [1      :0]     src2sel;

assign rs2_o = rs2;
assign rs1_o = rs1;
assign imm_o = imm;

// assign src1_o = src1sel ? pc_i : rs1;
// assign src2_o = src2sel[1] ? `XLEN'd4 :
//                             src2sel[0] ? imm : rs2;
decoder decoder_u(
    .pc_i(pc_i),
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
    .rs1_addr_i(rs1_idx),
    .rs1_data_o(rs1),
    .rs2_addr_i(rs2_idx),
    .rs2_data_o(rs2),
    .wr_addr_i(wb_rdid_i),
    .wr_data_i(wb_data_i),
    .wr_en(wb_wren_i),
    .pc_wb(pc_wb_i),

    .instr_wb_i(instr_wb_i)
);
// bcu bcu_u(
//     .rs1_i(rs1),
//     .rs2_i(rs2),
//     .is_jalr_i(is_jalr),
//     .is_jal_i(is_jal),
//     .is_brc_i(is_brc),
//     .fun_3(instr_i[14:12]),
//     .imm_i(imm),
//     .pc_i(pc_i),
//     .brc_pc_o(pc_next_o),
//     .is_jump_o(is_jump_o)
// );

endmodule




module CSR (
    input                           clk,rst_n,
    input           [`XLEN-1:0]     pc_i,
    input           [63:0]          wb_pc,
    input           [63:0]          ex_pc,id_pc,if_pc,
    input           [`inst_len-1:0] instr_i,
    // input                           csr_wr_en,
    // input           [11     :0]     csr_idx,   
    input           [`XLEN-1:0]     csr_wr_data,
    input                           trap,
    input                           stall_n,

    input                           timer_int_i,
    output                          in_intr_ls,

    output          [`XLEN-1:0]     csr_data_o,
    output          [`XLEN-1:0]     mtvec_o,mepc_o
);
// mtvec,mepc,mcause,mstatus//mie,mip,mscratch,mtval
assign  mtvec_o = mtvec;
assign  mepc_o = mepc;


//commitPC:保存最后提交的一条质量pc
reg [63:0]  commitPC;
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        commitPC <= 'b0;
    end
    else if((|wb_pc)) begin
        commitPC <= wb_pc;
    end
end

wire    csrrw = (instr_i[14:12] == `csrrw) || (instr_i[14:12] == `csrrwi);
wire    csrrs = (instr_i[14:12] == `csrrs) || (instr_i[14:12] == `csrrsi);
wire    csrrc = (instr_i[14:12] == `csrrc) || (instr_i[14:12] == `csrrci);

wire    system = (instr_i[6:2] == `system);
// wire    trap = (instr_i[14:12] == 3'b0) & system;
wire    csr_wr_en;
assign  csr_wr_en = (csrrw | csrrs | csrrc) & system;    

//有例外发生时，在这里添加使能条件

wire sel_mepc       = (instr_i[31:20] == 12'h341) & csr_wr_en;
wire sel_mtvec      = (instr_i[31:20] == 12'h305) & csr_wr_en;
wire sel_mstatus    = (instr_i[31:20] == 12'h300) & csr_wr_en;
wire sel_mcause     = (instr_i[31:20] == 12'h342) & csr_wr_en;
wire sel_mie        = (instr_i[31:20] == 12'h304) & csr_wr_en;
wire sel_mip        = (instr_i[31:20] == 12'h344) & csr_wr_en;

assign  csr_data_o = `XLEN'b0                             //在各个csr未被选中使能时不发生翻转，降低功耗
                        |({`XLEN{sel_mepc}} & mepc)
                        |({`XLEN{sel_mtvec}} & mtvec)
                        |({`XLEN{sel_mstatus}} & mstatus)
                        |({`XLEN{sel_mcause}} & mcause);

//即将被写入的数据
wire    [`XLEN-1:0]     rw = csr_wr_data;
wire    [`XLEN-1:0]     rs = csr_wr_data | csr_data_o;
wire    [`XLEN-1:0]     rc = (~csr_wr_data) & csr_data_o;

wire    [`XLEN-1:0]     wr_data = `XLEN'b0                            
                                |({`XLEN{csrrw}} & rw)
                                |({`XLEN{csrrs}} & rs)
                                |({`XLEN{csrrc}} & rc);

//0x341 R&W mepc
reg     [`XLEN-1:0]     mepc;
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        mepc <= `XLEN'b0;
    end
    else if((sel_mepc | trap | in_intr_ls) && stall_n) begin
        mepc[`XLEN-1:2]<= (trap ) ? pc_i[`XLEN-1:2] : in_intr_ls ? |(ex_pc[`XLEN-1:2]) ? ex_pc[`XLEN-1:2] : |(id_pc[`XLEN-1:2]) ? id_pc[`XLEN-1:2] : if_pc[`XLEN-1:2] : wr_data[`XLEN-1:2];
        //interupt时pc+4
    end
end

//0x305 R&W mtvec
reg     [`XLEN-1:0]     mtvec;
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        mtvec <= `XLEN'b0;
    end
    else if(sel_mtvec && stall_n) begin
        mtvec[`XLEN-1:2] <= wr_data[`XLEN-1:2];
    end
end

//0x300 R&W mstatus
//We only use MIE,MPIE
reg     [`XLEN-1:0]     mstatus;
wire                    mstatus_MIE = mstatus[3];
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        mstatus <= `XLEN'ha00001800;
    end
    else if((sel_mstatus | trap | in_intr_ls) && stall_n) begin
        mstatus <= (trap || in_intr_ls) ? ((system & ~instr_i[21] & (instr_i[14:12]==3'b0))||in_intr_ls) ? {mstatus[`XLEN-1:13],2'b11,mstatus[10:8],mstatus[3],mstatus[6:4],1'b0,      mstatus[2:0]}
                                                                          : {mstatus[`XLEN-1:8]                     ,1'b1,      mstatus[6:4],mstatus[7],mstatus[2:0]} :      //此处暂未正确实现
                                                                            wr_data;
    end
end
//mcause更新策略
wire [`XLEN-1:0]    mcause_n;
assign  mcause_n = system ? `XLEN'd11 : in_intr_ls ? `XLEN'h8000000000000007
                                                     : `XLEN'b0;   //支持ecall，暂时
                                                    //时钟中断为0x8000000000000007


//0x342 R&W mcause
reg     [`XLEN-1:0]     mcause;
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        mcause <= `XLEN'h0;
    end
    else if((sel_mcause | trap |in_intr_ls) && stall_n) begin
        mcause <= (trap || in_intr_ls) ? mcause_n:      //此处暂未正确实现  //已实现ecall
                        wr_data;
    end
end


//0x304 R&W mie
reg     [`XLEN-1:0]     mie;
wire                    mie_MTIE = mie[7];

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        mie <= `XLEN'h0;
    end
    else if((sel_mie) && stall_n) begin
        mie <= wr_data;
    end
end

//0x344 R&W mip
reg     [`XLEN-1:0]     mip;
wire                    mip_MTIP = mip[7];

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        mip <= `XLEN'h0;
    end
    else if((sel_mip) && stall_n) begin
        mip <= wr_data;
    end
    else if(timer_int_i && mie_MTIE && mstatus_MIE) begin
        mip[7] <= 1'b1;
    end
    else if(~timer_int_i) begin
            mip[7] <= 1'b0;   
    end
end

assign in_intr_ls = mip_MTIP && mstatus_MIE;
//timer_int_i是一个上升沿触发的信号（也就是说只持续一个周期），其一旦拉高，即设置MTIP位（使能的情况下），同时
//拉高in_intr的信号（在mstatus.mie为高时），然后，在非stall的情况下，pc_new变成mtvec，wb阶段前的流水线被
//全部flush，mstatus更新（关闭中断，mie置低），mepc更新，mcause更新，然后进入trap处理程序

//注意：当ecall指令后跟着load-use的指令序列时，将会发生严重错误，导致程序有可能无法进入中断，虽然目前程序不会出现这种情况
//解决方法：in_trap拉高后，直接flush wb前所有流水线,同时flush all时ld-use hazard无效，这时，所有流水级的stall信号相同，
//然面出来与上面相同


endmodule

module WB_stage (
    input           [`XLEN-1:0]     pc_i,
    input           [`inst_len-1:0] instr_i,
    input           [`XLEN-1:0]     alures_i,lsres_i,
    input           [`XLEN-1:0]     csrdata_i,

    output          [4      :0]     rd_idx_o,
    // output   reg                    rd_wren_o,
    output   reg    [`XLEN-1:0]     rd_data_o
);

assign rd_idx_o = instr_i[11:7];

always @(*) begin
    case (instr_i[6:2])
        `OP_REG,`OP_REG_32: begin
            // rd_wren_o = 1'b1;
            rd_data_o = alures_i;
        end
        `OP_IMM,`OP_IMM_32: begin
            // rd_wren_o = 1'b1;
            rd_data_o = alures_i;
        end
        `load: begin
            // rd_wren_o = 1'b1 & instr_i[0];
            rd_data_o = lsres_i;
        end
        `store: begin
            // rd_wren_o = 1'b0;
            rd_data_o = lsres_i;
        end
        `branch: begin
            // rd_wren_o = 1'b0;
            rd_data_o = alures_i;
        end
        `jal: begin
            // rd_wren_o = 1'b1;
            rd_data_o = alures_i;
        end
        `jalr: begin
            // rd_wren_o = 1'b1;
            rd_data_o = alures_i;
        end
        `lui: begin
            // rd_wren_o = 1'b1;
            rd_data_o = alures_i;
        end
        `auipc: begin
            // rd_wren_o = 1'b1;
            rd_data_o = alures_i;    
        end
        `system: begin
            rd_data_o = csrdata_i;
        end
        default: begin
            // rd_wren_o = 1'b0;
            rd_data_o = `XLEN'b0;
        end
    endcase
end

endmodule //WB_stage
// //fw_src_sel
// `define     rf          2'b0
// `define     ex          2'd1
// `define     ls          2'd2
// `define     wb          2'd3
module ex_stage (
    // input                           mem_wren_ex_i,
    // input                           mem_lden_ex_i,
    // input           [2      :0]     mem_op_ex_i,
    input           [4      :0]     aluctr,
    // input           [`XLEN-1:0]     src1,
    // input           [`XLEN-1:0]     src2,
    input           [`XLEN-1:0]     rs1_ex_i,rs2_ex_i,imm_ex_i,
    input           [`XLEN-1:0]     pc_ex_i,
    input           [`inst_len-1:0] instr_ex_i,
    input                           is_jalr_ex_i,is_jal_ex_i,is_brc_ex_i,
    input                           src1sel_ex_i,
    input           [1      :0]     src2sel_ex_i,
    input           [1      :0]     rs1_sel_i,rs2_sel_i,
    input           [`XLEN-1:0]     alures_fw_i,lsres_fw_i,wbres_fw_i,
    input                           DivEn_i,
    input       [2:0]               DivSel_i,

    // output          [`XLEN-1:0]     PC_ex_o,instr_ex_o,rs2_ex_o,
    output          [`XLEN-1:0]     alures_o,
    output          [`XLEN-1:0]     pc_next_o,
    output          [`XLEN-1:0]     rs2_o,
    output                          is_jump_o,
    output                          exNotOk,

    output                          rden_ls,wren_ls,
    input                           ls_addr_ok_i
    // output                          mem_wren_ex_o,
    // output                          mem_lden_ex_o,
    // output          [2      :0]     mem_op_ex_o
);

wire    [`XLEN-1:0]     src1,src2;
reg     [`XLEN-1:0]     rs1,rs2;

always @(*) begin
    case(rs1_sel_i)
        `rf: begin
            rs1 = rs1_ex_i;
        end
        `ex: begin
            rs1 = alures_fw_i;
        end
        `ls: begin
            rs1 = lsres_fw_i;
        end
        `wb: begin
            rs1 = wbres_fw_i;
        end
    endcase
end

always @(*) begin
    case(rs2_sel_i)
        `rf: begin
            rs2 = rs2_ex_i;
        end
        `ex: begin
            rs2 = alures_fw_i;
        end
        `ls: begin
            rs2 = lsres_fw_i;
        end
        `wb: begin
            rs2 = wbres_fw_i;
        end
    endcase
end
assign rs2_o = rs2;

assign src1 = src1sel_ex_i ? pc_ex_i : rs1;
assign src2 = src2sel_ex_i[1] ? (src2sel_ex_i[0] ? `XLEN'd4 : `XLEN'b0) :
                                src2sel_ex_i[0] ? imm_ex_i : rs2;

wire less,zero;

ALU  u_ALU (
    .ALUctr                  ( aluctr   ),
    .src1                    ( src1     ),
    .src2                    ( src2     ),
    .DivEn                   ( DivEn_i   ),
    .DivSel                  ( DivSel_i ),

    .ALUres                  ( alures_o ),
    .less                    ( less),
    .zero                    (    zero)
);

bcu bcu_u(
    .rs1_i(rs1),
    .rs2_i(rs2),
    .is_jalr_i(is_jalr_ex_i),
    .is_jal_i(is_jal_ex_i),
    .is_brc_i(is_brc_ex_i),
    .fun_3(instr_ex_i[14:12]),
    .imm_i(imm_ex_i),
    .pc_i(pc_ex_i),
    .brc_pc_o(pc_next_o),
    .is_jump_o(is_jump_o)
);


assign  wren_ls  = (instr_ex_i[6      :2] == `store);
assign  rden_ls  = (instr_ex_i[6      :0] == {`load,2'b11});      //同理
assign  exNotOk = ~ls_addr_ok_i;
// assign PC_ex_o = PC_ex_i;
// assign instr_ex_o = instr_ex_i;
// assign rs2_ex_o = rs2_ex_i;
// assign mem_wren_ex_o = mem_wren_ex_i;
// assign mem_lden_ex_o = mem_lden_ex_i;
// assign mem_op_ex_o = mem_op_ex_i;

endmodule// //immediate expension opcode(one-hot-code)
// `define     immI                5'b00001
// `define     immU                5'b00010
// `define     immS                5'b00100
// `define     immJ                5'b01000
// `define     immB                5'b10000
module imm_ext (
    input       [31:7]      instr_imm_i,
    input       [4:0]       ext_op_i,

    output  reg [`XLEN-1:0] imm_o
);
always @(*) begin
    case(ext_op_i)
        `immI:
            imm_o = {{52{instr_imm_i[31]}},instr_imm_i[31:20]};
        `immU:
            imm_o = {{32{instr_imm_i[31]}},instr_imm_i[31:12],12'h0};
        `immS:
            imm_o = {{52{instr_imm_i[31]}},instr_imm_i[31:25],instr_imm_i[11:7]};
        `immJ:
            imm_o = {{44{instr_imm_i[31]}},instr_imm_i[19:12],instr_imm_i[20],instr_imm_i[30:21],1'h0};
        `immB:
            imm_o = {{52{instr_imm_i[31]}},instr_imm_i[7],instr_imm_i[30:25],instr_imm_i[11:8],1'h0};
        `immZI:
            imm_o = {{59{1'b0}},instr_imm_i[19:15]};
        default: 
            imm_o = `XLEN'h0;
    endcase 
end

endmodule //imm_exp

module lsu (
    input                           clk,rstn,
    input                           wren,rden,
    input           [2      :0]     memop,    
    input           [`XLEN-1:0]     wr_data_i,
    input           [`XLEN-1:0]     addr_i,
    input           [`XLEN-1:0]     pc_ls_i,
    input           [`XLEN-1:0]     addr_last_i,
    input                           wren_last_i,

    output          [`XLEN-1:0]     ls_res_o,
    output                          ls_not_ok,    

//sram interface
    output          [`XLEN-1:0]     ls_sram_addr,
    output                          ls_sram_rd_en,              //这里不再需要addr_valid信号了，而是有两个en信号代替，一个时钟周期内要么读要么写，不会有歧义
    output                          ls_sram_wr_en,
    output          [`XLEN-1:0]     ls_sram_wr_data,
    output          [7      :0]     ls_sram_wr_mask,
    output          [2      :0]     ls_sram_wr_size,
    output          [2      :0]     ls_sram_rd_size,
    input                           ls_sram_rd_data_valid,
    input                           ls_sram_wr_data_ok,
    input           [`XLEN-1:0]     ls_sram_rd_data
);



wire    [`XLEN-1:0]     rd_data_base;
// wire    [`XLEN-1:0]     dpi_addr = addr_i & ~`XLEN'h7;
// always @(negedge clk) begin                     //这里使用了下降沿，是为了避免verilator的时序问题，在加入cache后应修改
//     if(rden)
//         vmemread(addr_i, 8, rd_data_base, pc_ls_i);
// end
// reg     ls_ok;
// always @(posedge clk or negedge rstn) begin
//     if(~rstn) begin
//         ls_ok <= 1'b0;
//     end 
//     else begin
//         if((rden & ls_sram_rd_data_valid) || (wren & ls_sram_wr_data_ok)) begin
//             ls_ok <= 1'b1;
//         end
//         else begin
//             ls_ok <= 1'b0;
//         end
//     end
// end

assign  ls_sram_addr = addr_i;
assign  ls_sram_rd_en = rden;// && ~ls_ok;
assign  ls_sram_wr_en = wren;// && ~ls_ok;
assign  ls_sram_wr_mask = wr_mask;
assign  ls_sram_wr_data = wr_data_i;
assign  rd_data_base = ls_sram_rd_data;
assign  ls_not_ok = ls_sram_wr_data_ok;
assign  ls_sram_wr_size = wr_size;
assign  ls_sram_rd_size = rd_size;



//读mem------------------------------------------------------------------
wire                    lb,lbu,lh,lhu,lw,lwu,ld;
assign  lb  = rden & (memop == `lb);
assign  lbu = rden & (memop == `lbu);
assign  lh  = rden & (memop == `lh);
assign  lhu = rden & (memop == `lhu);
assign  lw  = rden & (memop == `lw);
assign  lwu = rden & (memop == `lwu);
assign  ld  = rden & (memop == `ld);

wire   [2:0]     rd_size;

assign  rd_size = ({3{lb}}      & 3'b000)
                |({3{lbu}}    & 3'b000)
                |({3{lh}}     & 3'b001)
                |({3{lhu}}    & 3'b001)
                |({3{lw}}     & 3'b010)
                |({3{lwu}}    & 3'b010)
                |({3{ld}}     & 3'b011);

// //仅支持对齐的访问，否则出错
reg     [7      :0]     rd_data_b;
reg     [15     :0]     rd_data_h;
reg     [31     :0]     rd_data_w;
//仅支持对齐的访问，否则出错
always @(*) begin
    case(addr_i[2:0])
        3'b000: begin
            rd_data_b = rd_data_base[7      :0];
        end
        3'b001: begin
            rd_data_b = rd_data_base[15     :8];
        end
        3'b010: begin
            rd_data_b = rd_data_base[23     :16];
        end
        3'b011: begin
            rd_data_b = rd_data_base[31     :24];
        end
        3'b100: begin
            rd_data_b = rd_data_base[39     :32];
        end
        3'b101: begin
            rd_data_b = rd_data_base[47     :40];
        end
        3'b110: begin
            rd_data_b = rd_data_base[55     :48];
        end
        3'b111: begin
            rd_data_b = rd_data_base[63     :56];
        end               
    endcase
end

always @(*) begin
    case(addr_i[2:1])
        2'b00: begin
            rd_data_h = rd_data_base[15     :0];
        end
        2'b01: begin
            rd_data_h = rd_data_base[31     :16];
        end
        2'b10: begin
            rd_data_h = rd_data_base[47     :32];
        end
        2'b11: begin
            rd_data_h = rd_data_base[63     :48];
        end              
    endcase
end
always @(*) begin
    case(addr_i[2])
        1'b0: begin
            rd_data_w = rd_data_base[31     :0];
        end
        1'b1: begin
            rd_data_w = rd_data_base[63     :32];
        end            
    endcase
end
assign  ls_res_o = `XLEN'b0
                   |({`XLEN{lb}} & {{56{rd_data_b[7]}},rd_data_b})
                   |({`XLEN{lbu}} & {56'b0,rd_data_b})
                   |({`XLEN{lh}} & {{48{rd_data_h[15]}},rd_data_h})
                   |({`XLEN{lhu}} & {48'b0,rd_data_h})
                   |({`XLEN{lw}} & {{32{rd_data_w[31]}},rd_data_w})
                   |({`XLEN{lwu}} & {32'b0,rd_data_w})
                   |({`XLEN{ld}} & rd_data_base);

//写mem-------------------------------------------------------------------

//写mem-------------------------------------------------------------------


// wire    [`XLEN-1:0]     wr_mask;  
// wire                    sb,sh,sw,sd;  

// assign  sb = wren & (memop == `sb);
// assign  sh = wren & (memop == `sh);
// assign  sw = wren & (memop == `sw);
// assign  sd = wren & (memop == `sd);


// reg     [`XLEN-1:0]     wr_data_b;
// reg     [`XLEN-1:0]     wr_data_h;
// reg     [`XLEN-1:0]     wr_data_w;
// always@(*)begin
// 		case(addr_i[2:0])
// 			3'b000:wr_data_b={rd_data_base[63:8],wr_data_i[7:0]};
// 			3'b001:wr_data_b={rd_data_base[63:16],wr_data_i[7:0],rd_data_base[7:0]};
// 			3'b010:wr_data_b={rd_data_base[63:24],wr_data_i[7:0],rd_data_base[15:0]};
// 			3'b011:wr_data_b={rd_data_base[63:32],wr_data_i[7:0],rd_data_base[23:0]};
//             3'b100:wr_data_b={rd_data_base[63:40],wr_data_i[7:0],rd_data_base[31:0]};
// 			3'b101:wr_data_b={rd_data_base[63:48],wr_data_i[7:0],rd_data_base[39:0]};
// 			3'b110:wr_data_b={rd_data_base[63:56],wr_data_i[7:0],rd_data_base[47:0]};
// 			3'b111:wr_data_b={wr_data_i[7:0],rd_data_base[55:0]};
// 		endcase
//         case(addr_i[2:1])
//             2'b00:wr_data_h={rd_data_base[63:16],wr_data_i[15:0]};
// 			2'b01:wr_data_h={rd_data_base[63:32],wr_data_i[15:0],rd_data_base[15:0]};
// 			2'b10:wr_data_h={rd_data_base[63:48],wr_data_i[15:0],rd_data_base[31:0]};
// 			2'b11:wr_data_h={wr_data_i[15:0],rd_data_base[47:0]};
//         endcase
//         case(addr_i[2])
//             1'b0:wr_data_w={rd_data_base[63:32],wr_data_i[31:0]};
// 			1'b1:wr_data_w={wr_data_i[31:0],rd_data_base[31:0]};
//         endcase
// end

// wire    [`XLEN-1:0] wr_data;
// assign  wr_data = `XLEN'b0
//                   |({`XLEN{sb}} & (wr_data_b))
//                   |({`XLEN{sh}} & (wr_data_h))
//                   |({`XLEN{sw}} & (wr_data_w))
//                   |({`XLEN{sd}} & (wr_data_i));


// reg     [`XLEN-1:0] wr_data_buf;
// always @(posedge clk) begin
//     if(wren) begin
//         vmemwrite(dpi_addr, wr_data, pc_ls_i);
//         wr_data_buf <= wr_data;
//     end
// end
reg     [2:0]     wr_size;  //给cache的话，其实只要两位，mask可不要
reg     [7:0]     wr_mask;  
wire                    sb,sh,sw,sd;  

assign  sb = wren & (memop == `sb);
assign  sh = wren & (memop == `sh);
assign  sw = wren & (memop == `sw);
assign  sd = wren & (memop == `sd);

always @(*) begin
    case({sb,sh,sw,sd})
        4'b1000: begin
            wr_mask = 8'b0000_0001;
            wr_size = 3'b000;
        end
        4'b0100: begin
            wr_mask = 8'b0000_0011;
            wr_size = 3'b001;
        end
        4'b0010: begin
            wr_mask = 8'b0000_1111;
            wr_size = 3'b010;
        end
        4'b0001: begin
            wr_mask = 8'b1111_1111;
            wr_size = 3'b011;
        end
        default: begin
            wr_mask = 8'b0000_0000;
            wr_size = 3'b000;
        end
    endcase 
end 

       
endmodule


module forwarding (
    input                                     clk,rst_n,
    input           [`reg_addr_width-1:0]     rs1_ido_idx,rs2_ido_idx,
    input           [`reg_addr_width-1:0]     rd_exo_idx,
    input           [`reg_addr_width-1:0]     rd_lso_idx,
    // input           [`reg_addr_width-1:0]     rd_wbo_idx,
    input                                     wben_ls,wben_wb,
    input           [`XLEN-1          :0]     wb_data_i,
    input                                     wb_stall_n,

    output          [1                :0]     rs1_sel,rs2_sel,
    output          [`XLEN-1          :0]     wb_data_o

);

reg [`XLEN-1:0]             rd_wb;          //用来保存wb写回的数据用来前递
reg                         reg_wben;
reg [`reg_addr_width-1:0]   reg_wb_idx;
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        rd_wb <= `XLEN'b0;
        reg_wben <= 1'b0;
        reg_wb_idx <= `reg_addr_width'b0;
    end
    else if(wben_wb && wb_stall_n) begin
        rd_wb <= wb_data_i;
        reg_wben <= wben_wb;
        reg_wb_idx <= rd_lso_idx;
    end
end
assign  wb_data_o = rd_wb;

wire    rs1_ex_fw;
assign  rs1_ex_fw = wben_ls & (rd_exo_idx == rs1_ido_idx) & (|rd_exo_idx);      //alu结果的前递
wire    rs1_ls_fw;                                                              //ls结果的前递
assign  rs1_ls_fw = wben_wb & (rd_lso_idx == rs1_ido_idx) & (|rd_lso_idx); 
wire    rs1_wb_fw;
assign  rs1_wb_fw = reg_wben & (reg_wb_idx == rs1_ido_idx) & (|reg_wb_idx);     //wb结果前递

assign rs1_sel = rs1_ex_fw ? `ex :                                              //保证优先级
                            rs1_ls_fw ? `ls : 
                                        rs1_wb_fw ? `wb : `rf;

wire    rs2_ex_fw;
assign  rs2_ex_fw = wben_ls & (rd_exo_idx == rs2_ido_idx) & (|rd_exo_idx);      //alu结果的前递
wire    rs2_ls_fw;                                                              //ls结果的前递
assign  rs2_ls_fw = wben_wb & (rd_lso_idx == rs2_ido_idx) & (|rd_lso_idx); 
wire    rs2_wb_fw;
assign  rs2_wb_fw = reg_wben & (reg_wb_idx == rs2_ido_idx) & (|reg_wb_idx);     //wb结果前递

assign rs2_sel = rs2_ex_fw ? `ex :                                              //保证优先级
                            rs2_ls_fw ? `ls : 
                                        rs2_wb_fw ? `wb : `rf;




endmodule //forwarding



//未实现uncache
//uncache map: 0x80000000~0x8fffffff(高四位为1000，为cache片段，其他全部uncache)
module Dcache(
    input                                   clk,rst_n,
//from PIPLINE
    input           [`addr_width-1:0]       addr_i,
    //valid表示有效的读取请求，op表示操作类型，icache恒为0,表示读
    input                                   exValid_i,
    input                                   lsValid_i,
    input                                   op_i,
    //写数据以及mask，icache无效
    input           [`XLEN-1:0]             wr_data_i,
    input           [7:0]                   wr_mask_i,
    //流水线stall信号，低有效
    input                                   stall_n,
    //回给if模块的地址接收有效信号，为高时表示可以处理新的请求的地址
    output  reg                             addr_ok_o,
    // output                                  data_ok_o,  //reserve
    //数据无效信号，为高时表示此时输出的数据无效
    output                                  data_notok_o,
    output          [`XLEN-1:0]             rd_data_o,
    input          [2      :0]             ls_sram_wr_size,
    input          [2      :0]             ls_sram_rd_size,
    input                                   fence_clean,
    output                                  clear_Icache,


//to AXI
    //cache发出读请求有效信号
    output                                  cacheRdValid_o,//
    //axi可以接受读请求的信号
    input                                   axiRdReady,//
    //读取长度，icache恒为4,为一个cacheline的大小，这里未使用
    output          [7:0]                   fetchLenth,//
    //最后一个数据信号
    input                                   rdLast_i,//
    output          [`addr_width-1:0]       cacheRdAddr_o,//
    output          [`addr_width-1:0]       cacheWrAddr_o,//
    output          [2:0]                   cacheRdSize_o,
    input           [`XLEN-1:0]             rdData_i,//
    //数据有效信号
    input                                   dataValid_i,
    //AXI可以接受写请求信号
    input                                   axiWrReady,//
    //axi写请求有效信号
    output                                  cacheWrValid_o,//
    output          [255:0]                 cacheWrData_o,//
    output          [7:0]                   storeLenth,//

    output          [7:0]                   cacheWrMask_o,
    output          [2:0]                   cacheWrSize_o,

    output[5:0]                         io_sram4_addr,    
    output                              io_sram4_cen,     
    output                              io_sram4_wen,     
    output[127:0]                       io_sram4_wmask,   
    output[127:0]                       io_sram4_wdata,   
    input[127:0]                        io_sram4_rdata, 

    output[5:0]                         io_sram5_addr,    
    output                              io_sram5_cen,     
    output                              io_sram5_wen,     
    output[127:0]                       io_sram5_wmask,   
    output[127:0]                       io_sram5_wdata,   
    input[127:0]                        io_sram5_rdata,   

    output[5:0]                         io_sram6_addr,    
    output                              io_sram6_cen,     
    output                              io_sram6_wen,     
    output[127:0]                       io_sram6_wmask,   
    output[127:0]                       io_sram6_wdata,   
    input[127:0]                        io_sram6_rdata,  
     
    output[5:0]                         io_sram7_addr,    
    output                              io_sram7_cen,     
    output                              io_sram7_wen,     
    output[127:0]                       io_sram7_wmask,   
    output[127:0]                       io_sram7_wdata,   
    input[127:0]                        io_sram7_rdata
);

//片选信号仅在idle且读有效、compare且命中且读有效、写使能有效这三种情况拉高
//关于地址信号：在需要写入数据时，无论如何都要使用latch住的地址，在读的时候若stall了也要使用latch的，而在正常执行的时候要使用cache模块输入的地址
assign io_sram4_addr = cleanEn ? cleanCnt[5:0] : wenWay1 ? index : stall_n ? addr_i[10:5] : index;    
assign io_sram4_cen = ~(((idleEn || (uncacheOpEn && uncacheOpOk)) && exValid_i) || (compareEn) || missEn || replaceEn || getdataEn || wenWay1 || cleanEn || fence_clean) ;     
assign io_sram4_wen = ~wenWay1;     
assign io_sram4_wmask = ~maskWay1_1 ;   
assign io_sram4_wdata = inDataWay1_1;   
assign dataWay1_1 = io_sram4_rdata; 

assign io_sram5_addr = cleanEn ? cleanCnt[5:0] : wenWay1 ? index : stall_n ? addr_i[10:5] : index;    
assign io_sram5_cen = ~(((idleEn || (uncacheOpEn && uncacheOpOk)) && exValid_i) || (compareEn) || missEn || replaceEn || getdataEn || wenWay1 || cleanEn || fence_clean);     
assign io_sram5_wen = ~wenWay1 ;     
assign io_sram5_wmask = ~maskWay1_2 ;   
assign io_sram5_wdata = inDataWay1_2;   
assign dataWay1_2 = io_sram5_rdata;   

assign io_sram6_addr = cleanEn ? cleanCnt[5:0] : wenWay2 ? index : stall_n ? addr_i[10:5] : index;    
assign io_sram6_cen = ~(((idleEn || (uncacheOpEn && uncacheOpOk)) && exValid_i) || (compareEn) || missEn || replaceEn || getdataEn || wenWay2 || cleanEn || fence_clean);     
assign io_sram6_wen = ~wenWay2 ;     
assign io_sram6_wmask = ~maskWay2_1;   
assign io_sram6_wdata = inDataWay2_1;   
assign dataWay2_1 = io_sram6_rdata;  

assign io_sram7_addr = cleanEn ? cleanCnt[5:0] : wenWay2 ? index : stall_n ? addr_i[10:5] : index ;    
assign io_sram7_cen = ~(((idleEn || (uncacheOpEn && uncacheOpOk)) && exValid_i) || (compareEn) || missEn || replaceEn || getdataEn || wenWay2 || cleanEn || fence_clean);     
assign io_sram7_wen = ~wenWay2 ;     
assign io_sram7_wmask = ~maskWay2_2 ;   
assign io_sram7_wdata = inDataWay2_2;   
assign dataWay2_2 = io_sram7_rdata;


localparam  idle        = 3'b000,
            compare     = 3'b001,
            miss        = 3'b010,           //ls要加一个状态：wrWait，确保发生写缺失的时候要先写后读（其实可以判断一下是否需要写，若不要写则进入getData）
            getdata     = 3'b011,
            replace     = 3'b111,
            uncacheOp   = 3'b110,           //添加uncacheOp用来处理非缓存操作
            clean       = 3'b100;           //添加clean来支持fence.i

reg     [2:0]   cacheCurState,cacheNexState;
wire            cacheHit;
wire            way1Hit,way2Hit;
wire    [127:0] dataWay1_1,dataWay1_2,dataWay2_1,dataWay2_2;
reg    [127:0] inDataWay1_1,inDataWay1_2,inDataWay2_1,inDataWay2_2;
reg            wenWay1,wenWay2;
wire uncached;

assign uncached = compareEn && lsValid_i && ~(reqLatch[31-:4] == 4'b1000);

//这里多虑了，jal后的l/s指令并不会流到ex阶段
// wire            reqCancel;
// reg             validFlag;
// always @(posedge clk or negedge rst_n) begin
//     if(~rst_n) begin
//         validFlag <= 'b0;
//     end
//     else if((idleEn || compareEn && cacheHit) && exValid_i && stall_n) begin
//         validFlag <= 'b1;
//     end
//     else begin
//         validFlag <= 'b0;
//     end
// end
// assign reqCancel = validFlag && compareEn && ~lsValid_i && stall_n;

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        cacheCurState <= idle;
    end
    else begin
        cacheCurState <= cacheNexState;
    end
end

always @(*) begin
    case (cacheCurState)
        idle: begin
            if(fence_clean) begin
                cacheNexState = clean;
            end
            else if(exValid_i && stall_n ) begin       
                cacheNexState = compare;
            end
            else begin
                cacheNexState = idle;
            end
        end
        compare: begin
            if(fence_clean) begin
                cacheNexState = clean;
            end
            else if(uncached) begin
                cacheNexState = uncacheOp;//若触发uncache条件则进入uncacheOp处理
            end
            else if(cacheHit) begin
                //后面的那个条件是为了防止在stall的条件下，ex阶段的指令已经流到了ls阶段，exValid失效，但这条指
                //令由于被stall住了，数据并没有被lsu接受，所以必须要呆在compare阶段保证数据输出，等到stall结束后再回到idle
                //但是对于写请求却不需要这样处理，因为写入只要一个周期，写入了就ok了，不需要一直呆在compare
                if(exValid_i && stall_n || lsValid_i && ~reqLatch[32] && ~stall_n) begin
                    cacheNexState = compare;     
                end
                else begin
                    cacheNexState = idle;
                end
            end
            //miss:有两种情况会进入这种情况，一种是正常请求得到miss
            //     一种是从uncache操作回来后不命中
            else if(lsValid_i) begin
        //如果miss且需要写回，但是axi正写忙，则需要等axi写就绪后再读
                if(reqLatch[32] && axiWrBusy) begin
                    cacheNexState = compare;
                end
                else begin
                    cacheNexState = miss;
                end
            end
            else if(exValid_i) begin
                cacheNexState = compare;
            end
            else begin
                cacheNexState = idle;
            end
        end
        miss: begin
            if(axiRdReady) begin
                cacheNexState = getdata;
            end
            else begin
                cacheNexState = miss;
            end
        end
        getdata: begin
            if(rdLast_i) begin
                cacheNexState = replace;       //有问题，要该（validbit的问题）
            end
            else begin
                cacheNexState = getdata;
            end
        end 
        //此处须添加一个replace的阶段，为了防止在完成替换后，下一个pc命中，但是读数据的时候与在同一way上的写入操作产生冲突（即读取与写入的地址不一样）
        replace: begin
            // if(needWrBk_Reg) begin
            //     cacheNexState = replace;
            //     $finish();
            // end
            // else begin
                cacheNexState = compare;
            // end    
        end
        uncacheOp: begin
            if(uncacheOpOk && stall_n) begin
                cacheNexState = compare;
            end
            else begin
                cacheNexState = uncacheOp;
            end
        end
        clean: begin
            if(clean_OK) begin
                cacheNexState = idle;
            end
            else begin
                cacheNexState = clean;
            end
        end
        default: begin
            cacheNexState = idle;
        end  
    endcase
end

wire                    idleEn = cacheCurState == idle;
reg [`addr_width:0]     reqLatch;
wire    [4:0]           offset = reqLatch[4:0];
wire    [5:0]           index = reqLatch[10:5];
wire    [20:0]          tag = reqLatch[31:11];
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        reqLatch <= 'b0;
    end
    //在compare到compare锁存地址信息时，要保证上一个请求是hit的，否则下一拍会进入miss，而保存的数据失效
    //同时要保证在stall时不锁存，因为1、stall有可能是由cache缺失或其他自身原因造成，此时不能锁存其他数据
    //2、有可能由其他阶段造成如ls部分stall等，此时也不能锁存，否则会锁存下一拍的地址，但是pc还没有变化，导致取得的指令出错
    else if(((idleEn && exValid_i && stall_n) || ((compareEn && ((exValid_i && (cacheHit||~cacheHit && ~lsValid_i)))) && stall_n) || (uncacheOpEn && exValid_i && stall_n))) begin
        reqLatch <= {op_i,addr_i};
    end
end

//addrOk信号仅在idle或者compare且上一拍pc命中的情况下为高，表示新的pc可以被接收
always @(*) begin
    if(idleEn || (compareEn && (cacheHit||~cacheHit && ~lsValid_i)) || (uncacheOpEn && uncacheOpOk)) begin
        addr_ok_o = 1'b1;
    end
    else begin
        addr_ok_o = 1'b0;
    end
end       

reg [63:0]   validArray1;
reg [63:0]   validArray2;    //共2way，每way有64行，每行256bit，用两个sram拼接，每两个sram共用一个validbit
wire        bitValid1,bitValid2;
reg        bitValid1_d,bitValid2_d;

//valid Bit的写入在getdata的末尾写入
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        validArray1 <= 'b0;
        validArray2 <= 'b0;
    end
    else if(getdataEn && rdLast_i) begin
        validArray1[index] <= bitValid1_d;
        validArray2[index] <= bitValid2_d;
    end
end

assign bitValid1 = validArray1[index];
assign bitValid2 = validArray2[index];


reg [20:0]  tagArray1[0:63];
reg [20:0]  tagArray2[0:63];
reg [20:0]  tagArray1_d,tagArray2_d;

wire [20:0] tagWay1_q,tagWay2_q;
reg        validWay1_q,validWay2_q;

//tag的写入同样在getdata的末尾写入
//此处是否能优化呢，即将tagArray1_d和tagArray2_d用一个信号表示，使用信号控制写入tagarray1还是2
always @(posedge clk or negedge rst_n) begin
    if(getdataEn && rdLast_i) begin
        tagArray1[index] <= tagArray1_d;
        tagArray2[index] <= tagArray2_d;
    end
end

assign tagWay1_q = tagArray1[index];
assign tagWay2_q = tagArray2[index];

wire [20:0] testTag = tagArray1['h3c];
wire [20:0] tagtest = tagArray2['h23];
//hit信号产生
assign  way1Hit = (~(|(tagWay1_q ^ tag)) && bitValid1) ? 'b1 : 'b0;
assign  way2Hit = (~(|(tagWay2_q ^ tag)) && bitValid2) ? 'b1 : 'b0;
assign  cacheHit = way1Hit || way2Hit;
// //dataOk信号仅在compare阶段并且命中的情况下为高，
// assign data_ok_o = compareEn && cacheHit;

//notok信号在idle阶段不置高
/*NotOk置高条件
**1、compareEn && ~cacheHit         ：表示此次访问Miss
**2、getdataEn、missEn、replaceEn    ：表示正在从总线请求数据
**3、compareEn && ~reqLatch[32] && ~replaceEnDelay && ((way1Hit && wenDelay1) || (way2Hit && wenDelay2)):
**  这种情况对应上一拍是store命令并且命中，而这一拍是load命令并且命中的情况，由于sram模型的写、读分别需要一拍，故写入后需要等待一拍在读，
**  防止读出错误数据，本质上是read after write冲突，本应该使用流水线前递解决，整理完代码再改吧
**  后续：并不是raw，因为地址可能不同
*/
assign data_notok_o = (cleanEn) || (uncacheOpEn && ~uncacheOpOk) || (compareEn && ~cacheHit && lsValid_i) || getdataEn || missEn || replaceEn || (compareEn && ~reqLatch[32] && ~replaceEnDelay && ((way1Hit && wenDelay1) || (way2Hit && wenDelay2)));

reg     replaceEnDelay;
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        replaceEnDelay <= 'b0;
    end
    else begin
        replaceEnDelay <= replaceEn;
    end
end


wire    compareEn = cacheCurState == compare;

wire [255:0]    way1Data = {dataWay1_2,dataWay1_1};
wire [255:0]    way2Data = {dataWay2_2,dataWay2_1};
// wire test = (idleEn && valid_i) || (compareEn && valid_i && cacheHit);
reg [`XLEN-1:0] rdDataRegWay1,rdDataRegWay2;
always @(*) begin
    if((idleEn && exValid_i && stall_n) || (compareEn && exValid_i && cacheHit) || lsValid_i) begin     //if里的条件有点问题（idle？？？）
            case(offset[4:3])
                2'b00: rdDataRegWay1 = missFlag ? rdBuffer[63:0]    : way1Data[63:0]   ;
                2'b01: rdDataRegWay1 = missFlag ? rdBuffer[127:64]  : way1Data[127:64] ;
                2'b10: rdDataRegWay1 = missFlag ? rdBuffer[191:128] : way1Data[191:128];
                2'b11: rdDataRegWay1 = missFlag ? rdBuffer[255:192] : way1Data[255:192];
            endcase
            case(offset[4:3])
                2'b00: rdDataRegWay2 = missFlag ? rdBuffer[63:0]    : way2Data[63:0];
                2'b01: rdDataRegWay2 = missFlag ? rdBuffer[127:64]  : way2Data[127:64];
                2'b10: rdDataRegWay2 = missFlag ? rdBuffer[191:128] : way2Data[191:128];
                2'b11: rdDataRegWay2 = missFlag ? rdBuffer[255:192] : way2Data[255:192];
            endcase
    end
    else begin
        rdDataRegWay1 = 'b0;
        rdDataRegWay2 = 'b0;
    end
end

//这里写的很粪
//(后续：不但烂，而且该不动ww)
assign rd_data_o = uncacheOpEn ? (rdData_i ): ({64{way1Hit}}&rdDataRegWay1)
                                                              | ({64{way2Hit}}&rdDataRegWay2);

wire    missEn = cacheCurState == miss;
wire    getdataEn = cacheCurState == getdata;
wire [63:0] addrToRead = {32'b0,tag,index,5'b0};
reg        randomBit;
reg        missFlag;//或者叫replacedFlag？
//由于根据sram模型，写入数据再读出至少需要两个周期，而为了获得更好的性能，在写入后即可读出数据，故需一个信号指示使用rdBUffer里存放的数据而不是sram的
always @(posedge clk or negedge rst_n) begin
    if(~rst_n)begin
        missFlag <= 'b0;
    end
    //将missFlag延后写入sram(即replace阶段)一个周期，防止读出错误数据
    else if(replaceEn) begin        //在接入AXI后要加上LAST作为判断条件
        missFlag <= 'b1;
    end
    else begin
        missFlag <= 'b0;
    end
end

assign cacheRdValid_o = uncacheOpEn ? uncacheRdValid : missEn && axiRdReady;
assign cacheRdAddr_o = uncacheOpEn ? uncacheRdAddr : addrToRead[31:0];
reg [1:0]   rdCnt;
//这一部分将axi过来的数据保持在buffer中，在一次存入cache的sram
//icache每次读内存都是固定的读4个64位word，所以使用一个2位的计数器循环计数
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        rdCnt <= 'b0;
    end
    else if(getdataEn && dataValid_i) begin
        rdCnt <= rdCnt + 'b1;
    end
end
reg [255:0] rdBuffer;
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        rdBuffer <= 'b0;
    end 
    else if(getdataEn && dataValid_i) begin
        rdBuffer[rdCnt*64+:64] <= rdData_i;
    end
end

//根据随机决定替换哪个way
// always randomBit = $random;
always @(posedge clk) begin
    if(replaceEn) begin
        randomBit <= ~randomBit;
    end
end
always @(*) begin
    if(getdataEn && rdLast_i) begin
        //TODO 真‘伪随机
        if(~randomBit) begin
            bitValid1_d = 1'b1;
            bitValid2_d = validArray2[index];
            tagArray1_d = tag;
            tagArray2_d = tagArray2[index];
        end
        else begin
            bitValid1_d = validArray1[index];
            bitValid2_d = 1'b1;
            tagArray1_d = tagArray1[index];
            tagArray2_d = tag;
        end
    end
    else begin
        bitValid1_d = 1'b0;
        bitValid2_d = 1'b0;
        tagArray1_d = 'b0;
        tagArray2_d = 'b0;
    end
end

wire    replaceEn = cacheCurState == replace;
//这里延后一个周期将写是能拉高写入，防止高位无法写入（即最后64位数据）
//不仅在替换时要写入，store命中也要写入
always @(*) begin
    if((replaceEn)) begin
        if(~randomBit) begin
            wenWay1 = 1'b1;
            wenWay2 = 1'b0;
        end
        else begin
            wenWay1 = 1'b0;
            wenWay2 = 1'b1;
        end
    end
//这种情况对应写命中
    else if(compareEn && cacheHit && reqLatch[32]) begin
        if(way1Hit) begin
            wenWay1 = 1'b1;
            wenWay2 = 1'b0;
        end
        else begin
            wenWay1 = 1'b0;
            wenWay2 = 1'b1;
        end
    end
    else begin
        wenWay2 = 1'b0;
        wenWay1 = 1'b0;
    end
end

reg wenDelay1,wenDelay2;
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        wenDelay1 <= 'b0;
        wenDelay2 <= 'b0;
    end
    else begin
        wenDelay1 <= wenWay1;
        wenDelay2 <= wenWay2;
    end
end


//写控制逻辑
//1、写命中；2、写miss但不dirty；3、写miss且dirty
//待添加快速写入（在读回数据时写入），非阻塞模式

//在compare阶段锁存要写入的数据、mask
reg [63:0]  wrDataLatch;
reg [7:0]   wrMaskLatch;
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        wrDataLatch <= 'b0;
        wrMaskLatch <= 'b0;
    end
    //在compare的末尾锁存data以及mask，且锁存的是处理完成后的，保证数据正确
    else if(compareEn && reqLatch[32]) begin
        wrDataLatch <= storeData;
        wrMaskLatch <= storeMask;
    end
end

reg [63:0]   dirtyArray1;
reg [63:0]   dirtyArray2;
//写Miss逻辑

//写入：
wire        wrLow,wrHigh;
//reqLatch的第五位决定了向way的高128还是低128位写数据
assign  wrLow  = reqLatch[32] & ~reqLatch[4];
assign  wrHigh = reqLatch[32] &  reqLatch[4];
wire [63:0]    storeData;
//注意看赋值，目前还是阻塞模式
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//得到写入数据在64位中的具体位置
assign storeData = wr_data_i << {reqLatch[2:0],3'b0};
wire  [7:0] storeMask;
assign storeMask = wr_mask_i << reqLatch[2:0];

wire  [63:0]  sramMask;
assign sramMask[7:0]    = {8{storeMask[0]}};
assign sramMask[15:8]   = {8{storeMask[1]}};
assign sramMask[23:16]    = {8{storeMask[2]}};
assign sramMask[31:24]    = {8{storeMask[3]}};
assign sramMask[39:32]    = {8{storeMask[4]}};
assign sramMask[47:40]    = {8{storeMask[5]}};
assign sramMask[55:48]    = {8{storeMask[6]}};
assign sramMask[63:56]    = {8{storeMask[7]}};

//由于流水线字长为64,而一块sram是128,所以还要选择高低位
//如果在replace状态，则使用axi过来的数据，即rdBuffer，否则判断是否为store请求，若是则使用ls模块过来的数据
assign inDataWay1_1 = replaceEn ? rdBuffer[127:0] : reqLatch[32] ? (reqLatch[3] ? {storeData,64'b0} : {64'b0,storeData}) : 128'b0;
assign inDataWay1_2 = replaceEn ? rdBuffer[255:128] : reqLatch[32] ? (reqLatch[3] ? {storeData,64'b0} : {64'b0,storeData}) : 128'b0;
assign inDataWay2_1 = replaceEn ? rdBuffer[127:0] : reqLatch[32] ? (reqLatch[3] ? {storeData,64'b0} : {64'b0,storeData}) : 128'b0;
assign inDataWay2_2 = replaceEn ? rdBuffer[255:128] : reqLatch[32] ? (reqLatch[3] ? {storeData,64'b0} : {64'b0,storeData}) : 128'b0;

wire    [127:0]     maskWay1_1,maskWay1_2,maskWay2_1,maskWay2_2;
assign maskWay1_1 = replaceEn ? 128'hffffffffffffffffffffffffffffffff : reqLatch[32] ? (wrLow  ? (reqLatch[3] ? {sramMask,64'b0} : {64'b0,sramMask}) : 'b0) : 128'h0;
assign maskWay1_2 = replaceEn ? 128'hffffffffffffffffffffffffffffffff : reqLatch[32] ? (wrHigh ? (reqLatch[3] ? {sramMask,64'b0} : {64'b0,sramMask}) : 'b0) : 128'h0;
assign maskWay2_1 = replaceEn ? 128'hffffffffffffffffffffffffffffffff : reqLatch[32] ? (wrLow  ? (reqLatch[3] ? {sramMask,64'b0} : {64'b0,sramMask}) : 'b0) : 128'h0;
assign maskWay2_2 = replaceEn ? 128'hffffffffffffffffffffffffffffffff : reqLatch[32] ? (wrHigh ? (reqLatch[3] ? {sramMask,64'b0} : {64'b0,sramMask}) : 'b0) : 128'h0;

//dirtyBit的维护
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        dirtyArray1 <= 'b0;
    end
    else if(compareEn && way1Hit && reqLatch[32]) begin
            dirtyArray1[index] <= 1'b1;
    end
    else if(getdataEn && rdLast_i && way1Hit) begin
            dirtyArray1[index] <= 1'b0;
    end
end

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        dirtyArray2 <= 'b0;
    end
    else if(compareEn && way2Hit && reqLatch[32]) begin
            dirtyArray2[index] <= 1'b1;
    end
    else if(getdataEn && rdLast_i && way2Hit) begin
            dirtyArray2[index] <= 1'b0;
    end
end


wire        wrMiss;
assign wrMiss = compareEn && reqLatch[32] && ~cacheHit;
wire        rdMiss;
assign rdMiss = compareEn && ~reqLatch[32] && ~cacheHit;

//TODO
// reg [31:0] randomBit2 ;
// always randomBit2 = 1;
reg replaceWay;//0就是way1,1就是way2
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        replaceWay <= 'b0;
    end
    else if(compareEn)begin
        replaceWay <= randomBit;
    end
end



//需要写回替换的情况：
//写miss，并且要写入的index数据为脏; 读miss，并且要读的index为脏 
wire        needWrBk;
assign needWrBk = lsValid_i && (uncacheWrValid || (~uncached && ((wrMiss && (~randomBit && dirtyArray1[index] || randomBit && dirtyArray2[index])) || (rdMiss && (~randomBit && dirtyArray1[index] || randomBit && dirtyArray2[index])))));
reg     needWrBk_Reg;
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        needWrBk_Reg <= 'b0;
    end
    else if((compareEn || uncacheOpEn && reqLatch[32]) && ~axiWrBusy) begin
        needWrBk_Reg <= needWrBk;
    end
    else if(axiWrReady && cacheWrValid_o) begin
        needWrBk_Reg <= 'b0;
    end
end

reg            uncache ;//= reqLatch[32] && ~(reqLatch[31-:4] == 4'b1000);                //TODO
always @(posedge clk or negedge rst_n) begin
    uncache <= uncached;
end
wire            axiWrBusy = needWrBk_Reg;
assign cacheWrValid_o = cleanEn ? cleanWrValid : needWrBk_Reg;
wire    [31:0]  addrToWrite;

assign addrToWrite = uncacheOpEn ? {reqLatch[31:0]} : randomBit ? {tagArray2[index],index,5'b0} : {tagArray1[index],index,5'b0};
assign cacheWrAddr_o = cleanEn ? cleanWrAddr : addrToWrite;

assign cacheWrData_o = cleanEn ? cleanData : uncacheOpEn ? {192'b0,wrDataLatch} : randomBit ? way2Data : way1Data;
assign storeLenth = uncacheOpEn ? 'd0 : 'd3;

assign cacheWrMask_o = uncacheOpEn ? storeMask : 'hff;;
assign cacheWrSize_o = uncacheOpEn ? ls_sram_wr_size : 'b011;
assign cacheRdSize_o = uncacheOpEn ? ls_sram_rd_size : 'b011;

wire uncacheOpEn = cacheCurState == uncacheOp;
// cacheRdValid_o,//
// axiRdReady,//

assign fetchLenth = uncacheOpEn ? 'b000 : 'b011;    //根据不同请求决定
// rdLast_i,//
// cacheRdAddr_o,//




/**********cacheWrValid_o************/
wire    uncacheWrValid = uncacheOpEn && reqLatch[32] && ~uncacheWrOk;
wire    uncacheOpOk = cacheWrValid_o && axiWrReady || (uncacheRdOk) || rdLast_i || uncacheWrOk;

wire    uncacheRdValid = uncacheOpEn && ~reqLatch[32] && ~uncacheRdOk;
reg     uncacheRdOk;
reg     uncacheWrOk;
wire  [31:0]  uncacheRdAddr  = reqLatch[31:0];

reg [63:0]  temp;       //后面记得改
always @(posedge clk or negedge rst_n) begin
    if(uncacheOpEn && rdLast_i) begin
        temp <= rdData_i;
    end
end

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        uncacheRdOk <= 'b0;
    end
    else if(uncacheOpEn && rdLast_i && ~reqLatch[32])begin
        uncacheRdOk <= 'b1;
    end
    else if(~uncacheOpEn) begin
        uncacheRdOk <= 'b0;
    end
end

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        uncacheWrOk <= 'b0;
    end
    else if(uncacheOpEn && axiWrReady && reqLatch[32])begin
        uncacheWrOk <= 'b1;
    end
    else if(~uncacheOpEn) begin
        uncacheWrOk <= 'b0;
    end
end

// always @(posedge clk or negedge rst_n) begin
    
// end

wire        cleanEn = cacheCurState == clean;
wire        clean_OK;
reg [6:0]   cleanCnt;
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        cleanCnt <= 'b0;
    end
    else if(cleanEn && (cleanWrValid && axiWrReady || ~cleanWrValid && ~(~cleanCnt[6] && validArray1[cleanCnt[5:0]] && dirtyArray1[cleanCnt[5:0]] || cleanCnt[6] && validArray2[cleanCnt[5:0]] && dirtyArray2[cleanCnt[5:0]]))) begin
        cleanCnt <= cleanCnt + 'b1;
    end
end
assign clean_OK = cleanCnt=='d127 && (cleanWrValid && axiWrReady || ~cleanWrValid);
assign clear_Icache = clean_OK;
reg cleanWrValid;
reg [31:0]  cleanWrAddr;

reg oneCycleDelay;
always @(*) begin
    if(cleanEn) begin
    //way1
    if(~cleanCnt[6]) begin
        if(validArray1[cleanCnt[5:0]] && dirtyArray1[cleanCnt[5:0]] && oneCycleDelay) begin
            cleanWrValid = 'b1;
            cleanWrAddr = {tagArray1[cleanCnt[5:0]],cleanCnt[5:0],5'b0};
        end
        else begin
            cleanWrValid = 'b0;
            cleanWrAddr = 'b0;
        end
    end
    //way2
    else begin
        if(validArray2[cleanCnt[5:0]] && dirtyArray2[cleanCnt[5:0]] && oneCycleDelay) begin
            cleanWrValid = 'b1;
            cleanWrAddr = {tagArray2[cleanCnt[5:0]],cleanCnt[5:0],5'b0};
        end
        else begin
            cleanWrValid = 'b0;
            cleanWrAddr = 'b0;
        end
    end
    end
    else begin
        cleanWrValid = 'b0;
        cleanWrAddr = 'b0;
    end
end
    
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        oneCycleDelay <= 'b0;
    end
    else if(cleanEn && (~cleanCnt[6] && validArray1[cleanCnt[5:0]] && dirtyArray1[cleanCnt[5:0]] || cleanCnt[6] && validArray2[cleanCnt[5:0]] && dirtyArray2[cleanCnt[5:0]])) begin
        oneCycleDelay <= 'b1;
    end
    if(oneCycleDelay && axiWrReady) begin
        oneCycleDelay <= 'b0;
    end
end

wire [255:0]    cleanData = cleanCnt[6] ? {dataWay2_2, dataWay2_1} : {dataWay1_2, dataWay1_1};







endmodule

module Icache(
    input                                   clk,rst_n,
//from PIPLINE
    input           [`addr_width-1:0]       addr_i,
    //valid表示有效的读取请求，op表示操作类型，icache恒为0,表示读
    input                                   valid_i,op_i,
    //写数据以及mask，icache无效
    input           [`XLEN-1:0]             wr_data_i,
    input           [7:0]                   wr_mask_i,
    //流水线stall信号，低有效
    input                                   stall_n,
    //回给if模块的地址接收有效信号，为高时表示可以处理新的请求的地址
    output  reg                             addr_ok_o,
    output                                  data_ok_o,  //reserve
    //数据无效信号，为高时表示此时输出的数据无效
    output                                  data_notok_o,
    output          [`XLEN-1:0]             rd_data_o,

    input                                   clrValid,

//to AXI
    //cache发出读请求有效信号
    output                                  cacheRdValid_o,
    //axi可以接受读请求的信号
    input                                   axiRdReady,
    //读取长度，icache恒为4,为一个cacheline的大小，这里未使用
    output          [7:0]                   fetchLenth,
    //最后一个数据信号
    input                                   rdLast_i,
    output          [`addr_width-1:0]       cacheAddr_o,
    input           [`XLEN-1:0]             rdData_i,
    //数据有效信号
    input                                   dataValid_i,

    output[5:0]                         io_sram0_addr,    
    output                              io_sram0_cen,     
    output                              io_sram0_wen,     
    output[127:0]                       io_sram0_wmask,   
    output[127:0]                       io_sram0_wdata,   
    input[127:0]                        io_sram0_rdata,   

    output[5:0]                         io_sram1_addr,    
    output                              io_sram1_cen,     
    output                              io_sram1_wen,     
    output[127:0]                       io_sram1_wmask,   
    output[127:0]                       io_sram1_wdata,   
    input[127:0]                        io_sram1_rdata,  

    output[5:0]                         io_sram2_addr,    
    output                              io_sram2_cen,     
    output                              io_sram2_wen,     
    output[127:0]                       io_sram2_wmask,   
    output[127:0]                       io_sram2_wdata,   
    input[127:0]                        io_sram2_rdata,  

    output[5:0]                         io_sram3_addr,    
    output                              io_sram3_cen,     
    output                              io_sram3_wen,     
    output[127:0]                       io_sram3_wmask,   
    output[127:0]                       io_sram3_wdata,   
    input[127:0]                        io_sram3_rdata
);

//片选信号仅在idle且读有效、compare且命中且读有效、写使能有效这三种情况拉高
//关于地址信号：在需要写入数据时，无论如何都要使用latch住的地址，在读的时候若stall了也要使用latch的，而在正常执行的时候要使用cache模块输入的地址

assign io_sram0_addr = wenWay1 ? index : stall_n ? addr_i[10:5] : index; 
assign io_sram0_cen = ~((idleEn && valid_i) || (compareEn && valid_i && cacheHit) || wenWay1) ;  
assign io_sram0_wen = ~wenWay1;  
assign io_sram0_wmask = 'b0;
assign io_sram0_wdata = inDataWay1_1;
assign dataWay1_1 = io_sram0_rdata;

assign io_sram1_addr = wenWay1 ? index : stall_n ? addr_i[10:5] : index; 
assign io_sram1_cen = ~((idleEn && valid_i) || (compareEn && valid_i && cacheHit) || wenWay1) ;   
assign io_sram1_wen = ~wenWay1 ;   
assign io_sram1_wmask = 'b0; 
assign io_sram1_wdata = inDataWay1_2; 
assign dataWay1_2 = io_sram1_rdata; 

assign io_sram2_addr = wenWay2 ? index : stall_n ? addr_i[10:5] : index; 
assign io_sram2_cen = ~((idleEn && valid_i) || (compareEn && valid_i && cacheHit) || wenWay2) ;   
assign io_sram2_wen = ~wenWay2 ;   
assign io_sram2_wmask = 'b0; 
assign io_sram2_wdata = inDataWay2_1; 
assign dataWay2_1 = io_sram2_rdata; 

assign io_sram3_addr = wenWay2 ? index : stall_n ? addr_i[10:5] : index; 
assign io_sram3_cen = ~((idleEn && valid_i) || (compareEn && valid_i && cacheHit) || wenWay2) ;   
assign io_sram3_wen = ~wenWay2 ;   
assign io_sram3_wmask = 'b0; 
assign io_sram3_wdata = inDataWay2_2; 
assign dataWay2_2 = io_sram3_rdata; 


localparam  idle        = 3'b000,
            compare     = 3'b001,
            miss        = 3'b010,           //ls要加一个状态：wrWait，确保发生写缺失的时候要先写后读（其实可以判断一下是否需要写，若不要写则进入getData）
            getdata     = 3'b011,
            replace     = 3'b111,
            unCacheOp   = 3'b110;

reg     [2:0]   cacheCurState,cacheNexState;
wire            cacheHit;
wire            way1Hit,way2Hit;
wire    [127:0] dataWay1_1,dataWay1_2,dataWay2_1,dataWay2_2;
reg    [127:0] inDataWay1_1,inDataWay1_2,inDataWay2_1,inDataWay2_2;
reg            wenWay1,wenWay2;
wire            uncached;
reg             uncachedOk;

assign uncached = valid_i && reqLatch[31-:4] == 4'b0011;

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        cacheCurState <= idle;
    end
    else begin
        cacheCurState <= cacheNexState;
    end
end

wire diffAddr = addr_i != reqLatch[31:0];

always @(*) begin
    case (cacheCurState)
        idle: begin
            if(valid_i && diffAddr) begin
                cacheNexState = compare;
            end
            else begin
                cacheNexState = idle;
            end
        end
        compare: begin
            if(uncached && ~uncachedOk) begin
                    cacheNexState = miss;
            end
            else if(cacheHit) begin
                if(valid_i && diffAddr) begin
                    cacheNexState = compare;
                end
                else begin
                    cacheNexState = idle;
                end
            end
            else begin
                cacheNexState = miss;
            end
        end
        miss: begin
            if(axiRdReady) begin
                cacheNexState = getdata;
            end
            else begin
                cacheNexState = miss;
            end
        end
        getdata: begin
            if(rdLast_i) begin
                if(~uncached)begin
                    cacheNexState = replace;       //有问题，要该（validbit的问题）
                end
                else begin
                    cacheNexState = compare;
                end
            end
            else begin
                cacheNexState = getdata;
            end
        end 
        //此处须添加一个replace的阶段，为了防止在完成替换后，下一个pc命中，但是读数据的时候与在同一way上的写入操作产生冲突（即读取与写入的地址不一样）
        replace: begin
            cacheNexState = compare;
        end
        default: begin
            cacheNexState = idle;
        end  
    endcase
end

wire                    idleEn = cacheCurState == idle;
reg [`addr_width:0]     reqLatch;
wire    [4:0]           offset = reqLatch[4:0];
wire    [5:0]           index = reqLatch[10:5];
wire    [20:0]          tag = reqLatch[31:11];
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        reqLatch <= 'b0;
    end
    //在compare到compare锁存地址信息时，要保证上一个请求是hit的，否则下一拍会进入miss，而保存的数据失效
    //同时要保证在stall时不锁存，因为1、stall有可能是由cache缺失或其他自身原因造成，此时不能锁存其他数据
    //2、有可能由其他阶段造成如ls部分stall等，此时也不能锁存，否则会锁存下一拍的地址，但是pc还没有变化，导致取得的指令出错
    else if(((idleEn && valid_i && diffAddr) || (compareEn && valid_i && cacheHit && diffAddr) && stall_n)) begin
        reqLatch <= {op_i,addr_i};
    end
end

//addrOk信号仅在idle或者compare且上一拍pc命中的情况下为高，表示新的pc可以被接收
always @(*) begin
    if(idleEn || (compareEn && cacheHit)) begin
        addr_ok_o = 1'b1;
    end
    else begin
        addr_ok_o = 1'b0;
    end
end       

reg [63:0]   validArray1;
reg [63:0]   validArray2;    //共2way，每way有64行，每行256bit，用两个sram拼接，每两个sram共用一个validbit
wire        bitValid1,bitValid2;
reg        bitValid1_d,bitValid2_d;

//valid Bit的写入在getdata的末尾写入
always @(posedge clk or negedge rst_n) begin
    if(~rst_n || clrValid) begin
        validArray1 <= 'b0;
        validArray2 <= 'b0;
    end
    else if(getdataEn && ~uncached) begin
        validArray1[index] <= bitValid1_d;
        validArray2[index] <= bitValid2_d;
    end
end

assign bitValid1 = validArray1[index];
assign bitValid2 = validArray2[index];


reg [20:0]  tagArray1[0:63];
reg [20:0]  tagArray2[0:63];
reg [20:0]  tagArray1_d,tagArray2_d;

wire [20:0] tagWay1_q,tagWay2_q;
reg        validWay1_q,validWay2_q;

//tag的写入同样在getdata的末尾写入
//此处是否能优化呢，即将tagArray1_d和tagArray2_d用一个信号表示，使用信号控制写入tagarray1还是2
always @(posedge clk or negedge rst_n) begin
    if(getdataEn && ~uncached) begin
        tagArray1[index] <= tagArray1_d;
        tagArray2[index] <= tagArray2_d;
    end
end

assign tagWay1_q = tagArray1[index];
assign tagWay2_q = tagArray2[index];

//hit信号产生
assign  way1Hit = (~(|(tagWay1_q ^ tag)) && bitValid1) ? 'b1 : 'b0;
assign  way2Hit = (~(|(tagWay2_q ^ tag)) && bitValid2) ? 'b1 : 'b0;
assign  cacheHit = ((way1Hit || way2Hit ) && ~uncached)|| uncachedOk;
//dataOk信号仅在compare阶段并且命中的情况下为高，
assign data_ok_o = compareEn && cacheHit;
//notok信号在idle阶段不置高
assign data_notok_o = (compareEn && ~cacheHit) || getdataEn || missEn || replaceEn;

wire    compareEn = cacheCurState == compare;

wire [255:0]    way1Data = {dataWay1_2,dataWay1_1};
wire [255:0]    way2Data = {dataWay2_2,dataWay2_1};
// wire test = (idleEn && valid_i) || (compareEn && valid_i && cacheHit);
reg [`XLEN-1:0] rdDataRegWay1,rdDataRegWay2;
always @(*) begin
    if((idleEn && valid_i) || (compareEn && valid_i && cacheHit)) begin
            case(offset[4:3])
                2'b00: rdDataRegWay1 = missFlag ? rdBuffer[63:0]    : way1Data[63:0]   ;
                2'b01: rdDataRegWay1 = missFlag ? rdBuffer[127:64]  : way1Data[127:64] ;
                2'b10: rdDataRegWay1 = missFlag ? rdBuffer[191:128] : way1Data[191:128];
                2'b11: rdDataRegWay1 = missFlag ? rdBuffer[255:192] : way1Data[255:192];
            endcase
            case(offset[4:3])
                2'b00: rdDataRegWay2 = missFlag ? rdBuffer[63:0]    : way2Data[63:0];
                2'b01: rdDataRegWay2 = missFlag ? rdBuffer[127:64]  : way2Data[127:64];
                2'b10: rdDataRegWay2 = missFlag ? rdBuffer[191:128] : way2Data[191:128];
                2'b11: rdDataRegWay2 = missFlag ? rdBuffer[255:192] : way2Data[255:192];
            endcase
    end
    else begin
        rdDataRegWay1 = 'b0;
        rdDataRegWay2 = 'b0;
    end
end

assign rd_data_o = ({64{uncached}}&rdBuffer[63:0])
                 | ({64{way1Hit }}&rdDataRegWay1 )
                 | ({64{way2Hit }}&rdDataRegWay2 );

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        uncachedOk <= 'b0;
    end
    else if(getdataEn && rdLast_i) begin
        uncachedOk <= 'b1;
    end
    else if(stall_n) begin
        uncachedOk <= 'b0;
    end
end


wire    missEn = cacheCurState == miss;
wire    getdataEn = cacheCurState == getdata;
wire [63:0] addrToRead = {32'b0,tag,index,5'b0};
reg [31:0] randomBit;
reg        missFlag;
//由于根据sram模型，写入数据再读出至少需要两个周期，而为了获得更好的性能，在写入后即可读出数据，故需一个信号指示使用rdBUffer里存放的数据而不是sram的
always @(posedge clk or negedge rst_n) begin
    if(~rst_n)begin
        missFlag <= 'b0;
    end
    //将missFlag延后写入sram一个周期，防止读出错误数据
    else if(getdataEn || replaceEn) begin        //在接入AXI后要加上LAST作为判断条件
        missFlag <= 'b1;
    end
    else begin
        missFlag <= 'b0;
    end
end

assign cacheRdValid_o = missEn && axiRdReady;
assign cacheAddr_o = uncached ? reqLatch[31:0] : addrToRead[31:0];

assign fetchLenth = uncached ? 'b000 : 'b011;

assign inDataWay1_1 = rdBuffer[127:0];
assign inDataWay1_2 = rdBuffer[255:128];
assign inDataWay2_1 = rdBuffer[127:0];
assign inDataWay2_2 = rdBuffer[255:128];
reg [1:0]   rdCnt;
//这一部分将axi过来的数据保持在buffer中，在一次存入cache的sram
//icache每次读内存都是固定的读4个64位word，所以使用一个2位的计数器循环计数
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        rdCnt <= 'b0;
    end
    else if(getdataEn && dataValid_i) begin
        if(~rdLast_i) begin
            rdCnt <= rdCnt + 'b1;
        end
        else begin
            rdCnt <= 'b0;
        end
    end
end
reg [255:0] rdBuffer;
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        rdBuffer <= 'b0;
    end 
    else if(getdataEn && dataValid_i) begin
        rdBuffer[rdCnt*64+:64] <= rdData_i;
    end
end

//根据随机决定替换哪个way
always @(posedge clk) begin
    if(replaceEn) begin
        randomBit <= ~randomBit;
    end
end

always @(*) begin
    if(getdataEn && rdLast_i) begin
        //TODO 真‘伪随机
        if(randomBit[0]) begin
            bitValid1_d = 1'b1;
            bitValid2_d = 1'b0;
            tagArray1_d = tag;
            tagArray2_d = 'b0;
        end
        else begin
            bitValid1_d = 1'b0;
            bitValid2_d = 1'b1;
            tagArray1_d = 'b0;
            tagArray2_d = tag;
        end
    end
    else begin
        bitValid1_d = 1'b0;
        bitValid2_d = 1'b0;
        tagArray1_d = 'b0;
        tagArray2_d = 'b0;
    end
end

wire    replaceEn = cacheCurState == replace;
//这里延后一个周期将写是能拉高写入，防止高位无法写入（即最后64位数据）
always @(*) begin
    if(replaceEn && ~uncached) begin
        if(randomBit[0]) begin
            wenWay1 = 1'b1;
            wenWay2 = 1'b0;
        end
        else begin
            wenWay2 = 1'b1;
            wenWay1 = 1'b0;
        end
    end
    else begin
        wenWay2 = 1'b0;
        wenWay1 = 1'b0;
    end
end


endmodule

module decoder (
    input           [`XLEN-1:0]     pc_i,
    input           [`inst_len-1:0] instr_i,

    output   reg    [4      :0]     rs1_idx_o,rs2_idx_o,
    output   reg    [4      :0]     ext_op_o,
    output   reg                    src1sel_o,
    output   reg    [1      :0]     src2sel_o,
    output   reg    [4      :0]     aluctr_o,
    output   reg                    is_jalr_o,is_jal_o,is_brc_o,
    output   reg                    wb_en_o,
    output   reg                    DivEn,
    output   reg    [2      :0]     DivSel,
    output   reg                    trap_id_o,in_trap_id,out_trap_id,

    output   reg                    fence_id
    // output   reg                    csrWrEn,
    // output   reg    [11     :0]     csr_idx_o
);
wire    [4:0]   opcode = instr_i[6:2];
wire    [2:0]   fun_3 = instr_i[14:12];
wire    [6:0]   fun_7 = instr_i[31:25];

// assign  Rd_o = instr_i[11:7];
// assign  Rs1_o = instr_i[19:15];
// assign  Rs2_o = instr_i[24:20];
// assign  csrIdx = instr_i[31:20];



always @(*) begin
    ext_op_o = 5'b0;                          //默认拓展模块输出0
    aluctr_o = `AluAdd_64;                   //默认add
    src1sel_o = `Rs1;                        //默认Rs1    
    src2sel_o = `Rs2;                        //默认Rs2
    is_jalr_o = 1'b0;
    is_jal_o = 1'b0;
    is_brc_o = 1'b0;
    wb_en_o = 1'b0;
    rs1_idx_o = 5'b0;
    rs2_idx_o = 5'b0;
    trap_id_o = 1'b0;
    in_trap_id = 1'b0;
    out_trap_id = 1'b0;
    // csrWrEn = 1'b0;
    // csr_op = 2'b0;              
    // IntSync = 1'b0;
    // mret = 1'b0;
//64/32
    DivEn = 1'b0;                          //默认不使能DIV
    DivSel = `DivMul;

    fence_id = 1'b0;
//TODO: 补全！！！！！！！！！！！！
    case(opcode)
        `OP_REG,`OP_REG_32: begin
            src1sel_o = `Rs1;
            src2sel_o = `Rs2;
            rs1_idx_o = instr_i[19:15];
            rs2_idx_o = instr_i[24:20];  
            wb_en_o = 1'b1;
            DivEn = fun_7[0];
            DivSel = fun_3;
            case(fun_3)
                `add_sub: begin                                          
                    if(fun_7[5]) begin      //Sub
                        aluctr_o = opcode[1] ? `AluSub_32 : `AluSub_64;
                    end
                    else begin
                        aluctr_o = opcode[1] ? `AluAdd_32 : `AluAdd_64;
                    end
                end
                `sll: begin
                    aluctr_o = opcode[1] ? `AluSll_32 : `AluSll_64;
                end    
                `slt: begin
                    aluctr_o = `AluSlt;
                end
                `sltu: begin
                    aluctr_o = `AluSltu;
                end   
                `Xor: begin
                    aluctr_o = `AluXor;
                end    
                `sr_l_a: begin
                    if(fun_7[5]) begin      //SRA
                        aluctr_o = opcode[1] ? `AluSra_32 : `AluSra_64;
                    end
                    else begin
                        aluctr_o = opcode[1] ? `AluSrl_32 : `AluSrl_64;
                    end
                end 
                `Or: begin
                    aluctr_o = `AluOr;
                end     
                `And: begin
                    aluctr_o = `AluAnd;
                end    
            endcase
        end
        `OP_IMM,`OP_IMM_32: begin
            src1sel_o = `Rs1;
            src2sel_o = `imm;  
            ext_op_o = `immI;
            wb_en_o = 1'b1;  
            rs1_idx_o = instr_i[19:15];
            rs2_idx_o = 5'b0;
            DivEn = 1'b0;
            DivSel = `DivMul;
            case(fun_3)
                `addi: begin
                    aluctr_o = opcode[1] ? `AluAdd_32 : `AluAdd_64;
                end   
                `slli: begin
                    aluctr_o = opcode[1] ? `AluSll_32 : `AluSll_64;
                end   
                `slti: begin
                    aluctr_o = `AluSlt;
                end   
                `sltiu: begin
                    aluctr_o = `AluSltu;
                end  
                `Xori: begin
                    aluctr_o = `AluXor;
                end   
                `sri_l_a: begin
                    if(fun_7[5]) begin      //SRA
                        aluctr_o =  opcode[1] ? `AluSra_32 : `AluSra_64;
                    end
                    else begin
                        aluctr_o = opcode[1] ? `AluSrl_32 : `AluSrl_64;
                    end
                end
                `Ori: begin
                    aluctr_o = `AluOr;
                end    
                `Andi: begin
                    aluctr_o = `AluAnd;
                end   
            endcase
        end
        `load: begin
            ext_op_o = `immI;                          
            aluctr_o = `AluAdd_64;                      
            src1sel_o = `Rs1;                       
            src2sel_o = `imm; 
            wb_en_o = 1'b1 && (|instr_i[1:0]); 
            rs1_idx_o = instr_i[19:15];
            rs2_idx_o = 5'b0;                      
            DivEn = 1'b0;
            DivSel = `DivMul;
        end  
        `store: begin
            ext_op_o = `immS;                          
            aluctr_o = `AluAdd_64;                      
            src1sel_o = `Rs1;                       
            src2sel_o = `imm;  
            wb_en_o = 1'b0; 
            rs1_idx_o = instr_i[19:15];
            rs2_idx_o = instr_i[24:20];                     
            DivEn = 1'b0;
            DivSel = `DivMul;
        end
        `branch: begin
            is_brc_o = 1'b1;
            src1sel_o = `Rs1;
            src2sel_o = `Rs2;  
            ext_op_o = `immB;
            wb_en_o = 1'b0; 
            rs1_idx_o = instr_i[19:15];
            rs2_idx_o = instr_i[24:20];  
            DivEn = 1'b0;
            DivSel = `DivMul;
        end
        `jal: begin
            src1sel_o = `PC;
            src2sel_o = `src_4;  
            ext_op_o = `immJ;  
            is_jal_o = 1'b1;
            // branch = `JalCon;
            aluctr_o = `AluAdd_64; 
            wb_en_o = 1'b1; 
            rs1_idx_o = 5'b0;
            rs2_idx_o = 5'b0;
            DivEn = 1'b0;
            DivSel = `DivMul;
        end   
        `jalr: begin
            src1sel_o = `PC;
            src2sel_o = `src_4;  
            ext_op_o = `immI;  
            is_jalr_o = 1'b1;
            // branch = `JalrCon;     
            aluctr_o = `AluAdd_64; 
            wb_en_o = 1'b1; 
            rs1_idx_o = instr_i[19:15];
            rs2_idx_o = 5'b0;
            DivEn = 1'b0;
            DivSel = `DivMul;
        end                                
        `lui: begin
            src1sel_o = `Rs1;
            src2sel_o = `imm;  
            ext_op_o = `immU;  
            // branch = `NonBranch;   
            aluctr_o = `AluSrc2;  
            wb_en_o = 1'b1;
            rs1_idx_o = 5'b0;
            rs2_idx_o = 5'b0; 
            DivEn = 1'b0;
            DivSel = `DivMul;  
        end   
        `auipc: begin
            src1sel_o = `PC;
            src2sel_o = `imm;  
            ext_op_o = `immU;  
            // branch = `NonBranch;   
            aluctr_o = `AluAdd_64;
            wb_en_o = 1'b1; 
            rs1_idx_o = 5'b0;
            rs2_idx_o = 5'b0;
            DivEn = 1'b0;
            DivSel = `DivMul;            
        end
        // //调用DPI-C函数
        `system: begin
            src1sel_o = `Rs1;
            src2sel_o = `src_0;
            rs1_idx_o = instr_i[19:15];
            rs2_idx_o = 5'b0;
            // csrWrEn = 1'b1;
            aluctr_o = `AluAdd_64;
            case(fun_3)
                `env: begin
                    trap_id_o = 1'b1;
                    

                    wb_en_o = 1'b0;
                    if(instr_i[20]) begin                       //ebreak;
                    //    ebreak();
                        in_trap_id = 1'b0;
                    end
                    else if(~instr_i[21]) begin                 //ecall              //ecall;
                        //TODO
                        in_trap_id = 1'b1;
                    end
                    else begin     
                        out_trap_id = 1'b1;                             //mret
                    end
                end
            `csrrw: begin
                wb_en_o = 1'b1;
            end
            `csrrwi: begin
                wb_en_o = 1'b1;
                ext_op_o = `immZI; 
                src2sel_o = `imm;
                aluctr_o = `AluSrc2;
            end
            `csrrs: begin
                wb_en_o = 1'b1;
            end
            `csrrsi: begin
                wb_en_o = 1'b1;
                ext_op_o = `immZI;
                src2sel_o = `imm;
                aluctr_o = `AluSrc2;
            end
            `csrrc: begin
                wb_en_o = 1'b1;
            end
            `csrrci: begin
                wb_en_o = 1'b1;
                ext_op_o = `immZI;
                src2sel_o = `imm;
                aluctr_o = `AluSrc2;
            end
                default: begin

                end
            endcase
        end
        `fence: begin
            if(fun_3 == 3'b001) begin
                fence_id = 1'b1;
            end
            else begin
                fence_id = 1'b0;
            end
        end
        default: begin
            //TODO
            //trap_id_o = 1'b1;
        end
    endcase
end
endmodule //ID_stage
module stl_rst(
  input   i_clk        ,
  input   i_rst_n      , 
  output  o_rst_n_sync
);

  reg rst_n_r1,rst_n_r2;

  always @ (posedge i_clk or negedge i_rst_n) begin
    if (~i_rst_n) begin
        rst_n_r1 <= 1'b0 ; 
        rst_n_r2 <= 1'b0 ;
    end 
    else begin
        rst_n_r1 <= 1'b1  ; 
        rst_n_r2 <= rst_n_r1; 
    end
  end

  assign o_rst_n_sync = rst_n_r2 ;

endmodule

module IF_stage (
    input                           clk,rst_n,
    input                           is_jump_i,
    input           [`XLEN-1:0]     pc_jump_i,
    input           [`XLEN-1:0]     csr_mtvec,csr_mepc,
    input                           in_trap_id,out_trap_id,
    input                           stall_n,

    output   reg    [`XLEN-1:0]     pc_new_o,
    output          [`inst_len-1:0] instr_o,
    output                          if_instr_valid,
    input                           in_intr_ls,

//sram interface
    input           [`XLEN-1:0]     sram_rdata,
    // input                           sram_data_valid,
    input                           cacheAddrOk_i,
    input                           cacheDataOk_i,
    output          [`XLEN-1:0]     sram_addr,
    output                          sram_ren,
    output                          sram_addr_valid
);




assign  sram_ren = 1'b1;
assign  sram_addr = pc_next_o;
assign  sram_addr_valid = pc_new_o !='b0;
// assign  if_instr_valid = sram_data_valid;
assign  if_instr_valid = cacheAddrOk_i && ~cacheDataOk_i;



assign  instr_o = pc_new_o[2] ? sram_rdata[63:32] : sram_rdata[31:0];

// reg [`XLEN-1:0] instr_reg;
// always @(posedge clk or negedge rst_n) begin
//     if(~rst_n) begin
//         instr_reg <= 'b0;
//     end
//     else if(stall_n) begin
//         instr_reg <= sram_rdata;
//     end
// end


wire    [`XLEN-1:0] pc_next_o =  in_intr_ls ? csr_mtvec : is_jump_i ? pc_jump_i : ((in_trap_id)? csr_mtvec : (out_trap_id? csr_mepc : (pc_new_o+`XLEN'd4)));     //对于ex阶段前的trap，有jump先jump

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        pc_new_o <= `XLEN'h3000_0000-4;
    end
    else if(stall_n) begin
        pc_new_o <= pc_next_o;
    end
end

endmodule //IF_stage



module WB_reg (
    input                           clk,rst_n,
    input           [`XLEN-1:0]     pc_wb_reg_i,
    input           [`inst_len-1:0] instr_wb_reg_i,
    input           [`XLEN-1:0]     alures_wb_reg_i,
    input           [`XLEN-1:0]     lsres_wb_reg_i,
    input                           wben_wb_reg_i,
    input           [`XLEN-1:0]     csrdata_wb_reg_i,
    input                           stall_n,

    output   reg    [`XLEN-1:0]     pc_wb_reg_o,
    output   reg    [`inst_len-1:0] instr_wb_reg_o,
    output   reg    [`XLEN-1:0]     alures_wb_reg_o,lsres_wb_reg_o,
    output   reg                    wben_wb_reg_o,
    output   reg    [`XLEN-1:0]     csrdata_wb_reg_o
);


stl_reg #(
  .WIDTH     (4*`XLEN + `inst_len + 1),
  .RESET_VAL (0)
)wb_reg(
  .i_clk   (clk),
  .i_rst_n (rst_n),
  .i_wen   (stall_n),
  .i_din   ({pc_wb_reg_i, instr_wb_reg_i, alures_wb_reg_i, lsres_wb_reg_i, wben_wb_reg_i, csrdata_wb_reg_i}),
  .o_dout  ({pc_wb_reg_o, instr_wb_reg_o, alures_wb_reg_o, lsres_wb_reg_o, wben_wb_reg_o, csrdata_wb_reg_o})
);

endmodule //WB_reg
module ls_stage (
    input                           clk,rst_n,
    input           [`XLEN-1:0]     pc,alures_i,rs2_i,
    input           [`inst_len-1:0] instr_i,
    input           [`XLEN-1:0]     alures_last_i,
    input           [`inst_len-1:0] instr_last_i,
    input           [`XLEN-1:0]     wb_data_i,
    input           [`XLEN-1:0]     wb_csr_data_i,
    input                           trap_ls_i,
    input                           stall_n,if_stall_n,


    output          [`XLEN-1:0]     ls_res_o,
    output          [`XLEN-1:0]     csr_data_o,
    output          [`XLEN-1:0]     mtvec_o,mepc_o,
    output                          ls_not_ok,    
    output                          in_intr_ls,

    input                           ld_csr_hazard,
    input  [63:0]                   wb_pc,
    input  [63:0]                   ex_pc,id_pc,if_pc,
               

    input           [63:0]          clint_axi_araddr   ,
    input           [2:0]           clint_axi_arprot   ,
    input                           clint_axi_arvalid  ,
    output                          clint_axi_arready  ,
    input           [2:0]           clint_axi_arsize   ,

    output          [63:0]          clint_axi_rdata    ,
    output          [1:0]           clint_axi_rresp    ,
    output                          clint_axi_rvalid   ,
    input                           clint_axi_rready   ,  

    input           [2:0]           clint_axi_awsize   ,
    input  [63 : 0]                 clint_axi_awaddr,
    input  [2 : 0]                  clint_axi_awprot,
    input                           clint_axi_awvalid,
    output                          clint_axi_awready,

    input  [63 : 0]                 clint_axi_wdata,
    input  [7 : 0]                  clint_axi_wstrb,
    input                           clint_axi_wvalid,
    output                          clint_axi_wready,

    output  [1 : 0]                 clint_axi_bresp,
    output                          clint_axi_bvalid,
    input                           clint_axi_bready,


//sram interface
    output          [`XLEN-1:0]     ls_sram_addr,
    output                          ls_sram_rd_en,              
    output                          ls_sram_wr_en,
    output          [`XLEN-1:0]     ls_sram_wr_data,
    output          [7      :0]     ls_sram_wr_mask,
    output          [2      :0]     ls_sram_wr_size,
    output          [2      :0]     ls_sram_rd_size,
    input                           ls_sram_rd_data_valid,
    input                           ls_sram_wr_data_ok,
    input           [`XLEN-1:0]     ls_sram_rd_data
);

wire                wren,rden;
wire    [2:0]       memop;
wire    [`XLEN-1:0] wr_data;
 
wire            wren_last;
assign wren_last = (instr_last_i[6:2] == `store);
lsu lsu_u(
    .clk(clk),
    .rstn(rst_n),
    .wren(wren),
    .rden(rden),
    .memop(memop),    
    .wr_data_i(wr_data),
    .addr_i(alures_i),
    .pc_ls_i(pc),               //for sim
    .addr_last_i(alures_last_i),
    .wren_last_i(wren_last),
    .ls_res_o(ls_res_o)    ,
    .ls_not_ok      (ls_not_ok),
    .ls_sram_addr           (ls_sram_addr           ),
    .ls_sram_rd_en          (ls_sram_rd_en          ),          
    .ls_sram_wr_en          (ls_sram_wr_en          ),
    .ls_sram_wr_data        (ls_sram_wr_data        ),
    .ls_sram_wr_mask        (ls_sram_wr_mask        ),
    .ls_sram_rd_data_valid  (ls_sram_rd_data_valid  ),
    .ls_sram_wr_data_ok     (ls_sram_wr_data_ok     ),
    .ls_sram_rd_data        (ls_sram_rd_data        ),
    .ls_sram_wr_size        (ls_sram_wr_size        ),
    .ls_sram_rd_size        (ls_sram_rd_size        )
);

ls_ctr  ls_ctr_u(
    .instr_i(instr_i),
    .instr_last_i(instr_last_i),
    .rs2_i(rs2_i),
    .wb_data_i(wb_data_i),
    .wb_csr_data_i(wb_csr_data_i),

    .wren(wren),
    .rden(rden),
    .memop(memop),
    .wr_data(wr_data)
    
);

//when load-csr happen,we need use wb-stage data instead of regfiles
wire    [63:0]  csr_wr_data;
assign csr_wr_data = ld_csr_hazard ? wb_data_i : alures_i;
//when both load-use and interruption happen,we need use if/id_stall_n, 
wire csr_stall_n = in_intr_ls ? if_stall_n : stall_n;

CSR CSR_u(
    .clk(clk),
    .rst_n(rst_n),
    .pc_i(pc),
    .instr_i(instr_i),
    .csr_wr_data(csr_wr_data),
    .trap(trap_ls_i),
    .csr_data_o(csr_data_o),
    .mtvec_o(mtvec_o),
    .mepc_o(mepc_o),
    .stall_n(csr_stall_n),
    .timer_int_i(timr_int),
    .in_intr_ls(in_intr_ls),
    .wb_pc(wb_pc),
    .ex_pc(ex_pc),
    .id_pc(id_pc),
    .if_pc(if_pc)
);
// wire    in_intr_ls;
wire    timr_int;
clint clint_u(
        .clk                (clk),
        .rst_n              (rst_n),

		.clint_axi_araddr   (clint_axi_araddr),
		.clint_axi_arprot   (clint_axi_arprot),
		.clint_axi_arvalid  (clint_axi_arvalid),
		.clint_axi_arready  (clint_axi_arready),
		.clint_axi_arsize   (clint_axi_arsize),

		.clint_axi_rdata    (clint_axi_rdata ),
		.clint_axi_rresp    (clint_axi_rresp ),
		.clint_axi_rvalid   (clint_axi_rvalid),
		.clint_axi_rready   (clint_axi_rready),   

		.clint_axi_awsize   (clint_axi_awsize ),
		.clint_axi_awaddr   (clint_axi_awaddr ),
		.clint_axi_awprot   (clint_axi_awprot ),
		.clint_axi_awvalid  (clint_axi_awvalid),
		.clint_axi_awready  (clint_axi_awready),

		.clint_axi_wdata    (clint_axi_wdata ),
		.clint_axi_wstrb    (clint_axi_wstrb ),
		.clint_axi_wvalid   (clint_axi_wvalid),  
		.clint_axi_wready   (clint_axi_wready),

		.clint_axi_bresp    (clint_axi_bresp  ),
		.clint_axi_bvalid   (clint_axi_bvalid ),
		.clint_axi_bready   (clint_axi_bready ),

        .hart0_time_int_o   (timr_int)
);

endmodule

module ID_reg (
    input                           clk,rst_n,
    input           [`XLEN-1:0]     pc_id_reg_i,
    input           [`inst_len-1:0] instr_id_reg_i,
    input                           stall_n,flush,

    output  reg     [`XLEN-1:0]     pc_id_reg_o,
    output  reg     [`inst_len-1:0] instr_id_reg_o
);

wire  [`XLEN-1:0]       pc_id_reg;
wire  [`inst_len-1:0]       instr_id_reg;

assign pc_id_reg = flush ? `XLEN'b0 : pc_id_reg_i;
assign instr_id_reg = flush ? `inst_len'b0 : instr_id_reg_i;        //为了仿真方便，就替换成0,而不是nop


stl_reg #(
  .WIDTH     (`XLEN + `inst_len),
  .RESET_VAL (0)
)id_reg(
  .i_clk   (clk),
  .i_rst_n (rst_n),
  .i_wen   (stall_n),
  .i_din   ({pc_id_reg, instr_id_reg}),
  .o_dout  ({pc_id_reg_o, instr_id_reg_o})
);

endmodule

module axi_dcache # (
    parameter RW_DATA_WIDTH     = 64,
    parameter RW_ADDR_WIDTH     = 64,
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 64,
    parameter AXI_ID_WIDTH      = 4,
    parameter AXI_STRB_WIDTH    = AXI_DATA_WIDTH/8,
    parameter AXI_USER_WIDTH    = 1
)(
    input                               clock,
    input                               reset,
    //读部分
	input                                   rw_valid_i,             //cacheRdValid_o
	output reg                              rw_ready_o,             //
    output reg [RW_DATA_WIDTH-1:0]          data_read_o,            //rdData_i
    input  [RW_ADDR_WIDTH-1:0]              rw_addr_i,              //cacheAddr_o
    input  [7:0]                            fetchLenth,              //cache模块发来的取值长度
    output                                  rdLast_o,                           
    output                                  dataValid_o,
    //写部分
    input                                   wr_valid_i,         //写有效
    output reg                              wr_ready_o,            //读完成
    input  [255:0]                          cacheWrData_i,
    input             [7:0]                   storeLenth,
    input   [2:0]                           storeSize,loadSize,
    input  [AXI_STRB_WIDTH-1:0]             rw_w_mask_i,        
    input  [63:0]                           cacheWrAddr_i,          //IF&MEM输入信号



    // Advanced eXtensible Interface
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
    output                              axi_w_last_o,       //lite
    output [AXI_USER_WIDTH-1:0]         axi_w_user_o,
    
    output                              axi_b_ready_o,      //lite           
    input                               axi_b_valid_i,      //lite
    input  [1:0]                        axi_b_resp_i,       //lite            
    input  [AXI_ID_WIDTH-1:0]           axi_b_id_i,
    input  [AXI_USER_WIDTH-1:0]         axi_b_user_i,

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
    input  [AXI_USER_WIDTH-1:0]         axi_r_user_i
);
    assign  axi_ar_region_o = 'b0;
    // ------------------State Machine------------------TODO

    // 写通道状态切换

    localparam        w_state_idle = 2'b00,
                    w_state_aw_wait = 2'b01,
                    w_state_dw_wait = 2'b11,
                    w_state_b_wait_trans_ok = 2'b10;
    reg     [1:0]   w_state,w_state_next;
    reg             aw_valid,w_valid,b_ready,trans_ok;
    wire            wrLast;
    always @(posedge clock or negedge reset) begin
        if(~reset) begin
            w_state <= w_state_idle;
        end
        else begin
            w_state <= w_state_next;
        end
    end
//状态切换
    always @(*) begin
        case(w_state) 
            w_state_idle: begin
                if(wr_valid_i) begin
                    w_state_next = w_state_aw_wait;
                end
                else begin
                    w_state_next = w_state_idle;
                end
            end 
            w_state_aw_wait: begin
                if(axi_aw_ready_i) begin
                    w_state_next = w_state_dw_wait;
                end
                else begin
                    w_state_next = w_state_aw_wait;
                end
            end
            w_state_dw_wait: begin
                if(axi_w_ready_i && wrLast) begin
                    w_state_next = w_state_b_wait_trans_ok;
                end
                else begin
                    w_state_next = w_state_dw_wait;
                end
            end
            w_state_b_wait_trans_ok: begin
                if(axi_b_valid_i) begin
                    w_state_next = w_state_idle;
                end
                else begin
                    w_state_next = w_state_b_wait_trans_ok;
                end
            end
        endcase
    end
    reg     [`XLEN-1:0]     wrAddr_reg;
    reg     [255:0]         wr_data_reg;
    reg     [7:0]           wrMask_reg;
    reg     [2:0]           wrSize_reg;
    reg     [7:0]           storeLenth_reg;
    always @(posedge clock) begin
            if((w_state == w_state_idle) && wr_valid_i) begin
                wrAddr_reg <= cacheWrAddr_i;
                wr_data_reg <= cacheWrData_i;
                wrMask_reg <= rw_w_mask_i;
                wrSize_reg <= storeSize;
                storeLenth_reg <= storeLenth;
            end
    end

reg [1:0]   wrCnt;
always @(posedge clock or negedge reset) begin
    if(~reset) begin
        wrCnt <= 'b0;
    end
    else if((w_state == w_state_idle) && wr_valid_i) begin
        wrCnt <= 'b0;        
    end
    else if((w_state == w_state_dw_wait) && axi_w_ready_i && ~wrLast) begin
        wrCnt <= wrCnt + 'b1;
    end
end
// //输出逻辑
assign aw_valid = w_state == w_state_aw_wait;
assign w_valid  = w_state == w_state_dw_wait;
assign b_ready  = (w_state == w_state_b_wait_trans_ok);
assign wrLast   = w_state == w_state_dw_wait && wrCnt == storeLenth_reg[1:0];
assign wr_ready_o = w_state == w_state_idle;
    // always @(posedge clock) begin
    //     if((w_state == w_state_b_wait_trans_ok) && axi_b_valid_i) begin
    //         trans_ok <= 1'b1;
    //     end
    //     else if(w_state != w_state_b_wait_trans_ok) begin
    //         trans_ok <= 1'b0;
    //     end
    // end



    // 读通道状态切换
    parameter       r_state_idle = 2'b00,
                    r_state_ar_wait = 2'b01,
                    r_state_r_wait = 2'b11,
                    r_state_trans_ok = 2'b10;    
    reg     [1:0]   r_state,r_state_next;
    wire            ar_valid,r_ready;
    // reg             instr_valid;
    reg     [`XLEN-1:0]     rdAddr_reg;
    always @(posedge clock or negedge reset) begin
        if(~reset) begin
            r_state <= r_state_idle;
        end
        else begin
            r_state <= r_state_next;
        end
    end
  always @(*) begin
      case(r_state)
          r_state_idle: begin
              if(rw_valid_i)        r_state_next = r_state_ar_wait;
              else                  r_state_next = r_state_idle;
          end
          r_state_ar_wait: begin
              if(axi_ar_ready_i)    r_state_next = r_state_r_wait;
              else                  r_state_next = r_state_ar_wait;
          end
          r_state_r_wait: begin
              if(axi_r_last_i)     r_state_next = r_state_idle;
              else                  r_state_next = r_state_r_wait;
          end
          default: begin
            r_state_next = r_state_idle;
          end
      endcase
  end

//锁存地址
always @(posedge clock or negedge reset) begin
    if(~reset) begin
        rdAddr_reg <= 'b0;
    end
    else if((r_state == r_state_idle) && rw_valid_i) begin
        rdAddr_reg <= rw_addr_i;
    end
end

assign rw_ready_o = r_state == r_state_idle;
assign rdLast_o = axi_r_last_i;
assign dataValid_o = axi_r_valid_i && axi_r_ready_o;
assign ar_valid = r_state == r_state_ar_wait;
assign r_ready = r_state == r_state_r_wait;
assign data_read_o = axi_r_data_i;
// assign instr_fetching = ~(r_state == r_state_idle);
    // assign rw_ready_o = instr_valid_reg;
    // assign data_read_o = rd_data_reg;
    
    // ------------------Read Transaction------------------

    // Read address channel signals
    assign axi_ar_valid_o   = ar_valid;
    assign axi_ar_addr_o    = rdAddr_reg;
    assign axi_ar_prot_o    = `AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;  //初始化信号即可
    assign axi_ar_id_o      = axi_id;                                                                           //初始化信号即可                        
    assign axi_ar_user_o    = axi_user;                                                                         //初始化信号即可
    assign axi_ar_len_o     = fetchLenth;                                                                          
    assign axi_ar_size_o    = loadSize;
    assign axi_ar_burst_o   = `AXI_BURST_TYPE_INCR;
    assign axi_ar_lock_o    = 1'b0;                                                                             //初始化信号即可
    assign axi_ar_cache_o   = `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;                                 //初始化信号即可
    assign axi_ar_qos_o     = 4'h0;                                                                             //初始化信号即可

    // Read data channel signals
    assign axi_r_ready_o    = r_ready;

    // // ------------------Write Transaction------------------
    parameter AXI_SIZE      = $clog2(AXI_DATA_WIDTH / 8);
    wire [AXI_ID_WIDTH-1:0] axi_id              = 'b1;
    wire [AXI_USER_WIDTH-1:0] axi_user          = {AXI_USER_WIDTH{1'b0}};
    wire [7:0] axi_len      =  8'd3 ;
    wire [2:0] axi_size     = AXI_SIZE[2:0];
    // 写地址通道  以下没有备注初始化信号的都可能是你需要产生和用到的
    assign axi_aw_valid_o   = aw_valid;
    assign axi_aw_addr_o    = wrAddr_reg;
    assign axi_aw_prot_o    = `AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;  //初始化信号即可
    assign axi_aw_id_o      = axi_id;                                                                           //初始化信号即可
    assign axi_aw_user_o    = axi_user;                                                                         //初始化信号即可
    assign axi_aw_len_o     = storeLenth_reg;
    //**********************可能有问题
    assign axi_aw_size_o    = wrSize_reg;
    assign axi_aw_burst_o   = `AXI_BURST_TYPE_INCR;                                                             
    assign axi_aw_lock_o    = 1'b0;                                                                             //初始化信号即可
    assign axi_aw_cache_o   = `AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE;                                  //初始化信号即可
    assign axi_aw_qos_o     = 4'h0;                                                                             //初始化信号即可
    assign axi_aw_region_o  = 4'h0;                                                                             //初始化信号即可

    // 写数据通道
    assign axi_w_valid_o    = w_valid;
    wire    [5:0]      shift = {wrAddr_reg[2:0],3'b0};
    // assign axi_w_data_o     = wr_data_reg[63:0] << shift;
    assign axi_w_strb_o     = 'hff;
    assign axi_w_data_o     = wr_data_reg[wrCnt*64+:64];
    assign axi_w_strb_o     = wrMask_reg;
    assign axi_w_last_o     = wrLast;
    assign axi_w_user_o     = axi_user;                                                                         //初始化信号即可

    // 写应答通道
    assign axi_b_ready_o    = b_ready;



endmodule
module pipline_ctrl (
    input               clk,rst_n,
    input               ld_use_hazard,
    input               is_jump,
    input               in_trap_id,out_trap_id,
    input               if_instr_valid,
    input               ex_not_ok,
    input               ls_not_ok,
    input               in_intr_ls,
    input               fence_id,fence_ex,fence_ls,

    output              if_stall_n,
    output              pc_stall_n,
    output              id_stall_n,
    output              ex_stall_n,
    output              ls_stall_n,
    output              wb_stall_n,

    output              id_flush,
    output              ex_flush,
    output              ls_flush
);
    
wire    fenceInPip = fence_id||fence_ex;
//unused
assign  pc_stall_n = ((fenceInPip && ~is_jump) ||ld_use_hazard || (~if_instr_valid) || ls_not_ok || ex_not_ok) ? 1'b0 : 1'b1;
///

assign  if_stall_n = ((fenceInPip && ~is_jump) ||ld_use_hazard || (~if_instr_valid) || ls_not_ok || ex_not_ok) ? 1'b0 : 1'b1;
assign  id_stall_n = (ld_use_hazard || (~if_instr_valid) || ls_not_ok || ex_not_ok) ? 1'b0 : 1'b1;
assign  ex_stall_n = (~if_instr_valid || ls_not_ok || ex_not_ok) ? 1'b0 : 1'b1;
assign  ls_stall_n = (~if_instr_valid || ls_not_ok || ex_not_ok) ? 1'b0 : 1'b1;
assign  wb_stall_n = (~if_instr_valid || ls_not_ok || ex_not_ok) ? 1'b0 : 1'b1;

assign  ex_flush   = (fence_ex || in_intr_ls || ld_use_hazard || is_jump) ? 1'b1 : 1'b0;
assign  id_flush   = (fence_ex || fence_id || in_intr_ls || is_jump || in_trap_id || out_trap_id) ? 1'b1 : 1'b0;
assign  ls_flush   = in_intr_ls;
endmodule


module axi_icache # (
    parameter RW_DATA_WIDTH     = 64,
    parameter RW_ADDR_WIDTH     = 64,
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 64,
    parameter AXI_ID_WIDTH      = 4,
    parameter AXI_STRB_WIDTH    = AXI_DATA_WIDTH/8,
    parameter AXI_USER_WIDTH    = 1
)(
    input                               clock,
    input                               reset,

	input                                   rw_valid_i,             //cacheRdValid_o
	output reg                              rw_ready_o,             //
    output reg [RW_DATA_WIDTH-1:0]          data_read_o,            //rdData_i
    input  [RW_ADDR_WIDTH-1:0]              rw_addr_i,              //cacheAddr_o
    input  [7:0]                            fetchLenth,              //cache模块发来的取值长度
    output                                  rdLast_o,                           
    output                                  dataValid_o,

    output  reg                         instr_fetching,



    // Advanced eXtensible Interface
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
    input  [AXI_USER_WIDTH-1:0]         axi_r_user_i
);
assign  axi_ar_region_o = 'b0;
    // ------------------State Machine------------------TODO

    // 写通道状态切换
    

    // 读通道状态切换
    parameter       r_state_idle = 2'b00,
                    r_state_ar_wait = 2'b01,
                    r_state_r_wait = 2'b11,
                    r_state_trans_ok = 2'b10;    
    reg     [1:0]   r_state,r_state_next;
    wire            ar_valid,r_ready;
    // reg             instr_valid;
    reg     [`XLEN-1:0]     addr_reg;
    always @(posedge clock or negedge reset) begin
        if(~reset) begin
            r_state <= r_state_idle;
        end
        else begin
            r_state <= r_state_next;
        end
    end
  always @(*) begin
      case(r_state)
          r_state_idle: begin
              if(rw_valid_i)        r_state_next = r_state_ar_wait;
              else                  r_state_next = r_state_idle;
          end
          r_state_ar_wait: begin
              if(axi_ar_ready_i)    r_state_next = r_state_r_wait;
              else                  r_state_next = r_state_ar_wait;
          end
          r_state_r_wait: begin
              if(axi_r_last_i)     r_state_next = r_state_idle;
              else                  r_state_next = r_state_r_wait;
          end
          default: begin
            r_state_next = r_state_idle;
          end
      endcase
  end

//锁存地址
always @(posedge clock or negedge reset) begin
    if(~reset) begin
        addr_reg <= 'b0;
    end
    else if((r_state == r_state_idle) && rw_valid_i) begin
        addr_reg <= rw_addr_i;
    end
end

assign rw_ready_o = r_state == r_state_idle;
assign rdLast_o = axi_r_last_i;
assign dataValid_o = axi_r_valid_i && axi_r_ready_o;
assign ar_valid = r_state == r_state_ar_wait;
assign r_ready = r_state == r_state_r_wait;
assign data_read_o = axi_r_data_i;
assign instr_fetching = ~(r_state == r_state_idle);
//   //此处假设在握手期间，addr等信息不会改变，后面记得注意这一条件，可能要改


    
    // ------------------Read Transaction------------------

    // Read address channel signals
    assign axi_ar_valid_o   = ar_valid;
    assign axi_ar_addr_o    = addr_reg;
    assign axi_ar_prot_o    = `AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;  //初始化信号即可
    assign axi_ar_id_o      = axi_id;                                                                           //初始化信号即可                        
    assign axi_ar_user_o    = axi_user;                                                                         //初始化信号即可
    assign axi_ar_len_o     = axi_len;                                                                          
    assign axi_ar_size_o    = axi_size;
    assign axi_ar_burst_o   = `AXI_BURST_TYPE_INCR;
    assign axi_ar_lock_o    = 1'b0;                                                                             //初始化信号即可
    assign axi_ar_cache_o   = `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;                                 //初始化信号即可
    assign axi_ar_qos_o     = 4'h0;                                                                             //初始化信号即可

    // Read data channel signals
    assign axi_r_ready_o    = r_ready;

    // // ------------------Write Transaction------------------
    parameter AXI_SIZE      = $clog2(AXI_DATA_WIDTH / 8);
    wire [AXI_ID_WIDTH-1:0] axi_id              = {AXI_ID_WIDTH{1'b0}};
    wire [AXI_USER_WIDTH-1:0] axi_user          = {AXI_USER_WIDTH{1'b0}};
    wire [7:0] axi_len      =  fetchLenth ;                           //lenth为长度减1
    wire [2:0] axi_size     =  fetchLenth=='b0 ? 'd2 : AXI_SIZE[2:0];
    // // 写地址通道  以下没有备注初始化信号的都可能是你需要产生和用到的
    // assign axi_aw_valid_o   = w_state_addr;
    // assign axi_aw_addr_o    = rw_addr_i;
    // assign axi_aw_prot_o    = `AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;  //初始化信号即可
    // assign axi_aw_id_o      = axi_id;                                                                           //初始化信号即可
    // assign axi_aw_user_o    = axi_user;                                                                         //初始化信号即可
    // assign axi_aw_len_o     = axi_len;
    // assign axi_aw_size_o    = axi_size;
    // assign axi_aw_burst_o   = `AXI_BURST_TYPE_INCR;                                                             
    // assign axi_aw_lock_o    = 1'b0;                                                                             //初始化信号即可
    // assign axi_aw_cache_o   = `AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE;                                  //初始化信号即可
    // assign axi_aw_qos_o     = 4'h0;                                                                             //初始化信号即可
    // assign axi_aw_region_o  = 4'h0;                                                                             //初始化信号即可

    // // 写数据通道
    // assign axi_w_valid_o    = w_state_write;
    // assign axi_w_data_o     = rw_w_data_i ;
    // assign axi_w_strb_o     = rw_size_i;
    // assign axi_w_last_o     = 1'b0;
    // assign axi_w_user_o     = axi_user;                                                                         //初始化信号即可

    // // 写应答通道
    // assign axi_b_ready_o    = w_state_resp;



endmodule

module L_S_reg (
  input                           clk,rstn,
  input           [`XLEN-1:0]     PC_ls_reg_i,rs2_ls_reg_i,
  input           [`inst_len-1:0] instr_ls_reg_i,
  input           [`XLEN-1:0]     alures_ls_reg_i,
  input                           wben_ls_reg_i,
  input                           trap_ls_reg_i,
  input                           stall_n,
  input                           flush_i,
    input                           fence_ls_reg_i,

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
    output   reg                    trap_ls_reg_o,
    output                          fence_ls_reg_o

);

wire [3*`XLEN + `inst_len + 2 +1-1:0] bundle;
assign bundle = flush_i ? 'b0 : {PC_ls_reg_i, instr_ls_reg_i, rs2_ls_reg_i, alures_ls_reg_i, wben_ls_reg_i, trap_ls_reg_i, fence_ls_reg_i};

stl_reg #(
  .WIDTH     (3*`XLEN + `inst_len + 2 +1),
.RESET_VAL (0)
)ls_reg(
.i_clk   (clk),
.i_rst_n (rstn),
.i_wen   (stall_n),
.i_din   (bundle),
  .o_dout  ({PC_ls_reg_o, instr_ls_reg_o, rs2_ls_reg_o, alures_ls_reg_o, wben_ls_reg_o, trap_ls_reg_o, fence_ls_reg_o})
);


endmodule
module hazard_detect (
    input           [`inst_len-1:0] instr_id_i,instr_ex_i,
    input           [`inst_len-1:0] instr_ls_i,instr_wb_i,
    
    output                          ld_use_hazard,
    output                          ld_csr_hazard
    // output                          stalln_pc,stalln_id,flush_ex
);



assign  ld_use_hazard = ((instr_ex_i[6:0] == {`load,2'b11}) &   //此处不加两比特1就会卡在开头，麻
                 (instr_id_i[6:2] == `jalr || 
                 instr_id_i[6:2] == `branch || 
                 instr_id_i[6:2] == `OP_IMM || 
                 instr_id_i[6:2] == `OP_IMM_32 || 
                 instr_id_i[6:2] == `OP_REG || 
                 instr_id_i[6:2] == `OP_REG_32) &
                 (instr_ex_i[11:7] == instr_id_i[19:15] || 
                 instr_ex_i[11:7] == instr_id_i[24:20]))||
                 ((instr_ex_i[6:0] == {`load,2'b11}) & (instr_id_i[6:0] == {`load,2'b11} ||
                  instr_id_i[6:2] == `store) &
                  (instr_ex_i[11:7] == instr_id_i[19:15]));
// assign stalln_pc = ~hazard;
// assign stalln_id = ~hazard;
// assign flush_ex  = hazard;

wire wb_is_load = (instr_wb_i[6:0] == {`load,2'b11});
wire ls_is_csropi = (instr_ls_i[6:0] == {`system,2'b11}) && (instr_ls_i[14:12] == `csrrw || instr_ls_i[14:12] == `csrrc || instr_ls_i[14:12] == `csrrs);

assign ld_csr_hazard = wb_is_load && ls_is_csropi &&
                        instr_wb_i[11:7] == instr_ls_i[19:15];

endmodule
module bcu (
    input           [`XLEN-1:0]     rs1_i,rs2_i,
    input                           is_jalr_i,
    input                           is_jal_i,
    input                           is_brc_i,
    input           [2      :0]     fun_3,
    // input                           is_jump_i,
    input           [`XLEN-1:0]     imm_i,
    input           [`XLEN-1:0]     pc_i,

    output          [`XLEN-1:0]     brc_pc_o,
    output                          is_jump_o
);

wire     [`XLEN-1:0]    pc_imm_res;
wire     [`XLEN-1:0]    rs1_imm_res;
assign brc_pc_o = is_jalr_i ? rs1_imm_res : pc_imm_res;
assign pc_imm_res = pc_i + imm_i;
assign rs1_imm_res = rs1_i + imm_i;

//is_jump_o = jal | jalr | branch(with condition)
wire                    less,zero;
wire                    carry,overflow;
wire    [`XLEN-1:0]     subres;
wire    [`XLEN-1:0]     rs2_2s;
assign rs2_2s = rs2_i^{`XLEN{1'b1}};
assign {carry,subres} = rs1_i + rs2_2s +`XLEN'b1;
assign overflow = (rs1_i[`XLEN-1] == rs2_2s[`XLEN-1]) && (subres[`XLEN-1] != rs1_i[`XLEN-1]);
assign zero = ~(|subres);

reg                     branch;
always @(*) begin
    case(fun_3)
        `Beq : begin
            branch = zero;
        end
        `Bne : begin
            branch = ~zero;
        end
        `Blt : begin
            branch = subres[`XLEN-1]^overflow;
        end
        `Bge : begin
            branch = ~(subres[`XLEN-1]^overflow);
        end
        `Bltu: begin
            branch = ~carry;
        end
        `Bgeu: begin
            branch = carry;
        end
        default: begin
            branch = 1'b0;
        end
    endcase
end

assign is_jump_o = is_jal_i | is_jalr_i | (is_brc_i & branch);

endmodule

module ls_ctr (
    input       [`inst_len-1:0] instr_i,instr_last_i,
    input       [`XLEN-1:0]     rs2_i,
    input       [`XLEN-1:0]     wb_data_i,wb_csr_data_i,                
    output                      wren,rden,
    output      [2      :0]     memop,
    output      [`XLEN-1:0]     wr_data

);
    
assign  memop = instr_i[14      :12];
assign  wren  = (instr_i[6      :2] == `store);
assign  rden  = (instr_i[6      :0] == {`load,2'b11});      //同理

wire    ld_st_en;                                           //load-store前递
wire    csr_st_en;
assign csr_st_en = (instr_last_i[6:0] == {`system,2'b11}) && (instr_last_i[14:12] == `csrrw || instr_last_i[14:12] == `csrrc || instr_last_i[14:12] == `csrrs)
                    && (instr_i[24:20] == instr_last_i[11:7]);
assign ld_st_en = (instr_last_i[6:2] == `load) & (instr_i[24:20] == instr_last_i[11:7]);
assign wr_data = (ld_st_en ) ? wb_data_i :  csr_st_en ? wb_csr_data_i : rs2_i;

endmodule
module axi_arbiter # (
    parameter RW_DATA_WIDTH     = 64,
    parameter RW_ADDR_WIDTH     = 64,
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 64,
    parameter AXI_ID_WIDTH      = 4,
    parameter AXI_STRB_WIDTH    = AXI_DATA_WIDTH/8,
    parameter AXI_USER_WIDTH    = 1
)(
//if interface  id: 0
    input                               instr_fetching,
    output                              if_axi_ar_ready_o,     //lite              
    input                               if_axi_ar_valid_i,     //lite
    input [AXI_ADDR_WIDTH-1:0]          if_axi_ar_addr_i,      //lite
    input [2:0]                         if_axi_ar_prot_i,
    input [AXI_ID_WIDTH-1:0]            if_axi_ar_id_i,
    input [AXI_USER_WIDTH-1:0]          if_axi_ar_user_i,
    input [7:0]                         if_axi_ar_len_i,       //lite
    input [2:0]                         if_axi_ar_size_i,      //lite
    input [1:0]                         if_axi_ar_burst_i,
    input                               if_axi_ar_lock_i,
    input [3:0]                         if_axi_ar_cache_i,
    input [3:0]                         if_axi_ar_qos_i,
    input [3:0]                         if_axi_ar_region_i,
    
    input                               if_axi_r_ready_i,      //lite            
    output                              if_axi_r_valid_o,      //lite            
    output  [1:0]                       if_axi_r_resp_o,
    output  [AXI_DATA_WIDTH-1:0]        if_axi_r_data_o,       //lite
    output                              if_axi_r_last_o,
    output  [AXI_ID_WIDTH-1:0]          if_axi_r_id_o,
    output  [AXI_USER_WIDTH-1:0]        if_axi_r_user_o,
//ls interface  id: 1
    output                              ls_axi_aw_ready_o,     //lite         
    input                               ls_axi_aw_valid_i,     //lite
    input [AXI_ADDR_WIDTH-1:0]          ls_axi_aw_addr_i,      //lite
    input [2:0]                         ls_axi_aw_prot_i,
    input [AXI_ID_WIDTH-1:0]            ls_axi_aw_id_i,
    input [AXI_USER_WIDTH-1:0]          ls_axi_aw_user_i,
    input [7:0]                         ls_axi_aw_len_i,       
    input [2:0]                         ls_axi_aw_size_i,
    input [1:0]                         ls_axi_aw_burst_i,
    input                               ls_axi_aw_lock_i,
    input [3:0]                         ls_axi_aw_cache_i,
    input [3:0]                         ls_axi_aw_qos_i,
    input [3:0]                         ls_axi_aw_region_i,

    output                              ls_axi_w_ready_o,      //lite              
    input                               ls_axi_w_valid_i,      //lite
    input [AXI_DATA_WIDTH-1:0]          ls_axi_w_data_i,       //lite
    input [AXI_DATA_WIDTH/8-1:0]        ls_axi_w_strb_i,       //lite
    input                               ls_axi_w_last_i,       //lite
    input [AXI_USER_WIDTH-1:0]          ls_axi_w_user_i,
    
    input                               ls_axi_b_ready_i,      //lite           
    output                              ls_axi_b_valid_o,      //lite
    output  [1:0]                       ls_axi_b_resp_o,       //lite            
    output  [AXI_ID_WIDTH-1:0]          ls_axi_b_id_o,
    output  [AXI_USER_WIDTH-1:0]        ls_axi_b_user_o,

    output                              ls_axi_ar_ready_o,     //lite              
    input                               ls_axi_ar_valid_i,     //lite
    input [AXI_ADDR_WIDTH-1:0]          ls_axi_ar_addr_i,      //lite
    input [2:0]                         ls_axi_ar_prot_i,
    input [AXI_ID_WIDTH-1:0]            ls_axi_ar_id_i,
    input [AXI_USER_WIDTH-1:0]          ls_axi_ar_user_i,
    input [7:0]                         ls_axi_ar_len_i,       //lite
    input [2:0]                         ls_axi_ar_size_i,      //lite
    input [1:0]                         ls_axi_ar_burst_i,
    input                               ls_axi_ar_lock_i,
    input [3:0]                         ls_axi_ar_cache_i,
    input [3:0]                         ls_axi_ar_qos_i,
    input [3:0]                         ls_axi_ar_region_i,
    
    input                               ls_axi_r_ready_i,      //lite            
    output                              ls_axi_r_valid_o,      //lite            
    output  [1:0]                       ls_axi_r_resp_o,
    output  [AXI_DATA_WIDTH-1:0]        ls_axi_r_data_o,       //lite
    output                              ls_axi_r_last_o,
    output  [AXI_ID_WIDTH-1:0]          ls_axi_r_id_o,
    output  [AXI_USER_WIDTH-1:0]        ls_axi_r_user_o,

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
    output                              axi_w_last_o,       //lite
    output [AXI_USER_WIDTH-1:0]         axi_w_user_o,
    
    output                              axi_b_ready_o,      //lite           
    input                               axi_b_valid_i,      //lite
    input  [1:0]                        axi_b_resp_i,       //lite            
    input  [AXI_ID_WIDTH-1:0]           axi_b_id_i,
    input  [AXI_USER_WIDTH-1:0]         axi_b_user_i,

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

    output   [63 : 0]                       clint_axi_araddr,
    output   [2 : 0]                         clint_axi_arprot,
    output                                   clint_axi_arvalid,
    input                                  clint_axi_arready,
    output  [2:0]                            clint_axi_arsize,

    input  [63 : 0]                        clint_axi_rdata,
    input  [1 : 0]                         clint_axi_rresp,
    input                                  clint_axi_rvalid,
    output                                   clint_axi_rready,   

    output  [2:0]                            clint_axi_awsize,
    output  [63 : 0]                         clint_axi_awaddr,
    output  [2 : 0]                          clint_axi_awprot,
    output                                   clint_axi_awvalid,
    input                                  clint_axi_awready,

    output  [63 : 0]                         clint_axi_wdata,
    output  [7 : 0]                          clint_axi_wstrb,
    output                                   clint_axi_wvalid,
    input                                  clint_axi_wready,

    input  [1 : 0]                         clint_axi_bresp,
    input                                  clint_axi_bvalid,
    output                                   clint_axi_bready

// //mmio
//     input                               axi_mmio_aw_ready_i,     //lite         
//     output                              axi_mmio_aw_valid_o,     //lite
//     output [AXI_ADDR_WIDTH-1:0]         axi_mmio_aw_addr_o,      //lite
//     output [2:0]                        axi_mmio_aw_prot_o,
//     output [AXI_ID_WIDTH-1:0]           axi_mmio_aw_id_o,
//     output [AXI_USER_WIDTH-1:0]         axi_mmio_aw_user_o,
//     output [7:0]                        axi_mmio_aw_len_o,       
//     output [2:0]                        axi_mmio_aw_size_o,
//     output [1:0]                        axi_mmio_aw_burst_o,
//     output                              axi_mmio_aw_lock_o,
//     output [3:0]                        axi_mmio_aw_cache_o,
//     output [3:0]                        axi_mmio_aw_qos_o,
//     output [3:0]                        axi_mmio_aw_region_o,

//     input                               axi_mmio_w_ready_i,      //lite              
//     output                              axi_mmio_w_valid_o,      //lite
//     output [AXI_DATA_WIDTH-1:0]         axi_mmio_w_data_o,       //lite
//     output [AXI_DATA_WIDTH/8-1:0]       axi_mmio_w_strb_o,       //lite
//     output                              axi_mmio_w_last_o,       //lite
//     output [AXI_USER_WIDTH-1:0]         axi_mmio_w_user_o,
  
//     output                              axi_mmio_b_ready_o,      //lite           
//     input                               axi_mmio_b_valid_i,      //lite
//     input  [1:0]                        axi_mmio_b_resp_i,       //lite            
//     input  [AXI_ID_WIDTH-1:0]           axi_mmio_b_id_i,
//     input  [AXI_USER_WIDTH-1:0]         axi_mmio_b_user_i,

//     input                               axi_mmio_ar_ready_i,     //lite              
//     output                              axi_mmio_ar_valid_o,     //lite
//     output [AXI_ADDR_WIDTH-1:0]         axi_mmio_ar_addr_o,      //lite
//     output [2:0]                        axi_mmio_ar_prot_o,
//     output [AXI_ID_WIDTH-1:0]           axi_mmio_ar_id_o,
//     output [AXI_USER_WIDTH-1:0]         axi_mmio_ar_user_o,
//     output [7:0]                        axi_mmio_ar_len_o,       //lite
//     output [2:0]                        axi_mmio_ar_size_o,      //lite
//     output [1:0]                        axi_mmio_ar_burst_o,
//     output                              axi_mmio_ar_lock_o,
//     output [3:0]                        axi_mmio_ar_cache_o,
//     output [3:0]                        axi_mmio_ar_qos_o,
//     output [3:0]                        axi_mmio_ar_region_o,
   
//     output                              axi_mmio_r_ready_o,      //lite            
//     input                               axi_mmio_r_valid_i,      //lite            
//     input  [1:0]                        axi_mmio_r_resp_i,
//     input  [AXI_DATA_WIDTH-1:0]         axi_mmio_r_data_i,       //lite
//     input                               axi_mmio_r_last_i,
//     input  [AXI_ID_WIDTH-1:0]           axi_mmio_r_id_i,
//     input  [AXI_USER_WIDTH-1:0]         axi_mmio_r_user_i
);

wire                              axi_aw_ready;  
wire                              axi_aw_valid;  
wire [AXI_ADDR_WIDTH-1:0]         axi_aw_addr;   
wire [2:0]                        axi_aw_prot;
wire [AXI_ID_WIDTH-1:0]           axi_aw_id;
wire [AXI_USER_WIDTH-1:0]         axi_aw_user;
wire [7:0]                        axi_aw_len;    
wire [2:0]                        axi_aw_size;
wire [1:0]                        axi_aw_burst;
wire                              axi_aw_lock;
wire [3:0]                        axi_aw_cache;
wire [3:0]                        axi_aw_qos;
wire [3:0]                        axi_aw_region;
wire                              axi_w_ready;   
wire                              axi_w_valid;   
wire [AXI_DATA_WIDTH-1:0]         axi_w_data;    
wire [AXI_DATA_WIDTH/8-1:0]       axi_w_strb;    
wire                              axi_w_last;    
wire [AXI_USER_WIDTH-1:0]         axi_w_user;

wire                              axi_b_ready;   
wire                              axi_b_valid;   
wire [1:0]                        axi_b_resp;    
wire [AXI_ID_WIDTH-1:0]           axi_b_id;
wire [AXI_USER_WIDTH-1:0]         axi_b_user;

wire                              axi_ar_ready;  
wire                              axi_ar_valid;  
wire [AXI_ADDR_WIDTH-1:0]         axi_ar_addr;   
wire [2:0]                        axi_ar_prot;
wire [AXI_ID_WIDTH-1:0]           axi_ar_id;
wire [AXI_USER_WIDTH-1:0]         axi_ar_user;
wire [7:0]                        axi_ar_len;    
wire [2:0]                        axi_ar_size;   
wire [1:0]                        axi_ar_burst;
wire                              axi_ar_lock;
wire [3:0]                        axi_ar_cache;
wire [3:0]                        axi_ar_qos;
wire [3:0]                        axi_ar_region;

wire                              axi_r_ready;   
wire                              axi_r_valid;   
wire [1:0]                        axi_r_resp;
wire [AXI_DATA_WIDTH-1:0]         axi_r_data;    
wire                              axi_r_last;
wire [AXI_ID_WIDTH-1:0]           axi_r_id;
wire [AXI_USER_WIDTH-1:0]         axi_r_user;

assign ls_axi_aw_ready_o   = axi_aw_ready   ;   
assign axi_aw_valid   = ls_axi_aw_valid_i   ;  
assign axi_aw_addr    = ls_axi_aw_addr_i    ;   
assign axi_aw_prot    = ls_axi_aw_prot_i    ; 
assign axi_aw_id      = ls_axi_aw_id_i      ;
assign axi_aw_user    = ls_axi_aw_user_i    ; 
assign axi_aw_len     = ls_axi_aw_len_i     ;  
assign axi_aw_size    = ls_axi_aw_size_i    ; 
assign axi_aw_burst   = ls_axi_aw_burst_i   ;  
assign axi_aw_lock    = ls_axi_aw_lock_i    ; 
assign axi_aw_cache   = ls_axi_aw_cache_i   ;  
assign axi_aw_qos     = ls_axi_aw_qos_i     ;
assign axi_aw_region  = ls_axi_aw_region_i  ;   
assign ls_axi_w_ready_o = axi_w_ready       ;   
assign axi_w_valid    = ls_axi_w_valid_i    ; 
assign axi_w_data     = ls_axi_w_data_i     ;  
assign axi_w_strb     = ls_axi_w_strb_i     ;   
assign axi_w_last     = ls_axi_w_last_i     ;   
assign axi_w_user     = ls_axi_w_user_i     ;
assign axi_b_ready    = ls_axi_b_ready_i    ;   
assign ls_axi_b_valid_o    = axi_b_valid    ;  
assign ls_axi_b_resp_o     =  axi_b_resp    ;  
assign ls_axi_b_id_o       =  axi_b_id      ;
assign ls_axi_b_user_o     =  axi_b_user    ;

 
assign axi_ar_valid   =   instr_fetching ? if_axi_ar_valid_i  : ls_axi_ar_valid_i  ;    
assign axi_ar_addr    =   instr_fetching ? if_axi_ar_addr_i   : ls_axi_ar_addr_i   ;    
assign axi_ar_prot    =   instr_fetching ? if_axi_ar_prot_i   : ls_axi_ar_prot_i   ;    
assign axi_ar_id      =   instr_fetching ? if_axi_ar_id_i     : ls_axi_ar_id_i     ;
assign axi_ar_user    =   instr_fetching ? if_axi_ar_user_i   : ls_axi_ar_user_i   ;    
assign axi_ar_len     =   instr_fetching ? if_axi_ar_len_i    : ls_axi_ar_len_i    ;  
assign axi_ar_size    =   instr_fetching ? if_axi_ar_size_i   : ls_axi_ar_size_i   ;      
assign axi_ar_burst   =   instr_fetching ? if_axi_ar_burst_i  : ls_axi_ar_burst_i  ;     
assign axi_ar_lock    =   instr_fetching ? if_axi_ar_lock_i   : ls_axi_ar_lock_i   ;    
assign axi_ar_cache   =   instr_fetching ? if_axi_ar_cache_i  : ls_axi_ar_cache_i  ;     
assign axi_ar_qos     =   instr_fetching ? if_axi_ar_qos_i    : ls_axi_ar_qos_i    ;
assign axi_ar_region  =   instr_fetching ? if_axi_ar_region_i : ls_axi_ar_region_i ;
assign axi_r_ready    =   instr_fetching ? if_axi_r_ready_i   : ls_axi_r_ready_i   ;     

assign if_axi_ar_ready_o   =  axi_ar_id[0] ? 0 : axi_ar_ready;
assign ls_axi_ar_ready_o   =  axi_ar_id[0] ? axi_ar_ready : 0;

assign if_axi_r_valid_o    = axi_r_id[0] ? 'b0 : axi_r_valid;  
assign ls_axi_r_valid_o    = axi_r_id[0] ? axi_r_valid : 'b0;
assign if_axi_r_resp_o     = axi_r_id[0] ? 'b0 : axi_r_resp;
assign ls_axi_r_resp_o     = axi_r_id[0] ? axi_r_resp : 'b0;  
assign if_axi_r_data_o     = axi_r_id[0] ? 'b0 : axi_r_data;
assign ls_axi_r_data_o     = axi_r_id[0] ? axi_r_data : 'b0;
assign if_axi_r_last_o     = axi_r_id[0] ? 'b0 : axi_r_last;
assign ls_axi_r_last_o     = axi_r_id[0] ? axi_r_last : 'b0;  
assign if_axi_r_id_o       = axi_r_id;
assign ls_axi_r_id_o       = axi_r_id;
// assign if_axi_r_user_o     =   


assign axi_aw_ready = clint_w_trans ? clint_axi_awready : axi_aw_ready_i;   
assign axi_aw_valid_o = (clint_w_trans) ? 'b0 : axi_aw_valid;
assign axi_aw_addr_o = (clint_w_trans) ? 'b0 : axi_aw_addr;    
assign axi_aw_prot_o = (clint_w_trans) ? 'b0 : axi_aw_prot;
assign axi_aw_id_o = (clint_w_trans) ? 'b0 : axi_aw_id;
assign axi_aw_user_o = (clint_w_trans) ? 'b0 : axi_aw_user;
assign axi_aw_len_o = (clint_w_trans) ? 'b0 : axi_aw_len;     
assign axi_aw_size_o = (clint_w_trans) ? 'b0 : axi_aw_size;
assign axi_aw_burst_o = (clint_w_trans) ? 'b0 : axi_aw_burst;
assign axi_aw_lock_o = (clint_w_trans) ? 'b0 : axi_aw_lock;
assign axi_aw_cache_o = (clint_w_trans) ? 'b0 : axi_aw_cache;
assign axi_aw_qos_o = (clint_w_trans) ? 'b0 : axi_aw_qos;
assign axi_aw_region_o = (clint_w_trans) ? 'b0 : axi_aw_region;
assign axi_w_ready = clint_w_trans ? clint_axi_wready : axi_w_ready_i;    
assign axi_w_valid_o = (clint_w_trans) ? 'b0 : axi_w_valid;   
assign axi_w_data_o = (clint_w_trans) ? 'b0 : axi_w_data;     
assign axi_w_strb_o = (clint_w_trans) ? 'b0 : axi_w_strb;     
assign axi_w_last_o = (clint_w_trans) ? 'b0 : axi_w_last;     
assign axi_w_user_o = (clint_w_trans) ? 'b0 : axi_w_user;
assign axi_b_ready_o = (clint_w_trans) ? 'b0 : axi_b_ready;    
assign axi_b_valid = clint_w_trans ? clint_axi_bvalid : axi_b_valid_i;    
assign axi_b_resp = clint_w_trans ? clint_axi_bresp : axi_b_resp_i;     
assign axi_b_id = clint_w_trans ? 'b01 : axi_b_id_i;
assign axi_b_user = clint_w_trans ? 'b0 : axi_b_user_i;
assign axi_ar_ready = clint_r_trans ? clint_axi_arready : axi_ar_ready_i;   
assign axi_ar_valid_o = (clint_r_trans) ? 'b0 : axi_ar_valid;   
assign axi_ar_addr_o  = (clint_r_trans) ? 'b0 : axi_ar_addr;    
assign axi_ar_prot_o  = (clint_r_trans) ? 'b0 : axi_ar_prot;
assign axi_ar_id_o  = (clint_r_trans) ? 'b0 : axi_ar_id;
assign axi_ar_user_o = (clint_r_trans) ? 'b0 : axi_ar_user;
assign axi_ar_len_o = (clint_r_trans) ? 'b0 : axi_ar_len;
assign axi_ar_size_o = (clint_r_trans) ? 'b0 : axi_ar_size;
assign axi_ar_burst_o = (clint_r_trans) ? 'b0 : axi_ar_burst;
assign axi_ar_lock_o = (clint_r_trans) ? 'b0 : axi_ar_lock;
assign axi_ar_cache_o = (clint_r_trans) ? 'b0 : axi_ar_cache;
assign axi_ar_qos_o = (clint_r_trans) ? 'b0 : axi_ar_qos;
assign axi_ar_region_o = (clint_r_trans) ? 'b0 : axi_ar_region;
assign axi_r_ready_o = (clint_r_trans) ? 'b0 : axi_r_ready;
assign axi_r_valid = clint_r_trans ? clint_axi_rvalid : axi_r_valid_i;    
assign axi_r_resp = clint_r_trans ? clint_axi_rresp : axi_r_resp_i;
assign axi_r_data = clint_r_trans ? clint_axi_rdata : axi_r_data_i;     
assign axi_r_last = clint_r_trans ? clint_axi_rvalid : axi_r_last_i;
assign axi_r_id = clint_r_trans ? 'b01 : axi_r_id_i;
assign axi_r_user = clint_r_trans ? 'b0 : axi_r_user_i;

assign ls_axi_r_user_o = 'b0;
assign if_axi_r_user_o = 'b0;
assign axi_ar_region_o = 'b0;

wire clint_r_trans = axi_ar_addr[27:24] == 4'h2;
wire clint_w_trans = axi_aw_addr[27:24] == 4'h2;


assign clint_axi_araddr = (~clint_r_trans) ? 'b0 : axi_ar_addr;
assign clint_axi_arprot = (~clint_r_trans) ? 'b0 : axi_ar_prot;
assign clint_axi_arvalid = (~clint_r_trans) ? 'b0 : axi_ar_valid; 
assign clint_axi_arsize = (~clint_r_trans) ? 'b0 : axi_ar_size;

assign clint_axi_rready = (~clint_r_trans) ? 'b0 : axi_r_ready;

assign clint_axi_awsize = (~clint_w_trans) ? 'b0 : axi_aw_size;
assign clint_axi_awaddr = (~clint_w_trans) ? 'b0 : axi_aw_addr;   
assign clint_axi_awprot = (~clint_w_trans) ? 'b0 : axi_aw_prot;
assign clint_axi_awvalid = (~clint_w_trans) ? 'b0 : axi_aw_valid;

assign clint_axi_wdata = (~clint_w_trans) ? 'b0 : axi_w_data;
assign clint_axi_wstrb = (~clint_w_trans) ? 'b0 : axi_w_strb;  
assign clint_axi_wvalid = (~clint_w_trans) ? 'b0 : axi_w_valid; 


assign clint_axi_bready = (~clint_w_trans) ? 'b0 : axi_b_ready;

endmodule //axi_crossbar

module EX_reg (
    input                           clk,rst_n, 
    input                           stall_n,flush,
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
    input                           DivEn_ex_reg_i,
    input           [2      :0]     DivSel_ex_reg_i,
    input                           trap_ex_reg_i,
    input                           fence_ex_reg_i,

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
    output   reg                    trap_ex_reg_o,
    output                          fence_ex_reg_o
);

//只对关键控制信号清零
wire    [`XLEN-1:0]         pc_ex_reg;
wire    [`inst_len-1:0]     instr_ex_reg;
wire                        is_jalr_ex_reg;
wire                        is_jal_ex_reg;
wire                        is_brc_ex_reg;
wire                        wben_ex_reg;
wire                        trap_ex_reg;
wire                        fence_ex_reg;

assign  pc_ex_reg       = flush ? `XLEN'b0      : pc_ex_reg_i;
assign  instr_ex_reg    = flush ? `inst_len'b0  : instr_ex_reg_i;
assign  is_jalr_ex_reg  = flush ? 1'b0          : is_jalr_ex_reg_i;
assign  is_jal_ex_reg   = flush ? 1'b0          : is_jal_ex_reg_i;
assign  is_brc_ex_reg   = flush ? 1'b0          : is_brc_ex_reg_i;
assign  wben_ex_reg     = flush ? 1'b0          : wben_ex_reg_i;
assign  trap_ex_reg     = flush ? 1'b0          : trap_ex_reg_i;
assign fence_ex_reg     = flush ? 1'B0          : fence_ex_reg_i;

stl_reg #(
  .WIDTH     (4*`XLEN + `inst_len + 27+1),
  .RESET_VAL (0)
)ex_reg(
  .i_clk   (clk),
  .i_rst_n (rst_n),
  .i_wen   (stall_n),
  .i_din   ({pc_ex_reg, instr_ex_reg, rs2_ex_reg_i, rs1_ex_reg_i, imm_ex_reg_i, aluctr_ex_reg_i, is_jalr_ex_reg, is_jal_ex_reg,
             is_brc_ex_reg, src1sel_ex_reg_i, src2sel_ex_reg_i, wben_ex_reg, rs1_idx_ex_reg_i, rs2_idx_ex_reg_i, DivEn_ex_reg_i,
             DivSel_ex_reg_i, trap_ex_reg, fence_ex_reg}),
  .o_dout  ({pc_ex_reg_o, instr_ex_reg_o, rs2_ex_reg_o, rs1_ex_reg_o, imm_ex_reg_o, aluctr_ex_reg_o, is_jalr_ex_reg_o, is_jal_ex_reg_o,
             is_brc_ex_reg_o, src1sel_ex_reg_o, src2sel_ex_reg_o, wben_ex_reg_o, rs1_idx_ex_reg_o, rs2_idx_ex_reg_o, DivEn_ex_reg_o,
             DivSel_ex_reg_o, trap_ex_reg_o, fence_ex_reg_o})
);

endmodule
module regfile(
	input							clk,
	input	[`XLEN-1:0]				pc_wb,					//for diff-test
				
	input	[`inst_len-1:0]			instr_wb_i,

	input	[`reg_addr_width-1:0]	rs1_addr_i,
	output	[`XLEN-1:0]				rs1_data_o,
	
	input	[`reg_addr_width-1:0]	rs2_addr_i,
	output	[`XLEN-1:0]				rs2_data_o,
	
	input	[`reg_addr_width-1:0]	wr_addr_i,
	input	[`XLEN-1:0]				wr_data_i,
	input							wr_en

//for varilator dbug

);

/***DPI-C***/
// import "DPI-C" function void ebreak();
// import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
// initial set_gpr_ptr(regfiles);  // rf为通用寄存器的二维数组变量
// always @(posedge clk) begin
// 	if(instr_wb_i == 32'h100073) begin
// 		ebreak();	
// 	end
// end


//regfiles
reg		[`XLEN-1:0]	regfiles[0:31];

//write		引入cg的写法
always @(posedge clk) begin
	if(wr_en) begin
		regfiles[wr_addr_i] <= (wr_addr_i == `reg_addr_width'b0)?`XLEN'b0 : wr_data_i;	
	end
	// else begin
	// 	regfiles[wr_addr_i] <= regfiles[wr_addr_i];
	// end
end



//read
assign	rs1_data_o = (rs1_addr_i == 5'b0)?`XLEN'b0 : regfiles[rs1_addr_i];
assign	rs2_data_o = (rs2_addr_i == 5'b0)?`XLEN'b0 : regfiles[rs2_addr_i];

// always @(posedge clk) begin
// 	if(pc_wb != `XLEN'b0) begin
// 		difftest_step(pc_wb);
// 	end
// end


endmodule

module ALU(
    input       [4:0]           ALUctr,
    input       [`XLEN-1:0]     src1,
    input       [`XLEN-1:0]     src2,
    input                       DivEn,
    input       [2:0]           DivSel,

    output      [`XLEN-1:0]     ALUres,
    output  reg                 less,
    output                      zero
);

/*
ALUctr[3]|[2:0]
       0 | 000:   add
       1 | 000；  sub
       x | 001:   leftshift
       0 | 010:   slt, with signed-less
       1 | 010：  slt, with unsigned-less
       x | 011:   output src2
       x | 100:   xor
       0 | 101:   rsl
       1 | 101:   rsa
       x | 110:   or
       x | 111:   and
*/

reg [`XLEN-1:0]     ALUout;
wire                    cin;
wire    [`XLEN-1:0]     src2_cin = src2 ^ {`XLEN{cin}};
wire    [`XLEN-1:0]     Adder_o;
wire                    u_s_mux;
wire                    sft_a_l;
wire                    sft_l_r;
wire    [2:0]           out_mux;
wire    [`XLEN-1:0]     shift;   

wire                    carry,overflow;
wire    [`XLEN-1:0]     XOR = src1 ^ src2;
wire    [`XLEN-1:0]     OR  = src1 | src2;
wire    [`XLEN-1:0]     AND = src1 & src2;
// wire            shift_l = src1 << src2[4:0];                //注意修改
// wire            shift_r = (sft_a_l)? src1 >>> src2[4:0]:src1 >> src2[4:0];

Adder   Adder_main(
    .src1(src1),
    .src2(src2_cin),
    .cin(cin),
    .Adder_o(Adder_o),
    .carry(carry),
    .zero(zero),
    .overflow(overflow)
);

control ALU_Control(
    .ALUctr(ALUctr[3:0]),
    .out_mux(out_mux),
    .sft_a_l(sft_a_l),
    .sft_l_r(sft_l_r),
    .add_sub(cin),
    .u_s(u_s_mux)
);

shifter64 shifter(
    .ALUctr(ALUctr[4]),
    .src1(src1),    
    .src2(src2[5:0]),    
    .sft_l_r(sft_l_r),
    .sft_a_l(sft_a_l), 
    .shift(shift)  
);

wire    [`XLEN-1:0]     DivOut;
DIVIDER  divider(
    .src1(src1),
    .src2(src2),
    .DivSel(DivSel),
    .DivOut(DivOut)
);

//Less
// assign less = (u_s_mux)? carry^cin : ALUout[`XLEN-1]^overflow;
always @(*) begin
    if(u_s_mux) begin
        less = carry^cin;
    end
    else begin
        less = Adder_o[`XLEN-1]^overflow;
    end
end

//out_mux
always @(*) begin
    if (DivEn) begin
        ALUout = DivOut;
    end
    else
        case(out_mux)
            3'h0: begin
                ALUout = Adder_o;
            end
            3'h1,3'h5: begin
                ALUout = shift;
            end
            3'h2: begin
                ALUout = {63'b0,less};    //零扩展
            end
            3'h3: begin
                ALUout = src2;
            end
            3'h4: begin
                ALUout = XOR;
            end
            3'h6: begin
                ALUout = OR;
            end
            3'h7: begin
                ALUout = AND;
            end
        endcase
end
assign ALUres = ALUctr[4] ? {{32{ALUout[31]}}, ALUout[31:0]} : ALUout;

endmodule


//Adder
module Adder(
    input       [`XLEN-1:0]     src1,
    input       [`XLEN-1:0]     src2,
    input                       cin,
    output  reg [`XLEN-1:0]     Adder_o,
    output  reg                 carry,
    output  reg                 zero,
    output  reg                 overflow
);
always @(*) begin
    {carry,Adder_o} = src1 + src2 +{63'b000,cin};
    overflow = (src1[`XLEN-1] == src2[`XLEN-1]) && (Adder_o[`XLEN-1] != src1[`XLEN-1]);
    zero = ~(|Adder_o);
end

endmodule

//ALUcontrol
module control(
    input  [3:0]    ALUctr,
    output [2:0]    out_mux,
    output          sft_a_l,
    output          sft_l_r,
    output          add_sub,
    output          u_s
);
assign out_mux = ALUctr[2:0];
// always @(*) begin
//     case(ALUctr[2:0])
//         3'b000: begin
//             add_sub = ALUctr[3];           //1-sub; 0-add
//         end
//         3'b010: begin
//             add_sub = 1;
//             u_s = ALUctr[3];               //1-unsigned;0-signed
//         end
//         3'b001: begin
//             sft_l_r = 0;                   //0-left;1-right
//         end
//         3'b101: begin
//             sft_l_r = 1;
//             sft_a_l = ALUctr[3];           //0-logic;1-arith
//         end
//     endcase
// end
//上下等效(大概?)
assign add_sub = ALUctr[1] | ALUctr[3];
assign u_s = ALUctr[3];
assign sft_l_r = ALUctr[2];
assign sft_a_l = ALUctr[3];
endmodule


module shifter64(
    input                   ALUctr, //[4]
    input [`XLEN-1:0]       src1,     
    input [5:0]             src2,      
    input                   sft_l_r,
    input                   sft_a_l,  
    output     [`XLEN-1:0]  shift  
);

wire    [`XLEN-1:0]         shft_src;
wire    [`XLEN-1:0]         shft_res;
wire    [`XLEN-1:0]         sr_mask;
wire    [`XLEN-1:0]         sr_mask_n;
wire    [`XLEN-1:0]         srl_res;
wire    [`XLEN-1:0]         sra_res;
wire    [`XLEN-1:0]         sll_res;

assign shft_src = sft_l_r ? src1 :
                            {
                             src1[ 0], src1[ 1], src1[ 2], src1[ 3], src1[ 4], src1[ 5], src1[ 6], src1[ 7], 
                             src1[ 8], src1[ 9], src1[10], src1[11], src1[12], src1[13], src1[14], src1[15],
                             src1[16], src1[17], src1[18], src1[19], src1[20], src1[21], src1[22], src1[23],
                             src1[24], src1[25], src1[26], src1[27], src1[28], src1[29], src1[30], src1[31],
                             src1[32], src1[33], src1[34], src1[35], src1[36], src1[37], src1[38], src1[39],
                             src1[40], src1[41], src1[42], src1[43], src1[44], src1[45], src1[46], src1[47],
                             src1[48], src1[49], src1[50], src1[51], src1[52], src1[53], src1[54], src1[55],
                             src1[56], src1[57], src1[58], src1[59], src1[60], src1[61], src1[62], src1[63]
                            };
assign shft_res  = shft_src >> src2;
assign sr_mask   = (`XLEN'hffff_ffff_ffff_ffff >> src2[5:0]);
assign sr_mask_n = ~sr_mask;
assign srl_res   = ALUctr ? shft_res & {32'b0, sr_mask[63:32]} :                                                              //32位
                          shft_res;                                                                                         //64位
//                                    31位为高则置位                        否则清零（因为符号扩展嘛）                                    
assign sra_res   = ALUctr ? src1[31] ? shft_res | {32'b1, sr_mask_n[63:32]} : shft_res & {32'b0, sr_mask[63:32]}        //32位操作
                          : shft_res | {{64{src1[63]}} & sr_mask_n};                                                           //64位操作
assign sll_res   = {
                    shft_res[ 0], shft_res[ 1], shft_res[ 2], shft_res[ 3], shft_res[ 4], shft_res[ 5], shft_res[ 6], shft_res[ 7], 
                    shft_res[ 8], shft_res[ 9], shft_res[10], shft_res[11], shft_res[12], shft_res[13], shft_res[14], shft_res[15],
                    shft_res[16], shft_res[17], shft_res[18], shft_res[19], shft_res[20], shft_res[21], shft_res[22], shft_res[23],
                    shft_res[24], shft_res[25], shft_res[26], shft_res[27], shft_res[28], shft_res[29], shft_res[30], shft_res[31],
                    shft_res[32], shft_res[33], shft_res[34], shft_res[35], shft_res[36], shft_res[37], shft_res[38], shft_res[39],
                    shft_res[40], shft_res[41], shft_res[42], shft_res[43], shft_res[44], shft_res[45], shft_res[46], shft_res[47],
                    shft_res[48], shft_res[49], shft_res[50], shft_res[51], shft_res[52], shft_res[53], shft_res[54], shft_res[55],
                    shft_res[56], shft_res[57], shft_res[58], shft_res[59], shft_res[60], shft_res[61], shft_res[62], shft_res[63]
                   };
assign shift = sft_l_r ?  sft_a_l ? sra_res : srl_res
                        : sll_res;
endmodule


//暂未作除零及溢出的处理
module DIVIDER (
    input       [`XLEN-1:0]     src1,src2,
    input       [2:0]           DivSel,
    output  reg [`XLEN-1:0]     DivOut
);
always @(*) begin
    case (DivSel)
        `DivMul: begin
                DivOut = (src1 * src2);
        end
        `DivMulh: begin
            DivOut = $signed(src1) * $signed(src2);
        end
        `DivMulhsu: begin
            DivOut = $signed(src1) * $unsigned(src2);
        end
        `DivMulhu: begin
            DivOut = $unsigned(src1) * $unsigned(src2);
        end
        `DivDiv: begin
                DivOut = $signed(src1) / $signed(src2);
        end
        `DivRem: begin
                DivOut = $signed(src1) % $signed(src2);
        end
        `DivDivu: begin
                DivOut = $unsigned(src1) / $unsigned(src2);
        end
        `DivRemu: begin
            DivOut = $unsigned(src1) % $unsigned(src2);
        end
        default: begin
            DivOut = `XLEN'b0;
        end
    endcase
end
endmodule //DIVIDER


module clint (
        input                                   clk,rst_n,

		input  [63 : 0]                         clint_axi_araddr,
		input  [2 : 0]                          clint_axi_arprot,
		input                                   clint_axi_arvalid,
		output                                  clint_axi_arready,
		input  [2:0]                            clint_axi_arsize,

		output  [63 : 0]                        clint_axi_rdata,
		output  [1 : 0]                         clint_axi_rresp,
		output                                  clint_axi_rvalid,
		input                                   clint_axi_rready,   

		input  [2:0]                            clint_axi_awsize,
		input  [63 : 0]                         clint_axi_awaddr,
		input  [2 : 0]                          clint_axi_awprot,
		input                                   clint_axi_awvalid,
		output                                  clint_axi_awready,

		input  [63 : 0]                         clint_axi_wdata,
		input  [7 : 0]                          clint_axi_wstrb,
		input                                   clint_axi_wvalid,
		output                                  clint_axi_wready,

		output  [1 : 0]                         clint_axi_bresp,
		output                                  clint_axi_bvalid,
		input                                   clint_axi_bready,

        output                                  hart0_time_int_o
);

reg [63 : 0] 	axi_awaddr;
reg  	        axi_awready;
reg  	        axi_wready;
reg [1 : 0] 	axi_bresp;
reg  	        axi_bvalid;
reg [63 : 0] 	axi_araddr;
reg  	        axi_arready;
reg [1 : 0] 	axi_rresp;
reg  	        axi_rvalid;
reg	            aw_en;
reg [63:0]	    reg_data_out;

reg [63:0]      mtime;
reg [63:0]      mtimecmp;
reg             mtimeWrEn,mtimecmpWrEn;

assign clint_axi_awready = axi_awready;
assign clint_axi_wready = axi_wready;
assign clint_axi_bresp = axi_rresp;
assign clint_axi_bvalid = axi_bvalid;
assign clint_axi_arready = axi_arready;
assign clint_axi_rresp = axi_rresp;
assign clint_axi_rvalid = axi_rvalid;

assign clint_axi_rdata = reg_data_out;

always @( posedge clk ) begin
	  if (~rst_n)
	    begin
	      axi_awready <= 1'b0;
	      aw_en <= 1'b1;
	    end 
	  else
	    begin    
	      if (~axi_awready && clint_axi_awvalid && aw_en)
	        begin
	          // slave is ready to accept write address when 
	          // there is a valid write address and write data
	          // on the write address and data bus. This design 
	          // expects no outstanding transactions. 
	          axi_awready <= 1'b1;
	          aw_en <= 1'b0;
	        end
	        else if (clint_axi_bready && axi_bvalid)
	            begin
	              aw_en <= 1'b1;
	              axi_awready <= 1'b0;
	            end
	      else           
	        begin
	          axi_awready <= 1'b0;
	        end
	    end 
end   

always @( posedge clk )
begin
  if (~rst_n)
    begin
      axi_awaddr <= 'b0;
    end 
  else
    begin    
      if (~axi_awready && clint_axi_awvalid && aw_en)
        begin
          // Write Address latching 
          axi_awaddr <= clint_axi_awaddr;
        end
    end 
end  

always @( posedge clk )
begin
  if (~rst_n)
    begin
      axi_wready <= 1'b0;
    end 
  else
    begin    
      if (~axi_wready && clint_axi_wvalid )
        begin
          // slave is ready to accept write data when 
          // there is a valid write address and write data
          // on the write address and data bus. This design 
          // expects no outstanding transactions. 
          axi_wready <= 1'b1;
        end
      else
        begin
          axi_wready <= 1'b0;
        end
    end 
end  

assign slv_reg_wren = axi_wready && clint_axi_wvalid ;

always @(*) begin
    if (slv_reg_wren) begin
        case(axi_awaddr[15:0])
            16'h4000: begin
                mtimeWrEn       = 'b0;
                mtimecmpWrEn    = 'b1;
            end
            16'hbff8: begin
                mtimeWrEn       = 'b1;
                mtimecmpWrEn    = 'b0;
            end
            default:begin
                mtimeWrEn       = 'b0;
                mtimecmpWrEn    = 'b0;
            end
        endcase
      end
      else begin
        mtimeWrEn       = 'b0;
        mtimecmpWrEn    = 'b0;        
      end  
end   

always @( posedge clk )
	begin
	  if (~rst_n)
	    begin
	      axi_bvalid  <= 0;
	      axi_bresp   <= 2'b0;
	    end 
	  else
	    begin    
	      if (axi_wready && clint_axi_wvalid)
	        begin
	          // indicates a valid write response is available
	          axi_bvalid <= 1'b1;
	          axi_bresp  <= 2'b0; // 'OKAY' response 
	        end                   // work error responses in future
	      else
	        begin
	          if (clint_axi_bready && axi_bvalid) 
	            //check if bready is asserted while bvalid is high) 
	            //(there is a possibility that bready is always asserted high)   
	            begin
	              axi_bvalid <= 1'b0; 
	            end  
	        end
	    end
	end

always @( posedge clk )
	begin
	  if (~rst_n)
	    begin
	      axi_arready <= 1'b0;
	      axi_araddr  <= 64'b0;
	    end 
	  else
	    begin    
	      if (~axi_arready && clint_axi_arvalid)
	        begin
	          // indicates that the slave has acceped the valid read address
	          axi_arready <= 1'b1;
	          // Read address latching
	          axi_araddr  <= clint_axi_araddr;
	        end
	      else
	        begin
	          axi_arready <= 1'b0;
	        end
	    end 
	end

always @( posedge clk )
	begin
	  if (~rst_n)
	    begin
	      axi_rvalid <= 0;
	      axi_rresp  <= 0;
	    end 
	  else
	    begin    
	      if (axi_arready && clint_axi_arvalid && ~axi_rvalid)
	        begin
	          // Valid read data is available at the read data bus
	          axi_rvalid <= 1'b1;
	          axi_rresp  <= 2'b0; // 'OKAY' response
	        end   
	      else if (axi_rvalid && clint_axi_rready)
	        begin
	          // Read data is accepted by the master
	          axi_rvalid <= 1'b0;
	        end                
	    end
	end  
    wire	 slv_reg_wren;
	wire	 slv_reg_rden;
    assign slv_reg_rden = axi_arready & clint_axi_arvalid & ~axi_rvalid;
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
		reg_data_out = 'b0;   
	end
	else if (slv_reg_rden)
    case(axi_araddr[15:0])
        16'h4000: begin
            reg_data_out       = mtimecmp;
        end
        16'hbff8: begin
            reg_data_out       = mtime;
        end
        default:begin
            reg_data_out       = 'b0;
        end
    endcase
    else
        reg_data_out = 'b0;        
end

integer	 byte_index;
//mtime
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        mtime <= 'b0;
    end
    else begin
        if(mtimeWrEn) begin
            for ( byte_index = 0; byte_index <= 8; byte_index = byte_index+1 )
                if ( clint_axi_wstrb[byte_index] == 1 ) begin
                // Respective byte enables are asserted as per write strobes 
                // Slave register 0
                mtime[(byte_index*8) +: 8] <= clint_axi_wdata[(byte_index*8) +: 8];
                end  
        end
        else begin
            mtime <= mtime + 'b1;
        end
    end
end
//mtimecmp
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        mtimecmp <= 'b0;
    end
    else begin
        if(mtimecmpWrEn) begin
            for ( byte_index = 0; byte_index <= 8; byte_index = byte_index+1 )
                if ( clint_axi_wstrb[byte_index] == 1 ) begin
                // Respective byte enables are asserted as per write strobes 
                // Slave register 0
                    mtimecmp[(byte_index*8) +: 8] <= clint_axi_wdata[(byte_index*8) +: 8];
                end  
        end
        else begin
            mtimecmp <= mtimecmp;
        end
    end    
end

// wire    time_int_intern;
// assign time_int_intern = (mtime >= mtimecmp);
// //上升沿检测
// reg time_int_intern_0,time_int_intern_1;
// always @(posedge clk or negedge rst_n) begin
//     if(~rst_n)begin
//         time_int_intern_0 <= 'b0;
//         time_int_intern_1 <= 'b0;
//     end
//     else begin
//         time_int_intern_0 <= time_int_intern;
//         time_int_intern_1 <= time_int_intern_0;
//     end
// end
assign hart0_time_int_o = (mtime >= mtimecmp);

endmodule //clint
module stl_reg #(
  parameter WIDTH = 1,
  parameter RESET_VAL = 0
)(
  input                     i_clk   ,
  input                     i_rst_n ,
  input                     i_wen   ,
  input         [WIDTH-1:0] i_din   ,
  output reg    [WIDTH-1:0] o_dout
);

  always @(posedge i_clk or negedge i_rst_n) begin
    if (!i_rst_n) begin
      o_dout <= RESET_VAL;
    end else if(i_wen) begin
      o_dout <= i_din;
    end
  end

endmodule

