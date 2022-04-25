`include "defines.v"
module Regfile (
    input                   clk,
    input                   rst_n,
	
    input                   wr_en_i,        //高写，低读
    input   [4 : 0]         reg_waddr_i,
	input   [`XLEN-1: 0]    wr_data_i,
	
    input   [4 : 0]         reg_addr1_i,
    output  reg [`XLEN-1: 0]    re_data1_o,

    input   [4 : 0]         reg_addr2_i,
    output  reg[`XLEN-1: 0]    re_data2_o
    
);

reg     [`XLEN-1:0] Regfile[31:0];

integer i;

always @(posedge clk) begin
    if (~rst_n) begin
        for (i = 0; i<32; i = i+1)  Regfile[i] = `XLEN'h0;
    end
    else begin
        if (~wr_en_i) begin                 //读寄存器2
            re_data1_o <= (reg_addr1_i == `XLEN'h0)?`XLEN'h0:Regfile[reg_addr1_i];
        end
    end
end

always @(posedge clk) begin
    if (rst_n) begin
        if (~wr_en_i) begin                 //读寄存器2
            re_data2_o <= (reg_addr2_i == `XLEN'h0)?`XLEN'h0:Regfile[reg_addr2_i];
        end
    end
end

always @(posedge clk) begin
    if (rst_n && wr_en_i) begin             //写寄存器
            Regfile[reg_waddr_i] <= wr_data_i;
    end
end

endmodule