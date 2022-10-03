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
        tracep->declBit(c+348,"clk", false,-1);
        tracep->declBit(c+349,"rst_n", false,-1);
        tracep->declQuad(c+350,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+352,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+354,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+355,"regA0", false,-1, 63,0);
        tracep->declBit(c+357,"stall_n_diff", false,-1);
        tracep->declQuad(c+358,"sram_rdata", false,-1, 63,0);
        tracep->declBit(c+360,"sram_data_valid", false,-1);
        tracep->declQuad(c+361,"sram_addr", false,-1, 63,0);
        tracep->declBit(c+363,"sram_ren", false,-1);
        tracep->declBit(c+348,"top clk", false,-1);
        tracep->declBit(c+349,"top rst_n", false,-1);
        tracep->declQuad(c+350,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+352,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+354,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+355,"top regA0", false,-1, 63,0);
        tracep->declBit(c+357,"top stall_n_diff", false,-1);
        tracep->declQuad(c+358,"top sram_rdata", false,-1, 63,0);
        tracep->declBit(c+360,"top sram_data_valid", false,-1);
        tracep->declQuad(c+361,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+363,"top sram_ren", false,-1);
        tracep->declQuad(c+44,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+46,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+48,"top is_jump", false,-1);
        tracep->declQuad(c+49,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+364,"top pc_stall_n", false,-1);
        tracep->declBit(c+360,"top if_instr_valid", false,-1);
        tracep->declBus(c+283,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+51,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+53,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+252,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+254,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+54,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+56,"top src1sel_id", false,-1);
        tracep->declBus(c+57,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+58,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+59,"top is_brc_id", false,-1);
        tracep->declBit(c+60,"top is_jal_id", false,-1);
        tracep->declBit(c+61,"top is_jalr_id", false,-1);
        tracep->declBit(c+62,"top wben_id", false,-1);
        tracep->declBus(c+63,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+64,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+365,"top id_stall_n", false,-1);
        tracep->declBit(c+65,"top DivEn_id", false,-1);
        tracep->declBus(c+66,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+67,"top in_trap_id", false,-1);
        tracep->declBit(c+68,"top out_trap_id", false,-1);
        tracep->declBit(c+69,"top trap_id", false,-1);
        tracep->declBit(c+70,"top ld_use_hazard", false,-1);
        tracep->declBit(c+71,"top id_flush", false,-1);
        tracep->declQuad(c+72,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+74,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+75,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+77,"top src1sel_ex", false,-1);
        tracep->declBus(c+78,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+79,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+81,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+83,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+85,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+87,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+88,"top is_brc_ex", false,-1);
        tracep->declBit(c+89,"top is_jal_ex", false,-1);
        tracep->declBit(c+90,"top is_jalr_ex", false,-1);
        tracep->declBit(c+91,"top wben_ex", false,-1);
        tracep->declBit(c+92,"top DivEn_ex", false,-1);
        tracep->declBus(c+93,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+94,"top trap_ex", false,-1);
        tracep->declBit(c+360,"top ex_stall_n", false,-1);
        tracep->declQuad(c+1,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+95,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+96,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+97,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+98,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+99,"top ex_flush", false,-1);
        tracep->declQuad(c+100,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+102,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+104,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+106,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+366,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+107,"top wben_ls", false,-1);
        tracep->declQuad(c+108,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+3,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+5,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+110,"top trap_ls", false,-1);
        tracep->declBit(c+360,"top ls_stall_n", false,-1);
        tracep->declQuad(c+7,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+9,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+11,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+13,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+14,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+16,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+17,"top wben_wb", false,-1);
        tracep->declQuad(c+18,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+360,"top wb_stall_n", false,-1);
        tracep->declBit(c+348,"top PC_reg_u clk", false,-1);
        tracep->declBit(c+349,"top PC_reg_u rst_n", false,-1);
        tracep->declQuad(c+44,"top PC_reg_u pc_i", false,-1, 63,0);
        tracep->declBit(c+364,"top PC_reg_u stall_n", false,-1);
        tracep->declQuad(c+46,"top PC_reg_u pc_new_o", false,-1, 63,0);
        tracep->declBit(c+348,"top IF_u clk", false,-1);
        tracep->declBit(c+349,"top IF_u rst_n", false,-1);
        tracep->declQuad(c+46,"top IF_u pc_i", false,-1, 63,0);
        tracep->declBit(c+48,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+49,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+3,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+5,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+67,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+68,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+364,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+44,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBus(c+283,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+360,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+358,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+360,"top IF_u sram_data_valid", false,-1);
        tracep->declQuad(c+361,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+363,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+348,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+349,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+46,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+283,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+365,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+71,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+51,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+53,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+111,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+256,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+371,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+372,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+348,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+349,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+365,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+257,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+113,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+348,"top ID_u clk", false,-1);
        tracep->declBit(c+349,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+51,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+7,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+13,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+53,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+14,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+16,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+17,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+254,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+252,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+54,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+56,"top ID_u src1sel", false,-1);
        tracep->declBus(c+57,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+58,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+61,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+60,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+59,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+62,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+63,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+64,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+355,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+65,"top ID_u DivEn", false,-1);
        tracep->declBus(c+66,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+69,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+67,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+68,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+116,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+54,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+254,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+252,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+51,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+53,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+63,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+64,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+116,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+56,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+57,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+58,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+61,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+60,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+59,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+62,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+65,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+66,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+69,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+67,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+68,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+117,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+118,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+119,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+120,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+116,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+54,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+348,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+7,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+13,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+63,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+254,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+64,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+252,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+16,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+14,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+17,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+355,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+284+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+53,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+74,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+70,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+348,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+349,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+360,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+99,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+51,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+53,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+54,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+252,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+254,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+58,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+61,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+60,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+59,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+56,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+57,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+62,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+63,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+64,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+65,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+66,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+69,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+72,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+74,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+79,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+81,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+83,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+87,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+90,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+89,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+88,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+77,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+78,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+91,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+97,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+98,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+92,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+93,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+94,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+121,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+123,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+124,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+125,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+126,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+127,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+128,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+373,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+372,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+348,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+349,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+360,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+260,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+129,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+87,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+81,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+79,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+83,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+72,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+74,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+90,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+89,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+88,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+77,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+78,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+95,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+96,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+104,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+14,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+1,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+92,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+93,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+75,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+49,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+85,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+48,"top ex_stage_u is_jump_o", false,-1);
        tracep->declQuad(c+139,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+141,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+143,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+85,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+87,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+139,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+141,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+92,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+93,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+75,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+145,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+146,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+147,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+149,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+150,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+152,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+154,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+154,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+155,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+156,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+157,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+159,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+160,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+161,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+163,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+165,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+167,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+139,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+150,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+149,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+152,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+159,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+146,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+160,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+169,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+156,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+154,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+155,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+149,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+154,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+170,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+139,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+171,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+155,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+154,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+157,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+172,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+174,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+176,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+178,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+180,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+182,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+184,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+139,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+141,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+93,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+167,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+143,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+85,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+90,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+89,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+88,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+186,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+83,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+72,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+49,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+48,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+187,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+189,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+374,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+191,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+192,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+193,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+194,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+196,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+198,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+348,"top forwarding_u clk", false,-1);
        tracep->declBit(c+349,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+97,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+98,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+199,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+16,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+107,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+17,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+14,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+360,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+95,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+96,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+1,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+1,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+20,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+21,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+200,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+37,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+38,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+201,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+39,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+40,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+348,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+349,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+72,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+85,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+74,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+75,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+91,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+94,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+360,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+100,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+102,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+106,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+104,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+107,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+110,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+375,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+372,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+348,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+349,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+360,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+202,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+210,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+348,"top ls_u clk", false,-1);
        tracep->declBit(c+349,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+100,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+104,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+102,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+106,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+9,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+13,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+11,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+110,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+366,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+108,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+3,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+5,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+218,"top ls_u wren", false,-1);
        tracep->declBit(c+219,"top ls_u rden", false,-1);
        tracep->declBus(c+220,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+41,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+22,"top ls_u wren_last", false,-1);
        tracep->declBit(c+348,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+349,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+218,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+219,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+220,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+41,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+104,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+100,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+9,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+22,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+366,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+368,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declQuad(c+221,"top ls_u lsu_u dpi_addr", false,-1, 63,0);
        tracep->declBit(c+223,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+224,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+225,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+226,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+227,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+228,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+229,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+270,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+271,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+272,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+230,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+231,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+232,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+233,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+234,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+106,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+13,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+102,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+11,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+218,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+219,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+220,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+41,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+43,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+348,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+349,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+100,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+106,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+104,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+110,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+108,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+3,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+5,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+235,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+236,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+237,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+238,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+239,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+240,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+241,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+242,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+243,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+104,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+244,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+246,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+248,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+5,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+3,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+23,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+250,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+25,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBit(c+348,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+349,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+100,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+106,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+104,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+366,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+107,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+108,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+360,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+7,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+13,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+9,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+11,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+17,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+18,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+376,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+372,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+348,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+349,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+360,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+273,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+27,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+7,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+13,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+9,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+11,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+18,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+16,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+14,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+348,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+349,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+70,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+48,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+67,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+68,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+360,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+364,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+365,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+360,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+360,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+360,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+71,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+99,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBit(c+370,"top pipline_ctrl_u teslll", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp53;
    VlWide<3>/*95:0*/ __Vtemp54;
    VlWide<3>/*95:0*/ __Vtemp55;
    VlWide<3>/*95:0*/ __Vtemp56;
    VlWide<3>/*95:0*/ __Vtemp57;
    VlWide<3>/*95:0*/ __Vtemp60;
    VlWide<3>/*95:0*/ __Vtemp61;
    VlWide<3>/*95:0*/ __Vtemp62;
    VlWide<3>/*95:0*/ __Vtemp63;
    VlWide<3>/*95:0*/ __Vtemp64;
    VlWide<8>/*255:0*/ __Vtemp69;
    VlWide<3>/*95:0*/ __Vtemp70;
    VlWide<10>/*319:0*/ __Vtemp75;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullQData(oldp+7,((((QData)((IData)(
                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                    << 0x3fU) | (((QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                    >> 1U)))),64);
        tracep->fullQData(oldp+9,((((QData)((IData)(
                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                    << 0x3fU) | (((QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                    >> 1U)))),64);
        tracep->fullQData(oldp+11,((((QData)((IData)(
                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                     >> 1U)))),64);
        tracep->fullIData(oldp+13,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                     << 0x1fU) | (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                  >> 1U))),32);
        tracep->fullQData(oldp+14,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+16,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                             >> 8U))),5);
        tracep->fullBit(oldp+17,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+18,((((QData)((IData)(
                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullBit(oldp+20,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+21,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullBit(oldp+22,((8U == (0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                  >> 3U)))));
        tracep->fullQData(oldp+23,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+25,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullWData(oldp+27,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullBit(oldp+37,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                   & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                   >> 0xaU)))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                             >> 8U))))));
        tracep->fullBit(oldp+38,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                   & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                   >> 0xaU)))) 
                                  & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+39,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                   & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                   >> 5U)))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                             >> 8U))))));
        tracep->fullBit(oldp+40,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                   & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                   >> 5U)))) 
                                  & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullQData(oldp+41,((((0U == (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 3U))) 
                                     & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0x16U)) 
                                        == (0x1fU & 
                                            (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                             >> 8U))))
                                     ? (((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                              >> 1U)))
                                     : (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                              >> 2U))))),64);
        tracep->fullBit(oldp+43,(((0U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U))) 
                                  & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0x16U)) 
                                     == (0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                  >> 8U))))));
        tracep->fullQData(oldp+44,(vlSelf->top__DOT__pc_next),64);
        tracep->fullQData(oldp+46,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+48,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+49,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                     ? (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                        + (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                            << 0x25U) 
                                           | (((QData)((IData)(
                                                               vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                 >> 0x1bU))))
                                     : ((((QData)((IData)(
                                                          vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                          << 0x25U) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                             << 5U) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                               >> 0x1bU))) 
                                        + (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                            << 0x25U) 
                                           | (((QData)((IData)(
                                                               vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                 >> 0x1bU)))))),64);
        tracep->fullQData(oldp+51,((((QData)((IData)(
                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+53,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+56,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+57,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+58,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+59,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+60,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+61,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+62,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+63,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+64,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+65,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+66,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+67,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+68,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+69,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+70,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+71,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+72,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullIData(oldp+74,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                     << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1bU))),32);
        tracep->fullQData(oldp+75,(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                     ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                     : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)),64);
        tracep->fullBit(oldp+77,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x12U))));
        tracep->fullCData(oldp+78,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                          >> 0x10U))),2);
        tracep->fullQData(oldp+79,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullQData(oldp+81,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullQData(oldp+83,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+87,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),5);
        tracep->fullBit(oldp+88,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x13U))));
        tracep->fullBit(oldp+89,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x14U))));
        tracep->fullBit(oldp+90,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x15U))));
        tracep->fullBit(oldp+91,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0xfU))));
        tracep->fullBit(oldp+92,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 4U))));
        tracep->fullCData(oldp+93,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                          >> 1U))),3);
        tracep->fullBit(oldp+94,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullCData(oldp+95,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+96,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+97,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0xaU))),5);
        tracep->fullCData(oldp+98,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 5U))),5);
        tracep->fullBit(oldp+99,(vlSelf->top__DOT__ex_flush));
        tracep->fullQData(oldp+100,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                      >> 2U)))),64);
        tracep->fullQData(oldp+102,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                      >> 2U)))),64);
        tracep->fullQData(oldp+104,((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                      >> 2U)))),64);
        tracep->fullIData(oldp+106,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                      << 0x1eU) | (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))),32);
        tracep->fullBit(oldp+107,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                         >> 1U))));
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullBit(oldp+110,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullQData(oldp+111,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullWData(oldp+113,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+116,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+117,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+118,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+119,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+120,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+121,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+123,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+124,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+125,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+126,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+127,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+128,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+129,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp53, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp54, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp55, __Vtemp53, __Vtemp54);
        VL_EXTEND_WI(65,1, __Vtemp56, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp57, __Vtemp55, __Vtemp56);
        tracep->fullBit(oldp+145,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp57[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+146,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+149,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+150,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+152,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+154,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+155,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+156,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+157,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp60, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp61, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp62, __Vtemp60, __Vtemp61);
        VL_EXTEND_WI(65,1, __Vtemp63, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp64, __Vtemp62, __Vtemp63);
        tracep->fullBit(oldp+159,((1U & __Vtemp64[2U])));
        tracep->fullBit(oldp+160,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+161,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+163,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+165,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+167,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? ((4U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((2U & 
                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                              ? VL_MODDIV_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                              : VL_MODDIVS_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2))
                                          : ((2U & 
                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                              ? VL_DIV_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                              : VL_DIVS_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)))
                                      : ((4U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((2U & 
                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                              ? (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                 * vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                              : (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                 * vlSelf->top__DOT__ex_stage_u__DOT__src2))
                                          : ((2U & 
                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                              ? VL_MULS_QQQ(64,64,64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                              : (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                 * vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullCData(oldp+169,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+170,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+171,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+172,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+174,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+176,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+178,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+180,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+182,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullQData(oldp+184,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+186,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+187,(((((QData)((IData)(
                                                       vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                       << 0x25U) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                        << 5U) | ((QData)((IData)(
                                                                  vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                  >> 0x1bU))) 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullQData(oldp+189,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+191,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+192,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+193,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+194,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+196,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+198,((1U & ((0x200U & 
                                          vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                          ? ((0x100U 
                                              & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                              ? ((0x80U 
                                                  & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                                  ? (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)
                                                  : 
                                                 (~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)))
                                              : ((0x80U 
                                                  & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
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
                                          : ((~ (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 >> 8U)) 
                                             & ((0x80U 
                                                 & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                                 ? 
                                                (0U 
                                                 != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres)
                                                 : 
                                                (~ (IData)(
                                                           (0U 
                                                            != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres)))))))));
        tracep->fullCData(oldp+199,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 9U))),5);
        tracep->fullBit(oldp+200,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+201,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        __Vtemp69[0U] = (((IData)(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                    ? (((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                    : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)) 
                          << 2U) | ((2U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0xeU)) 
                                    | (1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        __Vtemp69[1U] = (((IData)(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                    ? (((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                    : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)) 
                          >> 0x1eU) | ((IData)((((0x4000000U 
                                                  & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        __Vtemp69[2U] = (((IData)((((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        __Vtemp69[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                          >> 0x1eU) | ((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                >> 0x20U)) 
                                       << 2U));
        __Vtemp69[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                   >> 0x20U)) >> 0x1eU) 
                         | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                             << 7U) | (0x7cU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x19U))));
        __Vtemp69[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                               << 7U) 
                                              | (0x7cU 
                                                 & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    >> 0x19U))));
        __Vtemp69[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                               << 7U) 
                                              | (0x7cU 
                                                 & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                    >> 0x19U))));
        __Vtemp69[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                               >> 0x19U));
        tracep->fullWData(oldp+202,(__Vtemp69),226);
        tracep->fullWData(oldp+210,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullBit(oldp+218,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))));
        tracep->fullBit(oldp+219,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U)))));
        tracep->fullCData(oldp+220,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xeU))),3);
        tracep->fullQData(oldp+221,((0xfffffffffffffff8ULL 
                                     & (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                              >> 2U))))),64);
        tracep->fullBit(oldp+223,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+224,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+225,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+226,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (5U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+227,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+228,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (6U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+229,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullCData(oldp+230,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullBit(oldp+231,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+232,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+233,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+234,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+235,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+236,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+237,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+238,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U)))));
        tracep->fullBit(oldp+239,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+240,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+241,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+242,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+243,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+244,(((((QData)((IData)(
                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                        >> 2U))) | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+246,(((~ (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U)))) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+248,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+250,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullQData(oldp+252,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+254,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        tracep->fullIData(oldp+256,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : vlSelf->top__DOT__instr_if_id_reg)),32);
        __Vtemp70[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                          ? 0U : vlSelf->top__DOT__instr_if_id_reg);
        __Vtemp70[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                  ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp70[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new) 
                                 >> 0x20U));
        tracep->fullWData(oldp+257,(__Vtemp70),96);
        __Vtemp75[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                          << 0x1bU) | (((IData)(vlSelf->top__DOT__aluctr_id) 
                                        << 0x16U) | 
                                       ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                          & (IData)(vlSelf->top__DOT__is_jalr_id)) 
                                         << 0x15U) 
                                        | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                             & (IData)(vlSelf->top__DOT__is_jal_id)) 
                                            << 0x14U) 
                                           | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                & (IData)(vlSelf->top__DOT__is_brc_id)) 
                                               << 0x13U) 
                                              | (((IData)(vlSelf->top__DOT__src1sel_id) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSelf->top__DOT__src2sel_id) 
                                                     << 0x10U) 
                                                    | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
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
                                                                   | ((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                                      & (IData)(vlSelf->top__DOT__trap_id))))))))))))));
        __Vtemp75[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                          >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp75[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                   >> 0x20U)) >> 5U) 
                         | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])) 
                            << 0x1bU));
        __Vtemp75[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                    ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                   [vlSelf->top__DOT__rs1_idx_id])) 
                          >> 5U) | ((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                               ? 0ULL
                                               : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                              [vlSelf->top__DOT__rs1_idx_id]) 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp75[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id]) 
                                   >> 0x20U)) >> 5U) 
                         | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])) 
                            << 0x1bU));
        __Vtemp75[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                    ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                   [vlSelf->top__DOT__rs2_idx_id])) 
                          >> 5U) | ((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                               ? 0ULL
                                               : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                              [vlSelf->top__DOT__rs2_idx_id]) 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp75[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id]) 
                                   >> 0x20U)) >> 5U) 
                         | (((IData)(vlSelf->top__DOT__ex_flush)
                              ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                            << 0x1bU));
        __Vtemp75[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                            ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                          >> 5U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                              ? 0ULL
                                              : (((QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                    << 0x1bU));
        __Vtemp75[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                    ? 0ULL : (((QData)((IData)(
                                                               vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                          >> 5U) | ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp75[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                    ? 0ULL : (((QData)((IData)(
                                                               vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                  >> 0x20U)) >> 5U);
        tracep->fullWData(oldp+260,(__Vtemp75),315);
        tracep->fullCData(oldp+270,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+271,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+272,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullWData(oldp+273,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullIData(oldp+283,(vlSelf->top__DOT__instr_if_id_reg),32);
        tracep->fullQData(oldp+284,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+286,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+288,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+290,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+292,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+294,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+296,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+298,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+300,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+302,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+304,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+306,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+308,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+310,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+312,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+314,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+316,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+318,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+320,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+322,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+324,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+326,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+328,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+330,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+332,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+334,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+336,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+338,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+340,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+342,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+344,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+346,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+348,(vlSelf->clk));
        tracep->fullBit(oldp+349,(vlSelf->rst_n));
        tracep->fullQData(oldp+350,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+352,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+354,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+355,(vlSelf->regA0),64);
        tracep->fullBit(oldp+357,(vlSelf->stall_n_diff));
        tracep->fullQData(oldp+358,(vlSelf->sram_rdata),64);
        tracep->fullBit(oldp+360,(vlSelf->sram_data_valid));
        tracep->fullQData(oldp+361,(vlSelf->sram_addr),64);
        tracep->fullBit(oldp+363,(vlSelf->sram_ren));
        tracep->fullBit(oldp+364,(vlSelf->top__DOT__pc_stall_n));
        tracep->fullBit(oldp+365,((1U & (~ ((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                            | (~ (IData)(vlSelf->sram_data_valid)))))));
        tracep->fullQData(oldp+366,(((((((((- (QData)((IData)(
                                                              ((3U 
                                                                == 
                                                                (0x7fU 
                                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                    >> 2U))) 
                                                               & (0U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
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
                                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                      >> 2U))) 
                                                                 & (4U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                        >> 0xeU))))))) 
                                             & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b)))) 
                                         | ((- (QData)((IData)(
                                                               ((3U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                     >> 2U))) 
                                                                & (1U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
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
                                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                    >> 2U))) 
                                                               & (5U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                      >> 0xeU))))))) 
                                           & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h)))) 
                                       | ((- (QData)((IData)(
                                                             ((3U 
                                                               == 
                                                               (0x7fU 
                                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                   >> 2U))) 
                                                              & (2U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
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
                                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                  >> 2U))) 
                                                             & (6U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                    >> 0xeU))))))) 
                                         & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w)))) 
                                     | ((- (QData)((IData)(
                                                           ((3U 
                                                             == 
                                                             (0x7fU 
                                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                 >> 2U))) 
                                                            & (3U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                   >> 0xeU))))))) 
                                        & vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))),64);
        tracep->fullQData(oldp+368,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base),64);
        tracep->fullBit(oldp+370,((1U & ((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                         | (~ (IData)(vlSelf->sram_data_valid))))));
        tracep->fullIData(oldp+371,(0x60U),32);
        tracep->fullIData(oldp+372,(0U),32);
        tracep->fullIData(oldp+373,(0x13bU),32);
        tracep->fullBit(oldp+374,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+375,(0xe2U),32);
        tracep->fullIData(oldp+376,(0x121U),32);
    }
}
