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
        tracep->declBit(c+351,"clk", false,-1);
        tracep->declBit(c+352,"rst_n", false,-1);
        tracep->declQuad(c+353,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+355,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+357,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+358,"regA0", false,-1, 63,0);
        tracep->declBit(c+360,"stall_n_diff", false,-1);
        tracep->declQuad(c+361,"sram_rdata", false,-1, 63,0);
        tracep->declBit(c+363,"sram_data_valid", false,-1);
        tracep->declQuad(c+364,"sram_addr", false,-1, 63,0);
        tracep->declBit(c+366,"sram_ren", false,-1);
        tracep->declBit(c+367,"sram_addr_valid", false,-1);
        tracep->declBit(c+368,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+369,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+370,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+372,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+373,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+374,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+375,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+376,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+377,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+378,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+379,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+380,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+381,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+382,"axi_r_ready_o", false,-1);
        tracep->declBit(c+383,"axi_r_valid_i", false,-1);
        tracep->declBus(c+384,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+385,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+387,"axi_r_last_i", false,-1);
        tracep->declBus(c+388,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+389,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+390,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+391,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+392,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+394,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+395,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+396,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+397,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+398,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+399,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+400,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+401,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+402,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+403,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+404,"axi_w_ready_i", false,-1);
        tracep->declBit(c+405,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+406,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+408,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+409,"axi_w_last_o", false,-1);
        tracep->declBus(c+410,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+411,"axi_b_ready_o", false,-1);
        tracep->declBit(c+412,"axi_b_valid_i", false,-1);
        tracep->declBus(c+413,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+414,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+415,"axi_b_user_i", false,-1, 0,0);
        tracep->declBus(c+433,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+433,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+433,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+433,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+434,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+435,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+436,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+351,"top clk", false,-1);
        tracep->declBit(c+352,"top rst_n", false,-1);
        tracep->declQuad(c+353,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+355,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+357,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+358,"top regA0", false,-1, 63,0);
        tracep->declBit(c+360,"top stall_n_diff", false,-1);
        tracep->declQuad(c+361,"top sram_rdata", false,-1, 63,0);
        tracep->declBit(c+363,"top sram_data_valid", false,-1);
        tracep->declQuad(c+364,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+366,"top sram_ren", false,-1);
        tracep->declBit(c+367,"top sram_addr_valid", false,-1);
        tracep->declBit(c+368,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+369,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+370,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+372,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+373,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+374,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+375,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+376,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+377,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+378,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+379,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+380,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+381,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+382,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+383,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+384,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+385,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+387,"top axi_r_last_i", false,-1);
        tracep->declBus(c+388,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+389,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+390,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+391,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+392,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+394,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+395,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+396,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+397,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+398,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+399,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+400,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+401,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+402,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+403,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+404,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+405,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+406,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+408,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+409,"top axi_w_last_o", false,-1);
        tracep->declBus(c+410,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+411,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+412,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+413,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+414,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+415,"top axi_b_user_i", false,-1, 0,0);
        tracep->declQuad(c+437,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+19,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+21,"top is_jump", false,-1);
        tracep->declQuad(c+22,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+416,"top pc_stall_n", false,-1);
        tracep->declBit(c+416,"top if_stall_n", false,-1);
        tracep->declBit(c+363,"top if_instr_valid", false,-1);
        tracep->declBus(c+417,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+24,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+26,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+273,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+275,"top rs1_id", false,-1, 63,0);
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
        tracep->declBit(c+416,"top id_stall_n", false,-1);
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
        tracep->declBit(c+418,"top ex_stall_n", false,-1);
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
        tracep->declBit(c+418,"top ls_stall_n", false,-1);
        tracep->declBit(c+86,"top ls_not_ok", false,-1);
        tracep->declQuad(c+77,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+87,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+88,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+89,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+91,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+419,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+420,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+92,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+94,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+96,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+98,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+100,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+101,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+103,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+104,"top wben_wb", false,-1);
        tracep->declQuad(c+105,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+421,"top wb_stall_n", false,-1);
        tracep->declBit(c+351,"top IF_u clk", false,-1);
        tracep->declBit(c+352,"top IF_u rst_n", false,-1);
        tracep->declBit(c+21,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+22,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+3,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+5,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+40,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+41,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+416,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+19,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+417,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+363,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+361,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+363,"top IF_u sram_data_valid", false,-1);
        tracep->declQuad(c+364,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+366,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+367,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+422,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+351,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+352,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+19,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+417,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+416,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+44,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+24,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+26,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+107,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+424,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+439,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+440,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+351,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+352,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+416,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+425,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+109,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+351,"top ID_u clk", false,-1);
        tracep->declBit(c+352,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+24,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+94,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+100,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+26,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+101,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+103,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+104,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+275,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+273,"top ID_u rs2_o", false,-1, 63,0);
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
        tracep->declQuad(c+358,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+38,"top ID_u DivEn", false,-1);
        tracep->declBus(c+39,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+42,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+40,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+41,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+112,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+27,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+275,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+273,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+24,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+26,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+36,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+37,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+112,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
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
        tracep->declBus(c+113,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+114,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+115,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+116,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+112,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+27,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+351,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+94,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+100,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+36,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+275,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+37,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+273,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+103,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+101,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+104,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+358,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+287+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+26,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+47,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+43,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+351,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+352,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+418,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+72,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+24,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+26,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+27,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+273,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+275,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
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
        tracep->declQuad(c+117,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+119,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+120,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+121,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+122,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+123,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+124,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+441,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+440,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+351,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+352,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+418,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+277,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+125,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
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
        tracep->declQuad(c+101,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+1,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+65,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+66,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+48,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+58,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+21,"top ex_stage_u is_jump_o", false,-1);
        tracep->declQuad(c+135,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+137,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+139,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+58,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+60,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+135,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+137,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+65,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+66,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+48,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+141,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+142,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+143,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+145,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+146,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+148,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+150,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+150,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+151,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+152,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+153,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+155,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+156,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+157,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+159,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+161,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+163,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+135,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+146,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+145,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+148,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+155,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+142,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+156,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+165,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+152,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+150,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+151,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+145,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+150,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+166,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+135,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+167,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+151,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+150,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+153,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+168,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+170,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+172,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+174,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+176,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+178,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+180,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+135,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+137,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+66,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+163,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+139,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+58,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+63,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+62,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+61,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+182,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+56,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+45,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+22,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+21,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+183,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+185,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+442,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+187,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+188,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+189,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+190,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+192,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+194,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+351,"top forwarding_u clk", false,-1);
        tracep->declBit(c+352,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+70,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+71,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+195,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+103,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+82,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+104,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+101,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+421,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+68,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+69,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+1,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+1,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+7,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+8,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+196,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+197,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+428,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+198,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+199,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+429,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+351,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+352,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+45,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+58,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+47,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+48,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+64,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+67,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+418,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+73,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+75,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+79,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+77,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+82,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+85,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+443,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+440,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+351,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+352,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+418,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+200,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+208,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+351,"top ls_u clk", false,-1);
        tracep->declBit(c+352,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+73,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+77,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+75,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+79,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+96,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+100,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+98,"top ls_u wb_data_i", false,-1, 63,0);
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
        tracep->declBit(c+419,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+420,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+92,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+88,"top ls_u wren", false,-1);
        tracep->declBit(c+87,"top ls_u rden", false,-1);
        tracep->declBus(c+216,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+89,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+217,"top ls_u wren_last", false,-1);
        tracep->declBit(c+351,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+352,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+88,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+87,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+216,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+89,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+77,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+73,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+96,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+217,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+80,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+86,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+77,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+87,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+88,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+89,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+91,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+419,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+420,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+92,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+92,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+218,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+219,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+220,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+221,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+222,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+223,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+224,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+91,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+225,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+226,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+227,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+228,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+79,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+100,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+75,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+98,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+88,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+87,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+216,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+89,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+229,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+351,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+352,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+73,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+79,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+77,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+85,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+83,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+3,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+5,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+230,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+231,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+232,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+233,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+234,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+235,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+236,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+237,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+238,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+77,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+239,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+241,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+243,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+5,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+3,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+9,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+245,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+11,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBus(c+433,"top axi_ls_i RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+433,"top axi_ls_i RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+433,"top axi_ls_i AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+433,"top axi_ls_i AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+434,"top axi_ls_i AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+435,"top axi_ls_i AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+436,"top axi_ls_i AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+351,"top axi_ls_i clock", false,-1);
        tracep->declBit(c+352,"top axi_ls_i reset", false,-1);
        tracep->declBit(c+88,"top axi_ls_i wr_valid_i", false,-1);
        tracep->declBit(c+87,"top axi_ls_i rw_valid_i", false,-1);
        tracep->declBit(c+420,"top axi_ls_i wr_ok_o", false,-1);
        tracep->declBit(c+419,"top axi_ls_i rw_ready_o", false,-1);
        tracep->declQuad(c+92,"top axi_ls_i data_read_o", false,-1, 63,0);
        tracep->declQuad(c+89,"top axi_ls_i rw_w_data_i", false,-1, 63,0);
        tracep->declBus(c+91,"top axi_ls_i rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+77,"top axi_ls_i rw_addr_i", false,-1, 63,0);
        tracep->declBit(c+390,"top axi_ls_i axi_aw_ready_i", false,-1);
        tracep->declBit(c+391,"top axi_ls_i axi_aw_valid_o", false,-1);
        tracep->declQuad(c+392,"top axi_ls_i axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+394,"top axi_ls_i axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+395,"top axi_ls_i axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+396,"top axi_ls_i axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+397,"top axi_ls_i axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+398,"top axi_ls_i axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+399,"top axi_ls_i axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+400,"top axi_ls_i axi_aw_lock_o", false,-1);
        tracep->declBus(c+401,"top axi_ls_i axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+402,"top axi_ls_i axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+403,"top axi_ls_i axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+404,"top axi_ls_i axi_w_ready_i", false,-1);
        tracep->declBit(c+405,"top axi_ls_i axi_w_valid_o", false,-1);
        tracep->declQuad(c+406,"top axi_ls_i axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+408,"top axi_ls_i axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+409,"top axi_ls_i axi_w_last_o", false,-1);
        tracep->declBus(c+410,"top axi_ls_i axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+411,"top axi_ls_i axi_b_ready_o", false,-1);
        tracep->declBit(c+412,"top axi_ls_i axi_b_valid_i", false,-1);
        tracep->declBus(c+413,"top axi_ls_i axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+414,"top axi_ls_i axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+415,"top axi_ls_i axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+368,"top axi_ls_i axi_ar_ready_i", false,-1);
        tracep->declBit(c+369,"top axi_ls_i axi_ar_valid_o", false,-1);
        tracep->declQuad(c+370,"top axi_ls_i axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+372,"top axi_ls_i axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+373,"top axi_ls_i axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+374,"top axi_ls_i axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+375,"top axi_ls_i axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+376,"top axi_ls_i axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+377,"top axi_ls_i axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+378,"top axi_ls_i axi_ar_lock_o", false,-1);
        tracep->declBus(c+379,"top axi_ls_i axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+380,"top axi_ls_i axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+381,"top axi_ls_i axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+382,"top axi_ls_i axi_r_ready_o", false,-1);
        tracep->declBit(c+383,"top axi_ls_i axi_r_valid_i", false,-1);
        tracep->declBus(c+384,"top axi_ls_i axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+385,"top axi_ls_i axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+387,"top axi_ls_i axi_r_last_i", false,-1);
        tracep->declBus(c+388,"top axi_ls_i axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+389,"top axi_ls_i axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+444,"top axi_ls_i w_state_idle", false,-1, 1,0);
        tracep->declBus(c+445,"top axi_ls_i w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+446,"top axi_ls_i w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+447,"top axi_ls_i w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+247,"top axi_ls_i w_state", false,-1, 1,0);
        tracep->declBus(c+430,"top axi_ls_i w_state_next", false,-1, 1,0);
        tracep->declBit(c+248,"top axi_ls_i aw_valid", false,-1);
        tracep->declBit(c+249,"top axi_ls_i w_valid", false,-1);
        tracep->declBit(c+431,"top axi_ls_i b_ready", false,-1);
        tracep->declBit(c+13,"top axi_ls_i trans_ok", false,-1);
        tracep->declBus(c+444,"top axi_ls_i r_state_idle", false,-1, 1,0);
        tracep->declBus(c+445,"top axi_ls_i r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+446,"top axi_ls_i r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+447,"top axi_ls_i r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+250,"top axi_ls_i r_state", false,-1, 1,0);
        tracep->declBus(c+432,"top axi_ls_i r_state_next", false,-1, 1,0);
        tracep->declBit(c+251,"top axi_ls_i ar_valid", false,-1);
        tracep->declBit(c+252,"top axi_ls_i r_ready", false,-1);
        tracep->declBit(c+448,"top axi_ls_i instr_valid", false,-1);
        tracep->declQuad(c+14,"top axi_ls_i addr_reg", false,-1, 63,0);
        tracep->declBit(c+16,"top axi_ls_i instr_valid_reg", false,-1);
        tracep->declQuad(c+17,"top axi_ls_i rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+449,"top axi_ls_i AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+450,"top axi_ls_i axi_id", false,-1, 3,0);
        tracep->declBus(c+451,"top axi_ls_i axi_user", false,-1, 0,0);
        tracep->declBus(c+452,"top axi_ls_i axi_len", false,-1, 7,0);
        tracep->declBus(c+453,"top axi_ls_i axi_size", false,-1, 2,0);
        tracep->declBit(c+351,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+352,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+73,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+79,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+77,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+80,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+82,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+83,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+421,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+94,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+100,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+96,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+98,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+104,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+105,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+454,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+440,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+351,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+352,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+421,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+253,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+263,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+94,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+100,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+96,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+98,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+105,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+103,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+101,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+351,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+352,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+43,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+21,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+40,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+41,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+363,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+86,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+416,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+416,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+416,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+418,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+418,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+421,"top pipline_ctrl_u wb_stall_n", false,-1);
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
        tracep->fullBit(oldp+13,(vlSelf->top__DOT__axi_ls_i__DOT__trans_ok));
        tracep->fullQData(oldp+14,(vlSelf->top__DOT__axi_ls_i__DOT__addr_reg),64);
        tracep->fullBit(oldp+16,(vlSelf->top__DOT__axi_ls_i__DOT__instr_valid_reg));
        tracep->fullQData(oldp+17,(vlSelf->top__DOT__axi_ls_i__DOT__rd_data_reg),64);
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
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__ls_sram_rd_data 
                                                                             >> 7U)))))) 
                                              << 8U) 
                                             | (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->top__DOT__ls_sram_rd_data)))))) 
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
                                            & (QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->top__DOT__ls_sram_rd_data)))))) 
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
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__ls_sram_rd_data 
                                                                              >> 0xfU)))))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->top__DOT__ls_sram_rd_data))))))) 
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
                                          & (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(vlSelf->top__DOT__ls_sram_rd_data)))))) 
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
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__ls_sram_rd_data 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__ls_sram_rd_data))))) 
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
                                        & (QData)((IData)(vlSelf->top__DOT__ls_sram_rd_data)))) 
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
        tracep->fullQData(oldp+94,((((QData)((IData)(
                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                     >> 1U)))),64);
        tracep->fullQData(oldp+96,((((QData)((IData)(
                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                     >> 1U)))),64);
        tracep->fullQData(oldp+98,((((QData)((IData)(
                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                     >> 1U)))),64);
        tracep->fullIData(oldp+100,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+103,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+104,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+105,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullQData(oldp+107,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullWData(oldp+109,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+112,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+113,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+114,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+115,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+116,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+117,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+119,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+120,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+121,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+122,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+123,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+124,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+125,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullQData(oldp+135,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp54, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp55, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp56, __Vtemp54, __Vtemp55);
        VL_EXTEND_WI(65,1, __Vtemp57, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp58, __Vtemp56, __Vtemp57);
        tracep->fullBit(oldp+141,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp58[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+142,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+145,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+146,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+148,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+150,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+151,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+152,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+153,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp61, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp62, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp63, __Vtemp61, __Vtemp62);
        VL_EXTEND_WI(65,1, __Vtemp64, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp65, __Vtemp63, __Vtemp64);
        tracep->fullBit(oldp+155,((1U & __Vtemp65[2U])));
        tracep->fullBit(oldp+156,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+157,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+159,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+161,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+163,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+165,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+166,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+167,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+168,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+170,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+172,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+174,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+176,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+178,(((0x4000000U & 
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
        tracep->fullQData(oldp+180,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+182,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+183,(((((QData)((IData)(
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
        tracep->fullQData(oldp+185,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+187,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+188,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+189,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+190,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+192,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+194,((1U & ((0x200U & 
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
        tracep->fullCData(oldp+195,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 9U))),5);
        tracep->fullBit(oldp+196,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+197,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+198,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+199,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
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
        tracep->fullWData(oldp+200,(__Vtemp70),226);
        tracep->fullWData(oldp+208,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullCData(oldp+216,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xeU))),3);
        tracep->fullBit(oldp+217,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullBit(oldp+218,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+219,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+220,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+221,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (5U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+222,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+223,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (6U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+224,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+225,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+226,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+227,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+228,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+229,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+230,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+231,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+232,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+233,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U)))));
        tracep->fullBit(oldp+234,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+235,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+236,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+237,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+238,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+239,(((((QData)((IData)(
                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                        >> 2U))) | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+241,(((~ (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U)))) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+243,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+245,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullCData(oldp+247,(vlSelf->top__DOT__axi_ls_i__DOT__w_state),2);
        tracep->fullBit(oldp+248,(vlSelf->top__DOT__axi_ls_i__DOT__aw_valid));
        tracep->fullBit(oldp+249,(vlSelf->top__DOT__axi_ls_i__DOT__w_valid));
        tracep->fullCData(oldp+250,(vlSelf->top__DOT__axi_ls_i__DOT__r_state),2);
        tracep->fullBit(oldp+251,(vlSelf->top__DOT__axi_ls_i__DOT__ar_valid));
        tracep->fullBit(oldp+252,(vlSelf->top__DOT__axi_ls_i__DOT__r_ready));
        tracep->fullWData(oldp+253,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullWData(oldp+263,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullQData(oldp+273,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+275,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
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
        tracep->fullWData(oldp+277,(__Vtemp75),315);
        tracep->fullQData(oldp+287,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+289,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+291,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+293,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+295,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+297,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+299,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+301,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+303,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+305,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+307,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+309,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+311,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+313,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+315,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+317,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+319,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+321,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+323,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+325,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+327,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+329,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+331,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+333,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+335,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+337,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+339,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+341,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+343,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+345,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+347,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+349,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+351,(vlSelf->clk));
        tracep->fullBit(oldp+352,(vlSelf->rst_n));
        tracep->fullQData(oldp+353,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+355,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+357,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+358,(vlSelf->regA0),64);
        tracep->fullBit(oldp+360,(vlSelf->stall_n_diff));
        tracep->fullQData(oldp+361,(vlSelf->sram_rdata),64);
        tracep->fullBit(oldp+363,(vlSelf->sram_data_valid));
        tracep->fullQData(oldp+364,(vlSelf->sram_addr),64);
        tracep->fullBit(oldp+366,(vlSelf->sram_ren));
        tracep->fullBit(oldp+367,(vlSelf->sram_addr_valid));
        tracep->fullBit(oldp+368,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+369,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+370,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+372,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+373,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+374,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+375,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+376,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+377,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+378,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+379,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+380,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+381,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+382,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+383,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+384,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+385,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+387,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+388,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+389,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+390,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+391,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+392,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+394,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+395,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+396,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+397,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+398,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+399,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+400,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+401,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+402,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+403,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+404,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+405,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+406,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+408,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+409,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+410,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+411,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+412,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+413,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+414,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+415,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+416,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                             | (~ (IData)(vlSelf->sram_data_valid))) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullIData(oldp+417,(((1U & (IData)(
                                                   (vlSelf->sram_addr 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->sram_rdata))),32);
        tracep->fullBit(oldp+418,((1U & (~ ((~ (IData)(vlSelf->sram_data_valid)) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullBit(oldp+419,((((IData)(vlSelf->top__DOT__axi_ls_i__DOT__r_state) 
                                    >> 1U) & ((~ (IData)(vlSelf->top__DOT__axi_ls_i__DOT__r_state)) 
                                              & (((((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                    << 0x3eU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                       << 0x1eU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                         >> 2U))) 
                                                  == vlSelf->top__DOT__axi_ls_i__DOT__addr_reg) 
                                                 & (IData)(vlSelf->top__DOT__axi_ls_i__DOT__instr_valid_reg))))));
        tracep->fullBit(oldp+420,((((IData)(vlSelf->top__DOT__axi_ls_i__DOT__w_state) 
                                    >> 1U) & ((~ (IData)(vlSelf->top__DOT__axi_ls_i__DOT__w_state)) 
                                              & (((((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                    << 0x3eU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                       << 0x1eU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                         >> 2U))) 
                                                  == vlSelf->top__DOT__axi_ls_i__DOT__addr_reg) 
                                                 & (IData)(vlSelf->top__DOT__axi_ls_i__DOT__trans_ok))))));
        tracep->fullBit(oldp+421,(vlSelf->top__DOT__wb_stall_n));
        tracep->fullQData(oldp+422,(((IData)(vlSelf->top__DOT__is_jump)
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
        tracep->fullIData(oldp+424,(((IData)(vlSelf->top__DOT__id_flush)
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
        tracep->fullWData(oldp+425,(__Vtemp76),96);
        tracep->fullBit(oldp+428,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+429,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullCData(oldp+430,(((2U & (IData)(vlSelf->top__DOT__axi_ls_i__DOT__w_state))
                                      ? ((1U & (IData)(vlSelf->top__DOT__axi_ls_i__DOT__w_state))
                                          ? ((IData)(vlSelf->axi_w_ready_i)
                                              ? 2U : 3U)
                                          : (((8U == 
                                               (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                              & (IData)(vlSelf->top__DOT__axi_ls_i__DOT__trans_ok))
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
                                                  != vlSelf->top__DOT__axi_ls_i__DOT__addr_reg)
                                                  ? 1U
                                                  : 2U)
                                              : 0U))
                                      : ((1U & (IData)(vlSelf->top__DOT__axi_ls_i__DOT__w_state))
                                          ? ((IData)(vlSelf->axi_aw_ready_i)
                                              ? 3U : 1U)
                                          : ((8U == 
                                              (0x1fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 4U)))
                                              ? 1U : 0U)))),2);
        tracep->fullBit(oldp+431,(vlSelf->top__DOT__axi_ls_i__DOT__b_ready));
        tracep->fullCData(oldp+432,(((2U & (IData)(vlSelf->top__DOT__axi_ls_i__DOT__r_state))
                                      ? ((1U & (IData)(vlSelf->top__DOT__axi_ls_i__DOT__r_state))
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
                                                  != vlSelf->top__DOT__axi_ls_i__DOT__addr_reg)
                                                  ? 1U
                                                  : 2U)
                                              : 0U))
                                      : ((1U & (IData)(vlSelf->top__DOT__axi_ls_i__DOT__r_state))
                                          ? ((IData)(vlSelf->axi_ar_ready_i)
                                              ? 3U : 1U)
                                          : ((3U == 
                                              (0x7fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 2U)))
                                              ? 1U : 0U)))),2);
        tracep->fullIData(oldp+433,(0x40U),32);
        tracep->fullIData(oldp+434,(4U),32);
        tracep->fullIData(oldp+435,(8U),32);
        tracep->fullIData(oldp+436,(1U),32);
        tracep->fullQData(oldp+437,(vlSelf->top__DOT__pc_next),64);
        tracep->fullIData(oldp+439,(0x60U),32);
        tracep->fullIData(oldp+440,(0U),32);
        tracep->fullIData(oldp+441,(0x13bU),32);
        tracep->fullBit(oldp+442,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+443,(0xe2U),32);
        tracep->fullCData(oldp+444,(0U),2);
        tracep->fullCData(oldp+445,(1U),2);
        tracep->fullCData(oldp+446,(3U),2);
        tracep->fullCData(oldp+447,(2U),2);
        tracep->fullBit(oldp+448,(vlSelf->top__DOT__axi_ls_i__DOT__instr_valid));
        tracep->fullIData(oldp+449,(3U),32);
        tracep->fullCData(oldp+450,(1U),4);
        tracep->fullBit(oldp+451,(0U));
        tracep->fullCData(oldp+452,(0U),8);
        tracep->fullCData(oldp+453,(3U),3);
        tracep->fullIData(oldp+454,(0x121U),32);
    }
}
