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
        tracep->declBit(c+716,"clk", false,-1);
        tracep->declBit(c+717,"rst_n", false,-1);
        tracep->declQuad(c+718,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+720,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+722,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+723,"regA0", false,-1, 63,0);
        tracep->declBit(c+725,"stall_n_diff", false,-1);
        tracep->declBit(c+726,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+727,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+728,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+730,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+731,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+732,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+733,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+734,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+735,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+736,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+737,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+738,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+739,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+740,"axi_r_ready_o", false,-1);
        tracep->declBit(c+741,"axi_r_valid_i", false,-1);
        tracep->declBus(c+742,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+743,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+745,"axi_r_last_i", false,-1);
        tracep->declBus(c+746,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+747,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+748,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+749,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+750,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+752,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+753,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+754,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+755,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+756,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+757,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+758,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+759,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+760,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+761,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+762,"axi_w_ready_i", false,-1);
        tracep->declBit(c+763,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+764,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+766,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+767,"axi_w_last_o", false,-1);
        tracep->declBus(c+768,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+769,"axi_b_ready_o", false,-1);
        tracep->declBit(c+770,"axi_b_valid_i", false,-1);
        tracep->declBus(c+771,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+772,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+773,"axi_b_user_i", false,-1, 0,0);
        tracep->declBus(c+818,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+818,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+818,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+818,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+819,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+820,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+821,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+716,"top clk", false,-1);
        tracep->declBit(c+717,"top rst_n", false,-1);
        tracep->declQuad(c+718,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+720,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+722,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+723,"top regA0", false,-1, 63,0);
        tracep->declBit(c+725,"top stall_n_diff", false,-1);
        tracep->declBit(c+726,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+727,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+728,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+730,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+731,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+732,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+733,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+734,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+735,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+736,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+737,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+738,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+739,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+740,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+741,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+742,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+743,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+745,"top axi_r_last_i", false,-1);
        tracep->declBus(c+746,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+747,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+748,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+749,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+750,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+752,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+753,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+754,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+755,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+756,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+757,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+758,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+759,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+760,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+761,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+762,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+763,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+764,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+766,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+767,"top axi_w_last_o", false,-1);
        tracep->declBus(c+768,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+769,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+770,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+771,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+772,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+773,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+138,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+253,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+254,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+822,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+118,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+823,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+119,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+256,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+257,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+824,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+258,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+825,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+120,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+259,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+139,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+140,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+141,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+826,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+827,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+828,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+143,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+260,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+144,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+822,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+146,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+823,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+774,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+147,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+148,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+824,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+149,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+825,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+825,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+150,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+261,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+775,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+151,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+777,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+823,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+262,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+152,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+153,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+829,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+830,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1,"top instr_fetching", false,-1);
        tracep->declBit(c+778,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+2,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+3,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+822,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+825,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+823,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+263,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+264,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+831,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+824,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+832,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+825,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+833,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+5,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+599,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+779,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+600,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+602,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+603,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+834,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+780,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+265,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+154,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+822,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+835,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+823,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+6,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+836,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+831,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+824,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+837,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+825,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+825,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+604,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+266,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+267,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+156,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+269,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+823,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+270,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+781,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+782,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+783,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+784,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+785,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+7,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+8,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+822,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+835,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+823,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+271,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+121,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+831,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+824,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+832,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+825,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+838,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+10,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+605,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+786,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+606,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+608,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+603,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+839,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+840,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+272,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+274,"top is_jump", false,-1);
        tracep->declQuad(c+275,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+787,"top pc_stall_n", false,-1);
        tracep->declBit(c+609,"top if_stall_n", false,-1);
        tracep->declBit(c+277,"top if_instr_valid", false,-1);
        tracep->declBit(c+842,"top sram_data_valid", false,-1);
        tracep->declQuad(c+278,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+280,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+843,"top sram_ren", false,-1);
        tracep->declBit(c+282,"top sram_addr_valid", false,-1);
        tracep->declBit(c+283,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+284,"top cacheDataOk_i", false,-1);
        tracep->declBus(c+285,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+286,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+288,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+584,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+586,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+289,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+291,"top src1sel_id", false,-1);
        tracep->declBus(c+292,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+293,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+294,"top is_brc_id", false,-1);
        tracep->declBit(c+295,"top is_jal_id", false,-1);
        tracep->declBit(c+296,"top is_jalr_id", false,-1);
        tracep->declBit(c+297,"top wben_id", false,-1);
        tracep->declBus(c+298,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+299,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+787,"top id_stall_n", false,-1);
        tracep->declBit(c+300,"top DivEn_id", false,-1);
        tracep->declBus(c+301,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+302,"top in_trap_id", false,-1);
        tracep->declBit(c+303,"top out_trap_id", false,-1);
        tracep->declBit(c+304,"top trap_id", false,-1);
        tracep->declBit(c+305,"top ld_use_hazard", false,-1);
        tracep->declBit(c+306,"top id_flush", false,-1);
        tracep->declQuad(c+307,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+309,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+310,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+312,"top src1sel_ex", false,-1);
        tracep->declBus(c+313,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+314,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+316,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+318,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+320,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+322,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+323,"top is_brc_ex", false,-1);
        tracep->declBit(c+324,"top is_jal_ex", false,-1);
        tracep->declBit(c+325,"top is_jalr_ex", false,-1);
        tracep->declBit(c+326,"top wben_ex", false,-1);
        tracep->declBit(c+327,"top DivEn_ex", false,-1);
        tracep->declBus(c+328,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+329,"top trap_ex", false,-1);
        tracep->declBit(c+788,"top ex_stall_n", false,-1);
        tracep->declQuad(c+11,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+330,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+331,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+332,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+333,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+334,"top ex_flush", false,-1);
        tracep->declBit(c+335,"top rden_ls", false,-1);
        tracep->declBit(c+336,"top wren_ls", false,-1);
        tracep->declBit(c+610,"top ls_addr_ok_i", false,-1);
        tracep->declBit(c+611,"top ex_not_ok", false,-1);
        tracep->declQuad(c+13,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+15,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+17,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+19,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+789,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+20,"top wben_ls", false,-1);
        tracep->declQuad(c+21,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+23,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+25,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+27,"top trap_ls", false,-1);
        tracep->declBit(c+612,"top ls_stall_n", false,-1);
        tracep->declBit(c+613,"top ls_not_ok", false,-1);
        tracep->declQuad(c+17,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+29,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+122,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+30,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+844,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+845,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+614,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+31,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+836,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+337,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+339,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+341,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+343,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+344,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+346,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+347,"top wben_wb", false,-1);
        tracep->declQuad(c+348,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+612,"top wb_stall_n", false,-1);
        tracep->declBit(c+350,"top rw_valid_i", false,-1);
        tracep->declBit(c+32,"top rw_ready_o", false,-1);
        tracep->declBus(c+263,"top fetchLenth", false,-1, 7,0);
        tracep->declBit(c+602,"top rdLast_o", false,-1);
        tracep->declBus(c+124,"top rw_addr_i", false,-1, 31,0);
        tracep->declQuad(c+600,"top data_read_o", false,-1, 63,0);
        tracep->declBit(c+616,"top dataValid_o", false,-1);
        tracep->declBit(c+791,"top dataNotOk", false,-1);
        tracep->declBit(c+351,"top DcacheRdValid", false,-1);
        tracep->declBit(c+352,"top DcacheWrValid", false,-1);
        tracep->declBit(c+33,"top lsAxiRdReady", false,-1);
        tracep->declBus(c+271,"top lsFetchLenth", false,-1, 7,0);
        tracep->declBit(c+608,"top lsRdLast", false,-1);
        tracep->declQuad(c+353,"top DcacheRdAddr", false,-1, 63,0);
        tracep->declQuad(c+710,"top DcacheWrAddr", false,-1, 63,0);
        tracep->declQuad(c+606,"top lsAxiRdData", false,-1, 63,0);
        tracep->declBit(c+617,"top lsAxiRdDataVAlid", false,-1);
        tracep->declBit(c+355,"top lsAxiWrReady", false,-1);
        tracep->declArray(c+245,"top lsAxiWrData", false,-1, 255,0);
        tracep->declBus(c+271,"top lsStoreLenth", false,-1, 7,0);
        tracep->declBus(c+356,"top lsStoreMask", false,-1, 7,0);
        tracep->declBus(c+836,"top lsStoreSize", false,-1, 2,0);
        tracep->declBus(c+121,"top lsLoadSize", false,-1, 2,0);
        tracep->declBus(c+818,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+818,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+818,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+818,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+819,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+820,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+821,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+778,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+2,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+3,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+822,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+825,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+823,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+263,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+264,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+831,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+824,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+832,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+825,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+833,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+5,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+599,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+779,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+600,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+602,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+603,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+834,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+780,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+265,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+154,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+822,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+835,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+823,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+6,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+836,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+831,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+824,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+837,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+825,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+825,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+604,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+266,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+267,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+156,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+269,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+823,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+270,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+781,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+782,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+783,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+784,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+785,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+7,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+8,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+822,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+835,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+823,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+271,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+121,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+831,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+824,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+832,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+825,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+838,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+10,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+605,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+786,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+606,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+608,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+603,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+839,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+748,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+749,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+750,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+752,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+753,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+754,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+755,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+756,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+757,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+758,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+759,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+760,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+761,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+762,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+763,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+764,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+766,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+767,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+768,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+769,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+770,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+771,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+772,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+773,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+726,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+727,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+728,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+730,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+731,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+732,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+733,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+734,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+735,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+736,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+737,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+738,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+739,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+740,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+741,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+742,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+743,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+745,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+746,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+747,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+143,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+260,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+144,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+822,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+146,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+823,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+774,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+147,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+148,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+824,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+149,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+825,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+825,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+150,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+261,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+775,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+151,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+777,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+823,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+262,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+152,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+153,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+835,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+830,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+138,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+253,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+254,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+822,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+118,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+823,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+119,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+256,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+257,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+824,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+258,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+825,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+120,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+259,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+139,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+140,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+141,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+139,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+835,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+828,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+780,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+265,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+154,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+822,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+835,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+823,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+6,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+836,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+831,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+824,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+837,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+825,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+825,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+604,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+266,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+267,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+156,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+269,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+823,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+270,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+781,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+782,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+783,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+784,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+618,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+34,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+357,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+822,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+35,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+823,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+125,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+359,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+831,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+846,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+832,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+825,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+36,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+360,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+619,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+792,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+620,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+622,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+603,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+793,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+716,"top IF_u clk", false,-1);
        tracep->declBit(c+717,"top IF_u rst_n", false,-1);
        tracep->declBit(c+274,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+275,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+23,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+25,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+302,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+303,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+609,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+272,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+285,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+277,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+278,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+842,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+283,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+284,"top IF_u cacheDataOk_i", false,-1);
        tracep->declQuad(c+280,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+843,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+282,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+280,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+716,"top cache_dut clk", false,-1);
        tracep->declBit(c+717,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+361,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+282,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+824,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+847,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+849,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+609,"top cache_dut stall_n", false,-1);
        tracep->declBit(c+283,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+362,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+284,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+278,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+350,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+32,"top cache_dut axiRdReady", false,-1);
        tracep->declBus(c+263,"top cache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+602,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+124,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+600,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBit(c+616,"top cache_dut dataValid_i", false,-1);
        tracep->declBus(c+822,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+850,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+851,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+836,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+852,"top cache_dut replace", false,-1, 2,0);
        tracep->declBus(c+853,"top cache_dut unCacheOp", false,-1, 2,0);
        tracep->declBus(c+363,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+623,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+364,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+37,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+38,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+157,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+161,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+165,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+169,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+365,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+369,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+365,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+369,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+373,"top cache_dut wenWay1", false,-1);
        tracep->declBit(c+374,"top cache_dut wenWay2", false,-1);
        tracep->declBit(c+375,"top cache_dut uncached", false,-1);
        tracep->declBit(c+39,"top cache_dut uncachedOk", false,-1);
        tracep->declBit(c+376,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+40,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+42,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+43,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+44,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+45,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+47,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+49,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+50,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+794,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+795,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+796,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+797,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+51,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+52,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+854,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+855,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+377,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+173,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+181,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+798,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+800,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+378,"top cache_dut missEn", false,-1);
        tracep->declBit(c+379,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+53,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+189,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+55,"top cache_dut missFlag", false,-1);
        tracep->declBus(c+380,"top cache_dut rdCnt", false,-1, 1,0);
        tracep->declArray(c+381,"top cache_dut rdBuffer", false,-1, 255,0);
        tracep->declBit(c+389,"top cache_dut replaceEn", false,-1);
        tracep->declBus(c+856,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+818,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+857,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+856,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+157,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+716,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+390,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+391,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+858,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+624,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+365,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+392,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+373,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+862,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+856,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+818,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+857,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+856,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+161,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+716,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+390,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+391,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+858,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+624,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+369,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+392,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+373,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+862,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+856,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+818,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+857,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+856,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+165,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+716,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+393,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+394,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+858,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+625,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+365,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+395,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+374,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+862,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+856,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+818,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+857,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+856,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+169,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+716,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+393,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+394,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+858,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+625,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+369,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+395,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+374,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+862,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+818,"top axi_icache_dut RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+818,"top axi_icache_dut RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+818,"top axi_icache_dut AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+818,"top axi_icache_dut AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+819,"top axi_icache_dut AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+820,"top axi_icache_dut AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+821,"top axi_icache_dut AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+716,"top axi_icache_dut clock", false,-1);
        tracep->declBit(c+717,"top axi_icache_dut reset", false,-1);
        tracep->declBit(c+350,"top axi_icache_dut rw_valid_i", false,-1);
        tracep->declBit(c+32,"top axi_icache_dut rw_ready_o", false,-1);
        tracep->declQuad(c+600,"top axi_icache_dut data_read_o", false,-1, 63,0);
        tracep->declQuad(c+126,"top axi_icache_dut rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+263,"top axi_icache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+602,"top axi_icache_dut rdLast_o", false,-1);
        tracep->declBit(c+616,"top axi_icache_dut dataValid_o", false,-1);
        tracep->declBit(c+1,"top axi_icache_dut instr_fetching", false,-1);
        tracep->declBit(c+778,"top axi_icache_dut axi_ar_ready_i", false,-1);
        tracep->declBit(c+2,"top axi_icache_dut axi_ar_valid_o", false,-1);
        tracep->declQuad(c+3,"top axi_icache_dut axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+822,"top axi_icache_dut axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+825,"top axi_icache_dut axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+823,"top axi_icache_dut axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+263,"top axi_icache_dut axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+264,"top axi_icache_dut axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+831,"top axi_icache_dut axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+824,"top axi_icache_dut axi_ar_lock_o", false,-1);
        tracep->declBus(c+832,"top axi_icache_dut axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+825,"top axi_icache_dut axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+833,"top axi_icache_dut axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+5,"top axi_icache_dut axi_r_ready_o", false,-1);
        tracep->declBit(c+599,"top axi_icache_dut axi_r_valid_i", false,-1);
        tracep->declBus(c+779,"top axi_icache_dut axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+600,"top axi_icache_dut axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+602,"top axi_icache_dut axi_r_last_i", false,-1);
        tracep->declBus(c+603,"top axi_icache_dut axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+834,"top axi_icache_dut axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+866,"top axi_icache_dut r_state_idle", false,-1, 1,0);
        tracep->declBus(c+831,"top axi_icache_dut r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+867,"top axi_icache_dut r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+868,"top axi_icache_dut r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+56,"top axi_icache_dut r_state", false,-1, 1,0);
        tracep->declBus(c+626,"top axi_icache_dut r_state_next", false,-1, 1,0);
        tracep->declBit(c+2,"top axi_icache_dut ar_valid", false,-1);
        tracep->declBit(c+5,"top axi_icache_dut r_ready", false,-1);
        tracep->declQuad(c+3,"top axi_icache_dut addr_reg", false,-1, 63,0);
        tracep->declBus(c+869,"top axi_icache_dut AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+825,"top axi_icache_dut axi_id", false,-1, 3,0);
        tracep->declBus(c+824,"top axi_icache_dut axi_user", false,-1, 0,0);
        tracep->declBus(c+263,"top axi_icache_dut axi_len", false,-1, 7,0);
        tracep->declBus(c+264,"top axi_icache_dut axi_size", false,-1, 2,0);
        tracep->declBit(c+716,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+717,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+272,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+285,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+787,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+306,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+286,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+288,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+396,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+398,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+870,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+871,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+716,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+717,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+787,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+399,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+402,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+716,"top ID_u clk", false,-1);
        tracep->declBit(c+717,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+286,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+337,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+343,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+288,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+344,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+346,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+347,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+586,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+584,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+289,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+291,"top ID_u src1sel", false,-1);
        tracep->declBus(c+292,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+293,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+296,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+295,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+294,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+297,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+298,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+299,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+723,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+300,"top ID_u DivEn", false,-1);
        tracep->declBus(c+301,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+304,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+302,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+303,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+405,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+289,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+586,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+584,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+286,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+288,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+298,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+299,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+405,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+291,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+292,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+293,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+296,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+295,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+294,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+297,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+300,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+301,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+304,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+302,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+303,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+406,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+407,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+408,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+409,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+405,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+289,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+716,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+337,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+343,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+298,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+586,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+299,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+584,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+346,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+344,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+347,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+723,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+645+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+288,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+309,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+305,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+716,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+717,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+788,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+334,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+286,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+288,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+289,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+584,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+586,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+293,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+296,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+295,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+294,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+291,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+292,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+297,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+298,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+299,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+300,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+301,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+304,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+307,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+309,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+314,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+316,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+318,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+322,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+325,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+324,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+323,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+312,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+313,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+326,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+332,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+333,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+327,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+328,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+329,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+410,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+412,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+413,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+414,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+415,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+416,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+417,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+872,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+871,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+716,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+717,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+788,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+588,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+418,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+322,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+316,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+314,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+318,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+307,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+309,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+325,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+324,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+323,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+312,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+313,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+330,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+331,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+17,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+344,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+11,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+327,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+328,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+310,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+275,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+320,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+274,"top ex_stage_u is_jump_o", false,-1);
        tracep->declBit(c+611,"top ex_stage_u exNotOk", false,-1);
        tracep->declBit(c+335,"top ex_stage_u rden_ls", false,-1);
        tracep->declBit(c+336,"top ex_stage_u wren_ls", false,-1);
        tracep->declBit(c+610,"top ex_stage_u ls_addr_ok_i", false,-1);
        tracep->declQuad(c+428,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+430,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+432,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+320,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+322,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+428,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+430,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+327,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+328,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+310,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+434,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+435,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+436,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+438,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+439,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+441,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+443,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+443,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+444,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+445,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+446,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+448,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+449,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+450,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+452,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+454,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+456,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+428,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+439,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+438,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+441,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+448,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+435,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+449,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+458,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+445,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+443,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+444,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+438,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+443,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+459,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+428,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+460,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+444,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+443,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+446,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+461,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+463,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+465,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+467,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+469,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+471,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+473,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+428,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+430,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+328,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+456,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+432,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+320,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+325,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+324,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+323,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+475,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+318,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+307,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+275,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+274,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+476,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+478,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+873,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+480,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+481,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+482,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+483,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+485,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+487,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+716,"top forwarding_u clk", false,-1);
        tracep->declBit(c+717,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+332,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+333,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+57,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+346,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+20,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+347,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+344,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+612,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+330,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+331,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+11,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+11,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+58,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+59,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+128,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+488,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+129,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+130,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+489,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+131,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+716,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+717,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+307,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+320,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+309,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+310,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+326,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+329,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+612,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+13,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+15,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+19,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+17,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+20,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+27,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+874,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+871,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+716,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+717,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+612,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+490,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+60,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+716,"top ls_u clk", false,-1);
        tracep->declBit(c+717,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+13,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+17,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+15,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+19,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+339,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+343,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+341,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u trap_ls_i", false,-1);
        tracep->declBit(c+612,"top ls_u stall_n", false,-1);
        tracep->declQuad(c+789,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+21,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+23,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+25,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+613,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+17,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+29,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+122,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+30,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+31,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+836,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+791,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+791,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+614,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+29,"top ls_u wren", false,-1);
        tracep->declBit(c+28,"top ls_u rden", false,-1);
        tracep->declBus(c+68,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+122,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+498,"top ls_u wren_last", false,-1);
        tracep->declBit(c+716,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+717,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+29,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+28,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+68,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+122,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+17,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+13,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+339,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+498,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+789,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+613,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+17,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+29,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+122,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+30,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+31,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+836,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+791,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+791,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+614,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+614,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+69,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+70,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+71,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+72,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+73,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+74,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+75,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+836,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+627,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+628,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+629,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+31,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+30,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+76,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+77,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+78,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+79,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+19,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+343,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+15,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+341,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+29,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+28,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+68,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+122,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+132,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+716,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+717,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+13,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+19,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+17,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u CSR_u trap", false,-1);
        tracep->declBit(c+612,"top ls_u CSR_u stall_n", false,-1);
        tracep->declQuad(c+21,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+23,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+25,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+80,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+81,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+82,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+83,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+84,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+85,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+86,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+87,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+88,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+17,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+89,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+91,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+93,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+25,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+23,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+95,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+97,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+99,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBit(c+716,"top Dcache_u clk", false,-1);
        tracep->declBit(c+717,"top Dcache_u rst_n", false,-1);
        tracep->declBus(c+499,"top Dcache_u addr_i", false,-1, 31,0);
        tracep->declBit(c+500,"top Dcache_u exValid_i", false,-1);
        tracep->declBit(c+501,"top Dcache_u lsValid_i", false,-1);
        tracep->declBit(c+502,"top Dcache_u op_i", false,-1);
        tracep->declQuad(c+122,"top Dcache_u wr_data_i", false,-1, 63,0);
        tracep->declBus(c+30,"top Dcache_u wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+612,"top Dcache_u stall_n", false,-1);
        tracep->declBit(c+610,"top Dcache_u addr_ok_o", false,-1);
        tracep->declBit(c+791,"top Dcache_u data_notok_o", false,-1);
        tracep->declQuad(c+614,"top Dcache_u rd_data_o", false,-1, 63,0);
        tracep->declBus(c+31,"top Dcache_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+836,"top Dcache_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+351,"top Dcache_u cacheRdValid_o", false,-1);
        tracep->declBit(c+33,"top Dcache_u axiRdReady", false,-1);
        tracep->declBus(c+271,"top Dcache_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+608,"top Dcache_u rdLast_i", false,-1);
        tracep->declBus(c+503,"top Dcache_u cacheRdAddr_o", false,-1, 31,0);
        tracep->declBus(c+802,"top Dcache_u cacheWrAddr_o", false,-1, 31,0);
        tracep->declBus(c+121,"top Dcache_u cacheRdSize_o", false,-1, 2,0);
        tracep->declQuad(c+606,"top Dcache_u rdData_i", false,-1, 63,0);
        tracep->declBit(c+617,"top Dcache_u dataValid_i", false,-1);
        tracep->declBit(c+355,"top Dcache_u axiWrReady", false,-1);
        tracep->declBit(c+352,"top Dcache_u cacheWrValid_o", false,-1);
        tracep->declArray(c+245,"top Dcache_u cacheWrData_o", false,-1, 255,0);
        tracep->declBus(c+271,"top Dcache_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+356,"top Dcache_u cacheWrMask_o", false,-1, 7,0);
        tracep->declBus(c+836,"top Dcache_u cacheWrSize_o", false,-1, 2,0);
        tracep->declBus(c+822,"top Dcache_u idle", false,-1, 2,0);
        tracep->declBus(c+850,"top Dcache_u compare", false,-1, 2,0);
        tracep->declBus(c+851,"top Dcache_u miss", false,-1, 2,0);
        tracep->declBus(c+836,"top Dcache_u getdata", false,-1, 2,0);
        tracep->declBus(c+852,"top Dcache_u replace", false,-1, 2,0);
        tracep->declBus(c+853,"top Dcache_u uncacheOp", false,-1, 2,0);
        tracep->declBus(c+504,"top Dcache_u cacheCurState", false,-1, 2,0);
        tracep->declBus(c+803,"top Dcache_u cacheNexState", false,-1, 2,0);
        tracep->declBit(c+505,"top Dcache_u cacheHit", false,-1);
        tracep->declBit(c+506,"top Dcache_u way1Hit", false,-1);
        tracep->declBit(c+507,"top Dcache_u way2Hit", false,-1);
        tracep->declArray(c+190,"top Dcache_u dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+194,"top Dcache_u dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+198,"top Dcache_u dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+202,"top Dcache_u dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+508,"top Dcache_u inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+512,"top Dcache_u inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+508,"top Dcache_u inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+512,"top Dcache_u inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+712,"top Dcache_u wenWay1", false,-1);
        tracep->declBit(c+713,"top Dcache_u wenWay2", false,-1);
        tracep->declBit(c+516,"top Dcache_u uncached", false,-1);
        tracep->declBit(c+517,"top Dcache_u idleEn", false,-1);
        tracep->declQuad(c+518,"top Dcache_u reqLatch", false,-1, 32,0);
        tracep->declBus(c+520,"top Dcache_u offset", false,-1, 4,0);
        tracep->declBus(c+521,"top Dcache_u index", false,-1, 5,0);
        tracep->declBus(c+522,"top Dcache_u tag", false,-1, 20,0);
        tracep->declQuad(c+101,"top Dcache_u validArray1", false,-1, 63,0);
        tracep->declQuad(c+103,"top Dcache_u validArray2", false,-1, 63,0);
        tracep->declBit(c+133,"top Dcache_u bitValid1", false,-1);
        tracep->declBit(c+134,"top Dcache_u bitValid2", false,-1);
        tracep->declBit(c+804,"top Dcache_u bitValid1_d", false,-1);
        tracep->declBit(c+805,"top Dcache_u bitValid2_d", false,-1);
        tracep->declBus(c+806,"top Dcache_u tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+807,"top Dcache_u tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+135,"top Dcache_u tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+136,"top Dcache_u tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+875,"top Dcache_u validWay1_q", false,-1);
        tracep->declBit(c+876,"top Dcache_u validWay2_q", false,-1);
        tracep->declBus(c+105,"top Dcache_u testTag", false,-1, 20,0);
        tracep->declBus(c+106,"top Dcache_u tagtest", false,-1, 20,0);
        tracep->declBit(c+107,"top Dcache_u replaceEnDelay", false,-1);
        tracep->declBit(c+523,"top Dcache_u compareEn", false,-1);
        tracep->declArray(c+206,"top Dcache_u way1Data", false,-1, 255,0);
        tracep->declArray(c+214,"top Dcache_u way2Data", false,-1, 255,0);
        tracep->declQuad(c+808,"top Dcache_u rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+810,"top Dcache_u rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+524,"top Dcache_u missEn", false,-1);
        tracep->declBit(c+525,"top Dcache_u getdataEn", false,-1);
        tracep->declQuad(c+526,"top Dcache_u addrToRead", false,-1, 63,0);
        tracep->declBit(c+709,"top Dcache_u randomBit", false,-1);
        tracep->declBit(c+107,"top Dcache_u missFlag", false,-1);
        tracep->declBus(c+528,"top Dcache_u rdCnt", false,-1, 1,0);
        tracep->declArray(c+529,"top Dcache_u rdBuffer", false,-1, 255,0);
        tracep->declBit(c+537,"top Dcache_u replaceEn", false,-1);
        tracep->declBit(c+108,"top Dcache_u wenDelay1", false,-1);
        tracep->declBit(c+109,"top Dcache_u wenDelay2", false,-1);
        tracep->declQuad(c+538,"top Dcache_u wrDataLatch", false,-1, 63,0);
        tracep->declBus(c+110,"top Dcache_u wrMaskLatch", false,-1, 7,0);
        tracep->declQuad(c+540,"top Dcache_u dirtyArray1", false,-1, 63,0);
        tracep->declQuad(c+542,"top Dcache_u dirtyArray2", false,-1, 63,0);
        tracep->declBit(c+544,"top Dcache_u wrLow", false,-1);
        tracep->declBit(c+545,"top Dcache_u wrHigh", false,-1);
        tracep->declQuad(c+546,"top Dcache_u storeData", false,-1, 63,0);
        tracep->declBus(c+548,"top Dcache_u storeMask", false,-1, 7,0);
        tracep->declQuad(c+549,"top Dcache_u sramMask", false,-1, 63,0);
        tracep->declArray(c+551,"top Dcache_u maskWay1_1", false,-1, 127,0);
        tracep->declArray(c+555,"top Dcache_u maskWay1_2", false,-1, 127,0);
        tracep->declArray(c+551,"top Dcache_u maskWay2_1", false,-1, 127,0);
        tracep->declArray(c+555,"top Dcache_u maskWay2_2", false,-1, 127,0);
        tracep->declBit(c+559,"top Dcache_u wrMiss", false,-1);
        tracep->declBit(c+560,"top Dcache_u rdMiss", false,-1);
        tracep->declBit(c+111,"top Dcache_u replaceWay", false,-1);
        tracep->declBit(c+598,"top Dcache_u needWrBk", false,-1);
        tracep->declBit(c+352,"top Dcache_u needWrBk_Reg", false,-1);
        tracep->declBit(c+112,"top Dcache_u uncache", false,-1);
        tracep->declBit(c+352,"top Dcache_u axiWrBusy", false,-1);
        tracep->declBus(c+802,"top Dcache_u addrToWrite", false,-1, 31,0);
        tracep->declBit(c+561,"top Dcache_u uncacheOpEn", false,-1);
        tracep->declBit(c+562,"top Dcache_u uncacheWrValid", false,-1);
        tracep->declBit(c+630,"top Dcache_u uncacheOpOk", false,-1);
        tracep->declBit(c+137,"top Dcache_u uncacheRdValid", false,-1);
        tracep->declBit(c+113,"top Dcache_u uncacheRdOk", false,-1);
        tracep->declBit(c+563,"top Dcache_u uncacheWrOk", false,-1);
        tracep->declBus(c+564,"top Dcache_u uncacheRdAddr", false,-1, 31,0);
        tracep->declQuad(c+114,"top Dcache_u temp", false,-1, 63,0);
        tracep->declBus(c+856,"top Dcache_u iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+818,"top Dcache_u iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+857,"top Dcache_u iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+856,"top Dcache_u iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+190,"top Dcache_u iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+716,"top Dcache_u iramWay1_1 CLK", false,-1);
        tracep->declBit(c+812,"top Dcache_u iramWay1_1 CEN", false,-1);
        tracep->declBit(c+714,"top Dcache_u iramWay1_1 WEN", false,-1);
        tracep->declArray(c+565,"top Dcache_u iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+631,"top Dcache_u iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+508,"top Dcache_u iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+813,"top Dcache_u iramWay1_1 cen", false,-1);
        tracep->declBit(c+712,"top Dcache_u iramWay1_1 wen", false,-1);
        tracep->declArray(c+551,"top Dcache_u iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+856,"top Dcache_u iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+818,"top Dcache_u iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+857,"top Dcache_u iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+856,"top Dcache_u iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+194,"top Dcache_u iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+716,"top Dcache_u iramWay1_2 CLK", false,-1);
        tracep->declBit(c+812,"top Dcache_u iramWay1_2 CEN", false,-1);
        tracep->declBit(c+714,"top Dcache_u iramWay1_2 WEN", false,-1);
        tracep->declArray(c+569,"top Dcache_u iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+631,"top Dcache_u iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+512,"top Dcache_u iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+813,"top Dcache_u iramWay1_2 cen", false,-1);
        tracep->declBit(c+712,"top Dcache_u iramWay1_2 wen", false,-1);
        tracep->declArray(c+555,"top Dcache_u iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+856,"top Dcache_u iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+818,"top Dcache_u iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+857,"top Dcache_u iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+856,"top Dcache_u iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+198,"top Dcache_u iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+716,"top Dcache_u iramWay2_1 CLK", false,-1);
        tracep->declBit(c+814,"top Dcache_u iramWay2_1 CEN", false,-1);
        tracep->declBit(c+715,"top Dcache_u iramWay2_1 WEN", false,-1);
        tracep->declArray(c+565,"top Dcache_u iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+632,"top Dcache_u iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+508,"top Dcache_u iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+815,"top Dcache_u iramWay2_1 cen", false,-1);
        tracep->declBit(c+713,"top Dcache_u iramWay2_1 wen", false,-1);
        tracep->declArray(c+551,"top Dcache_u iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+856,"top Dcache_u iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+818,"top Dcache_u iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+857,"top Dcache_u iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+856,"top Dcache_u iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+202,"top Dcache_u iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+716,"top Dcache_u iramWay2_2 CLK", false,-1);
        tracep->declBit(c+814,"top Dcache_u iramWay2_2 CEN", false,-1);
        tracep->declBit(c+715,"top Dcache_u iramWay2_2 WEN", false,-1);
        tracep->declArray(c+569,"top Dcache_u iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+632,"top Dcache_u iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+512,"top Dcache_u iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+815,"top Dcache_u iramWay2_2 cen", false,-1);
        tracep->declBit(c+713,"top Dcache_u iramWay2_2 wen", false,-1);
        tracep->declArray(c+555,"top Dcache_u iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+818,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+818,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+818,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+818,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+819,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+820,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+821,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+716,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+717,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+351,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+33,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+606,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+353,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+271,"top axi_ls_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+608,"top axi_ls_u rdLast_o", false,-1);
        tracep->declBit(c+617,"top axi_ls_u dataValid_o", false,-1);
        tracep->declBit(c+352,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+355,"top axi_ls_u wr_ready_o", false,-1);
        tracep->declArray(c+245,"top axi_ls_u cacheWrData_i", false,-1, 255,0);
        tracep->declBus(c+271,"top axi_ls_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+836,"top axi_ls_u storeSize", false,-1, 2,0);
        tracep->declBus(c+121,"top axi_ls_u loadSize", false,-1, 2,0);
        tracep->declBus(c+356,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+710,"top axi_ls_u cacheWrAddr_i", false,-1, 63,0);
        tracep->declBit(c+780,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+265,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+154,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+822,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+835,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+823,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+6,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+836,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+831,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+824,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+837,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+825,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+825,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+604,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+266,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+267,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+156,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+269,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+823,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+270,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+781,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+782,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+783,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+784,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+785,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+7,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+8,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+822,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+835,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+823,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+271,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+121,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+831,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+824,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+832,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+825,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+838,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+10,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+605,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+786,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+606,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+608,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+603,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+839,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+866,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+831,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+867,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+868,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+573,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+633,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+265,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+266,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+270,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+877,"top axi_ls_u trans_ok", false,-1);
        tracep->declBit(c+269,"top axi_ls_u wrLast", false,-1);
        tracep->declQuad(c+154,"top axi_ls_u wrAddr_reg", false,-1, 63,0);
        tracep->declArray(c+222,"top axi_ls_u wr_data_reg", false,-1, 255,0);
        tracep->declBus(c+230,"top axi_ls_u wrMask_reg", false,-1, 7,0);
        tracep->declBus(c+116,"top axi_ls_u wrCnt", false,-1, 1,0);
        tracep->declBus(c+6,"top axi_ls_u lenthReg", false,-1, 7,0);
        tracep->declBus(c+866,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+831,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+867,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+868,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+117,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+634,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+7,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+10,"top axi_ls_u r_ready", false,-1);
        tracep->declQuad(c+8,"top axi_ls_u rdAddr_reg", false,-1, 63,0);
        tracep->declBus(c+869,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+835,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+824,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+878,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+836,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+231,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+716,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+717,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+13,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+19,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+17,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+789,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+20,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+21,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+612,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+337,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+343,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+339,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+341,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+347,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+348,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+879,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+871,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+716,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+717,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+612,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+635,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+574,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+337,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+343,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+339,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+341,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+348,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+346,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+344,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+716,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+717,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+305,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+274,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+302,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+303,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+277,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+611,"top pipline_ctrl_u ex_not_ok", false,-1);
        tracep->declBit(c+613,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+609,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+787,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+787,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+788,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+612,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+612,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+306,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+334,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBus(c+880,"top lsAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+880,"top lsAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+256,"top lsAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+147,"top lsAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+716,"top lsAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+717,"top lsAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+144,"top lsAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+822,"top lsAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+260,"top lsAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+143,"top lsAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+775,"top lsAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+151,"top lsAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+261,"top lsAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+150,"top lsAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+153,"top lsAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+152,"top lsAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+262,"top lsAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+254,"top lsAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+822,"top lsAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+253,"top lsAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+138,"top lsAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+141,"top lsAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+140,"top lsAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+139,"top lsAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+259,"top lsAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+232,"top lsAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+143,"top lsAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+150,"top lsAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+153,"top lsAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+152,"top lsAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+234,"top lsAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+138,"top lsAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+141,"top lsAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+140,"top lsAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+139,"top lsAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+881,"top lsAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+882,"top lsAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+236,"top lsAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+238,"top lsAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+240,"top lsAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+242,"top lsAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+816,"top lsAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+817,"top lsAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+883,"top lsAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+885,"top lsAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+244,"top lsAxiSlaveRam_u aw_en", false,-1);
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
    VlWide<8>/*255:0*/ __Vtemp257;
    VlWide<8>/*255:0*/ __Vtemp260;
    VlWide<4>/*127:0*/ __Vtemp261;
    VlWide<4>/*127:0*/ __Vtemp262;
    VlWide<3>/*95:0*/ __Vtemp263;
    VlWide<3>/*95:0*/ __Vtemp265;
    VlWide<3>/*95:0*/ __Vtemp266;
    VlWide<3>/*95:0*/ __Vtemp267;
    VlWide<3>/*95:0*/ __Vtemp268;
    VlWide<3>/*95:0*/ __Vtemp269;
    VlWide<3>/*95:0*/ __Vtemp272;
    VlWide<3>/*95:0*/ __Vtemp273;
    VlWide<3>/*95:0*/ __Vtemp274;
    VlWide<3>/*95:0*/ __Vtemp275;
    VlWide<3>/*95:0*/ __Vtemp276;
    VlWide<8>/*255:0*/ __Vtemp281;
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
    VlWide<10>/*319:0*/ __Vtemp356;
    VlWide<4>/*127:0*/ __Vtemp357;
    VlWide<4>/*127:0*/ __Vtemp358;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+2,((1U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg),64);
        tracep->fullBit(oldp+5,((3U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullCData(oldp+6,(vlSelf->top__DOT__axi_ls_u__DOT__lenthReg),8);
        tracep->fullBit(oldp+7,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullQData(oldp+8,(vlSelf->top__DOT__axi_ls_u__DOT__rdAddr_reg),64);
        tracep->fullBit(oldp+10,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullQData(oldp+11,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullQData(oldp+13,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                     >> 2U)))),64);
        tracep->fullQData(oldp+15,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                     >> 2U)))),64);
        tracep->fullQData(oldp+17,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                     >> 2U)))),64);
        tracep->fullIData(oldp+19,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                     << 0x1eU) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 2U))),32);
        tracep->fullBit(oldp+20,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                        >> 1U))));
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+23,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+25,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+27,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullBit(oldp+28,((3U == (0x7fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 2U)))));
        tracep->fullBit(oldp+29,((8U == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 4U)))));
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullCData(oldp+31,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullBit(oldp+32,((0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+33,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullBit(oldp+34,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
        tracep->fullCData(oldp+35,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U)),4);
        tracep->fullCData(oldp+36,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? (IData)(vlSelf->top__DOT__if_axi_ar_region_o)
                                     : (IData)(vlSelf->top__DOT__ls_axi_ar_region_o))),4);
        tracep->fullBit(oldp+37,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
        tracep->fullBit(oldp+38,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__cache_dut__DOT__uncachedOk));
        tracep->fullQData(oldp+40,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
        tracep->fullCData(oldp+42,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
        tracep->fullCData(oldp+43,((0x3fU & (IData)(
                                                    (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                     >> 5U)))),6);
        tracep->fullIData(oldp+44,((0x1fffffU & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 0xbU)))),21);
        tracep->fullQData(oldp+45,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
        tracep->fullBit(oldp+49,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 5U))))))));
        tracep->fullBit(oldp+50,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 5U))))))));
        tracep->fullIData(oldp+51,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                   [(0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))]),21);
        tracep->fullIData(oldp+52,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                   [(0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))]),21);
        tracep->fullQData(oldp+53,((((QData)((IData)(
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
        tracep->fullBit(oldp+55,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
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
        tracep->fullCData(oldp+117,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+118,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                          ? 0U : 1U)
                                      : 0U)),4);
        tracep->fullCData(oldp+119,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? (0xffU & ((0U 
                                                   != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                                    ? 0U
                                                    : 3U)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                    ? 0U
                                                    : 3U)))
                                      : 0U)),8);
        tracep->fullCData(oldp+120,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? (0xfU & ((0U 
                                                  != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                                  ? (IData)(vlSelf->top__DOT__if_axi_ar_region_o)
                                                  : (IData)(vlSelf->top__DOT__ls_axi_ar_region_o)))
                                      : 0U)),4);
        tracep->fullCData(oldp+121,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (7U & (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size))
                                      : 3U)),3);
        tracep->fullQData(oldp+122,((((0U == (0x1fU 
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
        tracep->fullIData(oldp+124,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                      ? (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch)
                                      : (((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                   >> 0xbU)) 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U))))),32);
        tracep->fullCData(oldp+125,((0xffU & ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                               ? ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                                   ? 0U
                                                   : 3U)
                                               : ((6U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                   ? 0U
                                                   : 3U)))),8);
        tracep->fullQData(oldp+126,((QData)((IData)(
                                                    ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                                      ? (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch)
                                                      : 
                                                     (((IData)(
                                                               (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                >> 0xbU)) 
                                                       << 0xbU) 
                                                      | (0x7e0U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                     >> 5U)) 
                                                            << 5U))))))),64);
        tracep->fullBit(oldp+128,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+129,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+130,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+131,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+132,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+133,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+134,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+135,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+136,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullBit(oldp+137,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk)))));
        tracep->fullBit(oldp+138,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready));
        tracep->fullBit(oldp+139,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+140,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp),2);
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata),64);
        tracep->fullBit(oldp+143,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullQData(oldp+144,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg
                                      : 0ULL)),64);
        tracep->fullCData(oldp+146,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? 1U : 0U)),4);
        tracep->fullCData(oldp+147,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? 3U : 0U)),3);
        tracep->fullCData(oldp+148,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? 1U : 0U)),2);
        tracep->fullCData(oldp+149,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? 0xfU : 0U)),4);
        tracep->fullBit(oldp+150,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullCData(oldp+151,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? (0xffU & (IData)(vlSelf->top__DOT__ls_axi_w_strb_o))
                                      : 0U)),8);
        tracep->fullBit(oldp+152,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullCData(oldp+153,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullQData(oldp+154,(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg),64);
        tracep->fullCData(oldp+156,(vlSelf->top__DOT__ls_axi_w_strb_o),8);
        tracep->fullWData(oldp+157,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+161,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+165,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+169,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+173,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+181,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullIData(oldp+189,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
        tracep->fullWData(oldp+190,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+194,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+198,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+202,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+206,(vlSelf->top__DOT__Dcache_u__DOT__way1Data),256);
        tracep->fullWData(oldp+214,(vlSelf->top__DOT__Dcache_u__DOT__way2Data),256);
        tracep->fullWData(oldp+222,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),256);
        tracep->fullCData(oldp+230,(vlSelf->top__DOT__axi_ls_u__DOT__wrMask_reg),8);
        tracep->fullCData(oldp+231,((0x38U & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg) 
                                              << 3U))),6);
        tracep->fullQData(oldp+232,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+236,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+238,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+240,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+242,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+244,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        VL_EXTEND_WQ(256,64, __Vtemp257, vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch);
        if ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp260[0U] = __Vtemp257[0U];
            __Vtemp260[1U] = __Vtemp257[1U];
            __Vtemp260[2U] = __Vtemp257[2U];
            __Vtemp260[3U] = __Vtemp257[3U];
            __Vtemp260[4U] = __Vtemp257[4U];
            __Vtemp260[5U] = __Vtemp257[5U];
            __Vtemp260[6U] = __Vtemp257[6U];
            __Vtemp260[7U] = __Vtemp257[7U];
        } else {
            __Vtemp260[0U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U]);
            __Vtemp260[1U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U]);
            __Vtemp260[2U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U]);
            __Vtemp260[3U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U]);
            __Vtemp260[4U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U]);
            __Vtemp260[5U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U]);
            __Vtemp260[6U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U]);
            __Vtemp260[7U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U]);
        }
        tracep->fullWData(oldp+245,(__Vtemp260),256);
        tracep->fullBit(oldp+253,(vlSelf->top__DOT__axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+254,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr
                                      : 0ULL)),64);
        tracep->fullCData(oldp+256,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? (7U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size))
                                      : 0U)),3);
        tracep->fullCData(oldp+257,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? 1U : 0U)),2);
        tracep->fullCData(oldp+258,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? 2U : 0U)),4);
        tracep->fullBit(oldp+259,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready))
                                    : 0U)));
        tracep->fullBit(oldp+260,(vlSelf->top__DOT__axi_mmio_aw_valid_o));
        tracep->fullBit(oldp+261,(vlSelf->top__DOT__axi_mmio_w_valid_o));
        tracep->fullBit(oldp+262,(vlSelf->top__DOT__axi_mmio_b_ready_o));
        tracep->fullCData(oldp+263,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                      ? 0U : 3U)),8);
        tracep->fullCData(oldp+264,(((0U == ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                              ? 0U : 3U))
                                      ? 2U : 3U)),3);
        tracep->fullBit(oldp+265,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullBit(oldp+266,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+267,(vlSelf->top__DOT__ls_axi_w_data_o),64);
        tracep->fullBit(oldp+269,(vlSelf->top__DOT__axi_ls_u__DOT__wrLast));
        tracep->fullBit(oldp+270,((2U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullCData(oldp+271,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? 0U : 3U)),8);
        tracep->fullQData(oldp+272,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+274,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+275,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+277,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+278,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullQData(oldp+280,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+282,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullBit(oldp+283,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+284,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullIData(oldp+285,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+286,((((QData)((IData)(
                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+288,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+289,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+291,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+292,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+293,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+294,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+295,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+296,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+297,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+298,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+299,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+300,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+301,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+302,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+303,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+304,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+305,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+306,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+307,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullIData(oldp+309,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1bU))),32);
        tracep->fullQData(oldp+310,(vlSelf->top__DOT__alures_ex),64);
        tracep->fullBit(oldp+312,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+313,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x10U))),2);
        tracep->fullQData(oldp+314,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+316,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+318,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+320,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+322,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+323,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+324,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+325,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+326,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+327,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+328,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+329,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullCData(oldp+330,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+331,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+332,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+333,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 5U))),5);
        tracep->fullBit(oldp+334,(vlSelf->top__DOT__ex_flush));
        tracep->fullBit(oldp+335,((3U == (0x7fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 5U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1bU))))));
        tracep->fullBit(oldp+336,((8U == (0x1fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 3U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1dU))))));
        tracep->fullQData(oldp+337,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+339,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+341,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+343,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+344,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+346,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+347,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+348,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullBit(oldp+350,(vlSelf->top__DOT__rw_valid_i));
        tracep->fullBit(oldp+351,(vlSelf->top__DOT__DcacheRdValid));
        tracep->fullBit(oldp+352,(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
        tracep->fullQData(oldp+353,(vlSelf->top__DOT__DcacheRdAddr),64);
        tracep->fullBit(oldp+355,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullCData(oldp+356,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (0xffU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask))
                                      : 0xffU)),8);
        tracep->fullQData(oldp+357,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+359,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
        tracep->fullBit(oldp+360,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullIData(oldp+361,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullBit(oldp+362,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullCData(oldp+363,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        tracep->fullBit(oldp+364,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        __Vtemp261[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        __Vtemp261[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        __Vtemp261[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        __Vtemp261[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        tracep->fullWData(oldp+365,(__Vtemp261),128);
        __Vtemp262[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        __Vtemp262[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        __Vtemp262[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        __Vtemp262[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        tracep->fullWData(oldp+369,(__Vtemp262),128);
        tracep->fullBit(oldp+373,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
        tracep->fullBit(oldp+374,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
        tracep->fullBit(oldp+375,(vlSelf->top__DOT__cache_dut__DOT__uncached));
        tracep->fullBit(oldp+376,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+377,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+378,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+379,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullCData(oldp+380,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
        tracep->fullWData(oldp+381,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
        tracep->fullBit(oldp+389,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+390,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+391,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
        tracep->fullBit(oldp+392,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+393,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+394,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
        tracep->fullBit(oldp+395,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullQData(oldp+396,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+398,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp263[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                           ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->top__DOT__sram_rdata 
                                               >> 0x20U))
                                    : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp263[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp263[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                    ? 0ULL : vlSelf->top__DOT__pc_new) 
                                  >> 0x20U));
        tracep->fullWData(oldp+399,(__Vtemp263),96);
        tracep->fullWData(oldp+402,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+405,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+406,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+407,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+408,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+409,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+410,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+412,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+413,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+414,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+415,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+416,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+417,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+418,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullQData(oldp+428,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+430,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+432,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp265, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp266, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp267, __Vtemp265, __Vtemp266);
        VL_EXTEND_WI(65,1, __Vtemp268, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp269, __Vtemp267, __Vtemp268);
        tracep->fullBit(oldp+434,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp269[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+435,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+436,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+438,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+439,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+441,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+443,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+444,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+445,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+446,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp272, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp273, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp274, __Vtemp272, __Vtemp273);
        VL_EXTEND_WI(65,1, __Vtemp275, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp276, __Vtemp274, __Vtemp275);
        tracep->fullBit(oldp+448,((1U & __Vtemp276[2U])));
        tracep->fullBit(oldp+449,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+450,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+452,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+454,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+456,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+458,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+459,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+460,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+461,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+463,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+465,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+467,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+469,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+471,(((0x4000000U & 
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
        tracep->fullQData(oldp+473,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+475,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+476,(((((QData)((IData)(
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
        tracep->fullQData(oldp+478,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+480,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+481,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+482,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+483,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+485,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+487,((1U & ((0x200U & 
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
        tracep->fullBit(oldp+488,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+489,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        __Vtemp281[0U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                           << 2U) | ((2U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xeU)) 
                                     | (1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        __Vtemp281[1U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                           >> 0x1eU) | ((IData)((vlSelf->top__DOT__alures_ex 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp281[2U] = (((IData)((vlSelf->top__DOT__alures_ex 
                                    >> 0x20U)) >> 0x1eU) 
                          | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                             << 2U));
        __Vtemp281[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                           >> 0x1eU) | ((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp281[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                    >> 0x20U)) >> 0x1eU) 
                          | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                              << 7U) | (0x7cU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                 >> 0x19U))));
        __Vtemp281[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                 >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                     >> 0x19U))));
        __Vtemp281[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                 >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                     >> 0x19U))));
        __Vtemp281[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                >> 0x19U));
        tracep->fullWData(oldp+490,(__Vtemp281),226);
        tracep->fullBit(oldp+498,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullIData(oldp+499,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
        tracep->fullBit(oldp+500,(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i));
        tracep->fullBit(oldp+501,(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i));
        tracep->fullBit(oldp+502,(((3U != (0x7fU & 
                                           ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 5U) 
                                            | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1bU)))) 
                                   | (8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 3U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1dU)))))));
        tracep->fullIData(oldp+503,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)
                                      : (((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0xbU)) 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U))))),32);
        tracep->fullCData(oldp+504,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
        tracep->fullBit(oldp+505,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
        tracep->fullBit(oldp+506,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
        tracep->fullBit(oldp+507,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
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
        tracep->fullWData(oldp+508,(__Vtemp291),128);
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
        tracep->fullWData(oldp+512,(__Vtemp301),128);
        tracep->fullBit(oldp+516,(vlSelf->top__DOT__Dcache_u__DOT__uncached));
        tracep->fullBit(oldp+517,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+518,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
        tracep->fullCData(oldp+520,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
        tracep->fullCData(oldp+521,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+522,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullBit(oldp+523,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+524,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+525,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+526,((((QData)((IData)(
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
        tracep->fullCData(oldp+528,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
        tracep->fullWData(oldp+529,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
        tracep->fullBit(oldp+537,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+538,(vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch),64);
        tracep->fullQData(oldp+540,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1),64);
        tracep->fullQData(oldp+542,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2),64);
        tracep->fullBit(oldp+544,(vlSelf->top__DOT__Dcache_u__DOT__wrLow));
        tracep->fullBit(oldp+545,(vlSelf->top__DOT__Dcache_u__DOT__wrHigh));
        tracep->fullQData(oldp+546,(vlSelf->top__DOT__Dcache_u__DOT__storeData),64);
        tracep->fullCData(oldp+548,(vlSelf->top__DOT__Dcache_u__DOT__storeMask),8);
        tracep->fullQData(oldp+549,(vlSelf->top__DOT__Dcache_u__DOT__sramMask),64);
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
        tracep->fullWData(oldp+551,(__Vtemp313),128);
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
        tracep->fullWData(oldp+555,(__Vtemp325),128);
        tracep->fullBit(oldp+559,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+560,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+561,((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+562,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk)))));
        tracep->fullBit(oldp+563,(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk));
        tracep->fullIData(oldp+564,((IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)),32);
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
        tracep->fullWData(oldp+565,(__Vtemp338),128);
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
        tracep->fullWData(oldp+569,(__Vtemp351),128);
        tracep->fullCData(oldp+573,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullWData(oldp+574,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullQData(oldp+584,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+586,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp356[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
        __Vtemp356[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp356[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs1_idx_id])) 
                             << 0x1bU));
        __Vtemp356[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs1_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp356[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs2_idx_id])) 
                             << 0x1bU));
        __Vtemp356[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs2_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp356[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | (((IData)(vlSelf->top__DOT__ex_flush)
                               ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                             << 0x1bU));
        __Vtemp356[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                             ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                           >> 5U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                     << 0x1bU));
        __Vtemp356[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
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
        __Vtemp356[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                   >> 0x20U)) >> 5U);
        tracep->fullWData(oldp+588,(__Vtemp356),315);
        tracep->fullBit(oldp+598,(((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullBit(oldp+599,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullQData(oldp+600,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+602,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+603,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+604,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready));
        tracep->fullBit(oldp+605,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                    : 0U)));
        tracep->fullQData(oldp+606,(vlSelf->top__DOT__ls_axi_r_data_i),64);
        tracep->fullBit(oldp+608,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullBit(oldp+609,(vlSelf->top__DOT__if_stall_n));
        tracep->fullBit(oldp+610,(vlSelf->top__DOT__ls_addr_ok_i));
        tracep->fullBit(oldp+611,((1U & (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))));
        tracep->fullBit(oldp+612,(vlSelf->top__DOT__ls_stall_n));
        tracep->fullBit(oldp+613,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullQData(oldp+614,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullBit(oldp+616,(vlSelf->top__DOT__dataValid_o));
        tracep->fullBit(oldp+617,(vlSelf->top__DOT__lsAxiRdDataVAlid));
        tracep->fullBit(oldp+618,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+619,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+620,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+622,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullCData(oldp+623,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullCData(oldp+624,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+625,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+626,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
        tracep->fullCData(oldp+627,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+628,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+629,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+630,(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk));
        tracep->fullCData(oldp+631,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+632,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+633,(vlSelf->top__DOT__axi_ls_u__DOT__w_state_next),2);
        tracep->fullCData(oldp+634,(vlSelf->top__DOT__axi_ls_u__DOT__r_state_next),2);
        tracep->fullWData(oldp+635,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullQData(oldp+645,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+647,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+649,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+651,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+653,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+655,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+657,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+659,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+661,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+663,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+665,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+667,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+669,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+671,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+673,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+675,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+677,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+679,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+681,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+683,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+685,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+687,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+689,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+691,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+693,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+695,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+697,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+699,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+701,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+703,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+705,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+707,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+709,(vlSelf->top__DOT__Dcache_u__DOT__randomBit));
        tracep->fullQData(oldp+710,(vlSelf->top__DOT__DcacheWrAddr),64);
        tracep->fullBit(oldp+712,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
        tracep->fullBit(oldp+713,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
        tracep->fullBit(oldp+714,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
        tracep->fullBit(oldp+715,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
        tracep->fullBit(oldp+716,(vlSelf->clk));
        tracep->fullBit(oldp+717,(vlSelf->rst_n));
        tracep->fullQData(oldp+718,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+720,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+722,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+723,(vlSelf->regA0),64);
        tracep->fullBit(oldp+725,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+726,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+727,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+728,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+730,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+731,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+732,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+733,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+734,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+735,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+736,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+737,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+738,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+739,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+740,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+741,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+742,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+743,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+745,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+746,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+747,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+748,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+749,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+750,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+752,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+753,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+754,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+755,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+756,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+757,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+758,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+759,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+760,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+761,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+762,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+763,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+764,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+766,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+767,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+768,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+769,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+770,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+771,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+772,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+773,(vlSelf->axi_b_user_i));
        tracep->fullCData(oldp+774,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? (0xffU & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__lenthReg))
                                      : 0U)),8);
        tracep->fullQData(oldp+775,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? vlSelf->top__DOT__ls_axi_w_data_o
                                      : 0ULL)),64);
        tracep->fullBit(oldp+777,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrLast))
                                    : 0U)));
        tracep->fullBit(oldp+778,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? 0U
                                    : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullCData(oldp+779,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0U : (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                                : (IData)(vlSelf->axi_r_resp_i))))),2);
        tracep->fullBit(oldp+780,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)
                                    : (IData)(vlSelf->axi_aw_ready_i))));
        tracep->fullBit(oldp+781,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid)
                                    : (IData)(vlSelf->axi_b_valid_i))));
        tracep->fullCData(oldp+782,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp)
                                      : (IData)(vlSelf->axi_b_resp_i))),2);
        tracep->fullCData(oldp+783,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? 1U : (IData)(vlSelf->axi_b_id_i))),4);
        tracep->fullBit(oldp+784,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->top__DOT__axi_mmio_b_user_i)
                                    : (IData)(vlSelf->axi_b_user_i))));
        tracep->fullBit(oldp+785,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? (1U 
                                                   & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                    : 0U)));
        tracep->fullCData(oldp+786,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? (3U & ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                                : (IData)(vlSelf->axi_r_resp_i)))
                                      : 0U)),2);
        tracep->fullBit(oldp+787,((1U & (~ ((((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                              | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                             | (IData)(vlSelf->top__DOT__ls_not_ok)) 
                                            | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))))));
        tracep->fullBit(oldp+788,((1U & (~ (((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                             | (IData)(vlSelf->top__DOT__ls_not_ok)) 
                                            | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))))));
        tracep->fullQData(oldp+789,(((((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+791,((((((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullCData(oldp+792,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                      : (IData)(vlSelf->axi_r_resp_i))),2);
        tracep->fullBit(oldp+793,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->top__DOT__axi_mmio_r_user_i)
                                    : (IData)(vlSelf->axi_r_user_i))));
        tracep->fullBit(oldp+794,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->fullBit(oldp+795,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->fullIData(oldp+796,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 0xbU)))
                                          : 0U) : 0U)),21);
        tracep->fullIData(oldp+797,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? 0U : (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 0xbU))))
                                      : 0U)),21);
        tracep->fullQData(oldp+798,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+800,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullIData(oldp+802,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullCData(oldp+803,(((4U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullBit(oldp+804,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullBit(oldp+805,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullIData(oldp+806,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullIData(oldp+807,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+808,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+810,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullBit(oldp+812,((1U & (~ ((((((((0U 
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
        tracep->fullBit(oldp+813,(((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                         | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                            & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                        & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                       | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                      | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                     | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))));
        tracep->fullBit(oldp+814,((1U & (~ ((((((((0U 
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
        tracep->fullBit(oldp+815,(((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                         | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                            & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                        & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                       | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                      | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                     | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))));
        tracep->fullBit(oldp+816,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__axi_mmio_ar_valid_o)) 
                                   & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+817,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                   & (IData)(vlSelf->top__DOT__axi_mmio_w_valid_o))));
        tracep->fullIData(oldp+818,(0x40U),32);
        tracep->fullIData(oldp+819,(4U),32);
        tracep->fullIData(oldp+820,(8U),32);
        tracep->fullIData(oldp+821,(1U),32);
        tracep->fullCData(oldp+822,(0U),3);
        tracep->fullBit(oldp+823,(0U));
        tracep->fullBit(oldp+824,(0U));
        tracep->fullCData(oldp+825,(0U),4);
        tracep->fullBit(oldp+826,(vlSelf->top__DOT__axi_mmio_r_last_i));
        tracep->fullCData(oldp+827,(vlSelf->top__DOT__axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+828,(vlSelf->top__DOT__axi_mmio_r_user_i));
        tracep->fullCData(oldp+829,(vlSelf->top__DOT__axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+830,(vlSelf->top__DOT__axi_mmio_b_user_i));
        tracep->fullCData(oldp+831,(1U),2);
        tracep->fullCData(oldp+832,(2U),4);
        tracep->fullCData(oldp+833,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+834,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+835,(1U),4);
        tracep->fullCData(oldp+836,(3U),3);
        tracep->fullCData(oldp+837,(0xfU),4);
        tracep->fullCData(oldp+838,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+839,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+840,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+842,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+843,(1U));
        tracep->fullBit(oldp+844,(vlSelf->top__DOT__ls_sram_rd_data_valid));
        tracep->fullBit(oldp+845,(vlSelf->top__DOT__ls_sram_wr_data_ok));
        tracep->fullBit(oldp+846,(0U));
        tracep->fullQData(oldp+847,(0ULL),64);
        tracep->fullCData(oldp+849,(0U),8);
        tracep->fullCData(oldp+850,(1U),3);
        tracep->fullCData(oldp+851,(2U),3);
        tracep->fullCData(oldp+852,(7U),3);
        tracep->fullCData(oldp+853,(6U),3);
        tracep->fullBit(oldp+854,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+855,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullIData(oldp+856,(0x80U),32);
        tracep->fullIData(oldp+857,(6U),32);
        __Vtemp357[0U] = 0U;
        __Vtemp357[1U] = 0U;
        __Vtemp357[2U] = 0U;
        __Vtemp357[3U] = 0U;
        tracep->fullWData(oldp+858,(__Vtemp357),128);
        __Vtemp358[0U] = 0xffffffffU;
        __Vtemp358[1U] = 0xffffffffU;
        __Vtemp358[2U] = 0xffffffffU;
        __Vtemp358[3U] = 0xffffffffU;
        tracep->fullWData(oldp+862,(__Vtemp358),128);
        tracep->fullCData(oldp+866,(0U),2);
        tracep->fullCData(oldp+867,(3U),2);
        tracep->fullCData(oldp+868,(2U),2);
        tracep->fullIData(oldp+869,(3U),32);
        tracep->fullIData(oldp+870,(0x60U),32);
        tracep->fullIData(oldp+871,(0U),32);
        tracep->fullIData(oldp+872,(0x13bU),32);
        tracep->fullBit(oldp+873,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+874,(0xe2U),32);
        tracep->fullBit(oldp+875,(vlSelf->top__DOT__Dcache_u__DOT__validWay1_q));
        tracep->fullBit(oldp+876,(vlSelf->top__DOT__Dcache_u__DOT__validWay2_q));
        tracep->fullBit(oldp+877,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullCData(oldp+878,(3U),8);
        tracep->fullIData(oldp+879,(0x121U),32);
        tracep->fullIData(oldp+880,(0x40U),32);
        tracep->fullIData(oldp+881,(3U),32);
        tracep->fullIData(oldp+882,(1U),32);
        tracep->fullQData(oldp+883,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+885,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index),32);
    }
}
