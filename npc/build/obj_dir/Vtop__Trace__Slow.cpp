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
        tracep->declBit(c+357,"clk", false,-1);
        tracep->declBit(c+358,"rst_n", false,-1);
        tracep->declQuad(c+359,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+361,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+363,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+364,"regA0", false,-1, 63,0);
        tracep->declBit(c+366,"stall_n_diff", false,-1);
        tracep->declQuad(c+367,"sram_rdata", false,-1, 63,0);
        tracep->declBit(c+369,"sram_data_valid", false,-1);
        tracep->declQuad(c+370,"sram_addr", false,-1, 63,0);
        tracep->declBit(c+372,"sram_ren", false,-1);
        tracep->declBit(c+373,"sram_addr_valid", false,-1);
        tracep->declBit(c+374,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+375,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+376,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+378,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+379,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+380,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+381,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+382,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+383,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+384,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+385,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+386,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+387,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+388,"axi_r_ready_o", false,-1);
        tracep->declBit(c+389,"axi_r_valid_i", false,-1);
        tracep->declBus(c+390,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+391,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+393,"axi_r_last_i", false,-1);
        tracep->declBus(c+394,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+395,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+396,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+397,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+398,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+400,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+401,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+402,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+403,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+404,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+405,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+406,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+407,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+408,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+409,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+410,"axi_w_ready_i", false,-1);
        tracep->declBit(c+411,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+412,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+414,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+415,"axi_w_last_o", false,-1);
        tracep->declBus(c+416,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+417,"axi_b_ready_o", false,-1);
        tracep->declBit(c+418,"axi_b_valid_i", false,-1);
        tracep->declBus(c+419,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+420,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+421,"axi_b_user_i", false,-1, 0,0);
        tracep->declBus(c+439,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+439,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+439,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+439,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+440,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+441,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+442,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+357,"top clk", false,-1);
        tracep->declBit(c+358,"top rst_n", false,-1);
        tracep->declQuad(c+359,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+361,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+363,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+364,"top regA0", false,-1, 63,0);
        tracep->declBit(c+366,"top stall_n_diff", false,-1);
        tracep->declQuad(c+367,"top sram_rdata", false,-1, 63,0);
        tracep->declBit(c+369,"top sram_data_valid", false,-1);
        tracep->declQuad(c+370,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+372,"top sram_ren", false,-1);
        tracep->declBit(c+373,"top sram_addr_valid", false,-1);
        tracep->declBit(c+374,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+375,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+376,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+378,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+379,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+380,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+381,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+382,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+383,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+384,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+385,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+386,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+387,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+388,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+389,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+390,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+391,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+393,"top axi_r_last_i", false,-1);
        tracep->declBus(c+394,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+395,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+396,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+397,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+398,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+400,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+401,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+402,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+403,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+404,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+405,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+406,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+407,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+408,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+409,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+410,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+411,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+412,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+414,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+415,"top axi_w_last_o", false,-1);
        tracep->declBus(c+416,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+417,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+418,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+419,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+420,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+421,"top axi_b_user_i", false,-1, 0,0);
        tracep->declQuad(c+443,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+19,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+21,"top is_jump", false,-1);
        tracep->declQuad(c+22,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+422,"top pc_stall_n", false,-1);
        tracep->declBit(c+422,"top if_stall_n", false,-1);
        tracep->declBit(c+369,"top if_instr_valid", false,-1);
        tracep->declBus(c+423,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+24,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+26,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+279,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+281,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+27,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+29,"top src1sel_id", false,-1);
        tracep->declBus(c+30,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+31,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+32,"top is_brc_id", false,-1);
        tracep->declBit(c+33,"top is_jal_id", false,-1);
        tracep->declBit(c+34,"top is_jalr_id", false,-1);
        tracep->declBit(c+35,"top wben_id", false,-1);
        tracep->declBus(c+36,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+37,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+422,"top id_stall_n", false,-1);
        tracep->declBit(c+38,"top DivEn_id", false,-1);
        tracep->declBus(c+39,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+40,"top in_trap_id", false,-1);
        tracep->declBit(c+41,"top out_trap_id", false,-1);
        tracep->declBit(c+42,"top trap_id", false,-1);
        tracep->declBit(c+43,"top ld_use_hazard", false,-1);
        tracep->declBit(c+44,"top id_flush", false,-1);
        tracep->declQuad(c+45,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+47,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+48,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+50,"top src1sel_ex", false,-1);
        tracep->declBus(c+51,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+52,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+54,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+56,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+58,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+60,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+61,"top is_brc_ex", false,-1);
        tracep->declBit(c+62,"top is_jal_ex", false,-1);
        tracep->declBit(c+63,"top is_jalr_ex", false,-1);
        tracep->declBit(c+64,"top wben_ex", false,-1);
        tracep->declBit(c+65,"top DivEn_ex", false,-1);
        tracep->declBus(c+66,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+67,"top trap_ex", false,-1);
        tracep->declBit(c+424,"top ex_stall_n", false,-1);
        tracep->declQuad(c+1,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+68,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+69,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+70,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+71,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+72,"top ex_flush", false,-1);
        tracep->declQuad(c+73,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+75,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+77,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+79,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+80,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+82,"top wben_ls", false,-1);
        tracep->declQuad(c+83,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+3,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+5,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+85,"top trap_ls", false,-1);
        tracep->declBit(c+424,"top ls_stall_n", false,-1);
        tracep->declBit(c+86,"top ls_not_ok", false,-1);
        tracep->declQuad(c+77,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+87,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+88,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+89,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+91,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+425,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+426,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+92,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+94,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declQuad(c+95,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+97,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+99,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+101,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+102,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+104,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+105,"top wben_wb", false,-1);
        tracep->declQuad(c+106,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+427,"top wb_stall_n", false,-1);
        tracep->declBit(c+357,"top IF_u clk", false,-1);
        tracep->declBit(c+358,"top IF_u rst_n", false,-1);
        tracep->declBit(c+21,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+22,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+3,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+5,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+40,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+41,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+422,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+19,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+423,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+369,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+367,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+369,"top IF_u sram_data_valid", false,-1);
        tracep->declQuad(c+370,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+372,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+373,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+428,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+357,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+358,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+19,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+423,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+422,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+44,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+24,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+26,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+108,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+430,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+445,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+446,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+357,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+358,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+422,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+431,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+110,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+357,"top ID_u clk", false,-1);
        tracep->declBit(c+358,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+24,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+95,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+101,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+26,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+102,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+104,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+105,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+281,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+279,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+27,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+29,"top ID_u src1sel", false,-1);
        tracep->declBus(c+30,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+31,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+34,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+33,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+32,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+35,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+36,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+37,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+364,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+38,"top ID_u DivEn", false,-1);
        tracep->declBus(c+39,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+42,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+40,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+41,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+113,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+27,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+281,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+279,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+24,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+26,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+36,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+37,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+113,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+29,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+30,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+31,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+34,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+33,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+32,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+35,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+38,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+39,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+42,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+40,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+41,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+114,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+115,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+116,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+117,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+113,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+27,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+357,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+95,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+101,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+36,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+281,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+37,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+279,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+104,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+102,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+105,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+364,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+293+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+26,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+47,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+43,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+357,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+358,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+424,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+72,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+24,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+26,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+27,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+279,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+281,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+31,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+34,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+33,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+32,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+29,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+30,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+35,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+36,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+37,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+38,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+39,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+42,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+45,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+47,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+52,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+54,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+56,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+60,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+63,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+62,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+61,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+50,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+51,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+64,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+70,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+71,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+65,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+66,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+67,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+118,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+120,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+121,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+122,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+123,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+124,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+125,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+447,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+446,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+357,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+358,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+424,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+283,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+126,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+60,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+54,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+52,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+56,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+45,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+47,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+63,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+62,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+61,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+50,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+51,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+68,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+69,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+77,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+102,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+1,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+65,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+66,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+48,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+58,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+21,"top ex_stage_u is_jump_o", false,-1);
        tracep->declQuad(c+136,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+138,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+140,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+58,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+60,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+136,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+138,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+65,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+66,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+48,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+142,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+143,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+144,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+146,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+147,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+149,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+151,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+151,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+152,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+153,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+154,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+156,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+157,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+158,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+160,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+162,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+164,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+136,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+147,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+146,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+149,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+156,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+143,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+157,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+166,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+153,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+151,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+152,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+146,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+151,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+167,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+136,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+168,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+152,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+151,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+154,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+169,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+171,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+173,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+175,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+177,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+179,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+181,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+136,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+138,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+66,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+164,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+140,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+58,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+63,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+62,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+61,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+183,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+56,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+45,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+22,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+21,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+184,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+186,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+448,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+188,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+189,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+190,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+191,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+193,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+195,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+357,"top forwarding_u clk", false,-1);
        tracep->declBit(c+358,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+70,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+71,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+196,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+104,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+82,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+105,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+102,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+427,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+68,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+69,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+1,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+1,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+7,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+8,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+197,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+198,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+434,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+199,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+200,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+435,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+357,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+358,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+45,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+58,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+47,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+48,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+64,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+67,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+424,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+73,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+75,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+79,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+77,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+82,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+85,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+449,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+446,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+357,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+358,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+424,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+201,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+209,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+357,"top ls_u clk", false,-1);
        tracep->declBit(c+358,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+73,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+77,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+75,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+79,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+97,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+101,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+99,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+85,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+80,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+83,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+3,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+5,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+86,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+77,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+87,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+88,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+89,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+91,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+94,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBit(c+425,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+426,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+92,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+88,"top ls_u wren", false,-1);
        tracep->declBit(c+87,"top ls_u rden", false,-1);
        tracep->declBus(c+217,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+89,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+218,"top ls_u wren_last", false,-1);
        tracep->declBit(c+357,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+358,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+88,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+87,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+217,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+89,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+77,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+73,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+97,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+218,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+80,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+86,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+77,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+87,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+88,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+89,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+91,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+94,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBit(c+425,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+426,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+92,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+92,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+219,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+220,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+221,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+222,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+223,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+224,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+225,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+226,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+227,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+228,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+94,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+91,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+229,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+230,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+231,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+232,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+79,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+101,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+75,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+99,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+88,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+87,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+217,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+89,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+233,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+357,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+358,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+73,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+79,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+77,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+85,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+83,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+3,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+5,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+234,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+235,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+236,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+237,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+238,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+239,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+240,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+241,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+242,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+77,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+243,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+245,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+247,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+5,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+3,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+9,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+249,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+11,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBus(c+439,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+439,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+439,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+439,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+440,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+441,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+442,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+357,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+358,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+88,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+87,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+426,"top axi_ls_u wr_ok_o", false,-1);
        tracep->declBit(c+425,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+92,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+89,"top axi_ls_u rw_w_data_i", false,-1, 63,0);
        tracep->declBus(c+91,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+77,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+94,"top axi_ls_u wr_size_i", false,-1, 2,0);
        tracep->declBit(c+396,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+397,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+398,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+400,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+401,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+402,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+403,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+404,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+405,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+406,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+407,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+408,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+409,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+410,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+411,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+412,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+414,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+415,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+416,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+417,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+418,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+419,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+420,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+421,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+374,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+375,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+376,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+378,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+379,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+380,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+381,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+382,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+383,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+384,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+385,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+386,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+387,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+388,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+389,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+390,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+391,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+393,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+394,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+395,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+450,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+451,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+452,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+453,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+251,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+436,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+252,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+253,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+437,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+13,"top axi_ls_u trans_ok", false,-1);
        tracep->declBus(c+450,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+451,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+452,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+453,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+254,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+438,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+255,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+256,"top axi_ls_u r_ready", false,-1);
        tracep->declBit(c+454,"top axi_ls_u instr_valid", false,-1);
        tracep->declQuad(c+14,"top axi_ls_u addr_reg", false,-1, 63,0);
        tracep->declBit(c+16,"top axi_ls_u instr_valid_reg", false,-1);
        tracep->declQuad(c+17,"top axi_ls_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+455,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+456,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+457,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+458,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+459,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declQuad(c+257,"top axi_ls_u shift", false,-1, 63,0);
        tracep->declBit(c+357,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+358,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+73,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+79,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+77,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+80,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+82,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+83,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+427,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+95,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+101,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+97,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+99,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+105,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+106,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+460,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+446,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+357,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+358,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+427,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+259,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+269,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+95,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+101,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+97,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+99,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+106,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+104,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+102,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+357,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+358,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+43,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+21,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+40,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+41,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+369,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+86,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+422,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+422,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+422,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+424,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+424,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+427,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+44,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+72,"top pipline_ctrl_u ex_flush", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp54;
    VlWide<3>/*95:0*/ __Vtemp55;
    VlWide<3>/*95:0*/ __Vtemp56;
    VlWide<3>/*95:0*/ __Vtemp57;
    VlWide<3>/*95:0*/ __Vtemp58;
    VlWide<3>/*95:0*/ __Vtemp61;
    VlWide<3>/*95:0*/ __Vtemp62;
    VlWide<3>/*95:0*/ __Vtemp63;
    VlWide<3>/*95:0*/ __Vtemp64;
    VlWide<3>/*95:0*/ __Vtemp65;
    VlWide<8>/*255:0*/ __Vtemp70;
    VlWide<10>/*319:0*/ __Vtemp75;
    VlWide<3>/*95:0*/ __Vtemp76;
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
        tracep->fullBit(oldp+13,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullQData(oldp+14,(vlSelf->top__DOT__axi_ls_u__DOT__addr_reg),64);
        tracep->fullBit(oldp+16,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid_reg));
        tracep->fullQData(oldp+17,(vlSelf->top__DOT__axi_ls_u__DOT__rd_data_reg),64);
        tracep->fullQData(oldp+19,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+21,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+22,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullQData(oldp+24,((((QData)((IData)(
                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+26,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+27,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+29,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+31,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+32,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+33,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+34,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+35,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+36,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+37,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+38,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+39,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+41,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+42,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+43,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+44,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+45,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullIData(oldp+47,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                     << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1bU))),32);
        tracep->fullQData(oldp+48,(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                     ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                     : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)),64);
        tracep->fullBit(oldp+50,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x12U))));
        tracep->fullCData(oldp+51,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                          >> 0x10U))),2);
        tracep->fullQData(oldp+52,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullQData(oldp+54,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullQData(oldp+56,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+60,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),5);
        tracep->fullBit(oldp+61,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x13U))));
        tracep->fullBit(oldp+62,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x14U))));
        tracep->fullBit(oldp+63,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x15U))));
        tracep->fullBit(oldp+64,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0xfU))));
        tracep->fullBit(oldp+65,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 4U))));
        tracep->fullCData(oldp+66,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                          >> 1U))),3);
        tracep->fullBit(oldp+67,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullCData(oldp+68,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+69,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+70,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0xaU))),5);
        tracep->fullCData(oldp+71,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 5U))),5);
        tracep->fullBit(oldp+72,(vlSelf->top__DOT__ex_flush));
        tracep->fullQData(oldp+73,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                     >> 2U)))),64);
        tracep->fullQData(oldp+75,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                     >> 2U)))),64);
        tracep->fullQData(oldp+77,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                     >> 2U)))),64);
        tracep->fullIData(oldp+79,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                     << 0x1eU) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 2U))),32);
        tracep->fullQData(oldp+80,(((((((((- (QData)((IData)(
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
                                       & vlSelf->top__DOT__ls_sram_rd_data))),64);
        tracep->fullBit(oldp+82,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                        >> 1U))));
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullBit(oldp+85,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullBit(oldp+86,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullBit(oldp+87,((3U == (0x7fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 2U)))));
        tracep->fullBit(oldp+88,((8U == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 4U)))));
        tracep->fullQData(oldp+89,((((0U == (0x1fU 
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
        tracep->fullCData(oldp+91,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullCData(oldp+94,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullQData(oldp+95,((((QData)((IData)(
                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                     >> 1U)))),64);
        tracep->fullQData(oldp+97,((((QData)((IData)(
                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                     >> 1U)))),64);
        tracep->fullQData(oldp+99,((((QData)((IData)(
                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                     >> 1U)))),64);
        tracep->fullIData(oldp+101,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+104,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+105,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+106,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullQData(oldp+108,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullWData(oldp+110,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+113,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+114,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+115,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+116,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+117,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+118,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+120,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+121,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+122,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+123,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+124,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+125,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+126,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullQData(oldp+136,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+138,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp54, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp55, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp56, __Vtemp54, __Vtemp55);
        VL_EXTEND_WI(65,1, __Vtemp57, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp58, __Vtemp56, __Vtemp57);
        tracep->fullBit(oldp+142,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp58[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+143,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+144,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+146,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+151,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+152,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+153,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+154,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp61, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp62, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp63, __Vtemp61, __Vtemp62);
        VL_EXTEND_WI(65,1, __Vtemp64, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp65, __Vtemp63, __Vtemp64);
        tracep->fullBit(oldp+156,((1U & __Vtemp65[2U])));
        tracep->fullBit(oldp+157,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+158,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+160,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+162,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+164,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+166,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+167,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+168,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+169,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+171,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+173,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+175,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+177,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+179,(((0x4000000U & 
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
        tracep->fullQData(oldp+181,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+183,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+184,(((((QData)((IData)(
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
        tracep->fullQData(oldp+186,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+188,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+189,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+190,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+191,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+193,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+195,((1U & ((0x200U & 
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
        tracep->fullCData(oldp+196,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 9U))),5);
        tracep->fullBit(oldp+197,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+198,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+199,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+200,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        __Vtemp70[0U] = (((IData)(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        __Vtemp70[1U] = (((IData)(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        __Vtemp70[2U] = (((IData)((((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        __Vtemp70[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                          >> 0x1eU) | ((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                >> 0x20U)) 
                                       << 2U));
        __Vtemp70[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                   >> 0x20U)) >> 0x1eU) 
                         | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                             << 7U) | (0x7cU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x19U))));
        __Vtemp70[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                               << 7U) 
                                              | (0x7cU 
                                                 & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    >> 0x19U))));
        __Vtemp70[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                               << 7U) 
                                              | (0x7cU 
                                                 & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                    >> 0x19U))));
        __Vtemp70[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                               >> 0x19U));
        tracep->fullWData(oldp+201,(__Vtemp70),226);
        tracep->fullWData(oldp+209,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullCData(oldp+217,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xeU))),3);
        tracep->fullBit(oldp+218,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullBit(oldp+219,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+220,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+221,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+222,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (5U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+223,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+224,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (6U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+225,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullCData(oldp+226,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+227,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+228,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+229,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+230,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+231,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+232,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+233,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+234,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+235,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+236,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+237,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U)))));
        tracep->fullBit(oldp+238,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+239,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+240,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+241,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+242,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+243,(((((QData)((IData)(
                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                        >> 2U))) | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+245,(((~ (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U)))) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+247,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+249,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullCData(oldp+251,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullBit(oldp+252,(vlSelf->top__DOT__axi_ls_u__DOT__aw_valid));
        tracep->fullBit(oldp+253,(vlSelf->top__DOT__axi_ls_u__DOT__w_valid));
        tracep->fullCData(oldp+254,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullBit(oldp+255,(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid));
        tracep->fullBit(oldp+256,(vlSelf->top__DOT__axi_ls_u__DOT__r_ready));
        tracep->fullQData(oldp+257,(((QData)((IData)(
                                                     (7U 
                                                      & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                         >> 2U)))) 
                                     << 3U)),64);
        tracep->fullWData(oldp+259,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullWData(oldp+269,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullQData(oldp+279,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+281,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
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
        tracep->fullWData(oldp+283,(__Vtemp75),315);
        tracep->fullQData(oldp+293,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+295,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+297,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+299,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+301,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+303,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+305,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+307,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+309,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+311,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+313,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+315,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+317,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+319,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+321,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+323,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+325,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+327,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+329,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+331,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+333,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+335,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+337,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+339,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+341,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+343,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+345,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+347,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+349,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+351,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+353,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+355,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+357,(vlSelf->clk));
        tracep->fullBit(oldp+358,(vlSelf->rst_n));
        tracep->fullQData(oldp+359,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+361,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+363,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+364,(vlSelf->regA0),64);
        tracep->fullBit(oldp+366,(vlSelf->stall_n_diff));
        tracep->fullQData(oldp+367,(vlSelf->sram_rdata),64);
        tracep->fullBit(oldp+369,(vlSelf->sram_data_valid));
        tracep->fullQData(oldp+370,(vlSelf->sram_addr),64);
        tracep->fullBit(oldp+372,(vlSelf->sram_ren));
        tracep->fullBit(oldp+373,(vlSelf->sram_addr_valid));
        tracep->fullBit(oldp+374,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+375,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+376,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+378,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+379,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+380,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+381,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+382,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+383,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+384,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+385,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+386,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+387,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+388,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+389,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+390,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+391,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+393,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+394,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+395,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+396,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+397,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+398,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+400,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+401,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+402,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+403,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+404,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+405,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+406,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+407,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+408,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+409,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+410,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+411,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+412,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+414,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+415,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+416,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+417,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+418,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+419,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+420,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+421,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+422,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                             | (~ (IData)(vlSelf->sram_data_valid))) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullIData(oldp+423,(((1U & (IData)(
                                                   (vlSelf->sram_addr 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->sram_rdata))),32);
        tracep->fullBit(oldp+424,((1U & (~ ((~ (IData)(vlSelf->sram_data_valid)) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullBit(oldp+425,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state) 
                                    >> 1U) & ((~ (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state)) 
                                              & (((((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                    << 0x3eU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                       << 0x1eU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                         >> 2U))) 
                                                  == vlSelf->top__DOT__axi_ls_u__DOT__addr_reg) 
                                                 & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid_reg))))));
        tracep->fullBit(oldp+426,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state) 
                                    >> 1U) & ((~ (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
                                              & (((((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                    << 0x3eU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                       << 0x1eU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                         >> 2U))) 
                                                  == vlSelf->top__DOT__axi_ls_u__DOT__addr_reg) 
                                                 & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok))))));
        tracep->fullBit(oldp+427,(vlSelf->top__DOT__wb_stall_n));
        tracep->fullQData(oldp+428,(((IData)(vlSelf->top__DOT__is_jump)
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
        tracep->fullIData(oldp+430,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->sram_addr 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->sram_rdata)))),32);
        __Vtemp76[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                          ? 0U : ((1U & (IData)((vlSelf->sram_addr 
                                                 >> 2U)))
                                   ? (IData)((vlSelf->sram_rdata 
                                              >> 0x20U))
                                   : (IData)(vlSelf->sram_rdata)));
        __Vtemp76[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                  ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp76[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new) 
                                 >> 0x20U));
        tracep->fullWData(oldp+431,(__Vtemp76),96);
        tracep->fullBit(oldp+434,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+435,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullCData(oldp+436,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
                                      ? ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
                                          ? ((IData)(vlSelf->axi_w_ready_i)
                                              ? 2U : 3U)
                                          : ((8U == 
                                              (0x1fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 4U)))
                                              ? (((
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                     << 0x3eU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                        << 0x1eU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                          >> 2U))) 
                                                   != vlSelf->top__DOT__axi_ls_u__DOT__addr_reg) 
                                                  & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok))
                                                  ? 1U
                                                  : 2U)
                                              : 0U))
                                      : ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
                                          ? ((IData)(vlSelf->axi_aw_ready_i)
                                              ? 3U : 1U)
                                          : ((8U == 
                                              (0x1fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 4U)))
                                              ? 1U : 0U)))),2);
        tracep->fullBit(oldp+437,(vlSelf->top__DOT__axi_ls_u__DOT__b_ready));
        tracep->fullCData(oldp+438,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
                                      ? ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
                                          ? ((IData)(vlSelf->axi_r_valid_i)
                                              ? 2U : 3U)
                                          : ((3U == 
                                              (0x7fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 2U)))
                                              ? (((
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                    << 0x3eU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                       << 0x1eU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                         >> 2U))) 
                                                  != vlSelf->top__DOT__axi_ls_u__DOT__addr_reg)
                                                  ? 1U
                                                  : 2U)
                                              : 0U))
                                      : ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
                                          ? ((IData)(vlSelf->axi_ar_ready_i)
                                              ? 3U : 1U)
                                          : ((3U == 
                                              (0x7fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 2U)))
                                              ? 1U : 0U)))),2);
        tracep->fullIData(oldp+439,(0x40U),32);
        tracep->fullIData(oldp+440,(4U),32);
        tracep->fullIData(oldp+441,(8U),32);
        tracep->fullIData(oldp+442,(1U),32);
        tracep->fullQData(oldp+443,(vlSelf->top__DOT__pc_next),64);
        tracep->fullIData(oldp+445,(0x60U),32);
        tracep->fullIData(oldp+446,(0U),32);
        tracep->fullIData(oldp+447,(0x13bU),32);
        tracep->fullBit(oldp+448,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+449,(0xe2U),32);
        tracep->fullCData(oldp+450,(0U),2);
        tracep->fullCData(oldp+451,(1U),2);
        tracep->fullCData(oldp+452,(3U),2);
        tracep->fullCData(oldp+453,(2U),2);
        tracep->fullBit(oldp+454,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid));
        tracep->fullIData(oldp+455,(3U),32);
        tracep->fullCData(oldp+456,(1U),4);
        tracep->fullBit(oldp+457,(0U));
        tracep->fullCData(oldp+458,(0U),8);
        tracep->fullCData(oldp+459,(3U),3);
        tracep->fullIData(oldp+460,(0x121U),32);
    }
}
