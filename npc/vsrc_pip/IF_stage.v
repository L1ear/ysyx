`include "defines.v"   
module IF_stage (
    input           [`XLEN-1:0]     pc_i,
    input                           is_jump_i,
    input           [`XLEN-1:0]     pc_jump_i,

    output          [`XLEN-1:0]     pc_next_o,
    output          [`inst_len-1:0] instr_o
);

// reg [31:0]  instr_mem   [0:65535];

// initial begin
//     $readmemh("./instr",instr_mem);
// end
import "DPI-C" function void vmemread(input longint raddr, input int len, output longint rdata, input longint pc);
import "DPI-C" function void vmemwrite(input longint raddr, input longint wdata, input longint pc);

assign pc_next_o = is_jump_i ? pc_jump_i : (pc_i+`XLEN'd4);
// assign instr_o = instr_mem[pc_i[17:2]];


initial
    vmemread(pc_i, 4, rdata, pc_i);

reg [`XLEN-1:0] rdata;
always @(*) begin
    vmemread(pc_i, 4, rdata, pc_i);
end
assign  instr_o = rdata[31:0];
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