`include "defines.v"
module I_D(
    input                       clk,
    input                       rst_n,
    input   [`inst_len-1:0]     inst,
   
    output  reg [4:0]           rd,
    output  reg [`XLEN-1:0]     src1,
    output  reg [`XLEN-1:0]     src2,

    output                      wr_en_o,
    output  [4:0]               reg_addr1_o,
    intput  [`XLEN-1:0]         re_data1_i,

    output  [4:0]               reg_addr2_o,
    intput  [`XLEN-1:0]         re_data2_i
    );
    
wire    [6:0]   opcode = inst[6:0];
wire    [2:0]   fun_3 = inst[14:12];

always @(posedge clk) begin
    if (~rst_n) begin
    
    end
    else begin
        case (opcode)
            `inst_I: begin
                case (fun_3)
                    3'b000: begin               //addi
                        rd <= inst[11:7];
                        reg_addr1_o <= inst[19:15]      //????
                        src1 <= re_data1_i;
                        src2 <= {21{inst[31]},inst[30:20]};
                    end
                    3'b010: begin               //slti
                    
                    end
                    3'b011: begin               //sltiu
                    
                    end
                endcase
            end
            `inst_R: begin
            
            end
            default: begin

            end
        endcase
    end
end
    
    
    
endmodule

    
endmodule