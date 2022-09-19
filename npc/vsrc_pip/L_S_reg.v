`include "defines.v"
module L_S_reg (
    input                           clk,rstn,
    input           [`XLEN-1:0]     PC_ls_reg_i,rs2_ls_reg_i,
    input           [`inst_len-1:0] instr_ls_reg_i,
    input           [`XLEN-1:0]     alures_ls_reg_i,
    input                           wben_ls_reg_i,
    input                           trap_ls_reg_i,

    // input                           mem_wren_ls_reg_i,
    // input                           mem_lden_ls_reg_i,
    // input           [2      :0]     mem_op_ls_reg_i,
    // output   reg                    mem_wren_ls_reg_o,
    // output   reg                    mem_lden_ls_reg_o,
    // output   reg    [2      :0]     mem_op_ls_reg_o,
    output   reg    [`XLEN-1:0]     PC_ls_reg_o,rs2_ls_reg_o,
    output   reg    [`inst_len-1:0] instr_ls_reg_o,
    output   reg    [`XLEN-1:0]     alures_ls_reg_o,
    output   reg                    wben_ls_reg_o,
    output   reg                    trap_ls_reg_o

);
    
always @(posedge clk or negedge rstn) begin
    if(~rstn) begin
        PC_ls_reg_o <= `XLEN'b0;
    end
    else begin
        PC_ls_reg_o <= PC_ls_reg_i;
    end
end

always @(posedge clk or negedge rstn) begin
    if(~rstn) begin
        instr_ls_reg_o <= `inst_len'b0;
    end
    else begin
        instr_ls_reg_o <= instr_ls_reg_i;
    end
end

always @(posedge clk or negedge rstn) begin
    if(~rstn) begin
        rs2_ls_reg_o <= `XLEN'b0;
    end
    else begin
        rs2_ls_reg_o <= rs2_ls_reg_i;
    end
end

always @(posedge clk or negedge rstn) begin
    if(~rstn) begin
        alures_ls_reg_o <= `XLEN'b0;
    end
    else begin
        alures_ls_reg_o <= alures_ls_reg_i;
    end
end

always @(posedge clk or negedge rstn) begin
    if(~rstn) begin
        wben_ls_reg_o <= 1'b0;
    end
    else begin
        wben_ls_reg_o <= wben_ls_reg_i;
    end
end

always @(posedge clk or negedge rstn) begin
    if(~rstn) begin
        trap_ls_reg_o <= 1'b0;
    end
    else begin
        trap_ls_reg_o <= trap_ls_reg_i;
    end
end

// always @(posedge clk or negedge rstn) begin
//     if(~rstn) begin
//         mem_wren_ls_reg_o <= `XLEN'b0;
//     end
//     else begin
//         mem_wren_ls_reg_o <= mem_wren_ls_reg_i;
//     end
// end

// always @(posedge clk or negedge rstn) begin
//     if(~rstn) begin
//         mem_lden_ls_reg_o <= `XLEN'b0;
//     end
//     else begin
//         mem_lden_ls_reg_o <= mem_lden_ls_reg_i;
//     end
// end

// always @(posedge clk or negedge rstn) begin
//     if(~rstn) begin
//         mem_op_ls_reg_o <= `XLEN'b0;
//     end
//     else begin
//         mem_op_ls_reg_o <= mem_op_ls_reg_i;
//     end
// end

endmodule