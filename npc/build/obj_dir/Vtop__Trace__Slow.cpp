// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+282,"clk", false,-1);
        tracep->declBit(c+283,"rst_n", false,-1);
        tracep->declQuad(c+284,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+286,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+288,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+289,"regA0", false,-1, 63,0);
        tracep->declBit(c+282,"top clk", false,-1);
        tracep->declBit(c+283,"top rst_n", false,-1);
        tracep->declQuad(c+284,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+286,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+288,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+289,"top regA0", false,-1, 63,0);
        tracep->declQuad(c+42,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+122,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+124,"top is_jump", false,-1);
        tracep->declQuad(c+44,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+125,"top pc_stall_n", false,-1);
        tracep->declBus(c+126,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+127,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+129,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+291,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+293,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+130,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+132,"top src1sel_id", false,-1);
        tracep->declBus(c+133,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+134,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+135,"top is_brc_id", false,-1);
        tracep->declBit(c+136,"top is_jal_id", false,-1);
        tracep->declBit(c+137,"top is_jalr_id", false,-1);
        tracep->declBit(c+138,"top wben_id", false,-1);
        tracep->declBus(c+139,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+140,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+125,"top id_stall_n", false,-1);
        tracep->declBit(c+141,"top DivEn_id", false,-1);
        tracep->declBus(c+142,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+143,"top in_trap_id", false,-1);
        tracep->declBit(c+144,"top out_trap_id", false,-1);
        tracep->declBit(c+145,"top trap_id", false,-1);
        tracep->declQuad(c+146,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+148,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+149,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+1,"top src1sel_ex", false,-1);
        tracep->declBus(c+2,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+3,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+5,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+7,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+151,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+153,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+9,"top is_brc_ex", false,-1);
        tracep->declBit(c+10,"top is_jal_ex", false,-1);
        tracep->declBit(c+11,"top is_jalr_ex", false,-1);
        tracep->declBit(c+154,"top wben_ex", false,-1);
        tracep->declBit(c+12,"top DivEn_ex", false,-1);
        tracep->declBus(c+13,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+14,"top trap_ex", false,-1);
        tracep->declQuad(c+15,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+155,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+156,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+17,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+18,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+125,"top ex_stall_n", false,-1);
        tracep->declQuad(c+157,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+19,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+159,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+161,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+295,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+162,"top wben_ls", false,-1);
        tracep->declQuad(c+163,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+21,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+23,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+25,"top trap_ls", false,-1);
        tracep->declQuad(c+26,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+28,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+30,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+165,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+166,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+168,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+169,"top wben_wb", false,-1);
        tracep->declQuad(c+32,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+282,"top PC_reg_u clk", false,-1);
        tracep->declBit(c+283,"top PC_reg_u rst_n", false,-1);
        tracep->declQuad(c+42,"top PC_reg_u pc_i", false,-1, 63,0);
        tracep->declBit(c+125,"top PC_reg_u stall_n", false,-1);
        tracep->declQuad(c+122,"top PC_reg_u pc_new_o", false,-1, 63,0);
        tracep->declQuad(c+122,"top IF_u pc_i", false,-1, 63,0);
        tracep->declBit(c+124,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+44,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+21,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+23,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+143,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+144,"top IF_u out_trap_id", false,-1);
        tracep->declQuad(c+42,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBus(c+126,"top IF_u instr_o", false,-1, 31,0);
        tracep->declQuad(c+170,"top IF_u rdata", false,-1, 63,0);
        tracep->declBit(c+282,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+283,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+122,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+126,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+125,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+124,"top ID_reg_u flush", false,-1);
        tracep->declBit(c+143,"top ID_reg_u in_trap_id", false,-1);
        tracep->declBit(c+144,"top ID_reg_u out_trap_id", false,-1);
        tracep->declQuad(c+127,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+129,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+172,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+174,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBit(c+282,"top ID_u clk", false,-1);
        tracep->declBit(c+283,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+127,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+26,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+165,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+129,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+166,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+168,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+169,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+293,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+291,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+130,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+132,"top ID_u src1sel", false,-1);
        tracep->declBus(c+133,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+134,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+137,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+136,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+135,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+138,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+139,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+140,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+289,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+141,"top ID_u DivEn", false,-1);
        tracep->declBus(c+142,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+145,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+143,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+144,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+175,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+130,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+293,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+291,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+127,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+129,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+139,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+140,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+175,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+132,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+133,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+134,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+137,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+136,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+135,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+138,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+141,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+142,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+145,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+143,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+144,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+176,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+177,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+178,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+179,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+175,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+130,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+282,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+26,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+165,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+139,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+293,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+140,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+291,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+168,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+166,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+169,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+289,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+56+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+129,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+148,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+125,"top hazard_detect_u stalln_pc", false,-1);
        tracep->declBit(c+125,"top hazard_detect_u stalln_id", false,-1);
        tracep->declBit(c+125,"top hazard_detect_u stalln_ex", false,-1);
        tracep->declBit(c+180,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+282,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+283,"top EX_reg_u rst_n", false,-1);
        tracep->declQuad(c+127,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+129,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+130,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+291,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+293,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+134,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+137,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+136,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+135,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+132,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+133,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+138,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+139,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+140,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+125,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+124,"top EX_reg_u flush", false,-1);
        tracep->declBit(c+141,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+142,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+145,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+146,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+148,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+3,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+5,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+7,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+153,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+11,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+10,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+9,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+1,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+2,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+154,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+17,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+18,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+12,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+13,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+14,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declBus(c+153,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+5,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+3,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+7,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+146,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+148,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+11,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+10,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+9,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+1,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+2,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+155,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+156,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+159,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+166,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+15,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+12,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+13,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+149,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+44,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+151,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+124,"top ex_stage_u is_jump_o", false,-1);
        tracep->declQuad(c+181,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+183,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+185,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+151,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+153,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+181,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+183,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+12,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+13,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+149,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+187,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+188,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+189,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+191,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+192,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+194,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+196,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+196,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+197,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+198,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+199,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+201,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+202,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+203,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+205,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+207,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+46,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+181,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+192,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+191,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+194,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+201,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+188,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+202,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+209,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+198,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+196,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+197,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+191,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+196,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+210,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+181,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+211,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+197,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+196,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+199,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+212,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+214,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+216,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+218,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+220,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+222,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+224,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+181,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+183,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+13,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+46,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+185,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+151,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+11,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+10,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+9,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+226,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+7,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+146,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+44,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+124,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+48,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+50,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+301,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+227,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+228,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+229,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+230,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+232,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+234,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+282,"top forwarding_u clk", false,-1);
        tracep->declBit(c+283,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+17,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+18,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+235,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+168,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+162,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+169,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+166,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+155,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+156,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+15,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+15,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+34,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+35,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+52,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+53,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+36,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+54,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+55,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+37,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+282,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+283,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+146,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+151,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+148,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+149,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+154,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+14,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declQuad(c+157,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+19,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+161,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+159,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+162,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+25,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBit(c+282,"top ls_u clk", false,-1);
        tracep->declBit(c+283,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+157,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+159,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+19,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+161,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+28,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+165,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+30,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+25,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+295,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+163,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+21,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+23,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+236,"top ls_u wren", false,-1);
        tracep->declBit(c+237,"top ls_u rden", false,-1);
        tracep->declBus(c+238,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+239,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+241,"top ls_u wren_last", false,-1);
        tracep->declBit(c+282,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+283,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+236,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+237,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+238,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+239,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+159,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+157,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+28,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+241,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+295,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+297,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declQuad(c+242,"top ls_u lsu_u dpi_addr", false,-1, 63,0);
        tracep->declBit(c+244,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+245,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+246,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+247,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+248,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+249,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+250,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+273,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+274,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+275,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declQuad(c+302,"top ls_u lsu_u wr_mask", false,-1, 63,0);
        tracep->declBit(c+251,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+252,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+253,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+254,"top ls_u lsu_u sd", false,-1);
        tracep->declQuad(c+276,"top ls_u lsu_u wr_data_b", false,-1, 63,0);
        tracep->declQuad(c+299,"top ls_u lsu_u wr_data_h", false,-1, 63,0);
        tracep->declQuad(c+278,"top ls_u lsu_u wr_data_w", false,-1, 63,0);
        tracep->declQuad(c+280,"top ls_u lsu_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+120,"top ls_u lsu_u wr_data_buf", false,-1, 63,0);
        tracep->declBus(c+161,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+165,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+19,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+30,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+236,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+237,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+238,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+239,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+255,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+282,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+283,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+157,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+161,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+159,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+25,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+163,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+21,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+23,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+256,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+257,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+258,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+259,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+260,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+261,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+262,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+263,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+264,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+159,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+265,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+267,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+269,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+23,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+21,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+38,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+271,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+40,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBit(c+282,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+283,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+157,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+161,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+159,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+295,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+162,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+163,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+26,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+165,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+28,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+30,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+169,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+32,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+26,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+165,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+28,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+30,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+32,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+168,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+166,"top wb_stage_u rd_data_o", false,-1, 63,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp33;
    VlWide<3>/*95:0*/ __Vtemp34;
    VlWide<3>/*95:0*/ __Vtemp35;
    VlWide<3>/*95:0*/ __Vtemp36;
    VlWide<3>/*95:0*/ __Vtemp37;
    VlWide<3>/*95:0*/ __Vtemp40;
    VlWide<3>/*95:0*/ __Vtemp41;
    VlWide<3>/*95:0*/ __Vtemp42;
    VlWide<3>/*95:0*/ __Vtemp43;
    VlWide<3>/*95:0*/ __Vtemp44;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->top__DOT__src1sel_ex));
        tracep->fullCData(oldp+2,(vlSelf->top__DOT__src2sel_ex),2);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__rs2_ex),64);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__rs1_ex),64);
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__imm_ex),64);
        tracep->fullBit(oldp+9,(vlSelf->top__DOT__is_brc_ex));
        tracep->fullBit(oldp+10,(vlSelf->top__DOT__is_jal_ex));
        tracep->fullBit(oldp+11,(vlSelf->top__DOT__is_jalr_ex));
        tracep->fullBit(oldp+12,(vlSelf->top__DOT__DivEn_ex));
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__DivSel_ex),3);
        tracep->fullBit(oldp+14,(vlSelf->top__DOT__trap_ex));
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__rs1_idx_ex),5);
        tracep->fullCData(oldp+18,(vlSelf->top__DOT__rs2_idx_ex),5);
        tracep->fullQData(oldp+19,(vlSelf->top__DOT__rs2_ls),64);
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+23,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+25,(vlSelf->top__DOT__trap_ls));
        tracep->fullQData(oldp+26,(vlSelf->top__DOT__pc_wb),64);
        tracep->fullQData(oldp+28,(vlSelf->top__DOT__alures_wb),64);
        tracep->fullQData(oldp+30,(vlSelf->top__DOT__lsres_wb),64);
        tracep->fullQData(oldp+32,(vlSelf->top__DOT__csrdata_wb),64);
        tracep->fullBit(oldp+34,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+35,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullBit(oldp+36,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                   & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                      == (IData)(vlSelf->top__DOT__rs1_idx_ex))) 
                                  & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+37,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                   & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                      == (IData)(vlSelf->top__DOT__rs2_idx_ex))) 
                                  & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullQData(oldp+38,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+40,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullQData(oldp+42,(((IData)(vlSelf->top__DOT__is_jump)
                                     ? ((IData)(vlSelf->top__DOT__is_jalr_ex)
                                         ? (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                            + vlSelf->top__DOT__imm_ex)
                                         : (vlSelf->top__DOT__pc_ex 
                                            + vlSelf->top__DOT__imm_ex))
                                     : ((IData)(vlSelf->top__DOT__in_trap_id)
                                         ? vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec
                                         : ((IData)(vlSelf->top__DOT__out_trap_id)
                                             ? vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc
                                             : (4ULL 
                                                + vlSelf->top__DOT__pc_new))))),64);
        tracep->fullQData(oldp+44,(((IData)(vlSelf->top__DOT__is_jalr_ex)
                                     ? (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                        + vlSelf->top__DOT__imm_ex)
                                     : (vlSelf->top__DOT__pc_ex 
                                        + vlSelf->top__DOT__imm_ex))),64);
        tracep->fullQData(oldp+46,(((4U & (IData)(vlSelf->top__DOT__DivSel_ex))
                                     ? ((2U & (IData)(vlSelf->top__DOT__DivSel_ex))
                                         ? ((1U & (IData)(vlSelf->top__DOT__DivSel_ex))
                                             ? VL_MODDIV_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                             : VL_MODDIVS_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2))
                                         : ((1U & (IData)(vlSelf->top__DOT__DivSel_ex))
                                             ? VL_DIV_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                             : VL_DIVS_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)))
                                     : ((2U & (IData)(vlSelf->top__DOT__DivSel_ex))
                                         ? ((1U & (IData)(vlSelf->top__DOT__DivSel_ex))
                                             ? (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                * vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                             : (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                * vlSelf->top__DOT__ex_stage_u__DOT__src2))
                                         : ((1U & (IData)(vlSelf->top__DOT__DivSel_ex))
                                             ? VL_MULS_QQQ(64,64,64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                             : (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                * vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+48,((vlSelf->top__DOT__pc_ex 
                                    + vlSelf->top__DOT__imm_ex)),64);
        tracep->fullQData(oldp+50,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                    + vlSelf->top__DOT__imm_ex)),64);
        tracep->fullBit(oldp+52,((((IData)(vlSelf->top__DOT__wben_ls) 
                                   & ((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                >> 7U)) 
                                      == (IData)(vlSelf->top__DOT__rs1_idx_ex))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__instr_ls 
                                             >> 7U))))));
        tracep->fullBit(oldp+53,((((IData)(vlSelf->top__DOT__wben_wb) 
                                   & ((0x1fU & (vlSelf->top__DOT__instr_wb 
                                                >> 7U)) 
                                      == (IData)(vlSelf->top__DOT__rs1_idx_ex))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__instr_wb 
                                             >> 7U))))));
        tracep->fullBit(oldp+54,((((IData)(vlSelf->top__DOT__wben_ls) 
                                   & ((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                >> 7U)) 
                                      == (IData)(vlSelf->top__DOT__rs2_idx_ex))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__instr_ls 
                                             >> 7U))))));
        tracep->fullBit(oldp+55,((((IData)(vlSelf->top__DOT__wben_wb) 
                                   & ((0x1fU & (vlSelf->top__DOT__instr_wb 
                                                >> 7U)) 
                                      == (IData)(vlSelf->top__DOT__rs2_idx_ex))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__instr_wb 
                                             >> 7U))))));
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+72,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+112,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+116,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullQData(oldp+120,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_buf),64);
        tracep->fullQData(oldp+122,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+124,(vlSelf->top__DOT__is_jump));
        tracep->fullBit(oldp+125,((1U & (~ (IData)(vlSelf->top__DOT__hazard_detect_u__DOT__hazard)))));
        tracep->fullIData(oldp+126,((IData)(vlSelf->top__DOT__IF_u__DOT__rdata)),32);
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__pc_id),64);
        tracep->fullIData(oldp+129,(vlSelf->top__DOT__instr_id),32);
        tracep->fullQData(oldp+130,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+132,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+133,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+134,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+135,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+136,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+137,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+138,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+139,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+140,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+141,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+142,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+143,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+144,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+145,(vlSelf->top__DOT__trap_id));
        tracep->fullQData(oldp+146,(vlSelf->top__DOT__pc_ex),64);
        tracep->fullIData(oldp+148,(vlSelf->top__DOT__instr_ex),32);
        tracep->fullQData(oldp+149,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)),64);
        tracep->fullQData(oldp+151,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+153,(vlSelf->top__DOT__aluctr_ex),5);
        tracep->fullBit(oldp+154,(vlSelf->top__DOT__wben_ex));
        tracep->fullCData(oldp+155,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+156,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullQData(oldp+157,(vlSelf->top__DOT__pc_ls),64);
        tracep->fullQData(oldp+159,(vlSelf->top__DOT__alures_ls),64);
        tracep->fullIData(oldp+161,(vlSelf->top__DOT__instr_ls),32);
        tracep->fullBit(oldp+162,(vlSelf->top__DOT__wben_ls));
        tracep->fullQData(oldp+163,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullIData(oldp+165,(vlSelf->top__DOT__instr_wb),32);
        tracep->fullQData(oldp+166,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+168,((0x1fU & (vlSelf->top__DOT__instr_wb 
                                              >> 7U))),5);
        tracep->fullBit(oldp+169,(vlSelf->top__DOT__wben_wb));
        tracep->fullQData(oldp+170,(vlSelf->top__DOT__IF_u__DOT__rdata),64);
        tracep->fullQData(oldp+172,(((((IData)(vlSelf->top__DOT__is_jump) 
                                       | (IData)(vlSelf->top__DOT__in_trap_id)) 
                                      | (IData)(vlSelf->top__DOT__out_trap_id))
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+174,(((((IData)(vlSelf->top__DOT__is_jump) 
                                       | (IData)(vlSelf->top__DOT__in_trap_id)) 
                                      | (IData)(vlSelf->top__DOT__out_trap_id))
                                      ? 0U : (IData)(vlSelf->top__DOT__IF_u__DOT__rdata))),32);
        tracep->fullCData(oldp+175,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+176,((0x1fU & (vlSelf->top__DOT__instr_id 
                                              >> 2U))),5);
        tracep->fullCData(oldp+177,((7U & (vlSelf->top__DOT__instr_id 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+178,((vlSelf->top__DOT__instr_id 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+179,((vlSelf->top__DOT__instr_id 
                                     >> 7U)),25);
        tracep->fullBit(oldp+180,(vlSelf->top__DOT__hazard_detect_u__DOT__hazard));
        tracep->fullQData(oldp+181,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+185,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp33, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp34, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp35, __Vtemp33, __Vtemp34);
        VL_EXTEND_WI(65,1, __Vtemp36, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp37, __Vtemp35, __Vtemp36);
        tracep->fullBit(oldp+187,((1U & ((8U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                          ? ((1U & 
                                              __Vtemp37[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+188,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+189,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+191,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+192,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+194,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+196,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                         >> 3U))));
        tracep->fullBit(oldp+197,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                         >> 2U))));
        tracep->fullCData(oldp+198,((7U & (IData)(vlSelf->top__DOT__aluctr_ex))),3);
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp40, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp41, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp42, __Vtemp40, __Vtemp41);
        VL_EXTEND_WI(65,1, __Vtemp43, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp44, __Vtemp42, __Vtemp43);
        tracep->fullBit(oldp+201,((1U & __Vtemp44[2U])));
        tracep->fullBit(oldp+202,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+203,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+205,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+207,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullCData(oldp+209,((0xfU & (IData)(vlSelf->top__DOT__aluctr_ex))),4);
        tracep->fullBit(oldp+210,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                         >> 4U))));
        tracep->fullCData(oldp+211,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+216,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+218,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+220,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+222,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                      ? ((1U & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                        >> 0x1fU)))
                                          ? (0x100000000ULL 
                                             | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                | (QData)((IData)(
                                                                  (~ (IData)(
                                                                             ((0xffffffffffffffffULL 
                                                                               >> 
                                                                               (0x3fU 
                                                                                & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                                              >> 0x20U)))))))
                                          : (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                             & (QData)((IData)(
                                                               ((0xffffffffffffffffULL 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                                >> 0x20U)))))
                                      : (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         | ((- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                           >> 0x3fU)))))) 
                                            & (~ (0xffffffffffffffffULL 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))))))),64);
        tracep->fullQData(oldp+224,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+226,((7U & (vlSelf->top__DOT__instr_ex 
                                           >> 0xcU))),3);
        tracep->fullBit(oldp+227,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+228,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+229,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+230,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+232,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+234,((1U & ((0x4000U & vlSelf->top__DOT__instr_ex)
                                          ? ((0x2000U 
                                              & vlSelf->top__DOT__instr_ex)
                                              ? ((0x1000U 
                                                  & vlSelf->top__DOT__instr_ex)
                                                  ? (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)
                                                  : 
                                                 (~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)))
                                              : ((0x1000U 
                                                  & vlSelf->top__DOT__instr_ex)
                                                  ? 
                                                 (~ 
                                                  ((IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres 
                                                            >> 0x3fU)) 
                                                   ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow)))
                                                  : 
                                                 ((IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres 
                                                           >> 0x3fU)) 
                                                  ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow))))
                                          : ((~ (vlSelf->top__DOT__instr_ex 
                                                 >> 0xdU)) 
                                             & ((0x1000U 
                                                 & vlSelf->top__DOT__instr_ex)
                                                 ? 
                                                (0U 
                                                 != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres)
                                                 : 
                                                (~ (IData)(
                                                           (0U 
                                                            != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres)))))))));
        tracep->fullCData(oldp+235,((0x1fU & (vlSelf->top__DOT__instr_ls 
                                              >> 7U))),5);
        tracep->fullBit(oldp+236,((8U == (0x1fU & (vlSelf->top__DOT__instr_ls 
                                                   >> 2U)))));
        tracep->fullBit(oldp+237,((3U == (0x7fU & vlSelf->top__DOT__instr_ls))));
        tracep->fullCData(oldp+238,((7U & (vlSelf->top__DOT__instr_ls 
                                           >> 0xcU))),3);
        tracep->fullQData(oldp+239,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
        tracep->fullBit(oldp+241,((8U == (0x1fU & (vlSelf->top__DOT__instr_wb 
                                                   >> 2U)))));
        tracep->fullQData(oldp+242,((0xfffffffffffffff8ULL 
                                     & vlSelf->top__DOT__alures_ls)),64);
        tracep->fullBit(oldp+244,((IData)((3U == (0x707fU 
                                                  & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+245,((IData)((0x4003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+246,((IData)((0x1003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+247,((IData)((0x5003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+248,((IData)((0x2003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+249,((IData)((0x6003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+250,((IData)((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+251,((IData)((0x20U == 
                                           (0x707cU 
                                            & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+252,((IData)((0x1020U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+253,((IData)((0x2020U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+254,((IData)((0x3020U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+255,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__instr_wb 
                                            >> 2U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                >> 0x14U)) 
                                      == (0x1fU & (vlSelf->top__DOT__instr_wb 
                                                   >> 7U))))));
        tracep->fullBit(oldp+256,((1U == (7U & (vlSelf->top__DOT__instr_ls 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+257,((2U == (7U & (vlSelf->top__DOT__instr_ls 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+258,((3U == (7U & (vlSelf->top__DOT__instr_ls 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+259,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__instr_ls 
                                                >> 2U)))));
        tracep->fullBit(oldp+260,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+261,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+262,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+263,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+264,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+265,((vlSelf->top__DOT__alures_ls 
                                     | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+267,(((~ vlSelf->top__DOT__alures_ls) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+269,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+271,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__instr_ls 
                                                   >> 2U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullCData(oldp+273,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+274,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+275,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullQData(oldp+276,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_b),64);
        tracep->fullQData(oldp+278,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_w),64);
        tracep->fullQData(oldp+280,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data),64);
        tracep->fullBit(oldp+282,(vlSelf->clk));
        tracep->fullBit(oldp+283,(vlSelf->rst_n));
        tracep->fullQData(oldp+284,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+286,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+288,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+289,(vlSelf->regA0),64);
        tracep->fullQData(oldp+291,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+293,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        tracep->fullQData(oldp+295,(((((((((- (QData)((IData)(
                                                              (3U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__instr_ls))))) 
                                           & (((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b) 
                                                                      >> 7U))))) 
                                               << 8U) 
                                              | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b)))) 
                                          | ((- (QData)((IData)(
                                                                (0x4003U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top__DOT__instr_ls))))) 
                                             & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b)))) 
                                         | ((- (QData)((IData)(
                                                               (0x1003U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__instr_ls))))) 
                                            & (((- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h) 
                                                                       >> 0xfU))))) 
                                                << 0x10U) 
                                               | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h))))) 
                                        | ((- (QData)((IData)(
                                                              (0x5003U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__instr_ls))))) 
                                           & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h)))) 
                                       | ((- (QData)((IData)(
                                                             (0x2003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__instr_ls))))) 
                                          & (((QData)((IData)(
                                                              (- (IData)(
                                                                         (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w 
                                                                          >> 0x1fU))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w))))) 
                                      | ((- (QData)((IData)(
                                                            (0x6003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__instr_ls))))) 
                                         & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w)))) 
                                     | ((- (QData)((IData)(
                                                           (0x3003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__instr_ls))))) 
                                        & vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))),64);
        tracep->fullQData(oldp+297,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base),64);
        tracep->fullQData(oldp+299,(((1U & (IData)(
                                                   (vlSelf->top__DOT__alures_ls 
                                                    >> 2U)))
                                      ? ((1U & (IData)(
                                                       (vlSelf->top__DOT__alures_ls 
                                                        >> 1U)))
                                          ? (((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->top__DOT__ls_u__DOT__wr_data)))) 
                                              << 0x30U) 
                                             | (0xffffffffffffULL 
                                                & vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))
                                          : (((QData)((IData)(
                                                              (((IData)(
                                                                        (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                                                         >> 0x30U)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__ls_u__DOT__wr_data))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))))
                                      : ((1U & (IData)(
                                                       (vlSelf->top__DOT__alures_ls 
                                                        >> 1U)))
                                          ? (((QData)((IData)(
                                                              (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                                               >> 0x20U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->top__DOT__ls_u__DOT__wr_data) 
                                                                 << 0x10U) 
                                                                | (0xffffU 
                                                                   & (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))))))
                                          : ((0xffffffffffff0000ULL 
                                              & vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base) 
                                             | (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->top__DOT__ls_u__DOT__wr_data)))))))),64);
        tracep->fullBit(oldp+301,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullQData(oldp+302,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),64);
    }
}
