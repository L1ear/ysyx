`include "defines.v"

module axi_ls # (
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

    input                               wr_valid_i,         //写有效
	input                               rw_valid_i,         //读有效
    output reg                          wr_ok_o,            //读完成
	output reg                          rw_ready_o,         //读完成
    output reg [RW_DATA_WIDTH-1:0]      data_read_o,        //读数据
    input  [RW_DATA_WIDTH-1:0]          rw_w_data_i,        //写数据
    input  [AXI_STRB_WIDTH-1:0]         rw_w_mask_i,        
    input  [RW_ADDR_WIDTH-1:0]          rw_addr_i,          //IF&MEM输入信号
    input  [2:0]                        wr_size_i,          //IF&MEM输入信号
    input  [2:0]                        rd_size_i,          //IF&MEM输入信号



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
    
    // ------------------State Machine------------------TODO

    // 写通道状态切换

    parameter       w_state_idle = 2'b00,
                    w_state_aw_wait = 2'b01,
                    w_state_dw_wait = 2'b11,
                    w_state_b_wait_trans_ok = 2'b10;
    reg     [1:0]   w_state,w_state_next;
    reg             aw_valid,w_valid,b_ready,trans_ok;
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
                if(axi_w_ready_i) begin
                    w_state_next = w_state_b_wait_trans_ok;
                end
                else begin
                    w_state_next = w_state_dw_wait;
                end
            end
            w_state_b_wait_trans_ok: begin
                if(wr_valid_i) begin
                    // if(trans_ok) begin
                        if((rw_addr_i != addr_reg ||rw_w_data_i != wr_data_reg) && trans_ok) begin
                            w_state_next = w_state_aw_wait;
                        end
                        else begin
                            w_state_next = w_state_b_wait_trans_ok;
                        end
                    // end
                    // else begin
                    //     w_state_next = w_state_b_wait_trans_ok;
                    // end
                end
                else begin
                    w_state_next = w_state_idle;
                end
            end
        endcase
    end
    always @(posedge clock) begin
        if((w_state == w_state_b_wait_trans_ok) && axi_b_valid_i) begin
            trans_ok <= 1'b1;
        end
        else if(w_state != w_state_b_wait_trans_ok) begin
            trans_ok <= 1'b0;
        end
    end
//输出逻辑
  always @(*) begin 
    case(w_state) 
        w_state_idle: begin
            aw_valid = 1'b0;
            w_valid = 1'b0;
            b_ready = 1'b0;
            wr_ok_o = 1'b0;
        end 
        w_state_aw_wait: begin
            aw_valid = 1'b1;
            w_valid = 1'b0;
            b_ready = 1'b0;
            wr_ok_o = 1'b0;
        end
        w_state_dw_wait: begin
            aw_valid = 1'b0;
            w_valid = 1'b1;
            b_ready = 1'b0;
            wr_ok_o = 1'b0;
        end
        w_state_b_wait_trans_ok: begin
            b_ready = axi_b_valid_i;
            aw_valid = 1'b0;
            w_valid = 1'b0;
            if(rw_addr_i != addr_reg || rw_w_data_i != wr_data_reg) begin
                wr_ok_o = 1'b0;
            end
            else begin
                wr_ok_o = trans_ok;
            end
        end
        default: begin

        end
      endcase
  end

    // 读通道状态切换
    parameter       r_state_idle = 2'b00,
                    r_state_ar_wait = 2'b01,
                    r_state_r_wait = 2'b11,
                    r_state_trans_ok = 2'b10;    
    reg     [1:0]   r_state,r_state_next;
    reg             ar_valid,r_ready,instr_valid;
    always @(posedge clock or negedge reset) begin
        if(~reset) begin
            r_state <= r_state_idle;
        end
        else begin
            r_state <= r_state_next;
        end
    end

reg     [`XLEN-1:0]     addr_reg,wr_data_reg;
    always @(posedge clock) begin
        if(r_state == r_state_ar_wait || w_state == w_state_aw_wait) begin
            addr_reg <= rw_addr_i;
            wr_data_reg <= rw_w_data_i;
        end
        else begin
            addr_reg <= addr_reg;
        end
    end
// assign addr_reg = (r_state == r_state_ar_wait) ? rw_addr_i : addr_reg;

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
              if(axi_r_valid_i)     r_state_next = r_state_trans_ok;
              else                  r_state_next = r_state_r_wait;
          end
          r_state_trans_ok: begin
              if(rw_valid_i) begin
                  if(rw_addr_i != addr_reg) begin
                      r_state_next = r_state_ar_wait;
                  end
                  else begin
                      r_state_next = r_state_trans_ok;
                  end
              end
              else begin
                  r_state_next = r_state_idle;
              end
          end
          default: begin

          end
      endcase
  end
  //此处假设在握手期间，addr等信息不会改变，后面记得注意这一条件，可能要改
always @(*) begin
    case(r_state)
        r_state_idle: begin
            ar_valid = 1'b0;
            r_ready = 1'b0;
        end
        r_state_ar_wait: begin
            ar_valid = 1'b1;
            r_ready = 1'b0;
        end
        r_state_r_wait: begin
            ar_valid = 1'b0;
            r_ready = 1'b1;
        end
        r_state_trans_ok: begin
            ar_valid = 1'b0;
            r_ready = 1'b0;
        end
        default: begin

        end
    endcase

end
//产生instr_valid信号
reg                 instr_valid_reg;
reg     [`XLEN-1:0] rd_data_reg;
always@(posedge clock) begin
    if((r_state == r_state_r_wait) && axi_r_valid_i) begin
        instr_valid_reg <= 1'b1;
        rd_data_reg <= axi_r_data_i;
    end
    else if(r_state != r_state_trans_ok) begin
        instr_valid_reg <= 1'b0;
    end
end
always@(*) begin
    case (r_state)
        r_state_idle: begin
            rw_ready_o = 1'b0;
            data_read_o = `XLEN'b0;
        end
        r_state_ar_wait: begin
            rw_ready_o = 1'b0;
            data_read_o = `XLEN'b0;
        end
        r_state_r_wait: begin
            rw_ready_o = 1'b0;
            data_read_o = `XLEN'b0;
        end
        r_state_trans_ok: begin
            if (rw_addr_i != addr_reg) begin
                rw_ready_o = 1'b0;
                data_read_o = `XLEN'b0;
            end 
            else begin
                rw_ready_o = instr_valid_reg;
                data_read_o = rd_data_reg;
            end
        end
        default: begin

        end
    endcase
end
    // assign rw_ready_o = instr_valid_reg;
    // assign data_read_o = rd_data_reg;
    
    // ------------------Read Transaction------------------

    // Read address channel signals
    assign axi_ar_valid_o   = ar_valid;
    assign axi_ar_addr_o    = rw_addr_i;
    assign axi_ar_prot_o    = `AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;  //初始化信号即可
    assign axi_ar_id_o      = axi_id;                                                                           //初始化信号即可                        
    assign axi_ar_user_o    = axi_user;                                                                         //初始化信号即可
    assign axi_ar_len_o     = axi_len;                                                                          
    assign axi_ar_size_o    = rd_size_i;
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
    wire [7:0] axi_len      =  8'b0 ;
    wire [2:0] axi_size     = AXI_SIZE[2:0];
    // 写地址通道  以下没有备注初始化信号的都可能是你需要产生和用到的
    assign axi_aw_valid_o   = aw_valid;
    assign axi_aw_addr_o    = rw_addr_i;
    assign axi_aw_prot_o    = `AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;  //初始化信号即可
    assign axi_aw_id_o      = axi_id;                                                                           //初始化信号即可
    assign axi_aw_user_o    = axi_user;                                                                         //初始化信号即可
    assign axi_aw_len_o     = axi_len;
    assign axi_aw_size_o    = wr_size_i;
    assign axi_aw_burst_o   = `AXI_BURST_TYPE_INCR;                                                             
    assign axi_aw_lock_o    = 1'b0;                                                                             //初始化信号即可
    assign axi_aw_cache_o   = `AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE;                                  //初始化信号即可
    assign axi_aw_qos_o     = 4'h0;                                                                             //初始化信号即可
    assign axi_aw_region_o  = 4'h0;                                                                             //初始化信号即可

    // 写数据通道
    assign axi_w_valid_o    = w_valid;
    wire    [5:0]      shift = {rw_addr_i[2:0],3'b0};
    assign axi_w_data_o     = rw_w_data_i << shift;
    assign axi_w_strb_o     = rw_w_mask_i << rw_addr_i[2:0];
    assign axi_w_last_o     = w_valid;
    assign axi_w_user_o     = axi_user;                                                                         //初始化信号即可

    // 写应答通道
    assign axi_b_ready_o    = b_ready;



endmodule
