`include "defines.v"   
module IF_stage (
    input                           clk,rst_n,
    input                           is_jump_i,
    input           [`XLEN-1:0]     pc_jump_i,
    input           [`XLEN-1:0]     csr_mtvec,csr_mepc,
    input                           in_trap_id,out_trap_id,
    input                           stall_n,

    output   reg    [`XLEN-1:0]     pc_new_o,
    output          [`inst_len-1:0] instr_o,
    output                          if_instr_valid,

//sram interface
    input           [`XLEN-1:0]     sram_rdata,
    input                           sram_data_valid,
    output          [`XLEN-1:0]     sram_addr,
    output                          sram_ren,
    output                          sram_addr_valid
);




assign  sram_ren = 1'b1;
assign  sram_addr = pc_new_o;
assign  sram_addr_valid = pc_new_o !='b0;
assign  if_instr_valid = sram_data_valid;



assign  instr_o = sram_addr[2] ? sram_rdata[63:32] : sram_rdata[31:0];


wire    [`XLEN-1:0] pc_next_o = is_jump_i ? pc_jump_i : (in_trap_id? csr_mtvec : (out_trap_id? csr_mepc : (pc_new_o+`XLEN'd4)));     //对于ex阶段前的trap，有jump先jump

always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        pc_new_o <= `XLEN'h8000_0000;
    end
    else if(stall_n) begin
        pc_new_o <= pc_next_o;
    end
end

endmodule //IF_stage


