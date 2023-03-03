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
        tracep->declBit(c+698,"clk", false,-1);
        tracep->declBit(c+699,"rst_n", false,-1);
        tracep->declQuad(c+700,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+702,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+704,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+705,"regA0", false,-1, 63,0);
        tracep->declBit(c+707,"stall_n_diff", false,-1);
        tracep->declBit(c+708,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+709,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+710,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+712,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+713,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+714,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+715,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+716,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+717,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+718,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+719,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+720,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+721,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+722,"axi_r_ready_o", false,-1);
        tracep->declBit(c+723,"axi_r_valid_i", false,-1);
        tracep->declBus(c+724,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+725,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+727,"axi_r_last_i", false,-1);
        tracep->declBus(c+728,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+729,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+730,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+731,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+732,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+734,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+735,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+736,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+737,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+738,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+739,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+740,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+741,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+742,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+743,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+744,"axi_w_ready_i", false,-1);
        tracep->declBit(c+745,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+746,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+748,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+749,"axi_w_last_o", false,-1);
        tracep->declBus(c+750,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+751,"axi_b_ready_o", false,-1);
        tracep->declBit(c+752,"axi_b_valid_i", false,-1);
        tracep->declBus(c+753,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+754,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+755,"axi_b_user_i", false,-1, 0,0);
        tracep->declBus(c+813,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+813,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+813,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+813,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+814,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+815,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+816,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+698,"top clk", false,-1);
        tracep->declBit(c+699,"top rst_n", false,-1);
        tracep->declQuad(c+700,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+702,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+704,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+705,"top regA0", false,-1, 63,0);
        tracep->declBit(c+707,"top stall_n_diff", false,-1);
        tracep->declBit(c+708,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+709,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+710,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+712,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+713,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+714,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+715,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+716,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+717,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+718,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+719,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+720,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+721,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+722,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+723,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+724,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+725,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+727,"top axi_r_last_i", false,-1);
        tracep->declBus(c+728,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+729,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+730,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+731,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+732,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+734,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+735,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+736,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+737,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+738,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+739,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+740,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+741,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+742,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+743,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+744,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+745,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+746,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+748,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+749,"top axi_w_last_o", false,-1);
        tracep->declBus(c+750,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+751,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+752,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+753,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+754,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+755,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+138,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+243,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+244,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+817,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+122,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+818,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+756,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+246,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+247,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+819,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+248,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+123,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+249,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+139,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+140,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+141,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+821,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+822,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+823,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+143,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+250,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+144,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+817,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+146,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+818,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+757,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+758,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+147,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+819,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+148,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+149,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+251,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+759,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+150,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+761,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+818,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+252,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+151,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+152,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+824,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+825,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+2,"top instr_fetching", false,-1);
        tracep->declBit(c+762,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+3,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+4,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+817,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+820,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+818,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+826,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+827,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+828,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+819,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+829,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+820,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+830,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+6,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+568,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+763,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+569,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+571,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+572,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+831,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+764,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+253,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+153,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+817,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+832,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+818,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+7,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+679,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+828,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+819,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+833,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+820,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+820,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+573,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+254,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+255,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+155,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+257,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+818,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+258,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+765,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+766,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+767,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+768,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+769,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+8,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+9,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+817,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+832,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+818,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+680,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+827,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+828,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+819,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+829,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+820,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+834,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+11,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+574,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+770,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+575,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+577,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+572,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+835,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+836,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+259,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+261,"top is_jump", false,-1);
        tracep->declQuad(c+262,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+771,"top pc_stall_n", false,-1);
        tracep->declBit(c+578,"top if_stall_n", false,-1);
        tracep->declBit(c+264,"top if_instr_valid", false,-1);
        tracep->declBit(c+838,"top sram_data_valid", false,-1);
        tracep->declQuad(c+265,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+267,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+839,"top sram_ren", false,-1);
        tracep->declBit(c+269,"top sram_addr_valid", false,-1);
        tracep->declBit(c+124,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+125,"top cacheDataOk_i", false,-1);
        tracep->declBus(c+270,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+271,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+273,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+525,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+527,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+274,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+276,"top src1sel_id", false,-1);
        tracep->declBus(c+277,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+278,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+279,"top is_brc_id", false,-1);
        tracep->declBit(c+280,"top is_jal_id", false,-1);
        tracep->declBit(c+281,"top is_jalr_id", false,-1);
        tracep->declBit(c+282,"top wben_id", false,-1);
        tracep->declBus(c+283,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+284,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+771,"top id_stall_n", false,-1);
        tracep->declBit(c+285,"top DivEn_id", false,-1);
        tracep->declBus(c+286,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+287,"top in_trap_id", false,-1);
        tracep->declBit(c+288,"top out_trap_id", false,-1);
        tracep->declBit(c+289,"top trap_id", false,-1);
        tracep->declBit(c+290,"top ld_use_hazard", false,-1);
        tracep->declBit(c+291,"top id_flush", false,-1);
        tracep->declQuad(c+292,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+294,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+295,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+297,"top src1sel_ex", false,-1);
        tracep->declBus(c+298,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+299,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+301,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+303,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+305,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+307,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+308,"top is_brc_ex", false,-1);
        tracep->declBit(c+309,"top is_jal_ex", false,-1);
        tracep->declBit(c+310,"top is_jalr_ex", false,-1);
        tracep->declBit(c+311,"top wben_ex", false,-1);
        tracep->declBit(c+312,"top DivEn_ex", false,-1);
        tracep->declBus(c+313,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+314,"top trap_ex", false,-1);
        tracep->declBit(c+772,"top ex_stall_n", false,-1);
        tracep->declQuad(c+12,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+315,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+316,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+317,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+318,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+319,"top ex_flush", false,-1);
        tracep->declBit(c+320,"top rden_ls", false,-1);
        tracep->declBit(c+321,"top wren_ls", false,-1);
        tracep->declBit(c+579,"top ls_addr_ok_i", false,-1);
        tracep->declBit(c+580,"top ex_not_ok", false,-1);
        tracep->declQuad(c+14,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+16,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+18,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+20,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+773,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+21,"top wben_ls", false,-1);
        tracep->declQuad(c+22,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+24,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+26,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+28,"top trap_ls", false,-1);
        tracep->declBit(c+581,"top ls_stall_n", false,-1);
        tracep->declBit(c+582,"top ls_not_ok", false,-1);
        tracep->declQuad(c+18,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+29,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+30,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+126,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+31,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+840,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+841,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+583,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+32,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+827,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+322,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+324,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+326,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+328,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+329,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+331,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+332,"top wben_wb", false,-1);
        tracep->declQuad(c+333,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+581,"top wb_stall_n", false,-1);
        tracep->declBit(c+335,"top rw_valid_i", false,-1);
        tracep->declBit(c+33,"top rw_ready_o", false,-1);
        tracep->declBus(c+842,"top fetchLenth", false,-1, 7,0);
        tracep->declBit(c+571,"top rdLast_o", false,-1);
        tracep->declBus(c+34,"top rw_addr_i", false,-1, 31,0);
        tracep->declQuad(c+569,"top data_read_o", false,-1, 63,0);
        tracep->declBit(c+585,"top dataValid_o", false,-1);
        tracep->declBit(c+775,"top dataNotOk", false,-1);
        tracep->declBit(c+681,"top DcacheRdValid", false,-1);
        tracep->declBit(c+336,"top DcacheWrValid", false,-1);
        tracep->declBit(c+35,"top lsAxiRdReady", false,-1);
        tracep->declBus(c+680,"top lsFetchLenth", false,-1, 7,0);
        tracep->declBit(c+577,"top lsRdLast", false,-1);
        tracep->declQuad(c+682,"top DcacheRdAddr", false,-1, 63,0);
        tracep->declQuad(c+684,"top DcacheWrAddr", false,-1, 63,0);
        tracep->declQuad(c+575,"top lsAxiRdData", false,-1, 63,0);
        tracep->declBit(c+586,"top lsAxiRdDataVAlid", false,-1);
        tracep->declBit(c+337,"top lsAxiWrReady", false,-1);
        tracep->declArray(c+776,"top lsAxiWrData", false,-1, 255,0);
        tracep->declBus(c+680,"top lsStoreLenth", false,-1, 7,0);
        tracep->declBus(c+539,"top lsStoreMask", false,-1, 7,0);
        tracep->declBus(c+679,"top lsStoreSize", false,-1, 2,0);
        tracep->declBus(c+813,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+813,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+813,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+813,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+814,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+815,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+816,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+2,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+762,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+3,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+4,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+817,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+820,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+818,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+826,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+827,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+828,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+819,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+829,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+830,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+6,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+568,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+763,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+569,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+571,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+572,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+831,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+764,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+253,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+153,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+817,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+832,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+818,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+7,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+679,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+828,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+819,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+833,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+573,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+254,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+255,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+155,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+257,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+818,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+258,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+765,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+766,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+767,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+768,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+769,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+8,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+9,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+817,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+832,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+818,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+680,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+827,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+828,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+819,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+829,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+834,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+11,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+574,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+770,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+575,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+577,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+572,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+835,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+730,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+731,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+732,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+734,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+735,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+736,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+737,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+738,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+739,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+740,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+741,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+742,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+743,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+744,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+745,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+746,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+748,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+749,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+750,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+751,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+752,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+753,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+754,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+755,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+708,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+709,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+710,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+712,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+713,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+714,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+715,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+716,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+717,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+718,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+719,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+720,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+721,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+722,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+723,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+724,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+725,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+727,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+728,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+729,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+143,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+250,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+144,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+817,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+146,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+818,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+757,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+758,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+147,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+819,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+148,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+149,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+251,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+759,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+150,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+761,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+818,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+252,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+151,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+152,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+832,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+825,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+138,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+243,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+244,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+817,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+122,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+818,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+756,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+246,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+247,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+819,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+248,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+123,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+249,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+139,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+140,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+141,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+139,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+832,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+823,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+764,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+253,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+153,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+817,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+832,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+818,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+7,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+679,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+828,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+819,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+833,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+573,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+254,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+255,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+155,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+257,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+818,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+258,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+765,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+766,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+767,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+768,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+587,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+36,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+338,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+817,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+37,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+818,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+784,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+827,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+828,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+843,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+829,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+38,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+340,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+588,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+785,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+589,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+591,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+572,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+786,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+698,"top IF_u clk", false,-1);
        tracep->declBit(c+699,"top IF_u rst_n", false,-1);
        tracep->declBit(c+261,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+262,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+24,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+26,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+287,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+288,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+578,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+259,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+270,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+264,"top IF_u if_instr_valid", false,-1);
        tracep->declQuad(c+265,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+838,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+124,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+125,"top IF_u cacheDataOk_i", false,-1);
        tracep->declQuad(c+267,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+839,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+269,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+267,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+698,"top cache_dut clk", false,-1);
        tracep->declBit(c+699,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+341,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+269,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+819,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+844,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+846,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+578,"top cache_dut stall_n", false,-1);
        tracep->declBit(c+124,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+128,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+125,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+265,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+335,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+33,"top cache_dut axiRdReady", false,-1);
        tracep->declBus(c+842,"top cache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+571,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+34,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+569,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBit(c+585,"top cache_dut dataValid_i", false,-1);
        tracep->declBus(c+817,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+847,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+848,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+827,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+849,"top cache_dut replace", false,-1, 2,0);
        tracep->declBus(c+342,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+592,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+39,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+40,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+41,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+156,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+160,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+164,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+168,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+343,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+347,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+343,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+347,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+351,"top cache_dut wenWay1", false,-1);
        tracep->declBit(c+352,"top cache_dut wenWay2", false,-1);
        tracep->declBit(c+353,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+42,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+44,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+45,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+46,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+47,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+49,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+51,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+52,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+787,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+788,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+789,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+790,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+53,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+54,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+850,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+851,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+354,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+172,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+180,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+791,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+793,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+355,"top cache_dut missEn", false,-1);
        tracep->declBit(c+356,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+55,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+1,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+57,"top cache_dut missFlag", false,-1);
        tracep->declBus(c+357,"top cache_dut rdCnt", false,-1, 1,0);
        tracep->declArray(c+358,"top cache_dut rdBuffer", false,-1, 255,0);
        tracep->declBit(c+366,"top cache_dut replaceEn", false,-1);
        tracep->declBus(c+852,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+813,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+853,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+852,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+156,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+698,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+367,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+368,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+854,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+593,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+343,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+369,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+351,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+858,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+852,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+813,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+853,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+852,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+160,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+698,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+367,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+368,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+854,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+593,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+347,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+369,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+351,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+858,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+852,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+813,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+853,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+852,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+164,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+698,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+370,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+371,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+854,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+594,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+343,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+372,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+352,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+858,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+852,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+813,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+853,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+852,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+168,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+698,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+370,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+371,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+854,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+594,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+347,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+372,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+352,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+858,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+813,"top axi_icache_dut RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+813,"top axi_icache_dut RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+813,"top axi_icache_dut AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+813,"top axi_icache_dut AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+814,"top axi_icache_dut AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+815,"top axi_icache_dut AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+816,"top axi_icache_dut AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+698,"top axi_icache_dut clock", false,-1);
        tracep->declBit(c+699,"top axi_icache_dut reset", false,-1);
        tracep->declBit(c+335,"top axi_icache_dut rw_valid_i", false,-1);
        tracep->declBit(c+33,"top axi_icache_dut rw_ready_o", false,-1);
        tracep->declQuad(c+569,"top axi_icache_dut data_read_o", false,-1, 63,0);
        tracep->declQuad(c+58,"top axi_icache_dut rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+842,"top axi_icache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+571,"top axi_icache_dut rdLast_o", false,-1);
        tracep->declBit(c+585,"top axi_icache_dut dataValid_o", false,-1);
        tracep->declBit(c+2,"top axi_icache_dut instr_fetching", false,-1);
        tracep->declBit(c+762,"top axi_icache_dut axi_ar_ready_i", false,-1);
        tracep->declBit(c+3,"top axi_icache_dut axi_ar_valid_o", false,-1);
        tracep->declQuad(c+4,"top axi_icache_dut axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+817,"top axi_icache_dut axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+820,"top axi_icache_dut axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+818,"top axi_icache_dut axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+826,"top axi_icache_dut axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+827,"top axi_icache_dut axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+828,"top axi_icache_dut axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+819,"top axi_icache_dut axi_ar_lock_o", false,-1);
        tracep->declBus(c+829,"top axi_icache_dut axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_icache_dut axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+830,"top axi_icache_dut axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+6,"top axi_icache_dut axi_r_ready_o", false,-1);
        tracep->declBit(c+568,"top axi_icache_dut axi_r_valid_i", false,-1);
        tracep->declBus(c+763,"top axi_icache_dut axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+569,"top axi_icache_dut axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+571,"top axi_icache_dut axi_r_last_i", false,-1);
        tracep->declBus(c+572,"top axi_icache_dut axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+831,"top axi_icache_dut axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+862,"top axi_icache_dut r_state_idle", false,-1, 1,0);
        tracep->declBus(c+828,"top axi_icache_dut r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+863,"top axi_icache_dut r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+864,"top axi_icache_dut r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+60,"top axi_icache_dut r_state", false,-1, 1,0);
        tracep->declBus(c+595,"top axi_icache_dut r_state_next", false,-1, 1,0);
        tracep->declBit(c+3,"top axi_icache_dut ar_valid", false,-1);
        tracep->declBit(c+6,"top axi_icache_dut r_ready", false,-1);
        tracep->declQuad(c+4,"top axi_icache_dut addr_reg", false,-1, 63,0);
        tracep->declBus(c+865,"top axi_icache_dut AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+820,"top axi_icache_dut axi_id", false,-1, 3,0);
        tracep->declBus(c+819,"top axi_icache_dut axi_user", false,-1, 0,0);
        tracep->declBus(c+826,"top axi_icache_dut axi_len", false,-1, 7,0);
        tracep->declBus(c+827,"top axi_icache_dut axi_size", false,-1, 2,0);
        tracep->declBit(c+698,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+699,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+259,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+270,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+771,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+291,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+271,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+273,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+373,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+375,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+866,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+867,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+698,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+699,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+771,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+376,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+379,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+698,"top ID_u clk", false,-1);
        tracep->declBit(c+699,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+271,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+322,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+328,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+273,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+329,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+331,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+332,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+527,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+525,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+274,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+276,"top ID_u src1sel", false,-1);
        tracep->declBus(c+277,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+278,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+281,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+280,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+279,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+282,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+283,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+284,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+705,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+285,"top ID_u DivEn", false,-1);
        tracep->declBus(c+286,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+289,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+287,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+288,"top ID_u out_trap_id", false,-1);
        tracep->declBus(c+382,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+274,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+527,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+525,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+271,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+273,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+283,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+284,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+382,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+276,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+277,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+278,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+281,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+280,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+279,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+282,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+285,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+286,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+289,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+287,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+288,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBus(c+383,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+384,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+385,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+386,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+382,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+274,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+698,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+322,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+328,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+283,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+527,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+284,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+525,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+331,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+329,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+332,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+705,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+614+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+273,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+294,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+290,"top hazard_detect_u hazard", false,-1);
        tracep->declBit(c+698,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+699,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+772,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+319,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+271,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+273,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+274,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+525,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+527,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+278,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+281,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+280,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+279,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+276,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+277,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+282,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+283,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+284,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+285,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+286,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+289,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declQuad(c+292,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+294,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+299,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+301,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+303,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+307,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+310,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+309,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+308,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+297,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+298,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+311,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+317,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+318,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+312,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+313,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+314,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declQuad(c+387,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+389,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+390,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+391,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+392,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+393,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+394,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBus(c+868,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+867,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+698,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+699,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+772,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+529,"top EX_reg_u ex_reg i_din", false,-1, 314,0);
        tracep->declArray(c+395,"top EX_reg_u ex_reg o_dout", false,-1, 314,0);
        tracep->declBus(c+307,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+301,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+299,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+303,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+292,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+294,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+310,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+309,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+308,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+297,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+298,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+315,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+316,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+18,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+329,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+12,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+312,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+313,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+295,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+262,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+305,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+261,"top ex_stage_u is_jump_o", false,-1);
        tracep->declBit(c+580,"top ex_stage_u exNotOk", false,-1);
        tracep->declBit(c+320,"top ex_stage_u rden_ls", false,-1);
        tracep->declBit(c+321,"top ex_stage_u wren_ls", false,-1);
        tracep->declBit(c+579,"top ex_stage_u ls_addr_ok_i", false,-1);
        tracep->declQuad(c+405,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+407,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+409,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+305,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+307,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+405,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+407,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+312,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+313,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+295,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+411,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+412,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+413,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+415,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+416,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+418,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+420,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+420,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+421,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+422,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+423,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+425,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+426,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+427,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+429,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+431,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+433,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+405,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+416,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+415,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+418,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+425,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+412,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+426,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+435,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+422,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+420,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+421,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+415,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+420,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+436,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+405,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+437,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+421,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+420,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+423,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+438,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+440,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+442,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+444,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+446,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+448,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+450,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+405,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+407,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+313,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+433,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+409,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+305,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+310,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+309,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+308,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+452,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+303,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+292,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+262,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+261,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+453,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+455,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+869,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+457,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+458,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+459,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+460,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+462,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+464,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+698,"top forwarding_u clk", false,-1);
        tracep->declBit(c+699,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+317,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+318,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+61,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+331,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+21,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+332,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+329,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+581,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+315,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+316,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+12,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+12,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+62,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+63,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+129,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+465,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+130,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+131,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+466,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+132,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+698,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+699,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+292,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+305,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+294,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+295,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+311,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+314,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+581,"top L_S_reg_u stall_n", false,-1);
        tracep->declQuad(c+14,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+16,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+20,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+18,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+21,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+28,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBus(c+870,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+867,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+698,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+699,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+581,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+467,"top L_S_reg_u ls_reg i_din", false,-1, 225,0);
        tracep->declArray(c+64,"top L_S_reg_u ls_reg o_dout", false,-1, 225,0);
        tracep->declBit(c+698,"top ls_u clk", false,-1);
        tracep->declBit(c+699,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+14,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+18,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+20,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+324,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+328,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+326,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u trap_ls_i", false,-1);
        tracep->declBit(c+581,"top ls_u stall_n", false,-1);
        tracep->declQuad(c+773,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+26,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+582,"top ls_u ls_not_ok", false,-1);
        tracep->declQuad(c+18,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+29,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+30,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+126,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+31,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+32,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+827,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+775,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+775,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+583,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+30,"top ls_u wren", false,-1);
        tracep->declBit(c+29,"top ls_u rden", false,-1);
        tracep->declBus(c+72,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+126,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+475,"top ls_u wren_last", false,-1);
        tracep->declBit(c+698,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+699,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+30,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+29,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+72,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+126,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+18,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+14,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+324,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+475,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+773,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+582,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+18,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+29,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+30,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+126,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+31,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+32,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+827,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+775,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+775,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+583,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+583,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+73,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+74,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+75,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+76,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+77,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+78,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+79,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+827,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+596,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+597,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+598,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+32,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+31,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+80,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+81,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+82,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+83,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+20,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+328,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+16,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+326,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+30,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+29,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+72,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+126,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+133,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+698,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+699,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+14,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declBus(c+20,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+18,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u CSR_u trap", false,-1);
        tracep->declBit(c+581,"top ls_u CSR_u stall_n", false,-1);
        tracep->declQuad(c+22,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+26,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+84,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+85,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+86,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+87,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+88,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+89,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+90,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+91,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+92,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declQuad(c+18,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+93,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+95,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+97,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+26,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+99,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declQuad(c+101,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+103,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declBit(c+698,"top Dcache_u clk", false,-1);
        tracep->declBit(c+699,"top Dcache_u rst_n", false,-1);
        tracep->declBus(c+476,"top Dcache_u addr_i", false,-1, 31,0);
        tracep->declBit(c+477,"top Dcache_u exValid_i", false,-1);
        tracep->declBit(c+478,"top Dcache_u lsValid_i", false,-1);
        tracep->declBit(c+479,"top Dcache_u op_i", false,-1);
        tracep->declQuad(c+126,"top Dcache_u wr_data_i", false,-1, 63,0);
        tracep->declBus(c+31,"top Dcache_u wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+581,"top Dcache_u stall_n", false,-1);
        tracep->declBit(c+579,"top Dcache_u addr_ok_o", false,-1);
        tracep->declBit(c+775,"top Dcache_u data_notok_o", false,-1);
        tracep->declQuad(c+583,"top Dcache_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+681,"top Dcache_u cacheRdValid_o", false,-1);
        tracep->declBit(c+35,"top Dcache_u axiRdReady", false,-1);
        tracep->declBus(c+680,"top Dcache_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+577,"top Dcache_u rdLast_i", false,-1);
        tracep->declBus(c+540,"top Dcache_u cacheRdAddr_o", false,-1, 31,0);
        tracep->declBus(c+795,"top Dcache_u cacheWrAddr_o", false,-1, 31,0);
        tracep->declQuad(c+575,"top Dcache_u rdData_i", false,-1, 63,0);
        tracep->declBit(c+586,"top Dcache_u dataValid_i", false,-1);
        tracep->declBit(c+337,"top Dcache_u axiWrReady", false,-1);
        tracep->declBit(c+336,"top Dcache_u cacheWrValid_o", false,-1);
        tracep->declArray(c+776,"top Dcache_u cacheWrData_o", false,-1, 255,0);
        tracep->declBus(c+680,"top Dcache_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+539,"top Dcache_u cacheWrMask_o", false,-1, 7,0);
        tracep->declBus(c+679,"top Dcache_u cacheWrSize_o", false,-1, 2,0);
        tracep->declBus(c+817,"top Dcache_u idle", false,-1, 2,0);
        tracep->declBus(c+847,"top Dcache_u compare", false,-1, 2,0);
        tracep->declBus(c+848,"top Dcache_u miss", false,-1, 2,0);
        tracep->declBus(c+827,"top Dcache_u getdata", false,-1, 2,0);
        tracep->declBus(c+849,"top Dcache_u replace", false,-1, 2,0);
        tracep->declBus(c+871,"top Dcache_u uncacheOp", false,-1, 2,0);
        tracep->declBus(c+686,"top Dcache_u cacheCurState", false,-1, 2,0);
        tracep->declBus(c+796,"top Dcache_u cacheNexState", false,-1, 2,0);
        tracep->declBit(c+480,"top Dcache_u cacheHit", false,-1);
        tracep->declBit(c+481,"top Dcache_u way1Hit", false,-1);
        tracep->declBit(c+482,"top Dcache_u way2Hit", false,-1);
        tracep->declArray(c+188,"top Dcache_u dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+192,"top Dcache_u dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+196,"top Dcache_u dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+200,"top Dcache_u dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+541,"top Dcache_u inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+545,"top Dcache_u inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+541,"top Dcache_u inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+545,"top Dcache_u inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+687,"top Dcache_u wenWay1", false,-1);
        tracep->declBit(c+688,"top Dcache_u wenWay2", false,-1);
        tracep->declBit(c+689,"top Dcache_u uncached", false,-1);
        tracep->declBit(c+690,"top Dcache_u idleEn", false,-1);
        tracep->declQuad(c+483,"top Dcache_u reqLatch", false,-1, 32,0);
        tracep->declBus(c+485,"top Dcache_u offset", false,-1, 4,0);
        tracep->declBus(c+486,"top Dcache_u index", false,-1, 5,0);
        tracep->declBus(c+487,"top Dcache_u tag", false,-1, 20,0);
        tracep->declQuad(c+105,"top Dcache_u validArray1", false,-1, 63,0);
        tracep->declQuad(c+107,"top Dcache_u validArray2", false,-1, 63,0);
        tracep->declBit(c+134,"top Dcache_u bitValid1", false,-1);
        tracep->declBit(c+135,"top Dcache_u bitValid2", false,-1);
        tracep->declBit(c+797,"top Dcache_u bitValid1_d", false,-1);
        tracep->declBit(c+798,"top Dcache_u bitValid2_d", false,-1);
        tracep->declBus(c+799,"top Dcache_u tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+800,"top Dcache_u tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+136,"top Dcache_u tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+137,"top Dcache_u tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+872,"top Dcache_u validWay1_q", false,-1);
        tracep->declBit(c+873,"top Dcache_u validWay2_q", false,-1);
        tracep->declBus(c+109,"top Dcache_u testTag", false,-1, 20,0);
        tracep->declBus(c+110,"top Dcache_u tagtest", false,-1, 20,0);
        tracep->declBit(c+111,"top Dcache_u replaceEnDelay", false,-1);
        tracep->declBit(c+691,"top Dcache_u compareEn", false,-1);
        tracep->declArray(c+204,"top Dcache_u way1Data", false,-1, 255,0);
        tracep->declArray(c+212,"top Dcache_u way2Data", false,-1, 255,0);
        tracep->declQuad(c+801,"top Dcache_u rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+803,"top Dcache_u rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+692,"top Dcache_u missEn", false,-1);
        tracep->declBit(c+693,"top Dcache_u getdataEn", false,-1);
        tracep->declQuad(c+488,"top Dcache_u addrToRead", false,-1, 63,0);
        tracep->declBit(c+678,"top Dcache_u randomBit", false,-1);
        tracep->declBit(c+111,"top Dcache_u missFlag", false,-1);
        tracep->declBus(c+490,"top Dcache_u rdCnt", false,-1, 1,0);
        tracep->declArray(c+491,"top Dcache_u rdBuffer", false,-1, 255,0);
        tracep->declBit(c+694,"top Dcache_u replaceEn", false,-1);
        tracep->declBit(c+112,"top Dcache_u wenDelay1", false,-1);
        tracep->declBit(c+113,"top Dcache_u wenDelay2", false,-1);
        tracep->declQuad(c+499,"top Dcache_u wrDataLatch", false,-1, 63,0);
        tracep->declBus(c+114,"top Dcache_u wrMaskLatch", false,-1, 7,0);
        tracep->declQuad(c+501,"top Dcache_u dirtyArray1", false,-1, 63,0);
        tracep->declQuad(c+503,"top Dcache_u dirtyArray2", false,-1, 63,0);
        tracep->declBit(c+505,"top Dcache_u wrLow", false,-1);
        tracep->declBit(c+506,"top Dcache_u wrHigh", false,-1);
        tracep->declQuad(c+507,"top Dcache_u storeData", false,-1, 63,0);
        tracep->declBus(c+509,"top Dcache_u storeMask", false,-1, 7,0);
        tracep->declQuad(c+510,"top Dcache_u sramMask", false,-1, 63,0);
        tracep->declArray(c+549,"top Dcache_u maskWay1_1", false,-1, 127,0);
        tracep->declArray(c+553,"top Dcache_u maskWay1_2", false,-1, 127,0);
        tracep->declArray(c+549,"top Dcache_u maskWay2_1", false,-1, 127,0);
        tracep->declArray(c+553,"top Dcache_u maskWay2_2", false,-1, 127,0);
        tracep->declBit(c+557,"top Dcache_u wrMiss", false,-1);
        tracep->declBit(c+558,"top Dcache_u rdMiss", false,-1);
        tracep->declBit(c+115,"top Dcache_u replaceWay", false,-1);
        tracep->declBit(c+805,"top Dcache_u needWrBk", false,-1);
        tracep->declBit(c+336,"top Dcache_u needWrBk_Reg", false,-1);
        tracep->declBit(c+116,"top Dcache_u uncache", false,-1);
        tracep->declBit(c+336,"top Dcache_u axiWrBusy", false,-1);
        tracep->declBus(c+795,"top Dcache_u addrToWrite", false,-1, 31,0);
        tracep->declBit(c+695,"top Dcache_u uncacheOpEn", false,-1);
        tracep->declBit(c+559,"top Dcache_u uncacheWrValid", false,-1);
        tracep->declBit(c+599,"top Dcache_u uncacheOpOk", false,-1);
        tracep->declBit(c+806,"top Dcache_u uncacheRdValid", false,-1);
        tracep->declBit(c+117,"top Dcache_u uncacheRdOk", false,-1);
        tracep->declBit(c+512,"top Dcache_u uncacheWrOk", false,-1);
        tracep->declBus(c+513,"top Dcache_u uncacheRdAddr", false,-1, 31,0);
        tracep->declQuad(c+118,"top Dcache_u temp", false,-1, 63,0);
        tracep->declBus(c+852,"top Dcache_u iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+813,"top Dcache_u iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+853,"top Dcache_u iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+852,"top Dcache_u iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+188,"top Dcache_u iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+698,"top Dcache_u iramWay1_1 CLK", false,-1);
        tracep->declBit(c+807,"top Dcache_u iramWay1_1 CEN", false,-1);
        tracep->declBit(c+696,"top Dcache_u iramWay1_1 WEN", false,-1);
        tracep->declArray(c+560,"top Dcache_u iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+600,"top Dcache_u iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+541,"top Dcache_u iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+808,"top Dcache_u iramWay1_1 cen", false,-1);
        tracep->declBit(c+687,"top Dcache_u iramWay1_1 wen", false,-1);
        tracep->declArray(c+549,"top Dcache_u iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+852,"top Dcache_u iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+813,"top Dcache_u iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+853,"top Dcache_u iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+852,"top Dcache_u iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+192,"top Dcache_u iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+698,"top Dcache_u iramWay1_2 CLK", false,-1);
        tracep->declBit(c+807,"top Dcache_u iramWay1_2 CEN", false,-1);
        tracep->declBit(c+696,"top Dcache_u iramWay1_2 WEN", false,-1);
        tracep->declArray(c+564,"top Dcache_u iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+600,"top Dcache_u iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+545,"top Dcache_u iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+808,"top Dcache_u iramWay1_2 cen", false,-1);
        tracep->declBit(c+687,"top Dcache_u iramWay1_2 wen", false,-1);
        tracep->declArray(c+553,"top Dcache_u iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+852,"top Dcache_u iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+813,"top Dcache_u iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+853,"top Dcache_u iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+852,"top Dcache_u iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+196,"top Dcache_u iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+698,"top Dcache_u iramWay2_1 CLK", false,-1);
        tracep->declBit(c+809,"top Dcache_u iramWay2_1 CEN", false,-1);
        tracep->declBit(c+697,"top Dcache_u iramWay2_1 WEN", false,-1);
        tracep->declArray(c+560,"top Dcache_u iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+601,"top Dcache_u iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+541,"top Dcache_u iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+810,"top Dcache_u iramWay2_1 cen", false,-1);
        tracep->declBit(c+688,"top Dcache_u iramWay2_1 wen", false,-1);
        tracep->declArray(c+549,"top Dcache_u iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+852,"top Dcache_u iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+813,"top Dcache_u iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+853,"top Dcache_u iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+852,"top Dcache_u iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+200,"top Dcache_u iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+698,"top Dcache_u iramWay2_2 CLK", false,-1);
        tracep->declBit(c+809,"top Dcache_u iramWay2_2 CEN", false,-1);
        tracep->declBit(c+697,"top Dcache_u iramWay2_2 WEN", false,-1);
        tracep->declArray(c+564,"top Dcache_u iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+601,"top Dcache_u iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+545,"top Dcache_u iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+810,"top Dcache_u iramWay2_2 cen", false,-1);
        tracep->declBit(c+688,"top Dcache_u iramWay2_2 wen", false,-1);
        tracep->declArray(c+553,"top Dcache_u iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+813,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+813,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+813,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+813,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+814,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+815,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+816,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+698,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+699,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+681,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+35,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+575,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+682,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+680,"top axi_ls_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+577,"top axi_ls_u rdLast_o", false,-1);
        tracep->declBit(c+586,"top axi_ls_u dataValid_o", false,-1);
        tracep->declBit(c+336,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+337,"top axi_ls_u wr_ready_o", false,-1);
        tracep->declArray(c+776,"top axi_ls_u cacheWrData_i", false,-1, 255,0);
        tracep->declBus(c+680,"top axi_ls_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+679,"top axi_ls_u storeSize", false,-1, 2,0);
        tracep->declBus(c+539,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+684,"top axi_ls_u cacheWrAddr_i", false,-1, 63,0);
        tracep->declBit(c+764,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+253,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+153,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+817,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+832,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+818,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+7,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+679,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+828,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+819,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+833,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+573,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+254,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+255,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+155,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+257,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+818,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+258,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+765,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+766,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+767,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+768,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+769,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+8,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+9,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+817,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+832,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+818,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+680,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+827,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+828,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+819,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+829,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+820,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+834,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+11,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+574,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+770,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+575,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+577,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+572,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+835,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+862,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+828,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+863,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+864,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+514,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+602,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+253,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+254,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+258,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+874,"top axi_ls_u trans_ok", false,-1);
        tracep->declBit(c+257,"top axi_ls_u wrLast", false,-1);
        tracep->declQuad(c+153,"top axi_ls_u wrAddr_reg", false,-1, 63,0);
        tracep->declArray(c+220,"top axi_ls_u wr_data_reg", false,-1, 255,0);
        tracep->declBus(c+228,"top axi_ls_u wrMask_reg", false,-1, 7,0);
        tracep->declBus(c+120,"top axi_ls_u wrCnt", false,-1, 1,0);
        tracep->declBus(c+7,"top axi_ls_u lenthReg", false,-1, 7,0);
        tracep->declBus(c+862,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+828,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+863,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+864,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+121,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+603,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+8,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+11,"top axi_ls_u r_ready", false,-1);
        tracep->declQuad(c+9,"top axi_ls_u rdAddr_reg", false,-1, 63,0);
        tracep->declBus(c+865,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+832,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+819,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+826,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+827,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+229,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+698,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+699,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+14,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+20,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+18,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+773,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+21,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+22,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+581,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+322,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+328,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+324,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+326,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+332,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+333,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+875,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+867,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+698,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+699,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+581,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+604,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+515,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+322,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+328,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+324,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+326,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+333,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+331,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+329,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+698,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+699,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+290,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+261,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+287,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+288,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+264,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+580,"top pipline_ctrl_u ex_not_ok", false,-1);
        tracep->declBit(c+582,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+578,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+771,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+771,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+772,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+581,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+581,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+291,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+319,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBus(c+876,"top lsAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+876,"top lsAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+246,"top lsAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+758,"top lsAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+698,"top lsAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+699,"top lsAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+144,"top lsAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+817,"top lsAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+250,"top lsAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+143,"top lsAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+759,"top lsAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+150,"top lsAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+251,"top lsAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+149,"top lsAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+152,"top lsAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+151,"top lsAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+252,"top lsAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+244,"top lsAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+817,"top lsAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+243,"top lsAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+138,"top lsAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+141,"top lsAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+140,"top lsAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+139,"top lsAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+249,"top lsAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+230,"top lsAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+143,"top lsAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+149,"top lsAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+152,"top lsAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+151,"top lsAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+232,"top lsAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+138,"top lsAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+141,"top lsAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+140,"top lsAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+139,"top lsAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+877,"top lsAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+878,"top lsAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+234,"top lsAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+236,"top lsAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+238,"top lsAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+240,"top lsAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+811,"top lsAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+812,"top lsAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+879,"top lsAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+881,"top lsAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+242,"top lsAxiSlaveRam_u aw_en", false,-1);
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
        tracep->fullBit(oldp+8,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__axi_ls_u__DOT__rdAddr_reg),64);
        tracep->fullBit(oldp+11,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullQData(oldp+12,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
        tracep->fullQData(oldp+14,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                     >> 2U)))),64);
        tracep->fullQData(oldp+16,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                     >> 2U)))),64);
        tracep->fullQData(oldp+18,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                     >> 2U)))),64);
        tracep->fullIData(oldp+20,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                     << 0x1eU) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 2U))),32);
        tracep->fullBit(oldp+21,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                        >> 1U))));
        tracep->fullQData(oldp+22,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+24,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+26,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+28,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullBit(oldp+29,((3U == (0x7fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 2U)))));
        tracep->fullBit(oldp+30,((8U == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 4U)))));
        tracep->fullCData(oldp+31,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullCData(oldp+32,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullBit(oldp+33,((0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullIData(oldp+34,((((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                              >> 0xbU)) 
                                     << 0xbU) | (0x7e0U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 5U)) 
                                                    << 5U)))),32);
        tracep->fullBit(oldp+35,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullBit(oldp+36,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
        tracep->fullCData(oldp+37,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U)),4);
        tracep->fullCData(oldp+38,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? (IData)(vlSelf->top__DOT__if_axi_ar_region_o)
                                     : (IData)(vlSelf->top__DOT__ls_axi_ar_region_o))),4);
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
        tracep->fullBit(oldp+41,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
        tracep->fullQData(oldp+42,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
        tracep->fullCData(oldp+44,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
        tracep->fullCData(oldp+45,((0x3fU & (IData)(
                                                    (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                     >> 5U)))),6);
        tracep->fullIData(oldp+46,((0x1fffffU & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 0xbU)))),21);
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
        tracep->fullBit(oldp+51,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 5U))))))));
        tracep->fullBit(oldp+52,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 5U))))))));
        tracep->fullIData(oldp+53,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                   [(0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))]),21);
        tracep->fullIData(oldp+54,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                   [(0x3fU & (IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 5U)))]),21);
        tracep->fullQData(oldp+55,((((QData)((IData)(
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
        tracep->fullBit(oldp+57,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
        tracep->fullQData(oldp+58,((QData)((IData)(
                                                   (((IData)(
                                                             (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                              >> 0xbU)) 
                                                     << 0xbU) 
                                                    | (0x7e0U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                   >> 5U)) 
                                                          << 5U)))))),64);
        tracep->fullCData(oldp+60,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state),2);
        tracep->fullCData(oldp+61,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 9U))),5);
        tracep->fullBit(oldp+62,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+63,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullWData(oldp+64,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
        tracep->fullCData(oldp+72,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                          >> 0xeU))),3);
        tracep->fullBit(oldp+73,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (0U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+74,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (4U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+75,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+76,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (5U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+77,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+78,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (6U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+79,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))) 
                                  & (3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+80,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (0U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+81,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+82,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+83,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                                  & (3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU))))));
        tracep->fullBit(oldp+84,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xeU)))));
        tracep->fullBit(oldp+85,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xeU)))));
        tracep->fullBit(oldp+86,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xeU)))));
        tracep->fullBit(oldp+87,((0x1cU == (0x1fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 4U)))));
        tracep->fullBit(oldp+88,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+89,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+90,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+91,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+92,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullQData(oldp+93,(((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                      >> 2U))) 
                                    | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+95,(((~ (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                              >> 2U)))) 
                                    & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullQData(oldp+101,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))
                                      ? 0xbULL : 0ULL)),64);
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__Dcache_u__DOT__validArray1),64);
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__Dcache_u__DOT__validArray2),64);
        tracep->fullIData(oldp+109,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [0x3cU]),21);
        tracep->fullIData(oldp+110,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [0x23U]),21);
        tracep->fullBit(oldp+111,(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay));
        tracep->fullBit(oldp+112,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay1));
        tracep->fullBit(oldp+113,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay2));
        tracep->fullCData(oldp+114,(vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch),8);
        tracep->fullBit(oldp+115,(vlSelf->top__DOT__Dcache_u__DOT__replaceWay));
        tracep->fullBit(oldp+116,(vlSelf->top__DOT__Dcache_u__DOT__uncache));
        tracep->fullBit(oldp+117,(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk));
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__Dcache_u__DOT__temp),64);
        tracep->fullCData(oldp+120,(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt),2);
        tracep->fullCData(oldp+121,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+122,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                          ? 0U : 1U)
                                      : 0U)),4);
        tracep->fullCData(oldp+123,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? (0xfU & ((0U 
                                                  != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                                  ? (IData)(vlSelf->top__DOT__if_axi_ar_region_o)
                                                  : (IData)(vlSelf->top__DOT__ls_axi_ar_region_o)))
                                      : 0U)),4);
        tracep->fullBit(oldp+124,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+125,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullQData(oldp+126,((((0U == (0x1fU 
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
        tracep->fullBit(oldp+128,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullBit(oldp+129,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+130,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+131,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 1U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))))));
        tracep->fullBit(oldp+132,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+133,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+134,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+135,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+136,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+137,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
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
                                      ? 1U : 0U)),2);
        tracep->fullCData(oldp+148,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? 0xfU : 0U)),4);
        tracep->fullBit(oldp+149,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullCData(oldp+150,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? (0xffU & (IData)(vlSelf->top__DOT__ls_axi_w_strb_o))
                                      : 0U)),8);
        tracep->fullBit(oldp+151,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullCData(oldp+152,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullQData(oldp+153,(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg),64);
        tracep->fullCData(oldp+155,(vlSelf->top__DOT__ls_axi_w_strb_o),8);
        tracep->fullWData(oldp+156,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+160,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+164,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+168,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+172,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+180,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullWData(oldp+188,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+192,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+196,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+200,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+204,(vlSelf->top__DOT__Dcache_u__DOT__way1Data),256);
        tracep->fullWData(oldp+212,(vlSelf->top__DOT__Dcache_u__DOT__way2Data),256);
        tracep->fullWData(oldp+220,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),256);
        tracep->fullCData(oldp+228,(vlSelf->top__DOT__axi_ls_u__DOT__wrMask_reg),8);
        tracep->fullCData(oldp+229,((0x38U & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg) 
                                              << 3U))),6);
        tracep->fullQData(oldp+230,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+232,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+236,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+238,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+240,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+242,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        tracep->fullBit(oldp+243,(vlSelf->top__DOT__axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+244,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr
                                      : 0ULL)),64);
        tracep->fullCData(oldp+246,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? 3U : 0U)),3);
        tracep->fullCData(oldp+247,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? 1U : 0U)),2);
        tracep->fullCData(oldp+248,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? 2U : 0U)),4);
        tracep->fullBit(oldp+249,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready))
                                    : 0U)));
        tracep->fullBit(oldp+250,(vlSelf->top__DOT__axi_mmio_aw_valid_o));
        tracep->fullBit(oldp+251,(vlSelf->top__DOT__axi_mmio_w_valid_o));
        tracep->fullBit(oldp+252,(vlSelf->top__DOT__axi_mmio_b_ready_o));
        tracep->fullBit(oldp+253,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullBit(oldp+254,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+255,(vlSelf->top__DOT__ls_axi_w_data_o),64);
        tracep->fullBit(oldp+257,(vlSelf->top__DOT__axi_ls_u__DOT__wrLast));
        tracep->fullBit(oldp+258,((2U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+259,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+261,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+262,(((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+264,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+265,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullQData(oldp+267,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+269,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullIData(oldp+270,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+271,((((QData)((IData)(
                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+273,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+274,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+276,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+277,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+278,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+279,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+280,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+281,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+282,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+283,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+284,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+285,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+286,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+287,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+288,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+289,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+290,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+291,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+292,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullIData(oldp+294,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1bU))),32);
        tracep->fullQData(oldp+295,(vlSelf->top__DOT__alures_ex),64);
        tracep->fullBit(oldp+297,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+298,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x10U))),2);
        tracep->fullQData(oldp+299,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+301,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+303,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1bU)))),64);
        tracep->fullQData(oldp+305,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+307,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+308,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+309,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+310,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+311,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+312,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+313,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+314,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullCData(oldp+315,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+316,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+317,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xaU))),5);
        tracep->fullCData(oldp+318,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 5U))),5);
        tracep->fullBit(oldp+319,(vlSelf->top__DOT__ex_flush));
        tracep->fullBit(oldp+320,((3U == (0x7fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 5U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1bU))))));
        tracep->fullBit(oldp+321,((8U == (0x1fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 3U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1dU))))));
        tracep->fullQData(oldp+322,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+324,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+326,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+328,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+329,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+331,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+332,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+333,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullBit(oldp+335,(vlSelf->top__DOT__rw_valid_i));
        tracep->fullBit(oldp+336,(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
        tracep->fullBit(oldp+337,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+338,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullBit(oldp+340,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullIData(oldp+341,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullCData(oldp+342,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        __Vtemp256[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        __Vtemp256[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        __Vtemp256[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        __Vtemp256[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        tracep->fullWData(oldp+343,(__Vtemp256),128);
        __Vtemp257[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        __Vtemp257[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        __Vtemp257[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        __Vtemp257[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        tracep->fullWData(oldp+347,(__Vtemp257),128);
        tracep->fullBit(oldp+351,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
        tracep->fullBit(oldp+352,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
        tracep->fullBit(oldp+353,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+354,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+355,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+356,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullCData(oldp+357,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
        tracep->fullWData(oldp+358,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
        tracep->fullBit(oldp+366,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+367,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+368,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
        tracep->fullBit(oldp+369,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+370,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+371,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
        tracep->fullBit(oldp+372,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullQData(oldp+373,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+375,(((IData)(vlSelf->top__DOT__id_flush)
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
        tracep->fullWData(oldp+376,(__Vtemp258),96);
        tracep->fullWData(oldp+379,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+382,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+383,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+384,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+385,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+386,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullQData(oldp+387,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+389,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+390,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+391,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+392,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+393,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+394,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullWData(oldp+395,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
        tracep->fullQData(oldp+405,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+407,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+409,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp260, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp261, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp262, __Vtemp260, __Vtemp261);
        VL_EXTEND_WI(65,1, __Vtemp263, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp264, __Vtemp262, __Vtemp263);
        tracep->fullBit(oldp+411,((1U & ((0x2000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp264[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+412,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+413,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+415,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+416,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+418,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+420,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+421,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+422,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U))),3);
        tracep->fullQData(oldp+423,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp267, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp268, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp269, __Vtemp267, __Vtemp268);
        VL_EXTEND_WI(65,1, __Vtemp270, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp271, __Vtemp269, __Vtemp270);
        tracep->fullBit(oldp+425,((1U & __Vtemp271[2U])));
        tracep->fullBit(oldp+426,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+427,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+429,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+431,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+433,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullCData(oldp+435,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x16U))),4);
        tracep->fullBit(oldp+436,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+437,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+438,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+440,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+442,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+444,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+446,(((0x4000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+448,(((0x4000000U & 
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
        tracep->fullQData(oldp+450,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+452,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 7U))),3);
        tracep->fullQData(oldp+453,(((((QData)((IData)(
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
        tracep->fullQData(oldp+455,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU))))),64);
        tracep->fullBit(oldp+457,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+458,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+459,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+460,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+462,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+464,((1U & ((0x200U & 
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
        tracep->fullBit(oldp+465,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xaU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+466,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
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
        tracep->fullWData(oldp+467,(__Vtemp276),226);
        tracep->fullBit(oldp+475,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullIData(oldp+476,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
        tracep->fullBit(oldp+477,(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i));
        tracep->fullBit(oldp+478,(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i));
        tracep->fullBit(oldp+479,(((3U != (0x7fU & 
                                           ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 5U) 
                                            | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1bU)))) 
                                   | (8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 3U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1dU)))))));
        tracep->fullBit(oldp+480,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
        tracep->fullBit(oldp+481,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
        tracep->fullBit(oldp+482,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
        tracep->fullQData(oldp+483,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
        tracep->fullCData(oldp+485,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
        tracep->fullCData(oldp+486,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+487,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullQData(oldp+488,((((QData)((IData)(
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
        tracep->fullCData(oldp+490,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
        tracep->fullWData(oldp+491,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
        tracep->fullQData(oldp+499,(vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch),64);
        tracep->fullQData(oldp+501,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1),64);
        tracep->fullQData(oldp+503,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2),64);
        tracep->fullBit(oldp+505,(vlSelf->top__DOT__Dcache_u__DOT__wrLow));
        tracep->fullBit(oldp+506,(vlSelf->top__DOT__Dcache_u__DOT__wrHigh));
        tracep->fullQData(oldp+507,(vlSelf->top__DOT__Dcache_u__DOT__storeData),64);
        tracep->fullCData(oldp+509,(vlSelf->top__DOT__Dcache_u__DOT__storeMask),8);
        tracep->fullQData(oldp+510,(vlSelf->top__DOT__Dcache_u__DOT__sramMask),64);
        tracep->fullBit(oldp+512,(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk));
        tracep->fullIData(oldp+513,((IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)),32);
        tracep->fullCData(oldp+514,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullWData(oldp+515,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullQData(oldp+525,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+527,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
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
        tracep->fullWData(oldp+529,(__Vtemp281),315);
        tracep->fullCData(oldp+539,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (0xffU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask))
                                      : 0xffU)),8);
        tracep->fullIData(oldp+540,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullWData(oldp+541,(__Vtemp291),128);
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
        tracep->fullWData(oldp+545,(__Vtemp301),128);
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
        tracep->fullWData(oldp+549,(__Vtemp313),128);
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
        tracep->fullWData(oldp+553,(__Vtemp325),128);
        tracep->fullBit(oldp+557,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+558,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+559,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullWData(oldp+560,(__Vtemp338),128);
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
        tracep->fullWData(oldp+564,(__Vtemp351),128);
        tracep->fullBit(oldp+568,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullQData(oldp+569,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+571,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+572,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+573,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready));
        tracep->fullBit(oldp+574,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                    : 0U)));
        tracep->fullQData(oldp+575,(vlSelf->top__DOT__ls_axi_r_data_i),64);
        tracep->fullBit(oldp+577,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullBit(oldp+578,(vlSelf->top__DOT__if_stall_n));
        tracep->fullBit(oldp+579,(vlSelf->top__DOT__ls_addr_ok_i));
        tracep->fullBit(oldp+580,((1U & (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))));
        tracep->fullBit(oldp+581,(vlSelf->top__DOT__ls_stall_n));
        tracep->fullBit(oldp+582,(vlSelf->top__DOT__ls_not_ok));
        tracep->fullQData(oldp+583,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullBit(oldp+585,(vlSelf->top__DOT__dataValid_o));
        tracep->fullBit(oldp+586,(vlSelf->top__DOT__lsAxiRdDataVAlid));
        tracep->fullBit(oldp+587,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+588,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+589,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+591,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullCData(oldp+592,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullCData(oldp+593,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+594,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+595,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
        tracep->fullCData(oldp+596,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+597,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+598,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullBit(oldp+599,(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk));
        tracep->fullCData(oldp+600,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+601,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+602,(vlSelf->top__DOT__axi_ls_u__DOT__w_state_next),2);
        tracep->fullCData(oldp+603,(vlSelf->top__DOT__axi_ls_u__DOT__r_state_next),2);
        tracep->fullWData(oldp+604,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullQData(oldp+614,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+616,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+618,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+620,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+622,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+624,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+626,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+628,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+630,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+632,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+634,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+636,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+638,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+640,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+642,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+644,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+646,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+648,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+650,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+652,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+654,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+656,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+658,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+660,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+662,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+664,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+666,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+668,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+670,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+672,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+674,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+676,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+678,(vlSelf->top__DOT__Dcache_u__DOT__randomBit));
        tracep->fullCData(oldp+679,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? 0U : 3U)),3);
        tracep->fullCData(oldp+680,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? 0U : 3U)),8);
        tracep->fullBit(oldp+681,(vlSelf->top__DOT__DcacheRdValid));
        tracep->fullQData(oldp+682,(vlSelf->top__DOT__DcacheRdAddr),64);
        tracep->fullQData(oldp+684,(vlSelf->top__DOT__DcacheWrAddr),64);
        tracep->fullCData(oldp+686,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
        tracep->fullBit(oldp+687,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
        tracep->fullBit(oldp+688,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
        tracep->fullBit(oldp+689,(vlSelf->top__DOT__Dcache_u__DOT__uncached));
        tracep->fullBit(oldp+690,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+691,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+692,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+693,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+694,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+695,((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+696,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
        tracep->fullBit(oldp+697,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
        tracep->fullBit(oldp+698,(vlSelf->clk));
        tracep->fullBit(oldp+699,(vlSelf->rst_n));
        tracep->fullQData(oldp+700,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+702,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+704,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+705,(vlSelf->regA0),64);
        tracep->fullBit(oldp+707,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+708,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+709,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+710,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+712,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+713,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+714,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+715,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+716,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+717,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+718,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+719,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+720,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+721,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+722,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+723,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+724,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+725,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+727,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+728,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+729,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+730,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+731,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+732,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+734,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+735,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+736,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+737,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+738,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+739,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+740,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+741,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+742,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+743,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+744,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+745,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+746,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+748,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+749,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+750,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+751,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+752,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+753,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+754,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+755,(vlSelf->axi_b_user_i));
        tracep->fullCData(oldp+756,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                          ? 3U : ((6U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                   ? 0U
                                                   : 3U))
                                      : 0U)),8);
        tracep->fullCData(oldp+757,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? (0xffU & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__lenthReg))
                                      : 0U)),8);
        tracep->fullCData(oldp+758,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                          ? 0U : 3U)
                                      : 0U)),3);
        tracep->fullQData(oldp+759,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? vlSelf->top__DOT__ls_axi_w_data_o
                                      : 0ULL)),64);
        tracep->fullBit(oldp+761,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrLast))
                                    : 0U)));
        tracep->fullBit(oldp+762,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? 0U
                                    : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullCData(oldp+763,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0U : (3U & 
                                              ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                                : (IData)(vlSelf->axi_r_resp_i))))),2);
        tracep->fullBit(oldp+764,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)
                                    : (IData)(vlSelf->axi_aw_ready_i))));
        tracep->fullBit(oldp+765,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid)
                                    : (IData)(vlSelf->axi_b_valid_i))));
        tracep->fullCData(oldp+766,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp)
                                      : (IData)(vlSelf->axi_b_resp_i))),2);
        tracep->fullCData(oldp+767,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                    >> 0x1dU)))
                                      ? 1U : (IData)(vlSelf->axi_b_id_i))),4);
        tracep->fullBit(oldp+768,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->top__DOT__axi_mmio_b_user_i)
                                    : (IData)(vlSelf->axi_b_user_i))));
        tracep->fullBit(oldp+769,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? (1U 
                                                   & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                    : 0U)));
        tracep->fullCData(oldp+770,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? (3U & ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1dU)))
                                                ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                                : (IData)(vlSelf->axi_r_resp_i)))
                                      : 0U)),2);
        tracep->fullBit(oldp+771,((1U & (~ ((((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                              | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                             | (IData)(vlSelf->top__DOT__ls_not_ok)) 
                                            | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))))));
        tracep->fullBit(oldp+772,((1U & (~ (((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                             | (IData)(vlSelf->top__DOT__ls_not_ok)) 
                                            | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))))));
        tracep->fullQData(oldp+773,(((((((((- (QData)((IData)(
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
        tracep->fullBit(oldp+775,((((((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullWData(oldp+776,(__Vtemp355),256);
        tracep->fullCData(oldp+784,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                      ? 3U : ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                               ? 0U
                                               : 3U))),8);
        tracep->fullCData(oldp+785,(((1U & (IData)(
                                                   (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                    >> 0x1dU)))
                                      ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                      : (IData)(vlSelf->axi_r_resp_i))),2);
        tracep->fullBit(oldp+786,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1dU)))
                                    ? (IData)(vlSelf->top__DOT__axi_mmio_r_user_i)
                                    : (IData)(vlSelf->axi_r_user_i))));
        tracep->fullBit(oldp+787,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->fullBit(oldp+788,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->fullIData(oldp+789,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 0xbU)))
                                          : 0U) : 0U)),21);
        tracep->fullIData(oldp+790,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? 0U : (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 0xbU))))
                                      : 0U)),21);
        tracep->fullQData(oldp+791,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullIData(oldp+795,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullCData(oldp+796,(((4U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullBit(oldp+797,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullBit(oldp+798,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullIData(oldp+799,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullIData(oldp+800,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+801,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullBit(oldp+805,(((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullBit(oldp+806,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk)))));
        tracep->fullBit(oldp+807,((1U & (~ ((((((((0U 
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
        tracep->fullBit(oldp+808,(((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                         | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                            & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                        & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                       | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                      | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                     | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))));
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
                                            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))))));
        tracep->fullBit(oldp+810,(((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                         | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                            & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                        & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                       | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                      | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                     | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))));
        tracep->fullBit(oldp+811,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__axi_mmio_ar_valid_o)) 
                                   & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+812,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                   & (IData)(vlSelf->top__DOT__axi_mmio_w_valid_o))));
        tracep->fullIData(oldp+813,(0x40U),32);
        tracep->fullIData(oldp+814,(4U),32);
        tracep->fullIData(oldp+815,(8U),32);
        tracep->fullIData(oldp+816,(1U),32);
        tracep->fullCData(oldp+817,(0U),3);
        tracep->fullBit(oldp+818,(0U));
        tracep->fullBit(oldp+819,(0U));
        tracep->fullCData(oldp+820,(0U),4);
        tracep->fullBit(oldp+821,(vlSelf->top__DOT__axi_mmio_r_last_i));
        tracep->fullCData(oldp+822,(vlSelf->top__DOT__axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+823,(vlSelf->top__DOT__axi_mmio_r_user_i));
        tracep->fullCData(oldp+824,(vlSelf->top__DOT__axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+825,(vlSelf->top__DOT__axi_mmio_b_user_i));
        tracep->fullCData(oldp+826,(3U),8);
        tracep->fullCData(oldp+827,(3U),3);
        tracep->fullCData(oldp+828,(1U),2);
        tracep->fullCData(oldp+829,(2U),4);
        tracep->fullCData(oldp+830,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+831,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+832,(1U),4);
        tracep->fullCData(oldp+833,(0xfU),4);
        tracep->fullCData(oldp+834,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+835,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+836,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+838,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+839,(1U));
        tracep->fullBit(oldp+840,(vlSelf->top__DOT__ls_sram_rd_data_valid));
        tracep->fullBit(oldp+841,(vlSelf->top__DOT__ls_sram_wr_data_ok));
        tracep->fullCData(oldp+842,(vlSelf->top__DOT__fetchLenth),8);
        tracep->fullBit(oldp+843,(0U));
        tracep->fullQData(oldp+844,(0ULL),64);
        tracep->fullCData(oldp+846,(0U),8);
        tracep->fullCData(oldp+847,(1U),3);
        tracep->fullCData(oldp+848,(2U),3);
        tracep->fullCData(oldp+849,(7U),3);
        tracep->fullBit(oldp+850,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+851,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullIData(oldp+852,(0x80U),32);
        tracep->fullIData(oldp+853,(6U),32);
        __Vtemp356[0U] = 0U;
        __Vtemp356[1U] = 0U;
        __Vtemp356[2U] = 0U;
        __Vtemp356[3U] = 0U;
        tracep->fullWData(oldp+854,(__Vtemp356),128);
        __Vtemp357[0U] = 0xffffffffU;
        __Vtemp357[1U] = 0xffffffffU;
        __Vtemp357[2U] = 0xffffffffU;
        __Vtemp357[3U] = 0xffffffffU;
        tracep->fullWData(oldp+858,(__Vtemp357),128);
        tracep->fullCData(oldp+862,(0U),2);
        tracep->fullCData(oldp+863,(3U),2);
        tracep->fullCData(oldp+864,(2U),2);
        tracep->fullIData(oldp+865,(3U),32);
        tracep->fullIData(oldp+866,(0x60U),32);
        tracep->fullIData(oldp+867,(0U),32);
        tracep->fullIData(oldp+868,(0x13bU),32);
        tracep->fullBit(oldp+869,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+870,(0xe2U),32);
        tracep->fullCData(oldp+871,(6U),3);
        tracep->fullBit(oldp+872,(vlSelf->top__DOT__Dcache_u__DOT__validWay1_q));
        tracep->fullBit(oldp+873,(vlSelf->top__DOT__Dcache_u__DOT__validWay2_q));
        tracep->fullBit(oldp+874,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullIData(oldp+875,(0x121U),32);
        tracep->fullIData(oldp+876,(0x40U),32);
        tracep->fullIData(oldp+877,(3U),32);
        tracep->fullIData(oldp+878,(1U),32);
        tracep->fullQData(oldp+879,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+881,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index),32);
    }
}
