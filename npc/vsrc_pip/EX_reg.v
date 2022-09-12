`include "defines.v"
module EX_reg (
    input                           clk,rst_n,
    input           [`XLEN-1:0]     pc_ex_reg_i,
    input           [`inst_len-1:0]     instr_ex_reg_i,
    input           [`XLEN-1:0]     imm_ex_reg_i,
    input           [`XLEN-1:0]     rs2_ex_reg_i,rs1_ex_reg_i,
    input           [4      :0]     aluctr_ex_reg_i,
    input                           is_jalr_ex_reg_i,is_jal_ex_reg_i,is_brc_ex_reg_i,
    input                           src1sel_ex_reg_i,
    input           [1      :0]     src2sel_ex_reg_i,
    input                           wben_ex_reg_i,
    input           [4      :0]     rs1_idx_ex_reg_i,rs2_idx_ex_reg_i,
    input                           stall_n,flush,
    input                           DivEn_ex_reg_i,
    input           [2      :0]     DivSel_ex_reg_i,

    output   reg    [`XLEN-1:0]     pc_ex_reg_o,
    output   reg    [`inst_len-1:0]     instr_ex_reg_o,
    // output   reg    [`XLEN-1:0]     src1_ex_reg_o,src2_ex_reg_o,
    output   reg    [`XLEN-1:0]     rs2_ex_reg_o,rs1_ex_reg_o,imm_ex_reg_o,
    output   reg    [4      :0]     aluctr_ex_reg_o,
    output   reg                    is_jalr_ex_reg_o,is_jal_ex_reg_o,is_brc_ex_reg_o,
    output   reg                    src1sel_ex_reg_o,
    output   reg     [1      :0]    src2sel_ex_reg_o,
    output   reg                    wben_ex_reg_o,
    output   reg    [4      :0]     rs1_idx_ex_reg_o,rs2_idx_ex_reg_o,
    output                          DivEn_ex_reg_o,
    output          [2      :0]     DivSel_ex_reg_o
);

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        pc_ex_reg_o <= `XLEN'b0;
    end
    else if(~stall_n || flush) begin
        pc_ex_reg_o <= `XLEN'b0;
    end
    else if(stall_n) begin
        pc_ex_reg_o <= pc_ex_reg_i;
    end
end

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        instr_ex_reg_o <= `inst_len'b0;
    end
    else if(~stall_n || flush) begin
        instr_ex_reg_o <= `inst_len'b0;
    end
    else if(stall_n) begin
        instr_ex_reg_o <= instr_ex_reg_i;
    end
end

// always @(posedge clk or negedge rst_n) begin
//     if(~rst_n) begin
//         src1_ex_reg_o <= `XLEN'b0;
//     end
//     else begin
//         src1_ex_reg_o <= src1_ex_reg_i;
//     end
// end

// always @(posedge clk or negedge rst_n) begin
//     if(~rst_n) begin
//         src2_ex_reg_o <= `XLEN'b0;
//     end
//     else begin
//         src2_ex_reg_o <= src2_ex_reg_i;
//     end
// end

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
        rs1_ex_reg_o <= `XLEN'b0;
    end
    else begin
        rs1_ex_reg_o <= rs1_ex_reg_i;
    end
end

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        imm_ex_reg_o <= `XLEN'b0;
    end
    else begin
        imm_ex_reg_o <= imm_ex_reg_i;
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

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        is_jalr_ex_reg_o <= 1'b0;
    end
    else if(~stall_n || flush) begin
        is_jalr_ex_reg_o <= 1'b0;
    end    
    else if(stall_n) begin
        is_jalr_ex_reg_o <= is_jalr_ex_reg_i;
    end
end

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        is_jal_ex_reg_o <= 1'b0;
    end
    else if(~stall_n || flush) begin
        is_jal_ex_reg_o <= 1'b0;
    end
    else if(stall_n) begin
        is_jal_ex_reg_o <= is_jal_ex_reg_i;
    end
end

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        is_brc_ex_reg_o <= 1'b0;
    end
    else if(~stall_n || flush) begin
        is_brc_ex_reg_o <= 1'b0;
    end
    else if(stall_n) begin
        is_brc_ex_reg_o <= is_brc_ex_reg_i;
    end
end

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        src1sel_ex_reg_o <= 1'b0;
    end
    else begin
        src1sel_ex_reg_o <= src1sel_ex_reg_i;
    end
end

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        src2sel_ex_reg_o <= 2'b0;
    end
    else begin
        src2sel_ex_reg_o <= src2sel_ex_reg_i;
    end
end

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        wben_ex_reg_o <= 1'b0;
    end
    else if(~stall_n || flush) begin
        wben_ex_reg_o <= 1'b0;
    end
    else if(stall_n) begin
        wben_ex_reg_o <= wben_ex_reg_i;
    end
end

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        rs1_idx_ex_reg_o <= 5'b0;
    end
    else begin
        rs1_idx_ex_reg_o <= rs1_idx_ex_reg_i;
    end
end

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        rs2_idx_ex_reg_o <= 5'b0;
    end
    else begin
        rs2_idx_ex_reg_o <= rs2_idx_ex_reg_i;
    end
end

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        DivEn_ex_reg_o <= 1'b0;
    end
    else begin
        DivEn_ex_reg_o <= DivEn_ex_reg_i;
    end
end

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        DivSel_ex_reg_o <= 3'b0;
    end
    else begin
        DivSel_ex_reg_o <= DivSel_ex_reg_i;
    end
end

endmodule