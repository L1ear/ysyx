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
    input                           in_intr_ls,

//sram interface
    input           [`XLEN-1:0]     sram_rdata,
    input                           sram_data_valid,
    input                           cacheAddrOk_i,
    input                           cacheDataOk_i,  //这玩意代表notok
    output          [`XLEN-1:0]     sram_addr,
    output                          sram_ren,
    output                          sram_addr_valid
);




assign  sram_ren = 1'b1;
assign  sram_addr = pc_next_o;
assign  sram_addr_valid = pc_new_o !='b0;
// assign  if_instr_valid = sram_data_valid;
assign  if_instr_valid = cacheAddrOk_i && ~cacheDataOk_i;



assign  instr_o = pc_new_o[2] ? sram_rdata[63:32] : sram_rdata[31:0];

// reg [`XLEN-1:0] instr_reg;
// always @(posedge clk or negedge rst_n) begin
//     if(~rst_n) begin
//         instr_reg <= 'b0;
//     end
//     else if(stall_n) begin
//         instr_reg <= sram_rdata;
//     end
// end


wire    [`XLEN-1:0] pc_next_o;// =  in_intr_ls ? csr_mtvec : is_jump_i ? pc_jump_i : ((in_trap_id)? csr_mtvec : (out_trap_id? csr_mepc : (pc_new_o+`XLEN'd4)));     //对于ex阶段前的trap，有jump先jump

always @( *) begin
    case({in_intr_ls, is_jump_i, in_trap_id, out_trap_id})
        4'b1???:
            pc_next_o = csr_mtvec;
        4'b01??:
            pc_next_o = pc_jump_i;
        4'b0010:
            pc_next_o = csr_mtvec;
        4'b0001:
            pc_next_o = csr_mepc;
        default :
            pc_next_o = pc_new_o+`XLEN'd4;
    endcase
end


always @(posedge clk or negedge rst_n) begin
    if(~rst_n) begin
        pc_new_o <= `XLEN'h8000_0000-4;
    end
    else if(stall_n) begin
        pc_new_o <= pc_next_o;
    end
end

endmodule //IF_stage


