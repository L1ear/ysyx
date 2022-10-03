`include "defines.v"   
module IF_stage (
    input                           clk,rst_n,
    input           [`XLEN-1:0]     pc_i,
    input                           is_jump_i,
    input           [`XLEN-1:0]     pc_jump_i,
    input           [`XLEN-1:0]     csr_mtvec,csr_mepc,
    input                           in_trap_id,out_trap_id,
    input                           stall_n,

    output          [`XLEN-1:0]     pc_next_o,
    output       [`inst_len-1:0] instr_o,
    // output                          if_instr_valid,

//sram interface
    input           [`XLEN-1:0]     sram_rdata,
    input                           sram_data_valid,
    output  reg     [`XLEN-1:0]     sram_addr,
    output  reg                     sram_ren
);


assign pc_next_o = is_jump_i ? pc_jump_i : (in_trap_id? csr_mtvec : (out_trap_id? csr_mepc : (pc_i+`XLEN'd4)));     //对于ex阶段前的trap，有jump先jump


always @(posedge clk) begin   
    if(~rst_n) begin
        sram_ren = 1'b0;
        sram_addr = 'b0;
    end
    else begin
        sram_ren = 1'b1;
        sram_addr = pc_next_o;
    end
end

// assign  if_instr_valid = sram_data_valid;
// wire    stall = ~stall_n;
always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        instr_o <= `inst_len'b0;
    end
    else if(~stall) begin
assign instr_o = sram_addr[2] ? sram_rdata[63:32] : sram_rdata[31:0];
    end
end 


endmodule //IF_stage



module PC_reg(
    input                           clk,rst_n,
    input           [`XLEN-1:0]     pc_i,
    input                           stall_n,

    output   reg    [`XLEN-1:0]     pc_new_o
);

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        pc_new_o <= `XLEN'h8000_0000 - 4;
    end
    else if(stall_n) begin
        pc_new_o <= pc_i;
    end
end

endmodule //IF_stage