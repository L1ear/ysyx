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
        tracep->declBit(c+356,"clk", false,-1);
        tracep->declBit(c+357,"rst_n", false,-1);
        tracep->declQuad(c+358,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+360,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+362,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+363,"regA0", false,-1, 63,0);
        tracep->declBit(c+365,"stall_n_diff", false,-1);
        tracep->declBit(c+366,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+367,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+368,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+370,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+371,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+372,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+373,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+374,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+375,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+376,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+377,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+378,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+379,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+380,"axi_r_ready_o", false,-1);
        tracep->declBit(c+381,"axi_r_valid_i", false,-1);
        tracep->declBus(c+382,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+383,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+385,"axi_r_last_i", false,-1);
        tracep->declBus(c+386,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+387,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+388,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+389,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+390,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+392,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+393,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+394,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+395,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+396,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+397,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+398,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+399,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+400,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+401,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+402,"axi_w_ready_i", false,-1);
        tracep->declBit(c+403,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+404,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+406,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+407,"axi_w_last_o", false,-1);
        tracep->declBus(c+408,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+409,"axi_b_ready_o", false,-1);
        tracep->declBit(c+410,"axi_b_valid_i", false,-1);
        tracep->declBus(c+411,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+412,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+413,"axi_b_user_i", false,-1, 0,0);
        tracep->declQuad(c+414,"ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+416,"ls_sram_rd_en", false,-1);
        tracep->declBit(c+417,"ls_sram_wr_en", false,-1);
        tracep->declQuad(c+418,"ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+420,"ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+421,"ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+422,"ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+423,"ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+434,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+434,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+434,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+434,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+435,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+436,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+437,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+356,"top clk", false,-1);
        tracep->declBit(c+357,"top rst_n", false,-1);
        tracep->declQuad(c+358,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+360,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+362,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+363,"top regA0", false,-1, 63,0);
        tracep->declBit(c+365,"top stall_n_diff", false,-1);
        tracep->declBit(c+366,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+367,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+368,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+370,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+371,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+372,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+373,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+374,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+375,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+376,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+377,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+378,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+379,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+380,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+381,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+382,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+383,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+385,"top axi_r_last_i", false,-1);
        tracep->declBus(c+386,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+387,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+388,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+389,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+390,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+392,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+393,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+394,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+395,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+396,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+397,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+398,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+399,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+400,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+401,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+402,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+403,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+404,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+406,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+407,"top axi_w_last_o", false,-1);
        tracep->declBus(c+408,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+409,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+410,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+411,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+412,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+413,"top axi_b_user_i", false,-1, 0,0);
        tracep->declQuad(c+414,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+416,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+417,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+418,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+420,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+421,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+422,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+423,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+438,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+253,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+255,"top is_jump", false,-1);
        tracep->declQuad(c+146,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+425,"top pc_stall_n", false,-1);
        tracep->declBit(c+425,"top if_stall_n", false,-1);
        tracep->declBit(c+256,"top if_instr_valid", false,-1);
        tracep->declBit(c+256,"top sram_data_valid", false,-1);
        tracep->declQuad(c+257,"top sram_rdata", false,-1, 63,0);
        tracep->declBus(c+259,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+1,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+3,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+426,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+428,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+4,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+6,"top src1sel_id", false,-1);
        tracep->declBus(c+7,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+8,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+9,"top is_brc_id", false,-1);
        tracep->declBit(c+10,"top is_jal_id", false,-1);
        tracep->declBit(c+11,"top is_jalr_id", false,-1);
        tracep->declBit(c+12,"top wben_id", false,-1);
        tracep->declBus(c+13,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+14,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+425,"top id_stall_n", false,-1);
        tracep->declBit(c+15,"top DivEn_id", false,-1);
        tracep->declBus(c+16,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+17,"top in_trap_id", false,-1);
        tracep->declBit(c+18,"top out_trap_id", false,-1);
        tracep->declBit(c+19,"top trap_id", false,-1);
        tracep->declBit(c+260,"top ld_use_hazard", false,-1);
        tracep->declBit(c+261,"top id_flush", false,-1);
        tracep->declQuad(c+20,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+22,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+148,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+23,"top src1sel_ex", false,-1);
        tracep->declBus(c+24,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+25,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+27,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+29,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+262,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+31,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+32,"top is_brc_ex", false,-1);
        tracep->declBit(c+33,"top is_jal_ex", false,-1);
        tracep->declBit(c+34,"top is_jalr_ex", false,-1);
        tracep->declBit(c+35,"top wben_ex", false,-1);
        tracep->declBit(c+36,"top DivEn_ex", false,-1);
        tracep->declBus(c+37,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+38,"top trap_ex", false,-1);
        tracep->declBit(c+430,"top ex_stall_n", false,-1);
        tracep->declQuad(c+39,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+264,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+265,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+41,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+42,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+266,"top ex_flush", false,-1);
        tracep->declQuad(c+43,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+45,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+47,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+49,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+431,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+50,"top wben_ls", false,-1);
        tracep->declQuad(c+51,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+53,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+55,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+57,"top trap_ls", false,-1);
        tracep->declBit(c+430,"top ls_stall_n", false,-1);
        tracep->declBit(c+344,"top ls_not_ok", false,-1);
        tracep->declQuad(c+267,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+269,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+271,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+273,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+274,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+276,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+277,"top wben_wb", false,-1);
        tracep->declQuad(c+278,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+345,"top wb_stall_n", false,-1);
        tracep->declBit(c+280,"top sram_addr", false,-1);
        tracep->declBit(c+440,"top sram_ren", false,-1);
        tracep->declBit(c+281,"top sram_addr_valid", false,-1);
        tracep->declBit(c+356,"top IF_u clk", false,-1);
        tracep->declBit(c+357,"top IF_u rst_n", false,-1);
        tracep->declBit(c+255,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+146,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+53,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+55,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+17,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+18,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+425,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+253,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+259,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+256,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+257,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+256,"top IF_u sram_data_valid", false,-1);
        tracep->declQuad(c+253,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+440,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+281,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+150,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBus(c+434,"top axi_if_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+434,"top axi_if_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+434,"top axi_if_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+434,"top axi_if_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+435,"top axi_if_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+436,"top axi_if_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+437,"top axi_if_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+356,"top axi_if_u clock", false,-1);
        tracep->declBit(c+357,"top axi_if_u reset", false,-1);
        tracep->declBit(c+281,"top axi_if_u rw_valid_i", false,-1);
        tracep->declBit(c+256,"top axi_if_u rw_ready_o", false,-1);
        tracep->declQuad(c+257,"top axi_if_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+282,"top axi_if_u rw_addr_i", false,-1, 63,0);
        tracep->declBit(c+388,"top axi_if_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+389,"top axi_if_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+390,"top axi_if_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+392,"top axi_if_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+393,"top axi_if_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+394,"top axi_if_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+395,"top axi_if_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+396,"top axi_if_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+397,"top axi_if_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+398,"top axi_if_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+399,"top axi_if_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+400,"top axi_if_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+401,"top axi_if_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+402,"top axi_if_u axi_w_ready_i", false,-1);
        tracep->declBit(c+403,"top axi_if_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+404,"top axi_if_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+406,"top axi_if_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+407,"top axi_if_u axi_w_last_o", false,-1);
        tracep->declBus(c+408,"top axi_if_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+409,"top axi_if_u axi_b_ready_o", false,-1);
        tracep->declBit(c+410,"top axi_if_u axi_b_valid_i", false,-1);
        tracep->declBus(c+411,"top axi_if_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+412,"top axi_if_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+413,"top axi_if_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+366,"top axi_if_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+367,"top axi_if_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+368,"top axi_if_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+370,"top axi_if_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+371,"top axi_if_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+372,"top axi_if_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+373,"top axi_if_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+374,"top axi_if_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+375,"top axi_if_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+376,"top axi_if_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+377,"top axi_if_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+378,"top axi_if_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+379,"top axi_if_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+380,"top axi_if_u axi_r_ready_o", false,-1);
        tracep->declBit(c+381,"top axi_if_u axi_r_valid_i", false,-1);
        tracep->declBus(c+382,"top axi_if_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+383,"top axi_if_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+385,"top axi_if_u axi_r_last_i", false,-1);
        tracep->declBus(c+386,"top axi_if_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+387,"top axi_if_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+441,"top axi_if_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+442,"top axi_if_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+443,"top axi_if_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+444,"top axi_if_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+284,"top axi_if_u r_state", false,-1, 1,0);
        tracep->declBus(c+433,"top axi_if_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+285,"top axi_if_u ar_valid", false,-1);
        tracep->declBit(c+286,"top axi_if_u r_ready", false,-1);
        tracep->declBit(c+445,"top axi_if_u instr_valid", false,-1);
        tracep->declQuad(c+184,"top axi_if_u addr_reg", false,-1, 63,0);
        tracep->declBit(c+186,"top axi_if_u instr_valid_reg", false,-1);
        tracep->declQuad(c+187,"top axi_if_u rd_data_reg", false,-1, 63,0);
        tracep->declBus(c+446,"top axi_if_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+447,"top axi_if_u axi_id", false,-1, 3,0);
        tracep->declBus(c+448,"top axi_if_u axi_user", false,-1, 0,0);
        tracep->declBus(c+449,"top axi_if_u axi_len", false,-1, 7,0);
        tracep->declBus(c+450,"top axi_if_u axi_size", false,-1, 2,0);
        tracep->declBit(c+356,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+357,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+253,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+259,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+425,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+261,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+1,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+3,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+287,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+289,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+451,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+452,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+356,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+357,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+425,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+290,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+58,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+356,"top ID_u clk", false,-1);
        tracep->declBit(c+357,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+1,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+267,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+273,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+3,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+274,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+276,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+277,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+428,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+426,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+4,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+6,"top ID_u src1sel", false,-1);
        tracep->declBus(c+7,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+8,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+11,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+10,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+9,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+12,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+13,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+14,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+363,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+15,"top ID_u DivEn", false,-1);
        tracep->declBus(c+16,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+19,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+17,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+18,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+61,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+4,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+428,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+426,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+1,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+3,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+13,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+14,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+61,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+6,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+7,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+8,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+11,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+10,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+9,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+12,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+15,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+16,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+19,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+17,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+18,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+62,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+63,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+64,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+65,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+61,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+4,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+356,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+267,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+273,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+13,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+428,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+14,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+426,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+276,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+274,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+277,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+363,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+189+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+3,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+22,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+260,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+356,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+357,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+430,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+266,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+1,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+3,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+4,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+426,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+428,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+8,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+11,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+10,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+9,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+6,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+7,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+12,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+13,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+14,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+15,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+16,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+19,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+20,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+22,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+25,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+27,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+29,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+31,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+34,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+33,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+32,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+23,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+24,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+35,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+41,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+42,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+36,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+37,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+38,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+152,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+154,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+155,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+156,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+157,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+158,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+159,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+453,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+452,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+356,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+357,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+430,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+136,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+66,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+31,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+27,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+25,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+29,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+20,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+22,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+34,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+33,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+32,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+23,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+24,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+264,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+265,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+47,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+274,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+39,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+36,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+37,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+148,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+146,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+262,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+255,"top ex_stage_u is_jump_o", false,-1);
        tracep->declQuad(c+293,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+295,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+297,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+262,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+31,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+293,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+295,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+36,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+37,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+148,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+160,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+299,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+300,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+76,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+302,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+304,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+77,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+77,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+78,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+79,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+306,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+161,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+308,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+309,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+311,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+313,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+162,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+293,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+302,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+76,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+304,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+161,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+299,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+308,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+80,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+79,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+77,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+78,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+76,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+77,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+81,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+293,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+315,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+78,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+77,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+306,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+316,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+318,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+320,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+322,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+164,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+166,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+324,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+293,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+295,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+37,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+162,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+297,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+262,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+34,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+33,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+32,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+82,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+29,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+20,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+146,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+255,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+83,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+168,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+454,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+326,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+327,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+328,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+329,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+331,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+170,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+356,"top forwarding_u clk", false,-1);
        tracep->declBit(c+357,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+41,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+42,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+85,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+276,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+50,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+277,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+274,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+345,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+264,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+265,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+39,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+39,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+86,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+87,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+88,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+171,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+89,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+90,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+172,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+91,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+356,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+357,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+20,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+262,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+22,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+148,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+35,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+38,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+430,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+43,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+45,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+49,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+47,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+50,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+57,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+455,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+452,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+356,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+357,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+430,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+173,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+92,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+356,"top ls_u clk", false,-1);
        tracep->declBit(c+357,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+43,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+47,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+45,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+49,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+269,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+273,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+271,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+57,"top ls_u trap_ls_i", false,-1);
        tracep->declQuad(c+431,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+51,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+53,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+55,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+344,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+414,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+416,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+417,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+418,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+420,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+421,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+422,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+423,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+100,"top ls_u wren", false,-1);
        tracep->declBit(c+101,"top ls_u rden", false,-1);
        tracep->declBus(c+102,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+181,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+333,"top ls_u wren_last", false,-1);
        tracep->declBit(c+356,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+357,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+100,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+101,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+102,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+181,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+47,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+43,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+269,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+333,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+431,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+344,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+414,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+416,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+417,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+418,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+420,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+421,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+422,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+423,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+423,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+103,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+104,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+105,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+106,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+107,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+108,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+109,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+110,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+111,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+112,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+113,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+114,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+49,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+273,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+45,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+271,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+100,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+101,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+102,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+181,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+183,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+356,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+357,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+43,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+49,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+47,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+57,"top ls_u CSR_u trap", false,-1);
        tracep->declQuad(c+51,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+53,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+55,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+115,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+116,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+117,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+118,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+119,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+120,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+121,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+122,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+123,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+47,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+124,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+126,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+128,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+55,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+53,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+130,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+132,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+134,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBit(c+356,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+357,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+43,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+49,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+47,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+431,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+50,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+51,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+345,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+267,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+273,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+269,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+271,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+277,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+278,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+456,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+452,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+356,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+357,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+345,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+346,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+334,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+267,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+273,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+269,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+271,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+278,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+276,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+274,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+356,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+357,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+260,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+255,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+17,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+18,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+256,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+344,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+425,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+425,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+425,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+430,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+430,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+345,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+261,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+266,"top pipline_ctrl_u ex_flush", false,-1);
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
    VlWide<10>/*319:0*/ __Vtemp57;
    VlWide<3>/*95:0*/ __Vtemp59;
    VlWide<3>/*95:0*/ __Vtemp60;
    VlWide<3>/*95:0*/ __Vtemp61;
    VlWide<3>/*95:0*/ __Vtemp62;
    VlWide<3>/*95:0*/ __Vtemp63;
    VlWide<3>/*95:0*/ __Vtemp66;
    VlWide<3>/*95:0*/ __Vtemp67;
    VlWide<3>/*95:0*/ __Vtemp68;
    VlWide<3>/*95:0*/ __Vtemp69;
    VlWide<3>/*95:0*/ __Vtemp70;
    VlWide<8>/*255:0*/ __Vtemp75;
    VlWide<3>/*95:0*/ __Vtemp76;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,((((QData)((IData)(
                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+3,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+4,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+6,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+7,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+9,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+10,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+11,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+12,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+15,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+16,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+17,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+18,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+19,(vlSelf->top__DOT__trap_id));
        tracep->fullQData(oldp+20,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullIData(oldp+22,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                     << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1bU))),32);
        tracep->fullBit(oldp+23,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x12U))));
        tracep->fullCData(oldp+24,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                          >> 0x10U))),2);
        tracep->fullQData(oldp+25,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullQData(oldp+27,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullQData(oldp+29,((((QData)((IData)(
                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                     >> 0x1bU)))),64);
        tracep->fullCData(oldp+31,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),5);
        tracep->fullBit(oldp+32,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x13U))));
        tracep->fullBit(oldp+33,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x14U))));
        tracep->fullBit(oldp+34,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x15U))));
        tracep->fullBit(oldp+35,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0xfU))));
        tracep->fullBit(oldp+36,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 4U))));
        tracep->fullCData(oldp+37,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                          >> 1U))),3);
        tracep->fullBit(oldp+38,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullQData(oldp+39,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullCData(oldp+41,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0xaU))),5);
        tracep->fullCData(oldp+42,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 5U))),5);
        tracep->fullQData(oldp+43,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                     >> 2U)))),64);
        tracep->fullQData(oldp+45,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                     >> 2U)))),64);
        tracep->fullQData(oldp+47,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                     >> 2U)))),64);
        tracep->fullIData(oldp+49,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                     << 0x1eU) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 2U))),32);
        tracep->fullBit(oldp+50,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                        >> 1U))));
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+57,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullWData(oldp+58,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+61,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+62,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                             >> 2U))),5);
        tracep->fullCData(oldp+63,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+64,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                    >> 0x19U)),7);
        tracep->fullIData(oldp+65,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                    >> 7U)),25);
        tracep->fullWData(oldp+66,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullBit(oldp+76,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullBit(oldp+77,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x19U))));
        tracep->fullBit(oldp+78,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x18U))));
        tracep->fullCData(oldp+79,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                          >> 0x16U))),3);
        tracep->fullCData(oldp+80,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x16U))),4);
        tracep->fullBit(oldp+81,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                        >> 0x1aU))));
        tracep->fullCData(oldp+82,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                          >> 7U))),3);
        tracep->fullQData(oldp+83,(((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1bU))) 
                                    + (((QData)((IData)(
                                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                         << 5U) | ((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                   >> 0x1bU))))),64);
        tracep->fullCData(oldp+85,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 9U))),5);
        tracep->fullBit(oldp+86,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+87,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullBit(oldp+88,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                    >> 1U) & ((0x1fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 9U)) 
                                              == (0x1fU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                     >> 0xaU)))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 9U))))));
        tracep->fullBit(oldp+89,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                   & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                   >> 0xaU)))) 
                                  & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+90,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                    >> 1U) & ((0x1fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 9U)) 
                                              == (0x1fU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                     >> 5U)))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 9U))))));
        tracep->fullBit(oldp+91,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                   & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                   >> 5U)))) 
                                  & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullWData(oldp+92,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullBit(oldp+100,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))));
        tracep->fullBit(oldp+101,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U)))));
        tracep->fullCData(oldp+102,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xeU))),3);
        tracep->fullBit(oldp+103,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+104,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+105,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+106,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (5U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+107,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+108,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (6U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+109,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 2U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullCData(oldp+110,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullBit(oldp+111,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+112,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+113,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+114,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 4U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
        tracep->fullBit(oldp+115,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+116,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+117,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))));
        tracep->fullBit(oldp+118,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U)))));
        tracep->fullBit(oldp+119,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+120,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+121,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+122,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+123,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+124,(((((QData)((IData)(
                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                        >> 2U))) | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+126,(((~ (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U)))) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+128,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+130,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+132,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullQData(oldp+134,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        __Vtemp57[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
        __Vtemp57[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                          >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp57[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                   >> 0x20U)) >> 5U) 
                         | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])) 
                            << 0x1bU));
        __Vtemp57[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                    ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                   [vlSelf->top__DOT__rs1_idx_id])) 
                          >> 5U) | ((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                               ? 0ULL
                                               : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                              [vlSelf->top__DOT__rs1_idx_id]) 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp57[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id]) 
                                   >> 0x20U)) >> 5U) 
                         | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])) 
                            << 0x1bU));
        __Vtemp57[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                    ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                   [vlSelf->top__DOT__rs2_idx_id])) 
                          >> 5U) | ((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                               ? 0ULL
                                               : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                              [vlSelf->top__DOT__rs2_idx_id]) 
                                             >> 0x20U)) 
                                    << 0x1bU));
        __Vtemp57[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id]) 
                                   >> 0x20U)) >> 5U) 
                         | (((IData)(vlSelf->top__DOT__ex_flush)
                              ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                            << 0x1bU));
        __Vtemp57[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                            ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                          >> 5U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                              ? 0ULL
                                              : (((QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                    << 0x1bU));
        __Vtemp57[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
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
        __Vtemp57[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                    ? 0ULL : (((QData)((IData)(
                                                               vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                  >> 0x20U)) >> 5U);
        tracep->fullWData(oldp+136,(__Vtemp57),315);
        tracep->fullQData(oldp+146,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullQData(oldp+148,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)),64);
        tracep->fullQData(oldp+150,(((IData)(vlSelf->top__DOT__is_jump)
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
        tracep->fullQData(oldp+152,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+154,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+155,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+156,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+157,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+158,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+159,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        VL_EXTEND_WQ(65,64, __Vtemp59, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp60, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp61, __Vtemp59, __Vtemp60);
        VL_EXTEND_WI(65,1, __Vtemp62, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp63, __Vtemp61, __Vtemp62);
        tracep->fullBit(oldp+160,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp63[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        VL_EXTEND_WQ(65,64, __Vtemp66, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp67, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp68, __Vtemp66, __Vtemp67);
        VL_EXTEND_WI(65,1, __Vtemp69, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp70, __Vtemp68, __Vtemp69);
        tracep->fullBit(oldp+161,((1U & __Vtemp70[2U])));
        tracep->fullQData(oldp+162,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullQData(oldp+164,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+166,(((0x4000000U & 
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
        tracep->fullQData(oldp+168,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+170,((1U & ((0x200U & 
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
        tracep->fullBit(oldp+171,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+172,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        __Vtemp75[0U] = (((IData)(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        __Vtemp75[1U] = (((IData)(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        __Vtemp75[2U] = (((IData)((((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        __Vtemp75[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                          >> 0x1eU) | ((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                >> 0x20U)) 
                                       << 2U));
        __Vtemp75[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                   >> 0x20U)) >> 0x1eU) 
                         | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                             << 7U) | (0x7cU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x19U))));
        __Vtemp75[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                               << 7U) 
                                              | (0x7cU 
                                                 & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    >> 0x19U))));
        __Vtemp75[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                               << 7U) 
                                              | (0x7cU 
                                                 & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                    >> 0x19U))));
        __Vtemp75[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                               >> 0x19U));
        tracep->fullWData(oldp+173,(__Vtemp75),226);
        tracep->fullQData(oldp+181,((((0U == (0x1fU 
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
        tracep->fullBit(oldp+183,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullQData(oldp+184,(vlSelf->top__DOT__axi_if_u__DOT__addr_reg),64);
        tracep->fullBit(oldp+186,(vlSelf->top__DOT__axi_if_u__DOT__instr_valid_reg));
        tracep->fullQData(oldp+187,(vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg),64);
        tracep->fullQData(oldp+189,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+191,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+193,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+195,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+197,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+201,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+207,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+209,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+211,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+213,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+215,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+217,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+219,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+221,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+223,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+225,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+227,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+229,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+231,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+233,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+235,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+237,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+239,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+241,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+243,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+245,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+247,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+249,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+251,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullQData(oldp+253,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+255,(vlSelf->top__DOT__is_jump));
        tracep->fullBit(oldp+256,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullQData(oldp+257,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullIData(oldp+259,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullBit(oldp+260,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+261,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+262,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+264,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+265,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullBit(oldp+266,(vlSelf->top__DOT__ex_flush));
        tracep->fullQData(oldp+267,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+269,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+271,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+273,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+274,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+276,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+277,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+278,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullBit(oldp+280,((1U & (IData)(vlSelf->top__DOT__pc_new))));
        tracep->fullBit(oldp+281,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullQData(oldp+282,((QData)((IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->top__DOT__pc_new))))),64);
        tracep->fullCData(oldp+284,(vlSelf->top__DOT__axi_if_u__DOT__r_state),2);
        tracep->fullBit(oldp+285,(vlSelf->top__DOT__axi_if_u__DOT__ar_valid));
        tracep->fullBit(oldp+286,(vlSelf->top__DOT__axi_if_u__DOT__r_ready));
        tracep->fullQData(oldp+287,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+289,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp76[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                          ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                 >> 2U)))
                                   ? (IData)((vlSelf->top__DOT__sram_rdata 
                                              >> 0x20U))
                                   : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp76[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                  ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp76[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new) 
                                 >> 0x20U));
        tracep->fullWData(oldp+290,(__Vtemp76),96);
        tracep->fullQData(oldp+293,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+295,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+297,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        tracep->fullBit(oldp+299,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+300,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullQData(oldp+302,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+304,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullQData(oldp+306,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        tracep->fullBit(oldp+308,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+309,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+311,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+313,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullCData(oldp+315,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+316,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+318,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+320,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+322,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+324,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullBit(oldp+326,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+327,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+328,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+329,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+331,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+333,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullWData(oldp+334,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullBit(oldp+344,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullBit(oldp+345,(vlSelf->top__DOT__wb_stall_n));
        tracep->fullWData(oldp+346,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullBit(oldp+356,(vlSelf->clk));
        tracep->fullBit(oldp+357,(vlSelf->rst_n));
        tracep->fullQData(oldp+358,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+360,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+362,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+363,(vlSelf->regA0),64);
        tracep->fullBit(oldp+365,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+366,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+367,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+368,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+370,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+371,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+372,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+373,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+374,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+375,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+376,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+377,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+378,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+379,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+380,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+381,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+382,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+383,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+385,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+386,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+387,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+388,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+389,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+390,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+392,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+393,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+394,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+395,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+396,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+397,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+398,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+399,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+400,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+401,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+402,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+403,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+404,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+406,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+407,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+408,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+409,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+410,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+411,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+412,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+413,(vlSelf->axi_b_user_i));
        tracep->fullQData(oldp+414,(vlSelf->ls_sram_addr),64);
        tracep->fullBit(oldp+416,(vlSelf->ls_sram_rd_en));
        tracep->fullBit(oldp+417,(vlSelf->ls_sram_wr_en));
        tracep->fullQData(oldp+418,(vlSelf->ls_sram_wr_data),64);
        tracep->fullCData(oldp+420,(vlSelf->ls_sram_wr_mask),8);
        tracep->fullBit(oldp+421,(vlSelf->ls_sram_rd_data_valid));
        tracep->fullBit(oldp+422,(vlSelf->ls_sram_wr_data_ok));
        tracep->fullQData(oldp+423,(vlSelf->ls_sram_rd_data),64);
        tracep->fullBit(oldp+425,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                             | (~ (IData)(vlSelf->top__DOT__sram_data_valid))) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullQData(oldp+426,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+428,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        tracep->fullBit(oldp+430,((1U & (~ ((~ (IData)(vlSelf->top__DOT__sram_data_valid)) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok))))));
        tracep->fullQData(oldp+431,(((((((((- (QData)((IData)(
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
                                                                             (vlSelf->ls_sram_rd_data 
                                                                              >> 7U)))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->ls_sram_rd_data)))))) 
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
                                                                & (IData)(vlSelf->ls_sram_rd_data)))))) 
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
                                                                              (vlSelf->ls_sram_rd_data 
                                                                               >> 0xfU)))))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->ls_sram_rd_data))))))) 
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
                                                              & (IData)(vlSelf->ls_sram_rd_data)))))) 
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
                                                                                (vlSelf->ls_sram_rd_data 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->ls_sram_rd_data))))) 
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
                                         & (QData)((IData)(vlSelf->ls_sram_rd_data)))) 
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
                                        & vlSelf->ls_sram_rd_data))),64);
        tracep->fullCData(oldp+433,(((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                      ? ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                          ? ((IData)(vlSelf->axi_r_valid_i)
                                              ? 2U : 3U)
                                          : ((0ULL 
                                              != vlSelf->top__DOT__pc_new)
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->top__DOT__pc_new)))) 
                                                  != vlSelf->top__DOT__axi_if_u__DOT__addr_reg)
                                                  ? 1U
                                                  : 2U)
                                              : 0U))
                                      : ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                          ? ((IData)(vlSelf->axi_ar_ready_i)
                                              ? 3U : 1U)
                                          : ((0ULL 
                                              != vlSelf->top__DOT__pc_new)
                                              ? 1U : 0U)))),2);
        tracep->fullIData(oldp+434,(0x40U),32);
        tracep->fullIData(oldp+435,(4U),32);
        tracep->fullIData(oldp+436,(8U),32);
        tracep->fullIData(oldp+437,(1U),32);
        tracep->fullQData(oldp+438,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+440,(1U));
        tracep->fullCData(oldp+441,(0U),2);
        tracep->fullCData(oldp+442,(1U),2);
        tracep->fullCData(oldp+443,(3U),2);
        tracep->fullCData(oldp+444,(2U),2);
        tracep->fullBit(oldp+445,(vlSelf->top__DOT__axi_if_u__DOT__instr_valid));
        tracep->fullIData(oldp+446,(3U),32);
        tracep->fullCData(oldp+447,(0U),4);
        tracep->fullBit(oldp+448,(0U));
        tracep->fullCData(oldp+449,(0U),8);
        tracep->fullCData(oldp+450,(3U),3);
        tracep->fullIData(oldp+451,(0x60U),32);
        tracep->fullIData(oldp+452,(0U),32);
        tracep->fullIData(oldp+453,(0x13bU),32);
        tracep->fullBit(oldp+454,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+455,(0xe2U),32);
        tracep->fullIData(oldp+456,(0x121U),32);
    }
}
