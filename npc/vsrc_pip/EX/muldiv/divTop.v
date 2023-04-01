module divTop (
    input           clk,rst_n,
    input  [63:0]   dividend,divisor,
    input           div_valid,
    input           divw,
    input           div_signed,
    input           flush,

    output          divNotOk,
    output [63:0]   quotient,
    output [63:0]   remainder
);
    
endmodule
