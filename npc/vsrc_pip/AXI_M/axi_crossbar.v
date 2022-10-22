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
    input  [AXI_USER_WIDTH-1:0]         axi_r_user_i
);

assign ls_axi_aw_ready_o   = axi_aw_ready_i   ;   
assign axi_aw_valid_o   = ls_axi_aw_valid_i   ;  
assign axi_aw_addr_o    = ls_axi_aw_addr_i    ;   
assign axi_aw_prot_o    = ls_axi_aw_prot_i    ; 
assign axi_aw_id_o      = ls_axi_aw_id_i      ;
assign axi_aw_user_o    = ls_axi_aw_user_i    ; 
assign axi_aw_len_o     = ls_axi_aw_len_i     ;  
assign axi_aw_size_o    = ls_axi_aw_size_i    ; 
assign axi_aw_burst_o   = ls_axi_aw_burst_i   ;  
assign axi_aw_lock_o    = ls_axi_aw_lock_i    ; 
assign axi_aw_cache_o   = ls_axi_aw_cache_i   ;  
assign axi_aw_qos_o     = ls_axi_aw_qos_i     ;
assign axi_aw_region_o  = ls_axi_aw_region_i  ;   
assign ls_axi_w_ready_o = axi_w_ready_i       ;   
assign axi_w_valid_o    = ls_axi_w_valid_i    ; 
assign axi_w_data_o     = ls_axi_w_data_i     ;  
assign axi_w_strb_o     = ls_axi_w_strb_i     ;   
assign axi_w_last_o     = ls_axi_w_last_i     ;   
assign axi_w_user_o     = ls_axi_w_user_i     ;
assign axi_b_ready_o    = ls_axi_b_ready_i    ;   
assign ls_axi_b_valid_o    = axi_b_valid_i    ;  
assign ls_axi_b_resp_o     =  axi_b_resp_i    ;  
assign ls_axi_b_id_o       =  axi_b_id_i      ;
assign ls_axi_b_user_o     =  axi_b_user_i    ;

 
assign axi_ar_valid_o   =   if_axi_ar_valid_i ? if_axi_ar_valid_i  : ls_axi_ar_valid_i  ;    
assign axi_ar_addr_o    =   if_axi_ar_valid_i ? if_axi_ar_addr_i   : ls_axi_ar_addr_i   ;    
assign axi_ar_prot_o    =   if_axi_ar_valid_i ? if_axi_ar_prot_i   : ls_axi_ar_prot_i   ;    
assign axi_ar_id_o      =   if_axi_ar_valid_i ? if_axi_ar_id_i     : ls_axi_ar_id_i     ;
assign axi_ar_user_o    =   if_axi_ar_valid_i ? if_axi_ar_user_i   : ls_axi_ar_user_i   ;    
assign axi_ar_len_o     =   if_axi_ar_valid_i ? if_axi_ar_len_i    : ls_axi_ar_len_i    ;  
assign axi_ar_size_o    =   if_axi_ar_valid_i ? if_axi_ar_size_i   : ls_axi_ar_size_i   ;      
assign axi_ar_burst_o   =   if_axi_ar_valid_i ? if_axi_ar_burst_i  : ls_axi_ar_burst_i  ;     
assign axi_ar_lock_o    =   if_axi_ar_valid_i ? if_axi_ar_lock_i   : ls_axi_ar_lock_i   ;    
assign axi_ar_cache_o   =   if_axi_ar_valid_i ? if_axi_ar_cache_i  : ls_axi_ar_cache_i  ;     
assign axi_ar_qos_o     =   if_axi_ar_valid_i ? if_axi_ar_qos_i    : ls_axi_ar_qos_i    ;
assign axi_ar_region_o  =   if_axi_ar_valid_i ? if_axi_ar_region_i : ls_axi_ar_region_i ;
assign axi_r_ready_o    =   if_axi_ar_valid_i ? if_axi_r_ready_i   : ls_axi_r_ready_i   ;     

assign if_axi_ar_ready_o   =  axi_ar_id_o ? 0 : axi_ar_ready_i;
assign ls_axi_ar_ready_o   = axi_ar_id_o ? axi_ar_ready_i : 0;

assign if_axi_r_valid_o    = axi_r_id_i ? 'b0 : axi_r_valid_i;  
assign ls_axi_r_valid_o    = axi_r_id_i ? axi_r_valid_i : 'b0;
assign if_axi_r_resp_o     = axi_r_id_i ? 'b0 : axi_r_resp_i;
assign ls_axi_r_resp_o     = axi_r_id_i ? axi_r_resp_i : 'b0;  
assign if_axi_r_data_o     = axi_r_id_i ? 'b0 : axi_r_data_i;
assign ls_axi_r_data_o     = axi_r_id_i ? axi_r_data_i : 'b0;
assign if_axi_r_last_o     = axi_r_id_i ? 'b0 : axi_r_last_i;
assign ls_axi_r_last_o     = axi_r_id_i ? axi_r_last_i : 'b0;  
assign if_axi_r_id_o       = axi_r_id_i;
assign ls_axi_r_id_o       = axi_r_id_i;
// assign if_axi_r_user_o     =   


endmodule //axi_crossbar