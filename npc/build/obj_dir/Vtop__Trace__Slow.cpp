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
        tracep->declBit(c+700,"clk", false,-1);
        tracep->declBit(c+701,"rst_n", false,-1);
        tracep->declQuad(c+702,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+704,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+706,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+707,"regA0", false,-1, 63,0);
        tracep->declBit(c+709,"stall_n_diff", false,-1);
        tracep->declBit(c+710,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+711,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+712,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+714,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+715,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+716,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+717,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+718,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+719,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+720,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+721,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+722,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+723,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+724,"axi_r_ready_o", false,-1);
        tracep->declBit(c+725,"axi_r_valid_i", false,-1);
        tracep->declBus(c+726,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+727,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+729,"axi_r_last_i", false,-1);
        tracep->declBus(c+730,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+731,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+732,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+733,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+734,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+736,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+737,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+738,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+739,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+740,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+741,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+742,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+743,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+744,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+745,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+746,"axi_w_ready_i", false,-1);
        tracep->declBit(c+747,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+748,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+750,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+751,"axi_w_last_o", false,-1);
        tracep->declBus(c+752,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+753,"axi_b_ready_o", false,-1);
        tracep->declBit(c+754,"axi_b_valid_i", false,-1);
        tracep->declBus(c+755,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+756,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+757,"axi_b_user_i", false,-1, 0,0);
        tracep->declBus(c+815,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+815,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+815,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+815,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+816,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+817,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+818,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+700,"top clk", false,-1);
        tracep->declBit(c+701,"top rst_n", false,-1);
        tracep->declQuad(c+702,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+704,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+706,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+707,"top regA0", false,-1, 63,0);
        tracep->declBit(c+709,"top stall_n_diff", false,-1);
        tracep->declBit(c+710,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+711,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+712,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+714,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+715,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+716,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+717,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+718,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+719,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+720,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+721,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+722,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+723,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+724,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+725,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+726,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+727,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+729,"top axi_r_last_i", false,-1);
        tracep->declBus(c+730,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+731,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+732,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+733,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+734,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+736,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+737,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+738,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+739,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+740,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+741,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+742,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+743,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+744,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+745,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+746,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+747,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+748,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+750,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+751,"top axi_w_last_o", false,-1);
        tracep->declBus(c+752,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+753,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+754,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+755,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+756,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+757,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+133,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+238,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+239,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+819,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+117,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+758,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+241,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+242,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+821,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+243,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+822,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+118,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+244,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+134,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+135,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+136,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+823,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+824,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+825,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+138,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+245,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+139,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+819,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+141,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+759,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+760,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+142,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+821,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+143,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+822,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+822,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+144,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+246,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+761,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+145,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+763,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+820,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+247,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+146,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+147,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+826,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+827,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+2,"top instr_fetching", false,-1);
        tracep->declBit(c+764,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+3,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+4,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+819,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+822,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+820,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+828,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+829,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+830,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+821,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+831,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+822,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+832,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+6,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+571,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+765,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+572,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+574,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+575,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+833,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+766,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+248,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+148,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+819,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+834,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+820,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+7,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+681,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+830,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+821,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+835,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+822,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+822,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+576,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+249,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+250,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+150,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+252,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+820,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+253,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+767,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+768,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+769,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+770,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+771,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+254,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+8,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+819,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+834,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+820,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+682,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+829,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+830,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+821,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+831,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+822,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+836,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+255,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+577,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+772,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+578,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+580,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+575,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+837,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+838,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+256,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+258,"top is_jump", false,-1);
        tracep->declQuad(c+259,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+773,"top pc_stall_n", false,-1);
        tracep->declBit(c+581,"top if_stall_n", false,-1);
        tracep->declBit(c+261,"top if_instr_valid", false,-1);
        tracep->declBit(c+840,"top sram_data_valid", false,-1);
        tracep->declQuad(c+262,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+264,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+841,"top sram_ren", false,-1);
        tracep->declBit(c+266,"top sram_addr_valid", false,-1);
        tracep->declBit(c+119,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+120,"top cacheDataOk_i", false,-1);
        tracep->declBus(c+267,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+268,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+270,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+528,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+530,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+271,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+273,"top src1sel_id", false,-1);
        tracep->declBus(c+274,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+275,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+276,"top is_brc_id", false,-1);
        tracep->declBit(c+277,"top is_jal_id", false,-1);
        tracep->declBit(c+278,"top is_jalr_id", false,-1);
        tracep->declBit(c+279,"top wben_id", false,-1);
        tracep->declBus(c+280,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+281,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+773,"top id_stall_n", false,-1);
        tracep->declBit(c+282,"top DivEn_id", false,-1);
        tracep->declBus(c+283,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+284,"top in_trap_id", false,-1);
        tracep->declBit(c+285,"top out_trap_id", false,-1);
        tracep->declBit(c+286,"top trap_id", false,-1);
        tracep->declBit(c+287,"top ld_use_hazard", false,-1);
        tracep->declBit(c+288,"top id_flush", false,-1);
        tracep->declQuad(c+289,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+291,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+292,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+294,"top src1sel_ex", false,-1);
        tracep->declBus(c+295,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+296,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+298,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+300,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+302,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+304,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+305,"top is_brc_ex", false,-1);
        tracep->declBit(c+306,"top is_jal_ex", false,-1);
        tracep->declBit(c+307,"top is_jalr_ex", false,-1);
        tracep->declBit(c+308,"top wben_ex", false,-1);
        tracep->declBit(c+309,"top DivEn_ex", false,-1);
        tracep->declBus(c+310,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+311,"top trap_ex", false,-1);
        tracep->declBit(c+774,"top ex_stall_n", false,-1);
        tracep->declQuad(c+10,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+312,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+313,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+314,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+315,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+316,"top ex_flush", false,-1);
        tracep->declBit(c+317,"top rden_ls", false,-1);
        tracep->declBit(c+318,"top wren_ls", false,-1);
        tracep->declBit(c+582,"top ls_addr_ok_i", false,-1);
        tracep->declBit(c+583,"top ex_not_ok", false,-1);
        tracep->declQuad(c+12,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+14,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+16,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+18,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+775,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+19,"top wben_ls", false,-1);
        tracep->declQuad(c+20,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+22,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+26,"top trap_ls", false,-1);
        tracep->declBit(c+584,"top ls_stall_n", false,-1);
        tracep->declBit(c+585,"top ls_not_ok", false,-1);
        tracep->declQuad(c+16,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+121,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+29,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+842,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+843,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+586,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+30,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+829,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+319,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+321,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+323,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+325,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+326,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+328,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+329,"top wben_wb", false,-1);
        tracep->declQuad(c+330,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+584,"top wb_stall_n", false,-1);
        tracep->declBit(c+332,"top rw_valid_i", false,-1);
        tracep->declBit(c+31,"top rw_ready_o", false,-1);
        tracep->declBus(c+844,"top fetchLenth", false,-1, 7,0);
        tracep->declBit(c+574,"top rdLast_o", false,-1);
        tracep->declBus(c+32,"top rw_addr_i", false,-1, 31,0);
        tracep->declQuad(c+572,"top data_read_o", false,-1, 63,0);
        tracep->declBit(c+588,"top dataValid_o", false,-1);
        tracep->declBit(c+777,"top dataNotOk", false,-1);
        tracep->declBit(c+683,"top DcacheRdValid", false,-1);
        tracep->declBit(c+333,"top DcacheWrValid", false,-1);
        tracep->declBit(c+334,"top lsAxiRdReady", false,-1);
        tracep->declBus(c+682,"top lsFetchLenth", false,-1, 7,0);
        tracep->declBit(c+580,"top lsRdLast", false,-1);
        tracep->declQuad(c+684,"top DcacheRdAddr", false,-1, 63,0);
        tracep->declQuad(c+686,"top DcacheWrAddr", false,-1, 63,0);
        tracep->declQuad(c+335,"top lsAxiRdData", false,-1, 63,0);
        tracep->declBit(c+337,"top lsAxiRdDataVAlid", false,-1);
        tracep->declBit(c+338,"top lsAxiWrReady", false,-1);
        tracep->declArray(c+778,"top lsAxiWrData", false,-1, 255,0);
        tracep->declBus(c+682,"top lsStoreLenth", false,-1, 7,0);
        tracep->declBus(c+542,"top lsStoreMask", false,-1, 7,0);
        tracep->declBus(c+681,"top lsStoreSize", false,-1, 2,0);
        tracep->declBus(c+815,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+815,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+815,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+815,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+816,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+817,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+818,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+2,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+764,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+3,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+4,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+819,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+822,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+828,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+829,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+830,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+821,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+831,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+822,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+832,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+6,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+571,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+765,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+572,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+574,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+575,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+833,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+766,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+248,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+148,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+819,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+834,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+7,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+681,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+830,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+821,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+835,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+822,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+822,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+576,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+249,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+250,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+150,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+252,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+820,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+253,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+767,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+768,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+769,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+770,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+771,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+254,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+8,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+819,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+834,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+682,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+829,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+830,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+821,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+831,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+822,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+836,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+255,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+577,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+772,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+578,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+580,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+575,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+837,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+732,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+733,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+734,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+736,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+737,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+738,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+739,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+740,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+741,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+742,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+743,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+744,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+745,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+746,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+747,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+748,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+750,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+751,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+752,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+753,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+754,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+755,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+756,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+757,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+710,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+711,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+712,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+714,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+715,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+716,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+717,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+718,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+719,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+720,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+721,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+722,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+723,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+724,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+725,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+726,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+727,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+729,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+730,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+731,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+138,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+245,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+139,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+819,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+141,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+759,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+760,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+142,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+821,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+143,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+822,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+822,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+144,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+246,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+761,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+145,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+763,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+820,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+247,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+146,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+147,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+834,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+827,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+133,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+238,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+239,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+819,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+117,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+758,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+241,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+242,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+821,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+243,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+822,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+118,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+244,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+134,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+135,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+136,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+134,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+834,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+825,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+766,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+248,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+148,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+819,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+834,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+7,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+681,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+830,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+821,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+835,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+822,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+822,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+576,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+249,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+250,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+150,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+252,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+820,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+253,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+767,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+768,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+769,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+770,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+589,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+339,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+340,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+819,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+33,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+786,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+829,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+830,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+845,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+831,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+822,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+34,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+342,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+590,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+787,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+591,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+593,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+575,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+788,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+700,"top IF_u clk", false,-1);
        tracep->declBit(c+701,"top IF_u rst_n", false,-1);
        tracep->declBit(c+258,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+259,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+22,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+284,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+285,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+581,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+256,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+267,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+261,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+262,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+840,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+119,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+120,"top IF_u cacheDataOk_i", false,-1);
        tracep->declQuad(c+264,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+841,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+266,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+264,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+700,"top cache_dut clk", false,-1);
        tracep->declBit(c+701,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+343,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+266,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+821,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+846,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+848,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+581,"top cache_dut stall_n", false,-1);
        tracep->declBit(c+119,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+123,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+120,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+262,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+332,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+31,"top cache_dut axiRdReady", false,-1);
        tracep->declBus(c+844,"top cache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+574,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+32,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+572,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBit(c+588,"top cache_dut dataValid_i", false,-1);
        tracep->declBus(c+819,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+849,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+850,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+829,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+851,"top cache_dut replace", false,-1, 2,0);
        tracep->declBus(c+344,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+594,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+35,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+36,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+37,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+151,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+155,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+159,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+163,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+345,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+349,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+345,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+349,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+353,"top cache_dut wenWay1", false,-1);
        tracep->declBit(c+354,"top cache_dut wenWay2", false,-1);
        tracep->declBit(c+355,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+38,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+40,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+41,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+42,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+43,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+45,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+47,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+48,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+789,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+790,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+791,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+792,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+49,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+50,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+852,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+853,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+356,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+167,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+175,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+793,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+795,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+357,"top cache_dut missEn", false,-1);
        tracep->declBit(c+358,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+51,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+1,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+53,"top cache_dut missFlag", false,-1);
        tracep->declBus(c+359,"top cache_dut rdCnt", false,-1, 1,0);
        tracep->declArray(c+360,"top cache_dut rdBuffer", false,-1, 255,0);
        tracep->declBit(c+368,"top cache_dut replaceEn", false,-1);
        tracep->declBus(c+854,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+815,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+855,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+854,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+151,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+700,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+369,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+370,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+856,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+595,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+345,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+371,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+353,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+860,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+854,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+815,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+855,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+854,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+155,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+700,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+369,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+370,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+856,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+595,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+349,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+371,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+353,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+860,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+854,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+815,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+855,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+854,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+159,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+700,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+372,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+373,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+856,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+596,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+345,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+374,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+354,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+860,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+854,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+815,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+855,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+854,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+163,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+700,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+372,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+373,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+856,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+596,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+349,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+374,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+354,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+860,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+815,"top axi_icache_dut RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+815,"top axi_icache_dut RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+815,"top axi_icache_dut AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+815,"top axi_icache_dut AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+816,"top axi_icache_dut AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+817,"top axi_icache_dut AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+818,"top axi_icache_dut AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+700,"top axi_icache_dut clock", false,-1);
        tracep->declBit(c+701,"top axi_icache_dut reset", false,-1);
        tracep->declBit(c+332,"top axi_icache_dut rw_valid_i", false,-1);
        tracep->declBit(c+31,"top axi_icache_dut rw_ready_o", false,-1);
        tracep->declQuad(c+572,"top axi_icache_dut data_read_o", false,-1, 63,0);
        tracep->declQuad(c+54,"top axi_icache_dut rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+844,"top axi_icache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+574,"top axi_icache_dut rdLast_o", false,-1);
        tracep->declBit(c+588,"top axi_icache_dut dataValid_o", false,-1);
        tracep->declBit(c+2,"top axi_icache_dut instr_fetching", false,-1);
        tracep->declBit(c+764,"top axi_icache_dut axi_ar_ready_i", false,-1);
        tracep->declBit(c+3,"top axi_icache_dut axi_ar_valid_o", false,-1);
        tracep->declQuad(c+4,"top axi_icache_dut axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+819,"top axi_icache_dut axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+822,"top axi_icache_dut axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_icache_dut axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+828,"top axi_icache_dut axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+829,"top axi_icache_dut axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+830,"top axi_icache_dut axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+821,"top axi_icache_dut axi_ar_lock_o", false,-1);
        tracep->declBus(c+831,"top axi_icache_dut axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+822,"top axi_icache_dut axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+832,"top axi_icache_dut axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+6,"top axi_icache_dut axi_r_ready_o", false,-1);
        tracep->declBit(c+571,"top axi_icache_dut axi_r_valid_i", false,-1);
        tracep->declBus(c+765,"top axi_icache_dut axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+572,"top axi_icache_dut axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+574,"top axi_icache_dut axi_r_last_i", false,-1);
        tracep->declBus(c+575,"top axi_icache_dut axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+833,"top axi_icache_dut axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+864,"top axi_icache_dut r_state_idle", false,-1, 1,0);
        tracep->declBus(c+830,"top axi_icache_dut r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+865,"top axi_icache_dut r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+866,"top axi_icache_dut r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+56,"top axi_icache_dut r_state", false,-1, 1,0);
        tracep->declBus(c+597,"top axi_icache_dut r_state_next", false,-1, 1,0);
        tracep->declBit(c+3,"top axi_icache_dut ar_valid", false,-1);
        tracep->declBit(c+6,"top axi_icache_dut r_ready", false,-1);
        tracep->declQuad(c+4,"top axi_icache_dut addr_reg", false,-1, 63,0);
        tracep->declBus(c+867,"top axi_icache_dut AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+822,"top axi_icache_dut axi_id", false,-1, 3,0);
        tracep->declBus(c+821,"top axi_icache_dut axi_user", false,-1, 0,0);
        tracep->declBus(c+828,"top axi_icache_dut axi_len", false,-1, 7,0);
        tracep->declBus(c+829,"top axi_icache_dut axi_size", false,-1, 2,0);
        tracep->declBit(c+700,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+701,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+256,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+267,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+773,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+288,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+268,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+270,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+375,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+377,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+868,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+869,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+700,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+701,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+773,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+378,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+381,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+700,"top ID_u clk", false,-1);
        tracep->declBit(c+701,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+268,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+319,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+325,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+270,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+326,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+328,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+329,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+530,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+528,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+271,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+273,"top ID_u src1sel", false,-1);
        tracep->declBus(c+274,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+275,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+278,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+277,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+276,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+279,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+280,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+281,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+707,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+282,"top ID_u DivEn", false,-1);
        tracep->declBus(c+283,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+286,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+284,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+285,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+384,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+271,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+530,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+528,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+268,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+270,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+280,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+281,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+384,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+273,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+274,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+275,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+278,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+277,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+276,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+279,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+282,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+283,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+286,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+284,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+285,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+385,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+386,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+387,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+388,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+384,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+271,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+700,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+319,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+325,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+280,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+530,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+281,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+528,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+328,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+326,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+329,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+707,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+616+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+270,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+291,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+287,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+700,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+701,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+774,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+316,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+268,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+270,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+271,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+528,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+530,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+275,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+278,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+277,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+276,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+273,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+274,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+279,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+280,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+281,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+282,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+283,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+286,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+289,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+291,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+296,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+298,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+300,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+304,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+307,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+306,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+305,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+294,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+295,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+308,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+314,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+315,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+309,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+310,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+311,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+389,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+391,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+392,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+393,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+394,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+395,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+396,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+870,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+869,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+700,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+701,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+774,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+532,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+397,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+304,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+298,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+296,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+300,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+289,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+291,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+307,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+306,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+305,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+294,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+295,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+312,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+313,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+16,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+326,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+10,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+309,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+310,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+292,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+259,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+302,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+258,"top ex_stage_u is_jump_o", false,-1);
        tracep->declBit(c+583,"top ex_stage_u exNotOk", false,-1);
        tracep->declBit(c+317,"top ex_stage_u rden_ls", false,-1);
        tracep->declBit(c+318,"top ex_stage_u wren_ls", false,-1);
        tracep->declBit(c+582,"top ex_stage_u ls_addr_ok_i", false,-1);
        tracep->declQuad(c+407,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+409,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+411,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+302,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+304,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+407,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+409,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+309,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+310,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+292,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+413,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+414,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+415,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+417,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+418,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+420,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+422,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+422,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+423,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+424,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+425,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+427,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+428,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+429,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+431,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+433,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+435,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+407,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+418,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+417,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+420,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+427,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+414,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+428,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+437,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+424,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+422,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+423,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+417,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+422,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+438,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+407,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+439,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+423,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+422,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+425,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+440,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+442,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+444,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+446,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+448,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+450,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+452,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+407,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+409,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+310,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+435,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+411,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+302,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+307,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+306,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+305,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+454,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+300,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+289,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+259,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+258,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+455,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+457,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+871,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+459,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+460,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+461,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+462,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+464,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+466,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+700,"top forwarding_u clk", false,-1);
        tracep->declBit(c+701,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+314,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+315,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+57,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+328,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+19,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+329,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+326,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+584,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+312,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+313,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+10,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+10,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+58,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+59,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+124,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+467,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+125,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+126,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+468,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+127,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+700,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+701,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+289,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+302,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+291,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+292,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+308,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+311,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+584,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+12,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+14,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+18,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+16,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+19,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+26,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+872,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+869,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+700,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+701,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+584,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+469,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+60,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+700,"top ls_u clk", false,-1);
        tracep->declBit(c+701,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+12,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+14,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+18,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+321,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+325,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+323,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u trap_ls_i", false,-1);
        tracep->declBit(c+584,"top ls_u stall_n", false,-1);
        tracep->declQuad(c+775,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+20,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+585,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+16,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+121,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+29,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+30,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+829,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+777,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+777,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+586,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u rden", false,-1);
        tracep->declBus(c+68,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+121,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+477,"top ls_u wren_last", false,-1);
        tracep->declBit(c+700,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+701,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+28,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+68,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+121,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+12,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+321,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+477,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+775,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+585,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+16,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+121,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+29,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+30,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+829,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+777,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+777,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+586,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+586,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+69,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+70,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+71,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+72,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+73,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+74,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+75,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+829,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+598,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+599,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+600,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+30,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+76,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+77,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+78,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+79,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+18,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+325,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+14,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+323,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+68,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+121,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+128,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+700,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+701,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+12,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+18,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+16,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u CSR_u trap", false,-1);
        tracep->declBit(c+584,"top ls_u CSR_u stall_n", false,-1);
        tracep->declQuad(c+20,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+80,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+81,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+82,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+83,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+84,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+85,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+86,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+87,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+88,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+16,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+89,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+91,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+93,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+95,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+97,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+99,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBit(c+700,"top Dcache_u clk", false,-1);
        tracep->declBit(c+701,"top Dcache_u rst_n", false,-1);
        tracep->declBus(c+478,"top Dcache_u addr_i", false,-1, 31,0);
        tracep->declBit(c+479,"top Dcache_u exValid_i", false,-1);
        tracep->declBit(c+480,"top Dcache_u lsValid_i", false,-1);
        tracep->declBit(c+481,"top Dcache_u op_i", false,-1);
        tracep->declQuad(c+121,"top Dcache_u wr_data_i", false,-1, 63,0);
        tracep->declBus(c+29,"top Dcache_u wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+584,"top Dcache_u stall_n", false,-1);
        tracep->declBit(c+582,"top Dcache_u addr_ok_o", false,-1);
        tracep->declBit(c+777,"top Dcache_u data_notok_o", false,-1);
        tracep->declQuad(c+586,"top Dcache_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+683,"top Dcache_u cacheRdValid_o", false,-1);
        tracep->declBit(c+334,"top Dcache_u axiRdReady", false,-1);
        tracep->declBus(c+682,"top Dcache_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+580,"top Dcache_u rdLast_i", false,-1);
        tracep->declBus(c+543,"top Dcache_u cacheRdAddr_o", false,-1, 31,0);
        tracep->declBus(c+797,"top Dcache_u cacheWrAddr_o", false,-1, 31,0);
        tracep->declQuad(c+335,"top Dcache_u rdData_i", false,-1, 63,0);
        tracep->declBit(c+337,"top Dcache_u dataValid_i", false,-1);
        tracep->declBit(c+338,"top Dcache_u axiWrReady", false,-1);
        tracep->declBit(c+333,"top Dcache_u cacheWrValid_o", false,-1);
        tracep->declArray(c+778,"top Dcache_u cacheWrData_o", false,-1, 255,0);
        tracep->declBus(c+682,"top Dcache_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+542,"top Dcache_u cacheWrMask_o", false,-1, 7,0);
        tracep->declBus(c+681,"top Dcache_u cacheWrSize_o", false,-1, 2,0);
        tracep->declBus(c+819,"top Dcache_u idle", false,-1, 2,0);
        tracep->declBus(c+849,"top Dcache_u compare", false,-1, 2,0);
        tracep->declBus(c+850,"top Dcache_u miss", false,-1, 2,0);
        tracep->declBus(c+829,"top Dcache_u getdata", false,-1, 2,0);
        tracep->declBus(c+851,"top Dcache_u replace", false,-1, 2,0);
        tracep->declBus(c+873,"top Dcache_u uncacheOp", false,-1, 2,0);
        tracep->declBus(c+688,"top Dcache_u cacheCurState", false,-1, 2,0);
        tracep->declBus(c+798,"top Dcache_u cacheNexState", false,-1, 2,0);
        tracep->declBit(c+482,"top Dcache_u cacheHit", false,-1);
        tracep->declBit(c+483,"top Dcache_u way1Hit", false,-1);
        tracep->declBit(c+484,"top Dcache_u way2Hit", false,-1);
        tracep->declArray(c+183,"top Dcache_u dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+187,"top Dcache_u dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+191,"top Dcache_u dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+195,"top Dcache_u dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+544,"top Dcache_u inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+548,"top Dcache_u inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+544,"top Dcache_u inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+548,"top Dcache_u inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+689,"top Dcache_u wenWay1", false,-1);
        tracep->declBit(c+690,"top Dcache_u wenWay2", false,-1);
        tracep->declBit(c+691,"top Dcache_u uncached", false,-1);
        tracep->declBit(c+692,"top Dcache_u idleEn", false,-1);
        tracep->declQuad(c+485,"top Dcache_u reqLatch", false,-1, 32,0);
        tracep->declBus(c+487,"top Dcache_u offset", false,-1, 4,0);
        tracep->declBus(c+488,"top Dcache_u index", false,-1, 5,0);
        tracep->declBus(c+489,"top Dcache_u tag", false,-1, 20,0);
        tracep->declQuad(c+101,"top Dcache_u validArray1", false,-1, 63,0);
        tracep->declQuad(c+103,"top Dcache_u validArray2", false,-1, 63,0);
        tracep->declBit(c+129,"top Dcache_u bitValid1", false,-1);
        tracep->declBit(c+130,"top Dcache_u bitValid2", false,-1);
        tracep->declBit(c+799,"top Dcache_u bitValid1_d", false,-1);
        tracep->declBit(c+800,"top Dcache_u bitValid2_d", false,-1);
        tracep->declBus(c+801,"top Dcache_u tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+802,"top Dcache_u tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+131,"top Dcache_u tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+132,"top Dcache_u tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+874,"top Dcache_u validWay1_q", false,-1);
        tracep->declBit(c+875,"top Dcache_u validWay2_q", false,-1);
        tracep->declBus(c+105,"top Dcache_u testTag", false,-1, 20,0);
        tracep->declBus(c+106,"top Dcache_u tagtest", false,-1, 20,0);
        tracep->declBit(c+107,"top Dcache_u replaceEnDelay", false,-1);
        tracep->declBit(c+693,"top Dcache_u compareEn", false,-1);
        tracep->declArray(c+199,"top Dcache_u way1Data", false,-1, 255,0);
        tracep->declArray(c+207,"top Dcache_u way2Data", false,-1, 255,0);
        tracep->declQuad(c+803,"top Dcache_u rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+805,"top Dcache_u rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+694,"top Dcache_u missEn", false,-1);
        tracep->declBit(c+695,"top Dcache_u getdataEn", false,-1);
        tracep->declQuad(c+490,"top Dcache_u addrToRead", false,-1, 63,0);
        tracep->declBit(c+680,"top Dcache_u randomBit", false,-1);
        tracep->declBit(c+107,"top Dcache_u missFlag", false,-1);
        tracep->declBus(c+492,"top Dcache_u rdCnt", false,-1, 1,0);
        tracep->declArray(c+493,"top Dcache_u rdBuffer", false,-1, 255,0);
        tracep->declBit(c+696,"top Dcache_u replaceEn", false,-1);
        tracep->declBit(c+108,"top Dcache_u wenDelay1", false,-1);
        tracep->declBit(c+109,"top Dcache_u wenDelay2", false,-1);
        tracep->declQuad(c+501,"top Dcache_u wrDataLatch", false,-1, 63,0);
        tracep->declBus(c+110,"top Dcache_u wrMaskLatch", false,-1, 7,0);
        tracep->declQuad(c+503,"top Dcache_u dirtyArray1", false,-1, 63,0);
        tracep->declQuad(c+505,"top Dcache_u dirtyArray2", false,-1, 63,0);
        tracep->declBit(c+507,"top Dcache_u wrLow", false,-1);
        tracep->declBit(c+508,"top Dcache_u wrHigh", false,-1);
        tracep->declQuad(c+509,"top Dcache_u storeData", false,-1, 63,0);
        tracep->declBus(c+511,"top Dcache_u storeMask", false,-1, 7,0);
        tracep->declQuad(c+512,"top Dcache_u sramMask", false,-1, 63,0);
        tracep->declArray(c+552,"top Dcache_u maskWay1_1", false,-1, 127,0);
        tracep->declArray(c+556,"top Dcache_u maskWay1_2", false,-1, 127,0);
        tracep->declArray(c+552,"top Dcache_u maskWay2_1", false,-1, 127,0);
        tracep->declArray(c+556,"top Dcache_u maskWay2_2", false,-1, 127,0);
        tracep->declBit(c+560,"top Dcache_u wrMiss", false,-1);
        tracep->declBit(c+561,"top Dcache_u rdMiss", false,-1);
        tracep->declBit(c+111,"top Dcache_u replaceWay", false,-1);
        tracep->declBit(c+807,"top Dcache_u needWrBk", false,-1);
        tracep->declBit(c+333,"top Dcache_u needWrBk_Reg", false,-1);
        tracep->declBit(c+112,"top Dcache_u uncache", false,-1);
        tracep->declBit(c+333,"top Dcache_u axiWrBusy", false,-1);
        tracep->declBus(c+797,"top Dcache_u addrToWrite", false,-1, 31,0);
        tracep->declBit(c+697,"top Dcache_u uncacheOpEn", false,-1);
        tracep->declBit(c+562,"top Dcache_u uncacheWrValid", false,-1);
        tracep->declBit(c+601,"top Dcache_u uncacheOpOk", false,-1);
        tracep->declBit(c+808,"top Dcache_u uncacheRdValid", false,-1);
        tracep->declBit(c+113,"top Dcache_u uncacheRdOk", false,-1);
        tracep->declBit(c+514,"top Dcache_u uncacheWrOk", false,-1);
        tracep->declBus(c+515,"top Dcache_u uncacheRdAddr", false,-1, 31,0);
        tracep->declQuad(c+114,"top Dcache_u temp", false,-1, 63,0);
        tracep->declBus(c+854,"top Dcache_u iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+815,"top Dcache_u iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+855,"top Dcache_u iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+854,"top Dcache_u iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+183,"top Dcache_u iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+700,"top Dcache_u iramWay1_1 CLK", false,-1);
        tracep->declBit(c+809,"top Dcache_u iramWay1_1 CEN", false,-1);
        tracep->declBit(c+698,"top Dcache_u iramWay1_1 WEN", false,-1);
        tracep->declArray(c+563,"top Dcache_u iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+602,"top Dcache_u iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+544,"top Dcache_u iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+810,"top Dcache_u iramWay1_1 cen", false,-1);
        tracep->declBit(c+689,"top Dcache_u iramWay1_1 wen", false,-1);
        tracep->declArray(c+552,"top Dcache_u iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+854,"top Dcache_u iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+815,"top Dcache_u iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+855,"top Dcache_u iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+854,"top Dcache_u iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+187,"top Dcache_u iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+700,"top Dcache_u iramWay1_2 CLK", false,-1);
        tracep->declBit(c+809,"top Dcache_u iramWay1_2 CEN", false,-1);
        tracep->declBit(c+698,"top Dcache_u iramWay1_2 WEN", false,-1);
        tracep->declArray(c+567,"top Dcache_u iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+602,"top Dcache_u iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+548,"top Dcache_u iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+810,"top Dcache_u iramWay1_2 cen", false,-1);
        tracep->declBit(c+689,"top Dcache_u iramWay1_2 wen", false,-1);
        tracep->declArray(c+556,"top Dcache_u iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+854,"top Dcache_u iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+815,"top Dcache_u iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+855,"top Dcache_u iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+854,"top Dcache_u iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+191,"top Dcache_u iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+700,"top Dcache_u iramWay2_1 CLK", false,-1);
        tracep->declBit(c+811,"top Dcache_u iramWay2_1 CEN", false,-1);
        tracep->declBit(c+699,"top Dcache_u iramWay2_1 WEN", false,-1);
        tracep->declArray(c+563,"top Dcache_u iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+603,"top Dcache_u iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+544,"top Dcache_u iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+812,"top Dcache_u iramWay2_1 cen", false,-1);
        tracep->declBit(c+690,"top Dcache_u iramWay2_1 wen", false,-1);
        tracep->declArray(c+552,"top Dcache_u iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+854,"top Dcache_u iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+815,"top Dcache_u iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+855,"top Dcache_u iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+854,"top Dcache_u iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+195,"top Dcache_u iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+700,"top Dcache_u iramWay2_2 CLK", false,-1);
        tracep->declBit(c+811,"top Dcache_u iramWay2_2 CEN", false,-1);
        tracep->declBit(c+699,"top Dcache_u iramWay2_2 WEN", false,-1);
        tracep->declArray(c+567,"top Dcache_u iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+603,"top Dcache_u iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+548,"top Dcache_u iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+812,"top Dcache_u iramWay2_2 cen", false,-1);
        tracep->declBit(c+690,"top Dcache_u iramWay2_2 wen", false,-1);
        tracep->declArray(c+556,"top Dcache_u iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+815,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+815,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+815,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+815,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+816,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+817,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+818,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+700,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+701,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+683,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+334,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+335,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+684,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+682,"top axi_ls_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+580,"top axi_ls_u rdLast_o", false,-1);
        tracep->declBit(c+337,"top axi_ls_u dataValid_o", false,-1);
        tracep->declBit(c+333,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+338,"top axi_ls_u wr_ready_o", false,-1);
        tracep->declArray(c+778,"top axi_ls_u cacheWrData_i", false,-1, 255,0);
        tracep->declBus(c+682,"top axi_ls_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+681,"top axi_ls_u storeSize", false,-1, 2,0);
        tracep->declBus(c+542,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+686,"top axi_ls_u cacheWrAddr_i", false,-1, 63,0);
        tracep->declBit(c+766,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+248,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+148,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+819,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+834,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+7,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+681,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+830,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+821,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+835,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+822,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+822,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+576,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+249,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+250,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+150,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+252,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+820,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+253,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+767,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+768,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+769,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+770,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+771,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+254,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+8,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+819,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+834,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+682,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+829,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+830,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+821,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+831,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+822,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+836,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+255,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+577,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+772,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+578,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+580,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+575,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+837,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+864,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+830,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+865,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+866,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+516,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+604,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+248,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+249,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+253,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+876,"top axi_ls_u trans_ok", false,-1);
        tracep->declBit(c+252,"top axi_ls_u wrLast", false,-1);
        tracep->declQuad(c+148,"top axi_ls_u wrAddr_reg", false,-1, 63,0);
        tracep->declArray(c+215,"top axi_ls_u wr_data_reg", false,-1, 255,0);
        tracep->declBus(c+223,"top axi_ls_u wrMask_reg", false,-1, 7,0);
        tracep->declBus(c+116,"top axi_ls_u wrCnt", false,-1, 1,0);
        tracep->declBus(c+7,"top axi_ls_u lenthReg", false,-1, 7,0);
        tracep->declBus(c+864,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+830,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+865,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+866,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+517,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+605,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+254,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+255,"top axi_ls_u r_ready", false,-1);
        tracep->declQuad(c+8,"top axi_ls_u rdAddr_reg", false,-1, 63,0);
        tracep->declBit(c+337,"top axi_ls_u dataValid_reg", false,-1);
        tracep->declQuad(c+335,"top axi_ls_u data_read_reg", false,-1, 63,0);
        tracep->declBus(c+867,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+834,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+821,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+828,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+829,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+224,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+700,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+701,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+12,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+18,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+16,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+775,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+19,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+20,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+584,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+319,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+325,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+321,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+323,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+329,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+330,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+877,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+869,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+700,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+701,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+584,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+606,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+518,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+319,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+325,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+321,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+323,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+330,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+328,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+326,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+700,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+701,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+287,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+258,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+284,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+285,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+261,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+583,"top pipline_ctrl_u ex_not_ok", false,-1);
        tracep->declBit(c+585,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+581,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+773,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+773,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+774,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+584,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+584,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+288,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+316,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBus(c+878,"top lsAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+878,"top lsAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+241,"top lsAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+760,"top lsAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+700,"top lsAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+701,"top lsAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+139,"top lsAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+819,"top lsAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+245,"top lsAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+138,"top lsAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+761,"top lsAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+145,"top lsAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+246,"top lsAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+144,"top lsAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+147,"top lsAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+146,"top lsAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+247,"top lsAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+239,"top lsAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+819,"top lsAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+238,"top lsAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+133,"top lsAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+136,"top lsAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+135,"top lsAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+134,"top lsAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+244,"top lsAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+225,"top lsAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+138,"top lsAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+144,"top lsAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+147,"top lsAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+146,"top lsAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+227,"top lsAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+133,"top lsAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+136,"top lsAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+135,"top lsAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+134,"top lsAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+879,"top lsAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+880,"top lsAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+229,"top lsAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+231,"top lsAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+233,"top lsAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+235,"top lsAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+813,"top lsAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+814,"top lsAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+881,"top lsAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+883,"top lsAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+237,"top lsAxiSlaveRam_u aw_en", false,-1);
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
    VlWide<4>/*127:0*/ __Vtemp256;
    VlWide<4>/*127:0*/ __Vtemp257;
    VlWide<3>/*95:0*/ __Vtemp258;
    VlWide<3>/*95:0*/ __Vtemp260;
    VlWide<3>/*95:0*/ __Vtemp261;
    VlWide<3>/*95:0*/ __Vtemp262;
    VlWide<3>/*95:0*/ __Vtemp263;
    VlWide<3>/*95:0*/ __Vtemp264;
    VlWide<3>/*95:0*/ __Vtemp267;
    VlWide<3>/*95:0*/ __Vtemp268;
    VlWide<3>/*95:0*/ __Vtemp269;
    VlWide<3>/*95:0*/ __Vtemp270;
    VlWide<3>/*95:0*/ __Vtemp271;
    VlWide<8>/*255:0*/ __Vtemp276;
    VlWide<10>/*319:0*/ __Vtemp281;
    VlWide<4>/*127:0*/ __Vtemp284;
    VlWide<4>/*127:0*/ __Vtemp291;
    VlWide<4>/*127:0*/ __Vtemp294;
    VlWide<4>/*127:0*/ __Vtemp301;
    VlWide<4>/*127:0*/ __Vtemp304;
    VlWide<4>/*127:0*/ __Vtemp313;
    VlWide<4>/*127:0*/ __Vtemp316;
    VlWide<4>/*127:0*/ __Vtemp325;
    VlWide<4>/*127:0*/ __Vtemp328;
    VlWide<4>/*127:0*/ __Vtemp338;
    VlWide<4>/*127:0*/ __Vtemp341;
    VlWide<4>/*127:0*/ __Vtemp351;
    VlWide<8>/*255:0*/ __Vtemp352;
    VlWide<8>/*255:0*/ __Vtemp355;
    VlWide<4>/*127:0*/ __Vtemp356;
    VlWide<4>/*127:0*/ __Vtemp357;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
        tracep->fullBit(oldp+2,((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+3,((1U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullQData(oldp+4,(vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg),64);
        tracep->fullBit(oldp+6,((3U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullCData(oldp+7,(vlSelf->top__DOT__axi_ls_u__DOT__lenthReg),8);
        tracep->fullQData(oldp+8,(vlSelf->top__DOT__axi_ls_u__DOT__rdAddr_reg),64);
        tracep->fullQData(oldp+10,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullQData(oldp+12,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                     >> 2U)))),64);
        tracep->fullQData(oldp+14,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                     >> 2U)))),64);
        tracep->fullQData(oldp+16,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                     >> 2U)))),64);
        tracep->fullIData(oldp+18,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                     << 0x1eU) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 2U))),32);
        tracep->fullBit(oldp+19,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                        >> 1U))));
        tracep->fullQData(oldp+20,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+22,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+24,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+26,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullBit(oldp+27,((3U == (0x7fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 2U)))));
        tracep->fullBit(oldp+28,((8U == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 4U)))));
        tracep->fullCData(oldp+29,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullBit(oldp+31,((0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullIData(oldp+32,((((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                              >> 0xbU)) 
                                     << 0xbU) | (0x7e0U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 5U)) 
                                                    << 5U)))),32);
        tracep->fullCData(oldp+33,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U)),4);
        tracep->fullCData(oldp+34,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? (IData)(vlSelf->top__DOT__if_axi_ar_region_o)
                                     : (IData)(vlSelf->top__DOT__ls_axi_ar_region_o))),4);
        tracep->fullBit(oldp+35,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        tracep->fullBit(oldp+36,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
        tracep->fullBit(oldp+37,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
        tracep->fullQData(oldp+38,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
        tracep->fullCData(oldp+40,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
        tracep->fullCData(oldp+41,((0x3fU & (IData)(
                                                    (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                     >> 5U)))),6);
        tracep->fullIData(oldp+42,((0x1fffffU & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 0xbU)))),21);
        tracep->fullQData(oldp+43,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
        tracep->fullQData(oldp+45,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
        tracep->fullBit(oldp+47,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 5U))))))));
        tracep->fullBit(oldp+48,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 5U))))))));
        tracep->fullIData(oldp+49,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                   [(0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))]),21);
        tracep->fullIData(oldp+50,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                   [(0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))]),21);
        tracep->fullQData(oldp+51,((((QData)((IData)(
                                                     (0x1fffffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                 >> 0xbU))))) 
                                     << 0xbU) | (QData)((IData)(
                                                                (0x7e0U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                             >> 5U)) 
                                                                    << 5U)))))),64);
        tracep->fullBit(oldp+53,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
        tracep->fullQData(oldp+54,((QData)((IData)(
                                                   (((IData)(
                                                             (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                              >> 0xbU)) 
                                                     << 0xbU) 
                                                    | (0x7e0U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                   >> 5U)) 
                                                          << 5U)))))),64);
        tracep->fullCData(oldp+56,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state),2);
        tracep->fullCData(oldp+57,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 9U))),5);
        tracep->fullBit(oldp+58,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+59,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullWData(oldp+60,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullCData(oldp+68,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                          >> 0xeU))),3);
        tracep->fullBit(oldp+69,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (0U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+70,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (4U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+71,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+72,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (5U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+73,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+74,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (6U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+75,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+76,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (0U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+77,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+78,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+79,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+80,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xeU)))));
        tracep->fullBit(oldp+81,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xeU)))));
        tracep->fullBit(oldp+82,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xeU)))));
        tracep->fullBit(oldp+83,((0x1cU == (0x1fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 4U)))));
        tracep->fullBit(oldp+84,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+85,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+86,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+87,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+88,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+89,(((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                      >> 2U))) 
                                    | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+91,(((~ (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                              >> 2U)))) 
                                    & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+97,(((0x1cU == (0x1fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 4U)))
                                     ? 0xbULL : 0ULL)),64);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__Dcache_u__DOT__validArray1),64);
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__Dcache_u__DOT__validArray2),64);
        tracep->fullIData(oldp+105,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [0x3cU]),21);
        tracep->fullIData(oldp+106,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [0x23U]),21);
        tracep->fullBit(oldp+107,(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay));
        tracep->fullBit(oldp+108,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay1));
        tracep->fullBit(oldp+109,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay2));
        tracep->fullCData(oldp+110,(vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch),8);
        tracep->fullBit(oldp+111,(vlSelf->top__DOT__Dcache_u__DOT__replaceWay));
        tracep->fullBit(oldp+112,(vlSelf->top__DOT__Dcache_u__DOT__uncache));
        tracep->fullBit(oldp+113,(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk));
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__Dcache_u__DOT__temp),64);
        tracep->fullCData(oldp+116,(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt),2);
        tracep->fullCData(oldp+117,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                          ? 0U : 1U)
                                      : 0U)),4);
        tracep->fullCData(oldp+118,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? (0xfU & ((0U 
                                                  != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                                  ? (IData)(vlSelf->top__DOT__if_axi_ar_region_o)
                                                  : (IData)(vlSelf->top__DOT__ls_axi_ar_region_o)))
                                      : 0U)),4);
        tracep->fullBit(oldp+119,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+120,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullQData(oldp+121,((((0U == (0x1fU 
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
        tracep->fullBit(oldp+123,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullBit(oldp+124,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+125,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+126,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+127,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+128,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+129,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+130,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+131,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+132,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullBit(oldp+133,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready));
        tracep->fullBit(oldp+134,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+135,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp),2);
        tracep->fullQData(oldp+136,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata),64);
        tracep->fullBit(oldp+138,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullQData(oldp+139,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg
                                      : 0ULL)),64);
        tracep->fullCData(oldp+141,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? 1U : 0U)),4);
        tracep->fullCData(oldp+142,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? 1U : 0U)),2);
        tracep->fullCData(oldp+143,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? 0xfU : 0U)),4);
        tracep->fullBit(oldp+144,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullCData(oldp+145,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? (0xffU & (IData)(vlSelf->top__DOT__ls_axi_w_strb_o))
                                      : 0U)),8);
        tracep->fullBit(oldp+146,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullCData(oldp+147,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullQData(oldp+148,(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg),64);
        tracep->fullCData(oldp+150,(vlSelf->top__DOT__ls_axi_w_strb_o),8);
        tracep->fullWData(oldp+151,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+155,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+159,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+163,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+167,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+175,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullWData(oldp+183,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+187,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+191,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+195,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+199,(vlSelf->top__DOT__Dcache_u__DOT__way1Data),256);
        tracep->fullWData(oldp+207,(vlSelf->top__DOT__Dcache_u__DOT__way2Data),256);
        tracep->fullWData(oldp+215,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),256);
        tracep->fullCData(oldp+223,(vlSelf->top__DOT__axi_ls_u__DOT__wrMask_reg),8);
        tracep->fullCData(oldp+224,((0x38U & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg) 
                                              << 3U))),6);
        tracep->fullQData(oldp+225,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+227,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+229,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+231,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+233,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+235,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+237,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        tracep->fullBit(oldp+238,(vlSelf->top__DOT__axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+239,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr
                                      : 0ULL)),64);
        tracep->fullCData(oldp+241,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? 3U : 0U)),3);
        tracep->fullCData(oldp+242,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? 1U : 0U)),2);
        tracep->fullCData(oldp+243,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? 2U : 0U)),4);
        tracep->fullBit(oldp+244,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready))
                                    : 0U)));
        tracep->fullBit(oldp+245,(vlSelf->top__DOT__axi_mmio_aw_valid_o));
        tracep->fullBit(oldp+246,(vlSelf->top__DOT__axi_mmio_w_valid_o));
        tracep->fullBit(oldp+247,(vlSelf->top__DOT__axi_mmio_b_ready_o));
        tracep->fullBit(oldp+248,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullBit(oldp+249,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+250,(vlSelf->top__DOT__ls_axi_w_data_o),64);
        tracep->fullBit(oldp+252,(vlSelf->top__DOT__axi_ls_u__DOT__wrLast));
        tracep->fullBit(oldp+253,((2U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullBit(oldp+254,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullBit(oldp+255,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullQData(oldp+256,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+258,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+259,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+261,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+262,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullQData(oldp+264,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+266,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullIData(oldp+267,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+268,((((QData)((IData)(
                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+270,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+271,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+273,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+274,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+275,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+276,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+277,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+278,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+279,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+280,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+281,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+282,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+283,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+284,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+285,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+286,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+287,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+288,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+289,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullIData(oldp+291,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1bU))),32);
        tracep->fullQData(oldp+292,(vlSelf->top__DOT__alures_ex),64);
        tracep->fullBit(oldp+294,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+295,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x10U))),2);
        tracep->fullQData(oldp+296,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+298,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+300,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+302,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+304,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+305,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+306,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+307,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+308,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+309,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+310,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+311,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullCData(oldp+312,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+313,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+314,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+315,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 5U))),5);
        tracep->fullBit(oldp+316,(vlSelf->top__DOT__ex_flush));
        tracep->fullBit(oldp+317,((3U == (0x7fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 5U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1bU))))));
        tracep->fullBit(oldp+318,((8U == (0x1fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 3U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1dU))))));
        tracep->fullQData(oldp+319,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+321,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+323,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+325,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+326,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+328,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+329,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+330,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullBit(oldp+332,(vlSelf->top__DOT__rw_valid_i));
        tracep->fullBit(oldp+333,(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
        tracep->fullBit(oldp+334,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullQData(oldp+335,(vlSelf->top__DOT__axi_ls_u__DOT__data_read_reg),64);
        tracep->fullBit(oldp+337,(vlSelf->top__DOT__axi_ls_u__DOT__dataValid_reg));
        tracep->fullBit(oldp+338,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullBit(oldp+339,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
        tracep->fullQData(oldp+340,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullBit(oldp+342,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullIData(oldp+343,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullCData(oldp+344,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        __Vtemp256[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        __Vtemp256[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        __Vtemp256[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        __Vtemp256[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        tracep->fullWData(oldp+345,(__Vtemp256),128);
        __Vtemp257[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        __Vtemp257[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        __Vtemp257[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        __Vtemp257[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        tracep->fullWData(oldp+349,(__Vtemp257),128);
        tracep->fullBit(oldp+353,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
        tracep->fullBit(oldp+354,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
        tracep->fullBit(oldp+355,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+356,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+357,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+358,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullCData(oldp+359,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
        tracep->fullWData(oldp+360,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
        tracep->fullBit(oldp+368,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+369,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+370,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
        tracep->fullBit(oldp+371,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+372,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+373,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
        tracep->fullBit(oldp+374,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullQData(oldp+375,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+377,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp258[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                           ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->top__DOT__sram_rdata 
                                               >> 0x20U))
                                    : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp258[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp258[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                    ? 0ULL : vlSelf->top__DOT__pc_new) 
                                  >> 0x20U));
        tracep->fullWData(oldp+378,(__Vtemp258),96);
        tracep->fullWData(oldp+381,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+384,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+385,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+386,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+387,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+388,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+389,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+391,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+392,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+393,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+394,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+395,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+396,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+397,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullQData(oldp+407,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+409,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+411,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp260, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp261, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp262, __Vtemp260, __Vtemp261);
        VL_EXTEND_WI(65,1, __Vtemp263, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp264, __Vtemp262, __Vtemp263);
        tracep->fullBit(oldp+413,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp264[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+414,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+415,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+417,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+418,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+420,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+422,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+423,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+424,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+425,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp267, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp268, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp269, __Vtemp267, __Vtemp268);
        VL_EXTEND_WI(65,1, __Vtemp270, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp271, __Vtemp269, __Vtemp270);
        tracep->fullBit(oldp+427,((1U & __Vtemp271[2U])));
        tracep->fullBit(oldp+428,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+429,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+431,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+433,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+435,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+437,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+438,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+439,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+440,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+442,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+444,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+446,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+448,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+450,(((0x4000000U & 
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
        tracep->fullQData(oldp+452,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+454,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+455,(((((QData)((IData)(
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
        tracep->fullQData(oldp+457,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+459,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+460,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+461,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+462,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+464,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+466,((1U & ((0x200U & 
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
        tracep->fullBit(oldp+467,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+468,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        __Vtemp276[0U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                           << 2U) | ((2U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xeU)) 
                                     | (1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        __Vtemp276[1U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                           >> 0x1eU) | ((IData)((vlSelf->top__DOT__alures_ex 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp276[2U] = (((IData)((vlSelf->top__DOT__alures_ex 
                                    >> 0x20U)) >> 0x1eU) 
                          | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                             << 2U));
        __Vtemp276[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                           >> 0x1eU) | ((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp276[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                    >> 0x20U)) >> 0x1eU) 
                          | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                              << 7U) | (0x7cU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                 >> 0x19U))));
        __Vtemp276[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                 >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                     >> 0x19U))));
        __Vtemp276[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                 >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                     >> 0x19U))));
        __Vtemp276[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                >> 0x19U));
        tracep->fullWData(oldp+469,(__Vtemp276),226);
        tracep->fullBit(oldp+477,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullIData(oldp+478,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
        tracep->fullBit(oldp+479,(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i));
        tracep->fullBit(oldp+480,(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i));
        tracep->fullBit(oldp+481,(((3U != (0x7fU & 
                                           ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 5U) 
                                            | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1bU)))) 
                                   | (8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 3U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1dU)))))));
        tracep->fullBit(oldp+482,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
        tracep->fullBit(oldp+483,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
        tracep->fullBit(oldp+484,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
        tracep->fullQData(oldp+485,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
        tracep->fullCData(oldp+487,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
        tracep->fullCData(oldp+488,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+489,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullQData(oldp+490,((((QData)((IData)(
                                                      (0x1fffffU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                  >> 0xbU))))) 
                                      << 0xbU) | (QData)((IData)(
                                                                 (0x7e0U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                              >> 5U)) 
                                                                     << 5U)))))),64);
        tracep->fullCData(oldp+492,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
        tracep->fullWData(oldp+493,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
        tracep->fullQData(oldp+501,(vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch),64);
        tracep->fullQData(oldp+503,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1),64);
        tracep->fullQData(oldp+505,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2),64);
        tracep->fullBit(oldp+507,(vlSelf->top__DOT__Dcache_u__DOT__wrLow));
        tracep->fullBit(oldp+508,(vlSelf->top__DOT__Dcache_u__DOT__wrHigh));
        tracep->fullQData(oldp+509,(vlSelf->top__DOT__Dcache_u__DOT__storeData),64);
        tracep->fullCData(oldp+511,(vlSelf->top__DOT__Dcache_u__DOT__storeMask),8);
        tracep->fullQData(oldp+512,(vlSelf->top__DOT__Dcache_u__DOT__sramMask),64);
        tracep->fullBit(oldp+514,(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk));
        tracep->fullIData(oldp+515,((IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)),32);
        tracep->fullCData(oldp+516,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullCData(oldp+517,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullWData(oldp+518,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullQData(oldp+528,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+530,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp281[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           << 0x1bU) | (((IData)(vlSelf->top__DOT__aluctr_id) 
                                         << 0x16U) 
                                        | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
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
        __Vtemp281[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp281[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs1_idx_id])) 
                             << 0x1bU));
        __Vtemp281[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs1_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp281[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs2_idx_id])) 
                             << 0x1bU));
        __Vtemp281[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs2_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp281[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | (((IData)(vlSelf->top__DOT__ex_flush)
                               ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                             << 0x1bU));
        __Vtemp281[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                             ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                           >> 5U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                     << 0x1bU));
        __Vtemp281[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                           >> 5U) | ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                                ? 0ULL
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp281[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                   >> 0x20U)) >> 5U);
        tracep->fullWData(oldp+532,(__Vtemp281),315);
        tracep->fullCData(oldp+542,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (0xffU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask))
                                      : 0xffU)),8);
        tracep->fullIData(oldp+543,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)
                                      : (((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0xbU)) 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U))))),32);
        VL_EXTEND_WQ(128,64, __Vtemp284, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp291[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U];
            __Vtemp291[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U];
            __Vtemp291[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U];
            __Vtemp291[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U];
        } else {
            __Vtemp291[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp284[0U])
                               : 0U);
            __Vtemp291[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp284[1U])
                               : 0U);
            __Vtemp291[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp284[2U])
                               : 0U);
            __Vtemp291[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp284[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+544,(__Vtemp291),128);
        VL_EXTEND_WQ(128,64, __Vtemp294, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp301[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U];
            __Vtemp301[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U];
            __Vtemp301[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U];
            __Vtemp301[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U];
        } else {
            __Vtemp301[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp294[0U])
                               : 0U);
            __Vtemp301[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp294[1U])
                               : 0U);
            __Vtemp301[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp294[2U])
                               : 0U);
            __Vtemp301[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp294[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+548,(__Vtemp301),128);
        VL_EXTEND_WQ(128,64, __Vtemp304, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp313[0U] = 0xffffffffU;
            __Vtemp313[1U] = 0xffffffffU;
            __Vtemp313[2U] = 0xffffffffU;
            __Vtemp313[3U] = 0xffffffffU;
        } else {
            __Vtemp313[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp304[0U])
                                   : 0U) : 0U);
            __Vtemp313[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp304[1U])
                                   : 0U) : 0U);
            __Vtemp313[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp304[2U])
                                   : 0U) : 0U);
            __Vtemp313[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp304[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+552,(__Vtemp313),128);
        VL_EXTEND_WQ(128,64, __Vtemp316, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp325[0U] = 0xffffffffU;
            __Vtemp325[1U] = 0xffffffffU;
            __Vtemp325[2U] = 0xffffffffU;
            __Vtemp325[3U] = 0xffffffffU;
        } else {
            __Vtemp325[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp316[0U])
                                   : 0U) : 0U);
            __Vtemp325[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp316[1U])
                                   : 0U) : 0U);
            __Vtemp325[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp316[2U])
                                   : 0U) : 0U);
            __Vtemp325[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp316[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+556,(__Vtemp325),128);
        tracep->fullBit(oldp+560,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+561,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+562,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk)))));
        VL_EXTEND_WQ(128,64, __Vtemp328, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp338[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                              ? 0xffffffffU : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? 0U
                                                     : 
                                                    __Vtemp328[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp338[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                              ? 0xffffffffU : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? 0U
                                                     : 
                                                    __Vtemp328[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp338[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                              ? 0xffffffffU : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                                     : 
                                                    __Vtemp328[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp338[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                              ? 0xffffffffU : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                                >> 0x20U))
                                                     : 
                                                    __Vtemp328[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+563,(__Vtemp338),128);
        VL_EXTEND_WQ(128,64, __Vtemp341, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp351[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                              ? 0xffffffffU : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? 0U
                                                     : 
                                                    __Vtemp341[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp351[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                              ? 0xffffffffU : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? 0U
                                                     : 
                                                    __Vtemp341[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp351[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                              ? 0xffffffffU : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                                     : 
                                                    __Vtemp341[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp351[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                              ? 0xffffffffU : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                                >> 0x20U))
                                                     : 
                                                    __Vtemp341[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+567,(__Vtemp351),128);
        tracep->fullBit(oldp+571,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullQData(oldp+572,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+574,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+575,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+576,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready));
        tracep->fullBit(oldp+577,(vlSelf->top__DOT__ls_axi_r_valid_i));
        tracep->fullQData(oldp+578,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data
                                      : 0ULL)),64);
        tracep->fullBit(oldp+580,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullBit(oldp+581,(vlSelf->top__DOT__if_stall_n));
        tracep->fullBit(oldp+582,(vlSelf->top__DOT__ls_addr_ok_i));
        tracep->fullBit(oldp+583,((1U & (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))));
        tracep->fullBit(oldp+584,(vlSelf->top__DOT__ls_stall_n));
        tracep->fullBit(oldp+585,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullQData(oldp+586,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullBit(oldp+588,(vlSelf->top__DOT__dataValid_o));
        tracep->fullBit(oldp+589,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+590,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+591,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+593,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullCData(oldp+594,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullCData(oldp+595,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+596,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+597,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
        tracep->fullCData(oldp+598,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+599,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+600,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+601,(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk));
        tracep->fullCData(oldp+602,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+603,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+604,(vlSelf->top__DOT__axi_ls_u__DOT__w_state_next),2);
        tracep->fullCData(oldp+605,(vlSelf->top__DOT__axi_ls_u__DOT__r_state_next),2);
        tracep->fullWData(oldp+606,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullQData(oldp+616,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+618,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+620,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+622,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+624,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+626,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+628,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+630,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+632,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+634,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+636,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+638,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+640,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+642,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+644,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+646,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+648,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+650,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+652,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+654,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+656,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+658,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+660,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+662,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+664,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+666,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+668,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+670,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+672,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+674,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+676,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+678,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+680,(vlSelf->top__DOT__Dcache_u__DOT__randomBit));
        tracep->fullCData(oldp+681,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? 0U : 3U)),3);
        tracep->fullCData(oldp+682,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? 0U : 3U)),8);
        tracep->fullBit(oldp+683,(vlSelf->top__DOT__DcacheRdValid));
        tracep->fullQData(oldp+684,(vlSelf->top__DOT__DcacheRdAddr),64);
        tracep->fullQData(oldp+686,(vlSelf->top__DOT__DcacheWrAddr),64);
        tracep->fullCData(oldp+688,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
        tracep->fullBit(oldp+689,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
        tracep->fullBit(oldp+690,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
        tracep->fullBit(oldp+691,(vlSelf->top__DOT__Dcache_u__DOT__uncached));
        tracep->fullBit(oldp+692,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+693,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+694,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+695,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+696,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+697,((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+698,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
        tracep->fullBit(oldp+699,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
        tracep->fullBit(oldp+700,(vlSelf->clk));
        tracep->fullBit(oldp+701,(vlSelf->rst_n));
        tracep->fullQData(oldp+702,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+704,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+706,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+707,(vlSelf->regA0),64);
        tracep->fullBit(oldp+709,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+710,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+711,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+712,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+714,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+715,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+716,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+717,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+718,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+719,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+720,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+721,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+722,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+723,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+724,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+725,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+726,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+727,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+729,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+730,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+731,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+732,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+733,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+734,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+736,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+737,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+738,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+739,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+740,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+741,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+742,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+743,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+744,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+745,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+746,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+747,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+748,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+750,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+751,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+752,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+753,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+754,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+755,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+756,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+757,(vlSelf->axi_b_user_i));
        tracep->fullCData(oldp+758,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                          ? 3U : ((6U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                   ? 0U
                                                   : 3U))
                                      : 0U)),8);
        tracep->fullCData(oldp+759,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? (0xffU & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__lenthReg))
                                      : 0U)),8);
        tracep->fullCData(oldp+760,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                          ? 0U : 3U)
                                      : 0U)),3);
        tracep->fullQData(oldp+761,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? vlSelf->top__DOT__ls_axi_w_data_o
                                      : 0ULL)),64);
        tracep->fullBit(oldp+763,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrLast))
                                    : 0U)));
        tracep->fullBit(oldp+764,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? 0U
                                    : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullCData(oldp+765,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0U : (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                                : (IData)(vlSelf->axi_r_resp_i))))),2);
        tracep->fullBit(oldp+766,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)
                                    : (IData)(vlSelf->axi_aw_ready_i))));
        tracep->fullBit(oldp+767,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid)
                                    : (IData)(vlSelf->axi_b_valid_i))));
        tracep->fullCData(oldp+768,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp)
                                      : (IData)(vlSelf->axi_b_resp_i))),2);
        tracep->fullCData(oldp+769,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? 1U : (IData)(vlSelf->axi_b_id_i))),4);
        tracep->fullBit(oldp+770,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->top__DOT__axi_mmio_b_user_i)
                                    : (IData)(vlSelf->axi_b_user_i))));
        tracep->fullBit(oldp+771,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? (1U 
                                                   & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                    : 0U)));
        tracep->fullCData(oldp+772,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? (3U & ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                                : (IData)(vlSelf->axi_r_resp_i)))
                                      : 0U)),2);
        tracep->fullBit(oldp+773,((1U & (~ ((((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                              | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                             | (IData)(vlSelf->top__DOT__ls_not_ok)) 
                                            | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))))));
        tracep->fullBit(oldp+774,((1U & (~ (((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                             | (IData)(vlSelf->top__DOT__ls_not_ok)) 
                                            | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))))));
        tracep->fullQData(oldp+775,(((((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+777,((((((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                        & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                       | ((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                          & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))) 
                                      | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                     | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | ((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                        & (~ (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 0x20U)))) 
                                       & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay))) 
                                      & (((IData)(vlSelf->top__DOT__Dcache_u__DOT__way1Hit) 
                                          & (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenDelay1)) 
                                         | ((IData)(vlSelf->top__DOT__Dcache_u__DOT__way2Hit) 
                                            & (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenDelay2)))))));
        VL_EXTEND_WQ(256,64, __Vtemp352, vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch);
        if ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp355[0U] = __Vtemp352[0U];
            __Vtemp355[1U] = __Vtemp352[1U];
            __Vtemp355[2U] = __Vtemp352[2U];
            __Vtemp355[3U] = __Vtemp352[3U];
            __Vtemp355[4U] = __Vtemp352[4U];
            __Vtemp355[5U] = __Vtemp352[5U];
            __Vtemp355[6U] = __Vtemp352[6U];
            __Vtemp355[7U] = __Vtemp352[7U];
        } else {
            __Vtemp355[0U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U]);
            __Vtemp355[1U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U]);
            __Vtemp355[2U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U]);
            __Vtemp355[3U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U]);
            __Vtemp355[4U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U]);
            __Vtemp355[5U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U]);
            __Vtemp355[6U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U]);
            __Vtemp355[7U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U]);
        }
        tracep->fullWData(oldp+778,(__Vtemp355),256);
        tracep->fullCData(oldp+786,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                      ? 3U : ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                               ? 0U
                                               : 3U))),8);
        tracep->fullCData(oldp+787,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                      : (IData)(vlSelf->axi_r_resp_i))),2);
        tracep->fullBit(oldp+788,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->top__DOT__axi_mmio_r_user_i)
                                    : (IData)(vlSelf->axi_r_user_i))));
        tracep->fullBit(oldp+789,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->fullBit(oldp+790,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->fullIData(oldp+791,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 0xbU)))
                                          : 0U) : 0U)),21);
        tracep->fullIData(oldp+792,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? 0U : (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 0xbU))))
                                      : 0U)),21);
        tracep->fullQData(oldp+793,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                       & (0ULL != vlSelf->top__DOT__pc_new)) 
                                      | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                          & (0ULL != vlSelf->top__DOT__pc_new)) 
                                         & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))
                                      ? ((1U & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 4U)))
                                          ? ((1U & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 3U)))
                                              ? ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way1Data[7U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__way1Data[6U]))))
                                              : ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way1Data[5U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__way1Data[4U])))))
                                          : ((1U & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 3U)))
                                              ? ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way1Data[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__way1Data[2U]))))
                                              : ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way1Data[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__way1Data[0U]))))))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+795,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                       & (0ULL != vlSelf->top__DOT__pc_new)) 
                                      | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                          & (0ULL != vlSelf->top__DOT__pc_new)) 
                                         & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))
                                      ? ((1U & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 4U)))
                                          ? ((1U & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 3U)))
                                              ? ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way2Data[7U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__way2Data[6U]))))
                                              : ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way2Data[5U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__way2Data[4U])))))
                                          : ((1U & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 3U)))
                                              ? ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way2Data[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__way2Data[2U]))))
                                              : ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way2Data[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__cache_dut__DOT__way2Data[0U]))))))
                                      : 0ULL)),64);
        tracep->fullIData(oldp+797,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? ((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 3U)) 
                                         << 3U) : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   ((vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                                     [
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                 >> 5U)))] 
                                                     << 0xbU) 
                                                    | (0x7e0U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                   >> 5U)) 
                                                          << 5U)))
                                                    : 
                                                   ((vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                                     [
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                 >> 5U)))] 
                                                     << 0xbU) 
                                                    | (0x7e0U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                   >> 5U)) 
                                                          << 5U)))))),32);
        tracep->fullCData(oldp+798,(((4U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? ((2U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                          ? ((1U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                              ? 1U : 
                                             (((IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk) 
                                               & (IData)(vlSelf->top__DOT__ls_stall_n))
                                               ? 1U
                                               : 6U))
                                          : 0U) : (
                                                   (2U 
                                                    & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__ls_axi_r_last_i)
                                                      ? 7U
                                                      : 3U)
                                                     : 
                                                    ((0U 
                                                      == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
                                                      ? 3U
                                                      : 2U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__Dcache_u__DOT__uncached)
                                                      ? 6U
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)
                                                       ? 
                                                      ((((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i) 
                                                         & (IData)(vlSelf->top__DOT__ls_stall_n)) 
                                                        | (((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i) 
                                                            & (~ (IData)(
                                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                          >> 0x20U)))) 
                                                           & (~ (IData)(vlSelf->top__DOT__ls_stall_n))))
                                                        ? 1U
                                                        : 0U)
                                                       : 
                                                      ((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i)
                                                        ? 
                                                       (((IData)(
                                                                 (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                  >> 0x20U)) 
                                                         & (IData)(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg))
                                                         ? 1U
                                                         : 2U)
                                                        : 
                                                       ((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)
                                                         ? 1U
                                                         : 0U))))
                                                     : 
                                                    (((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i) 
                                                      & (IData)(vlSelf->top__DOT__ls_stall_n))
                                                      ? 1U
                                                      : 0U))))),3);
        tracep->fullBit(oldp+799,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullBit(oldp+800,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullIData(oldp+801,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))
                                      ? (0x1fffffU 
                                         & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                             ? vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 5U)))]
                                             : (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 0xbU))))
                                      : 0U)),21);
        tracep->fullIData(oldp+802,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))
                                      ? (0x1fffffU 
                                         & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                             ? (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 0xbU))
                                             : vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 5U)))]))
                                      : 0U)),21);
        tracep->fullQData(oldp+803,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                         & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                        & (IData)(vlSelf->top__DOT__ls_stall_n)) 
                                       | (((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                           & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                          & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                      | (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i))
                                      ? ((1U & (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 4U)))
                                          ? ((1U & (IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 3U)))
                                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U]))))
                                              : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U])))))
                                          : ((1U & (IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 3U)))
                                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U]))))
                                              : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U]))))))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+805,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                         & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                        & (IData)(vlSelf->top__DOT__ls_stall_n)) 
                                       | (((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                           & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                          & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                      | (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i))
                                      ? ((1U & (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 4U)))
                                          ? ((1U & (IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 3U)))
                                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U]))))
                                              : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U])))))
                                          : ((1U & (IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 3U)))
                                              ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U]))))
                                              : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U]))))))
                                      : 0ULL)),64);
        tracep->fullBit(oldp+807,(((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                >> 0x20U))) 
                                    & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk))) 
                                   | ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncached)) 
                                      & (((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                            & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 0x20U))) 
                                           & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                          & (((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                              & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                                                         >> 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                     >> 5U)))))) 
                                             | ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                                                           >> 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                       >> 5U)))))))) 
                                         | ((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                              & (~ (IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 0x20U)))) 
                                             & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                            & (((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                                                           >> 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                       >> 5U)))))) 
                                               | ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                         >> 5U)))))))))))));
        tracep->fullBit(oldp+808,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk)))));
        tracep->fullBit(oldp+809,((1U & (~ ((((((((0U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                  | ((6U 
                                                      == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                     & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                                 & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                                | (1U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                               | (2U 
                                                  == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                              | (7U 
                                                 == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                             | (3U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))))));
        tracep->fullBit(oldp+810,(((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                         | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                            & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                        & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                       | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                      | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                     | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))));
        tracep->fullBit(oldp+811,((1U & (~ ((((((((0U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                  | ((6U 
                                                      == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                     & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                                 & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                                | (1U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                               | (2U 
                                                  == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                              | (7U 
                                                 == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                             | (3U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))))));
        tracep->fullBit(oldp+812,(((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                         | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                            & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                        & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                       | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                      | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                     | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))));
        tracep->fullBit(oldp+813,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__axi_mmio_ar_valid_o)) 
                                   & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+814,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                   & (IData)(vlSelf->top__DOT__axi_mmio_w_valid_o))));
        tracep->fullIData(oldp+815,(0x40U),32);
        tracep->fullIData(oldp+816,(4U),32);
        tracep->fullIData(oldp+817,(8U),32);
        tracep->fullIData(oldp+818,(1U),32);
        tracep->fullCData(oldp+819,(0U),3);
        tracep->fullBit(oldp+820,(0U));
        tracep->fullBit(oldp+821,(0U));
        tracep->fullCData(oldp+822,(0U),4);
        tracep->fullBit(oldp+823,(vlSelf->top__DOT__axi_mmio_r_last_i));
        tracep->fullCData(oldp+824,(vlSelf->top__DOT__axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+825,(vlSelf->top__DOT__axi_mmio_r_user_i));
        tracep->fullCData(oldp+826,(vlSelf->top__DOT__axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+827,(vlSelf->top__DOT__axi_mmio_b_user_i));
        tracep->fullCData(oldp+828,(3U),8);
        tracep->fullCData(oldp+829,(3U),3);
        tracep->fullCData(oldp+830,(1U),2);
        tracep->fullCData(oldp+831,(2U),4);
        tracep->fullCData(oldp+832,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+833,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+834,(1U),4);
        tracep->fullCData(oldp+835,(0xfU),4);
        tracep->fullCData(oldp+836,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+837,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+838,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+840,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+841,(1U));
        tracep->fullBit(oldp+842,(vlSelf->top__DOT__ls_sram_rd_data_valid));
        tracep->fullBit(oldp+843,(vlSelf->top__DOT__ls_sram_wr_data_ok));
        tracep->fullCData(oldp+844,(vlSelf->top__DOT__fetchLenth),8);
        tracep->fullBit(oldp+845,(0U));
        tracep->fullQData(oldp+846,(0ULL),64);
        tracep->fullCData(oldp+848,(0U),8);
        tracep->fullCData(oldp+849,(1U),3);
        tracep->fullCData(oldp+850,(2U),3);
        tracep->fullCData(oldp+851,(7U),3);
        tracep->fullBit(oldp+852,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+853,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullIData(oldp+854,(0x80U),32);
        tracep->fullIData(oldp+855,(6U),32);
        __Vtemp356[0U] = 0U;
        __Vtemp356[1U] = 0U;
        __Vtemp356[2U] = 0U;
        __Vtemp356[3U] = 0U;
        tracep->fullWData(oldp+856,(__Vtemp356),128);
        __Vtemp357[0U] = 0xffffffffU;
        __Vtemp357[1U] = 0xffffffffU;
        __Vtemp357[2U] = 0xffffffffU;
        __Vtemp357[3U] = 0xffffffffU;
        tracep->fullWData(oldp+860,(__Vtemp357),128);
        tracep->fullCData(oldp+864,(0U),2);
        tracep->fullCData(oldp+865,(3U),2);
        tracep->fullCData(oldp+866,(2U),2);
        tracep->fullIData(oldp+867,(3U),32);
        tracep->fullIData(oldp+868,(0x60U),32);
        tracep->fullIData(oldp+869,(0U),32);
        tracep->fullIData(oldp+870,(0x13bU),32);
        tracep->fullBit(oldp+871,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+872,(0xe2U),32);
        tracep->fullCData(oldp+873,(6U),3);
        tracep->fullBit(oldp+874,(vlSelf->top__DOT__Dcache_u__DOT__validWay1_q));
        tracep->fullBit(oldp+875,(vlSelf->top__DOT__Dcache_u__DOT__validWay2_q));
        tracep->fullBit(oldp+876,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullIData(oldp+877,(0x121U),32);
        tracep->fullIData(oldp+878,(0x40U),32);
        tracep->fullIData(oldp+879,(3U),32);
        tracep->fullIData(oldp+880,(1U),32);
        tracep->fullQData(oldp+881,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+883,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index),32);
    }
}
