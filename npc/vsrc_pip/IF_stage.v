`include "defines.v"   
module IF_stage (
    input           [`XLEN-1:0]     pc_i,
    input                           is_jump_i,
    input           [`XLEN-1:0]     pc_jump_i,

    output          [`XLEN-1:0]     pc_next_o,
    output          [`XLEN-1:0]     instr_o
);

reg [31:0]  instr_mem   [0:65535];

assign pc_next_o = is_jump_i ? pc_jump_i : (pc_i+`XLEN'd4);
assign instr_o = instr_mem[pc_i[17:2]];
endmodule //IF_stage

module PC_reg(
    input                           clk,rst_n,
    input           [`XLEN-1:0]     pc_i,

    output   reg    [`XLEN-1:0]     pc_new_o
);

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        pc_new_o <= `XLEN'h8000_0000;
    end
    else begin
        pc_new_o <= pc_i;
    end
end

endmodule //IF_stage