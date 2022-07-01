`include "defines.v"
module PC (
    input               clk,rst_n,
    input       [`XLEN-1:0]  NextPc,

    output  reg [`XLEN-1:0]  CurPc
);

always @(posedge clk) begin
    if(~rst_n) begin
        CurPc <= `XLEN'h0;
    end
    else begin
        CurPc <= NextPc;
    end
end
endmodule //PC