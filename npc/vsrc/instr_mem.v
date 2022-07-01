`include "defines.v"

module instr_mem (
    input                   rst_n,clk,
    input       [`XLEN-1:0]      instr_addr,

    output  reg [31:0]      instr_o
);

reg [31:0]  instr_mem   [0:65535];

initial begin
    $readmemh("/home/qw/ysyx-workbench/npc/vsrc/ADD",instr_mem);
end

always @(posedge clk ) begin
    if(!rst_n)
        instr_o <= `NOP;
    else
        instr_o <= instr_mem[instr_addr[17:2]];
end
    
endmodule