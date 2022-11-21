module axi_crossbar # (
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

//mmio
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
    output                              axi_mmio_w_last_o,       //lite
    output [AXI_USER_WIDTH-1:0]         axi_mmio_w_user_o,
  
    output                              axi_mmio_b_ready_o,      //lite           
    input                               axi_mmio_b_valid_i,      //lite
    input  [1:0]                        axi_mmio_b_resp_i,       //lite            
    input  [AXI_ID_WIDTH-1:0]           axi_mmio_b_id_i,
    input  [AXI_USER_WIDTH-1:0]         axi_mmio_b_user_i,

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
    input  [AXI_USER_WIDTH-1:0]         axi_mmio_r_user_i
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


assign axi_aw_ready = (axi_aw_addr[29]) ? axi_mmio_aw_ready_i : axi_aw_ready_i;   
assign axi_aw_valid_o = (axi_aw_addr[29]) ? 'b0 : axi_aw_valid;
assign axi_aw_addr_o = (axi_aw_addr[29]) ? 'b0 : axi_aw_addr;    
assign axi_aw_prot_o = (axi_aw_addr[29]) ? 'b0 : axi_aw_prot;
assign axi_aw_id_o = (axi_aw_addr[29]) ? 'b0 : axi_aw_id;
assign axi_aw_user_o = (axi_aw_addr[29]) ? 'b0 : axi_aw_user;
assign axi_aw_len_o = (axi_aw_addr[29]) ? 'b0 : axi_aw_len;     
assign axi_aw_size_o = (axi_aw_addr[29]) ? 'b0 : axi_aw_size;
assign axi_aw_burst_o = (axi_aw_addr[29]) ? 'b0 : axi_aw_burst;
assign axi_aw_lock_o = (axi_aw_addr[29]) ? 'b0 : axi_aw_lock;
assign axi_aw_cache_o = (axi_aw_addr[29]) ? 'b0 : axi_aw_cache;
assign axi_aw_qos_o = (axi_aw_addr[29]) ? 'b0 : axi_aw_qos;
assign axi_aw_region_o = (axi_aw_addr[29]) ? 'b0 : axi_aw_region;
assign axi_w_ready_i = (axi_aw_addr[29]) ? 'b0 : axi_w_ready;    
assign axi_w_valid_o = (axi_aw_addr[29]) ? 'b0 : axi_w_valid;   
assign axi_w_data_o = (axi_aw_addr[29]) ? 'b0 : axi_w_data;     
assign axi_w_strb_o = (axi_aw_addr[29]) ? 'b0 : axi_w_strb;     
assign axi_w_last_o = (axi_aw_addr[29]) ? 'b0 : axi_w_last;     
assign axi_w_user_o = (axi_aw_addr[29]) ? 'b0 : axi_w_user;
assign axi_b_ready_o = (axi_aw_addr[29]) ? 'b0 : axi_b_ready;    
assign axi_b_valid = (axi_aw_addr[29]) ? axi_mmio_b_valid_i : axi_b_valid_i;    
assign axi_b_resp = (axi_aw_addr[29]) ? axi_mmio_b_resp_i : axi_b_resp_i;     
assign axi_b_id = (axi_aw_addr[29]) ? axi_mmio_b_id_i : axi_b_id_i;
assign axi_b_user = (axi_aw_addr[29]) ? axi_mmio_b_user_i : axi_b_user_i;
assign axi_ar_ready = (axi_ar_addr[29]) ? axi_mmio_ar_ready : axi_ar_ready_i,   
assign axi_ar_valid_o = (axi_ar_addr[29]) ? 'b0 : axi_ar_valid,   
assign axi_ar_addr_o  = (axi_ar_addr[29]) ? 'b0 : axi_ar_addr,    
assign axi_ar_prot_o  = (axi_ar_addr[29]) ? 'b0 : axi_ar_prot,
assign axi_ar_id_o  = (axi_ar_addr[29]) ? 'b0 : axi_ar_id;
assign axi_ar_user_o = (axi_ar_addr[29]) ? 'b0 : axi_ar_user;
assign axi_ar_len_o = (axi_ar_addr[29]) ? 'b0 : axi_ar_len;
assign axi_ar_size_o = (axi_ar_addr[29]) ? 'b0 : axi_ar_size;
assign axi_ar_burst_o = (axi_ar_addr[29]) ? 'b0 : axi_ar_burst;
assign axi_ar_lock_o = (axi_ar_addr[29]) ? 'b0 : axi_ar_lock;
assign axi_ar_cache_o = (axi_ar_addr[29]) ? 'b0 : axi_ar_cache;
assign axi_ar_qos_o = (axi_ar_addr[29]) ? 'b0 : axi_ar_qos;
assign axi_ar_region_o = (axi_ar_addr[29]) ? 'b0 : axi_ar_region;
assign axi_r_ready_o = (axi_ar_addr[29]) ? 'b0 : axi_r_ready;
assign axi_r_valid = (axi_ar_addr[29]) ? axi_mmio_r_valid_i : axi_r_valid_i;    
assign axi_r_resp = (axi_ar_addr[29]) ? axi_mmio_r_resp_i : axi_r_resp_i;
assign axi_r_data = (axi_ar_addr[29]) ? axi_mmio_r_data_i : axi_r_data_i;     
assign axi_r_last = (axi_ar_addr[29]) ? axi_mmio_r_last_i : axi_r_last_i;
assign axi_r_id = (axi_ar_addr[29]) ? axi_mmio_r_id_i : axi_r_id_i;
assign axi_r_user = (axi_ar_addr[29]) ? axi_mmio_r_user_i : axi_r_user_i;

assign axi_mmio_aw_valid_o =    (~axi_aw_addr[29]) ? 'b0 : axi_aw_valid;
assign axi_mmio_aw_addr_o =     (~axi_aw_addr[29]) ? 'b0 : axi_aw_addr;    
assign axi_mmio_aw_prot_o =     (~axi_aw_addr[29]) ? 'b0 : axi_aw_prot;
assign axi_mmio_aw_id_o =       (~axi_aw_addr[29]) ? 'b0 : axi_aw_id;
assign axi_mmio_aw_user_o =     (~axi_aw_addr[29]) ? 'b0 : axi_aw_user;
assign axi_mmio_aw_len_o =      (~axi_aw_addr[29]) ? 'b0 : axi_aw_len;     
assign axi_mmio_aw_size_o =     (~axi_aw_addr[29]) ? 'b0 : axi_aw_size;
assign axi_mmio_aw_burst_o =    (~axi_aw_addr[29]) ? 'b0 : axi_aw_burst;
assign axi_mmio_aw_lock_o =     (~axi_aw_addr[29]) ? 'b0 : axi_aw_lock;
assign axi_mmio_aw_cache_o =    (~axi_aw_addr[29]) ? 'b0 : axi_aw_cache;
assign axi_mmio_aw_qos_o =      (~axi_aw_addr[29]) ? 'b0 : axi_aw_qos;
assign axi_mmio_aw_region_o =   (~axi_aw_addr[29]) ? 'b0 : axi_aw_region;
assign axi_mmio_w_valid_o =     (~axi_aw_addr[29]) ? 'b0 : axi_w_valid;   
assign axi_mmio_w_data_o =      (~axi_aw_addr[29]) ? 'b0 : axi_w_data;     
assign axi_mmio_w_strb_o =      (~axi_aw_addr[29]) ? 'b0 : axi_w_strb;     
assign axi_mmio_w_last_o =      (~axi_aw_addr[29]) ? 'b0 : axi_w_last;     
assign axi_mmio_w_user_o =      (~axi_aw_addr[29]) ? 'b0 : axi_w_user;
assign axi_mmio_b_ready_o =     (~axi_aw_addr[29]) ? 'b0 : axi_b_ready;  
assign axi_mmio_ar_valid_o =    (~axi_ar_addr[29]) ? 'b0 : axi_ar_valid,   
assign axi_mmio_ar_addr_o  =    (~axi_ar_addr[29]) ? 'b0 : axi_ar_addr,    
assign axi_mmio_ar_prot_o  =    (~axi_ar_addr[29]) ? 'b0 : axi_ar_prot,
assign axi_mmio_ar_id_o  =      (~axi_ar_addr[29]) ? 'b0 : axi_ar_id;
assign axi_mmio_ar_user_o =     (~axi_ar_addr[29]) ? 'b0 : axi_ar_user;
assign axi_mmio_ar_len_o =      (~axi_ar_addr[29]) ? 'b0 : axi_ar_len;
assign axi_mmio_ar_size_o =     (~axi_ar_addr[29]) ? 'b0 : axi_ar_size;
assign axi_mmio_ar_burst_o =    (~axi_ar_addr[29]) ? 'b0 : axi_ar_burst;
assign axi_mmio_ar_lock_o =     (~axi_ar_addr[29]) ? 'b0 : axi_ar_lock;
assign axi_mmio_ar_cache_o =    (~axi_ar_addr[29]) ? 'b0 : axi_ar_cache;
assign axi_mmio_ar_qos_o =      (~axi_ar_addr[29]) ? 'b0 : axi_ar_qos;
assign axi_mmio_ar_region_o =   (~axi_ar_addr[29]) ? 'b0 : axi_ar_region;
assign axi_mmio_r_ready_o =     (~axi_ar_addr[29]) ? 'b0 : axi_r_ready;

endmodule //axi_crossbar