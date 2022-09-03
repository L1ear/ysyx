`include "defines.v"
module EX_reg (
    input                           clk,rst_n,
    input           [`XLEN-1:0]     pc_ex_reg_i,
    input           [`inst_len-1:0]     instr_ex_reg_i,
    input           [`XLEN-1:0]     src1_ex_reg_i,src2_ex_reg_i,
    input           [`XLEN-1:0]     rs2_ex_reg_i,
    input           [4      :0]     aluctr_ex_reg_i,

    output   reg    [`XLEN-1:0]     pc_ex_reg_o,
    output   reg    [`inst_len-1:0]     instr_ex_reg_o,
    output   reg    [`XLEN-1:0]     src1_ex_reg_o,src2_ex_reg_o,
    output   reg    [`XLEN-1:0]     rs2_ex_reg_o,
    output   reg    [4      :0]     aluctr_ex_reg_o

);

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        pc_ex_reg_o <= `XLEN'b0;
    end
    else begin
        pc_ex_reg_o <= pc_ex_reg_i;
    end
end

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        instr_ex_reg_o <= `inst_len'b0;
    end
    else begin
        instr_ex_reg_o <= instr_ex_reg_i;
    end
end

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        src1_ex_reg_o <= `XLEN'b0;
    end
    else begin
        src1_ex_reg_o <= src1_ex_reg_i;
    end
end

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        src2_ex_reg_o <= `XLEN'b0;
    end
    else begin
        src2_ex_reg_o <= src2_ex_reg_i;
    end
end

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        rs2_ex_reg_o <= `XLEN'b0;
    end
    else begin
        rs2_ex_reg_o <= rs2_ex_reg_i;
    end
end

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        aluctr_ex_reg_o <= 5'b0;
    end
    else begin
        aluctr_ex_reg_o <= aluctr_ex_reg_i;
    end
end

endmodule