module Regfile (
    input                   clk,
    input                   rst_n,

    input   [4 : 0]         reg_addr_i,
    input   [`XLEN-1: 0]    wr_data_i,

    output  [`XLEN-1: 0]    re_data_o,
    
);

endmodule