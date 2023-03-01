

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
    wire [7:0] axi_len      =  'd3 ;                           //lenth为长度减1
    wire [2:0] axi_size     = AXI_SIZE[2:0];
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
