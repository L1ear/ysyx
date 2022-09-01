`include "defines.v"
module ID_reg (
    input                           clk,rst_n,
    input           [`XLEN-1:0]     pc_id_reg_i,instr_id_reg_i,

    output  reg     [`XLEN-1:0]     pc_id_reg_o,instr_id_reg_o
);

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        pc_id_reg_o <= `XLEN'b0;
    end
    else begin
        pc_id_reg_o <= pc_id_reg_i;
    end
end

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        instr_id_reg_o <= `XLEN'b0;
    end
    else begin
        instr_id_reg_o <= instr_id_reg_i;
    end
end

endmodule