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
        tracep->declBit(c+310,"clk", false,-1);
        tracep->declBit(c+311,"rst_n", false,-1);
        tracep->declQuad(c+312,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+314,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+316,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+317,"regA0", false,-1, 63,0);
        tracep->declBit(c+310,"top clk", false,-1);
        tracep->declBit(c+311,"top rst_n", false,-1);
        tracep->declQuad(c+312,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+314,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+316,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+317,"top regA0", false,-1, 63,0);
        tracep->declQuad(c+319,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+20,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+22,"top is_jump", false,-1);
        tracep->declQuad(c+23,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+25,"top pc_stall_n", false,-1);
        tracep->declBus(c+26,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+27,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+29,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+229,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+231,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+30,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+32,"top src1sel_id", false,-1);
        tracep->declBus(c+33,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+34,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+35,"top is_brc_id", false,-1);
        tracep->declBit(c+36,"top is_jal_id", false,-1);
        tracep->declBit(c+37,"top is_jalr_id", false,-1);
        tracep->declBit(c+38,"top wben_id", false,-1);
        tracep->declBus(c+39,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+40,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+25,"top id_stall_n", false,-1);
        tracep->declBit(c+41,"top DivEn_id", false,-1);
        tracep->declBus(c+42,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+43,"top in_trap_id", false,-1);
        tracep->declBit(c+44,"top out_trap_id", false,-1);
        tracep->declBit(c+45,"top trap_id", false,-1);
        tracep->declQuad(c+46,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+48,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+49,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+51,"top src1sel_ex", false,-1);
        tracep->declBus(c+52,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+53,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+55,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+57,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+59,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+61,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+62,"top is_brc_ex", false,-1);
        tracep->declBit(c+63,"top is_jal_ex", false,-1);
        tracep->declBit(c+64,"top is_jalr_ex", false,-1);
        tracep->declBit(c+65,"top wben_ex", false,-1);
        tracep->declBit(c+66,"top DivEn_ex", false,-1);
        tracep->declBus(c+67,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+68,"top trap_ex", false,-1);
        tracep->declQuad(c+1,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+69,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+70,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+71,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+72,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+73,"top flush_ex", false,-1);
        tracep->declQuad(c+74,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+76,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+78,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+80,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+321,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+81,"top wben_ls", false,-1);
        tracep->declQuad(c+82,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+3,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+5,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+7,"top trap_ls", false,-1);
        tracep->declQuad(c+8,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+10,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+84,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+86,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+87,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+89,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+90,"top wben_wb", false,-1);
        tracep->declQuad(c+12,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+310,"top PC_reg_u clk", false,-1);
        tracep->declBit(c+311,"top PC_reg_u rst_n", false,-1);
        tracep->declQuad(c+319,"top PC_reg_u pc_i", false,-1, 63,0);
        tracep->declBit(c+25,"top PC_reg_u stall_n", false,-1);
        tracep->declQuad(c+20,"top PC_reg_u pc_new_o", false,-1, 63,0);
        tracep->declQuad(c+20,"top IF_u pc_i", false,-1, 63,0);
        tracep->declBit(c+22,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+23,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+3,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+5,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+43,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+44,"top IF_u out_trap_id", false,-1);
        tracep->declQuad(c+319,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBus(c+26,"top IF_u instr_o", false,-1, 31,0);
        tracep->declQuad(c+91,"top IF_u rdata", false,-1, 63,0);
        tracep->declBit(c+310,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+311,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+20,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+26,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+25,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+22,"top ID_reg_u flush", false,-1);
        tracep->declBit(c+43,"top ID_reg_u in_trap_id", false,-1);
        tracep->declBit(c+44,"top ID_reg_u out_trap_id", false,-1);
        tracep->declQuad(c+27,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+29,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+93,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+95,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+327,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+328,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+310,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+311,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+25,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+96,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+99,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+310,"top ID_u clk", false,-1);
        tracep->declBit(c+311,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+27,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+8,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+86,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+29,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+87,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+89,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+90,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+231,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+229,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+30,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+32,"top ID_u src1sel", false,-1);
        tracep->declBus(c+33,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+34,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+37,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+36,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+35,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+38,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+39,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+40,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+317,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+41,"top ID_u DivEn", false,-1);
        tracep->declBus(c+42,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+45,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+43,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+44,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+102,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+30,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+231,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+229,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+27,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+29,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+39,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+40,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+102,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+32,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+33,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+34,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+37,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+36,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+35,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+38,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+41,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+42,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+45,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+43,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+44,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+103,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+104,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+105,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+106,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+102,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+30,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+310,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+8,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+86,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+39,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+231,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+40,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+229,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+89,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+87,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+90,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+317,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+246+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+29,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+48,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+25,"top hazard_detect_u stalln_pc", false,-1);
        tracep->declBit(c+25,"top hazard_detect_u stalln_id", false,-1);
        tracep->declBit(c+73,"top hazard_detect_u flush_ex", false,-1);
        tracep->declBit(c+73,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+310,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+311,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+329,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+107,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+27,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+29,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+30,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+229,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+231,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+34,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+37,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+36,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+35,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+32,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+33,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+38,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+39,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+40,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+41,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+42,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+45,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+46,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+48,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+53,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+55,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+57,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+61,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+64,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+63,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+62,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+51,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+52,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+65,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+71,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+72,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+66,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+67,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+68,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+108,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+110,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+111,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+112,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+113,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+114,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+115,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+330,"top EX_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+328,"top EX_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+310,"top EX_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+311,"top EX_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+329,"top EX_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+233,"top EX_reg_u id_reg i_din", false,-1, 314,0);
        tracep->declArray(c+116,"top EX_reg_u id_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+61,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+55,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+53,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+57,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+46,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+48,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+64,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+63,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+62,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+51,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+52,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+69,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+70,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+78,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+87,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+1,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+66,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+67,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+49,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+23,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+59,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+22,"top ex_stage_u is_jump_o", false,-1);
        tracep->declQuad(c+126,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+128,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+130,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+59,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+61,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+126,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+128,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+66,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+67,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+49,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+132,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+133,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+134,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+136,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+137,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+139,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+141,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+141,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+142,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+143,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+144,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+146,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+147,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+148,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+150,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+152,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+154,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+126,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+137,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+136,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+139,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+146,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+133,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+147,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+156,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+143,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+141,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+142,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+136,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+141,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+157,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+126,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+158,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+142,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+141,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+144,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+159,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+161,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+163,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+165,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+167,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+169,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+171,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+126,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+128,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+67,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+154,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+130,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+59,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+64,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+63,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+62,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+173,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+57,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+46,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+23,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+22,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+174,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+176,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+331,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+178,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+179,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+180,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+181,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+183,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+185,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+310,"top forwarding_u clk", false,-1);
        tracep->declBit(c+311,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+71,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+72,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+186,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+89,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+81,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+90,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+87,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+69,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+70,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+1,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+1,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+14,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+15,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+187,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+188,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+323,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+189,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+190,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+324,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+310,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+311,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+46,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+59,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+48,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+49,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+65,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+68,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declQuad(c+74,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+76,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+80,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+78,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+81,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+7,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBit(c+310,"top ls_u clk", false,-1);
        tracep->declBit(c+311,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+74,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+78,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+76,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+80,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+10,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+86,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+84,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+7,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+321,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+82,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+3,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+5,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+191,"top ls_u wren", false,-1);
        tracep->declBit(c+192,"top ls_u rden", false,-1);
        tracep->declBus(c+193,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+194,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+196,"top ls_u wren_last", false,-1);
        tracep->declBit(c+310,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+311,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+191,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+192,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+193,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+194,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+78,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+74,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+10,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+196,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+321,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+325,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declQuad(c+197,"top ls_u lsu_u dpi_addr", false,-1, 63,0);
        tracep->declBit(c+199,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+200,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+201,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+202,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+203,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+204,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+205,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+243,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+244,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+245,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+206,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+207,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+208,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+209,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+210,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+80,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+86,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+76,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+84,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+191,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+192,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+193,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+194,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+211,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+310,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+311,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+74,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+80,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+78,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+7,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+82,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+3,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+5,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+212,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+213,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+214,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+215,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+216,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+217,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+218,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+219,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+220,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+78,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+221,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+223,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+225,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+5,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+3,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+227,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+18,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBit(c+310,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+311,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+74,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+80,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+78,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+321,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+81,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+82,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+8,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+86,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+10,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+84,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+90,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+12,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+8,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+86,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+10,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+84,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+12,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+89,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+87,"top wb_stage_u rd_data_o", false,-1, 63,0);
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
    VlWide<3>/*95:0*/ __Vtemp39;
    VlWide<3>/*95:0*/ __Vtemp41;
    VlWide<3>/*95:0*/ __Vtemp42;
    VlWide<3>/*95:0*/ __Vtemp43;
    VlWide<3>/*95:0*/ __Vtemp44;
    VlWide<3>/*95:0*/ __Vtemp45;
    VlWide<3>/*95:0*/ __Vtemp48;
    VlWide<3>/*95:0*/ __Vtemp49;
    VlWide<3>/*95:0*/ __Vtemp50;
    VlWide<3>/*95:0*/ __Vtemp51;
    VlWide<3>/*95:0*/ __Vtemp52;
    VlWide<10>/*319:0*/ __Vtemp58;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+7,(vlSelf->top__DOT__trap_ls));
        tracep->fullQData(oldp+8,(vlSelf->top__DOT__pc_wb),64);
        tracep->fullQData(oldp+10,(vlSelf->top__DOT__alures_wb),64);
        tracep->fullQData(oldp+12,(vlSelf->top__DOT__csrdata_wb),64);
        tracep->fullBit(oldp+14,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+15,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullQData(oldp+16,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+18,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullQData(oldp+20,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+22,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+23,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                     ? (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                        + (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                            << 0x25U) 
                                           | (((QData)((IData)(
                                                               vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                                 >> 0x1bU))))
                                     : ((((QData)((IData)(
                                                          vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[9U])) 
                                          << 0x25U) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[8U])) 
                                             << 5U) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])) 
                                               >> 0x1bU))) 
                                        + (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                            << 0x25U) 
                                           | (((QData)((IData)(
                                                               vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                                 >> 0x1bU)))))),64);
        tracep->fullBit(oldp+25,((1U & (~ (IData)(vlSelf->top__DOT__hazard_detect_u__DOT__hazard)))));
        tracep->fullIData(oldp+26,((IData)(vlSelf->top__DOT__IF_u__DOT__rdata)),32);
        tracep->fullQData(oldp+27,((((QData)((IData)(
                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+29,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+30,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+32,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+33,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+34,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+35,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+36,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+37,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+38,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+39,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+40,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+41,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+42,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+43,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+44,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__trap_id));
        tracep->fullQData(oldp+46,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[9U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[8U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullIData(oldp+48,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                     << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                               >> 0x1bU))),32);
        tracep->fullQData(oldp+49,(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                     ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                     : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)),64);
        tracep->fullBit(oldp+51,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 0x12U))));
        tracep->fullCData(oldp+52,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                          >> 0x10U))),2);
        tracep->fullQData(oldp+53,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[6U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[5U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[4U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullQData(oldp+55,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[4U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[3U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullQData(oldp+57,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+61,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                             >> 0x16U))),5);
        tracep->fullBit(oldp+62,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 0x13U))));
        tracep->fullBit(oldp+63,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 0x14U))));
        tracep->fullBit(oldp+64,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 0x15U))));
        tracep->fullBit(oldp+65,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 0xfU))));
        tracep->fullBit(oldp+66,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 4U))));
        tracep->fullCData(oldp+67,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                          >> 1U))),3);
        tracep->fullBit(oldp+68,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])));
        tracep->fullCData(oldp+69,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+70,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+71,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                             >> 0xaU))),5);
        tracep->fullCData(oldp+72,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                             >> 5U))),5);
        tracep->fullBit(oldp+73,(vlSelf->top__DOT__hazard_detect_u__DOT__hazard));
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__pc_ls),64);
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__rs2_ls),64);
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__alures_ls),64);
        tracep->fullIData(oldp+80,(vlSelf->top__DOT__instr_ls),32);
        tracep->fullBit(oldp+81,(vlSelf->top__DOT__wben_ls));
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__lsres_wb),64);
        tracep->fullIData(oldp+86,(vlSelf->top__DOT__instr_wb),32);
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+89,((0x1fU & (vlSelf->top__DOT__instr_wb 
                                             >> 7U))),5);
        tracep->fullBit(oldp+90,(vlSelf->top__DOT__wben_wb));
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__IF_u__DOT__rdata),64);
        tracep->fullQData(oldp+93,(((((IData)(vlSelf->top__DOT__is_jump) 
                                      | (IData)(vlSelf->top__DOT__in_trap_id)) 
                                     | (IData)(vlSelf->top__DOT__out_trap_id))
                                     ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+95,(((((IData)(vlSelf->top__DOT__is_jump) 
                                      | (IData)(vlSelf->top__DOT__in_trap_id)) 
                                     | (IData)(vlSelf->top__DOT__out_trap_id))
                                     ? 0U : (IData)(vlSelf->top__DOT__IF_u__DOT__rdata))),32);
        __Vtemp39[0U] = ((((IData)(vlSelf->top__DOT__is_jump) 
                           | (IData)(vlSelf->top__DOT__in_trap_id)) 
                          | (IData)(vlSelf->top__DOT__out_trap_id))
                          ? 0U : (IData)(vlSelf->top__DOT__IF_u__DOT__rdata));
        __Vtemp39[1U] = (IData)(((((IData)(vlSelf->top__DOT__is_jump) 
                                   | (IData)(vlSelf->top__DOT__in_trap_id)) 
                                  | (IData)(vlSelf->top__DOT__out_trap_id))
                                  ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp39[2U] = (IData)((((((IData)(vlSelf->top__DOT__is_jump) 
                                    | (IData)(vlSelf->top__DOT__in_trap_id)) 
                                   | (IData)(vlSelf->top__DOT__out_trap_id))
                                   ? 0ULL : vlSelf->top__DOT__pc_new) 
                                 >> 0x20U));
        tracep->fullWData(oldp+96,(__Vtemp39),96);
        tracep->fullWData(oldp+99,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+102,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+103,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+104,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+105,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+106,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullBit(oldp+107,(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush));
        tracep->fullQData(oldp+108,(((IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+110,(((IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+111,(((~ (IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+112,(((~ (IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+113,(((~ (IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+114,(((~ (IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+115,(((~ (IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+116,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout),315);
        tracep->fullQData(oldp+126,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+128,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+130,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp41, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp42, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp43, __Vtemp41, __Vtemp42);
        VL_EXTEND_WI(65,1, __Vtemp44, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp45, __Vtemp43, __Vtemp44);
        tracep->fullBit(oldp+132,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp45[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+133,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+134,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+136,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+141,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+142,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+143,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+144,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp48, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp49, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp50, __Vtemp48, __Vtemp49);
        VL_EXTEND_WI(65,1, __Vtemp51, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp52, __Vtemp50, __Vtemp51);
        tracep->fullBit(oldp+146,((1U & __Vtemp52[2U])));
        tracep->fullBit(oldp+147,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+148,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+150,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+152,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+154,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                      ? ((4U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                          ? ((2U & 
                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                              ? VL_MODDIV_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                              : VL_MODDIVS_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2))
                                          : ((2U & 
                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                              ? VL_DIV_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                              : VL_DIVS_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)))
                                      : ((4U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                          ? ((2U & 
                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                              ? (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                 * vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                              : (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                 * vlSelf->top__DOT__ex_stage_u__DOT__src2))
                                          : ((2U & 
                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                              ? VL_MULS_QQQ(64,64,64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                              : (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                 * vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullCData(oldp+156,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+157,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+158,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+159,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+161,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+163,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+165,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+167,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+169,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
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
        tracep->fullQData(oldp+171,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+173,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+174,(((((QData)((IData)(
                                                       vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[9U])) 
                                       << 0x25U) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[8U])) 
                                        << 5U) | ((QData)((IData)(
                                                                  vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])) 
                                                  >> 0x1bU))) 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullQData(oldp+176,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+178,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+179,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+180,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+181,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+183,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+185,((1U & ((0x200U & 
                                          vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])
                                          ? ((0x100U 
                                              & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])
                                              ? ((0x80U 
                                                  & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])
                                                  ? (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)
                                                  : 
                                                 (~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)))
                                              : ((0x80U 
                                                  & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])
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
                                          : ((~ (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                                 >> 8U)) 
                                             & ((0x80U 
                                                 & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])
                                                 ? 
                                                (0U 
                                                 != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres)
                                                 : 
                                                (~ (IData)(
                                                           (0U 
                                                            != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres)))))))));
        tracep->fullCData(oldp+186,((0x1fU & (vlSelf->top__DOT__instr_ls 
                                              >> 7U))),5);
        tracep->fullBit(oldp+187,((((IData)(vlSelf->top__DOT__wben_ls) 
                                    & ((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                 >> 7U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__instr_ls 
                                                >> 7U))))));
        tracep->fullBit(oldp+188,((((IData)(vlSelf->top__DOT__wben_wb) 
                                    & ((0x1fU & (vlSelf->top__DOT__instr_wb 
                                                 >> 7U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__instr_wb 
                                                >> 7U))))));
        tracep->fullBit(oldp+189,((((IData)(vlSelf->top__DOT__wben_ls) 
                                    & ((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                 >> 7U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__instr_ls 
                                                >> 7U))))));
        tracep->fullBit(oldp+190,((((IData)(vlSelf->top__DOT__wben_wb) 
                                    & ((0x1fU & (vlSelf->top__DOT__instr_wb 
                                                 >> 7U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__instr_wb 
                                                >> 7U))))));
        tracep->fullBit(oldp+191,((8U == (0x1fU & (vlSelf->top__DOT__instr_ls 
                                                   >> 2U)))));
        tracep->fullBit(oldp+192,((3U == (0x7fU & vlSelf->top__DOT__instr_ls))));
        tracep->fullCData(oldp+193,((7U & (vlSelf->top__DOT__instr_ls 
                                           >> 0xcU))),3);
        tracep->fullQData(oldp+194,((((0U == (0x1fU 
                                              & (vlSelf->top__DOT__instr_wb 
                                                 >> 2U))) 
                                      & ((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                   >> 0x14U)) 
                                         == (0x1fU 
                                             & (vlSelf->top__DOT__instr_wb 
                                                >> 7U))))
                                      ? vlSelf->top__DOT__lsres_wb
                                      : vlSelf->top__DOT__rs2_ls)),64);
        tracep->fullBit(oldp+196,((8U == (0x1fU & (vlSelf->top__DOT__instr_wb 
                                                   >> 2U)))));
        tracep->fullQData(oldp+197,((0xfffffffffffffff8ULL 
                                     & vlSelf->top__DOT__alures_ls)),64);
        tracep->fullBit(oldp+199,((IData)((3U == (0x707fU 
                                                  & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+200,((IData)((0x4003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+201,((IData)((0x1003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+202,((IData)((0x5003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+203,((IData)((0x2003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+204,((IData)((0x6003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+205,((IData)((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullCData(oldp+206,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullBit(oldp+207,((IData)((0x20U == 
                                           (0x707cU 
                                            & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+208,((IData)((0x1020U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+209,((IData)((0x2020U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+210,((IData)((0x3020U 
                                           == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
        tracep->fullBit(oldp+211,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__instr_wb 
                                            >> 2U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                >> 0x14U)) 
                                      == (0x1fU & (vlSelf->top__DOT__instr_wb 
                                                   >> 7U))))));
        tracep->fullBit(oldp+212,((1U == (7U & (vlSelf->top__DOT__instr_ls 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+213,((2U == (7U & (vlSelf->top__DOT__instr_ls 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+214,((3U == (7U & (vlSelf->top__DOT__instr_ls 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+215,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__instr_ls 
                                                >> 2U)))));
        tracep->fullBit(oldp+216,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+217,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+218,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+219,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+220,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+221,((vlSelf->top__DOT__alures_ls 
                                     | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+223,(((~ vlSelf->top__DOT__alures_ls) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+225,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+227,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__instr_ls 
                                                   >> 2U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullQData(oldp+229,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+231,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp58[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                          << 0x1bU) | (((IData)(vlSelf->top__DOT__aluctr_id) 
                                        << 0x16U) | 
                                       ((((~ (IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)) 
                                          & (IData)(vlSelf->top__DOT__is_jalr_id)) 
                                         << 0x15U) 
                                        | ((((~ (IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)) 
                                             & (IData)(vlSelf->top__DOT__is_jal_id)) 
                                            << 0x14U) 
                                           | ((((~ (IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)) 
                                                & (IData)(vlSelf->top__DOT__is_brc_id)) 
                                               << 0x13U) 
                                              | (((IData)(vlSelf->top__DOT__src1sel_id) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSelf->top__DOT__src2sel_id) 
                                                     << 0x10U) 
                                                    | ((((~ (IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)) 
                                                         & (IData)(vlSelf->top__DOT__wben_id)) 
                                                        << 0xfU) 
                                                       | (((IData)(vlSelf->top__DOT__rs1_idx_id) 
                                                           << 0xaU) 
                                                          | (((IData)(vlSelf->top__DOT__rs2_idx_id) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->top__DOT__DivEn_id) 
                                                                 << 4U) 
                                                                | (((IData)(vlSelf->top__DOT__DivSel_id) 
                                                                    << 1U) 
                                                                   | ((~ (IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)) 
                                                                      & (IData)(vlSelf->top__DOT__trap_id))))))))))))));
        __Vtemp58[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                          >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp58[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                   >> 0x20U)) >> 5U) 
                         | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])) 
                            << 0x1bU));
        __Vtemp58[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                    ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                   [vlSelf->top__DOT__rs1_idx_id])) 
                          >> 5U) | ((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                               ? 0ULL
                                               : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                              [vlSelf->top__DOT__rs1_idx_id]) 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp58[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id]) 
                                   >> 0x20U)) >> 5U) 
                         | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])) 
                            << 0x1bU));
        __Vtemp58[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                    ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                   [vlSelf->top__DOT__rs2_idx_id])) 
                          >> 5U) | ((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                               ? 0ULL
                                               : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                              [vlSelf->top__DOT__rs2_idx_id]) 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp58[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id]) 
                                   >> 0x20U)) >> 5U) 
                         | (((IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)
                              ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                            << 0x1bU));
        __Vtemp58[7U] = ((((IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)
                            ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                          >> 5U) | ((IData)(((IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)
                                              ? 0ULL
                                              : (((QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                    << 0x1bU));
        __Vtemp58[8U] = (((IData)(((IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)
                                    ? 0ULL : (((QData)((IData)(
                                                               vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                          >> 5U) | ((IData)((((IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp58[9U] = ((IData)((((IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)
                                    ? 0ULL : (((QData)((IData)(
                                                               vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                  >> 0x20U)) >> 5U);
        tracep->fullWData(oldp+233,(__Vtemp58),315);
        tracep->fullCData(oldp+243,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+244,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+245,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullQData(oldp+246,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+248,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+250,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+252,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+254,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+256,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+258,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+260,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+262,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+264,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+266,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+268,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+270,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+272,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+274,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+276,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+278,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+280,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+282,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+284,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+286,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+288,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+290,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+292,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+294,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+296,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+298,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+300,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+302,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+304,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+306,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+308,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+310,(vlSelf->clk));
        tracep->fullBit(oldp+311,(vlSelf->rst_n));
        tracep->fullQData(oldp+312,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+314,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+316,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+317,(vlSelf->regA0),64);
        tracep->fullQData(oldp+319,(((IData)(vlSelf->top__DOT__is_jump)
                                      ? ((0x200000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                          ? (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                             + (((QData)((IData)(
                                                                 vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x25U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                                      >> 0x1bU))))
                                          : ((((QData)((IData)(
                                                               vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[9U])) 
                                               << 0x25U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[8U])) 
                                                  << 5U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])) 
                                                    >> 0x1bU))) 
                                             + (((QData)((IData)(
                                                                 vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x25U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                                      >> 0x1bU)))))
                                      : ((IData)(vlSelf->top__DOT__in_trap_id)
                                          ? vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec
                                          : ((IData)(vlSelf->top__DOT__out_trap_id)
                                              ? vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc
                                              : (4ULL 
                                                 + vlSelf->top__DOT__pc_new))))),64);
        tracep->fullQData(oldp+321,(((((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+323,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+324,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullQData(oldp+325,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base),64);
        tracep->fullIData(oldp+327,(0x60U),32);
        tracep->fullIData(oldp+328,(0U),32);
        tracep->fullBit(oldp+329,(1U));
        tracep->fullIData(oldp+330,(0x13bU),32);
        tracep->fullBit(oldp+331,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
    }
}
