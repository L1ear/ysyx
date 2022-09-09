`include "defines.v"
module WB_reg (
    input                           clk,rst_n,
    input           [`XLEN-1:0]     pc_wb_reg_i,
    input           [`inst_len-1:0] instr_wb_reg_i,
    input           [`XLEN-1:0]     alures_wb_reg_i,
    input           [`XLEN-1:0]     lsres_wb_reg_i,
    input                           wben_wb_reg_i,

    output   reg    [`XLEN-1:0]     pc_wb_reg_o,
    output   reg    [`inst_len-1:0] instr_wb_reg_o,
    output   reg    [`XLEN-1:0]     alures_wb_reg_o,lsres_wb_reg_o,
    output   reg                    wben_wb_reg_o
);

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        pc_wb_reg_o <= `XLEN'b0;
    end
    else begin
        pc_wb_reg_o <= pc_wb_reg_i;
    end
end

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        instr_wb_reg_o <= `inst_len'b0;
    end
    else begin
        instr_wb_reg_o <= instr_wb_reg_i;
    end
end

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        alures_wb_reg_o <= `XLEN'b0;
    end
    else begin
        alures_wb_reg_o <= alures_wb_reg_i;
    end
end

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        lsres_wb_reg_o <= `XLEN'b0;
    end
    else begin
        lsres_wb_reg_o <= lsres_wb_reg_i;
    end
end

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        wben_wb_reg_o <= 1'b0;
    end
    else begin
        wben_wb_reg_o <= wben_wb_reg_i;
    end
end

endmodule //WB_reg