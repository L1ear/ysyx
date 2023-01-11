`include "defines.v"

module axi_if # (

 
    
    parameter                      IDLE        = 6'b000001,
                                pre_0       = 6'b000010,
                                pre_1       = 6'b000100,
                                iter        = 6'b001000,
                                post        = 6'b010000,
                                out         = 6'b100000;

    // 读通道状态切换
  



    always @(posedge clk or negedge rst_n) begin
      if(~rst_n) begin
          curr_state <= IDLE;
      end
      else begin
          curr_state <= nx_state;
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
    case (curr_state)
        IDLE: begin
            if(start_valid_i) begin
                nx_state = pre_0;
                // finished_o <= 1'b0;
            end
            else begin
                nx_state = IDLE;
                // finished_o <= 1'b1;
            end
        end
        pre_0: begin
            if(ab)
                nx_state = pre_1;
                // finished_o <= 1'b0;
                else 
                    nx_state = pre_1;
        end
        pre_1: begin
            // finished_o <= 1'b0;
            if(XsmallD || Deq0 || Xeq0) begin
                nx_state = out;
            end
            else begin
                nx_state = iter;
            end
        end
        iter: begin
            // finished_o <= 1'b0;
            if(~(|iter_cnt)) begin
                nx_state = post;
            end
            else begin
                nx_state = iter;
            end
        end
        post: begin
            // finished_o <= 1'b0;
            if(a)
            nx_state = out;       //?????]?????????Y???��P2S?��?
            else nx_state = out;
        end
        out: begin
            // finished_o <= 1'b0;
            if (~out_full) begin    
                nx_state = IDLE;
            end
            else begin
                nx_state = out;
            end
        end
        default: begin
            // finished_o <= 1'b0;
          
        end
    endcase
end
endmodule
