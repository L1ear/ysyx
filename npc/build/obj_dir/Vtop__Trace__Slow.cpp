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
        tracep->declBit(c+311,"clk", false,-1);
        tracep->declBit(c+312,"rst_n", false,-1);
        tracep->declQuad(c+313,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+315,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+317,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+318,"regA0", false,-1, 63,0);
        tracep->declBit(c+311,"top clk", false,-1);
        tracep->declBit(c+312,"top rst_n", false,-1);
        tracep->declQuad(c+313,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+315,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+317,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+318,"top regA0", false,-1, 63,0);
        tracep->declQuad(c+320,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+73,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+197,"top is_jump", false,-1);
        tracep->declQuad(c+147,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+75,"top pc_stall_n", false,-1);
        tracep->declBus(c+76,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+77,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+79,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+322,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+324,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+80,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+82,"top src1sel_id", false,-1);
        tracep->declBus(c+83,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+84,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+85,"top is_brc_id", false,-1);
        tracep->declBit(c+86,"top is_jal_id", false,-1);
        tracep->declBit(c+87,"top is_jalr_id", false,-1);
        tracep->declBit(c+88,"top wben_id", false,-1);
        tracep->declBus(c+89,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+90,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+75,"top id_stall_n", false,-1);
        tracep->declBit(c+91,"top DivEn_id", false,-1);
        tracep->declBus(c+92,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+93,"top in_trap_id", false,-1);
        tracep->declBit(c+94,"top out_trap_id", false,-1);
        tracep->declBit(c+95,"top trap_id", false,-1);
        tracep->declQuad(c+96,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+98,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+149,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+99,"top src1sel_ex", false,-1);
        tracep->declBus(c+100,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+101,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+103,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+105,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+198,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+107,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+108,"top is_brc_ex", false,-1);
        tracep->declBit(c+109,"top is_jal_ex", false,-1);
        tracep->declBit(c+110,"top is_jalr_ex", false,-1);
        tracep->declBit(c+111,"top wben_ex", false,-1);
        tracep->declBit(c+112,"top DivEn_ex", false,-1);
        tracep->declBus(c+113,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+114,"top trap_ex", false,-1);
        tracep->declQuad(c+1,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+200,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+201,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+115,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+116,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+117,"top flush_ex", false,-1);
        tracep->declQuad(c+27,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+29,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+31,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+33,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+326,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+34,"top wben_ls", false,-1);
        tracep->declQuad(c+202,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+3,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+5,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+35,"top trap_ls", false,-1);
        tracep->declQuad(c+7,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+9,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+19,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+21,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+22,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+24,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+25,"top wben_wb", false,-1);
        tracep->declQuad(c+11,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+311,"top PC_reg_u clk", false,-1);
        tracep->declBit(c+312,"top PC_reg_u rst_n", false,-1);
        tracep->declQuad(c+320,"top PC_reg_u pc_i", false,-1, 63,0);
        tracep->declBit(c+75,"top PC_reg_u stall_n", false,-1);
        tracep->declQuad(c+73,"top PC_reg_u pc_new_o", false,-1, 63,0);
        tracep->declQuad(c+73,"top IF_u pc_i", false,-1, 63,0);
        tracep->declBit(c+197,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+147,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+3,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+5,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+93,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+94,"top IF_u out_trap_id", false,-1);
        tracep->declQuad(c+320,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBus(c+76,"top IF_u instr_o", false,-1, 31,0);
        tracep->declQuad(c+118,"top IF_u rdata", false,-1, 63,0);
        tracep->declBit(c+311,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+312,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+73,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+76,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+75,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+197,"top ID_reg_u flush", false,-1);
        tracep->declBit(c+93,"top ID_reg_u in_trap_id", false,-1);
        tracep->declBit(c+94,"top ID_reg_u out_trap_id", false,-1);
        tracep->declQuad(c+77,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+79,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+151,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+153,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+343,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+344,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+311,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+312,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+75,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+154,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+120,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+311,"top ID_u clk", false,-1);
        tracep->declBit(c+312,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+77,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+7,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+21,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+79,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+22,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+24,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+25,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+324,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+322,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+80,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+82,"top ID_u src1sel", false,-1);
        tracep->declBus(c+83,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+84,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+87,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+86,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+85,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+88,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+89,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+90,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+318,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+91,"top ID_u DivEn", false,-1);
        tracep->declBus(c+92,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+95,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+93,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+94,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+123,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+80,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+324,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+322,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+77,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+79,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+89,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+90,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+123,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+82,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+83,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+84,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+87,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+86,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+85,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+88,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+91,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+92,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+95,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+93,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+94,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+124,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+125,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+126,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+127,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+123,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+80,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+311,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+7,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+21,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+89,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+324,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+90,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+322,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+24,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+22,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+25,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+318,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+247+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+79,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+98,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+75,"top hazard_detect_u stalln_pc", false,-1);
        tracep->declBit(c+75,"top hazard_detect_u stalln_id", false,-1);
        tracep->declBit(c+117,"top hazard_detect_u flush_ex", false,-1);
        tracep->declBit(c+117,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+311,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+312,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+345,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+204,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+77,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+79,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+80,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+322,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+324,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+84,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+87,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+86,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+85,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+82,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+83,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+88,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+89,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+90,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+91,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+92,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+95,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+96,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+98,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+101,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+103,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+105,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+107,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+110,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+109,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+108,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+99,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+100,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+111,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+115,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+116,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+112,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+113,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+114,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+157,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+159,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+160,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+161,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+162,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+163,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+164,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+346,"top EX_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+344,"top EX_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+311,"top EX_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+312,"top EX_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+345,"top EX_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+184,"top EX_reg_u id_reg i_din", false,-1, 314,0);
        tracep->declArray(c+128,"top EX_reg_u id_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+107,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+103,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+101,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+105,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+96,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+98,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+110,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+109,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+108,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+99,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+100,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+200,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+201,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+31,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+22,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+1,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+112,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+113,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+149,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+147,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+198,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+197,"top ex_stage_u is_jump_o", false,-1);
        tracep->declQuad(c+205,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+207,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+209,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+198,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+107,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+205,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+207,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+112,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+113,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+149,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+165,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+211,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+212,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+138,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+214,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+216,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+139,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+139,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+140,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+141,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+218,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+166,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+220,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+221,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+223,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+225,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+167,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+205,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+214,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+138,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+216,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+166,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+211,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+220,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+142,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+141,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+139,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+140,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+138,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+139,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+143,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+205,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+227,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+140,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+139,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+218,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+228,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+230,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+232,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+234,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+169,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+171,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+236,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+205,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+207,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+113,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+167,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+209,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+198,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+110,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+109,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+108,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+144,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+105,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+96,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+147,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+197,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+145,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+173,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+347,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+238,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+239,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+240,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+241,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+243,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+175,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+311,"top forwarding_u clk", false,-1);
        tracep->declBit(c+312,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+115,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+116,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+36,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+24,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+34,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+25,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+22,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+200,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+201,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+1,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+1,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+13,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+14,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+328,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+329,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+330,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+331,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+332,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+333,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+311,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+312,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+96,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+198,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+98,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+149,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+111,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+114,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declQuad(c+27,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+29,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+33,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+31,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+34,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+35,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBit(c+348,"top L_S_reg_u rst_n", false,-1);
        tracep->declBus(c+349,"top L_S_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+344,"top L_S_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+311,"top L_S_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+348,"top L_S_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+345,"top L_S_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+176,"top L_S_reg_u id_reg i_din", false,-1, 225,0);
        tracep->declArray(c+37,"top L_S_reg_u id_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+311,"top ls_u clk", false,-1);
        tracep->declBit(c+312,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+27,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+31,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+29,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+33,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+9,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+21,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+19,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+35,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+326,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+202,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+3,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+5,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+45,"top ls_u wren", false,-1);
        tracep->declBit(c+46,"top ls_u rden", false,-1);
        tracep->declBus(c+47,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+334,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u wren_last", false,-1);
        tracep->declBit(c+311,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+312,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+45,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+46,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+47,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+334,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+31,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+27,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+9,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+326,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+336,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declQuad(c+48,"top ls_u lsu_u dpi_addr", false,-1, 63,0);
        tracep->declBit(c+50,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+51,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+52,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+53,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+54,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+55,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+56,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+194,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+195,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+196,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+57,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+58,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+59,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+60,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+61,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+33,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+21,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+29,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+19,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+45,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+46,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+47,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+334,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+338,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+311,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+312,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+27,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+33,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+31,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+35,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+202,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+3,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+5,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+62,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+63,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+64,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+65,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+66,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+67,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+68,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+69,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+70,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+31,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+339,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+341,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+245,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+5,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+3,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+15,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+71,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+17,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBit(c+311,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+312,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+27,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+33,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+31,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+326,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+34,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+202,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+7,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+21,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+9,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+19,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+25,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+11,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+7,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+21,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+9,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+19,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+11,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+24,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+22,"top wb_stage_u rd_data_o", false,-1, 63,0);
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
    VlWide<3>/*95:0*/ __Vtemp44;
    VlWide<3>/*95:0*/ __Vtemp46;
    VlWide<3>/*95:0*/ __Vtemp47;
    VlWide<3>/*95:0*/ __Vtemp48;
    VlWide<3>/*95:0*/ __Vtemp49;
    VlWide<3>/*95:0*/ __Vtemp50;
    VlWide<3>/*95:0*/ __Vtemp53;
    VlWide<3>/*95:0*/ __Vtemp54;
    VlWide<3>/*95:0*/ __Vtemp55;
    VlWide<3>/*95:0*/ __Vtemp56;
    VlWide<3>/*95:0*/ __Vtemp57;
    VlWide<8>/*255:0*/ __Vtemp62;
    VlWide<10>/*319:0*/ __Vtemp67;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__pc_wb),64);
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__alures_wb),64);
        tracep->fullQData(oldp+11,(vlSelf->top__DOT__csrdata_wb),64);
        tracep->fullBit(oldp+13,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+17,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullQData(oldp+19,(vlSelf->top__DOT__lsres_wb),64);
        tracep->fullIData(oldp+21,(vlSelf->top__DOT__instr_wb),32);
        tracep->fullQData(oldp+22,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+24,((0x1fU & (vlSelf->top__DOT__instr_wb 
                                             >> 7U))),5);
        tracep->fullBit(oldp+25,(vlSelf->top__DOT__wben_wb));
        tracep->fullBit(oldp+26,((8U == (0x1fU & (vlSelf->top__DOT__instr_wb 
                                                  >> 2U)))));
        tracep->fullQData(oldp+27,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[7U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[6U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[5U])) 
                                                     >> 2U)))),64);
        tracep->fullQData(oldp+29,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                     >> 2U)))),64);
        tracep->fullQData(oldp+31,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                                     >> 2U)))),64);
        tracep->fullIData(oldp+33,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[5U] 
                                     << 0x1eU) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                  >> 2U))),32);
        tracep->fullBit(oldp+34,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 1U))));
        tracep->fullBit(oldp+35,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[0U])));
        tracep->fullCData(oldp+36,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                             >> 9U))),5);
        tracep->fullWData(oldp+37,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout),226);
        tracep->fullBit(oldp+45,((8U == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                  >> 4U)))));
        tracep->fullBit(oldp+46,((3U == (0x7fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                  >> 2U)))));
        tracep->fullCData(oldp+47,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                          >> 0xeU))),3);
        tracep->fullQData(oldp+48,((0xfffffffffffffff8ULL 
                                    & (((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                           >> 2U))))),64);
        tracep->fullBit(oldp+50,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (0U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+51,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (4U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+52,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+53,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (5U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+54,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+55,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (6U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+56,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullCData(oldp+57,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullBit(oldp+58,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (0U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+59,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+60,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+61,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+62,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                               >> 0xeU)))));
        tracep->fullBit(oldp+63,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                               >> 0xeU)))));
        tracep->fullBit(oldp+64,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                               >> 0xeU)))));
        tracep->fullBit(oldp+65,((0x1cU == (0x1fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                             >> 4U)))));
        tracep->fullBit(oldp+66,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+67,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+68,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+69,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+70,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+71,(((0x1cU == (0x1fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                  >> 4U)))
                                     ? 0xbULL : 0ULL)),64);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+75,((1U & (~ (IData)(vlSelf->top__DOT__hazard_detect_u__DOT__hazard)))));
        tracep->fullIData(oldp+76,((IData)(vlSelf->top__DOT__IF_u__DOT__rdata)),32);
        tracep->fullQData(oldp+77,((((QData)((IData)(
                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+79,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+82,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+83,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+84,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+85,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+86,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+87,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+88,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+89,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+90,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+91,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+92,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+93,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+94,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+95,(vlSelf->top__DOT__trap_id));
        tracep->fullQData(oldp+96,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[9U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[8U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullIData(oldp+98,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                     << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                               >> 0x1bU))),32);
        tracep->fullBit(oldp+99,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 0x12U))));
        tracep->fullCData(oldp+100,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0x10U))),2);
        tracep->fullQData(oldp+101,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[6U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[4U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+103,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[4U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[3U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+105,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullCData(oldp+107,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+108,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+109,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+110,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+111,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+112,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+113,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+114,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])));
        tracep->fullCData(oldp+115,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+116,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 5U))),5);
        tracep->fullBit(oldp+117,(vlSelf->top__DOT__hazard_detect_u__DOT__hazard));
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__IF_u__DOT__rdata),64);
        tracep->fullWData(oldp+120,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+123,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+124,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+125,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+126,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+127,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullWData(oldp+128,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout),315);
        tracep->fullBit(oldp+138,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullBit(oldp+139,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+140,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+141,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullCData(oldp+142,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+143,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+144,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+145,(((((QData)((IData)(
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
        tracep->fullQData(oldp+147,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
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
        tracep->fullQData(oldp+149,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)),64);
        tracep->fullQData(oldp+151,(((((IData)(vlSelf->top__DOT__is_jump) 
                                       | (IData)(vlSelf->top__DOT__in_trap_id)) 
                                      | (IData)(vlSelf->top__DOT__out_trap_id))
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+153,(((((IData)(vlSelf->top__DOT__is_jump) 
                                       | (IData)(vlSelf->top__DOT__in_trap_id)) 
                                      | (IData)(vlSelf->top__DOT__out_trap_id))
                                      ? 0U : (IData)(vlSelf->top__DOT__IF_u__DOT__rdata))),32);
        __Vtemp44[0U] = ((((IData)(vlSelf->top__DOT__is_jump) 
                           | (IData)(vlSelf->top__DOT__in_trap_id)) 
                          | (IData)(vlSelf->top__DOT__out_trap_id))
                          ? 0U : (IData)(vlSelf->top__DOT__IF_u__DOT__rdata));
        __Vtemp44[1U] = (IData)(((((IData)(vlSelf->top__DOT__is_jump) 
                                   | (IData)(vlSelf->top__DOT__in_trap_id)) 
                                  | (IData)(vlSelf->top__DOT__out_trap_id))
                                  ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp44[2U] = (IData)((((((IData)(vlSelf->top__DOT__is_jump) 
                                    | (IData)(vlSelf->top__DOT__in_trap_id)) 
                                   | (IData)(vlSelf->top__DOT__out_trap_id))
                                   ? 0ULL : vlSelf->top__DOT__pc_new) 
                                 >> 0x20U));
        tracep->fullWData(oldp+154,(__Vtemp44),96);
        tracep->fullQData(oldp+157,(((IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+159,(((IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+160,(((~ (IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+161,(((~ (IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+162,(((~ (IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+163,(((~ (IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+164,(((~ (IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        VL_EXTEND_WQ(65,64, __Vtemp46, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp47, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp48, __Vtemp46, __Vtemp47);
        VL_EXTEND_WI(65,1, __Vtemp49, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp50, __Vtemp48, __Vtemp49);
        tracep->fullBit(oldp+165,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp50[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        VL_EXTEND_WQ(65,64, __Vtemp53, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp54, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp55, __Vtemp53, __Vtemp54);
        VL_EXTEND_WI(65,1, __Vtemp56, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp57, __Vtemp55, __Vtemp56);
        tracep->fullBit(oldp+166,((1U & __Vtemp57[2U])));
        tracep->fullQData(oldp+167,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
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
        tracep->fullQData(oldp+169,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+171,(((0x4000000U & 
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
        tracep->fullQData(oldp+173,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+175,((1U & ((0x200U & 
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
        __Vtemp62[0U] = (((IData)(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                    ? (((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                    : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)) 
                          << 2U) | ((2U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xeU)) 
                                    | (1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])));
        __Vtemp62[1U] = (((IData)(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                    ? (((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                    : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)) 
                          >> 0x1eU) | ((IData)((((0x4000000U 
                                                  & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                                  : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout) 
                                                >> 0x20U)) 
                                       << 2U));
        __Vtemp62[2U] = (((IData)((((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                     ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                     : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout) 
                                   >> 0x20U)) >> 0x1eU) 
                         | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                            << 2U));
        __Vtemp62[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                          >> 0x1eU) | ((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                >> 0x20U)) 
                                       << 2U));
        __Vtemp62[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                   >> 0x20U)) >> 0x1eU) 
                         | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                             << 7U) | (0x7cU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                                >> 0x19U))));
        __Vtemp62[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[8U] 
                                               << 7U) 
                                              | (0x7cU 
                                                 & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                                    >> 0x19U))));
        __Vtemp62[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[8U] 
                                >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[9U] 
                                               << 7U) 
                                              | (0x7cU 
                                                 & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[8U] 
                                                    >> 0x19U))));
        __Vtemp62[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[9U] 
                               >> 0x19U));
        tracep->fullWData(oldp+176,(__Vtemp62),226);
        __Vtemp67[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
        __Vtemp67[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                          >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp67[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                   >> 0x20U)) >> 5U) 
                         | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])) 
                            << 0x1bU));
        __Vtemp67[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                    ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                   [vlSelf->top__DOT__rs1_idx_id])) 
                          >> 5U) | ((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                               ? 0ULL
                                               : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                              [vlSelf->top__DOT__rs1_idx_id]) 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp67[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id]) 
                                   >> 0x20U)) >> 5U) 
                         | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])) 
                            << 0x1bU));
        __Vtemp67[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                    ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                   [vlSelf->top__DOT__rs2_idx_id])) 
                          >> 5U) | ((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                               ? 0ULL
                                               : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                              [vlSelf->top__DOT__rs2_idx_id]) 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp67[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id]) 
                                   >> 0x20U)) >> 5U) 
                         | (((IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)
                              ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                            << 0x1bU));
        __Vtemp67[7U] = ((((IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)
                            ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                          >> 5U) | ((IData)(((IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)
                                              ? 0ULL
                                              : (((QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                    << 0x1bU));
        __Vtemp67[8U] = (((IData)(((IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)
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
        __Vtemp67[9U] = ((IData)((((IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)
                                    ? 0ULL : (((QData)((IData)(
                                                               vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                  >> 0x20U)) >> 5U);
        tracep->fullWData(oldp+184,(__Vtemp67),315);
        tracep->fullCData(oldp+194,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+195,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+196,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+197,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+198,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+200,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+201,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullQData(oldp+202,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullBit(oldp+204,(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush));
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+207,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+209,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        tracep->fullBit(oldp+211,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        tracep->fullBit(oldp+220,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+221,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+223,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+225,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullCData(oldp+227,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+228,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+230,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+232,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+234,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+236,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullBit(oldp+238,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+239,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+240,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+241,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+243,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullQData(oldp+245,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+247,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+249,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+251,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+253,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+255,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+257,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+259,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+261,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+263,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+265,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+267,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+269,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+271,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+273,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+275,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+277,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+279,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+281,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+283,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+285,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+287,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+289,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+291,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+293,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+295,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+297,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+299,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+301,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+303,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+305,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+307,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+309,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+311,(vlSelf->clk));
        tracep->fullBit(oldp+312,(vlSelf->rst_n));
        tracep->fullQData(oldp+313,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+315,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+317,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+318,(vlSelf->regA0),64);
        tracep->fullQData(oldp+320,(((IData)(vlSelf->top__DOT__is_jump)
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
        tracep->fullQData(oldp+322,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+324,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        tracep->fullQData(oldp+326,(((((((((- (QData)((IData)(
                                                              ((3U 
                                                                == 
                                                                (0x7fU 
                                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                                    >> 2U))) 
                                                               & (0U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                                      >> 0xeU))))))) 
                                           & (((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b) 
                                                                      >> 7U))))) 
                                               << 8U) 
                                              | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b)))) 
                                          | ((- (QData)((IData)(
                                                                ((3U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                                      >> 2U))) 
                                                                 & (4U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                                        >> 0xeU))))))) 
                                             & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b)))) 
                                         | ((- (QData)((IData)(
                                                               ((3U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                                     >> 2U))) 
                                                                & (1U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                                       >> 0xeU))))))) 
                                            & (((- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h) 
                                                                       >> 0xfU))))) 
                                                << 0x10U) 
                                               | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h))))) 
                                        | ((- (QData)((IData)(
                                                              ((3U 
                                                                == 
                                                                (0x7fU 
                                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                                    >> 2U))) 
                                                               & (5U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                                      >> 0xeU))))))) 
                                           & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h)))) 
                                       | ((- (QData)((IData)(
                                                             ((3U 
                                                               == 
                                                               (0x7fU 
                                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                                   >> 2U))) 
                                                              & (2U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                                     >> 0xeU))))))) 
                                          & (((QData)((IData)(
                                                              (- (IData)(
                                                                         (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w 
                                                                          >> 0x1fU))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w))))) 
                                      | ((- (QData)((IData)(
                                                            ((3U 
                                                              == 
                                                              (0x7fU 
                                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                                  >> 2U))) 
                                                             & (6U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                                    >> 0xeU))))))) 
                                         & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w)))) 
                                     | ((- (QData)((IData)(
                                                           ((3U 
                                                             == 
                                                             (0x7fU 
                                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                                 >> 2U))) 
                                                            & (3U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                                   >> 0xeU))))))) 
                                        & vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))),64);
        tracep->fullBit(oldp+328,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+329,((((IData)(vlSelf->top__DOT__wben_wb) 
                                    & ((0x1fU & (vlSelf->top__DOT__instr_wb 
                                                 >> 7U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__instr_wb 
                                                >> 7U))))));
        tracep->fullBit(oldp+330,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+331,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+332,((((IData)(vlSelf->top__DOT__wben_wb) 
                                    & ((0x1fU & (vlSelf->top__DOT__instr_wb 
                                                 >> 7U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__instr_wb 
                                                >> 7U))))));
        tracep->fullBit(oldp+333,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullQData(oldp+334,((((0U == (0x1fU 
                                              & (vlSelf->top__DOT__instr_wb 
                                                 >> 2U))) 
                                      & ((0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 0x16U)) 
                                         == (0x1fU 
                                             & (vlSelf->top__DOT__instr_wb 
                                                >> 7U))))
                                      ? vlSelf->top__DOT__lsres_wb
                                      : (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[3U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                               >> 2U))))),64);
        tracep->fullQData(oldp+336,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base),64);
        tracep->fullBit(oldp+338,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__instr_wb 
                                            >> 2U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (vlSelf->top__DOT__instr_wb 
                                                   >> 7U))))));
        tracep->fullQData(oldp+339,(((((QData)((IData)(
                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                        >> 2U))) | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+341,(((~ (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                               >> 2U)))) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullIData(oldp+343,(0x60U),32);
        tracep->fullIData(oldp+344,(0U),32);
        tracep->fullBit(oldp+345,(1U));
        tracep->fullIData(oldp+346,(0x13bU),32);
        tracep->fullBit(oldp+347,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullBit(oldp+348,(vlSelf->top__DOT__L_S_reg_u__DOT__rst_n));
        tracep->fullIData(oldp+349,(0xe2U),32);
    }
}
