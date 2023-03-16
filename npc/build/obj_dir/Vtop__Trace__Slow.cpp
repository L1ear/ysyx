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
        tracep->declBit(c+734,"clk", false,-1);
        tracep->declBit(c+735,"rst_n", false,-1);
        tracep->declQuad(c+736,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+738,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+740,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+741,"regA0", false,-1, 63,0);
        tracep->declBit(c+743,"stall_n_diff", false,-1);
        tracep->declBit(c+744,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+745,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+746,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+748,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+749,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+750,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+751,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+752,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+753,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+754,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+755,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+756,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+757,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+758,"axi_r_ready_o", false,-1);
        tracep->declBit(c+759,"axi_r_valid_i", false,-1);
        tracep->declBus(c+760,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+761,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+763,"axi_r_last_i", false,-1);
        tracep->declBus(c+764,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+765,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+766,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+767,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+768,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+770,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+771,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+772,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+773,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+774,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+775,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+776,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+777,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+778,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+779,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+780,"axi_w_ready_i", false,-1);
        tracep->declBit(c+781,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+782,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+784,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+785,"axi_w_last_o", false,-1);
        tracep->declBus(c+786,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+787,"axi_b_ready_o", false,-1);
        tracep->declBit(c+788,"axi_b_valid_i", false,-1);
        tracep->declBus(c+789,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+790,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+791,"axi_b_user_i", false,-1, 0,0);
        tracep->declBus(c+830,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+830,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+830,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+830,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+831,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+832,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+833,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+734,"top clk", false,-1);
        tracep->declBit(c+735,"top rst_n", false,-1);
        tracep->declQuad(c+736,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+738,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+740,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+741,"top regA0", false,-1, 63,0);
        tracep->declBit(c+743,"top stall_n_diff", false,-1);
        tracep->declBit(c+744,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+745,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+746,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+748,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+749,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+750,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+751,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+752,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+753,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+754,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+755,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+756,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+757,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+758,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+759,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+760,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+761,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+763,"top axi_r_last_i", false,-1);
        tracep->declBus(c+764,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+765,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+766,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+767,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+768,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+770,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+771,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+772,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+773,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+774,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+775,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+776,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+777,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+778,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+779,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+780,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+781,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+782,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+784,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+785,"top axi_w_last_o", false,-1);
        tracep->declBus(c+786,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+787,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+788,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+789,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+790,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+791,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+141,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+264,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+265,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+834,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+121,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+835,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+122,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+267,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+268,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+836,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+269,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+837,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+123,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+270,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+142,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+143,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+144,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+838,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+839,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+840,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+146,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+271,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+147,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+834,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+149,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+835,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+250,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+150,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+151,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+836,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+152,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+837,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+837,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+153,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+272,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+251,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+154,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+253,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+835,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+273,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+155,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+156,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+841,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+842,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1,"top instr_fetching", false,-1);
        tracep->declBit(c+792,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+2,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+3,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+834,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+837,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+835,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+274,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+275,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+843,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+836,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+844,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+837,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+845,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+5,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+617,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+793,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+618,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+620,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+621,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+846,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+794,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+276,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+157,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+834,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+847,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+835,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+277,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+159,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+843,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+836,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+848,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+837,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+837,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+622,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+278,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+279,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+160,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+281,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+835,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+282,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+795,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+796,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+797,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+798,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+799,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+6,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+7,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+834,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+847,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+835,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+277,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+124,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+843,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+836,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+844,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+837,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+849,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+9,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+623,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+800,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+624,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+626,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+621,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+850,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+851,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+283,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+285,"top is_jump", false,-1);
        tracep->declQuad(c+286,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+801,"top pc_stall_n", false,-1);
        tracep->declBit(c+627,"top if_stall_n", false,-1);
        tracep->declBit(c+288,"top if_instr_valid", false,-1);
        tracep->declBit(c+853,"top sram_data_valid", false,-1);
        tracep->declQuad(c+289,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+291,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+854,"top sram_ren", false,-1);
        tracep->declBit(c+293,"top sram_addr_valid", false,-1);
        tracep->declBit(c+294,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+295,"top cacheDataOk_i", false,-1);
        tracep->declBus(c+296,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+297,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+299,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+602,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+604,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+300,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+302,"top src1sel_id", false,-1);
        tracep->declBus(c+303,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+304,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+305,"top is_brc_id", false,-1);
        tracep->declBit(c+306,"top is_jal_id", false,-1);
        tracep->declBit(c+307,"top is_jalr_id", false,-1);
        tracep->declBit(c+308,"top wben_id", false,-1);
        tracep->declBus(c+309,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+310,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+801,"top id_stall_n", false,-1);
        tracep->declBit(c+311,"top DivEn_id", false,-1);
        tracep->declBus(c+312,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+313,"top in_trap_id", false,-1);
        tracep->declBit(c+314,"top out_trap_id", false,-1);
        tracep->declBit(c+315,"top trap_id", false,-1);
        tracep->declBit(c+316,"top ld_use_hazard", false,-1);
        tracep->declBit(c+317,"top id_flush", false,-1);
        tracep->declQuad(c+318,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+320,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+321,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+323,"top src1sel_ex", false,-1);
        tracep->declBus(c+324,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+325,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+327,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+329,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+331,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+333,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+334,"top is_brc_ex", false,-1);
        tracep->declBit(c+335,"top is_jal_ex", false,-1);
        tracep->declBit(c+336,"top is_jalr_ex", false,-1);
        tracep->declBit(c+337,"top wben_ex", false,-1);
        tracep->declBit(c+338,"top DivEn_ex", false,-1);
        tracep->declBus(c+339,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+340,"top trap_ex", false,-1);
        tracep->declBit(c+802,"top ex_stall_n", false,-1);
        tracep->declQuad(c+10,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+341,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+342,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+343,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+344,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+345,"top ex_flush", false,-1);
        tracep->declBit(c+346,"top rden_ls", false,-1);
        tracep->declBit(c+347,"top wren_ls", false,-1);
        tracep->declBit(c+628,"top ls_addr_ok_i", false,-1);
        tracep->declBit(c+629,"top ex_not_ok", false,-1);
        tracep->declQuad(c+12,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+14,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+16,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+18,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+803,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+19,"top wben_ls", false,-1);
        tracep->declQuad(c+20,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+22,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+26,"top trap_ls", false,-1);
        tracep->declBit(c+630,"top ls_stall_n", false,-1);
        tracep->declBit(c+631,"top ls_not_ok", false,-1);
        tracep->declQuad(c+16,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+125,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+29,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+855,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+856,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+632,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+30,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+348,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+349,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+351,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+353,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+355,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+356,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+358,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+359,"top wben_wb", false,-1);
        tracep->declQuad(c+360,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+630,"top wb_stall_n", false,-1);
        tracep->declBit(c+362,"top rw_valid_i", false,-1);
        tracep->declBit(c+31,"top rw_ready_o", false,-1);
        tracep->declBus(c+274,"top fetchLenth", false,-1, 7,0);
        tracep->declBit(c+620,"top rdLast_o", false,-1);
        tracep->declBus(c+127,"top rw_addr_i", false,-1, 31,0);
        tracep->declQuad(c+618,"top data_read_o", false,-1, 63,0);
        tracep->declBit(c+634,"top dataValid_o", false,-1);
        tracep->declBit(c+805,"top dataNotOk", false,-1);
        tracep->declBit(c+363,"top DcacheRdValid", false,-1);
        tracep->declBit(c+364,"top DcacheWrValid", false,-1);
        tracep->declBit(c+32,"top lsAxiRdReady", false,-1);
        tracep->declBus(c+277,"top lsFetchLenth", false,-1, 7,0);
        tracep->declBit(c+626,"top lsRdLast", false,-1);
        tracep->declQuad(c+365,"top DcacheRdAddr", false,-1, 63,0);
        tracep->declQuad(c+728,"top DcacheWrAddr", false,-1, 63,0);
        tracep->declQuad(c+624,"top lsAxiRdData", false,-1, 63,0);
        tracep->declBit(c+635,"top lsAxiRdDataVAlid", false,-1);
        tracep->declBit(c+367,"top lsAxiWrReady", false,-1);
        tracep->declArray(c+256,"top lsAxiWrData", false,-1, 255,0);
        tracep->declBus(c+277,"top lsStoreLenth", false,-1, 7,0);
        tracep->declBus(c+368,"top lsStoreMask", false,-1, 7,0);
        tracep->declBus(c+369,"top lsStoreSize", false,-1, 2,0);
        tracep->declBus(c+124,"top lsLoadSize", false,-1, 2,0);
        tracep->declBus(c+830,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+830,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+830,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+830,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+831,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+832,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+833,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+792,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+2,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+3,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+834,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+837,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+835,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+274,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+275,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+843,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+836,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+844,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+837,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+845,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+5,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+617,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+793,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+618,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+620,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+621,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+846,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+794,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+276,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+157,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+834,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+847,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+835,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+277,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+159,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+843,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+836,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+848,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+837,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+837,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+622,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+278,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+279,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+160,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+281,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+835,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+282,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+795,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+796,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+797,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+798,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+799,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+6,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+7,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+834,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+847,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+835,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+277,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+124,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+843,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+836,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+844,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+837,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+849,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+9,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+623,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+800,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+624,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+626,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+621,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+850,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+766,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+767,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+768,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+770,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+771,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+772,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+773,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+774,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+775,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+776,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+777,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+778,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+779,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+780,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+781,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+782,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+784,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+785,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+786,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+787,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+788,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+789,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+790,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+791,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+744,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+745,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+746,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+748,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+749,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+750,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+751,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+752,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+753,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+754,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+755,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+756,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+757,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+758,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+759,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+760,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+761,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+763,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+764,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+765,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+146,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+271,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+147,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+834,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+149,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+835,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+250,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+150,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+151,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+836,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+152,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+837,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+837,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+153,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+272,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+251,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+154,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+253,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+835,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+273,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+155,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+156,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+847,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+842,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+141,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+264,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+265,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+834,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+121,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+835,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+122,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+267,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+268,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+836,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+269,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+837,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+123,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+270,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+142,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+143,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+144,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+142,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+847,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+840,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+794,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+276,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+157,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+834,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+847,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+835,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+277,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+159,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+843,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+836,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+848,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+837,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+837,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+622,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+278,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+279,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+160,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+281,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+835,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+282,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+795,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+796,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+797,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+798,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+636,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+33,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+370,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+834,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+34,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+835,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+128,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+372,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+843,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+857,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+844,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+837,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+35,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+373,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+637,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+806,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+638,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+640,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+621,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+807,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+734,"top IF_u clk", false,-1);
        tracep->declBit(c+735,"top IF_u rst_n", false,-1);
        tracep->declBit(c+285,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+286,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+22,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+313,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+314,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+627,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+283,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+296,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+288,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+289,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+853,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+294,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+295,"top IF_u cacheDataOk_i", false,-1);
        tracep->declQuad(c+291,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+854,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+293,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+291,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+734,"top cache_dut clk", false,-1);
        tracep->declBit(c+735,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+374,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+293,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+836,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+858,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+860,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+627,"top cache_dut stall_n", false,-1);
        tracep->declBit(c+294,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+375,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+295,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+289,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+362,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+31,"top cache_dut axiRdReady", false,-1);
        tracep->declBus(c+274,"top cache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+620,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+127,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+618,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBit(c+634,"top cache_dut dataValid_i", false,-1);
        tracep->declBus(c+834,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+861,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+862,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+863,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+864,"top cache_dut replace", false,-1, 2,0);
        tracep->declBus(c+865,"top cache_dut unCacheOp", false,-1, 2,0);
        tracep->declBus(c+376,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+641,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+377,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+36,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+37,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+161,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+165,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+169,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+173,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+378,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+382,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+378,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+382,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+386,"top cache_dut wenWay1", false,-1);
        tracep->declBit(c+387,"top cache_dut wenWay2", false,-1);
        tracep->declBit(c+388,"top cache_dut uncached", false,-1);
        tracep->declBit(c+38,"top cache_dut uncachedOk", false,-1);
        tracep->declBit(c+389,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+39,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+41,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+42,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+43,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+44,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+46,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+48,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+49,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+808,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+809,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+810,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+811,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+50,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+51,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+866,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+867,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+390,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+177,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+185,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+812,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+814,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+391,"top cache_dut missEn", false,-1);
        tracep->declBit(c+392,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+52,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+193,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+54,"top cache_dut missFlag", false,-1);
        tracep->declBus(c+393,"top cache_dut rdCnt", false,-1, 1,0);
        tracep->declArray(c+394,"top cache_dut rdBuffer", false,-1, 255,0);
        tracep->declBit(c+402,"top cache_dut replaceEn", false,-1);
        tracep->declBus(c+868,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+830,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+869,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+868,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+161,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+734,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+403,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+404,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+870,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+642,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+378,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+405,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+386,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+874,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+868,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+830,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+869,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+868,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+165,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+734,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+403,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+404,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+870,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+642,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+382,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+405,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+386,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+874,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+868,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+830,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+869,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+868,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+169,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+734,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+406,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+407,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+870,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+643,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+378,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+408,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+387,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+874,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+868,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+830,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+869,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+868,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+173,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+734,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+406,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+407,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+870,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+643,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+382,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+408,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+387,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+874,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+830,"top axi_icache_dut RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+830,"top axi_icache_dut RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+830,"top axi_icache_dut AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+830,"top axi_icache_dut AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+831,"top axi_icache_dut AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+832,"top axi_icache_dut AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+833,"top axi_icache_dut AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+734,"top axi_icache_dut clock", false,-1);
        tracep->declBit(c+735,"top axi_icache_dut reset", false,-1);
        tracep->declBit(c+362,"top axi_icache_dut rw_valid_i", false,-1);
        tracep->declBit(c+31,"top axi_icache_dut rw_ready_o", false,-1);
        tracep->declQuad(c+618,"top axi_icache_dut data_read_o", false,-1, 63,0);
        tracep->declQuad(c+129,"top axi_icache_dut rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+274,"top axi_icache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+620,"top axi_icache_dut rdLast_o", false,-1);
        tracep->declBit(c+634,"top axi_icache_dut dataValid_o", false,-1);
        tracep->declBit(c+1,"top axi_icache_dut instr_fetching", false,-1);
        tracep->declBit(c+792,"top axi_icache_dut axi_ar_ready_i", false,-1);
        tracep->declBit(c+2,"top axi_icache_dut axi_ar_valid_o", false,-1);
        tracep->declQuad(c+3,"top axi_icache_dut axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+834,"top axi_icache_dut axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+837,"top axi_icache_dut axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+835,"top axi_icache_dut axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+274,"top axi_icache_dut axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+275,"top axi_icache_dut axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+843,"top axi_icache_dut axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+836,"top axi_icache_dut axi_ar_lock_o", false,-1);
        tracep->declBus(c+844,"top axi_icache_dut axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+837,"top axi_icache_dut axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+845,"top axi_icache_dut axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+5,"top axi_icache_dut axi_r_ready_o", false,-1);
        tracep->declBit(c+617,"top axi_icache_dut axi_r_valid_i", false,-1);
        tracep->declBus(c+793,"top axi_icache_dut axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+618,"top axi_icache_dut axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+620,"top axi_icache_dut axi_r_last_i", false,-1);
        tracep->declBus(c+621,"top axi_icache_dut axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+846,"top axi_icache_dut axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+878,"top axi_icache_dut r_state_idle", false,-1, 1,0);
        tracep->declBus(c+843,"top axi_icache_dut r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+879,"top axi_icache_dut r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+880,"top axi_icache_dut r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+55,"top axi_icache_dut r_state", false,-1, 1,0);
        tracep->declBus(c+644,"top axi_icache_dut r_state_next", false,-1, 1,0);
        tracep->declBit(c+2,"top axi_icache_dut ar_valid", false,-1);
        tracep->declBit(c+5,"top axi_icache_dut r_ready", false,-1);
        tracep->declQuad(c+3,"top axi_icache_dut addr_reg", false,-1, 63,0);
        tracep->declBus(c+881,"top axi_icache_dut AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+837,"top axi_icache_dut axi_id", false,-1, 3,0);
        tracep->declBus(c+836,"top axi_icache_dut axi_user", false,-1, 0,0);
        tracep->declBus(c+274,"top axi_icache_dut axi_len", false,-1, 7,0);
        tracep->declBus(c+275,"top axi_icache_dut axi_size", false,-1, 2,0);
        tracep->declBit(c+734,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+735,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+283,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+296,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+801,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+317,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+297,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+299,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+409,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+411,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+882,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+883,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+734,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+735,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+801,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+412,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+415,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+734,"top ID_u clk", false,-1);
        tracep->declBit(c+735,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+297,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+349,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+355,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+299,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+356,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+358,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+359,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+604,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+602,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+300,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+302,"top ID_u src1sel", false,-1);
        tracep->declBus(c+303,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+304,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+307,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+306,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+305,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+308,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+309,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+310,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+741,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+311,"top ID_u DivEn", false,-1);
        tracep->declBus(c+312,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+315,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+313,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+314,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+418,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+300,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+604,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+602,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+297,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+299,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+309,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+310,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+418,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+302,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+303,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+304,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+307,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+306,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+305,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+308,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+311,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+312,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+315,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+313,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+314,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+419,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+420,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+421,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+422,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+418,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+300,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+734,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+349,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+355,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+309,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+604,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+310,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+602,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+358,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+356,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+359,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+741,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+663+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+299,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+320,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+316,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+734,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+735,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+802,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+345,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+297,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+299,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+300,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+602,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+604,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+304,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+307,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+306,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+305,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+302,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+303,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+308,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+309,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+310,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+311,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+312,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+315,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+318,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+320,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+325,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+327,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+329,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+333,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+336,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+335,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+334,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+323,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+324,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+337,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+343,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+344,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+338,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+339,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+340,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+423,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+425,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+426,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+427,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+428,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+429,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+430,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+884,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+883,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+734,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+735,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+802,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+606,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+431,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+333,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+327,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+325,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+329,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+318,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+320,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+336,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+335,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+334,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+323,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+324,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+341,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+342,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+16,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+356,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+10,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+338,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+339,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+321,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+286,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+331,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+285,"top ex_stage_u is_jump_o", false,-1);
        tracep->declBit(c+629,"top ex_stage_u exNotOk", false,-1);
        tracep->declBit(c+346,"top ex_stage_u rden_ls", false,-1);
        tracep->declBit(c+347,"top ex_stage_u wren_ls", false,-1);
        tracep->declBit(c+628,"top ex_stage_u ls_addr_ok_i", false,-1);
        tracep->declQuad(c+441,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+443,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+445,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+331,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+333,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+441,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+443,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+338,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+339,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+321,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+447,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+448,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+449,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+451,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+452,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+454,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+456,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+456,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+457,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+458,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+459,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+461,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+462,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+463,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+465,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+467,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+469,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+441,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+452,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+451,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+454,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+461,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+448,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+462,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+471,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+458,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+456,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+457,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+451,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+456,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+472,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+441,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+473,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+457,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+456,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+459,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+474,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+476,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+478,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+480,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+482,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+484,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+486,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+441,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+443,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+339,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+469,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+445,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+331,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+336,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+335,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+334,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+488,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+329,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+318,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+286,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+285,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+489,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+491,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+885,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+493,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+494,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+495,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+496,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+498,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+500,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+734,"top forwarding_u clk", false,-1);
        tracep->declBit(c+735,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+343,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+344,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+56,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+358,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+19,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+359,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+356,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+630,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+341,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+342,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+10,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+10,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+57,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+58,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+131,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+501,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+132,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+133,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+502,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+134,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+734,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+735,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+318,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+331,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+320,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+321,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+337,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+340,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+630,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+12,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+14,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+18,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+16,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+19,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+26,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+886,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+883,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+734,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+735,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+630,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+503,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+59,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+734,"top ls_u clk", false,-1);
        tracep->declBit(c+735,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+12,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+14,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+18,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+351,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+355,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+353,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u trap_ls_i", false,-1);
        tracep->declBit(c+630,"top ls_u stall_n", false,-1);
        tracep->declQuad(c+803,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+20,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+631,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+16,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+125,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+29,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+30,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+348,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+805,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+805,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+632,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u rden", false,-1);
        tracep->declBus(c+67,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+125,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+511,"top ls_u wren_last", false,-1);
        tracep->declBit(c+734,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+735,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+28,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+67,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+125,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+12,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+351,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+511,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+803,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+631,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+16,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+125,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+29,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+30,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+348,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+805,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+805,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+632,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+632,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+68,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+69,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+512,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+513,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+514,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+515,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+516,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+348,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+645,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+646,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+647,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+30,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+70,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+71,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+72,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+73,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+18,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+355,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+14,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+353,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+67,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+125,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+135,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+734,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+735,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+12,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+18,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+16,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u CSR_u trap", false,-1);
        tracep->declBit(c+630,"top ls_u CSR_u stall_n", false,-1);
        tracep->declBit(c+887,"top ls_u CSR_u timer_int_i", false,-1);
        tracep->declQuad(c+20,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+74,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+75,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+76,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+77,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+78,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+79,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+80,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+81,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+82,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declBit(c+83,"top ls_u CSR_u sel_mie", false,-1);
        tracep->declBit(c+84,"top ls_u CSR_u sel_mip", false,-1);
        tracep->declQuad(c+16,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+85,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+87,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+89,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+91,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declBit(c+93,"top ls_u CSR_u mstatus_MIE", false,-1);
        tracep->declQuad(c+94,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+96,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declQuad(c+98,"top ls_u CSR_u mie", false,-1, 63,0);
        tracep->declBit(c+100,"top ls_u CSR_u mie_MTIE", false,-1);
        tracep->declQuad(c+101,"top ls_u CSR_u mip", false,-1, 63,0);
        tracep->declBit(c+103,"top ls_u CSR_u mie_MTIP", false,-1);
        tracep->declBit(c+734,"top Dcache_u clk", false,-1);
        tracep->declBit(c+735,"top Dcache_u rst_n", false,-1);
        tracep->declBus(c+517,"top Dcache_u addr_i", false,-1, 31,0);
        tracep->declBit(c+518,"top Dcache_u exValid_i", false,-1);
        tracep->declBit(c+519,"top Dcache_u lsValid_i", false,-1);
        tracep->declBit(c+520,"top Dcache_u op_i", false,-1);
        tracep->declQuad(c+125,"top Dcache_u wr_data_i", false,-1, 63,0);
        tracep->declBus(c+29,"top Dcache_u wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+630,"top Dcache_u stall_n", false,-1);
        tracep->declBit(c+628,"top Dcache_u addr_ok_o", false,-1);
        tracep->declBit(c+805,"top Dcache_u data_notok_o", false,-1);
        tracep->declQuad(c+632,"top Dcache_u rd_data_o", false,-1, 63,0);
        tracep->declBus(c+30,"top Dcache_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+348,"top Dcache_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+363,"top Dcache_u cacheRdValid_o", false,-1);
        tracep->declBit(c+32,"top Dcache_u axiRdReady", false,-1);
        tracep->declBus(c+277,"top Dcache_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+626,"top Dcache_u rdLast_i", false,-1);
        tracep->declBus(c+521,"top Dcache_u cacheRdAddr_o", false,-1, 31,0);
        tracep->declBus(c+816,"top Dcache_u cacheWrAddr_o", false,-1, 31,0);
        tracep->declBus(c+124,"top Dcache_u cacheRdSize_o", false,-1, 2,0);
        tracep->declQuad(c+624,"top Dcache_u rdData_i", false,-1, 63,0);
        tracep->declBit(c+635,"top Dcache_u dataValid_i", false,-1);
        tracep->declBit(c+367,"top Dcache_u axiWrReady", false,-1);
        tracep->declBit(c+364,"top Dcache_u cacheWrValid_o", false,-1);
        tracep->declArray(c+256,"top Dcache_u cacheWrData_o", false,-1, 255,0);
        tracep->declBus(c+277,"top Dcache_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+368,"top Dcache_u cacheWrMask_o", false,-1, 7,0);
        tracep->declBus(c+369,"top Dcache_u cacheWrSize_o", false,-1, 2,0);
        tracep->declBus(c+834,"top Dcache_u idle", false,-1, 2,0);
        tracep->declBus(c+861,"top Dcache_u compare", false,-1, 2,0);
        tracep->declBus(c+862,"top Dcache_u miss", false,-1, 2,0);
        tracep->declBus(c+863,"top Dcache_u getdata", false,-1, 2,0);
        tracep->declBus(c+864,"top Dcache_u replace", false,-1, 2,0);
        tracep->declBus(c+865,"top Dcache_u uncacheOp", false,-1, 2,0);
        tracep->declBus(c+522,"top Dcache_u cacheCurState", false,-1, 2,0);
        tracep->declBus(c+817,"top Dcache_u cacheNexState", false,-1, 2,0);
        tracep->declBit(c+523,"top Dcache_u cacheHit", false,-1);
        tracep->declBit(c+524,"top Dcache_u way1Hit", false,-1);
        tracep->declBit(c+525,"top Dcache_u way2Hit", false,-1);
        tracep->declArray(c+194,"top Dcache_u dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+198,"top Dcache_u dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+202,"top Dcache_u dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+206,"top Dcache_u dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+526,"top Dcache_u inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+530,"top Dcache_u inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+526,"top Dcache_u inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+530,"top Dcache_u inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+730,"top Dcache_u wenWay1", false,-1);
        tracep->declBit(c+731,"top Dcache_u wenWay2", false,-1);
        tracep->declBit(c+534,"top Dcache_u uncached", false,-1);
        tracep->declBit(c+535,"top Dcache_u idleEn", false,-1);
        tracep->declQuad(c+536,"top Dcache_u reqLatch", false,-1, 32,0);
        tracep->declBus(c+538,"top Dcache_u offset", false,-1, 4,0);
        tracep->declBus(c+539,"top Dcache_u index", false,-1, 5,0);
        tracep->declBus(c+540,"top Dcache_u tag", false,-1, 20,0);
        tracep->declQuad(c+104,"top Dcache_u validArray1", false,-1, 63,0);
        tracep->declQuad(c+106,"top Dcache_u validArray2", false,-1, 63,0);
        tracep->declBit(c+136,"top Dcache_u bitValid1", false,-1);
        tracep->declBit(c+137,"top Dcache_u bitValid2", false,-1);
        tracep->declBit(c+818,"top Dcache_u bitValid1_d", false,-1);
        tracep->declBit(c+819,"top Dcache_u bitValid2_d", false,-1);
        tracep->declBus(c+820,"top Dcache_u tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+821,"top Dcache_u tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+138,"top Dcache_u tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+139,"top Dcache_u tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+888,"top Dcache_u validWay1_q", false,-1);
        tracep->declBit(c+889,"top Dcache_u validWay2_q", false,-1);
        tracep->declBus(c+108,"top Dcache_u testTag", false,-1, 20,0);
        tracep->declBus(c+109,"top Dcache_u tagtest", false,-1, 20,0);
        tracep->declBit(c+110,"top Dcache_u replaceEnDelay", false,-1);
        tracep->declBit(c+541,"top Dcache_u compareEn", false,-1);
        tracep->declArray(c+210,"top Dcache_u way1Data", false,-1, 255,0);
        tracep->declArray(c+218,"top Dcache_u way2Data", false,-1, 255,0);
        tracep->declQuad(c+822,"top Dcache_u rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+824,"top Dcache_u rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+542,"top Dcache_u missEn", false,-1);
        tracep->declBit(c+543,"top Dcache_u getdataEn", false,-1);
        tracep->declQuad(c+544,"top Dcache_u addrToRead", false,-1, 63,0);
        tracep->declBit(c+727,"top Dcache_u randomBit", false,-1);
        tracep->declBit(c+110,"top Dcache_u missFlag", false,-1);
        tracep->declBus(c+546,"top Dcache_u rdCnt", false,-1, 1,0);
        tracep->declArray(c+547,"top Dcache_u rdBuffer", false,-1, 255,0);
        tracep->declBit(c+555,"top Dcache_u replaceEn", false,-1);
        tracep->declBit(c+111,"top Dcache_u wenDelay1", false,-1);
        tracep->declBit(c+112,"top Dcache_u wenDelay2", false,-1);
        tracep->declQuad(c+556,"top Dcache_u wrDataLatch", false,-1, 63,0);
        tracep->declBus(c+113,"top Dcache_u wrMaskLatch", false,-1, 7,0);
        tracep->declQuad(c+558,"top Dcache_u dirtyArray1", false,-1, 63,0);
        tracep->declQuad(c+560,"top Dcache_u dirtyArray2", false,-1, 63,0);
        tracep->declBit(c+562,"top Dcache_u wrLow", false,-1);
        tracep->declBit(c+563,"top Dcache_u wrHigh", false,-1);
        tracep->declQuad(c+564,"top Dcache_u storeData", false,-1, 63,0);
        tracep->declBus(c+566,"top Dcache_u storeMask", false,-1, 7,0);
        tracep->declQuad(c+567,"top Dcache_u sramMask", false,-1, 63,0);
        tracep->declArray(c+569,"top Dcache_u maskWay1_1", false,-1, 127,0);
        tracep->declArray(c+573,"top Dcache_u maskWay1_2", false,-1, 127,0);
        tracep->declArray(c+569,"top Dcache_u maskWay2_1", false,-1, 127,0);
        tracep->declArray(c+573,"top Dcache_u maskWay2_2", false,-1, 127,0);
        tracep->declBit(c+577,"top Dcache_u wrMiss", false,-1);
        tracep->declBit(c+578,"top Dcache_u rdMiss", false,-1);
        tracep->declBit(c+114,"top Dcache_u replaceWay", false,-1);
        tracep->declBit(c+616,"top Dcache_u needWrBk", false,-1);
        tracep->declBit(c+364,"top Dcache_u needWrBk_Reg", false,-1);
        tracep->declBit(c+115,"top Dcache_u uncache", false,-1);
        tracep->declBit(c+364,"top Dcache_u axiWrBusy", false,-1);
        tracep->declBus(c+816,"top Dcache_u addrToWrite", false,-1, 31,0);
        tracep->declBit(c+579,"top Dcache_u uncacheOpEn", false,-1);
        tracep->declBit(c+580,"top Dcache_u uncacheWrValid", false,-1);
        tracep->declBit(c+648,"top Dcache_u uncacheOpOk", false,-1);
        tracep->declBit(c+140,"top Dcache_u uncacheRdValid", false,-1);
        tracep->declBit(c+116,"top Dcache_u uncacheRdOk", false,-1);
        tracep->declBit(c+581,"top Dcache_u uncacheWrOk", false,-1);
        tracep->declBus(c+582,"top Dcache_u uncacheRdAddr", false,-1, 31,0);
        tracep->declQuad(c+117,"top Dcache_u temp", false,-1, 63,0);
        tracep->declBus(c+868,"top Dcache_u iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+830,"top Dcache_u iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+869,"top Dcache_u iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+868,"top Dcache_u iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+194,"top Dcache_u iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+734,"top Dcache_u iramWay1_1 CLK", false,-1);
        tracep->declBit(c+826,"top Dcache_u iramWay1_1 CEN", false,-1);
        tracep->declBit(c+732,"top Dcache_u iramWay1_1 WEN", false,-1);
        tracep->declArray(c+583,"top Dcache_u iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+649,"top Dcache_u iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+526,"top Dcache_u iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+827,"top Dcache_u iramWay1_1 cen", false,-1);
        tracep->declBit(c+730,"top Dcache_u iramWay1_1 wen", false,-1);
        tracep->declArray(c+569,"top Dcache_u iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+868,"top Dcache_u iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+830,"top Dcache_u iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+869,"top Dcache_u iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+868,"top Dcache_u iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+198,"top Dcache_u iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+734,"top Dcache_u iramWay1_2 CLK", false,-1);
        tracep->declBit(c+826,"top Dcache_u iramWay1_2 CEN", false,-1);
        tracep->declBit(c+732,"top Dcache_u iramWay1_2 WEN", false,-1);
        tracep->declArray(c+587,"top Dcache_u iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+649,"top Dcache_u iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+530,"top Dcache_u iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+827,"top Dcache_u iramWay1_2 cen", false,-1);
        tracep->declBit(c+730,"top Dcache_u iramWay1_2 wen", false,-1);
        tracep->declArray(c+573,"top Dcache_u iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+868,"top Dcache_u iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+830,"top Dcache_u iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+869,"top Dcache_u iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+868,"top Dcache_u iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+202,"top Dcache_u iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+734,"top Dcache_u iramWay2_1 CLK", false,-1);
        tracep->declBit(c+828,"top Dcache_u iramWay2_1 CEN", false,-1);
        tracep->declBit(c+733,"top Dcache_u iramWay2_1 WEN", false,-1);
        tracep->declArray(c+583,"top Dcache_u iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+650,"top Dcache_u iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+526,"top Dcache_u iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+829,"top Dcache_u iramWay2_1 cen", false,-1);
        tracep->declBit(c+731,"top Dcache_u iramWay2_1 wen", false,-1);
        tracep->declArray(c+569,"top Dcache_u iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+868,"top Dcache_u iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+830,"top Dcache_u iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+869,"top Dcache_u iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+868,"top Dcache_u iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+206,"top Dcache_u iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+734,"top Dcache_u iramWay2_2 CLK", false,-1);
        tracep->declBit(c+828,"top Dcache_u iramWay2_2 CEN", false,-1);
        tracep->declBit(c+733,"top Dcache_u iramWay2_2 WEN", false,-1);
        tracep->declArray(c+587,"top Dcache_u iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+650,"top Dcache_u iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+530,"top Dcache_u iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+829,"top Dcache_u iramWay2_2 cen", false,-1);
        tracep->declBit(c+731,"top Dcache_u iramWay2_2 wen", false,-1);
        tracep->declArray(c+573,"top Dcache_u iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+830,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+830,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+830,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+830,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+831,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+832,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+833,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+734,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+735,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+363,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+32,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+624,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+365,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+277,"top axi_ls_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+626,"top axi_ls_u rdLast_o", false,-1);
        tracep->declBit(c+635,"top axi_ls_u dataValid_o", false,-1);
        tracep->declBit(c+364,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+367,"top axi_ls_u wr_ready_o", false,-1);
        tracep->declArray(c+256,"top axi_ls_u cacheWrData_i", false,-1, 255,0);
        tracep->declBus(c+277,"top axi_ls_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+369,"top axi_ls_u storeSize", false,-1, 2,0);
        tracep->declBus(c+124,"top axi_ls_u loadSize", false,-1, 2,0);
        tracep->declBus(c+368,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+728,"top axi_ls_u cacheWrAddr_i", false,-1, 63,0);
        tracep->declBit(c+794,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+276,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+157,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+834,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+847,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+835,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+277,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+159,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+843,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+836,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+848,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+837,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+837,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+622,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+278,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+279,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+160,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+281,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+835,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+282,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+795,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+796,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+797,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+798,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+799,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+6,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+7,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+834,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+847,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+835,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+277,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+124,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+843,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+836,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+844,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+837,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+849,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+9,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+623,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+800,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+624,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+626,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+621,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+850,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+878,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+843,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+879,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+880,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+591,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+651,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+276,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+278,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+282,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+890,"top axi_ls_u trans_ok", false,-1);
        tracep->declBit(c+281,"top axi_ls_u wrLast", false,-1);
        tracep->declQuad(c+157,"top axi_ls_u wrAddr_reg", false,-1, 63,0);
        tracep->declArray(c+226,"top axi_ls_u wr_data_reg", false,-1, 255,0);
        tracep->declBus(c+234,"top axi_ls_u wrMask_reg", false,-1, 7,0);
        tracep->declBus(c+159,"top axi_ls_u wrSize_reg", false,-1, 2,0);
        tracep->declBus(c+235,"top axi_ls_u storeLenth_reg", false,-1, 7,0);
        tracep->declBus(c+119,"top axi_ls_u wrCnt", false,-1, 1,0);
        tracep->declBus(c+878,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+843,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+879,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+880,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+120,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+652,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+6,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+9,"top axi_ls_u r_ready", false,-1);
        tracep->declQuad(c+7,"top axi_ls_u rdAddr_reg", false,-1, 63,0);
        tracep->declBus(c+881,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+847,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+836,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+891,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+863,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+236,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+734,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+735,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+12,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+18,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+16,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+803,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+19,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+20,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+630,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+349,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+355,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+351,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+353,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+359,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+360,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+892,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+883,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+734,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+735,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+630,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+653,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+592,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+349,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+355,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+351,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+353,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+360,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+358,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+356,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+734,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+735,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+316,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+285,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+313,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+314,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+288,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+629,"top pipline_ctrl_u ex_not_ok", false,-1);
        tracep->declBit(c+631,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+627,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+801,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+801,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+802,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+630,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+630,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+317,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+345,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBus(c+893,"top lsAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+893,"top lsAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+267,"top lsAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+150,"top lsAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+734,"top lsAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+735,"top lsAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+147,"top lsAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+834,"top lsAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+271,"top lsAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+146,"top lsAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+251,"top lsAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+154,"top lsAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+272,"top lsAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+153,"top lsAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+156,"top lsAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+155,"top lsAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+273,"top lsAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+265,"top lsAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+834,"top lsAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+264,"top lsAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+141,"top lsAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+144,"top lsAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+143,"top lsAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+142,"top lsAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+270,"top lsAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+237,"top lsAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+146,"top lsAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+153,"top lsAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+156,"top lsAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+155,"top lsAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+239,"top lsAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+141,"top lsAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+144,"top lsAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+143,"top lsAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+142,"top lsAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+894,"top lsAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+895,"top lsAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+241,"top lsAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+243,"top lsAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+245,"top lsAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+247,"top lsAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+254,"top lsAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+255,"top lsAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+896,"top lsAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+898,"top lsAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+249,"top lsAxiSlaveRam_u aw_en", false,-1);
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
    VlWide<8>/*255:0*/ __Vtemp256;
    VlWide<8>/*255:0*/ __Vtemp259;
    VlWide<4>/*127:0*/ __Vtemp260;
    VlWide<4>/*127:0*/ __Vtemp261;
    VlWide<3>/*95:0*/ __Vtemp262;
    VlWide<3>/*95:0*/ __Vtemp264;
    VlWide<3>/*95:0*/ __Vtemp265;
    VlWide<3>/*95:0*/ __Vtemp266;
    VlWide<3>/*95:0*/ __Vtemp267;
    VlWide<3>/*95:0*/ __Vtemp268;
    VlWide<3>/*95:0*/ __Vtemp271;
    VlWide<3>/*95:0*/ __Vtemp272;
    VlWide<3>/*95:0*/ __Vtemp273;
    VlWide<3>/*95:0*/ __Vtemp274;
    VlWide<3>/*95:0*/ __Vtemp275;
    VlWide<8>/*255:0*/ __Vtemp280;
    VlWide<4>/*127:0*/ __Vtemp283;
    VlWide<4>/*127:0*/ __Vtemp290;
    VlWide<4>/*127:0*/ __Vtemp293;
    VlWide<4>/*127:0*/ __Vtemp300;
    VlWide<4>/*127:0*/ __Vtemp303;
    VlWide<4>/*127:0*/ __Vtemp312;
    VlWide<4>/*127:0*/ __Vtemp315;
    VlWide<4>/*127:0*/ __Vtemp324;
    VlWide<4>/*127:0*/ __Vtemp327;
    VlWide<4>/*127:0*/ __Vtemp337;
    VlWide<4>/*127:0*/ __Vtemp340;
    VlWide<4>/*127:0*/ __Vtemp350;
    VlWide<10>/*319:0*/ __Vtemp355;
    VlWide<4>/*127:0*/ __Vtemp356;
    VlWide<4>/*127:0*/ __Vtemp357;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+2,((1U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg),64);
        tracep->fullBit(oldp+5,((3U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+6,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__axi_ls_u__DOT__rdAddr_reg),64);
        tracep->fullBit(oldp+9,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
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
        tracep->fullBit(oldp+32,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullBit(oldp+33,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
        tracep->fullCData(oldp+34,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U)),4);
        tracep->fullCData(oldp+35,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? (IData)(vlSelf->top__DOT__if_axi_ar_region_o)
                                     : (IData)(vlSelf->top__DOT__ls_axi_ar_region_o))),4);
        tracep->fullBit(oldp+36,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
        tracep->fullBit(oldp+37,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
        tracep->fullBit(oldp+38,(vlSelf->top__DOT__cache_dut__DOT__uncachedOk));
        tracep->fullQData(oldp+39,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
        tracep->fullCData(oldp+41,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
        tracep->fullCData(oldp+42,((0x3fU & (IData)(
                                                    (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                     >> 5U)))),6);
        tracep->fullIData(oldp+43,((0x1fffffU & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 0xbU)))),21);
        tracep->fullQData(oldp+44,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
        tracep->fullQData(oldp+46,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
        tracep->fullBit(oldp+48,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 5U))))))));
        tracep->fullBit(oldp+49,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 5U))))))));
        tracep->fullIData(oldp+50,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                   [(0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))]),21);
        tracep->fullIData(oldp+51,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                   [(0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))]),21);
        tracep->fullQData(oldp+52,((((QData)((IData)(
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
        tracep->fullBit(oldp+54,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
        tracep->fullCData(oldp+55,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state),2);
        tracep->fullCData(oldp+56,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 9U))),5);
        tracep->fullBit(oldp+57,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+58,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullWData(oldp+59,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullCData(oldp+67,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                          >> 0xeU))),3);
        tracep->fullBit(oldp+68,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (0U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+69,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (4U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+70,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (0U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+71,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+72,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+73,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+74,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xeU)))));
        tracep->fullBit(oldp+75,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xeU)))));
        tracep->fullBit(oldp+76,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xeU)))));
        tracep->fullBit(oldp+77,((0x1cU == (0x1fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 4U)))));
        tracep->fullBit(oldp+78,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+79,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+80,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+81,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+82,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullBit(oldp+83,(((0x304U == (0xfffU 
                                              & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                                  << 0xaU) 
                                                 | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                    >> 0x16U)))) 
                                  & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en))));
        tracep->fullBit(oldp+84,(((0x344U == (0xfffU 
                                              & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                                  << 0xaU) 
                                                 | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                    >> 0x16U)))) 
                                  & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en))));
        tracep->fullQData(oldp+85,(((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                      >> 2U))) 
                                    | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+87,(((~ (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                              >> 2U)))) 
                                    & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullBit(oldp+93,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                >> 3U)))));
        tracep->fullQData(oldp+94,(((0x1cU == (0x1fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 4U)))
                                     ? 0xbULL : 0ULL)),64);
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie),64);
        tracep->fullBit(oldp+100,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie 
                                                 >> 7U)))));
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip),64);
        tracep->fullBit(oldp+103,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip 
                                                 >> 7U)))));
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__Dcache_u__DOT__validArray1),64);
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__Dcache_u__DOT__validArray2),64);
        tracep->fullIData(oldp+108,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [0x3cU]),21);
        tracep->fullIData(oldp+109,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [0x23U]),21);
        tracep->fullBit(oldp+110,(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay));
        tracep->fullBit(oldp+111,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay1));
        tracep->fullBit(oldp+112,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay2));
        tracep->fullCData(oldp+113,(vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch),8);
        tracep->fullBit(oldp+114,(vlSelf->top__DOT__Dcache_u__DOT__replaceWay));
        tracep->fullBit(oldp+115,(vlSelf->top__DOT__Dcache_u__DOT__uncache));
        tracep->fullBit(oldp+116,(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk));
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__Dcache_u__DOT__temp),64);
        tracep->fullCData(oldp+119,(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt),2);
        tracep->fullCData(oldp+120,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+121,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                          ? 0U : 1U)
                                      : 0U)),4);
        tracep->fullCData(oldp+122,(((1U & (IData)(
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
        tracep->fullCData(oldp+123,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? (0xfU & ((0U 
                                                  != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                                  ? (IData)(vlSelf->top__DOT__if_axi_ar_region_o)
                                                  : (IData)(vlSelf->top__DOT__ls_axi_ar_region_o)))
                                      : 0U)),4);
        tracep->fullCData(oldp+124,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (7U & (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size))
                                      : 3U)),3);
        tracep->fullQData(oldp+125,((((0U == (0x1fU 
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
        tracep->fullIData(oldp+127,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                      ? (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch)
                                      : (((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                   >> 0xbU)) 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U))))),32);
        tracep->fullCData(oldp+128,((0xffU & ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                               ? ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                                   ? 0U
                                                   : 3U)
                                               : ((6U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                   ? 0U
                                                   : 3U)))),8);
        tracep->fullQData(oldp+129,((QData)((IData)(
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
        tracep->fullBit(oldp+131,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+132,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+133,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+134,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+135,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+136,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+137,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+138,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+139,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullBit(oldp+140,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk)))));
        tracep->fullBit(oldp+141,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready));
        tracep->fullBit(oldp+142,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+143,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp),2);
        tracep->fullQData(oldp+144,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata),64);
        tracep->fullBit(oldp+146,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullQData(oldp+147,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg
                                      : 0ULL)),64);
        tracep->fullCData(oldp+149,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? 1U : 0U)),4);
        tracep->fullCData(oldp+150,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? (7U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg))
                                      : 0U)),3);
        tracep->fullCData(oldp+151,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? 1U : 0U)),2);
        tracep->fullCData(oldp+152,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? 0xfU : 0U)),4);
        tracep->fullBit(oldp+153,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullCData(oldp+154,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? (0xffU & (IData)(vlSelf->top__DOT__ls_axi_w_strb_o))
                                      : 0U)),8);
        tracep->fullBit(oldp+155,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullCData(oldp+156,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullQData(oldp+157,(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg),64);
        tracep->fullCData(oldp+159,(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg),3);
        tracep->fullCData(oldp+160,(vlSelf->top__DOT__ls_axi_w_strb_o),8);
        tracep->fullWData(oldp+161,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+165,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+169,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+173,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+177,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+185,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullIData(oldp+193,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
        tracep->fullWData(oldp+194,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+198,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+202,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+206,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+210,(vlSelf->top__DOT__Dcache_u__DOT__way1Data),256);
        tracep->fullWData(oldp+218,(vlSelf->top__DOT__Dcache_u__DOT__way2Data),256);
        tracep->fullWData(oldp+226,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),256);
        tracep->fullCData(oldp+234,(vlSelf->top__DOT__axi_ls_u__DOT__wrMask_reg),8);
        tracep->fullCData(oldp+235,(vlSelf->top__DOT__axi_ls_u__DOT__storeLenth_reg),8);
        tracep->fullCData(oldp+236,((0x38U & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg) 
                                              << 3U))),6);
        tracep->fullQData(oldp+237,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+239,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+241,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+243,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+245,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+247,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+249,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        tracep->fullCData(oldp+250,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                          ? 0U : 3U)
                                      : 0U)),8);
        tracep->fullQData(oldp+251,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? vlSelf->top__DOT__ls_axi_w_data_o
                                      : 0ULL)),64);
        tracep->fullBit(oldp+253,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrLast))
                                    : 0U)));
        tracep->fullBit(oldp+254,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__axi_mmio_ar_valid_o)) 
                                   & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+255,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                   & (IData)(vlSelf->top__DOT__axi_mmio_w_valid_o))));
        VL_EXTEND_WQ(256,64, __Vtemp256, vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch);
        if ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp259[0U] = __Vtemp256[0U];
            __Vtemp259[1U] = __Vtemp256[1U];
            __Vtemp259[2U] = __Vtemp256[2U];
            __Vtemp259[3U] = __Vtemp256[3U];
            __Vtemp259[4U] = __Vtemp256[4U];
            __Vtemp259[5U] = __Vtemp256[5U];
            __Vtemp259[6U] = __Vtemp256[6U];
            __Vtemp259[7U] = __Vtemp256[7U];
        } else {
            __Vtemp259[0U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U]);
            __Vtemp259[1U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U]);
            __Vtemp259[2U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U]);
            __Vtemp259[3U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U]);
            __Vtemp259[4U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U]);
            __Vtemp259[5U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U]);
            __Vtemp259[6U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U]);
            __Vtemp259[7U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                               ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U]
                               : vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U]);
        }
        tracep->fullWData(oldp+256,(__Vtemp259),256);
        tracep->fullBit(oldp+264,(vlSelf->top__DOT__axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+265,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr
                                      : 0ULL)),64);
        tracep->fullCData(oldp+267,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? (7U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size))
                                      : 0U)),3);
        tracep->fullCData(oldp+268,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? 1U : 0U)),2);
        tracep->fullCData(oldp+269,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? 2U : 0U)),4);
        tracep->fullBit(oldp+270,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready))
                                    : 0U)));
        tracep->fullBit(oldp+271,(vlSelf->top__DOT__axi_mmio_aw_valid_o));
        tracep->fullBit(oldp+272,(vlSelf->top__DOT__axi_mmio_w_valid_o));
        tracep->fullBit(oldp+273,(vlSelf->top__DOT__axi_mmio_b_ready_o));
        tracep->fullCData(oldp+274,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                      ? 0U : 3U)),8);
        tracep->fullCData(oldp+275,(((0U == ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                              ? 0U : 3U))
                                      ? 2U : 3U)),3);
        tracep->fullBit(oldp+276,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullCData(oldp+277,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? 0U : 3U)),8);
        tracep->fullBit(oldp+278,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+279,(vlSelf->top__DOT__ls_axi_w_data_o),64);
        tracep->fullBit(oldp+281,(vlSelf->top__DOT__axi_ls_u__DOT__wrLast));
        tracep->fullBit(oldp+282,((2U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+283,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+285,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+286,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+288,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+289,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullQData(oldp+291,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+293,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullBit(oldp+294,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+295,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullIData(oldp+296,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+297,((((QData)((IData)(
                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+299,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+300,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+302,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+303,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+304,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+305,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+306,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+307,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+308,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+309,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+310,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+311,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+312,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+313,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+314,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+315,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+316,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+317,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+318,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullIData(oldp+320,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1bU))),32);
        tracep->fullQData(oldp+321,(vlSelf->top__DOT__alures_ex),64);
        tracep->fullBit(oldp+323,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+324,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x10U))),2);
        tracep->fullQData(oldp+325,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+327,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+329,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+331,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+333,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+334,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+335,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+336,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+337,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+338,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+339,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+340,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullCData(oldp+341,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+342,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+343,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+344,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 5U))),5);
        tracep->fullBit(oldp+345,(vlSelf->top__DOT__ex_flush));
        tracep->fullBit(oldp+346,((3U == (0x7fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 5U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1bU))))));
        tracep->fullBit(oldp+347,((8U == (0x1fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 3U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1dU))))));
        tracep->fullCData(oldp+348,(((((1U & ((- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh))) 
                                              | (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu))))) 
                                       | (2U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw))))) 
                                      | (2U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu))))) 
                                     | (3U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld)))))),3);
        tracep->fullQData(oldp+349,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+351,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+353,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+355,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+356,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+358,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+359,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+360,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullBit(oldp+362,(vlSelf->top__DOT__rw_valid_i));
        tracep->fullBit(oldp+363,(vlSelf->top__DOT__DcacheRdValid));
        tracep->fullBit(oldp+364,(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
        tracep->fullQData(oldp+365,(vlSelf->top__DOT__DcacheRdAddr),64);
        tracep->fullBit(oldp+367,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullCData(oldp+368,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (0xffU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask))
                                      : 0xffU)),8);
        tracep->fullCData(oldp+369,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (7U & ((((1U 
                                                  & ((- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh))) 
                                                     | (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu))))) 
                                                 | (2U 
                                                    & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw))))) 
                                                | (2U 
                                                   & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu))))) 
                                               | (3U 
                                                  & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld))))))
                                      : 3U)),3);
        tracep->fullQData(oldp+370,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+372,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
        tracep->fullBit(oldp+373,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullIData(oldp+374,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullBit(oldp+375,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullCData(oldp+376,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        tracep->fullBit(oldp+377,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        __Vtemp260[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        __Vtemp260[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        __Vtemp260[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        __Vtemp260[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        tracep->fullWData(oldp+378,(__Vtemp260),128);
        __Vtemp261[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        __Vtemp261[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        __Vtemp261[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        __Vtemp261[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        tracep->fullWData(oldp+382,(__Vtemp261),128);
        tracep->fullBit(oldp+386,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
        tracep->fullBit(oldp+387,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
        tracep->fullBit(oldp+388,(vlSelf->top__DOT__cache_dut__DOT__uncached));
        tracep->fullBit(oldp+389,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+390,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+391,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+392,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullCData(oldp+393,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
        tracep->fullWData(oldp+394,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
        tracep->fullBit(oldp+402,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+403,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+404,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
        tracep->fullBit(oldp+405,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+406,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+407,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
        tracep->fullBit(oldp+408,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullQData(oldp+409,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+411,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp262[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                           ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->top__DOT__sram_rdata 
                                               >> 0x20U))
                                    : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp262[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp262[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                    ? 0ULL : vlSelf->top__DOT__pc_new) 
                                  >> 0x20U));
        tracep->fullWData(oldp+412,(__Vtemp262),96);
        tracep->fullWData(oldp+415,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+418,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+419,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+420,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+421,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+422,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+423,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+425,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+426,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+427,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+428,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+429,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+430,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+431,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullQData(oldp+441,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+443,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+445,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp264, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp265, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp266, __Vtemp264, __Vtemp265);
        VL_EXTEND_WI(65,1, __Vtemp267, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp268, __Vtemp266, __Vtemp267);
        tracep->fullBit(oldp+447,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp268[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+448,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+449,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+451,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+452,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+454,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+456,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+457,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+458,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+459,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp271, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp272, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp273, __Vtemp271, __Vtemp272);
        VL_EXTEND_WI(65,1, __Vtemp274, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp275, __Vtemp273, __Vtemp274);
        tracep->fullBit(oldp+461,((1U & __Vtemp275[2U])));
        tracep->fullBit(oldp+462,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+463,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+465,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+467,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+469,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+471,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+472,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+473,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+474,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+476,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+478,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+480,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+482,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+484,(((0x4000000U & 
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
        tracep->fullQData(oldp+486,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+488,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+489,(((((QData)((IData)(
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
        tracep->fullQData(oldp+491,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+493,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+494,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+495,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+496,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+498,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+500,((1U & ((0x200U & 
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
        tracep->fullBit(oldp+501,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+502,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        __Vtemp280[0U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                           << 2U) | ((2U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xeU)) 
                                     | (1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        __Vtemp280[1U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                           >> 0x1eU) | ((IData)((vlSelf->top__DOT__alures_ex 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp280[2U] = (((IData)((vlSelf->top__DOT__alures_ex 
                                    >> 0x20U)) >> 0x1eU) 
                          | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                             << 2U));
        __Vtemp280[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                           >> 0x1eU) | ((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp280[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                    >> 0x20U)) >> 0x1eU) 
                          | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                              << 7U) | (0x7cU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                 >> 0x19U))));
        __Vtemp280[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                 >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                     >> 0x19U))));
        __Vtemp280[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                 >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                << 7U) 
                                               | (0x7cU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                     >> 0x19U))));
        __Vtemp280[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                >> 0x19U));
        tracep->fullWData(oldp+503,(__Vtemp280),226);
        tracep->fullBit(oldp+511,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullBit(oldp+512,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh));
        tracep->fullBit(oldp+513,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu));
        tracep->fullBit(oldp+514,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw));
        tracep->fullBit(oldp+515,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu));
        tracep->fullBit(oldp+516,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld));
        tracep->fullIData(oldp+517,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
        tracep->fullBit(oldp+518,(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i));
        tracep->fullBit(oldp+519,(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i));
        tracep->fullBit(oldp+520,(((3U != (0x7fU & 
                                           ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 5U) 
                                            | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1bU)))) 
                                   | (8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 3U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1dU)))))));
        tracep->fullIData(oldp+521,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)
                                      : (((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0xbU)) 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U))))),32);
        tracep->fullCData(oldp+522,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
        tracep->fullBit(oldp+523,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
        tracep->fullBit(oldp+524,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
        tracep->fullBit(oldp+525,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
        VL_EXTEND_WQ(128,64, __Vtemp283, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp290[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U];
            __Vtemp290[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U];
            __Vtemp290[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U];
            __Vtemp290[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U];
        } else {
            __Vtemp290[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp283[0U])
                               : 0U);
            __Vtemp290[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp283[1U])
                               : 0U);
            __Vtemp290[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp283[2U])
                               : 0U);
            __Vtemp290[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp283[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+526,(__Vtemp290),128);
        VL_EXTEND_WQ(128,64, __Vtemp293, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp300[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U];
            __Vtemp300[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U];
            __Vtemp300[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U];
            __Vtemp300[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U];
        } else {
            __Vtemp300[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp293[0U])
                               : 0U);
            __Vtemp300[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp293[1U])
                               : 0U);
            __Vtemp300[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp293[2U])
                               : 0U);
            __Vtemp300[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp293[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+530,(__Vtemp300),128);
        tracep->fullBit(oldp+534,(vlSelf->top__DOT__Dcache_u__DOT__uncached));
        tracep->fullBit(oldp+535,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+536,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
        tracep->fullCData(oldp+538,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
        tracep->fullCData(oldp+539,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+540,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullBit(oldp+541,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+542,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+543,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+544,((((QData)((IData)(
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
        tracep->fullCData(oldp+546,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
        tracep->fullWData(oldp+547,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
        tracep->fullBit(oldp+555,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+556,(vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch),64);
        tracep->fullQData(oldp+558,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1),64);
        tracep->fullQData(oldp+560,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2),64);
        tracep->fullBit(oldp+562,(vlSelf->top__DOT__Dcache_u__DOT__wrLow));
        tracep->fullBit(oldp+563,(vlSelf->top__DOT__Dcache_u__DOT__wrHigh));
        tracep->fullQData(oldp+564,(vlSelf->top__DOT__Dcache_u__DOT__storeData),64);
        tracep->fullCData(oldp+566,(vlSelf->top__DOT__Dcache_u__DOT__storeMask),8);
        tracep->fullQData(oldp+567,(vlSelf->top__DOT__Dcache_u__DOT__sramMask),64);
        VL_EXTEND_WQ(128,64, __Vtemp303, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp312[0U] = 0xffffffffU;
            __Vtemp312[1U] = 0xffffffffU;
            __Vtemp312[2U] = 0xffffffffU;
            __Vtemp312[3U] = 0xffffffffU;
        } else {
            __Vtemp312[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp303[0U])
                                   : 0U) : 0U);
            __Vtemp312[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp303[1U])
                                   : 0U) : 0U);
            __Vtemp312[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp303[2U])
                                   : 0U) : 0U);
            __Vtemp312[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp303[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+569,(__Vtemp312),128);
        VL_EXTEND_WQ(128,64, __Vtemp315, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp324[0U] = 0xffffffffU;
            __Vtemp324[1U] = 0xffffffffU;
            __Vtemp324[2U] = 0xffffffffU;
            __Vtemp324[3U] = 0xffffffffU;
        } else {
            __Vtemp324[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp315[0U])
                                   : 0U) : 0U);
            __Vtemp324[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp315[1U])
                                   : 0U) : 0U);
            __Vtemp324[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp315[2U])
                                   : 0U) : 0U);
            __Vtemp324[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp315[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+573,(__Vtemp324),128);
        tracep->fullBit(oldp+577,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+578,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+579,((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+580,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk)))));
        tracep->fullBit(oldp+581,(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk));
        tracep->fullIData(oldp+582,((IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)),32);
        VL_EXTEND_WQ(128,64, __Vtemp327, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp337[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp327[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp337[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp327[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp337[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp327[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp337[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp327[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+583,(__Vtemp337),128);
        VL_EXTEND_WQ(128,64, __Vtemp340, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp350[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp340[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp350[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp340[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp350[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp340[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp350[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp340[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+587,(__Vtemp350),128);
        tracep->fullCData(oldp+591,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullWData(oldp+592,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullQData(oldp+602,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+604,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp355[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
        __Vtemp355[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp355[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs1_idx_id])) 
                             << 0x1bU));
        __Vtemp355[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs1_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp355[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs2_idx_id])) 
                             << 0x1bU));
        __Vtemp355[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])) 
                           >> 5U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs2_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1bU));
        __Vtemp355[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id]) 
                                    >> 0x20U)) >> 5U) 
                          | (((IData)(vlSelf->top__DOT__ex_flush)
                               ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                             << 0x1bU));
        __Vtemp355[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                             ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                           >> 5U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                     << 0x1bU));
        __Vtemp355[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
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
        __Vtemp355[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                   >> 0x20U)) >> 5U);
        tracep->fullWData(oldp+606,(__Vtemp355),315);
        tracep->fullBit(oldp+616,(((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i) 
                                   & ((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                        & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U))) 
                                       & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk))) 
                                      | ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncached)) 
                                         & (((((1U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
                                            | ((((1U 
                                                  == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
                                                                            >> 5U))))))))))))));
        tracep->fullBit(oldp+617,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullQData(oldp+618,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+620,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+621,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+622,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready));
        tracep->fullBit(oldp+623,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                    : 0U)));
        tracep->fullQData(oldp+624,(vlSelf->top__DOT__ls_axi_r_data_i),64);
        tracep->fullBit(oldp+626,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullBit(oldp+627,(vlSelf->top__DOT__if_stall_n));
        tracep->fullBit(oldp+628,(vlSelf->top__DOT__ls_addr_ok_i));
        tracep->fullBit(oldp+629,((1U & (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))));
        tracep->fullBit(oldp+630,(vlSelf->top__DOT__ls_stall_n));
        tracep->fullBit(oldp+631,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullQData(oldp+632,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullBit(oldp+634,(vlSelf->top__DOT__dataValid_o));
        tracep->fullBit(oldp+635,(vlSelf->top__DOT__lsAxiRdDataVAlid));
        tracep->fullBit(oldp+636,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+637,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+638,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+640,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullCData(oldp+641,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullCData(oldp+642,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+643,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+644,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
        tracep->fullCData(oldp+645,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+646,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+647,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+648,(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk));
        tracep->fullCData(oldp+649,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+650,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+651,(vlSelf->top__DOT__axi_ls_u__DOT__w_state_next),2);
        tracep->fullCData(oldp+652,(vlSelf->top__DOT__axi_ls_u__DOT__r_state_next),2);
        tracep->fullWData(oldp+653,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullQData(oldp+663,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+665,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+667,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+669,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+671,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+673,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+675,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+677,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+679,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+681,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+683,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+685,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+687,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+689,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+691,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+693,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+695,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+697,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+699,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+701,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+703,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+705,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+707,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+709,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+711,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+713,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+715,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+717,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+719,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+721,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+723,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+725,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+727,(vlSelf->top__DOT__Dcache_u__DOT__randomBit));
        tracep->fullQData(oldp+728,(vlSelf->top__DOT__DcacheWrAddr),64);
        tracep->fullBit(oldp+730,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
        tracep->fullBit(oldp+731,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
        tracep->fullBit(oldp+732,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
        tracep->fullBit(oldp+733,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
        tracep->fullBit(oldp+734,(vlSelf->clk));
        tracep->fullBit(oldp+735,(vlSelf->rst_n));
        tracep->fullQData(oldp+736,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+738,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+740,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+741,(vlSelf->regA0),64);
        tracep->fullBit(oldp+743,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+744,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+745,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+746,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+748,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+749,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+750,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+751,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+752,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+753,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+754,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+755,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+756,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+757,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+758,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+759,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+760,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+761,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+763,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+764,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+765,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+766,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+767,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+768,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+770,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+771,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+772,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+773,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+774,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+775,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+776,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+777,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+778,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+779,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+780,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+781,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+782,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+784,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+785,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+786,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+787,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+788,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+789,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+790,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+791,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+792,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? 0U
                                    : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullCData(oldp+793,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0U : (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                                : (IData)(vlSelf->axi_r_resp_i))))),2);
        tracep->fullBit(oldp+794,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)
                                    : (IData)(vlSelf->axi_aw_ready_i))));
        tracep->fullBit(oldp+795,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid)
                                    : (IData)(vlSelf->axi_b_valid_i))));
        tracep->fullCData(oldp+796,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp)
                                      : (IData)(vlSelf->axi_b_resp_i))),2);
        tracep->fullCData(oldp+797,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? 1U : (IData)(vlSelf->axi_b_id_i))),4);
        tracep->fullBit(oldp+798,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->top__DOT__axi_mmio_b_user_i)
                                    : (IData)(vlSelf->axi_b_user_i))));
        tracep->fullBit(oldp+799,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? (1U 
                                                   & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                    : 0U)));
        tracep->fullCData(oldp+800,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? (3U & ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                                : (IData)(vlSelf->axi_r_resp_i)))
                                      : 0U)),2);
        tracep->fullBit(oldp+801,((1U & (~ ((((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                              | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                             | (IData)(vlSelf->top__DOT__ls_not_ok)) 
                                            | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))))));
        tracep->fullBit(oldp+802,((1U & (~ (((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                             | (IData)(vlSelf->top__DOT__ls_not_ok)) 
                                            | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))))));
        tracep->fullQData(oldp+803,(((((((((- (QData)((IData)(
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
                                         | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh))) 
                                            & (((- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h) 
                                                                       >> 0xfU))))) 
                                                << 0x10U) 
                                               | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h))))) 
                                        | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu))) 
                                           & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h)))) 
                                       | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw))) 
                                          & (((QData)((IData)(
                                                              (- (IData)(
                                                                         (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w 
                                                                          >> 0x1fU))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w))))) 
                                      | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu))) 
                                         & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w)))) 
                                     | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld))) 
                                        & vlSelf->top__DOT__ls_sram_rd_data))),64);
        tracep->fullBit(oldp+805,((((((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullCData(oldp+806,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                      : (IData)(vlSelf->axi_r_resp_i))),2);
        tracep->fullBit(oldp+807,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->top__DOT__axi_mmio_r_user_i)
                                    : (IData)(vlSelf->axi_r_user_i))));
        tracep->fullBit(oldp+808,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->fullBit(oldp+809,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->fullIData(oldp+810,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 0xbU)))
                                          : 0U) : 0U)),21);
        tracep->fullIData(oldp+811,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? 0U : (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 0xbU))))
                                      : 0U)),21);
        tracep->fullQData(oldp+812,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+814,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullIData(oldp+816,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullCData(oldp+817,(((4U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullBit(oldp+818,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullBit(oldp+819,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullIData(oldp+820,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullIData(oldp+821,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+822,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+824,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullBit(oldp+826,((1U & (~ ((((((((0U 
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
        tracep->fullBit(oldp+827,(((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                         | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                            & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                        & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                       | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                      | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                     | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))));
        tracep->fullBit(oldp+828,((1U & (~ ((((((((0U 
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
        tracep->fullBit(oldp+829,(((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                         | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                            & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                        & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                       | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                      | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                     | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))));
        tracep->fullIData(oldp+830,(0x40U),32);
        tracep->fullIData(oldp+831,(4U),32);
        tracep->fullIData(oldp+832,(8U),32);
        tracep->fullIData(oldp+833,(1U),32);
        tracep->fullCData(oldp+834,(0U),3);
        tracep->fullBit(oldp+835,(0U));
        tracep->fullBit(oldp+836,(0U));
        tracep->fullCData(oldp+837,(0U),4);
        tracep->fullBit(oldp+838,(vlSelf->top__DOT__axi_mmio_r_last_i));
        tracep->fullCData(oldp+839,(vlSelf->top__DOT__axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+840,(vlSelf->top__DOT__axi_mmio_r_user_i));
        tracep->fullCData(oldp+841,(vlSelf->top__DOT__axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+842,(vlSelf->top__DOT__axi_mmio_b_user_i));
        tracep->fullCData(oldp+843,(1U),2);
        tracep->fullCData(oldp+844,(2U),4);
        tracep->fullCData(oldp+845,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+846,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+847,(1U),4);
        tracep->fullCData(oldp+848,(0xfU),4);
        tracep->fullCData(oldp+849,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+850,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+851,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+853,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+854,(1U));
        tracep->fullBit(oldp+855,(vlSelf->top__DOT__ls_sram_rd_data_valid));
        tracep->fullBit(oldp+856,(vlSelf->top__DOT__ls_sram_wr_data_ok));
        tracep->fullBit(oldp+857,(0U));
        tracep->fullQData(oldp+858,(0ULL),64);
        tracep->fullCData(oldp+860,(0U),8);
        tracep->fullCData(oldp+861,(1U),3);
        tracep->fullCData(oldp+862,(2U),3);
        tracep->fullCData(oldp+863,(3U),3);
        tracep->fullCData(oldp+864,(7U),3);
        tracep->fullCData(oldp+865,(6U),3);
        tracep->fullBit(oldp+866,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+867,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullIData(oldp+868,(0x80U),32);
        tracep->fullIData(oldp+869,(6U),32);
        __Vtemp356[0U] = 0U;
        __Vtemp356[1U] = 0U;
        __Vtemp356[2U] = 0U;
        __Vtemp356[3U] = 0U;
        tracep->fullWData(oldp+870,(__Vtemp356),128);
        __Vtemp357[0U] = 0xffffffffU;
        __Vtemp357[1U] = 0xffffffffU;
        __Vtemp357[2U] = 0xffffffffU;
        __Vtemp357[3U] = 0xffffffffU;
        tracep->fullWData(oldp+874,(__Vtemp357),128);
        tracep->fullCData(oldp+878,(0U),2);
        tracep->fullCData(oldp+879,(3U),2);
        tracep->fullCData(oldp+880,(2U),2);
        tracep->fullIData(oldp+881,(3U),32);
        tracep->fullIData(oldp+882,(0x60U),32);
        tracep->fullIData(oldp+883,(0U),32);
        tracep->fullIData(oldp+884,(0x13bU),32);
        tracep->fullBit(oldp+885,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+886,(0xe2U),32);
        tracep->fullBit(oldp+887,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__timer_int_i));
        tracep->fullBit(oldp+888,(vlSelf->top__DOT__Dcache_u__DOT__validWay1_q));
        tracep->fullBit(oldp+889,(vlSelf->top__DOT__Dcache_u__DOT__validWay2_q));
        tracep->fullBit(oldp+890,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullCData(oldp+891,(3U),8);
        tracep->fullIData(oldp+892,(0x121U),32);
        tracep->fullIData(oldp+893,(0x40U),32);
        tracep->fullIData(oldp+894,(3U),32);
        tracep->fullIData(oldp+895,(1U),32);
        tracep->fullQData(oldp+896,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+898,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index),32);
    }
}
