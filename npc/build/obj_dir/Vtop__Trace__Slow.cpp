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
        tracep->declBit(c+339,"clk", false,-1);
        tracep->declBit(c+340,"rst_n", false,-1);
        tracep->declQuad(c+341,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+343,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+345,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+346,"regA0", false,-1, 63,0);
        tracep->declBit(c+348,"stall_n_diff", false,-1);
        tracep->declQuad(c+349,"sram_rdata", false,-1, 63,0);
        tracep->declBit(c+351,"sram_data_valid", false,-1);
        tracep->declQuad(c+352,"sram_addr", false,-1, 63,0);
        tracep->declBit(c+354,"sram_ren", false,-1);
        tracep->declBit(c+355,"sram_addr_valid", false,-1);
        tracep->declBit(c+339,"top clk", false,-1);
        tracep->declBit(c+340,"top rst_n", false,-1);
        tracep->declQuad(c+341,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+343,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+345,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+346,"top regA0", false,-1, 63,0);
        tracep->declBit(c+348,"top stall_n_diff", false,-1);
        tracep->declQuad(c+349,"top sram_rdata", false,-1, 63,0);
        tracep->declBit(c+351,"top sram_data_valid", false,-1);
        tracep->declQuad(c+352,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+354,"top sram_ren", false,-1);
        tracep->declBit(c+355,"top sram_addr_valid", false,-1);
        tracep->declQuad(c+371,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+13,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+15,"top is_jump", false,-1);
        tracep->declQuad(c+16,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+356,"top pc_stall_n", false,-1);
        tracep->declBit(c+356,"top if_stall_n", false,-1);
        tracep->declBit(c+351,"top if_instr_valid", false,-1);
        tracep->declBus(c+357,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+18,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+20,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+248,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+250,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+21,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+23,"top src1sel_id", false,-1);
        tracep->declBus(c+24,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+25,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+26,"top is_brc_id", false,-1);
        tracep->declBit(c+27,"top is_jal_id", false,-1);
        tracep->declBit(c+28,"top is_jalr_id", false,-1);
        tracep->declBit(c+29,"top wben_id", false,-1);
        tracep->declBus(c+30,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+31,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+356,"top id_stall_n", false,-1);
        tracep->declBit(c+32,"top DivEn_id", false,-1);
        tracep->declBus(c+33,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+34,"top in_trap_id", false,-1);
        tracep->declBit(c+35,"top out_trap_id", false,-1);
        tracep->declBit(c+36,"top trap_id", false,-1);
        tracep->declBit(c+37,"top ld_use_hazard", false,-1);
        tracep->declBit(c+38,"top id_flush", false,-1);
        tracep->declQuad(c+39,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+41,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+42,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+44,"top src1sel_ex", false,-1);
        tracep->declBus(c+45,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+46,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+48,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+50,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+52,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+54,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+55,"top is_brc_ex", false,-1);
        tracep->declBit(c+56,"top is_jal_ex", false,-1);
        tracep->declBit(c+57,"top is_jalr_ex", false,-1);
        tracep->declBit(c+58,"top wben_ex", false,-1);
        tracep->declBit(c+59,"top DivEn_ex", false,-1);
        tracep->declBus(c+60,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+61,"top trap_ex", false,-1);
        tracep->declBit(c+351,"top ex_stall_n", false,-1);
        tracep->declQuad(c+1,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+62,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+63,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+64,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+65,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+66,"top ex_flush", false,-1);
        tracep->declQuad(c+67,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+69,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+71,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+73,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+358,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+74,"top wben_ls", false,-1);
        tracep->declQuad(c+75,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+3,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+5,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+77,"top trap_ls", false,-1);
        tracep->declBit(c+351,"top ls_stall_n", false,-1);
        tracep->declQuad(c+78,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+80,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+82,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+84,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+85,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+87,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+88,"top wben_wb", false,-1);
        tracep->declQuad(c+89,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+351,"top wb_stall_n", false,-1);
        tracep->declBit(c+339,"top IF_u clk", false,-1);
        tracep->declBit(c+340,"top IF_u rst_n", false,-1);
        tracep->declBit(c+15,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+16,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+3,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+5,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+34,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+35,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+356,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+13,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+357,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+351,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+349,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+351,"top IF_u sram_data_valid", false,-1);
        tracep->declQuad(c+352,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+354,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+355,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+360,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+339,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+340,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+13,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+357,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+356,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+38,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+18,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+20,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+91,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+362,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+373,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+374,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+339,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+340,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+356,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+363,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+93,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+339,"top ID_u clk", false,-1);
        tracep->declBit(c+340,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+18,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+78,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+84,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+20,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+85,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+87,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+88,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+250,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+248,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+21,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+23,"top ID_u src1sel", false,-1);
        tracep->declBus(c+24,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+25,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+28,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+27,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+26,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+29,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+30,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+31,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+346,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+32,"top ID_u DivEn", false,-1);
        tracep->declBus(c+33,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+36,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+34,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+35,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+96,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+21,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+250,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+248,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+18,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+20,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+30,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+31,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+96,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+23,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+24,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+25,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+28,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+27,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+26,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+29,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+32,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+33,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+36,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+34,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+35,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+97,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+98,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+99,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+100,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+96,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+21,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+339,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+78,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+84,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+30,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+250,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+31,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+248,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+87,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+85,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+88,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+346,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+275+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+20,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+41,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+37,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+339,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+340,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+351,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+66,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+18,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+20,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+21,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+248,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+250,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+25,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+28,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+27,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+26,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+23,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+24,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+29,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+30,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+31,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+32,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+33,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+36,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+39,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+41,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+46,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+48,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+50,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+54,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+57,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+56,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+55,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+44,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+45,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+58,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+64,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+65,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+59,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+60,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+61,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+101,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+103,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+104,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+105,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+106,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+107,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+108,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+375,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+374,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+339,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+340,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+351,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+252,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+109,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+54,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+48,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+46,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+50,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+39,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+41,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+57,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+56,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+55,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+44,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+45,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+62,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+63,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+71,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+85,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+1,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+59,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+60,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+42,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+16,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+52,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+15,"top ex_stage_u is_jump_o", false,-1);
        tracep->declQuad(c+119,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+121,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+123,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+52,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+54,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+119,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+121,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+59,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+60,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+42,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+125,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+126,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+127,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+129,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+130,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+132,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+134,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+134,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+135,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+136,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+137,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+139,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+140,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+141,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+143,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+145,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+147,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+119,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+130,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+129,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+132,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+139,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+126,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+140,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+149,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+136,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+134,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+135,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+129,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+134,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+150,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+119,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+151,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+135,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+134,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+137,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+152,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+154,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+156,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+158,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+160,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+162,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+164,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+119,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+121,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+60,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+147,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+123,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+52,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+57,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+56,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+55,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+166,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+50,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+39,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+16,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+15,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+167,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+169,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+376,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+171,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+172,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+173,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+174,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+176,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+178,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+339,"top forwarding_u clk", false,-1);
        tracep->declBit(c+340,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+64,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+65,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+179,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+87,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+74,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+88,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+85,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+351,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+62,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+63,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+1,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+1,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+7,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+8,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+180,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+181,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+366,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+182,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+183,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+367,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+339,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+340,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+39,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+52,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+41,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+42,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+58,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+61,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+351,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+67,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+69,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+73,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+71,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+74,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+77,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+377,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+374,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+339,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+340,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+351,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+184,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+192,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+339,"top ls_u clk", false,-1);
        tracep->declBit(c+340,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+67,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+71,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+69,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+73,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+80,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+84,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+82,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+77,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+358,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+75,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+3,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+5,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+200,"top ls_u wren", false,-1);
        tracep->declBit(c+201,"top ls_u rden", false,-1);
        tracep->declBus(c+202,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+203,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+205,"top ls_u wren_last", false,-1);
        tracep->declBit(c+339,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+340,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+200,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+201,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+202,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+203,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+71,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+67,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+80,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+205,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+358,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+368,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declQuad(c+206,"top ls_u lsu_u dpi_addr", false,-1, 63,0);
        tracep->declBit(c+208,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+209,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+210,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+211,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+212,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+213,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+214,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+262,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+263,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+264,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+215,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+216,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+217,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+218,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+219,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+73,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+84,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+69,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+82,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+200,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+201,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+202,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+203,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+220,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+339,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+340,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+67,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+73,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+71,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+77,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+75,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+3,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+5,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+221,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+222,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+223,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+224,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+225,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+226,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+227,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+228,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+229,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+71,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+230,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+232,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+234,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+5,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+3,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+9,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+236,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+11,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBit(c+339,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+340,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+67,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+73,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+71,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+358,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+74,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+75,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+351,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+78,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+84,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+80,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+82,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+88,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+89,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+378,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+374,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+339,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+340,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+351,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+265,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+238,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+78,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+84,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+80,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+82,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+89,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+87,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+85,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+339,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+340,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+37,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+15,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+34,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+35,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+351,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+356,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+356,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+356,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+351,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+351,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+351,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+38,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+66,"top pipline_ctrl_u ex_flush", false,-1);
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
    VlWide<10>/*319:0*/ __Vtemp74;
    VlWide<3>/*95:0*/ __Vtemp75;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+7,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+11,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullQData(oldp+13,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+15,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+16,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullQData(oldp+18,((((QData)((IData)(
                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+20,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+23,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+24,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+25,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+26,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+27,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+28,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+29,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+31,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+32,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+33,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+34,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+35,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+36,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+37,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+38,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+39,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullIData(oldp+41,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                     << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1bU))),32);
        tracep->fullQData(oldp+42,(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                     ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                     : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)),64);
        tracep->fullBit(oldp+44,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x12U))));
        tracep->fullCData(oldp+45,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                          >> 0x10U))),2);
        tracep->fullQData(oldp+46,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullQData(oldp+48,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullQData(oldp+50,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullQData(oldp+52,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+54,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),5);
        tracep->fullBit(oldp+55,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x13U))));
        tracep->fullBit(oldp+56,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x14U))));
        tracep->fullBit(oldp+57,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x15U))));
        tracep->fullBit(oldp+58,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0xfU))));
        tracep->fullBit(oldp+59,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 4U))));
        tracep->fullCData(oldp+60,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                          >> 1U))),3);
        tracep->fullBit(oldp+61,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullCData(oldp+62,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+63,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+64,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0xaU))),5);
        tracep->fullCData(oldp+65,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 5U))),5);
        tracep->fullBit(oldp+66,(vlSelf->top__DOT__ex_flush));
        tracep->fullQData(oldp+67,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                     >> 2U)))),64);
        tracep->fullQData(oldp+69,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                     >> 2U)))),64);
        tracep->fullQData(oldp+71,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                     >> 2U)))),64);
        tracep->fullIData(oldp+73,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                     << 0x1eU) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 2U))),32);
        tracep->fullBit(oldp+74,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                        >> 1U))));
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullBit(oldp+77,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullQData(oldp+78,((((QData)((IData)(
                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                     >> 1U)))),64);
        tracep->fullQData(oldp+80,((((QData)((IData)(
                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                     >> 1U)))),64);
        tracep->fullQData(oldp+82,((((QData)((IData)(
                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                     >> 1U)))),64);
        tracep->fullIData(oldp+84,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                     << 0x1fU) | (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                  >> 1U))),32);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+87,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                             >> 8U))),5);
        tracep->fullBit(oldp+88,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+89,((((QData)((IData)(
                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullQData(oldp+91,(((IData)(vlSelf->top__DOT__id_flush)
                                     ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullWData(oldp+93,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+96,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+97,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                             >> 2U))),5);
        tracep->fullCData(oldp+98,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+99,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                    >> 0x19U)),7);
        tracep->fullIData(oldp+100,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+101,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+103,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+104,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+105,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+106,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+107,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+108,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+109,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+123,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp53, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp54, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp55, __Vtemp53, __Vtemp54);
        VL_EXTEND_WI(65,1, __Vtemp56, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp57, __Vtemp55, __Vtemp56);
        tracep->fullBit(oldp+125,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp57[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+126,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+129,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+130,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+132,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+134,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+135,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+136,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp60, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp61, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp62, __Vtemp60, __Vtemp61);
        VL_EXTEND_WI(65,1, __Vtemp63, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp64, __Vtemp62, __Vtemp63);
        tracep->fullBit(oldp+139,((1U & __Vtemp64[2U])));
        tracep->fullBit(oldp+140,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+141,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+143,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+145,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+147,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+149,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+150,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+151,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+152,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+154,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+156,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+158,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+160,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+162,(((0x4000000U & 
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
        tracep->fullQData(oldp+164,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+166,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+167,(((((QData)((IData)(
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
        tracep->fullQData(oldp+169,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+171,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+172,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+173,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+174,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+176,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+178,((1U & ((0x200U & 
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
        tracep->fullCData(oldp+179,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 9U))),5);
        tracep->fullBit(oldp+180,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+181,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+182,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+183,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
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
        tracep->fullWData(oldp+184,(__Vtemp69),226);
        tracep->fullWData(oldp+192,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullBit(oldp+200,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))));
        tracep->fullBit(oldp+201,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U)))));
        tracep->fullCData(oldp+202,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xeU))),3);
        tracep->fullQData(oldp+203,((((0U == (0x1fU 
                                              & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 3U))) 
                                      & ((0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0x16U)) 
                                         == (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
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
        tracep->fullBit(oldp+205,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullQData(oldp+206,((0xfffffffffffffff8ULL 
                                     & (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                              >> 2U))))),64);
        tracep->fullBit(oldp+208,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+209,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+210,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+211,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (5U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+212,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+213,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (6U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+214,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullCData(oldp+215,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullBit(oldp+216,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+217,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+218,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+219,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+220,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+221,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+222,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+223,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+224,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U)))));
        tracep->fullBit(oldp+225,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+226,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+227,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+228,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+229,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+230,(((((QData)((IData)(
                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                        >> 2U))) | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+232,(((~ (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U)))) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+236,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullWData(oldp+238,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullQData(oldp+248,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+250,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp74[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
        __Vtemp74[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                          >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp74[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                   >> 0x20U)) >> 5U) 
                         | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])) 
                            << 0x1bU));
        __Vtemp74[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                    ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                   [vlSelf->top__DOT__rs1_idx_id])) 
                          >> 5U) | ((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                               ? 0ULL
                                               : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                              [vlSelf->top__DOT__rs1_idx_id]) 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp74[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id]) 
                                   >> 0x20U)) >> 5U) 
                         | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])) 
                            << 0x1bU));
        __Vtemp74[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                    ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                   [vlSelf->top__DOT__rs2_idx_id])) 
                          >> 5U) | ((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                               ? 0ULL
                                               : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                              [vlSelf->top__DOT__rs2_idx_id]) 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp74[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id]) 
                                   >> 0x20U)) >> 5U) 
                         | (((IData)(vlSelf->top__DOT__ex_flush)
                              ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                            << 0x1bU));
        __Vtemp74[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                            ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                          >> 5U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                              ? 0ULL
                                              : (((QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                    << 0x1bU));
        __Vtemp74[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
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
        __Vtemp74[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                    ? 0ULL : (((QData)((IData)(
                                                               vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                  >> 0x20U)) >> 5U);
        tracep->fullWData(oldp+252,(__Vtemp74),315);
        tracep->fullCData(oldp+262,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+263,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+264,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullWData(oldp+265,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullQData(oldp+275,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+277,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+279,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+281,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+283,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+285,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+287,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+289,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+291,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+293,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+295,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+297,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+299,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+301,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+303,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+305,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+307,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+309,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+311,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+313,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+315,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+317,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+319,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+321,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+323,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+325,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+327,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+329,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+331,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+333,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+335,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+337,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+339,(vlSelf->clk));
        tracep->fullBit(oldp+340,(vlSelf->rst_n));
        tracep->fullQData(oldp+341,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+343,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+345,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+346,(vlSelf->regA0),64);
        tracep->fullBit(oldp+348,(vlSelf->stall_n_diff));
        tracep->fullQData(oldp+349,(vlSelf->sram_rdata),64);
        tracep->fullBit(oldp+351,(vlSelf->sram_data_valid));
        tracep->fullQData(oldp+352,(vlSelf->sram_addr),64);
        tracep->fullBit(oldp+354,(vlSelf->sram_ren));
        tracep->fullBit(oldp+355,(vlSelf->sram_addr_valid));
        tracep->fullBit(oldp+356,((1U & (~ ((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                            | (~ (IData)(vlSelf->sram_data_valid)))))));
        tracep->fullIData(oldp+357,(((1U & (IData)(
                                                   (vlSelf->sram_addr 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->sram_rdata))),32);
        tracep->fullQData(oldp+358,(((((((((- (QData)((IData)(
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
        tracep->fullQData(oldp+360,(((IData)(vlSelf->top__DOT__is_jump)
                                      ? ((0x200000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
                                                      >> 0x1bU)))))
                                      : ((IData)(vlSelf->top__DOT__in_trap_id)
                                          ? vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec
                                          : ((IData)(vlSelf->top__DOT__out_trap_id)
                                              ? vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc
                                              : (4ULL 
                                                 + vlSelf->top__DOT__pc_new))))),64);
        tracep->fullIData(oldp+362,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->sram_addr 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->sram_rdata)))),32);
        __Vtemp75[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                          ? 0U : ((1U & (IData)((vlSelf->sram_addr 
                                                 >> 2U)))
                                   ? (IData)((vlSelf->sram_rdata 
                                              >> 0x20U))
                                   : (IData)(vlSelf->sram_rdata)));
        __Vtemp75[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                  ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp75[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new) 
                                 >> 0x20U));
        tracep->fullWData(oldp+363,(__Vtemp75),96);
        tracep->fullBit(oldp+366,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+367,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullQData(oldp+368,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base),64);
        tracep->fullBit(oldp+370,((1U & ((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                         | (~ (IData)(vlSelf->sram_data_valid))))));
        tracep->fullQData(oldp+371,(vlSelf->top__DOT__pc_next),64);
        tracep->fullIData(oldp+373,(0x60U),32);
        tracep->fullIData(oldp+374,(0U),32);
        tracep->fullIData(oldp+375,(0x13bU),32);
        tracep->fullBit(oldp+376,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+377,(0xe2U),32);
        tracep->fullIData(oldp+378,(0x121U),32);
    }
}
