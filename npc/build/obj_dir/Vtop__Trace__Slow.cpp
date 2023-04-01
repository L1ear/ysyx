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
        tracep->declBit(c+915,"clk", false,-1);
        tracep->declBit(c+916,"rst_n", false,-1);
        tracep->declQuad(c+917,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+919,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+921,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+922,"regA0", false,-1, 63,0);
        tracep->declBit(c+924,"stall_n_diff", false,-1);
        tracep->declBit(c+925,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+926,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+927,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+929,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+930,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+931,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+932,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+933,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+934,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+935,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+936,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+937,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+938,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+939,"axi_r_ready_o", false,-1);
        tracep->declBit(c+940,"axi_r_valid_i", false,-1);
        tracep->declBus(c+941,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+942,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+944,"axi_r_last_i", false,-1);
        tracep->declBus(c+945,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+946,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+947,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+948,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+949,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+951,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+952,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+953,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+954,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+955,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+956,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+957,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+958,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+959,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+960,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+961,"axi_w_ready_i", false,-1);
        tracep->declBit(c+962,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+963,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+965,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+966,"axi_w_last_o", false,-1);
        tracep->declBus(c+967,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+968,"axi_b_ready_o", false,-1);
        tracep->declBit(c+969,"axi_b_valid_i", false,-1);
        tracep->declBus(c+970,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+971,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+972,"axi_b_user_i", false,-1, 0,0);
        tracep->declBus(c+1007,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1007,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1007,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1007,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1008,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1009,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1010,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+915,"top clk", false,-1);
        tracep->declBit(c+916,"top rst_n", false,-1);
        tracep->declQuad(c+917,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+919,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+921,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+922,"top regA0", false,-1, 63,0);
        tracep->declBit(c+924,"top stall_n_diff", false,-1);
        tracep->declBit(c+925,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+926,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+927,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+929,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+930,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+931,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+932,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+933,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+934,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+935,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+936,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+937,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+938,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+939,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+940,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+941,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+942,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+944,"top axi_r_last_i", false,-1);
        tracep->declBus(c+945,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+946,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+947,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+948,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+949,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+951,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+952,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+953,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+954,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+955,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+956,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+957,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+958,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+959,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+960,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+961,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+962,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+963,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+965,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+966,"top axi_w_last_o", false,-1);
        tracep->declBus(c+967,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+968,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+969,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+970,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+971,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+972,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+235,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+386,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+387,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1011,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+196,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1012,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+197,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+389,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+390,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1013,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+391,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1014,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+198,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+392,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+236,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+237,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+238,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1015,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+1016,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1017,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+240,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+393,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+241,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1011,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+243,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1012,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+363,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+244,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+245,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1013,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+246,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1014,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1014,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+247,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+394,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+364,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+248,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+366,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+1012,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+395,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+249,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+250,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1018,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1019,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1,"top instr_fetching", false,-1);
        tracep->declBit(c+973,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+2,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+3,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1011,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1014,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1012,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+396,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+397,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1020,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1013,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+1021,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1014,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1022,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+5,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+803,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+974,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+804,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+806,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+807,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1023,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+975,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+398,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+251,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1011,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1024,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1012,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+399,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+253,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1020,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1013,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+1025,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1014,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1014,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+808,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+400,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+401,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+254,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+403,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+1012,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+404,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+976,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+977,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+978,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+979,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+980,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+6,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+7,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1011,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1024,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1012,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+399,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+199,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1020,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1013,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+1021,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1014,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1026,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+9,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+809,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+981,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+810,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+812,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+807,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1027,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+1028,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+405,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+407,"top is_jump", false,-1);
        tracep->declQuad(c+408,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+781,"top pc_stall_n", false,-1);
        tracep->declBit(c+813,"top if_stall_n", false,-1);
        tracep->declBit(c+410,"top if_instr_valid", false,-1);
        tracep->declBit(c+1030,"top sram_data_valid", false,-1);
        tracep->declQuad(c+411,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+413,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+1031,"top sram_ren", false,-1);
        tracep->declBit(c+415,"top sram_addr_valid", false,-1);
        tracep->declBit(c+416,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+417,"top cacheDataOk_i", false,-1);
        tracep->declBus(c+418,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+419,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+421,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+789,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+791,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+422,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+424,"top src1sel_id", false,-1);
        tracep->declBus(c+425,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+426,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+427,"top is_brc_id", false,-1);
        tracep->declBit(c+428,"top is_jal_id", false,-1);
        tracep->declBit(c+429,"top is_jalr_id", false,-1);
        tracep->declBit(c+430,"top wben_id", false,-1);
        tracep->declBus(c+431,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+432,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+782,"top id_stall_n", false,-1);
        tracep->declBit(c+433,"top DivEn_id", false,-1);
        tracep->declBus(c+434,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+435,"top in_trap_id", false,-1);
        tracep->declBit(c+436,"top out_trap_id", false,-1);
        tracep->declBit(c+437,"top trap_id", false,-1);
        tracep->declBit(c+438,"top ld_use_hazard", false,-1);
        tracep->declBit(c+439,"top id_flush", false,-1);
        tracep->declQuad(c+440,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+442,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+443,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+445,"top src1sel_ex", false,-1);
        tracep->declBus(c+446,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+447,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+449,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+451,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+453,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+455,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+456,"top is_brc_ex", false,-1);
        tracep->declBit(c+457,"top is_jal_ex", false,-1);
        tracep->declBit(c+458,"top is_jalr_ex", false,-1);
        tracep->declBit(c+459,"top wben_ex", false,-1);
        tracep->declBit(c+460,"top DivEn_ex", false,-1);
        tracep->declBus(c+461,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+462,"top trap_ex", false,-1);
        tracep->declBit(c+783,"top ex_stall_n", false,-1);
        tracep->declQuad(c+10,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+463,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+464,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+465,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+466,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+467,"top ex_flush", false,-1);
        tracep->declBit(c+468,"top rden_ls", false,-1);
        tracep->declBit(c+469,"top wren_ls", false,-1);
        tracep->declBit(c+784,"top ls_addr_ok_i", false,-1);
        tracep->declBit(c+814,"top ex_not_ok", false,-1);
        tracep->declQuad(c+12,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+14,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+16,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+18,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+982,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+19,"top wben_ls", false,-1);
        tracep->declQuad(c+20,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+22,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+26,"top trap_ls", false,-1);
        tracep->declBit(c+815,"top ls_stall_n", false,-1);
        tracep->declBit(c+816,"top ls_not_ok", false,-1);
        tracep->declQuad(c+16,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+200,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+470,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+1032,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+1033,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+817,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+471,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+472,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+474,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+476,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+478,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+479,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+481,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+482,"top wben_wb", false,-1);
        tracep->declQuad(c+483,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+815,"top wb_stall_n", false,-1);
        tracep->declQuad(c+485,"top clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+1011,"top clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+487,"top clint_axi_arvalid", false,-1);
        tracep->declBit(c+255,"top clint_axi_arready", false,-1);
        tracep->declBus(c+488,"top clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+30,"top clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+256,"top clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+257,"top clint_axi_rvalid", false,-1);
        tracep->declBit(c+489,"top clint_axi_rready", false,-1);
        tracep->declBus(c+258,"top clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+259,"top clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+1011,"top clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+490,"top clint_axi_awvalid", false,-1);
        tracep->declBit(c+261,"top clint_axi_awready", false,-1);
        tracep->declQuad(c+491,"top clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+262,"top clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+493,"top clint_axi_wvalid", false,-1);
        tracep->declBit(c+263,"top clint_axi_wready", false,-1);
        tracep->declBus(c+256,"top clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+264,"top clint_axi_bvalid", false,-1);
        tracep->declBit(c+494,"top clint_axi_bready", false,-1);
        tracep->declBit(c+495,"top rw_valid_i", false,-1);
        tracep->declBit(c+32,"top rw_ready_o", false,-1);
        tracep->declBus(c+396,"top fetchLenth", false,-1, 7,0);
        tracep->declBit(c+806,"top rdLast_o", false,-1);
        tracep->declBus(c+202,"top rw_addr_i", false,-1, 31,0);
        tracep->declQuad(c+804,"top data_read_o", false,-1, 63,0);
        tracep->declBit(c+819,"top dataValid_o", false,-1);
        tracep->declBit(c+496,"top fence_id", false,-1);
        tracep->declBit(c+497,"top fence_ex", false,-1);
        tracep->declBit(c+203,"top ld_csr_hazard", false,-1);
        tracep->declBit(c+33,"top ls_flush", false,-1);
        tracep->declBit(c+33,"top in_intr_ls", false,-1);
        tracep->declBit(c+816,"top dataNotOk", false,-1);
        tracep->declBit(c+34,"top fence_ls", false,-1);
        tracep->declBit(c+498,"top clear_Icache", false,-1);
        tracep->declBit(c+499,"top DcacheRdValid", false,-1);
        tracep->declBit(c+500,"top DcacheWrValid", false,-1);
        tracep->declBit(c+35,"top lsAxiRdReady", false,-1);
        tracep->declBus(c+399,"top lsFetchLenth", false,-1, 7,0);
        tracep->declBit(c+812,"top lsRdLast", false,-1);
        tracep->declQuad(c+501,"top DcacheRdAddr", false,-1, 63,0);
        tracep->declQuad(c+503,"top DcacheWrAddr", false,-1, 63,0);
        tracep->declQuad(c+810,"top lsAxiRdData", false,-1, 63,0);
        tracep->declBit(c+820,"top lsAxiRdDataVAlid", false,-1);
        tracep->declBit(c+505,"top lsAxiWrReady", false,-1);
        tracep->declArray(c+367,"top lsAxiWrData", false,-1, 255,0);
        tracep->declBus(c+399,"top lsStoreLenth", false,-1, 7,0);
        tracep->declBus(c+506,"top lsStoreMask", false,-1, 7,0);
        tracep->declBus(c+507,"top lsStoreSize", false,-1, 2,0);
        tracep->declBus(c+199,"top lsLoadSize", false,-1, 2,0);
        tracep->declBus(c+1007,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1007,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1007,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1007,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1008,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1009,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1010,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+973,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+2,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+3,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+1011,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+1014,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+1012,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+396,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+397,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+1020,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+1013,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+1021,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+1014,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+1022,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+5,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+803,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+974,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+804,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+806,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+807,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+1023,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+975,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+398,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+251,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+1011,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+1024,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+1012,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+399,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+253,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+1020,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+1013,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+1025,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+1014,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+1014,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+808,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+400,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+401,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+254,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+403,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+1012,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+404,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+976,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+977,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+978,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+979,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+980,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+6,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+7,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+1011,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+1024,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+1012,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+399,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+199,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+1020,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+1013,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+1021,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+1014,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+1026,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+9,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+809,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+981,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+810,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+812,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+807,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+1027,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+947,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+948,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+949,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+951,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+952,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+953,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+954,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+955,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+956,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+957,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+958,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+959,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+960,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+961,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+962,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+963,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+965,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+966,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+967,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+968,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+969,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+970,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+971,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+972,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+925,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+926,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+927,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+929,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+930,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+931,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+932,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+933,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+934,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+935,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+936,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+937,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+938,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+939,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+940,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+941,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+942,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+944,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+945,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+946,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+240,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+393,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+241,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1011,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+243,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1012,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+363,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+244,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+245,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1013,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+246,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1014,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1014,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+247,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+394,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+364,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+248,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+366,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+1012,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+395,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+249,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+250,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1024,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1019,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+235,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+386,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+387,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1011,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+196,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1012,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+197,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+389,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+390,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1013,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+391,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1014,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+198,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+392,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+236,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+237,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+238,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+236,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+1024,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1017,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+485,"top axi_crossbar_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+1011,"top axi_crossbar_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+487,"top axi_crossbar_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+255,"top axi_crossbar_u clint_axi_arready", false,-1);
        tracep->declBus(c+488,"top axi_crossbar_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+30,"top axi_crossbar_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+256,"top axi_crossbar_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+257,"top axi_crossbar_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+489,"top axi_crossbar_u clint_axi_rready", false,-1);
        tracep->declBus(c+258,"top axi_crossbar_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+259,"top axi_crossbar_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+1011,"top axi_crossbar_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+490,"top axi_crossbar_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+261,"top axi_crossbar_u clint_axi_awready", false,-1);
        tracep->declQuad(c+491,"top axi_crossbar_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+262,"top axi_crossbar_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+493,"top axi_crossbar_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+263,"top axi_crossbar_u clint_axi_wready", false,-1);
        tracep->declBus(c+256,"top axi_crossbar_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+264,"top axi_crossbar_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+494,"top axi_crossbar_u clint_axi_bready", false,-1);
        tracep->declBit(c+975,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+398,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+251,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+1011,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+1024,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+1012,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+399,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+253,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+1020,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+1013,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+1025,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+1014,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+1014,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+808,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+400,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+401,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+254,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+403,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+1012,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+404,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+976,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+977,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+978,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+979,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+821,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+36,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+508,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+1011,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+37,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+1012,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+204,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+510,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+1020,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+1034,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+1021,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+1014,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+38,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+511,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+822,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+984,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+823,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+825,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+807,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+985,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+512,"top axi_crossbar_u clint_r_trans", false,-1);
        tracep->declBit(c+265,"top axi_crossbar_u clint_w_trans", false,-1);
        tracep->declBit(c+513,"top axi_crossbar_u perip_r_trans", false,-1);
        tracep->declBit(c+266,"top axi_crossbar_u perip_w_trans", false,-1);
        tracep->declBit(c+915,"top IF_u clk", false,-1);
        tracep->declBit(c+916,"top IF_u rst_n", false,-1);
        tracep->declBit(c+407,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+408,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+22,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+435,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+436,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+813,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+405,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+418,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+410,"top IF_u if_instr_valid", false,-1);
        tracep->declBit(c+33,"top IF_u in_intr_ls", false,-1);
        tracep->declQuad(c+411,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+1030,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+416,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+417,"top IF_u cacheDataOk_i", false,-1);
        tracep->declQuad(c+413,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+1031,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+415,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+413,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+915,"top cache_dut clk", false,-1);
        tracep->declBit(c+916,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+514,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+415,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+1013,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+1035,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+1037,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+813,"top cache_dut stall_n", false,-1);
        tracep->declBit(c+416,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+515,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+417,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+411,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+498,"top cache_dut clrValid", false,-1);
        tracep->declBit(c+495,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+32,"top cache_dut axiRdReady", false,-1);
        tracep->declBus(c+396,"top cache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+806,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+202,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+804,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBit(c+819,"top cache_dut dataValid_i", false,-1);
        tracep->declBus(c+1011,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+1038,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+1039,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+1040,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+1041,"top cache_dut replace", false,-1, 2,0);
        tracep->declBus(c+1042,"top cache_dut unCacheOp", false,-1, 2,0);
        tracep->declBus(c+516,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+826,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+517,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+39,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+40,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+267,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+271,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+275,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+279,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+518,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+522,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+518,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+522,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+526,"top cache_dut wenWay1", false,-1);
        tracep->declBit(c+527,"top cache_dut wenWay2", false,-1);
        tracep->declBit(c+528,"top cache_dut uncached", false,-1);
        tracep->declBit(c+41,"top cache_dut uncachedOk", false,-1);
        tracep->declBit(c+529,"top cache_dut diffAddr", false,-1);
        tracep->declBit(c+530,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+42,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+44,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+45,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+46,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+47,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+49,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+51,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+52,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+986,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+987,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+988,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+989,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+53,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+54,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+1043,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+1044,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+531,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+283,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+291,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+990,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+992,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+532,"top cache_dut missEn", false,-1);
        tracep->declBit(c+533,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+55,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+299,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+57,"top cache_dut missFlag", false,-1);
        tracep->declBus(c+534,"top cache_dut rdCnt", false,-1, 1,0);
        tracep->declArray(c+535,"top cache_dut rdBuffer", false,-1, 255,0);
        tracep->declBit(c+543,"top cache_dut replaceEn", false,-1);
        tracep->declBus(c+1045,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+1007,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1046,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1045,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+267,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+915,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+544,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+545,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+1047,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+827,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+518,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+546,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+526,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+1051,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+1045,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+1007,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1046,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1045,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+271,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+915,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+544,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+545,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+1047,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+827,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+522,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+546,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+526,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+1051,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+1045,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+1007,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1046,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1045,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+275,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+915,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+547,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+548,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+1047,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+828,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+518,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+549,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+527,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+1051,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+1045,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+1007,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1046,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1045,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+279,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+915,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+547,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+548,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+1047,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+828,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+522,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+549,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+527,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+1051,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+1007,"top axi_icache_dut RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1007,"top axi_icache_dut RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1007,"top axi_icache_dut AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1007,"top axi_icache_dut AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1008,"top axi_icache_dut AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1009,"top axi_icache_dut AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1010,"top axi_icache_dut AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+915,"top axi_icache_dut clock", false,-1);
        tracep->declBit(c+916,"top axi_icache_dut reset", false,-1);
        tracep->declBit(c+495,"top axi_icache_dut rw_valid_i", false,-1);
        tracep->declBit(c+32,"top axi_icache_dut rw_ready_o", false,-1);
        tracep->declQuad(c+804,"top axi_icache_dut data_read_o", false,-1, 63,0);
        tracep->declQuad(c+205,"top axi_icache_dut rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+396,"top axi_icache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+806,"top axi_icache_dut rdLast_o", false,-1);
        tracep->declBit(c+819,"top axi_icache_dut dataValid_o", false,-1);
        tracep->declBit(c+1,"top axi_icache_dut instr_fetching", false,-1);
        tracep->declBit(c+973,"top axi_icache_dut axi_ar_ready_i", false,-1);
        tracep->declBit(c+2,"top axi_icache_dut axi_ar_valid_o", false,-1);
        tracep->declQuad(c+3,"top axi_icache_dut axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1011,"top axi_icache_dut axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1014,"top axi_icache_dut axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1012,"top axi_icache_dut axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+396,"top axi_icache_dut axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+397,"top axi_icache_dut axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1020,"top axi_icache_dut axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1013,"top axi_icache_dut axi_ar_lock_o", false,-1);
        tracep->declBus(c+1021,"top axi_icache_dut axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1014,"top axi_icache_dut axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1022,"top axi_icache_dut axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+5,"top axi_icache_dut axi_r_ready_o", false,-1);
        tracep->declBit(c+803,"top axi_icache_dut axi_r_valid_i", false,-1);
        tracep->declBus(c+974,"top axi_icache_dut axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+804,"top axi_icache_dut axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+806,"top axi_icache_dut axi_r_last_i", false,-1);
        tracep->declBus(c+807,"top axi_icache_dut axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1023,"top axi_icache_dut axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+1055,"top axi_icache_dut r_state_idle", false,-1, 1,0);
        tracep->declBus(c+1020,"top axi_icache_dut r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+1056,"top axi_icache_dut r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+1057,"top axi_icache_dut r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+58,"top axi_icache_dut r_state", false,-1, 1,0);
        tracep->declBus(c+829,"top axi_icache_dut r_state_next", false,-1, 1,0);
        tracep->declBit(c+2,"top axi_icache_dut ar_valid", false,-1);
        tracep->declBit(c+5,"top axi_icache_dut r_ready", false,-1);
        tracep->declQuad(c+3,"top axi_icache_dut addr_reg", false,-1, 63,0);
        tracep->declBus(c+1058,"top axi_icache_dut AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+1014,"top axi_icache_dut axi_id", false,-1, 3,0);
        tracep->declBus(c+1013,"top axi_icache_dut axi_user", false,-1, 0,0);
        tracep->declBus(c+396,"top axi_icache_dut axi_len", false,-1, 7,0);
        tracep->declBus(c+397,"top axi_icache_dut axi_size", false,-1, 2,0);
        tracep->declBit(c+915,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+916,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+405,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+418,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+782,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+439,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+419,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+421,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+550,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+552,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+1059,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1060,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+915,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+916,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+782,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+553,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+556,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+915,"top ID_u clk", false,-1);
        tracep->declBit(c+916,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+419,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+472,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+478,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+421,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+479,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+481,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+482,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+791,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+789,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+422,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+424,"top ID_u src1sel", false,-1);
        tracep->declBus(c+425,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+426,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+429,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+428,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+427,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+430,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+431,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+432,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+922,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+433,"top ID_u DivEn", false,-1);
        tracep->declBus(c+434,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+437,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+435,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+436,"top ID_u out_trap_id", false,-1);
        tracep->declBit(c+496,"top ID_u fence_id", false,-1);
        tracep->declBus(c+559,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+422,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+791,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+789,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+419,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+421,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+431,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+432,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+559,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+424,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+425,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+426,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+429,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+428,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+427,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+430,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+433,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+434,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+437,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+435,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+436,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBit(c+496,"top ID_u decoder_u fence_id", false,-1);
        tracep->declBus(c+560,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+561,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+562,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+563,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+559,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+422,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+915,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+472,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+478,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+431,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+791,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+432,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+789,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+481,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+479,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+482,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+922,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+851+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+421,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+442,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBus(c+18,"top hazard_detect_u instr_ls_i", false,-1, 31,0);
        tracep->declBus(c+478,"top hazard_detect_u instr_wb_i", false,-1, 31,0);
        tracep->declBit(c+438,"top hazard_detect_u ld_use_hazard", false,-1);
        tracep->declBit(c+203,"top hazard_detect_u ld_csr_hazard", false,-1);
        tracep->declBit(c+564,"top hazard_detect_u wb_is_load", false,-1);
        tracep->declBit(c+59,"top hazard_detect_u ls_is_csropi", false,-1);
        tracep->declBit(c+915,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+916,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+783,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+467,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+419,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+421,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+422,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+789,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+791,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+426,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+429,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+428,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+427,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+424,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+425,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+430,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+431,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+432,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+433,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+434,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+437,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declBit(c+496,"top EX_reg_u fence_ex_reg_i", false,-1);
        tracep->declQuad(c+440,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+442,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+447,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+449,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+451,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+455,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+458,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+457,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+456,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+445,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+446,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+459,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+465,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+466,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+460,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+461,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+462,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declBit(c+497,"top EX_reg_u fence_ex_reg_o", false,-1);
        tracep->declQuad(c+565,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+567,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+568,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+569,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+570,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+571,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+572,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBit(c+573,"top EX_reg_u fence_ex_reg", false,-1);
        tracep->declBus(c+1061,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1060,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+915,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+916,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+783,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+793,"top EX_reg_u ex_reg i_din", false,-1, 315,0);
        tracep->declArray(c+574,"top EX_reg_u ex_reg o_dout", false,-1, 315,0);
        tracep->declBit(c+915,"top ex_stage_u clk", false,-1);
        tracep->declBit(c+916,"top ex_stage_u rst_n", false,-1);
        tracep->declBus(c+455,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+449,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+447,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+451,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+440,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+442,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+458,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+457,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+456,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+445,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+446,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+463,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+464,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+16,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+479,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+10,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+460,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+461,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declBit(c+467,"top ex_stage_u flush_ex_i", false,-1);
        tracep->declQuad(c+443,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+408,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+453,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+407,"top ex_stage_u is_jump_o", false,-1);
        tracep->declBit(c+814,"top ex_stage_u exNotOk", false,-1);
        tracep->declBit(c+468,"top ex_stage_u rden_ls", false,-1);
        tracep->declBit(c+469,"top ex_stage_u wren_ls", false,-1);
        tracep->declBit(c+784,"top ex_stage_u ls_addr_ok_i", false,-1);
        tracep->declQuad(c+584,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+586,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+588,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+453,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBit(c+1062,"top ex_stage_u aluNotOk", false,-1);
        tracep->declBit(c+915,"top ex_stage_u u_ALU clk", false,-1);
        tracep->declBit(c+916,"top ex_stage_u u_ALU rst_n", false,-1);
        tracep->declBus(c+455,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+584,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+586,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+460,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+461,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declBit(c+467,"top ex_stage_u u_ALU flush_alu", false,-1);
        tracep->declQuad(c+443,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+590,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+591,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declBit(c+1062,"top ex_stage_u u_ALU aluNotOk", false,-1);
        tracep->declQuad(c+592,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+594,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+595,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+597,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+599,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+599,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+600,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+601,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+602,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+604,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+605,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+606,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+608,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+610,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+60,"top ex_stage_u u_ALU src1Reg", false,-1, 63,0);
        tracep->declQuad(c+62,"top ex_stage_u u_ALU src2Reg", false,-1, 63,0);
        tracep->declBit(c+612,"top ex_stage_u u_ALU diffIn", false,-1);
        tracep->declBit(c+613,"top ex_stage_u u_ALU mul_valid", false,-1);
        tracep->declBit(c+994,"top ex_stage_u u_ALU out_valid", false,-1);
        tracep->declBit(c+207,"top ex_stage_u u_ALU DivOut", false,-1);
        tracep->declQuad(c+584,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+595,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+594,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+597,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+604,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+591,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+605,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+614,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+601,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+599,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+600,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+594,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+599,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+615,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+584,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+616,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+600,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+599,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+602,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+617,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+619,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+621,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+623,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+625,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+627,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+629,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declBit(c+915,"top ex_stage_u u_ALU multiplier clk", false,-1);
        tracep->declBit(c+916,"top ex_stage_u u_ALU multiplier rst_n", false,-1);
        tracep->declBit(c+613,"top ex_stage_u u_ALU multiplier mul_valid", false,-1);
        tracep->declBit(c+467,"top ex_stage_u u_ALU multiplier flush", false,-1);
        tracep->declBus(c+631,"top ex_stage_u u_ALU multiplier mul_type", false,-1, 1,0);
        tracep->declQuad(c+584,"top ex_stage_u u_ALU multiplier multiplicand", false,-1, 63,0);
        tracep->declQuad(c+586,"top ex_stage_u u_ALU multiplier multiplier", false,-1, 63,0);
        tracep->declBit(c+994,"top ex_stage_u u_ALU multiplier out_valid", false,-1);
        tracep->declQuad(c+208,"top ex_stage_u u_ALU multiplier result", false,-1, 63,0);
        tracep->declBit(c+632,"top ex_stage_u u_ALU multiplier stateReg", false,-1);
        tracep->declBit(c+633,"top ex_stage_u u_ALU multiplier resultValidReg_d", false,-1);
        tracep->declBit(c+995,"top ex_stage_u u_ALU multiplier resultValidReg_q", false,-1);
        tracep->declBus(c+634,"top ex_stage_u u_ALU multiplier mul_signed", false,-1, 1,0);
        tracep->declBit(c+635,"top ex_stage_u u_ALU multiplier interValid", false,-1);
        tracep->declBit(c+636,"top ex_stage_u u_ALU multiplier mul_ready", false,-1);
        tracep->declBit(c+64,"top ex_stage_u u_ALU multiplier result_hi", false,-1);
        tracep->declBit(c+65,"top ex_stage_u u_ALU multiplier result_lo", false,-1);
        tracep->declBus(c+1010,"top ex_stage_u u_ALU multiplier resultValidReg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1060,"top ex_stage_u u_ALU multiplier resultValidReg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+915,"top ex_stage_u u_ALU multiplier resultValidReg i_clk", false,-1);
        tracep->declBit(c+830,"top ex_stage_u u_ALU multiplier resultValidReg i_rst_n", false,-1);
        tracep->declBit(c+1031,"top ex_stage_u u_ALU multiplier resultValidReg i_wen", false,-1);
        tracep->declBus(c+633,"top ex_stage_u u_ALU multiplier resultValidReg i_din", false,-1, 0,0);
        tracep->declBus(c+995,"top ex_stage_u u_ALU multiplier resultValidReg o_dout", false,-1, 0,0);
        tracep->declBit(c+915,"top ex_stage_u u_ALU multiplier mul64_u clk", false,-1);
        tracep->declBit(c+916,"top ex_stage_u u_ALU multiplier mul64_u rst_n", false,-1);
        tracep->declBit(c+613,"top ex_stage_u u_ALU multiplier mul64_u mul_valid", false,-1);
        tracep->declBit(c+467,"top ex_stage_u u_ALU multiplier mul64_u flush", false,-1);
        tracep->declBit(c+1013,"top ex_stage_u u_ALU multiplier mul64_u mulw", false,-1);
        tracep->declBus(c+634,"top ex_stage_u u_ALU multiplier mul64_u mul_signed", false,-1, 1,0);
        tracep->declQuad(c+584,"top ex_stage_u u_ALU multiplier mul64_u multiplicand", false,-1, 63,0);
        tracep->declQuad(c+586,"top ex_stage_u u_ALU multiplier mul64_u multiplier", false,-1, 63,0);
        tracep->declBit(c+636,"top ex_stage_u u_ALU multiplier mul64_u mul_ready", false,-1);
        tracep->declBit(c+635,"top ex_stage_u u_ALU multiplier mul64_u out_valid", false,-1);
        tracep->declQuad(c+66,"top ex_stage_u u_ALU multiplier mul64_u result_hi", false,-1, 63,0);
        tracep->declQuad(c+68,"top ex_stage_u u_ALU multiplier mul64_u result_lo", false,-1, 63,0);
        tracep->declBit(c+637,"top ex_stage_u u_ALU multiplier mul64_u src1_is_signed", false,-1);
        tracep->declBit(c+638,"top ex_stage_u u_ALU multiplier mul64_u src2_is_signed", false,-1);
        tracep->declQuad(c+639,"top ex_stage_u u_ALU multiplier mul64_u mul_lo_src1", false,-1, 32,0);
        tracep->declQuad(c+641,"top ex_stage_u u_ALU multiplier mul64_u mul_hi_src1", false,-1, 32,0);
        tracep->declQuad(c+643,"top ex_stage_u u_ALU multiplier mul64_u mul_lo_src2", false,-1, 32,0);
        tracep->declQuad(c+645,"top ex_stage_u u_ALU multiplier mul64_u mul_hi_src2", false,-1, 32,0);
        tracep->declArray(c+647,"top ex_stage_u u_ALU multiplier mul64_u mul_ll_rslt", false,-1, 65,0);
        tracep->declArray(c+650,"top ex_stage_u u_ALU multiplier mul64_u mul_lh_rslt", false,-1, 65,0);
        tracep->declArray(c+653,"top ex_stage_u u_ALU multiplier mul64_u mul_hl_rslt", false,-1, 65,0);
        tracep->declArray(c+656,"top ex_stage_u u_ALU multiplier mul64_u mul_hh_rslt", false,-1, 65,0);
        tracep->declArray(c+70,"top ex_stage_u u_ALU multiplier mul64_u mul_ll_rslt_ex2", false,-1, 65,0);
        tracep->declArray(c+73,"top ex_stage_u u_ALU multiplier mul64_u mul_lh_rslt_ex2", false,-1, 65,0);
        tracep->declArray(c+76,"top ex_stage_u u_ALU multiplier mul64_u mul_hl_rslt_ex2", false,-1, 65,0);
        tracep->declArray(c+79,"top ex_stage_u u_ALU multiplier mul64_u mul_hh_rslt_ex2", false,-1, 65,0);
        tracep->declArray(c+82,"top ex_stage_u u_ALU multiplier mul64_u mul_ll_rslt_ext_ex2", false,-1, 129,0);
        tracep->declArray(c+87,"top ex_stage_u u_ALU multiplier mul64_u mul_lh_rslt_ext_ex2", false,-1, 129,0);
        tracep->declArray(c+92,"top ex_stage_u u_ALU multiplier mul64_u mul_hl_rslt_ext_ex2", false,-1, 129,0);
        tracep->declArray(c+97,"top ex_stage_u u_ALU multiplier mul64_u mul_hh_rslt_ext_ex2", false,-1, 129,0);
        tracep->declArray(c+102,"top ex_stage_u u_ALU multiplier mul64_u mul_rslt_stg2_ex2", false,-1, 129,0);
        tracep->declBit(c+659,"top ex_stage_u u_ALU multiplier mul64_u mul_stg1_vld_set", false,-1);
        tracep->declBit(c+660,"top ex_stage_u u_ALU multiplier mul64_u mul_stg1_vld_clr", false,-1);
        tracep->declBit(c+661,"top ex_stage_u u_ALU multiplier mul64_u mul_stg1_vld_d", false,-1);
        tracep->declBit(c+635,"top ex_stage_u u_ALU multiplier mul64_u mul_stg1_vld_q", false,-1);
        tracep->declBit(c+635,"top ex_stage_u u_ALU multiplier mul64_u int_reg_wr_ready_fin", false,-1);
        tracep->declBus(c+1063,"top ex_stage_u u_ALU multiplier mul64_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1060,"top ex_stage_u u_ALU multiplier mul64_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+915,"top ex_stage_u u_ALU multiplier mul64_u id_reg i_clk", false,-1);
        tracep->declBit(c+916,"top ex_stage_u u_ALU multiplier mul64_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+659,"top ex_stage_u u_ALU multiplier mul64_u id_reg i_wen", false,-1);
        tracep->declArray(c+662,"top ex_stage_u u_ALU multiplier mul64_u id_reg i_din", false,-1, 263,0);
        tracep->declArray(c+107,"top ex_stage_u u_ALU multiplier mul64_u id_reg o_dout", false,-1, 263,0);
        tracep->declQuad(c+588,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+453,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+458,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+457,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+456,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+671,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+451,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+440,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+408,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+407,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+672,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+674,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+1064,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+676,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+677,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+678,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+679,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+681,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+683,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+915,"top forwarding_u clk", false,-1);
        tracep->declBit(c+916,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+465,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+466,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+116,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+481,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+19,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+482,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+479,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+815,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+463,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+464,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+10,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+10,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+117,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+118,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+210,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+684,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+211,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+212,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+685,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+213,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+915,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+916,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+440,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+453,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+442,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+443,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+459,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+462,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+815,"top L_S_reg_u stall_n", false,-1);
        tracep->declBit(c+33,"top L_S_reg_u flush_i", false,-1);
        tracep->declBit(c+497,"top L_S_reg_u fence_ls_reg_i", false,-1);
        tracep->declQuad(c+12,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+14,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+18,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+16,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+19,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+26,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBit(c+34,"top L_S_reg_u fence_ls_reg_o", false,-1);
        tracep->declArray(c+214,"top L_S_reg_u bundle", false,-1, 226,0);
        tracep->declBus(c+1065,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1060,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+915,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+916,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+815,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+214,"top L_S_reg_u ls_reg i_din", false,-1, 226,0);
        tracep->declArray(c+119,"top L_S_reg_u ls_reg o_dout", false,-1, 226,0);
        tracep->declBit(c+915,"top ls_u clk", false,-1);
        tracep->declBit(c+916,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+12,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+14,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+18,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+474,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+478,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+476,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declQuad(c+483,"top ls_u wb_csr_data_i", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u trap_ls_i", false,-1);
        tracep->declBit(c+815,"top ls_u stall_n", false,-1);
        tracep->declBit(c+813,"top ls_u if_stall_n", false,-1);
        tracep->declQuad(c+982,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+20,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+816,"top ls_u ls_not_ok", false,-1);
        tracep->declBit(c+33,"top ls_u in_intr_ls", false,-1);
        tracep->declBit(c+203,"top ls_u ld_csr_hazard", false,-1);
        tracep->declQuad(c+472,"top ls_u wb_pc", false,-1, 63,0);
        tracep->declQuad(c+440,"top ls_u ex_pc", false,-1, 63,0);
        tracep->declQuad(c+419,"top ls_u id_pc", false,-1, 63,0);
        tracep->declQuad(c+405,"top ls_u if_pc", false,-1, 63,0);
        tracep->declQuad(c+485,"top ls_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+1011,"top ls_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+487,"top ls_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+255,"top ls_u clint_axi_arready", false,-1);
        tracep->declBus(c+488,"top ls_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+30,"top ls_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+256,"top ls_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+257,"top ls_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+489,"top ls_u clint_axi_rready", false,-1);
        tracep->declBus(c+258,"top ls_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+259,"top ls_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+1011,"top ls_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+490,"top ls_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+261,"top ls_u clint_axi_awready", false,-1);
        tracep->declQuad(c+491,"top ls_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+262,"top ls_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+493,"top ls_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+263,"top ls_u clint_axi_wready", false,-1);
        tracep->declBus(c+256,"top ls_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+264,"top ls_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+494,"top ls_u clint_axi_bready", false,-1);
        tracep->declQuad(c+16,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+200,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+470,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+471,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+816,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+816,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+817,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u rden", false,-1);
        tracep->declBus(c+127,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+200,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+686,"top ls_u wren_last", false,-1);
        tracep->declQuad(c+687,"top ls_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+831,"top ls_u csr_stall_n", false,-1);
        tracep->declBit(c+128,"top ls_u timr_int", false,-1);
        tracep->declBit(c+915,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+916,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+28,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+127,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+200,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+12,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+474,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+686,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+982,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+816,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+16,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+200,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+470,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+471,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+816,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+816,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+817,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+817,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+129,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+130,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+131,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+132,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+133,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+134,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+135,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+29,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+832,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+833,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+834,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+471,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+470,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+136,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+137,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+138,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+139,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+18,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+478,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+14,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+476,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declQuad(c+483,"top ls_u ls_ctr_u wb_csr_data_i", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+127,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+200,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+222,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+223,"top ls_u ls_ctr_u csr_st_en", false,-1);
        tracep->declBit(c+915,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+916,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+12,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+472,"top ls_u CSR_u wb_pc", false,-1, 63,0);
        tracep->declQuad(c+440,"top ls_u CSR_u ex_pc", false,-1, 63,0);
        tracep->declQuad(c+419,"top ls_u CSR_u id_pc", false,-1, 63,0);
        tracep->declQuad(c+405,"top ls_u CSR_u if_pc", false,-1, 63,0);
        tracep->declBus(c+18,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+687,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u CSR_u trap", false,-1);
        tracep->declBit(c+831,"top ls_u CSR_u stall_n", false,-1);
        tracep->declBit(c+128,"top ls_u CSR_u timer_int_i", false,-1);
        tracep->declBit(c+33,"top ls_u CSR_u in_intr_ls", false,-1);
        tracep->declQuad(c+20,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declQuad(c+140,"top ls_u CSR_u commitPC", false,-1, 63,0);
        tracep->declBit(c+142,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+143,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+144,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+145,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+146,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+147,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+148,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+149,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+150,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declBit(c+151,"top ls_u CSR_u sel_mie", false,-1);
        tracep->declBit(c+152,"top ls_u CSR_u sel_mip", false,-1);
        tracep->declQuad(c+687,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+224,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+226,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+689,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+153,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declBit(c+155,"top ls_u CSR_u mstatus_MIE", false,-1);
        tracep->declQuad(c+156,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+158,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declQuad(c+160,"top ls_u CSR_u mie", false,-1, 63,0);
        tracep->declBit(c+162,"top ls_u CSR_u mie_MTIE", false,-1);
        tracep->declQuad(c+163,"top ls_u CSR_u mip", false,-1, 63,0);
        tracep->declBit(c+165,"top ls_u CSR_u mip_MTIP", false,-1);
        tracep->declBit(c+915,"top ls_u clint_u clk", false,-1);
        tracep->declBit(c+916,"top ls_u clint_u rst_n", false,-1);
        tracep->declQuad(c+485,"top ls_u clint_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+1011,"top ls_u clint_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+487,"top ls_u clint_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+255,"top ls_u clint_u clint_axi_arready", false,-1);
        tracep->declBus(c+488,"top ls_u clint_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+30,"top ls_u clint_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+256,"top ls_u clint_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+257,"top ls_u clint_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+489,"top ls_u clint_u clint_axi_rready", false,-1);
        tracep->declBus(c+258,"top ls_u clint_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+259,"top ls_u clint_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+1011,"top ls_u clint_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+490,"top ls_u clint_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+261,"top ls_u clint_u clint_axi_awready", false,-1);
        tracep->declQuad(c+491,"top ls_u clint_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+262,"top ls_u clint_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+493,"top ls_u clint_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+263,"top ls_u clint_u clint_axi_wready", false,-1);
        tracep->declBus(c+256,"top ls_u clint_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+264,"top ls_u clint_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+494,"top ls_u clint_u clint_axi_bready", false,-1);
        tracep->declBit(c+128,"top ls_u clint_u hart0_time_int_o", false,-1);
        tracep->declQuad(c+300,"top ls_u clint_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+261,"top ls_u clint_u axi_awready", false,-1);
        tracep->declBit(c+263,"top ls_u clint_u axi_wready", false,-1);
        tracep->declBus(c+302,"top ls_u clint_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+264,"top ls_u clint_u axi_bvalid", false,-1);
        tracep->declQuad(c+303,"top ls_u clint_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+255,"top ls_u clint_u axi_arready", false,-1);
        tracep->declBus(c+256,"top ls_u clint_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+257,"top ls_u clint_u axi_rvalid", false,-1);
        tracep->declBit(c+305,"top ls_u clint_u aw_en", false,-1);
        tracep->declQuad(c+30,"top ls_u clint_u reg_data_out", false,-1, 63,0);
        tracep->declQuad(c+166,"top ls_u clint_u mtime", false,-1, 63,0);
        tracep->declQuad(c+168,"top ls_u clint_u mtimecmp", false,-1, 63,0);
        tracep->declBit(c+691,"top ls_u clint_u mtimeWrEn", false,-1);
        tracep->declBit(c+692,"top ls_u clint_u mtimecmpWrEn", false,-1);
        tracep->declBit(c+693,"top ls_u clint_u slv_reg_wren", false,-1);
        tracep->declBit(c+375,"top ls_u clint_u slv_reg_rden", false,-1);
        tracep->declBus(c+170,"top ls_u clint_u byte_index", false,-1, 31,0);
        tracep->declBit(c+915,"top Dcache_u clk", false,-1);
        tracep->declBit(c+916,"top Dcache_u rst_n", false,-1);
        tracep->declBus(c+694,"top Dcache_u addr_i", false,-1, 31,0);
        tracep->declBit(c+695,"top Dcache_u exValid_i", false,-1);
        tracep->declBit(c+696,"top Dcache_u lsValid_i", false,-1);
        tracep->declBit(c+697,"top Dcache_u op_i", false,-1);
        tracep->declQuad(c+200,"top Dcache_u wr_data_i", false,-1, 63,0);
        tracep->declBus(c+470,"top Dcache_u wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+815,"top Dcache_u stall_n", false,-1);
        tracep->declBit(c+784,"top Dcache_u addr_ok_o", false,-1);
        tracep->declBit(c+816,"top Dcache_u data_notok_o", false,-1);
        tracep->declQuad(c+817,"top Dcache_u rd_data_o", false,-1, 63,0);
        tracep->declBus(c+471,"top Dcache_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top Dcache_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+497,"top Dcache_u fence_clean", false,-1);
        tracep->declBit(c+498,"top Dcache_u clear_Icache", false,-1);
        tracep->declBit(c+499,"top Dcache_u cacheRdValid_o", false,-1);
        tracep->declBit(c+35,"top Dcache_u axiRdReady", false,-1);
        tracep->declBus(c+399,"top Dcache_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+812,"top Dcache_u rdLast_i", false,-1);
        tracep->declBus(c+698,"top Dcache_u cacheRdAddr_o", false,-1, 31,0);
        tracep->declBus(c+996,"top Dcache_u cacheWrAddr_o", false,-1, 31,0);
        tracep->declBus(c+199,"top Dcache_u cacheRdSize_o", false,-1, 2,0);
        tracep->declQuad(c+810,"top Dcache_u rdData_i", false,-1, 63,0);
        tracep->declBit(c+820,"top Dcache_u dataValid_i", false,-1);
        tracep->declBit(c+505,"top Dcache_u axiWrReady", false,-1);
        tracep->declBit(c+500,"top Dcache_u cacheWrValid_o", false,-1);
        tracep->declArray(c+367,"top Dcache_u cacheWrData_o", false,-1, 255,0);
        tracep->declBus(c+399,"top Dcache_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+506,"top Dcache_u cacheWrMask_o", false,-1, 7,0);
        tracep->declBus(c+507,"top Dcache_u cacheWrSize_o", false,-1, 2,0);
        tracep->declBus(c+1011,"top Dcache_u idle", false,-1, 2,0);
        tracep->declBus(c+1038,"top Dcache_u compare", false,-1, 2,0);
        tracep->declBus(c+1039,"top Dcache_u miss", false,-1, 2,0);
        tracep->declBus(c+1040,"top Dcache_u getdata", false,-1, 2,0);
        tracep->declBus(c+1041,"top Dcache_u replace", false,-1, 2,0);
        tracep->declBus(c+1042,"top Dcache_u uncacheOp", false,-1, 2,0);
        tracep->declBus(c+1066,"top Dcache_u clean", false,-1, 2,0);
        tracep->declBus(c+699,"top Dcache_u cacheCurState", false,-1, 2,0);
        tracep->declBus(c+835,"top Dcache_u cacheNexState", false,-1, 2,0);
        tracep->declBit(c+700,"top Dcache_u cacheHit", false,-1);
        tracep->declBit(c+701,"top Dcache_u way1Hit", false,-1);
        tracep->declBit(c+702,"top Dcache_u way2Hit", false,-1);
        tracep->declArray(c+306,"top Dcache_u dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+310,"top Dcache_u dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+314,"top Dcache_u dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+318,"top Dcache_u dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+703,"top Dcache_u inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+707,"top Dcache_u inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+703,"top Dcache_u inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+707,"top Dcache_u inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+711,"top Dcache_u wenWay1", false,-1);
        tracep->declBit(c+712,"top Dcache_u wenWay2", false,-1);
        tracep->declBit(c+713,"top Dcache_u uncached", false,-1);
        tracep->declBit(c+714,"top Dcache_u idleEn", false,-1);
        tracep->declQuad(c+715,"top Dcache_u reqLatch", false,-1, 32,0);
        tracep->declBus(c+717,"top Dcache_u offset", false,-1, 4,0);
        tracep->declBus(c+718,"top Dcache_u index", false,-1, 5,0);
        tracep->declBus(c+719,"top Dcache_u tag", false,-1, 20,0);
        tracep->declQuad(c+171,"top Dcache_u validArray1", false,-1, 63,0);
        tracep->declQuad(c+173,"top Dcache_u validArray2", false,-1, 63,0);
        tracep->declBit(c+228,"top Dcache_u bitValid1", false,-1);
        tracep->declBit(c+229,"top Dcache_u bitValid2", false,-1);
        tracep->declBit(c+997,"top Dcache_u bitValid1_d", false,-1);
        tracep->declBit(c+998,"top Dcache_u bitValid2_d", false,-1);
        tracep->declBus(c+999,"top Dcache_u tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+1000,"top Dcache_u tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+230,"top Dcache_u tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+231,"top Dcache_u tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+1067,"top Dcache_u validWay1_q", false,-1);
        tracep->declBit(c+1068,"top Dcache_u validWay2_q", false,-1);
        tracep->declBus(c+175,"top Dcache_u testTag", false,-1, 20,0);
        tracep->declBus(c+176,"top Dcache_u tagtest", false,-1, 20,0);
        tracep->declBit(c+177,"top Dcache_u replaceEnDelay", false,-1);
        tracep->declBit(c+720,"top Dcache_u compareEn", false,-1);
        tracep->declArray(c+322,"top Dcache_u way1Data", false,-1, 255,0);
        tracep->declArray(c+330,"top Dcache_u way2Data", false,-1, 255,0);
        tracep->declQuad(c+1001,"top Dcache_u rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+1003,"top Dcache_u rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+721,"top Dcache_u missEn", false,-1);
        tracep->declBit(c+722,"top Dcache_u getdataEn", false,-1);
        tracep->declQuad(c+723,"top Dcache_u addrToRead", false,-1, 63,0);
        tracep->declBit(c+338,"top Dcache_u randomBit", false,-1);
        tracep->declBit(c+178,"top Dcache_u missFlag", false,-1);
        tracep->declBus(c+725,"top Dcache_u rdCnt", false,-1, 1,0);
        tracep->declArray(c+726,"top Dcache_u rdBuffer", false,-1, 255,0);
        tracep->declBit(c+734,"top Dcache_u replaceEn", false,-1);
        tracep->declBit(c+179,"top Dcache_u wenDelay1", false,-1);
        tracep->declBit(c+180,"top Dcache_u wenDelay2", false,-1);
        tracep->declQuad(c+735,"top Dcache_u wrDataLatch", false,-1, 63,0);
        tracep->declBus(c+181,"top Dcache_u wrMaskLatch", false,-1, 7,0);
        tracep->declQuad(c+182,"top Dcache_u dirtyArray1", false,-1, 63,0);
        tracep->declQuad(c+184,"top Dcache_u dirtyArray2", false,-1, 63,0);
        tracep->declBit(c+737,"top Dcache_u wrLow", false,-1);
        tracep->declBit(c+738,"top Dcache_u wrHigh", false,-1);
        tracep->declQuad(c+739,"top Dcache_u storeData", false,-1, 63,0);
        tracep->declBus(c+741,"top Dcache_u storeMask", false,-1, 7,0);
        tracep->declQuad(c+742,"top Dcache_u sramMask", false,-1, 63,0);
        tracep->declArray(c+744,"top Dcache_u maskWay1_1", false,-1, 127,0);
        tracep->declArray(c+748,"top Dcache_u maskWay1_2", false,-1, 127,0);
        tracep->declArray(c+744,"top Dcache_u maskWay2_1", false,-1, 127,0);
        tracep->declArray(c+748,"top Dcache_u maskWay2_2", false,-1, 127,0);
        tracep->declBit(c+752,"top Dcache_u wrMiss", false,-1);
        tracep->declBit(c+753,"top Dcache_u rdMiss", false,-1);
        tracep->declBit(c+186,"top Dcache_u replaceWay", false,-1);
        tracep->declBit(c+1005,"top Dcache_u needWrBk", false,-1);
        tracep->declBit(c+187,"top Dcache_u needWrBk_Reg", false,-1);
        tracep->declBit(c+188,"top Dcache_u uncache", false,-1);
        tracep->declBit(c+187,"top Dcache_u axiWrBusy", false,-1);
        tracep->declBus(c+1006,"top Dcache_u addrToWrite", false,-1, 31,0);
        tracep->declBit(c+754,"top Dcache_u uncacheOpEn", false,-1);
        tracep->declBit(c+232,"top Dcache_u uncacheWrValid", false,-1);
        tracep->declBit(c+836,"top Dcache_u uncacheOpOk", false,-1);
        tracep->declBit(c+233,"top Dcache_u uncacheRdValid", false,-1);
        tracep->declBit(c+189,"top Dcache_u uncacheRdOk", false,-1);
        tracep->declBit(c+190,"top Dcache_u uncacheWrOk", false,-1);
        tracep->declBus(c+755,"top Dcache_u uncacheRdAddr", false,-1, 31,0);
        tracep->declQuad(c+191,"top Dcache_u temp", false,-1, 63,0);
        tracep->declBit(c+756,"top Dcache_u cleanEn", false,-1);
        tracep->declBit(c+498,"top Dcache_u clean_OK", false,-1);
        tracep->declBus(c+757,"top Dcache_u cleanCnt", false,-1, 6,0);
        tracep->declBit(c+758,"top Dcache_u cleanWrValid", false,-1);
        tracep->declBus(c+234,"top Dcache_u cleanWrAddr", false,-1, 31,0);
        tracep->declBit(c+193,"top Dcache_u oneCycleDelay", false,-1);
        tracep->declArray(c+376,"top Dcache_u cleanData", false,-1, 255,0);
        tracep->declBus(c+1045,"top Dcache_u iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+1007,"top Dcache_u iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1046,"top Dcache_u iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1045,"top Dcache_u iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+306,"top Dcache_u iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+915,"top Dcache_u iramWay1_1 CLK", false,-1);
        tracep->declBit(c+785,"top Dcache_u iramWay1_1 CEN", false,-1);
        tracep->declBit(c+759,"top Dcache_u iramWay1_1 WEN", false,-1);
        tracep->declArray(c+760,"top Dcache_u iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+837,"top Dcache_u iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+703,"top Dcache_u iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+786,"top Dcache_u iramWay1_1 cen", false,-1);
        tracep->declBit(c+711,"top Dcache_u iramWay1_1 wen", false,-1);
        tracep->declArray(c+744,"top Dcache_u iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+1045,"top Dcache_u iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+1007,"top Dcache_u iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1046,"top Dcache_u iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1045,"top Dcache_u iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+310,"top Dcache_u iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+915,"top Dcache_u iramWay1_2 CLK", false,-1);
        tracep->declBit(c+785,"top Dcache_u iramWay1_2 CEN", false,-1);
        tracep->declBit(c+759,"top Dcache_u iramWay1_2 WEN", false,-1);
        tracep->declArray(c+764,"top Dcache_u iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+837,"top Dcache_u iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+707,"top Dcache_u iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+786,"top Dcache_u iramWay1_2 cen", false,-1);
        tracep->declBit(c+711,"top Dcache_u iramWay1_2 wen", false,-1);
        tracep->declArray(c+748,"top Dcache_u iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+1045,"top Dcache_u iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+1007,"top Dcache_u iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1046,"top Dcache_u iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1045,"top Dcache_u iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+314,"top Dcache_u iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+915,"top Dcache_u iramWay2_1 CLK", false,-1);
        tracep->declBit(c+787,"top Dcache_u iramWay2_1 CEN", false,-1);
        tracep->declBit(c+768,"top Dcache_u iramWay2_1 WEN", false,-1);
        tracep->declArray(c+760,"top Dcache_u iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+838,"top Dcache_u iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+703,"top Dcache_u iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+788,"top Dcache_u iramWay2_1 cen", false,-1);
        tracep->declBit(c+712,"top Dcache_u iramWay2_1 wen", false,-1);
        tracep->declArray(c+744,"top Dcache_u iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+1045,"top Dcache_u iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+1007,"top Dcache_u iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1046,"top Dcache_u iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1045,"top Dcache_u iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+318,"top Dcache_u iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+915,"top Dcache_u iramWay2_2 CLK", false,-1);
        tracep->declBit(c+787,"top Dcache_u iramWay2_2 CEN", false,-1);
        tracep->declBit(c+768,"top Dcache_u iramWay2_2 WEN", false,-1);
        tracep->declArray(c+764,"top Dcache_u iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+838,"top Dcache_u iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+707,"top Dcache_u iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+788,"top Dcache_u iramWay2_2 cen", false,-1);
        tracep->declBit(c+712,"top Dcache_u iramWay2_2 wen", false,-1);
        tracep->declArray(c+748,"top Dcache_u iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+1007,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1007,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1007,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1007,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1008,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1009,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1010,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+915,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+916,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+499,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+35,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+810,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+501,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+399,"top axi_ls_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+812,"top axi_ls_u rdLast_o", false,-1);
        tracep->declBit(c+820,"top axi_ls_u dataValid_o", false,-1);
        tracep->declBit(c+500,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+505,"top axi_ls_u wr_ready_o", false,-1);
        tracep->declArray(c+367,"top axi_ls_u cacheWrData_i", false,-1, 255,0);
        tracep->declBus(c+399,"top axi_ls_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+507,"top axi_ls_u storeSize", false,-1, 2,0);
        tracep->declBus(c+199,"top axi_ls_u loadSize", false,-1, 2,0);
        tracep->declBus(c+506,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+503,"top axi_ls_u cacheWrAddr_i", false,-1, 63,0);
        tracep->declBit(c+975,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+398,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+251,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1011,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1024,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1012,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+399,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+253,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1020,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1013,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+1025,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1014,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1014,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+808,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+400,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+401,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+254,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+403,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+1012,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+404,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+976,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+977,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+978,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+979,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+980,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+6,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+7,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1011,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1024,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1012,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+399,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+199,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1020,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1013,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+1021,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1014,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1026,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+9,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+809,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+981,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+810,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+812,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+807,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1027,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+1055,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+1020,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+1056,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+1057,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+769,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+839,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+398,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+400,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+404,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+1069,"top axi_ls_u trans_ok", false,-1);
        tracep->declBit(c+403,"top axi_ls_u wrLast", false,-1);
        tracep->declQuad(c+251,"top axi_ls_u wrAddr_reg", false,-1, 63,0);
        tracep->declArray(c+339,"top axi_ls_u wr_data_reg", false,-1, 255,0);
        tracep->declBus(c+347,"top axi_ls_u wrMask_reg", false,-1, 7,0);
        tracep->declBus(c+253,"top axi_ls_u wrSize_reg", false,-1, 2,0);
        tracep->declBus(c+348,"top axi_ls_u storeLenth_reg", false,-1, 7,0);
        tracep->declBus(c+194,"top axi_ls_u wrCnt", false,-1, 1,0);
        tracep->declBus(c+1055,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+1020,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+1056,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+1057,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+195,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+840,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+6,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+9,"top axi_ls_u r_ready", false,-1);
        tracep->declQuad(c+7,"top axi_ls_u rdAddr_reg", false,-1, 63,0);
        tracep->declBus(c+1058,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+1024,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+1013,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+1070,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+1040,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+349,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+915,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+916,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+12,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+18,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+16,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+982,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+19,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+20,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+815,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+472,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+478,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+474,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+476,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+482,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+483,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+1071,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+1060,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+915,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+916,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+815,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+841,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+770,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+472,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+478,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+474,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+476,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+483,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+481,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+479,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+915,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+916,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+438,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+407,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+435,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+436,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+410,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+814,"top pipline_ctrl_u ex_not_ok", false,-1);
        tracep->declBit(c+816,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+33,"top pipline_ctrl_u in_intr_ls", false,-1);
        tracep->declBit(c+496,"top pipline_ctrl_u fence_id", false,-1);
        tracep->declBit(c+497,"top pipline_ctrl_u fence_ex", false,-1);
        tracep->declBit(c+34,"top pipline_ctrl_u fence_ls", false,-1);
        tracep->declBit(c+813,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+781,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+782,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+783,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+815,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+815,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+439,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+467,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBit(c+33,"top pipline_ctrl_u ls_flush", false,-1);
        tracep->declBit(c+780,"top pipline_ctrl_u fenceInPip", false,-1);
        tracep->declBus(c+1072,"top lsAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1072,"top lsAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+389,"top lsAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+244,"top lsAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+915,"top lsAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+916,"top lsAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+241,"top lsAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+1011,"top lsAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+393,"top lsAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+240,"top lsAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+364,"top lsAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+248,"top lsAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+394,"top lsAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+247,"top lsAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+250,"top lsAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+249,"top lsAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+395,"top lsAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+387,"top lsAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+1011,"top lsAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+386,"top lsAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+235,"top lsAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+238,"top lsAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+237,"top lsAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+236,"top lsAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+392,"top lsAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+350,"top lsAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+240,"top lsAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+247,"top lsAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+250,"top lsAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+249,"top lsAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+352,"top lsAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+235,"top lsAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+238,"top lsAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+237,"top lsAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+236,"top lsAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+1073,"top lsAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+1074,"top lsAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+354,"top lsAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+356,"top lsAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+358,"top lsAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+360,"top lsAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+384,"top lsAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+385,"top lsAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+1075,"top lsAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+1077,"top lsAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+362,"top lsAxiSlaveRam_u aw_en", false,-1);
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

extern const VlWide<8>/*255:0*/ Vtop__ConstPool__CONST_d5724acc_0;

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp347;
    VlWide<3>/*95:0*/ __Vtemp350;
    VlWide<3>/*95:0*/ __Vtemp353;
    VlWide<3>/*95:0*/ __Vtemp356;
    VlWide<3>/*95:0*/ __Vtemp359;
    VlWide<5>/*159:0*/ __Vtemp360;
    VlWide<5>/*159:0*/ __Vtemp365;
    VlWide<5>/*159:0*/ __Vtemp370;
    VlWide<5>/*159:0*/ __Vtemp374;
    VlWide<8>/*255:0*/ __Vtemp379;
    VlWide<8>/*255:0*/ __Vtemp384;
    VlWide<8>/*255:0*/ __Vtemp389;
    VlWide<8>/*255:0*/ __Vtemp393;
    VlWide<4>/*127:0*/ __Vtemp394;
    VlWide<4>/*127:0*/ __Vtemp395;
    VlWide<3>/*95:0*/ __Vtemp396;
    VlWide<3>/*95:0*/ __Vtemp398;
    VlWide<3>/*95:0*/ __Vtemp399;
    VlWide<3>/*95:0*/ __Vtemp400;
    VlWide<3>/*95:0*/ __Vtemp401;
    VlWide<3>/*95:0*/ __Vtemp402;
    VlWide<3>/*95:0*/ __Vtemp405;
    VlWide<3>/*95:0*/ __Vtemp406;
    VlWide<3>/*95:0*/ __Vtemp407;
    VlWide<3>/*95:0*/ __Vtemp408;
    VlWide<3>/*95:0*/ __Vtemp409;
    VlWide<3>/*95:0*/ __Vtemp412;
    VlWide<3>/*95:0*/ __Vtemp413;
    VlWide<3>/*95:0*/ __Vtemp414;
    VlWide<3>/*95:0*/ __Vtemp415;
    VlWide<3>/*95:0*/ __Vtemp418;
    VlWide<3>/*95:0*/ __Vtemp419;
    VlWide<3>/*95:0*/ __Vtemp421;
    VlWide<3>/*95:0*/ __Vtemp422;
    VlWide<3>/*95:0*/ __Vtemp423;
    VlWide<3>/*95:0*/ __Vtemp424;
    VlWide<3>/*95:0*/ __Vtemp427;
    VlWide<3>/*95:0*/ __Vtemp428;
    VlWide<3>/*95:0*/ __Vtemp430;
    VlWide<3>/*95:0*/ __Vtemp431;
    VlWide<3>/*95:0*/ __Vtemp432;
    VlWide<3>/*95:0*/ __Vtemp433;
    VlWide<3>/*95:0*/ __Vtemp436;
    VlWide<3>/*95:0*/ __Vtemp437;
    VlWide<3>/*95:0*/ __Vtemp439;
    VlWide<3>/*95:0*/ __Vtemp440;
    VlWide<3>/*95:0*/ __Vtemp441;
    VlWide<3>/*95:0*/ __Vtemp442;
    VlWide<3>/*95:0*/ __Vtemp444;
    VlWide<3>/*95:0*/ __Vtemp445;
    VlWide<3>/*95:0*/ __Vtemp446;
    VlWide<3>/*95:0*/ __Vtemp450;
    VlWide<3>/*95:0*/ __Vtemp451;
    VlWide<3>/*95:0*/ __Vtemp453;
    VlWide<3>/*95:0*/ __Vtemp454;
    VlWide<3>/*95:0*/ __Vtemp455;
    VlWide<3>/*95:0*/ __Vtemp459;
    VlWide<3>/*95:0*/ __Vtemp460;
    VlWide<3>/*95:0*/ __Vtemp462;
    VlWide<3>/*95:0*/ __Vtemp463;
    VlWide<3>/*95:0*/ __Vtemp464;
    VlWide<3>/*95:0*/ __Vtemp468;
    VlWide<3>/*95:0*/ __Vtemp469;
    VlWide<3>/*95:0*/ __Vtemp471;
    VlWide<3>/*95:0*/ __Vtemp472;
    VlWide<3>/*95:0*/ __Vtemp473;
    VlWide<9>/*287:0*/ __Vtemp477;
    VlWide<4>/*127:0*/ __Vtemp480;
    VlWide<4>/*127:0*/ __Vtemp487;
    VlWide<4>/*127:0*/ __Vtemp490;
    VlWide<4>/*127:0*/ __Vtemp497;
    VlWide<4>/*127:0*/ __Vtemp500;
    VlWide<4>/*127:0*/ __Vtemp509;
    VlWide<4>/*127:0*/ __Vtemp512;
    VlWide<4>/*127:0*/ __Vtemp521;
    VlWide<4>/*127:0*/ __Vtemp524;
    VlWide<4>/*127:0*/ __Vtemp534;
    VlWide<4>/*127:0*/ __Vtemp537;
    VlWide<4>/*127:0*/ __Vtemp547;
    VlWide<10>/*319:0*/ __Vtemp552;
    VlWide<4>/*127:0*/ __Vtemp553;
    VlWide<4>/*127:0*/ __Vtemp554;
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
                                     << 0x3dU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                                   << 0x1dU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                                     >> 3U)))),64);
        tracep->fullQData(oldp+14,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                     << 0x3dU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                   << 0x1dU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                     >> 3U)))),64);
        tracep->fullQData(oldp+16,((((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                     << 0x3dU) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                   << 0x1dU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                     >> 3U)))),64);
        tracep->fullIData(oldp+18,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                     << 0x1dU) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 3U))),32);
        tracep->fullBit(oldp+19,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                        >> 2U))));
        tracep->fullQData(oldp+20,(vlSelf->top__DOT__csrdata_ls),64);
        tracep->fullQData(oldp+22,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
        tracep->fullQData(oldp+24,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
        tracep->fullBit(oldp+26,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                        >> 1U))));
        tracep->fullBit(oldp+27,((3U == (0x7fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 3U)))));
        tracep->fullBit(oldp+28,((8U == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 5U)))));
        tracep->fullCData(oldp+29,(((((1U & ((- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh))) 
                                             | (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu))))) 
                                      | (2U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw))))) 
                                     | (2U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu))))) 
                                    | (3U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld)))))),3);
        tracep->fullQData(oldp+30,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__reg_data_out),64);
        tracep->fullBit(oldp+32,((0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
        tracep->fullBit(oldp+33,(vlSelf->top__DOT__in_intr_ls));
        tracep->fullBit(oldp+34,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
        tracep->fullBit(oldp+35,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
        tracep->fullBit(oldp+36,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
        tracep->fullCData(oldp+37,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U)),4);
        tracep->fullCData(oldp+38,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? (IData)(vlSelf->top__DOT__if_axi_ar_region_o)
                                     : (IData)(vlSelf->top__DOT__ls_axi_ar_region_o))),4);
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
        tracep->fullBit(oldp+41,(vlSelf->top__DOT__cache_dut__DOT__uncachedOk));
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
        tracep->fullCData(oldp+58,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state),2);
        tracep->fullBit(oldp+59,(((0x73U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 3U))) 
                                  & (((1U == (7U & 
                                              (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xfU))) 
                                      | (3U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU)))) 
                                     | (2U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xfU)))))));
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src1Reg),64);
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2Reg),64);
        tracep->fullBit(oldp+64,((1U & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[2U])));
        tracep->fullBit(oldp+65,((1U & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[0U])));
        tracep->fullQData(oldp+66,((((QData)((IData)(
                                                     vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[2U])))),64);
        tracep->fullQData(oldp+68,((((QData)((IData)(
                                                     vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[0U])))),64);
        __Vtemp347[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                        >> 6U));
        __Vtemp347[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                        >> 6U));
        __Vtemp347[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                                >> 6U));
        tracep->fullWData(oldp+70,(__Vtemp347),66);
        __Vtemp350[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                        >> 4U));
        __Vtemp350[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                                        >> 4U));
        __Vtemp350[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                >> 4U));
        tracep->fullWData(oldp+73,(__Vtemp350),66);
        __Vtemp353[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U] 
                                        >> 2U));
        __Vtemp353[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                                        >> 2U));
        __Vtemp353[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                >> 2U));
        tracep->fullWData(oldp+76,(__Vtemp353),66);
        __Vtemp356[0U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[0U];
        __Vtemp356[1U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[1U];
        __Vtemp356[2U] = (3U & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U]);
        tracep->fullWData(oldp+79,(__Vtemp356),66);
        __Vtemp359[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                        >> 6U));
        __Vtemp359[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                           << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                        >> 6U));
        __Vtemp359[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                                >> 6U));
        VL_EXTEND_WW(130,66, __Vtemp360, __Vtemp359);
        tracep->fullWData(oldp+82,(__Vtemp360),130);
        __Vtemp365[0U] = 0U;
        __Vtemp365[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                        >> 4U));
        __Vtemp365[2U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                           << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                                        >> 4U));
        __Vtemp365[3U] = (((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                             >> 5U)))) 
                           << 2U) | (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                           >> 4U)));
        __Vtemp365[4U] = ((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                            >> 5U)))) 
                          >> 0x1eU);
        tracep->fullWData(oldp+87,(__Vtemp365),130);
        __Vtemp370[0U] = 0U;
        __Vtemp370[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U] 
                                        >> 2U));
        __Vtemp370[2U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                           << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                                        >> 2U));
        __Vtemp370[3U] = (((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                             >> 3U)))) 
                           << 2U) | (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                           >> 2U)));
        __Vtemp370[4U] = ((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                            >> 3U)))) 
                          >> 0x1eU);
        tracep->fullWData(oldp+92,(__Vtemp370),130);
        __Vtemp374[0U] = 0U;
        __Vtemp374[1U] = 0U;
        __Vtemp374[2U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[0U];
        __Vtemp374[3U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[1U];
        __Vtemp374[4U] = (3U & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U]);
        tracep->fullWData(oldp+97,(__Vtemp374),130);
        tracep->fullWData(oldp+102,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2),130);
        tracep->fullWData(oldp+107,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout),264);
        tracep->fullCData(oldp+116,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 0xaU))),5);
        tracep->fullBit(oldp+117,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+118,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullWData(oldp+119,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),227);
        tracep->fullCData(oldp+127,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 0xfU))),3);
        tracep->fullBit(oldp+128,(vlSelf->top__DOT__ls_u__DOT__timr_int));
        tracep->fullBit(oldp+129,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 3U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+130,(((3U == (0x7fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 3U))) 
                                   & (4U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+131,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh));
        tracep->fullBit(oldp+132,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu));
        tracep->fullBit(oldp+133,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw));
        tracep->fullBit(oldp+134,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu));
        tracep->fullBit(oldp+135,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld));
        tracep->fullBit(oldp+136,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 5U))) 
                                   & (0U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+137,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 5U))) 
                                   & (1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+138,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 5U))) 
                                   & (2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullBit(oldp+139,(((8U == (0x1fU & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 5U))) 
                                   & (3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__commitPC),64);
        tracep->fullBit(oldp+142,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrw));
        tracep->fullBit(oldp+143,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrs));
        tracep->fullBit(oldp+144,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrc));
        tracep->fullBit(oldp+145,((0x1cU == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 5U)))));
        tracep->fullBit(oldp+146,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+147,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+148,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+149,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+150,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullBit(oldp+151,(((0x304U == (0xfffU 
                                               & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                                   << 9U) 
                                                  | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                     >> 0x17U)))) 
                                   & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en))));
        tracep->fullBit(oldp+152,(((0x344U == (0xfffU 
                                               & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                                   << 9U) 
                                                  | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                     >> 0x17U)))) 
                                   & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en))));
        tracep->fullQData(oldp+153,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullBit(oldp+155,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                 >> 3U)))));
        tracep->fullQData(oldp+156,(((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 5U)))
                                      ? 0xbULL : ((IData)(vlSelf->top__DOT__in_intr_ls)
                                                   ? 0x8000000000000007ULL
                                                   : 0ULL))),64);
        tracep->fullQData(oldp+158,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullQData(oldp+160,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie),64);
        tracep->fullBit(oldp+162,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie 
                                                 >> 7U)))));
        tracep->fullQData(oldp+163,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip),64);
        tracep->fullBit(oldp+165,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip 
                                                 >> 7U)))));
        tracep->fullQData(oldp+166,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtime),64);
        tracep->fullQData(oldp+168,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp),64);
        tracep->fullIData(oldp+170,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__byte_index),32);
        tracep->fullQData(oldp+171,(vlSelf->top__DOT__Dcache_u__DOT__validArray1),64);
        tracep->fullQData(oldp+173,(vlSelf->top__DOT__Dcache_u__DOT__validArray2),64);
        tracep->fullIData(oldp+175,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [0x3cU]),21);
        tracep->fullIData(oldp+176,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [0x23U]),21);
        tracep->fullBit(oldp+177,(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay));
        tracep->fullBit(oldp+178,(vlSelf->top__DOT__Dcache_u__DOT__missFlag));
        tracep->fullBit(oldp+179,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay1));
        tracep->fullBit(oldp+180,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay2));
        tracep->fullCData(oldp+181,(vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch),8);
        tracep->fullQData(oldp+182,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1),64);
        tracep->fullQData(oldp+184,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2),64);
        tracep->fullBit(oldp+186,(vlSelf->top__DOT__Dcache_u__DOT__replaceWay));
        tracep->fullBit(oldp+187,(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
        tracep->fullBit(oldp+188,(vlSelf->top__DOT__Dcache_u__DOT__uncache));
        tracep->fullBit(oldp+189,(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk));
        tracep->fullBit(oldp+190,(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk));
        tracep->fullQData(oldp+191,(vlSelf->top__DOT__Dcache_u__DOT__temp),64);
        tracep->fullBit(oldp+193,(vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay));
        tracep->fullCData(oldp+194,(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt),2);
        tracep->fullCData(oldp+195,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+196,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                               ? 0U
                                               : 1U))),4);
        tracep->fullCData(oldp+197,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : (0xffU 
                                              & ((0U 
                                                  != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                                   ? 0U
                                                   : 3U)
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                   ? 0U
                                                   : 3U))))),8);
        tracep->fullCData(oldp+198,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : (0xfU 
                                              & ((0U 
                                                  != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                                  ? (IData)(vlSelf->top__DOT__if_axi_ar_region_o)
                                                  : (IData)(vlSelf->top__DOT__ls_axi_ar_region_o))))),4);
        tracep->fullCData(oldp+199,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullQData(oldp+200,((((0U == (0x1fU 
                                              & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 3U))) 
                                      & ((0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0x17U)) 
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
                                      : ((((0x73U == 
                                            (0x7fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 1U))) 
                                           & (((1U 
                                                == 
                                                (7U 
                                                 & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                    >> 0xdU))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                      >> 0xdU)))) 
                                              | (2U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                     >> 0xdU))))) 
                                          & ((0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 0x17U)) 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                    >> 8U))))
                                          ? (((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))
                                          : (((QData)((IData)(
                                                              vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                              << 0x3dU) 
                                             | (((QData)((IData)(
                                                                 vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                 << 0x1dU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                   >> 3U)))))),64);
        tracep->fullIData(oldp+202,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                      ? (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch)
                                      : (((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                   >> 0xbU)) 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U))))),32);
        tracep->fullBit(oldp+203,((((3U == (0x7fU & 
                                            (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                             >> 1U))) 
                                    & ((0x73U == (0x7fU 
                                                  & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                     >> 3U))) 
                                       & (((1U == (7U 
                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                      >> 0xfU))) 
                                           | (3U == 
                                              (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xfU)))) 
                                          | (2U == 
                                             (7U & 
                                              (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xfU)))))) 
                                   & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0x12U))))));
        tracep->fullCData(oldp+204,((0xffU & ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                               ? ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                                   ? 0U
                                                   : 3U)
                                               : ((6U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                   ? 0U
                                                   : 3U)))),8);
        tracep->fullQData(oldp+205,((QData)((IData)(
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
        tracep->fullBit(oldp+207,((1U & (IData)(((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 2U)))
                                                  ? (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[0U])))
                                                  : (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[2U]))))))));
        tracep->fullQData(oldp+208,(((0U == (3U & (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                   >> 2U)))
                                      ? (QData)((IData)(
                                                        (1U 
                                                         & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[0U])))
                                      : (QData)((IData)(
                                                        (1U 
                                                         & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[2U]))))),64);
        tracep->fullBit(oldp+210,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 2U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xaU)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xbU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xaU))))));
        tracep->fullBit(oldp+211,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xbU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+212,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 2U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xaU)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 6U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xaU))))));
        tracep->fullBit(oldp+213,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 6U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        if (vlSelf->top__DOT__in_intr_ls) {
            __Vtemp379[0U] = Vtop__ConstPool__CONST_d5724acc_0[0U];
            __Vtemp379[1U] = Vtop__ConstPool__CONST_d5724acc_0[1U];
            __Vtemp379[2U] = Vtop__ConstPool__CONST_d5724acc_0[2U];
            __Vtemp379[3U] = Vtop__ConstPool__CONST_d5724acc_0[3U];
            __Vtemp379[4U] = Vtop__ConstPool__CONST_d5724acc_0[4U];
            __Vtemp379[5U] = Vtop__ConstPool__CONST_d5724acc_0[5U];
            __Vtemp379[6U] = Vtop__ConstPool__CONST_d5724acc_0[6U];
            __Vtemp379[7U] = Vtop__ConstPool__CONST_d5724acc_0[7U];
        } else {
            __Vtemp379[0U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                               << 3U) | ((4U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                >> 0xeU)) 
                                         | (3U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
            __Vtemp379[1U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                               >> 0x1dU) | ((IData)(
                                                    (vlSelf->top__DOT__alures_ex 
                                                     >> 0x20U)) 
                                            << 3U));
            __Vtemp379[2U] = (((IData)((vlSelf->top__DOT__alures_ex 
                                        >> 0x20U)) 
                               >> 0x1dU) | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                                            << 3U));
            __Vtemp379[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                               >> 0x1dU) | ((IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                     >> 0x20U)) 
                                            << 3U));
            __Vtemp379[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                        >> 0x20U)) 
                               >> 0x1dU) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 7U) 
                                            | (0x78U 
                                               & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                  >> 0x19U))));
            __Vtemp379[5U] = ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                    << 7U) 
                                                   | (0x78U 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                         >> 0x19U))));
            __Vtemp379[6U] = ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                    << 7U) 
                                                   | (0x78U 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                         >> 0x19U))));
            __Vtemp379[7U] = (7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                    >> 0x19U));
        }
        tracep->fullWData(oldp+214,(__Vtemp379),227);
        tracep->fullBit(oldp+222,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x17U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+223,((((0x73U == (0x7fU 
                                               & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                  >> 1U))) 
                                    & (((1U == (7U 
                                                & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 0xdU))) 
                                        | (3U == (7U 
                                                  & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                     >> 0xdU)))) 
                                       | (2U == (7U 
                                                 & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                    >> 0xdU))))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x17U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullQData(oldp+224,((vlSelf->top__DOT__ls_u__DOT__csr_wr_data 
                                     | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+226,(((~ vlSelf->top__DOT__ls_u__DOT__csr_wr_data) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullBit(oldp+228,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+229,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+230,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+231,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullBit(oldp+232,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk)))));
        tracep->fullBit(oldp+233,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk)))));
        tracep->fullIData(oldp+234,(((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                                          ? ((((IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                        >> 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt)))) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                                                          >> 
                                                          (0x3fU 
                                                           & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))))) 
                                              & (IData)(vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay))
                                              ? ((vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                                  [
                                                  (0x3fU 
                                                   & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))] 
                                                  << 0xbU) 
                                                 | (0x7e0U 
                                                    & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt) 
                                                       << 5U)))
                                              : 0U)
                                          : ((((IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                        >> 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt)))) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                                                          >> 
                                                          (0x3fU 
                                                           & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))))) 
                                              & (IData)(vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay))
                                              ? ((vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                                  [
                                                  (0x3fU 
                                                   & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))] 
                                                  << 0xbU) 
                                                 | (0x7e0U 
                                                    & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt) 
                                                       << 5U)))
                                              : 0U))
                                      : 0U)),32);
        tracep->fullBit(oldp+235,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready));
        tracep->fullBit(oldp+236,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+237,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp),2);
        tracep->fullQData(oldp+238,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata),64);
        tracep->fullBit(oldp+240,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullQData(oldp+241,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg)),64);
        tracep->fullCData(oldp+243,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),4);
        tracep->fullCData(oldp+244,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : (7U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg)))),3);
        tracep->fullCData(oldp+245,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),2);
        tracep->fullCData(oldp+246,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 0xfU)),4);
        tracep->fullBit(oldp+247,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullCData(oldp+248,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : (0xffU 
                                              & (IData)(vlSelf->top__DOT__ls_axi_w_strb_o)))),8);
        tracep->fullBit(oldp+249,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullCData(oldp+250,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullQData(oldp+251,(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg),64);
        tracep->fullCData(oldp+253,(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg),3);
        tracep->fullCData(oldp+254,(vlSelf->top__DOT__ls_axi_w_strb_o),8);
        tracep->fullBit(oldp+255,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready));
        tracep->fullCData(oldp+256,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp),2);
        tracep->fullBit(oldp+257,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+258,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x18U))))
                                      ? (7U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg))
                                      : 0U)),3);
        tracep->fullQData(oldp+259,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x18U))))
                                      ? vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg
                                      : 0ULL)),64);
        tracep->fullBit(oldp+261,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready));
        tracep->fullCData(oldp+262,(vlSelf->top__DOT__clint_axi_wstrb),8);
        tracep->fullBit(oldp+263,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready));
        tracep->fullBit(oldp+264,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid));
        tracep->fullBit(oldp+265,((2U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x18U))))));
        tracep->fullBit(oldp+266,((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x1cU))))));
        tracep->fullWData(oldp+267,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+271,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+275,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+279,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+283,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+291,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullIData(oldp+299,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
        tracep->fullQData(oldp+300,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr),64);
        tracep->fullCData(oldp+302,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bresp),2);
        tracep->fullQData(oldp+303,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_araddr),64);
        tracep->fullBit(oldp+305,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__aw_en));
        tracep->fullWData(oldp+306,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+310,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+314,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+318,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+322,(vlSelf->top__DOT__Dcache_u__DOT__way1Data),256);
        tracep->fullWData(oldp+330,(vlSelf->top__DOT__Dcache_u__DOT__way2Data),256);
        tracep->fullBit(oldp+338,(vlSelf->top__DOT__Dcache_u__DOT__randomBit));
        tracep->fullWData(oldp+339,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),256);
        tracep->fullCData(oldp+347,(vlSelf->top__DOT__axi_ls_u__DOT__wrMask_reg),8);
        tracep->fullCData(oldp+348,(vlSelf->top__DOT__axi_ls_u__DOT__storeLenth_reg),8);
        tracep->fullCData(oldp+349,((0x38U & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg) 
                                              << 3U))),6);
        tracep->fullQData(oldp+350,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+352,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+354,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+356,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+358,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+360,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+362,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        tracep->fullCData(oldp+363,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                               ? 0U
                                               : 3U))),8);
        tracep->fullQData(oldp+364,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__ls_axi_w_data_o)),64);
        tracep->fullBit(oldp+366,((((0xaU != (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x1cU)))) 
                                    | (2U == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x18U)))))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrLast)))));
        VL_EXTEND_WQ(256,64, __Vtemp384, vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch);
        if ((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp389[0U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U]);
            __Vtemp389[1U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U]);
            __Vtemp389[2U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U]);
            __Vtemp389[3U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U]);
            __Vtemp389[4U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U]);
            __Vtemp389[5U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U]);
            __Vtemp389[6U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U]);
            __Vtemp389[7U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U]);
        } else {
            __Vtemp389[0U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp384[0U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U]));
            __Vtemp389[1U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp384[1U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U]));
            __Vtemp389[2U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp384[2U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U]));
            __Vtemp389[3U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp384[3U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U]));
            __Vtemp389[4U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp384[4U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U]));
            __Vtemp389[5U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp384[5U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U]));
            __Vtemp389[6U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp384[6U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U]));
            __Vtemp389[7U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp384[7U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U]));
        }
        tracep->fullWData(oldp+367,(__Vtemp389),256);
        tracep->fullBit(oldp+375,((((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__clint_axi_arvalid)) 
                                   & (~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid)))));
        if ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))) {
            __Vtemp393[0U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U];
            __Vtemp393[1U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U];
            __Vtemp393[2U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U];
            __Vtemp393[3U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U];
            __Vtemp393[4U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U];
            __Vtemp393[5U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U];
            __Vtemp393[6U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U];
            __Vtemp393[7U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U];
        } else {
            __Vtemp393[0U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U];
            __Vtemp393[1U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U];
            __Vtemp393[2U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U];
            __Vtemp393[3U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U];
            __Vtemp393[4U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U];
            __Vtemp393[5U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U];
            __Vtemp393[6U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U];
            __Vtemp393[7U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U];
        }
        tracep->fullWData(oldp+376,(__Vtemp393),256);
        tracep->fullBit(oldp+384,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__axi_mmio_ar_valid_o)) 
                                   & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+385,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                   & (IData)(vlSelf->top__DOT__axi_mmio_w_valid_o))));
        tracep->fullBit(oldp+386,(vlSelf->top__DOT__axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+387,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr)),64);
        tracep->fullCData(oldp+389,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : (7U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size)))),3);
        tracep->fullCData(oldp+390,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),2);
        tracep->fullCData(oldp+391,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : 2U)),4);
        tracep->fullBit(oldp+392,((((0xaU != (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x1cU)))) 
                                    | (2U == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x18U)))))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready)))));
        tracep->fullBit(oldp+393,(vlSelf->top__DOT__axi_mmio_aw_valid_o));
        tracep->fullBit(oldp+394,(vlSelf->top__DOT__axi_mmio_w_valid_o));
        tracep->fullBit(oldp+395,(vlSelf->top__DOT__axi_mmio_b_ready_o));
        tracep->fullCData(oldp+396,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                      ? 0U : 3U)),8);
        tracep->fullCData(oldp+397,(((0U == ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                              ? 0U : 3U))
                                      ? 2U : 3U)),3);
        tracep->fullBit(oldp+398,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullCData(oldp+399,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? 0U : 3U)),8);
        tracep->fullBit(oldp+400,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+401,(vlSelf->top__DOT__ls_axi_w_data_o),64);
        tracep->fullBit(oldp+403,(vlSelf->top__DOT__axi_ls_u__DOT__wrLast));
        tracep->fullBit(oldp+404,((2U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+405,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+407,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+408,(((0x400000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                         + (((QData)((IData)(
                                                             vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                             << 0x24U) 
                                            | (((QData)((IData)(
                                                                vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                << 4U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                  >> 0x1cU))))
                                      : ((((QData)((IData)(
                                                           vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                           << 0x24U) 
                                          | (((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                              << 4U) 
                                             | ((QData)((IData)(
                                                                vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                >> 0x1cU))) 
                                         + (((QData)((IData)(
                                                             vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                             << 0x24U) 
                                            | (((QData)((IData)(
                                                                vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                << 4U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                  >> 0x1cU)))))),64);
        tracep->fullBit(oldp+410,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+411,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullQData(oldp+413,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+415,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullBit(oldp+416,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+417,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullIData(oldp+418,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+419,((((QData)((IData)(
                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+421,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+422,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+424,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+425,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+426,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+427,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+428,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+429,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+430,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+431,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+432,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+433,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+434,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+435,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+436,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+437,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+438,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+439,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+440,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullIData(oldp+442,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 4U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1cU))),32);
        tracep->fullQData(oldp+443,(vlSelf->top__DOT__alures_ex),64);
        tracep->fullBit(oldp+445,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullCData(oldp+446,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x11U))),2);
        tracep->fullQData(oldp+447,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+449,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+451,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+453,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+455,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x17U))),5);
        tracep->fullBit(oldp+456,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+457,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+458,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+459,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x10U))));
        tracep->fullBit(oldp+460,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 5U))));
        tracep->fullCData(oldp+461,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 2U))),3);
        tracep->fullBit(oldp+462,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 1U))));
        tracep->fullCData(oldp+463,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+464,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+465,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xbU))),5);
        tracep->fullCData(oldp+466,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 6U))),5);
        tracep->fullBit(oldp+467,(vlSelf->top__DOT__ex_flush));
        tracep->fullBit(oldp+468,((3U == (0x7fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 4U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1cU))))));
        tracep->fullBit(oldp+469,((8U == (0x1fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 2U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1eU))))));
        tracep->fullCData(oldp+470,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullCData(oldp+471,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullQData(oldp+472,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+474,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+476,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+478,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+479,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+481,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+482,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+483,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullQData(oldp+485,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x18U))))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr
                                      : 0ULL)),64);
        tracep->fullBit(oldp+487,(vlSelf->top__DOT__clint_axi_arvalid));
        tracep->fullCData(oldp+488,(((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x18U))))
                                      ? (7U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size))
                                      : 0U)),3);
        tracep->fullBit(oldp+489,(((2U == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U))))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready))
                                    : 0U)));
        tracep->fullBit(oldp+490,(vlSelf->top__DOT__clint_axi_awvalid));
        tracep->fullQData(oldp+491,(vlSelf->top__DOT__clint_axi_wdata),64);
        tracep->fullBit(oldp+493,(vlSelf->top__DOT__clint_axi_wvalid));
        tracep->fullBit(oldp+494,(vlSelf->top__DOT__clint_axi_bready));
        tracep->fullBit(oldp+495,(vlSelf->top__DOT__rw_valid_i));
        tracep->fullBit(oldp+496,(vlSelf->top__DOT__fence_id));
        tracep->fullBit(oldp+497,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullBit(oldp+498,(vlSelf->top__DOT__Dcache_u__DOT__clean_OK));
        tracep->fullBit(oldp+499,(vlSelf->top__DOT__DcacheRdValid));
        tracep->fullBit(oldp+500,(vlSelf->top__DOT__DcacheWrValid));
        tracep->fullQData(oldp+501,(vlSelf->top__DOT__DcacheRdAddr),64);
        tracep->fullQData(oldp+503,(vlSelf->top__DOT__DcacheWrAddr),64);
        tracep->fullBit(oldp+505,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullCData(oldp+506,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (0xffU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask))
                                      : 0xffU)),8);
        tracep->fullCData(oldp+507,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (7U & (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size))
                                      : 3U)),3);
        tracep->fullQData(oldp+508,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+510,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
        tracep->fullBit(oldp+511,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullBit(oldp+512,((2U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                          >> 0x18U))))));
        tracep->fullBit(oldp+513,((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                            >> 0x1cU))))));
        tracep->fullIData(oldp+514,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullBit(oldp+515,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullCData(oldp+516,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        tracep->fullBit(oldp+517,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        __Vtemp394[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        __Vtemp394[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        __Vtemp394[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        __Vtemp394[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        tracep->fullWData(oldp+518,(__Vtemp394),128);
        __Vtemp395[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        __Vtemp395[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        __Vtemp395[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        __Vtemp395[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        tracep->fullWData(oldp+522,(__Vtemp395),128);
        tracep->fullBit(oldp+526,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
        tracep->fullBit(oldp+527,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
        tracep->fullBit(oldp+528,(vlSelf->top__DOT__cache_dut__DOT__uncached));
        tracep->fullBit(oldp+529,(vlSelf->top__DOT__cache_dut__DOT__diffAddr));
        tracep->fullBit(oldp+530,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+531,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+532,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+533,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullCData(oldp+534,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
        tracep->fullWData(oldp+535,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
        tracep->fullBit(oldp+543,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+544,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+545,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
        tracep->fullBit(oldp+546,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+547,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+548,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
        tracep->fullBit(oldp+549,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullQData(oldp+550,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+552,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp396[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                           ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->top__DOT__sram_rdata 
                                               >> 0x20U))
                                    : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp396[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp396[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                    ? 0ULL : vlSelf->top__DOT__pc_new) 
                                  >> 0x20U));
        tracep->fullWData(oldp+553,(__Vtemp396),96);
        tracep->fullWData(oldp+556,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+559,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+560,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+561,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+562,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+563,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullBit(oldp+564,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U)))));
        tracep->fullQData(oldp+565,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+567,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+568,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+569,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+570,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+571,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+572,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullBit(oldp+573,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__fence_id))));
        tracep->fullWData(oldp+574,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),316);
        tracep->fullQData(oldp+584,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+586,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+588,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp398, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp399, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp400, __Vtemp398, __Vtemp399);
        VL_EXTEND_WI(65,1, __Vtemp401, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp402, __Vtemp400, __Vtemp401);
        tracep->fullBit(oldp+590,((1U & ((0x4000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp402[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+591,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+592,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+594,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+595,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+597,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+599,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullBit(oldp+600,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullCData(oldp+601,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x17U))),3);
        tracep->fullQData(oldp+602,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp405, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp406, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp407, __Vtemp405, __Vtemp406);
        VL_EXTEND_WI(65,1, __Vtemp408, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp409, __Vtemp407, __Vtemp408);
        tracep->fullBit(oldp+604,((1U & __Vtemp409[2U])));
        tracep->fullBit(oldp+605,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+606,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+608,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+610,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullBit(oldp+612,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__diffIn));
        tracep->fullBit(oldp+613,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__mul_valid));
        tracep->fullCData(oldp+614,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x17U))),4);
        tracep->fullBit(oldp+615,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1bU))));
        tracep->fullCData(oldp+616,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+617,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+619,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+621,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+623,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+625,(((0x8000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+627,(((0x8000000U & 
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
        tracep->fullQData(oldp+629,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+631,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 2U))),2);
        tracep->fullBit(oldp+632,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__stateReg));
        tracep->fullBit(oldp+633,((1U & ((~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__stateReg)) 
                                         | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__stateReg) 
                                            & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q))))));
        tracep->fullCData(oldp+634,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul_signed),2);
        tracep->fullBit(oldp+635,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q));
        tracep->fullBit(oldp+636,(1U));
        tracep->fullBit(oldp+637,((1U & ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul_signed) 
                                         >> 1U))));
        tracep->fullBit(oldp+638,((1U & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul_signed))));
        tracep->fullQData(oldp+639,((QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1))),33);
        tracep->fullQData(oldp+641,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src1),33);
        tracep->fullQData(oldp+643,((QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),33);
        tracep->fullQData(oldp+645,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src2),33);
        VL_EXTEND_WI(66,32, __Vtemp412, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1));
        VL_EXTEND_WI(66,32, __Vtemp413, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2));
        VL_MUL_W(3, __Vtemp414, __Vtemp412, __Vtemp413);
        __Vtemp415[0U] = __Vtemp414[0U];
        __Vtemp415[1U] = __Vtemp414[1U];
        __Vtemp415[2U] = (3U & __Vtemp414[2U]);
        tracep->fullWData(oldp+647,(__Vtemp415),66);
        VL_EXTENDS_WQ(66,33, __Vtemp418, (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1)));
        __Vtemp419[0U] = __Vtemp418[0U];
        __Vtemp419[1U] = __Vtemp418[1U];
        __Vtemp419[2U] = (3U & __Vtemp418[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp421, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src2);
        __Vtemp422[0U] = __Vtemp421[0U];
        __Vtemp422[1U] = __Vtemp421[1U];
        __Vtemp422[2U] = (3U & __Vtemp421[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp423, __Vtemp419, __Vtemp422);
        __Vtemp424[0U] = __Vtemp423[0U];
        __Vtemp424[1U] = __Vtemp423[1U];
        __Vtemp424[2U] = (3U & __Vtemp423[2U]);
        tracep->fullWData(oldp+650,(__Vtemp424),66);
        VL_EXTENDS_WQ(66,33, __Vtemp427, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src1);
        __Vtemp428[0U] = __Vtemp427[0U];
        __Vtemp428[1U] = __Vtemp427[1U];
        __Vtemp428[2U] = (3U & __Vtemp427[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp430, (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)));
        __Vtemp431[0U] = __Vtemp430[0U];
        __Vtemp431[1U] = __Vtemp430[1U];
        __Vtemp431[2U] = (3U & __Vtemp430[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp432, __Vtemp428, __Vtemp431);
        __Vtemp433[0U] = __Vtemp432[0U];
        __Vtemp433[1U] = __Vtemp432[1U];
        __Vtemp433[2U] = (3U & __Vtemp432[2U]);
        tracep->fullWData(oldp+653,(__Vtemp433),66);
        VL_EXTENDS_WQ(66,33, __Vtemp436, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src1);
        __Vtemp437[0U] = __Vtemp436[0U];
        __Vtemp437[1U] = __Vtemp436[1U];
        __Vtemp437[2U] = (3U & __Vtemp436[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp439, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src2);
        __Vtemp440[0U] = __Vtemp439[0U];
        __Vtemp440[1U] = __Vtemp439[1U];
        __Vtemp440[2U] = (3U & __Vtemp439[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp441, __Vtemp437, __Vtemp440);
        __Vtemp442[0U] = __Vtemp441[0U];
        __Vtemp442[1U] = __Vtemp441[1U];
        __Vtemp442[2U] = (3U & __Vtemp441[2U]);
        tracep->fullWData(oldp+656,(__Vtemp442),66);
        tracep->fullBit(oldp+659,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_set));
        tracep->fullBit(oldp+660,(((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q) 
                                   | (IData)(vlSelf->top__DOT__ex_flush))));
        tracep->fullBit(oldp+661,(((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_set) 
                                   | (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q) 
                                       & (~ ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q) 
                                             | (IData)(vlSelf->top__DOT__ex_flush)))) 
                                      & (~ (IData)(vlSelf->top__DOT__ex_flush))))));
        VL_EXTEND_WI(66,32, __Vtemp444, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1));
        VL_EXTEND_WI(66,32, __Vtemp445, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2));
        VL_MUL_W(3, __Vtemp446, __Vtemp444, __Vtemp445);
        VL_EXTENDS_WQ(66,33, __Vtemp450, (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1)));
        __Vtemp451[0U] = __Vtemp450[0U];
        __Vtemp451[1U] = __Vtemp450[1U];
        __Vtemp451[2U] = (3U & __Vtemp450[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp453, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src2);
        __Vtemp454[0U] = __Vtemp453[0U];
        __Vtemp454[1U] = __Vtemp453[1U];
        __Vtemp454[2U] = (3U & __Vtemp453[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp455, __Vtemp451, __Vtemp454);
        VL_EXTENDS_WQ(66,33, __Vtemp459, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src1);
        __Vtemp460[0U] = __Vtemp459[0U];
        __Vtemp460[1U] = __Vtemp459[1U];
        __Vtemp460[2U] = (3U & __Vtemp459[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp462, (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)));
        __Vtemp463[0U] = __Vtemp462[0U];
        __Vtemp463[1U] = __Vtemp462[1U];
        __Vtemp463[2U] = (3U & __Vtemp462[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp464, __Vtemp460, __Vtemp463);
        VL_EXTENDS_WQ(66,33, __Vtemp468, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src1);
        __Vtemp469[0U] = __Vtemp468[0U];
        __Vtemp469[1U] = __Vtemp468[1U];
        __Vtemp469[2U] = (3U & __Vtemp468[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp471, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_hi_src2);
        __Vtemp472[0U] = __Vtemp471[0U];
        __Vtemp472[1U] = __Vtemp471[1U];
        __Vtemp472[2U] = (3U & __Vtemp471[2U]);
        VL_MULS_WWW(66,66,66, __Vtemp473, __Vtemp469, __Vtemp472);
        __Vtemp477[0U] = __Vtemp473[0U];
        __Vtemp477[1U] = __Vtemp473[1U];
        __Vtemp477[2U] = ((__Vtemp464[0U] << 2U) | 
                          (3U & __Vtemp473[2U]));
        __Vtemp477[3U] = ((__Vtemp464[0U] >> 0x1eU) 
                          | (__Vtemp464[1U] << 2U));
        __Vtemp477[4U] = ((__Vtemp455[0U] << 4U) | 
                          ((__Vtemp464[1U] >> 0x1eU) 
                           | (0xcU & (__Vtemp464[2U] 
                                      << 2U))));
        __Vtemp477[5U] = ((__Vtemp455[0U] >> 0x1cU) 
                          | (__Vtemp455[1U] << 4U));
        __Vtemp477[6U] = ((__Vtemp446[0U] << 6U) | 
                          ((__Vtemp455[1U] >> 0x1cU) 
                           | (0x30U & (__Vtemp455[2U] 
                                       << 4U))));
        __Vtemp477[7U] = ((__Vtemp446[0U] >> 0x1aU) 
                          | (__Vtemp446[1U] << 6U));
        __Vtemp477[8U] = ((__Vtemp446[1U] >> 0x1aU) 
                          | (0xc0U & (__Vtemp446[2U] 
                                      << 6U)));
        tracep->fullWData(oldp+662,(__Vtemp477),264);
        tracep->fullCData(oldp+671,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 8U))),3);
        tracep->fullQData(oldp+672,(((((QData)((IData)(
                                                       vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                       << 0x24U) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                        << 4U) | ((QData)((IData)(
                                                                  vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                  >> 0x1cU))) 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1cU))))),64);
        tracep->fullQData(oldp+674,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1cU))))),64);
        tracep->fullBit(oldp+676,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+677,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+678,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+679,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+681,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+683,((1U & ((0x400U & 
                                          vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                          ? ((0x200U 
                                              & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                              ? ((0x100U 
                                                  & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                                  ? (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)
                                                  : 
                                                 (~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)))
                                              : ((0x100U 
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
                                                 >> 9U)) 
                                             & ((0x100U 
                                                 & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                                 ? 
                                                (0U 
                                                 != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres)
                                                 : 
                                                (~ (IData)(
                                                           (0U 
                                                            != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres)))))))));
        tracep->fullBit(oldp+684,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xbU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+685,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 6U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+686,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullQData(oldp+687,(vlSelf->top__DOT__ls_u__DOT__csr_wr_data),64);
        tracep->fullQData(oldp+689,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullBit(oldp+691,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimeWrEn));
        tracep->fullBit(oldp+692,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmpWrEn));
        tracep->fullBit(oldp+693,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__slv_reg_wren));
        tracep->fullIData(oldp+694,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
        tracep->fullBit(oldp+695,(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i));
        tracep->fullBit(oldp+696,(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i));
        tracep->fullBit(oldp+697,(((3U != (0x7fU & 
                                           ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 4U) 
                                            | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1cU)))) 
                                   | (8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 2U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1eU)))))));
        tracep->fullIData(oldp+698,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)
                                      : (((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0xbU)) 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U))))),32);
        tracep->fullCData(oldp+699,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
        tracep->fullBit(oldp+700,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
        tracep->fullBit(oldp+701,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
        tracep->fullBit(oldp+702,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
        VL_EXTEND_WQ(128,64, __Vtemp480, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp487[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U];
            __Vtemp487[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U];
            __Vtemp487[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U];
            __Vtemp487[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U];
        } else {
            __Vtemp487[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp480[0U])
                               : 0U);
            __Vtemp487[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp480[1U])
                               : 0U);
            __Vtemp487[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp480[2U])
                               : 0U);
            __Vtemp487[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp480[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+703,(__Vtemp487),128);
        VL_EXTEND_WQ(128,64, __Vtemp490, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp497[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U];
            __Vtemp497[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U];
            __Vtemp497[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U];
            __Vtemp497[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U];
        } else {
            __Vtemp497[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp490[0U])
                               : 0U);
            __Vtemp497[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp490[1U])
                               : 0U);
            __Vtemp497[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp490[2U])
                               : 0U);
            __Vtemp497[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp490[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+707,(__Vtemp497),128);
        tracep->fullBit(oldp+711,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
        tracep->fullBit(oldp+712,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
        tracep->fullBit(oldp+713,(vlSelf->top__DOT__Dcache_u__DOT__uncached));
        tracep->fullBit(oldp+714,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+715,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
        tracep->fullCData(oldp+717,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
        tracep->fullCData(oldp+718,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+719,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullBit(oldp+720,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+721,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+722,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+723,((((QData)((IData)(
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
        tracep->fullCData(oldp+725,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
        tracep->fullWData(oldp+726,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
        tracep->fullBit(oldp+734,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+735,(vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch),64);
        tracep->fullBit(oldp+737,(vlSelf->top__DOT__Dcache_u__DOT__wrLow));
        tracep->fullBit(oldp+738,(vlSelf->top__DOT__Dcache_u__DOT__wrHigh));
        tracep->fullQData(oldp+739,(vlSelf->top__DOT__Dcache_u__DOT__storeData),64);
        tracep->fullCData(oldp+741,(vlSelf->top__DOT__Dcache_u__DOT__storeMask),8);
        tracep->fullQData(oldp+742,(vlSelf->top__DOT__Dcache_u__DOT__sramMask),64);
        VL_EXTEND_WQ(128,64, __Vtemp500, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp509[0U] = 0xffffffffU;
            __Vtemp509[1U] = 0xffffffffU;
            __Vtemp509[2U] = 0xffffffffU;
            __Vtemp509[3U] = 0xffffffffU;
        } else {
            __Vtemp509[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp500[0U])
                                   : 0U) : 0U);
            __Vtemp509[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp500[1U])
                                   : 0U) : 0U);
            __Vtemp509[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp500[2U])
                                   : 0U) : 0U);
            __Vtemp509[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp500[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+744,(__Vtemp509),128);
        VL_EXTEND_WQ(128,64, __Vtemp512, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp521[0U] = 0xffffffffU;
            __Vtemp521[1U] = 0xffffffffU;
            __Vtemp521[2U] = 0xffffffffU;
            __Vtemp521[3U] = 0xffffffffU;
        } else {
            __Vtemp521[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp512[0U])
                                   : 0U) : 0U);
            __Vtemp521[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp512[1U])
                                   : 0U) : 0U);
            __Vtemp521[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp512[2U])
                                   : 0U) : 0U);
            __Vtemp521[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp512[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+748,(__Vtemp521),128);
        tracep->fullBit(oldp+752,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+753,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+754,((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullIData(oldp+755,((IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)),32);
        tracep->fullBit(oldp+756,((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullCData(oldp+757,(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt),7);
        tracep->fullBit(oldp+758,(vlSelf->top__DOT__Dcache_u__DOT__cleanWrValid));
        tracep->fullBit(oldp+759,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
        VL_EXTEND_WQ(128,64, __Vtemp524, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp534[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp524[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp534[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp524[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp534[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp524[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp534[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp524[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+760,(__Vtemp534),128);
        VL_EXTEND_WQ(128,64, __Vtemp537, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp547[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp537[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp547[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp537[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp547[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp537[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp547[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp537[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+764,(__Vtemp547),128);
        tracep->fullBit(oldp+768,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
        tracep->fullCData(oldp+769,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullWData(oldp+770,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullBit(oldp+780,((1U & ((IData)(vlSelf->top__DOT__fence_id) 
                                         | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]))));
        tracep->fullBit(oldp+781,((1U & (~ (((((((IData)(vlSelf->top__DOT__fence_id) 
                                                 | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
                                                & (~ (IData)(vlSelf->top__DOT__is_jump))) 
                                               | (IData)(vlSelf->top__DOT__ld_use_hazard)) 
                                              | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                             | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                            | (IData)(vlSelf->top__DOT__ex_not_ok))))));
        tracep->fullBit(oldp+782,((1U & (~ ((((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                              | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                             | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                            | (IData)(vlSelf->top__DOT__ex_not_ok))))));
        tracep->fullBit(oldp+783,((1U & (~ (((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                             | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                            | (IData)(vlSelf->top__DOT__ex_not_ok))))));
        tracep->fullBit(oldp+784,((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    | ((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit) 
                                          | (~ (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i))))) 
                                   | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk)))));
        tracep->fullBit(oldp+785,((1U & (~ ((((((((
                                                   ((0U 
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
                                              | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)) 
                                             | (4U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                            | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])))));
        tracep->fullBit(oldp+786,((1U & ((((((((((0U 
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
                                            | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                           | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)) 
                                          | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                         | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]))));
        tracep->fullBit(oldp+787,((1U & (~ ((((((((
                                                   ((0U 
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
                                              | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)) 
                                             | (4U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                            | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])))));
        tracep->fullBit(oldp+788,((1U & ((((((((((0U 
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
                                            | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                           | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)) 
                                          | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                         | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]))));
        tracep->fullQData(oldp+789,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+791,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp552[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           << 0x1cU) | (((IData)(vlSelf->top__DOT__aluctr_id) 
                                         << 0x17U) 
                                        | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                             & (IData)(vlSelf->top__DOT__is_jalr_id)) 
                                            << 0x16U) 
                                           | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                & (IData)(vlSelf->top__DOT__is_jal_id)) 
                                               << 0x15U) 
                                              | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                   & (IData)(vlSelf->top__DOT__is_brc_id)) 
                                                  << 0x14U) 
                                                 | (((IData)(vlSelf->top__DOT__src1sel_id) 
                                                     << 0x13U) 
                                                    | (((IData)(vlSelf->top__DOT__src2sel_id) 
                                                        << 0x11U) 
                                                       | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                            & (IData)(vlSelf->top__DOT__wben_id)) 
                                                           << 0x10U) 
                                                          | (((IData)(vlSelf->top__DOT__rs1_idx_id) 
                                                              << 0xbU) 
                                                             | (((IData)(vlSelf->top__DOT__rs2_idx_id) 
                                                                 << 6U) 
                                                                | (((IData)(vlSelf->top__DOT__DivEn_id) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__DivSel_id) 
                                                                       << 2U) 
                                                                      | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                                           & (IData)(vlSelf->top__DOT__trap_id)) 
                                                                          << 1U) 
                                                                         | ((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                                            & (IData)(vlSelf->top__DOT__fence_id)))))))))))))));
        __Vtemp552[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           >> 4U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp552[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                    >> 0x20U)) >> 4U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs1_idx_id])) 
                             << 0x1cU));
        __Vtemp552[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id])) 
                           >> 4U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs1_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp552[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id]) 
                                    >> 0x20U)) >> 4U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs2_idx_id])) 
                             << 0x1cU));
        __Vtemp552[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])) 
                           >> 4U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs2_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp552[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id]) 
                                    >> 0x20U)) >> 4U) 
                          | (((IData)(vlSelf->top__DOT__ex_flush)
                               ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                             << 0x1cU));
        __Vtemp552[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                             ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                           >> 4U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                     << 0x1cU));
        __Vtemp552[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                           >> 4U) | ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                                ? 0ULL
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp552[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                   >> 0x20U)) >> 4U);
        tracep->fullWData(oldp+793,(__Vtemp552),316);
        tracep->fullBit(oldp+803,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullQData(oldp+804,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+806,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+807,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+808,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready));
        tracep->fullBit(oldp+809,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                    : 0U)));
        tracep->fullQData(oldp+810,(vlSelf->top__DOT__ls_axi_r_data_i),64);
        tracep->fullBit(oldp+812,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullBit(oldp+813,(vlSelf->top__DOT__if_stall_n));
        tracep->fullBit(oldp+814,(vlSelf->top__DOT__ex_not_ok));
        tracep->fullBit(oldp+815,(vlSelf->top__DOT__ls_stall_n));
        tracep->fullBit(oldp+816,(vlSelf->top__DOT__dataNotOk));
        tracep->fullQData(oldp+817,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullBit(oldp+819,(vlSelf->top__DOT__dataValid_o));
        tracep->fullBit(oldp+820,(vlSelf->top__DOT__lsAxiRdDataVAlid));
        tracep->fullBit(oldp+821,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+822,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+823,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+825,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullCData(oldp+826,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullCData(oldp+827,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+828,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+829,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
        tracep->fullBit(oldp+830,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT____Vcellinp__resultValidReg__i_rst_n));
        tracep->fullBit(oldp+831,(vlSelf->top__DOT__ls_u__DOT__csr_stall_n));
        tracep->fullCData(oldp+832,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+833,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+834,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullCData(oldp+835,(vlSelf->top__DOT__Dcache_u__DOT__cacheNexState),3);
        tracep->fullBit(oldp+836,(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk));
        tracep->fullCData(oldp+837,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+838,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+839,(vlSelf->top__DOT__axi_ls_u__DOT__w_state_next),2);
        tracep->fullCData(oldp+840,(vlSelf->top__DOT__axi_ls_u__DOT__r_state_next),2);
        tracep->fullWData(oldp+841,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullQData(oldp+851,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+853,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+855,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+857,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+859,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+861,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+863,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+865,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+867,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+869,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+871,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+873,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+875,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+877,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+879,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+881,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+883,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+885,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+887,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+889,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+891,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+893,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+895,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+897,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+899,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+901,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+903,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+905,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+907,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+909,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+911,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+913,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+915,(vlSelf->clk));
        tracep->fullBit(oldp+916,(vlSelf->rst_n));
        tracep->fullQData(oldp+917,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+919,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+921,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+922,(vlSelf->regA0),64);
        tracep->fullBit(oldp+924,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+925,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+926,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+927,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+929,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+930,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+931,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+932,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+933,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+934,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+935,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+936,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+937,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+938,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+939,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+940,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+941,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+942,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+944,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+945,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+946,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+947,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+948,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+949,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+951,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+952,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+953,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+954,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+955,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+956,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+957,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+958,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+959,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+960,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+961,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+962,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+963,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+965,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+966,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+967,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+968,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+969,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+970,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+971,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+972,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+973,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? 0U
                                    : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullCData(oldp+974,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0U : (3U & 
                                              ((0xaU 
                                                == 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                            >> 0x1cU))))
                                                ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                                : (
                                                   (2U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                                >> 0x18U))))
                                                    ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp)
                                                    : (IData)(vlSelf->axi_r_resp_i)))))),2);
        tracep->fullBit(oldp+975,(((0xaU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x1cU))))
                                    ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)
                                    : ((2U == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready)
                                        : (IData)(vlSelf->axi_aw_ready_i)))));
        tracep->fullBit(oldp+976,(((0xaU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x1cU))))
                                    ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid)
                                    : ((2U == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid)
                                        : (IData)(vlSelf->axi_b_valid_i)))));
        tracep->fullCData(oldp+977,(((0xaU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x1cU))))
                                      ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp)
                                      : ((2U == (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x18U))))
                                          ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp)
                                          : (IData)(vlSelf->axi_b_resp_i)))),2);
        tracep->fullCData(oldp+978,(((0xaU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x1cU))))
                                      ? 1U : ((2U == 
                                               (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U))))
                                               ? 1U
                                               : (0xfU 
                                                  & (IData)(vlSelf->axi_b_id_i))))),4);
        tracep->fullBit(oldp+979,((1U & ((0xaU == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x1cU))))
                                          ? (IData)(vlSelf->top__DOT__axi_mmio_b_user_i)
                                          : ((2U == 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x18U))))
                                              ? 0U : (IData)(vlSelf->axi_b_user_i))))));
        tracep->fullBit(oldp+980,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? (1U 
                                                   & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                    : 0U)));
        tracep->fullCData(oldp+981,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? (3U & ((0xaU 
                                                == 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                            >> 0x1cU))))
                                                ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                                : (
                                                   (2U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                                >> 0x18U))))
                                                    ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp)
                                                    : (IData)(vlSelf->axi_r_resp_i))))
                                      : 0U)),2);
        tracep->fullQData(oldp+982,(((((((((- (QData)((IData)(
                                                              ((3U 
                                                                == 
                                                                (0x7fU 
                                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                    >> 3U))) 
                                                               & (0U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                      >> 0xfU))))))) 
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
                                                                      >> 3U))) 
                                                                 & (4U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                        >> 0xfU))))))) 
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
        tracep->fullCData(oldp+984,(((0xaU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                          >> 0x1cU))))
                                      ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                      : ((2U == (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                            >> 0x18U))))
                                          ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp)
                                          : (IData)(vlSelf->axi_r_resp_i)))),2);
        tracep->fullBit(oldp+985,((1U & ((0xaU == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x1cU))))
                                          ? (IData)(vlSelf->top__DOT__axi_mmio_r_user_i)
                                          : ((2U == 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                          >> 0x18U))))
                                              ? 0U : (IData)(vlSelf->axi_r_user_i))))));
        tracep->fullBit(oldp+986,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->fullBit(oldp+987,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->fullIData(oldp+988,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 0xbU)))
                                          : 0U) : 0U)),21);
        tracep->fullIData(oldp+989,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? 0U : (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 0xbU))))
                                      : 0U)),21);
        tracep->fullQData(oldp+990,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+992,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullBit(oldp+994,(((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__resultValidReg_q) 
                                   | (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q))));
        tracep->fullBit(oldp+995,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__multiplier__DOT__resultValidReg_q));
        tracep->fullIData(oldp+996,(((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? ((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                          ? ((0x40U 
                                              & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                                              ? ((((IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                            >> 
                                                            (0x3fU 
                                                             & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt)))) 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                                                              >> 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))))) 
                                                  & (IData)(vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay))
                                                  ? 
                                                 ((vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                                   [
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))] 
                                                   << 0xbU) 
                                                  | (0x7e0U 
                                                     & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt) 
                                                        << 5U)))
                                                  : 0U)
                                              : ((((IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                            >> 
                                                            (0x3fU 
                                                             & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt)))) 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                                                              >> 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))))) 
                                                  & (IData)(vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay))
                                                  ? 
                                                 ((vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                                   [
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))] 
                                                   << 0xbU) 
                                                  | (0x7e0U 
                                                     & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt) 
                                                        << 5U)))
                                                  : 0U))
                                          : 0U) : (
                                                   (6U 
                                                    == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                    ? 
                                                   ((IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 3U)) 
                                                    << 3U)
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
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
                                                           << 5U))))))),32);
        tracep->fullBit(oldp+997,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullBit(oldp+998,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullIData(oldp+999,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullIData(oldp+1000,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+1001,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
                                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
                                               : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
                                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
                                               : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
        tracep->fullQData(oldp+1003,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
                                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
                                               : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
                                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
                                               : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
        tracep->fullBit(oldp+1005,(((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i) 
                                    & ((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
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
        tracep->fullIData(oldp+1006,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                       ? ((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)) 
                                          << 3U) : 
                                      ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                        ? ((vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 5U)))] 
                                            << 0xbU) 
                                           | (0x7e0U 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 5U)) 
                                                 << 5U)))
                                        : ((vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 5U)))] 
                                            << 0xbU) 
                                           | (0x7e0U 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 5U)) 
                                                 << 5U)))))),32);
        tracep->fullIData(oldp+1007,(0x40U),32);
        tracep->fullIData(oldp+1008,(4U),32);
        tracep->fullIData(oldp+1009,(8U),32);
        tracep->fullIData(oldp+1010,(1U),32);
        tracep->fullCData(oldp+1011,(0U),3);
        tracep->fullBit(oldp+1012,(0U));
        tracep->fullBit(oldp+1013,(0U));
        tracep->fullCData(oldp+1014,(0U),4);
        tracep->fullBit(oldp+1015,(vlSelf->top__DOT__axi_mmio_r_last_i));
        tracep->fullCData(oldp+1016,(vlSelf->top__DOT__axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+1017,(vlSelf->top__DOT__axi_mmio_r_user_i));
        tracep->fullCData(oldp+1018,(vlSelf->top__DOT__axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+1019,(vlSelf->top__DOT__axi_mmio_b_user_i));
        tracep->fullCData(oldp+1020,(1U),2);
        tracep->fullCData(oldp+1021,(2U),4);
        tracep->fullCData(oldp+1022,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+1023,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+1024,(1U),4);
        tracep->fullCData(oldp+1025,(0xfU),4);
        tracep->fullCData(oldp+1026,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+1027,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+1028,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+1030,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+1031,(1U));
        tracep->fullBit(oldp+1032,(vlSelf->top__DOT__ls_sram_rd_data_valid));
        tracep->fullBit(oldp+1033,(vlSelf->top__DOT__ls_sram_wr_data_ok));
        tracep->fullBit(oldp+1034,(0U));
        tracep->fullQData(oldp+1035,(0ULL),64);
        tracep->fullCData(oldp+1037,(0U),8);
        tracep->fullCData(oldp+1038,(1U),3);
        tracep->fullCData(oldp+1039,(2U),3);
        tracep->fullCData(oldp+1040,(3U),3);
        tracep->fullCData(oldp+1041,(7U),3);
        tracep->fullCData(oldp+1042,(6U),3);
        tracep->fullBit(oldp+1043,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+1044,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullIData(oldp+1045,(0x80U),32);
        tracep->fullIData(oldp+1046,(6U),32);
        __Vtemp553[0U] = 0U;
        __Vtemp553[1U] = 0U;
        __Vtemp553[2U] = 0U;
        __Vtemp553[3U] = 0U;
        tracep->fullWData(oldp+1047,(__Vtemp553),128);
        __Vtemp554[0U] = 0xffffffffU;
        __Vtemp554[1U] = 0xffffffffU;
        __Vtemp554[2U] = 0xffffffffU;
        __Vtemp554[3U] = 0xffffffffU;
        tracep->fullWData(oldp+1051,(__Vtemp554),128);
        tracep->fullCData(oldp+1055,(0U),2);
        tracep->fullCData(oldp+1056,(3U),2);
        tracep->fullCData(oldp+1057,(2U),2);
        tracep->fullIData(oldp+1058,(3U),32);
        tracep->fullIData(oldp+1059,(0x60U),32);
        tracep->fullIData(oldp+1060,(0U),32);
        tracep->fullIData(oldp+1061,(0x13cU),32);
        tracep->fullBit(oldp+1062,(vlSelf->top__DOT__ex_stage_u__DOT__aluNotOk));
        tracep->fullIData(oldp+1063,(0x108U),32);
        tracep->fullBit(oldp+1064,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+1065,(0xe3U),32);
        tracep->fullCData(oldp+1066,(4U),3);
        tracep->fullBit(oldp+1067,(vlSelf->top__DOT__Dcache_u__DOT__validWay1_q));
        tracep->fullBit(oldp+1068,(vlSelf->top__DOT__Dcache_u__DOT__validWay2_q));
        tracep->fullBit(oldp+1069,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullCData(oldp+1070,(3U),8);
        tracep->fullIData(oldp+1071,(0x121U),32);
        tracep->fullIData(oldp+1072,(0x40U),32);
        tracep->fullIData(oldp+1073,(3U),32);
        tracep->fullIData(oldp+1074,(1U),32);
        tracep->fullQData(oldp+1075,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+1077,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index),32);
    }
}
