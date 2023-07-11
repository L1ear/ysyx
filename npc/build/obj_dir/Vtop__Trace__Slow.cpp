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
        tracep->declBit(c+821,"clk", false,-1);
        tracep->declBit(c+822,"rst_n", false,-1);
        tracep->declQuad(c+823,"pc_diff", false,-1, 63,0);
        tracep->declQuad(c+825,"pc_decoding", false,-1, 63,0);
        tracep->declBus(c+827,"instr_diff", false,-1, 31,0);
        tracep->declQuad(c+828,"regA0", false,-1, 63,0);
        tracep->declBit(c+830,"stall_n_diff", false,-1);
        tracep->declBit(c+831,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+832,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+833,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+835,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+836,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+837,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+838,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+839,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+840,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+841,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+842,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+843,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+844,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+845,"axi_r_ready_o", false,-1);
        tracep->declBit(c+846,"axi_r_valid_i", false,-1);
        tracep->declBus(c+847,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+848,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+850,"axi_r_last_i", false,-1);
        tracep->declBus(c+851,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+852,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+853,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+854,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+855,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+857,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+858,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+859,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+860,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+861,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+862,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+863,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+864,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+865,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+866,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+867,"axi_w_ready_i", false,-1);
        tracep->declBit(c+868,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+869,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+871,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+872,"axi_w_last_o", false,-1);
        tracep->declBus(c+873,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+874,"axi_b_ready_o", false,-1);
        tracep->declBit(c+875,"axi_b_valid_i", false,-1);
        tracep->declBus(c+876,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+877,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+878,"axi_b_user_i", false,-1, 0,0);
        tracep->declBus(c+911,"top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+911,"top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+911,"top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+911,"top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+912,"top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+913,"top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+914,"top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+821,"top clk", false,-1);
        tracep->declBit(c+822,"top rst_n", false,-1);
        tracep->declQuad(c+823,"top pc_diff", false,-1, 63,0);
        tracep->declQuad(c+825,"top pc_decoding", false,-1, 63,0);
        tracep->declBus(c+827,"top instr_diff", false,-1, 31,0);
        tracep->declQuad(c+828,"top regA0", false,-1, 63,0);
        tracep->declBit(c+830,"top stall_n_diff", false,-1);
        tracep->declBit(c+831,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+832,"top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+833,"top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+835,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+836,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+837,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+838,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+839,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+840,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+841,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+842,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+843,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+844,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+845,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+846,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+847,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+848,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+850,"top axi_r_last_i", false,-1);
        tracep->declBus(c+851,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+852,"top axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+853,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+854,"top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+855,"top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+857,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+858,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+859,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+860,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+861,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+862,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+863,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+864,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+865,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+866,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+867,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+868,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+869,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+871,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+872,"top axi_w_last_o", false,-1);
        tracep->declBus(c+873,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+874,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+875,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+876,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+877,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+878,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+175,"top axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+326,"top axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+327,"top axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+915,"top axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+139,"top axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+140,"top axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+329,"top axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+330,"top axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+917,"top axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+331,"top axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+918,"top axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+141,"top axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+332,"top axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+176,"top axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+177,"top axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+178,"top axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+919,"top axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+920,"top axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+921,"top axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declBit(c+180,"top axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+333,"top axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+181,"top axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+915,"top axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+183,"top axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+303,"top axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+184,"top axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+185,"top axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+917,"top axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+186,"top axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+918,"top axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+918,"top axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+187,"top axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+334,"top axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+304,"top axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+188,"top axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+306,"top axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+916,"top axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+335,"top axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+189,"top axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+190,"top axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+922,"top axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+923,"top axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1,"top instr_fetching", false,-1);
        tracep->declBit(c+879,"top if_axi_ar_ready_i", false,-1);
        tracep->declBit(c+2,"top if_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+3,"top if_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+915,"top if_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+918,"top if_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+916,"top if_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+336,"top if_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+337,"top if_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+924,"top if_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+917,"top if_axi_ar_lock_o", false,-1);
        tracep->declBus(c+925,"top if_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+918,"top if_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+926,"top if_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+5,"top if_axi_r_ready_o", false,-1);
        tracep->declBit(c+707,"top if_axi_r_valid_i", false,-1);
        tracep->declBus(c+880,"top if_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+708,"top if_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+710,"top if_axi_r_last_i", false,-1);
        tracep->declBus(c+711,"top if_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+927,"top if_axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+881,"top ls_axi_aw_ready_i", false,-1);
        tracep->declBit(c+338,"top ls_axi_aw_valid_o", false,-1);
        tracep->declQuad(c+191,"top ls_axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+915,"top ls_axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+928,"top ls_axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+916,"top ls_axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+339,"top ls_axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+193,"top ls_axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+924,"top ls_axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+917,"top ls_axi_aw_lock_o", false,-1);
        tracep->declBus(c+929,"top ls_axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+918,"top ls_axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+918,"top ls_axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+712,"top ls_axi_w_ready_i", false,-1);
        tracep->declBit(c+340,"top ls_axi_w_valid_o", false,-1);
        tracep->declQuad(c+341,"top ls_axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+194,"top ls_axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+343,"top ls_axi_w_last_o", false,-1);
        tracep->declBus(c+916,"top ls_axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+344,"top ls_axi_b_ready_o", false,-1);
        tracep->declBit(c+882,"top ls_axi_b_valid_i", false,-1);
        tracep->declBus(c+883,"top ls_axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+884,"top ls_axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+885,"top ls_axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+886,"top ls_axi_ar_ready_i", false,-1);
        tracep->declBit(c+6,"top ls_axi_ar_valid_o", false,-1);
        tracep->declQuad(c+7,"top ls_axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+915,"top ls_axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+928,"top ls_axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+916,"top ls_axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+339,"top ls_axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+142,"top ls_axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+924,"top ls_axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+917,"top ls_axi_ar_lock_o", false,-1);
        tracep->declBus(c+925,"top ls_axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+918,"top ls_axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+930,"top ls_axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+9,"top ls_axi_r_ready_o", false,-1);
        tracep->declBit(c+713,"top ls_axi_r_valid_i", false,-1);
        tracep->declBus(c+887,"top ls_axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+714,"top ls_axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+716,"top ls_axi_r_last_i", false,-1);
        tracep->declBus(c+711,"top ls_axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+931,"top ls_axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+932,"top pc_next", false,-1, 63,0);
        tracep->declQuad(c+345,"top pc_new", false,-1, 63,0);
        tracep->declBit(c+347,"top is_jump", false,-1);
        tracep->declQuad(c+348,"top pc_jump", false,-1, 63,0);
        tracep->declBit(c+686,"top pc_stall_n", false,-1);
        tracep->declBit(c+717,"top if_stall_n", false,-1);
        tracep->declBit(c+350,"top if_instr_valid", false,-1);
        tracep->declBit(c+934,"top sram_data_valid", false,-1);
        tracep->declQuad(c+351,"top sram_rdata", false,-1, 63,0);
        tracep->declQuad(c+353,"top sram_addr", false,-1, 63,0);
        tracep->declBit(c+935,"top sram_ren", false,-1);
        tracep->declBit(c+355,"top sram_addr_valid", false,-1);
        tracep->declBit(c+356,"top cacheAddrOk_i", false,-1);
        tracep->declBit(c+357,"top cacheDataNotOk_i", false,-1);
        tracep->declBus(c+358,"top instr_if_id_reg", false,-1, 31,0);
        tracep->declQuad(c+359,"top pc_id", false,-1, 63,0);
        tracep->declBus(c+361,"top instr_id", false,-1, 31,0);
        tracep->declQuad(c+693,"top rs2_id", false,-1, 63,0);
        tracep->declQuad(c+695,"top rs1_id", false,-1, 63,0);
        tracep->declQuad(c+362,"top imm_id", false,-1, 63,0);
        tracep->declBit(c+364,"top src1sel_id", false,-1);
        tracep->declBus(c+365,"top src2sel_id", false,-1, 1,0);
        tracep->declBus(c+366,"top aluctr_id", false,-1, 4,0);
        tracep->declBit(c+367,"top is_brc_id", false,-1);
        tracep->declBit(c+368,"top is_jal_id", false,-1);
        tracep->declBit(c+369,"top is_jalr_id", false,-1);
        tracep->declBit(c+370,"top wben_id", false,-1);
        tracep->declBus(c+371,"top rs1_idx_id", false,-1, 4,0);
        tracep->declBus(c+372,"top rs2_idx_id", false,-1, 4,0);
        tracep->declBit(c+687,"top id_stall_n", false,-1);
        tracep->declBit(c+373,"top DivEn_id", false,-1);
        tracep->declBus(c+374,"top DivSel_id", false,-1, 2,0);
        tracep->declBit(c+375,"top in_trap_id", false,-1);
        tracep->declBit(c+376,"top out_trap_id", false,-1);
        tracep->declBit(c+377,"top trap_id", false,-1);
        tracep->declBit(c+378,"top ld_use_hazard", false,-1);
        tracep->declBit(c+379,"top id_flush", false,-1);
        tracep->declQuad(c+380,"top pc_ex", false,-1, 63,0);
        tracep->declBus(c+382,"top instr_ex", false,-1, 31,0);
        tracep->declQuad(c+383,"top alures_ex", false,-1, 63,0);
        tracep->declBit(c+385,"top src1sel_ex", false,-1);
        tracep->declBus(c+386,"top src2sel_ex", false,-1, 1,0);
        tracep->declQuad(c+387,"top rs2_ex", false,-1, 63,0);
        tracep->declQuad(c+389,"top rs1_ex", false,-1, 63,0);
        tracep->declQuad(c+391,"top imm_ex", false,-1, 63,0);
        tracep->declQuad(c+393,"top rs2_ex_u_o", false,-1, 63,0);
        tracep->declBus(c+395,"top aluctr_ex", false,-1, 4,0);
        tracep->declBit(c+396,"top is_brc_ex", false,-1);
        tracep->declBit(c+397,"top is_jal_ex", false,-1);
        tracep->declBit(c+398,"top is_jalr_ex", false,-1);
        tracep->declBit(c+399,"top wben_ex", false,-1);
        tracep->declBit(c+400,"top DivEn_ex", false,-1);
        tracep->declBus(c+401,"top DivSel_ex", false,-1, 2,0);
        tracep->declBit(c+402,"top trap_ex", false,-1);
        tracep->declBit(c+688,"top ex_stall_n", false,-1);
        tracep->declQuad(c+10,"top wbres_fw", false,-1, 63,0);
        tracep->declBus(c+403,"top rs1_sel", false,-1, 1,0);
        tracep->declBus(c+404,"top rs2_sel", false,-1, 1,0);
        tracep->declBus(c+405,"top rs1_idx_ex", false,-1, 4,0);
        tracep->declBus(c+406,"top rs2_idx_ex", false,-1, 4,0);
        tracep->declBit(c+407,"top ex_flush", false,-1);
        tracep->declBit(c+408,"top rden_ls", false,-1);
        tracep->declBit(c+409,"top wren_ls", false,-1);
        tracep->declBit(c+718,"top ls_addr_ok_i", false,-1);
        tracep->declBit(c+719,"top ex_not_ok", false,-1);
        tracep->declQuad(c+12,"top pc_ls", false,-1, 63,0);
        tracep->declQuad(c+14,"top rs2_ls", false,-1, 63,0);
        tracep->declQuad(c+16,"top alures_ls", false,-1, 63,0);
        tracep->declBus(c+18,"top instr_ls", false,-1, 31,0);
        tracep->declQuad(c+888,"top lsres_ls", false,-1, 63,0);
        tracep->declBit(c+19,"top wben_ls", false,-1);
        tracep->declQuad(c+20,"top csrdata_ls", false,-1, 63,0);
        tracep->declQuad(c+22,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"top csr_mepc", false,-1, 63,0);
        tracep->declBit(c+26,"top trap_ls", false,-1);
        tracep->declBit(c+720,"top ls_stall_n", false,-1);
        tracep->declBit(c+721,"top ls_not_ok", false,-1);
        tracep->declQuad(c+16,"top ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_sram_wr_en", false,-1);
        tracep->declQuad(c+143,"top ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+410,"top ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBit(c+936,"top ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+937,"top ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+722,"top ls_sram_rd_data", false,-1, 63,0);
        tracep->declBus(c+411,"top ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top ls_sram_rd_size", false,-1, 2,0);
        tracep->declQuad(c+412,"top pc_wb", false,-1, 63,0);
        tracep->declQuad(c+414,"top alures_wb", false,-1, 63,0);
        tracep->declQuad(c+416,"top lsres_wb", false,-1, 63,0);
        tracep->declBus(c+418,"top instr_wb", false,-1, 31,0);
        tracep->declQuad(c+419,"top wb_data", false,-1, 63,0);
        tracep->declBus(c+421,"top wb_rdid", false,-1, 4,0);
        tracep->declBit(c+422,"top wben_wb", false,-1);
        tracep->declQuad(c+423,"top csrdata_wb", false,-1, 63,0);
        tracep->declBit(c+720,"top wb_stall_n", false,-1);
        tracep->declQuad(c+425,"top clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+915,"top clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+427,"top clint_axi_arvalid", false,-1);
        tracep->declBit(c+195,"top clint_axi_arready", false,-1);
        tracep->declBus(c+428,"top clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+30,"top clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+196,"top clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+197,"top clint_axi_rvalid", false,-1);
        tracep->declBit(c+429,"top clint_axi_rready", false,-1);
        tracep->declBus(c+198,"top clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+199,"top clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+915,"top clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+430,"top clint_axi_awvalid", false,-1);
        tracep->declBit(c+201,"top clint_axi_awready", false,-1);
        tracep->declQuad(c+431,"top clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+202,"top clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+433,"top clint_axi_wvalid", false,-1);
        tracep->declBit(c+203,"top clint_axi_wready", false,-1);
        tracep->declBus(c+196,"top clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+204,"top clint_axi_bvalid", false,-1);
        tracep->declBit(c+434,"top clint_axi_bready", false,-1);
        tracep->declBit(c+435,"top rw_valid_i", false,-1);
        tracep->declBit(c+32,"top rw_ready_o", false,-1);
        tracep->declBus(c+336,"top fetchLenth", false,-1, 7,0);
        tracep->declBit(c+710,"top rdLast_o", false,-1);
        tracep->declBus(c+145,"top rw_addr_i", false,-1, 31,0);
        tracep->declQuad(c+708,"top data_read_o", false,-1, 63,0);
        tracep->declBit(c+724,"top dataValid_o", false,-1);
        tracep->declBit(c+436,"top fence_id", false,-1);
        tracep->declBit(c+437,"top fence_ex", false,-1);
        tracep->declBit(c+146,"top ld_csr_hazard", false,-1);
        tracep->declBit(c+33,"top ls_flush", false,-1);
        tracep->declBit(c+33,"top in_intr_ls", false,-1);
        tracep->declBit(c+721,"top dataNotOk", false,-1);
        tracep->declBit(c+34,"top fence_ls", false,-1);
        tracep->declBit(c+438,"top clear_Icache", false,-1);
        tracep->declBit(c+439,"top DcacheRdValid", false,-1);
        tracep->declBit(c+440,"top DcacheWrValid", false,-1);
        tracep->declBit(c+35,"top lsAxiRdReady", false,-1);
        tracep->declBus(c+339,"top lsFetchLenth", false,-1, 7,0);
        tracep->declBit(c+716,"top lsRdLast", false,-1);
        tracep->declQuad(c+441,"top DcacheRdAddr", false,-1, 63,0);
        tracep->declQuad(c+443,"top DcacheWrAddr", false,-1, 63,0);
        tracep->declQuad(c+714,"top lsAxiRdData", false,-1, 63,0);
        tracep->declBit(c+725,"top lsAxiRdDataVAlid", false,-1);
        tracep->declBit(c+445,"top lsAxiWrReady", false,-1);
        tracep->declArray(c+307,"top lsAxiWrData", false,-1, 255,0);
        tracep->declBus(c+339,"top lsStoreLenth", false,-1, 7,0);
        tracep->declBus(c+446,"top lsStoreMask", false,-1, 7,0);
        tracep->declBus(c+447,"top lsStoreSize", false,-1, 2,0);
        tracep->declBus(c+142,"top lsLoadSize", false,-1, 2,0);
        tracep->declBus(c+911,"top axi_crossbar_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+911,"top axi_crossbar_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+911,"top axi_crossbar_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+911,"top axi_crossbar_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+912,"top axi_crossbar_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+913,"top axi_crossbar_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+914,"top axi_crossbar_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1,"top axi_crossbar_u instr_fetching", false,-1);
        tracep->declBit(c+879,"top axi_crossbar_u if_axi_ar_ready_o", false,-1);
        tracep->declBit(c+2,"top axi_crossbar_u if_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+3,"top axi_crossbar_u if_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+915,"top axi_crossbar_u if_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+918,"top axi_crossbar_u if_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_crossbar_u if_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+336,"top axi_crossbar_u if_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+337,"top axi_crossbar_u if_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+924,"top axi_crossbar_u if_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+917,"top axi_crossbar_u if_axi_ar_lock_i", false,-1);
        tracep->declBus(c+925,"top axi_crossbar_u if_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+918,"top axi_crossbar_u if_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+926,"top axi_crossbar_u if_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+5,"top axi_crossbar_u if_axi_r_ready_i", false,-1);
        tracep->declBit(c+707,"top axi_crossbar_u if_axi_r_valid_o", false,-1);
        tracep->declBus(c+880,"top axi_crossbar_u if_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+708,"top axi_crossbar_u if_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+710,"top axi_crossbar_u if_axi_r_last_o", false,-1);
        tracep->declBus(c+711,"top axi_crossbar_u if_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+927,"top axi_crossbar_u if_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+881,"top axi_crossbar_u ls_axi_aw_ready_o", false,-1);
        tracep->declBit(c+338,"top axi_crossbar_u ls_axi_aw_valid_i", false,-1);
        tracep->declQuad(c+191,"top axi_crossbar_u ls_axi_aw_addr_i", false,-1, 63,0);
        tracep->declBus(c+915,"top axi_crossbar_u ls_axi_aw_prot_i", false,-1, 2,0);
        tracep->declBus(c+928,"top axi_crossbar_u ls_axi_aw_id_i", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_crossbar_u ls_axi_aw_user_i", false,-1, 0,0);
        tracep->declBus(c+339,"top axi_crossbar_u ls_axi_aw_len_i", false,-1, 7,0);
        tracep->declBus(c+193,"top axi_crossbar_u ls_axi_aw_size_i", false,-1, 2,0);
        tracep->declBus(c+924,"top axi_crossbar_u ls_axi_aw_burst_i", false,-1, 1,0);
        tracep->declBit(c+917,"top axi_crossbar_u ls_axi_aw_lock_i", false,-1);
        tracep->declBus(c+929,"top axi_crossbar_u ls_axi_aw_cache_i", false,-1, 3,0);
        tracep->declBus(c+918,"top axi_crossbar_u ls_axi_aw_qos_i", false,-1, 3,0);
        tracep->declBus(c+918,"top axi_crossbar_u ls_axi_aw_region_i", false,-1, 3,0);
        tracep->declBit(c+712,"top axi_crossbar_u ls_axi_w_ready_o", false,-1);
        tracep->declBit(c+340,"top axi_crossbar_u ls_axi_w_valid_i", false,-1);
        tracep->declQuad(c+341,"top axi_crossbar_u ls_axi_w_data_i", false,-1, 63,0);
        tracep->declBus(c+194,"top axi_crossbar_u ls_axi_w_strb_i", false,-1, 7,0);
        tracep->declBit(c+343,"top axi_crossbar_u ls_axi_w_last_i", false,-1);
        tracep->declBus(c+916,"top axi_crossbar_u ls_axi_w_user_i", false,-1, 0,0);
        tracep->declBit(c+344,"top axi_crossbar_u ls_axi_b_ready_i", false,-1);
        tracep->declBit(c+882,"top axi_crossbar_u ls_axi_b_valid_o", false,-1);
        tracep->declBus(c+883,"top axi_crossbar_u ls_axi_b_resp_o", false,-1, 1,0);
        tracep->declBus(c+884,"top axi_crossbar_u ls_axi_b_id_o", false,-1, 3,0);
        tracep->declBus(c+885,"top axi_crossbar_u ls_axi_b_user_o", false,-1, 0,0);
        tracep->declBit(c+886,"top axi_crossbar_u ls_axi_ar_ready_o", false,-1);
        tracep->declBit(c+6,"top axi_crossbar_u ls_axi_ar_valid_i", false,-1);
        tracep->declQuad(c+7,"top axi_crossbar_u ls_axi_ar_addr_i", false,-1, 63,0);
        tracep->declBus(c+915,"top axi_crossbar_u ls_axi_ar_prot_i", false,-1, 2,0);
        tracep->declBus(c+928,"top axi_crossbar_u ls_axi_ar_id_i", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_crossbar_u ls_axi_ar_user_i", false,-1, 0,0);
        tracep->declBus(c+339,"top axi_crossbar_u ls_axi_ar_len_i", false,-1, 7,0);
        tracep->declBus(c+142,"top axi_crossbar_u ls_axi_ar_size_i", false,-1, 2,0);
        tracep->declBus(c+924,"top axi_crossbar_u ls_axi_ar_burst_i", false,-1, 1,0);
        tracep->declBit(c+917,"top axi_crossbar_u ls_axi_ar_lock_i", false,-1);
        tracep->declBus(c+925,"top axi_crossbar_u ls_axi_ar_cache_i", false,-1, 3,0);
        tracep->declBus(c+918,"top axi_crossbar_u ls_axi_ar_qos_i", false,-1, 3,0);
        tracep->declBus(c+930,"top axi_crossbar_u ls_axi_ar_region_i", false,-1, 3,0);
        tracep->declBit(c+9,"top axi_crossbar_u ls_axi_r_ready_i", false,-1);
        tracep->declBit(c+713,"top axi_crossbar_u ls_axi_r_valid_o", false,-1);
        tracep->declBus(c+887,"top axi_crossbar_u ls_axi_r_resp_o", false,-1, 1,0);
        tracep->declQuad(c+714,"top axi_crossbar_u ls_axi_r_data_o", false,-1, 63,0);
        tracep->declBit(c+716,"top axi_crossbar_u ls_axi_r_last_o", false,-1);
        tracep->declBus(c+711,"top axi_crossbar_u ls_axi_r_id_o", false,-1, 3,0);
        tracep->declBus(c+931,"top axi_crossbar_u ls_axi_r_user_o", false,-1, 0,0);
        tracep->declBit(c+853,"top axi_crossbar_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+854,"top axi_crossbar_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+855,"top axi_crossbar_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+857,"top axi_crossbar_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+858,"top axi_crossbar_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+859,"top axi_crossbar_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+860,"top axi_crossbar_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+861,"top axi_crossbar_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+862,"top axi_crossbar_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+863,"top axi_crossbar_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+864,"top axi_crossbar_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+865,"top axi_crossbar_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+866,"top axi_crossbar_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+867,"top axi_crossbar_u axi_w_ready_i", false,-1);
        tracep->declBit(c+868,"top axi_crossbar_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+869,"top axi_crossbar_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+871,"top axi_crossbar_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+872,"top axi_crossbar_u axi_w_last_o", false,-1);
        tracep->declBus(c+873,"top axi_crossbar_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+874,"top axi_crossbar_u axi_b_ready_o", false,-1);
        tracep->declBit(c+875,"top axi_crossbar_u axi_b_valid_i", false,-1);
        tracep->declBus(c+876,"top axi_crossbar_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+877,"top axi_crossbar_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+878,"top axi_crossbar_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+831,"top axi_crossbar_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+832,"top axi_crossbar_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+833,"top axi_crossbar_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+835,"top axi_crossbar_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+836,"top axi_crossbar_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+837,"top axi_crossbar_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+838,"top axi_crossbar_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+839,"top axi_crossbar_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+840,"top axi_crossbar_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+841,"top axi_crossbar_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+842,"top axi_crossbar_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+843,"top axi_crossbar_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+844,"top axi_crossbar_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+845,"top axi_crossbar_u axi_r_ready_o", false,-1);
        tracep->declBit(c+846,"top axi_crossbar_u axi_r_valid_i", false,-1);
        tracep->declBus(c+847,"top axi_crossbar_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+848,"top axi_crossbar_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+850,"top axi_crossbar_u axi_r_last_i", false,-1);
        tracep->declBus(c+851,"top axi_crossbar_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+852,"top axi_crossbar_u axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+180,"top axi_crossbar_u axi_mmio_aw_ready_i", false,-1);
        tracep->declBit(c+333,"top axi_crossbar_u axi_mmio_aw_valid_o", false,-1);
        tracep->declQuad(c+181,"top axi_crossbar_u axi_mmio_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+915,"top axi_crossbar_u axi_mmio_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+183,"top axi_crossbar_u axi_mmio_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_crossbar_u axi_mmio_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+303,"top axi_crossbar_u axi_mmio_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+184,"top axi_crossbar_u axi_mmio_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+185,"top axi_crossbar_u axi_mmio_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+917,"top axi_crossbar_u axi_mmio_aw_lock_o", false,-1);
        tracep->declBus(c+186,"top axi_crossbar_u axi_mmio_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+918,"top axi_crossbar_u axi_mmio_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+918,"top axi_crossbar_u axi_mmio_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+187,"top axi_crossbar_u axi_mmio_w_ready_i", false,-1);
        tracep->declBit(c+334,"top axi_crossbar_u axi_mmio_w_valid_o", false,-1);
        tracep->declQuad(c+304,"top axi_crossbar_u axi_mmio_w_data_o", false,-1, 63,0);
        tracep->declBus(c+188,"top axi_crossbar_u axi_mmio_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+306,"top axi_crossbar_u axi_mmio_w_last_o", false,-1);
        tracep->declBus(c+916,"top axi_crossbar_u axi_mmio_w_user_o", false,-1, 0,0);
        tracep->declBit(c+335,"top axi_crossbar_u axi_mmio_b_ready_o", false,-1);
        tracep->declBit(c+189,"top axi_crossbar_u axi_mmio_b_valid_i", false,-1);
        tracep->declBus(c+190,"top axi_crossbar_u axi_mmio_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+928,"top axi_crossbar_u axi_mmio_b_id_i", false,-1, 3,0);
        tracep->declBus(c+923,"top axi_crossbar_u axi_mmio_b_user_i", false,-1, 0,0);
        tracep->declBit(c+175,"top axi_crossbar_u axi_mmio_ar_ready_i", false,-1);
        tracep->declBit(c+326,"top axi_crossbar_u axi_mmio_ar_valid_o", false,-1);
        tracep->declQuad(c+327,"top axi_crossbar_u axi_mmio_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+915,"top axi_crossbar_u axi_mmio_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+139,"top axi_crossbar_u axi_mmio_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_crossbar_u axi_mmio_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+140,"top axi_crossbar_u axi_mmio_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+329,"top axi_crossbar_u axi_mmio_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+330,"top axi_crossbar_u axi_mmio_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+917,"top axi_crossbar_u axi_mmio_ar_lock_o", false,-1);
        tracep->declBus(c+331,"top axi_crossbar_u axi_mmio_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+918,"top axi_crossbar_u axi_mmio_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+141,"top axi_crossbar_u axi_mmio_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+332,"top axi_crossbar_u axi_mmio_r_ready_o", false,-1);
        tracep->declBit(c+176,"top axi_crossbar_u axi_mmio_r_valid_i", false,-1);
        tracep->declBus(c+177,"top axi_crossbar_u axi_mmio_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+178,"top axi_crossbar_u axi_mmio_r_data_i", false,-1, 63,0);
        tracep->declBit(c+176,"top axi_crossbar_u axi_mmio_r_last_i", false,-1);
        tracep->declBus(c+928,"top axi_crossbar_u axi_mmio_r_id_i", false,-1, 3,0);
        tracep->declBus(c+921,"top axi_crossbar_u axi_mmio_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+425,"top axi_crossbar_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+915,"top axi_crossbar_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+427,"top axi_crossbar_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+195,"top axi_crossbar_u clint_axi_arready", false,-1);
        tracep->declBus(c+428,"top axi_crossbar_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+30,"top axi_crossbar_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+196,"top axi_crossbar_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+197,"top axi_crossbar_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+429,"top axi_crossbar_u clint_axi_rready", false,-1);
        tracep->declBus(c+198,"top axi_crossbar_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+199,"top axi_crossbar_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+915,"top axi_crossbar_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+430,"top axi_crossbar_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+201,"top axi_crossbar_u clint_axi_awready", false,-1);
        tracep->declQuad(c+431,"top axi_crossbar_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+202,"top axi_crossbar_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+433,"top axi_crossbar_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+203,"top axi_crossbar_u clint_axi_wready", false,-1);
        tracep->declBus(c+196,"top axi_crossbar_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+204,"top axi_crossbar_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+434,"top axi_crossbar_u clint_axi_bready", false,-1);
        tracep->declBit(c+881,"top axi_crossbar_u axi_aw_ready", false,-1);
        tracep->declBit(c+338,"top axi_crossbar_u axi_aw_valid", false,-1);
        tracep->declQuad(c+191,"top axi_crossbar_u axi_aw_addr", false,-1, 63,0);
        tracep->declBus(c+915,"top axi_crossbar_u axi_aw_prot", false,-1, 2,0);
        tracep->declBus(c+928,"top axi_crossbar_u axi_aw_id", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_crossbar_u axi_aw_user", false,-1, 0,0);
        tracep->declBus(c+339,"top axi_crossbar_u axi_aw_len", false,-1, 7,0);
        tracep->declBus(c+193,"top axi_crossbar_u axi_aw_size", false,-1, 2,0);
        tracep->declBus(c+924,"top axi_crossbar_u axi_aw_burst", false,-1, 1,0);
        tracep->declBit(c+917,"top axi_crossbar_u axi_aw_lock", false,-1);
        tracep->declBus(c+929,"top axi_crossbar_u axi_aw_cache", false,-1, 3,0);
        tracep->declBus(c+918,"top axi_crossbar_u axi_aw_qos", false,-1, 3,0);
        tracep->declBus(c+918,"top axi_crossbar_u axi_aw_region", false,-1, 3,0);
        tracep->declBit(c+712,"top axi_crossbar_u axi_w_ready", false,-1);
        tracep->declBit(c+340,"top axi_crossbar_u axi_w_valid", false,-1);
        tracep->declQuad(c+341,"top axi_crossbar_u axi_w_data", false,-1, 63,0);
        tracep->declBus(c+194,"top axi_crossbar_u axi_w_strb", false,-1, 7,0);
        tracep->declBit(c+343,"top axi_crossbar_u axi_w_last", false,-1);
        tracep->declBus(c+916,"top axi_crossbar_u axi_w_user", false,-1, 0,0);
        tracep->declBit(c+344,"top axi_crossbar_u axi_b_ready", false,-1);
        tracep->declBit(c+882,"top axi_crossbar_u axi_b_valid", false,-1);
        tracep->declBus(c+883,"top axi_crossbar_u axi_b_resp", false,-1, 1,0);
        tracep->declBus(c+884,"top axi_crossbar_u axi_b_id", false,-1, 3,0);
        tracep->declBus(c+885,"top axi_crossbar_u axi_b_user", false,-1, 0,0);
        tracep->declBit(c+726,"top axi_crossbar_u axi_ar_ready", false,-1);
        tracep->declBit(c+36,"top axi_crossbar_u axi_ar_valid", false,-1);
        tracep->declQuad(c+448,"top axi_crossbar_u axi_ar_addr", false,-1, 63,0);
        tracep->declBus(c+915,"top axi_crossbar_u axi_ar_prot", false,-1, 2,0);
        tracep->declBus(c+37,"top axi_crossbar_u axi_ar_id", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_crossbar_u axi_ar_user", false,-1, 0,0);
        tracep->declBus(c+147,"top axi_crossbar_u axi_ar_len", false,-1, 7,0);
        tracep->declBus(c+450,"top axi_crossbar_u axi_ar_size", false,-1, 2,0);
        tracep->declBus(c+924,"top axi_crossbar_u axi_ar_burst", false,-1, 1,0);
        tracep->declBit(c+938,"top axi_crossbar_u axi_ar_lock", false,-1);
        tracep->declBus(c+925,"top axi_crossbar_u axi_ar_cache", false,-1, 3,0);
        tracep->declBus(c+918,"top axi_crossbar_u axi_ar_qos", false,-1, 3,0);
        tracep->declBus(c+38,"top axi_crossbar_u axi_ar_region", false,-1, 3,0);
        tracep->declBit(c+451,"top axi_crossbar_u axi_r_ready", false,-1);
        tracep->declBit(c+727,"top axi_crossbar_u axi_r_valid", false,-1);
        tracep->declBus(c+890,"top axi_crossbar_u axi_r_resp", false,-1, 1,0);
        tracep->declQuad(c+728,"top axi_crossbar_u axi_r_data", false,-1, 63,0);
        tracep->declBit(c+730,"top axi_crossbar_u axi_r_last", false,-1);
        tracep->declBus(c+711,"top axi_crossbar_u axi_r_id", false,-1, 3,0);
        tracep->declBus(c+891,"top axi_crossbar_u axi_r_user", false,-1, 0,0);
        tracep->declBit(c+452,"top axi_crossbar_u clint_r_trans", false,-1);
        tracep->declBit(c+205,"top axi_crossbar_u clint_w_trans", false,-1);
        tracep->declBit(c+453,"top axi_crossbar_u perip_r_trans", false,-1);
        tracep->declBit(c+206,"top axi_crossbar_u perip_w_trans", false,-1);
        tracep->declBit(c+821,"top IF_u clk", false,-1);
        tracep->declBit(c+822,"top IF_u rst_n", false,-1);
        tracep->declBit(c+347,"top IF_u is_jump_i", false,-1);
        tracep->declQuad(c+348,"top IF_u pc_jump_i", false,-1, 63,0);
        tracep->declQuad(c+22,"top IF_u csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"top IF_u csr_mepc", false,-1, 63,0);
        tracep->declBit(c+375,"top IF_u in_trap_id", false,-1);
        tracep->declBit(c+376,"top IF_u out_trap_id", false,-1);
        tracep->declBit(c+717,"top IF_u stall_n", false,-1);
        tracep->declQuad(c+345,"top IF_u pc_new_o", false,-1, 63,0);
        tracep->declBus(c+358,"top IF_u instr_o", false,-1, 31,0);
        tracep->declBit(c+350,"top IF_u if_instr_valid", false,-1);
        tracep->declBit(c+33,"top IF_u in_intr_ls", false,-1);
        tracep->declQuad(c+351,"top IF_u sram_rdata", false,-1, 63,0);
        tracep->declBit(c+934,"top IF_u sram_data_valid", false,-1);
        tracep->declBit(c+356,"top IF_u cacheAddrOk_i", false,-1);
        tracep->declBit(c+357,"top IF_u cacheDataNotOk_i", false,-1);
        tracep->declQuad(c+353,"top IF_u sram_addr", false,-1, 63,0);
        tracep->declBit(c+935,"top IF_u sram_ren", false,-1);
        tracep->declBit(c+355,"top IF_u sram_addr_valid", false,-1);
        tracep->declQuad(c+353,"top IF_u pc_next_o", false,-1, 63,0);
        tracep->declBit(c+821,"top cache_dut clk", false,-1);
        tracep->declBit(c+822,"top cache_dut rst_n", false,-1);
        tracep->declBus(c+454,"top cache_dut addr_i", false,-1, 31,0);
        tracep->declBit(c+355,"top cache_dut valid_i", false,-1);
        tracep->declBit(c+917,"top cache_dut op_i", false,-1);
        tracep->declQuad(c+939,"top cache_dut wr_data_i", false,-1, 63,0);
        tracep->declBus(c+941,"top cache_dut wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+717,"top cache_dut stall_n", false,-1);
        tracep->declBit(c+356,"top cache_dut addr_ok_o", false,-1);
        tracep->declBit(c+455,"top cache_dut data_ok_o", false,-1);
        tracep->declBit(c+357,"top cache_dut data_notok_o", false,-1);
        tracep->declQuad(c+351,"top cache_dut rd_data_o", false,-1, 63,0);
        tracep->declBit(c+438,"top cache_dut clrValid", false,-1);
        tracep->declBit(c+435,"top cache_dut cacheRdValid_o", false,-1);
        tracep->declBit(c+32,"top cache_dut axiRdReady", false,-1);
        tracep->declBus(c+336,"top cache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+710,"top cache_dut rdLast_i", false,-1);
        tracep->declBus(c+145,"top cache_dut cacheAddr_o", false,-1, 31,0);
        tracep->declQuad(c+708,"top cache_dut rdData_i", false,-1, 63,0);
        tracep->declBit(c+724,"top cache_dut dataValid_i", false,-1);
        tracep->declBus(c+915,"top cache_dut idle", false,-1, 2,0);
        tracep->declBus(c+942,"top cache_dut compare", false,-1, 2,0);
        tracep->declBus(c+943,"top cache_dut miss", false,-1, 2,0);
        tracep->declBus(c+944,"top cache_dut getdata", false,-1, 2,0);
        tracep->declBus(c+945,"top cache_dut replace", false,-1, 2,0);
        tracep->declBus(c+946,"top cache_dut unCacheOp", false,-1, 2,0);
        tracep->declBus(c+456,"top cache_dut cacheCurState", false,-1, 2,0);
        tracep->declBus(c+731,"top cache_dut cacheNexState", false,-1, 2,0);
        tracep->declBit(c+457,"top cache_dut cacheHit", false,-1);
        tracep->declBit(c+39,"top cache_dut way1Hit", false,-1);
        tracep->declBit(c+40,"top cache_dut way2Hit", false,-1);
        tracep->declArray(c+207,"top cache_dut dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+211,"top cache_dut dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+215,"top cache_dut dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+219,"top cache_dut dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+458,"top cache_dut inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+462,"top cache_dut inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+458,"top cache_dut inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+462,"top cache_dut inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+466,"top cache_dut wenWay1", false,-1);
        tracep->declBit(c+467,"top cache_dut wenWay2", false,-1);
        tracep->declBit(c+468,"top cache_dut uncached", false,-1);
        tracep->declBit(c+41,"top cache_dut uncachedOk", false,-1);
        tracep->declBit(c+469,"top cache_dut diffAddr", false,-1);
        tracep->declBit(c+470,"top cache_dut idleEn", false,-1);
        tracep->declQuad(c+42,"top cache_dut reqLatch", false,-1, 32,0);
        tracep->declBus(c+44,"top cache_dut offset", false,-1, 4,0);
        tracep->declBus(c+45,"top cache_dut index", false,-1, 5,0);
        tracep->declBus(c+46,"top cache_dut tag", false,-1, 20,0);
        tracep->declQuad(c+47,"top cache_dut validArray1", false,-1, 63,0);
        tracep->declQuad(c+49,"top cache_dut validArray2", false,-1, 63,0);
        tracep->declBit(c+51,"top cache_dut bitValid1", false,-1);
        tracep->declBit(c+52,"top cache_dut bitValid2", false,-1);
        tracep->declBit(c+892,"top cache_dut bitValid1_d", false,-1);
        tracep->declBit(c+893,"top cache_dut bitValid2_d", false,-1);
        tracep->declBus(c+894,"top cache_dut tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+895,"top cache_dut tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+53,"top cache_dut tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+54,"top cache_dut tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+947,"top cache_dut validWay1_q", false,-1);
        tracep->declBit(c+948,"top cache_dut validWay2_q", false,-1);
        tracep->declBit(c+471,"top cache_dut compareEn", false,-1);
        tracep->declArray(c+223,"top cache_dut way1Data", false,-1, 255,0);
        tracep->declArray(c+231,"top cache_dut way2Data", false,-1, 255,0);
        tracep->declQuad(c+896,"top cache_dut rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+898,"top cache_dut rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+472,"top cache_dut missEn", false,-1);
        tracep->declBit(c+473,"top cache_dut getdataEn", false,-1);
        tracep->declQuad(c+55,"top cache_dut addrToRead", false,-1, 63,0);
        tracep->declBus(c+239,"top cache_dut randomBit", false,-1, 31,0);
        tracep->declBit(c+57,"top cache_dut missFlag", false,-1);
        tracep->declBus(c+474,"top cache_dut rdCnt", false,-1, 1,0);
        tracep->declArray(c+475,"top cache_dut rdBuffer", false,-1, 255,0);
        tracep->declBit(c+483,"top cache_dut replaceEn", false,-1);
        tracep->declBus(c+949,"top cache_dut iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+911,"top cache_dut iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+950,"top cache_dut iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+949,"top cache_dut iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+207,"top cache_dut iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+821,"top cache_dut iramWay1_1 CLK", false,-1);
        tracep->declBit(c+484,"top cache_dut iramWay1_1 CEN", false,-1);
        tracep->declBit(c+485,"top cache_dut iramWay1_1 WEN", false,-1);
        tracep->declArray(c+951,"top cache_dut iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+732,"top cache_dut iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+458,"top cache_dut iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+486,"top cache_dut iramWay1_1 cen", false,-1);
        tracep->declBit(c+466,"top cache_dut iramWay1_1 wen", false,-1);
        tracep->declArray(c+955,"top cache_dut iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+949,"top cache_dut iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+911,"top cache_dut iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+950,"top cache_dut iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+949,"top cache_dut iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+211,"top cache_dut iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+821,"top cache_dut iramWay1_2 CLK", false,-1);
        tracep->declBit(c+487,"top cache_dut iramWay1_2 CEN", false,-1);
        tracep->declBit(c+485,"top cache_dut iramWay1_2 WEN", false,-1);
        tracep->declArray(c+951,"top cache_dut iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+733,"top cache_dut iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+462,"top cache_dut iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+488,"top cache_dut iramWay1_2 cen", false,-1);
        tracep->declBit(c+466,"top cache_dut iramWay1_2 wen", false,-1);
        tracep->declArray(c+955,"top cache_dut iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+949,"top cache_dut iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+911,"top cache_dut iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+950,"top cache_dut iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+949,"top cache_dut iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+215,"top cache_dut iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+821,"top cache_dut iramWay2_1 CLK", false,-1);
        tracep->declBit(c+489,"top cache_dut iramWay2_1 CEN", false,-1);
        tracep->declBit(c+490,"top cache_dut iramWay2_1 WEN", false,-1);
        tracep->declArray(c+951,"top cache_dut iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+734,"top cache_dut iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+458,"top cache_dut iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+491,"top cache_dut iramWay2_1 cen", false,-1);
        tracep->declBit(c+467,"top cache_dut iramWay2_1 wen", false,-1);
        tracep->declArray(c+955,"top cache_dut iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+949,"top cache_dut iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+911,"top cache_dut iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+950,"top cache_dut iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+949,"top cache_dut iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+219,"top cache_dut iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+821,"top cache_dut iramWay2_2 CLK", false,-1);
        tracep->declBit(c+492,"top cache_dut iramWay2_2 CEN", false,-1);
        tracep->declBit(c+490,"top cache_dut iramWay2_2 WEN", false,-1);
        tracep->declArray(c+951,"top cache_dut iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+735,"top cache_dut iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+462,"top cache_dut iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+493,"top cache_dut iramWay2_2 cen", false,-1);
        tracep->declBit(c+467,"top cache_dut iramWay2_2 wen", false,-1);
        tracep->declArray(c+955,"top cache_dut iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+911,"top axi_icache_dut RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+911,"top axi_icache_dut RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+911,"top axi_icache_dut AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+911,"top axi_icache_dut AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+912,"top axi_icache_dut AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+913,"top axi_icache_dut AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+914,"top axi_icache_dut AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+821,"top axi_icache_dut clock", false,-1);
        tracep->declBit(c+822,"top axi_icache_dut reset", false,-1);
        tracep->declBit(c+435,"top axi_icache_dut rw_valid_i", false,-1);
        tracep->declBit(c+32,"top axi_icache_dut rw_ready_o", false,-1);
        tracep->declQuad(c+708,"top axi_icache_dut data_read_o", false,-1, 63,0);
        tracep->declQuad(c+148,"top axi_icache_dut rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+336,"top axi_icache_dut fetchLenth", false,-1, 7,0);
        tracep->declBit(c+710,"top axi_icache_dut rdLast_o", false,-1);
        tracep->declBit(c+724,"top axi_icache_dut dataValid_o", false,-1);
        tracep->declBit(c+1,"top axi_icache_dut instr_fetching", false,-1);
        tracep->declBit(c+879,"top axi_icache_dut axi_ar_ready_i", false,-1);
        tracep->declBit(c+2,"top axi_icache_dut axi_ar_valid_o", false,-1);
        tracep->declQuad(c+3,"top axi_icache_dut axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+915,"top axi_icache_dut axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+918,"top axi_icache_dut axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_icache_dut axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+336,"top axi_icache_dut axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+337,"top axi_icache_dut axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+924,"top axi_icache_dut axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+917,"top axi_icache_dut axi_ar_lock_o", false,-1);
        tracep->declBus(c+925,"top axi_icache_dut axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+918,"top axi_icache_dut axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+926,"top axi_icache_dut axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+5,"top axi_icache_dut axi_r_ready_o", false,-1);
        tracep->declBit(c+707,"top axi_icache_dut axi_r_valid_i", false,-1);
        tracep->declBus(c+880,"top axi_icache_dut axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+708,"top axi_icache_dut axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+710,"top axi_icache_dut axi_r_last_i", false,-1);
        tracep->declBus(c+711,"top axi_icache_dut axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+927,"top axi_icache_dut axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+959,"top axi_icache_dut r_state_idle", false,-1, 1,0);
        tracep->declBus(c+924,"top axi_icache_dut r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+960,"top axi_icache_dut r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+961,"top axi_icache_dut r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+58,"top axi_icache_dut r_state", false,-1, 1,0);
        tracep->declBus(c+736,"top axi_icache_dut r_state_next", false,-1, 1,0);
        tracep->declBit(c+2,"top axi_icache_dut ar_valid", false,-1);
        tracep->declBit(c+5,"top axi_icache_dut r_ready", false,-1);
        tracep->declQuad(c+3,"top axi_icache_dut addr_reg", false,-1, 63,0);
        tracep->declBus(c+962,"top axi_icache_dut AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+918,"top axi_icache_dut axi_id", false,-1, 3,0);
        tracep->declBus(c+917,"top axi_icache_dut axi_user", false,-1, 0,0);
        tracep->declBus(c+336,"top axi_icache_dut axi_len", false,-1, 7,0);
        tracep->declBus(c+337,"top axi_icache_dut axi_size", false,-1, 2,0);
        tracep->declBit(c+821,"top ID_reg_u clk", false,-1);
        tracep->declBit(c+822,"top ID_reg_u rst_n", false,-1);
        tracep->declQuad(c+345,"top ID_reg_u pc_id_reg_i", false,-1, 63,0);
        tracep->declBus(c+358,"top ID_reg_u instr_id_reg_i", false,-1, 31,0);
        tracep->declBit(c+687,"top ID_reg_u stall_n", false,-1);
        tracep->declBit(c+379,"top ID_reg_u flush", false,-1);
        tracep->declQuad(c+359,"top ID_reg_u pc_id_reg_o", false,-1, 63,0);
        tracep->declBus(c+361,"top ID_reg_u instr_id_reg_o", false,-1, 31,0);
        tracep->declQuad(c+494,"top ID_reg_u pc_id_reg", false,-1, 63,0);
        tracep->declBus(c+496,"top ID_reg_u instr_id_reg", false,-1, 31,0);
        tracep->declBus(c+963,"top ID_reg_u id_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+964,"top ID_reg_u id_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+821,"top ID_reg_u id_reg i_clk", false,-1);
        tracep->declBit(c+822,"top ID_reg_u id_reg i_rst_n", false,-1);
        tracep->declBit(c+687,"top ID_reg_u id_reg i_wen", false,-1);
        tracep->declArray(c+497,"top ID_reg_u id_reg i_din", false,-1, 95,0);
        tracep->declArray(c+500,"top ID_reg_u id_reg o_dout", false,-1, 95,0);
        tracep->declBit(c+821,"top ID_u clk", false,-1);
        tracep->declBit(c+822,"top ID_u rst_n", false,-1);
        tracep->declQuad(c+359,"top ID_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+412,"top ID_u pc_wb_i", false,-1, 63,0);
        tracep->declBus(c+418,"top ID_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+361,"top ID_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+419,"top ID_u wb_data_i", false,-1, 63,0);
        tracep->declBus(c+421,"top ID_u wb_rdid_i", false,-1, 4,0);
        tracep->declBit(c+422,"top ID_u wb_wren_i", false,-1);
        tracep->declQuad(c+695,"top ID_u rs1_o", false,-1, 63,0);
        tracep->declQuad(c+693,"top ID_u rs2_o", false,-1, 63,0);
        tracep->declQuad(c+362,"top ID_u imm_o", false,-1, 63,0);
        tracep->declBit(c+364,"top ID_u src1sel", false,-1);
        tracep->declBus(c+365,"top ID_u src2sel", false,-1, 1,0);
        tracep->declBus(c+366,"top ID_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+369,"top ID_u is_jalr_id_o", false,-1);
        tracep->declBit(c+368,"top ID_u is_jal_id_o", false,-1);
        tracep->declBit(c+367,"top ID_u is_brc_id_o", false,-1);
        tracep->declBit(c+370,"top ID_u wben_id_o", false,-1);
        tracep->declBus(c+371,"top ID_u rs1_idx", false,-1, 4,0);
        tracep->declBus(c+372,"top ID_u rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+828,"top ID_u regA0", false,-1, 63,0);
        tracep->declBit(c+373,"top ID_u DivEn", false,-1);
        tracep->declBus(c+374,"top ID_u DivSel", false,-1, 2,0);
        tracep->declBit(c+377,"top ID_u trap_id_o", false,-1);
        tracep->declBit(c+375,"top ID_u in_trap_id", false,-1);
        tracep->declBit(c+376,"top ID_u out_trap_id", false,-1);
        tracep->declBit(c+436,"top ID_u fence_id", false,-1);
        tracep->declBus(c+503,"top ID_u ext_op", false,-1, 4,0);
        tracep->declQuad(c+362,"top ID_u imm", false,-1, 63,0);
        tracep->declQuad(c+695,"top ID_u rs1", false,-1, 63,0);
        tracep->declQuad(c+693,"top ID_u rs2", false,-1, 63,0);
        tracep->declQuad(c+359,"top ID_u decoder_u pc_i", false,-1, 63,0);
        tracep->declBus(c+361,"top ID_u decoder_u instr_i", false,-1, 31,0);
        tracep->declBus(c+371,"top ID_u decoder_u rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+372,"top ID_u decoder_u rs2_idx_o", false,-1, 4,0);
        tracep->declBus(c+503,"top ID_u decoder_u ext_op_o", false,-1, 4,0);
        tracep->declBit(c+364,"top ID_u decoder_u src1sel_o", false,-1);
        tracep->declBus(c+365,"top ID_u decoder_u src2sel_o", false,-1, 1,0);
        tracep->declBus(c+366,"top ID_u decoder_u aluctr_o", false,-1, 4,0);
        tracep->declBit(c+369,"top ID_u decoder_u is_jalr_o", false,-1);
        tracep->declBit(c+368,"top ID_u decoder_u is_jal_o", false,-1);
        tracep->declBit(c+367,"top ID_u decoder_u is_brc_o", false,-1);
        tracep->declBit(c+370,"top ID_u decoder_u wb_en_o", false,-1);
        tracep->declBit(c+373,"top ID_u decoder_u DivEn", false,-1);
        tracep->declBus(c+374,"top ID_u decoder_u DivSel", false,-1, 2,0);
        tracep->declBit(c+377,"top ID_u decoder_u trap_id_o", false,-1);
        tracep->declBit(c+375,"top ID_u decoder_u in_trap_id", false,-1);
        tracep->declBit(c+376,"top ID_u decoder_u out_trap_id", false,-1);
        tracep->declBit(c+436,"top ID_u decoder_u fence_id", false,-1);
        tracep->declBus(c+504,"top ID_u decoder_u opcode", false,-1, 4,0);
        tracep->declBus(c+505,"top ID_u decoder_u fun_3", false,-1, 2,0);
        tracep->declBus(c+506,"top ID_u decoder_u fun_7", false,-1, 6,0);
        tracep->declBus(c+507,"top ID_u imm_ext_u instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+503,"top ID_u imm_ext_u ext_op_i", false,-1, 4,0);
        tracep->declQuad(c+362,"top ID_u imm_ext_u imm_o", false,-1, 63,0);
        tracep->declBit(c+821,"top ID_u regfile_u clk", false,-1);
        tracep->declQuad(c+412,"top ID_u regfile_u pc_wb", false,-1, 63,0);
        tracep->declBus(c+418,"top ID_u regfile_u instr_wb_i", false,-1, 31,0);
        tracep->declBus(c+371,"top ID_u regfile_u rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+695,"top ID_u regfile_u rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+372,"top ID_u regfile_u rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+693,"top ID_u regfile_u rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+421,"top ID_u regfile_u wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+419,"top ID_u regfile_u wr_data_i", false,-1, 63,0);
        tracep->declBit(c+422,"top ID_u regfile_u wr_en", false,-1);
        tracep->declQuad(c+828,"top ID_u regfile_u regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+757+i*2,"top ID_u regfile_u regfiles", true,(i+0), 63,0);}}
        tracep->declBus(c+361,"top hazard_detect_u instr_id_i", false,-1, 31,0);
        tracep->declBus(c+382,"top hazard_detect_u instr_ex_i", false,-1, 31,0);
        tracep->declBus(c+18,"top hazard_detect_u instr_ls_i", false,-1, 31,0);
        tracep->declBus(c+418,"top hazard_detect_u instr_wb_i", false,-1, 31,0);
        tracep->declBit(c+378,"top hazard_detect_u ld_use_hazard", false,-1);
        tracep->declBit(c+146,"top hazard_detect_u ld_csr_hazard", false,-1);
        tracep->declBit(c+508,"top hazard_detect_u wb_is_load", false,-1);
        tracep->declBit(c+59,"top hazard_detect_u ls_is_csropi", false,-1);
        tracep->declBit(c+821,"top EX_reg_u clk", false,-1);
        tracep->declBit(c+822,"top EX_reg_u rst_n", false,-1);
        tracep->declBit(c+688,"top EX_reg_u stall_n", false,-1);
        tracep->declBit(c+407,"top EX_reg_u flush", false,-1);
        tracep->declQuad(c+359,"top EX_reg_u pc_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+361,"top EX_reg_u instr_ex_reg_i", false,-1, 31,0);
        tracep->declQuad(c+362,"top EX_reg_u imm_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+693,"top EX_reg_u rs2_ex_reg_i", false,-1, 63,0);
        tracep->declQuad(c+695,"top EX_reg_u rs1_ex_reg_i", false,-1, 63,0);
        tracep->declBus(c+366,"top EX_reg_u aluctr_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+369,"top EX_reg_u is_jalr_ex_reg_i", false,-1);
        tracep->declBit(c+368,"top EX_reg_u is_jal_ex_reg_i", false,-1);
        tracep->declBit(c+367,"top EX_reg_u is_brc_ex_reg_i", false,-1);
        tracep->declBit(c+364,"top EX_reg_u src1sel_ex_reg_i", false,-1);
        tracep->declBus(c+365,"top EX_reg_u src2sel_ex_reg_i", false,-1, 1,0);
        tracep->declBit(c+370,"top EX_reg_u wben_ex_reg_i", false,-1);
        tracep->declBus(c+371,"top EX_reg_u rs1_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBus(c+372,"top EX_reg_u rs2_idx_ex_reg_i", false,-1, 4,0);
        tracep->declBit(c+373,"top EX_reg_u DivEn_ex_reg_i", false,-1);
        tracep->declBus(c+374,"top EX_reg_u DivSel_ex_reg_i", false,-1, 2,0);
        tracep->declBit(c+377,"top EX_reg_u trap_ex_reg_i", false,-1);
        tracep->declBit(c+436,"top EX_reg_u fence_ex_reg_i", false,-1);
        tracep->declQuad(c+380,"top EX_reg_u pc_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+382,"top EX_reg_u instr_ex_reg_o", false,-1, 31,0);
        tracep->declQuad(c+387,"top EX_reg_u rs2_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+389,"top EX_reg_u rs1_ex_reg_o", false,-1, 63,0);
        tracep->declQuad(c+391,"top EX_reg_u imm_ex_reg_o", false,-1, 63,0);
        tracep->declBus(c+395,"top EX_reg_u aluctr_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+398,"top EX_reg_u is_jalr_ex_reg_o", false,-1);
        tracep->declBit(c+397,"top EX_reg_u is_jal_ex_reg_o", false,-1);
        tracep->declBit(c+396,"top EX_reg_u is_brc_ex_reg_o", false,-1);
        tracep->declBit(c+385,"top EX_reg_u src1sel_ex_reg_o", false,-1);
        tracep->declBus(c+386,"top EX_reg_u src2sel_ex_reg_o", false,-1, 1,0);
        tracep->declBit(c+399,"top EX_reg_u wben_ex_reg_o", false,-1);
        tracep->declBus(c+405,"top EX_reg_u rs1_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBus(c+406,"top EX_reg_u rs2_idx_ex_reg_o", false,-1, 4,0);
        tracep->declBit(c+400,"top EX_reg_u DivEn_ex_reg_o", false,-1);
        tracep->declBus(c+401,"top EX_reg_u DivSel_ex_reg_o", false,-1, 2,0);
        tracep->declBit(c+402,"top EX_reg_u trap_ex_reg_o", false,-1);
        tracep->declBit(c+437,"top EX_reg_u fence_ex_reg_o", false,-1);
        tracep->declQuad(c+509,"top EX_reg_u pc_ex_reg", false,-1, 63,0);
        tracep->declBus(c+511,"top EX_reg_u instr_ex_reg", false,-1, 31,0);
        tracep->declBit(c+512,"top EX_reg_u is_jalr_ex_reg", false,-1);
        tracep->declBit(c+513,"top EX_reg_u is_jal_ex_reg", false,-1);
        tracep->declBit(c+514,"top EX_reg_u is_brc_ex_reg", false,-1);
        tracep->declBit(c+515,"top EX_reg_u wben_ex_reg", false,-1);
        tracep->declBit(c+516,"top EX_reg_u trap_ex_reg", false,-1);
        tracep->declBit(c+517,"top EX_reg_u fence_ex_reg", false,-1);
        tracep->declBit(c+518,"top EX_reg_u diven_ex_reg", false,-1);
        tracep->declBus(c+965,"top EX_reg_u ex_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+964,"top EX_reg_u ex_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+821,"top EX_reg_u ex_reg i_clk", false,-1);
        tracep->declBit(c+822,"top EX_reg_u ex_reg i_rst_n", false,-1);
        tracep->declBit(c+688,"top EX_reg_u ex_reg i_wen", false,-1);
        tracep->declArray(c+697,"top EX_reg_u ex_reg i_din", false,-1, 315,0);
        tracep->declArray(c+519,"top EX_reg_u ex_reg o_dout", false,-1, 315,0);
        tracep->declBus(c+395,"top ex_stage_u aluctr", false,-1, 4,0);
        tracep->declQuad(c+389,"top ex_stage_u rs1_ex_i", false,-1, 63,0);
        tracep->declQuad(c+387,"top ex_stage_u rs2_ex_i", false,-1, 63,0);
        tracep->declQuad(c+391,"top ex_stage_u imm_ex_i", false,-1, 63,0);
        tracep->declQuad(c+380,"top ex_stage_u pc_ex_i", false,-1, 63,0);
        tracep->declBus(c+382,"top ex_stage_u instr_ex_i", false,-1, 31,0);
        tracep->declBit(c+398,"top ex_stage_u is_jalr_ex_i", false,-1);
        tracep->declBit(c+397,"top ex_stage_u is_jal_ex_i", false,-1);
        tracep->declBit(c+396,"top ex_stage_u is_brc_ex_i", false,-1);
        tracep->declBit(c+385,"top ex_stage_u src1sel_ex_i", false,-1);
        tracep->declBus(c+386,"top ex_stage_u src2sel_ex_i", false,-1, 1,0);
        tracep->declBus(c+403,"top ex_stage_u rs1_sel_i", false,-1, 1,0);
        tracep->declBus(c+404,"top ex_stage_u rs2_sel_i", false,-1, 1,0);
        tracep->declQuad(c+16,"top ex_stage_u alures_fw_i", false,-1, 63,0);
        tracep->declQuad(c+419,"top ex_stage_u lsres_fw_i", false,-1, 63,0);
        tracep->declQuad(c+10,"top ex_stage_u wbres_fw_i", false,-1, 63,0);
        tracep->declBit(c+400,"top ex_stage_u DivEn_i", false,-1);
        tracep->declBus(c+401,"top ex_stage_u DivSel_i", false,-1, 2,0);
        tracep->declQuad(c+383,"top ex_stage_u alures_o", false,-1, 63,0);
        tracep->declQuad(c+348,"top ex_stage_u pc_next_o", false,-1, 63,0);
        tracep->declQuad(c+393,"top ex_stage_u rs2_o", false,-1, 63,0);
        tracep->declBit(c+347,"top ex_stage_u is_jump_o", false,-1);
        tracep->declBit(c+719,"top ex_stage_u exNotOk", false,-1);
        tracep->declBit(c+408,"top ex_stage_u rden_ls", false,-1);
        tracep->declBit(c+409,"top ex_stage_u wren_ls", false,-1);
        tracep->declBit(c+718,"top ex_stage_u ls_addr_ok_i", false,-1);
        tracep->declQuad(c+529,"top ex_stage_u src1", false,-1, 63,0);
        tracep->declQuad(c+531,"top ex_stage_u src2", false,-1, 63,0);
        tracep->declQuad(c+533,"top ex_stage_u rs1", false,-1, 63,0);
        tracep->declQuad(c+393,"top ex_stage_u rs2", false,-1, 63,0);
        tracep->declBus(c+395,"top ex_stage_u u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+529,"top ex_stage_u u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+531,"top ex_stage_u u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+400,"top ex_stage_u u_ALU DivEn", false,-1);
        tracep->declBus(c+401,"top ex_stage_u u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+383,"top ex_stage_u u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+535,"top ex_stage_u u_ALU less", false,-1);
        tracep->declBit(c+536,"top ex_stage_u u_ALU zero", false,-1);
        tracep->declQuad(c+537,"top ex_stage_u u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+539,"top ex_stage_u u_ALU cin", false,-1);
        tracep->declQuad(c+540,"top ex_stage_u u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+542,"top ex_stage_u u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+544,"top ex_stage_u u_ALU u_s_mux", false,-1);
        tracep->declBit(c+544,"top ex_stage_u u_ALU sft_a_l", false,-1);
        tracep->declBit(c+545,"top ex_stage_u u_ALU sft_l_r", false,-1);
        tracep->declBus(c+546,"top ex_stage_u u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+547,"top ex_stage_u u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+549,"top ex_stage_u u_ALU carry", false,-1);
        tracep->declBit(c+550,"top ex_stage_u u_ALU overflow", false,-1);
        tracep->declQuad(c+551,"top ex_stage_u u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+553,"top ex_stage_u u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+555,"top ex_stage_u u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+557,"top ex_stage_u u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+529,"top ex_stage_u u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+540,"top ex_stage_u u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+539,"top ex_stage_u u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+542,"top ex_stage_u u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+549,"top ex_stage_u u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+536,"top ex_stage_u u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+550,"top ex_stage_u u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+559,"top ex_stage_u u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+546,"top ex_stage_u u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+544,"top ex_stage_u u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+545,"top ex_stage_u u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+539,"top ex_stage_u u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+544,"top ex_stage_u u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+560,"top ex_stage_u u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+529,"top ex_stage_u u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+561,"top ex_stage_u u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+545,"top ex_stage_u u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+544,"top ex_stage_u u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+547,"top ex_stage_u u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+562,"top ex_stage_u u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+564,"top ex_stage_u u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+566,"top ex_stage_u u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+568,"top ex_stage_u u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+570,"top ex_stage_u u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+572,"top ex_stage_u u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+574,"top ex_stage_u u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+529,"top ex_stage_u u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+531,"top ex_stage_u u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+401,"top ex_stage_u u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+557,"top ex_stage_u u_ALU divider DivOut", false,-1, 63,0);
        tracep->declQuad(c+533,"top ex_stage_u bcu_u rs1_i", false,-1, 63,0);
        tracep->declQuad(c+393,"top ex_stage_u bcu_u rs2_i", false,-1, 63,0);
        tracep->declBit(c+398,"top ex_stage_u bcu_u is_jalr_i", false,-1);
        tracep->declBit(c+397,"top ex_stage_u bcu_u is_jal_i", false,-1);
        tracep->declBit(c+396,"top ex_stage_u bcu_u is_brc_i", false,-1);
        tracep->declBus(c+576,"top ex_stage_u bcu_u fun_3", false,-1, 2,0);
        tracep->declQuad(c+391,"top ex_stage_u bcu_u imm_i", false,-1, 63,0);
        tracep->declQuad(c+380,"top ex_stage_u bcu_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+348,"top ex_stage_u bcu_u brc_pc_o", false,-1, 63,0);
        tracep->declBit(c+347,"top ex_stage_u bcu_u is_jump_o", false,-1);
        tracep->declQuad(c+577,"top ex_stage_u bcu_u pc_imm_res", false,-1, 63,0);
        tracep->declQuad(c+579,"top ex_stage_u bcu_u rs1_imm_res", false,-1, 63,0);
        tracep->declBit(c+966,"top ex_stage_u bcu_u less", false,-1);
        tracep->declBit(c+581,"top ex_stage_u bcu_u zero", false,-1);
        tracep->declBit(c+582,"top ex_stage_u bcu_u carry", false,-1);
        tracep->declBit(c+583,"top ex_stage_u bcu_u overflow", false,-1);
        tracep->declQuad(c+584,"top ex_stage_u bcu_u subres", false,-1, 63,0);
        tracep->declQuad(c+586,"top ex_stage_u bcu_u rs2_2s", false,-1, 63,0);
        tracep->declBit(c+588,"top ex_stage_u bcu_u branch", false,-1);
        tracep->declBit(c+821,"top forwarding_u clk", false,-1);
        tracep->declBit(c+822,"top forwarding_u rst_n", false,-1);
        tracep->declBus(c+405,"top forwarding_u rs1_ido_idx", false,-1, 4,0);
        tracep->declBus(c+406,"top forwarding_u rs2_ido_idx", false,-1, 4,0);
        tracep->declBus(c+60,"top forwarding_u rd_exo_idx", false,-1, 4,0);
        tracep->declBus(c+421,"top forwarding_u rd_lso_idx", false,-1, 4,0);
        tracep->declBit(c+19,"top forwarding_u wben_ls", false,-1);
        tracep->declBit(c+422,"top forwarding_u wben_wb", false,-1);
        tracep->declQuad(c+419,"top forwarding_u wb_data_i", false,-1, 63,0);
        tracep->declBit(c+720,"top forwarding_u wb_stall_n", false,-1);
        tracep->declBus(c+403,"top forwarding_u rs1_sel", false,-1, 1,0);
        tracep->declBus(c+404,"top forwarding_u rs2_sel", false,-1, 1,0);
        tracep->declQuad(c+10,"top forwarding_u wb_data_o", false,-1, 63,0);
        tracep->declQuad(c+10,"top forwarding_u rd_wb", false,-1, 63,0);
        tracep->declBit(c+61,"top forwarding_u reg_wben", false,-1);
        tracep->declBus(c+62,"top forwarding_u reg_wb_idx", false,-1, 4,0);
        tracep->declBit(c+150,"top forwarding_u rs1_ex_fw", false,-1);
        tracep->declBit(c+589,"top forwarding_u rs1_ls_fw", false,-1);
        tracep->declBit(c+151,"top forwarding_u rs1_wb_fw", false,-1);
        tracep->declBit(c+152,"top forwarding_u rs2_ex_fw", false,-1);
        tracep->declBit(c+590,"top forwarding_u rs2_ls_fw", false,-1);
        tracep->declBit(c+153,"top forwarding_u rs2_wb_fw", false,-1);
        tracep->declBit(c+821,"top L_S_reg_u clk", false,-1);
        tracep->declBit(c+822,"top L_S_reg_u rstn", false,-1);
        tracep->declQuad(c+380,"top L_S_reg_u PC_ls_reg_i", false,-1, 63,0);
        tracep->declQuad(c+393,"top L_S_reg_u rs2_ls_reg_i", false,-1, 63,0);
        tracep->declBus(c+382,"top L_S_reg_u instr_ls_reg_i", false,-1, 31,0);
        tracep->declQuad(c+383,"top L_S_reg_u alures_ls_reg_i", false,-1, 63,0);
        tracep->declBit(c+399,"top L_S_reg_u wben_ls_reg_i", false,-1);
        tracep->declBit(c+402,"top L_S_reg_u trap_ls_reg_i", false,-1);
        tracep->declBit(c+720,"top L_S_reg_u stall_n", false,-1);
        tracep->declBit(c+33,"top L_S_reg_u flush_i", false,-1);
        tracep->declBit(c+437,"top L_S_reg_u fence_ls_reg_i", false,-1);
        tracep->declQuad(c+12,"top L_S_reg_u PC_ls_reg_o", false,-1, 63,0);
        tracep->declQuad(c+14,"top L_S_reg_u rs2_ls_reg_o", false,-1, 63,0);
        tracep->declBus(c+18,"top L_S_reg_u instr_ls_reg_o", false,-1, 31,0);
        tracep->declQuad(c+16,"top L_S_reg_u alures_ls_reg_o", false,-1, 63,0);
        tracep->declBit(c+19,"top L_S_reg_u wben_ls_reg_o", false,-1);
        tracep->declBit(c+26,"top L_S_reg_u trap_ls_reg_o", false,-1);
        tracep->declBit(c+34,"top L_S_reg_u fence_ls_reg_o", false,-1);
        tracep->declArray(c+154,"top L_S_reg_u bundle", false,-1, 226,0);
        tracep->declBus(c+967,"top L_S_reg_u ls_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+964,"top L_S_reg_u ls_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+821,"top L_S_reg_u ls_reg i_clk", false,-1);
        tracep->declBit(c+822,"top L_S_reg_u ls_reg i_rst_n", false,-1);
        tracep->declBit(c+720,"top L_S_reg_u ls_reg i_wen", false,-1);
        tracep->declArray(c+154,"top L_S_reg_u ls_reg i_din", false,-1, 226,0);
        tracep->declArray(c+63,"top L_S_reg_u ls_reg o_dout", false,-1, 226,0);
        tracep->declBit(c+821,"top ls_u clk", false,-1);
        tracep->declBit(c+822,"top ls_u rst_n", false,-1);
        tracep->declQuad(c+12,"top ls_u pc", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+14,"top ls_u rs2_i", false,-1, 63,0);
        tracep->declBus(c+18,"top ls_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+414,"top ls_u alures_last_i", false,-1, 63,0);
        tracep->declBus(c+418,"top ls_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+416,"top ls_u wb_data_i", false,-1, 63,0);
        tracep->declQuad(c+423,"top ls_u wb_csr_data_i", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u trap_ls_i", false,-1);
        tracep->declBit(c+720,"top ls_u stall_n", false,-1);
        tracep->declBit(c+717,"top ls_u if_stall_n", false,-1);
        tracep->declQuad(c+888,"top ls_u ls_res_o", false,-1, 63,0);
        tracep->declQuad(c+20,"top ls_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u mepc_o", false,-1, 63,0);
        tracep->declBit(c+721,"top ls_u ls_not_ok", false,-1);
        tracep->declBit(c+33,"top ls_u in_intr_ls", false,-1);
        tracep->declBit(c+146,"top ls_u ld_csr_hazard", false,-1);
        tracep->declQuad(c+412,"top ls_u wb_pc", false,-1, 63,0);
        tracep->declQuad(c+380,"top ls_u ex_pc", false,-1, 63,0);
        tracep->declQuad(c+359,"top ls_u id_pc", false,-1, 63,0);
        tracep->declQuad(c+345,"top ls_u if_pc", false,-1, 63,0);
        tracep->declQuad(c+425,"top ls_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+915,"top ls_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+427,"top ls_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+195,"top ls_u clint_axi_arready", false,-1);
        tracep->declBus(c+428,"top ls_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+30,"top ls_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+196,"top ls_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+197,"top ls_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+429,"top ls_u clint_axi_rready", false,-1);
        tracep->declBus(c+198,"top ls_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+199,"top ls_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+915,"top ls_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+430,"top ls_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+201,"top ls_u clint_axi_awready", false,-1);
        tracep->declQuad(c+431,"top ls_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+202,"top ls_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+433,"top ls_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+203,"top ls_u clint_axi_wready", false,-1);
        tracep->declBus(c+196,"top ls_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+204,"top ls_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+434,"top ls_u clint_axi_bready", false,-1);
        tracep->declQuad(c+16,"top ls_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+143,"top ls_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+410,"top ls_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+411,"top ls_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top ls_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+721,"top ls_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+721,"top ls_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+722,"top ls_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u rden", false,-1);
        tracep->declBus(c+71,"top ls_u memop", false,-1, 2,0);
        tracep->declQuad(c+143,"top ls_u wr_data", false,-1, 63,0);
        tracep->declBit(c+591,"top ls_u wren_last", false,-1);
        tracep->declQuad(c+592,"top ls_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+737,"top ls_u csr_stall_n", false,-1);
        tracep->declBit(c+72,"top ls_u timr_int", false,-1);
        tracep->declBit(c+821,"top ls_u lsu_u clk", false,-1);
        tracep->declBit(c+822,"top ls_u lsu_u rstn", false,-1);
        tracep->declBit(c+28,"top ls_u lsu_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u lsu_u rden", false,-1);
        tracep->declBus(c+71,"top ls_u lsu_u memop", false,-1, 2,0);
        tracep->declQuad(c+143,"top ls_u lsu_u wr_data_i", false,-1, 63,0);
        tracep->declQuad(c+16,"top ls_u lsu_u addr_i", false,-1, 63,0);
        tracep->declQuad(c+12,"top ls_u lsu_u pc_ls_i", false,-1, 63,0);
        tracep->declQuad(c+414,"top ls_u lsu_u addr_last_i", false,-1, 63,0);
        tracep->declBit(c+591,"top ls_u lsu_u wren_last_i", false,-1);
        tracep->declQuad(c+888,"top ls_u lsu_u ls_res_o", false,-1, 63,0);
        tracep->declBit(c+721,"top ls_u lsu_u ls_not_ok", false,-1);
        tracep->declQuad(c+16,"top ls_u lsu_u ls_sram_addr", false,-1, 63,0);
        tracep->declBit(c+27,"top ls_u lsu_u ls_sram_rd_en", false,-1);
        tracep->declBit(c+28,"top ls_u lsu_u ls_sram_wr_en", false,-1);
        tracep->declQuad(c+143,"top ls_u lsu_u ls_sram_wr_data", false,-1, 63,0);
        tracep->declBus(c+410,"top ls_u lsu_u ls_sram_wr_mask", false,-1, 7,0);
        tracep->declBus(c+411,"top ls_u lsu_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top ls_u lsu_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+721,"top ls_u lsu_u ls_sram_rd_data_valid", false,-1);
        tracep->declBit(c+721,"top ls_u lsu_u ls_sram_wr_data_ok", false,-1);
        tracep->declQuad(c+722,"top ls_u lsu_u ls_sram_rd_data", false,-1, 63,0);
        tracep->declQuad(c+722,"top ls_u lsu_u rd_data_base", false,-1, 63,0);
        tracep->declBit(c+73,"top ls_u lsu_u lb", false,-1);
        tracep->declBit(c+74,"top ls_u lsu_u lbu", false,-1);
        tracep->declBit(c+75,"top ls_u lsu_u lh", false,-1);
        tracep->declBit(c+76,"top ls_u lsu_u lhu", false,-1);
        tracep->declBit(c+77,"top ls_u lsu_u lw", false,-1);
        tracep->declBit(c+78,"top ls_u lsu_u lwu", false,-1);
        tracep->declBit(c+79,"top ls_u lsu_u ld", false,-1);
        tracep->declBus(c+29,"top ls_u lsu_u rd_size", false,-1, 2,0);
        tracep->declBus(c+738,"top ls_u lsu_u rd_data_b", false,-1, 7,0);
        tracep->declBus(c+739,"top ls_u lsu_u rd_data_h", false,-1, 15,0);
        tracep->declBus(c+740,"top ls_u lsu_u rd_data_w", false,-1, 31,0);
        tracep->declBus(c+411,"top ls_u lsu_u wr_size", false,-1, 2,0);
        tracep->declBus(c+410,"top ls_u lsu_u wr_mask", false,-1, 7,0);
        tracep->declBit(c+80,"top ls_u lsu_u sb", false,-1);
        tracep->declBit(c+81,"top ls_u lsu_u sh", false,-1);
        tracep->declBit(c+82,"top ls_u lsu_u sw", false,-1);
        tracep->declBit(c+83,"top ls_u lsu_u sd", false,-1);
        tracep->declBus(c+18,"top ls_u ls_ctr_u instr_i", false,-1, 31,0);
        tracep->declBus(c+418,"top ls_u ls_ctr_u instr_last_i", false,-1, 31,0);
        tracep->declQuad(c+14,"top ls_u ls_ctr_u rs2_i", false,-1, 63,0);
        tracep->declQuad(c+416,"top ls_u ls_ctr_u wb_data_i", false,-1, 63,0);
        tracep->declQuad(c+423,"top ls_u ls_ctr_u wb_csr_data_i", false,-1, 63,0);
        tracep->declBit(c+28,"top ls_u ls_ctr_u wren", false,-1);
        tracep->declBit(c+27,"top ls_u ls_ctr_u rden", false,-1);
        tracep->declBus(c+71,"top ls_u ls_ctr_u memop", false,-1, 2,0);
        tracep->declQuad(c+143,"top ls_u ls_ctr_u wr_data", false,-1, 63,0);
        tracep->declBit(c+162,"top ls_u ls_ctr_u ld_st_en", false,-1);
        tracep->declBit(c+163,"top ls_u ls_ctr_u csr_st_en", false,-1);
        tracep->declBit(c+821,"top ls_u CSR_u clk", false,-1);
        tracep->declBit(c+822,"top ls_u CSR_u rst_n", false,-1);
        tracep->declQuad(c+12,"top ls_u CSR_u pc_i", false,-1, 63,0);
        tracep->declQuad(c+412,"top ls_u CSR_u wb_pc", false,-1, 63,0);
        tracep->declQuad(c+380,"top ls_u CSR_u ex_pc", false,-1, 63,0);
        tracep->declQuad(c+359,"top ls_u CSR_u id_pc", false,-1, 63,0);
        tracep->declQuad(c+345,"top ls_u CSR_u if_pc", false,-1, 63,0);
        tracep->declBus(c+18,"top ls_u CSR_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+592,"top ls_u CSR_u csr_wr_data", false,-1, 63,0);
        tracep->declBit(c+26,"top ls_u CSR_u trap", false,-1);
        tracep->declBit(c+737,"top ls_u CSR_u stall_n", false,-1);
        tracep->declBit(c+72,"top ls_u CSR_u timer_int_i", false,-1);
        tracep->declBit(c+33,"top ls_u CSR_u in_intr_ls", false,-1);
        tracep->declQuad(c+20,"top ls_u CSR_u csr_data_o", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u CSR_u mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u CSR_u mepc_o", false,-1, 63,0);
        tracep->declQuad(c+84,"top ls_u CSR_u commitPC", false,-1, 63,0);
        tracep->declBit(c+86,"top ls_u CSR_u csrrw", false,-1);
        tracep->declBit(c+87,"top ls_u CSR_u csrrs", false,-1);
        tracep->declBit(c+88,"top ls_u CSR_u csrrc", false,-1);
        tracep->declBit(c+89,"top ls_u CSR_u system", false,-1);
        tracep->declBit(c+90,"top ls_u CSR_u csr_wr_en", false,-1);
        tracep->declBit(c+91,"top ls_u CSR_u sel_mepc", false,-1);
        tracep->declBit(c+92,"top ls_u CSR_u sel_mtvec", false,-1);
        tracep->declBit(c+93,"top ls_u CSR_u sel_mstatus", false,-1);
        tracep->declBit(c+94,"top ls_u CSR_u sel_mcause", false,-1);
        tracep->declBit(c+95,"top ls_u CSR_u sel_mie", false,-1);
        tracep->declBit(c+96,"top ls_u CSR_u sel_mip", false,-1);
        tracep->declQuad(c+592,"top ls_u CSR_u rw", false,-1, 63,0);
        tracep->declQuad(c+164,"top ls_u CSR_u rs", false,-1, 63,0);
        tracep->declQuad(c+166,"top ls_u CSR_u rc", false,-1, 63,0);
        tracep->declQuad(c+594,"top ls_u CSR_u wr_data", false,-1, 63,0);
        tracep->declQuad(c+24,"top ls_u CSR_u mepc", false,-1, 63,0);
        tracep->declQuad(c+22,"top ls_u CSR_u mtvec", false,-1, 63,0);
        tracep->declQuad(c+97,"top ls_u CSR_u mstatus", false,-1, 63,0);
        tracep->declBit(c+99,"top ls_u CSR_u mstatus_MIE", false,-1);
        tracep->declQuad(c+100,"top ls_u CSR_u mcause_n", false,-1, 63,0);
        tracep->declQuad(c+102,"top ls_u CSR_u mcause", false,-1, 63,0);
        tracep->declQuad(c+104,"top ls_u CSR_u mie", false,-1, 63,0);
        tracep->declBit(c+106,"top ls_u CSR_u mie_MTIE", false,-1);
        tracep->declQuad(c+107,"top ls_u CSR_u mip", false,-1, 63,0);
        tracep->declBit(c+109,"top ls_u CSR_u mip_MTIP", false,-1);
        tracep->declBit(c+821,"top ls_u clint_u clk", false,-1);
        tracep->declBit(c+822,"top ls_u clint_u rst_n", false,-1);
        tracep->declQuad(c+425,"top ls_u clint_u clint_axi_araddr", false,-1, 63,0);
        tracep->declBus(c+915,"top ls_u clint_u clint_axi_arprot", false,-1, 2,0);
        tracep->declBit(c+427,"top ls_u clint_u clint_axi_arvalid", false,-1);
        tracep->declBit(c+195,"top ls_u clint_u clint_axi_arready", false,-1);
        tracep->declBus(c+428,"top ls_u clint_u clint_axi_arsize", false,-1, 2,0);
        tracep->declQuad(c+30,"top ls_u clint_u clint_axi_rdata", false,-1, 63,0);
        tracep->declBus(c+196,"top ls_u clint_u clint_axi_rresp", false,-1, 1,0);
        tracep->declBit(c+197,"top ls_u clint_u clint_axi_rvalid", false,-1);
        tracep->declBit(c+429,"top ls_u clint_u clint_axi_rready", false,-1);
        tracep->declBus(c+198,"top ls_u clint_u clint_axi_awsize", false,-1, 2,0);
        tracep->declQuad(c+199,"top ls_u clint_u clint_axi_awaddr", false,-1, 63,0);
        tracep->declBus(c+915,"top ls_u clint_u clint_axi_awprot", false,-1, 2,0);
        tracep->declBit(c+430,"top ls_u clint_u clint_axi_awvalid", false,-1);
        tracep->declBit(c+201,"top ls_u clint_u clint_axi_awready", false,-1);
        tracep->declQuad(c+431,"top ls_u clint_u clint_axi_wdata", false,-1, 63,0);
        tracep->declBus(c+202,"top ls_u clint_u clint_axi_wstrb", false,-1, 7,0);
        tracep->declBit(c+433,"top ls_u clint_u clint_axi_wvalid", false,-1);
        tracep->declBit(c+203,"top ls_u clint_u clint_axi_wready", false,-1);
        tracep->declBus(c+196,"top ls_u clint_u clint_axi_bresp", false,-1, 1,0);
        tracep->declBit(c+204,"top ls_u clint_u clint_axi_bvalid", false,-1);
        tracep->declBit(c+434,"top ls_u clint_u clint_axi_bready", false,-1);
        tracep->declBit(c+72,"top ls_u clint_u hart0_time_int_o", false,-1);
        tracep->declQuad(c+240,"top ls_u clint_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+201,"top ls_u clint_u axi_awready", false,-1);
        tracep->declBit(c+203,"top ls_u clint_u axi_wready", false,-1);
        tracep->declBus(c+242,"top ls_u clint_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+204,"top ls_u clint_u axi_bvalid", false,-1);
        tracep->declQuad(c+243,"top ls_u clint_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+195,"top ls_u clint_u axi_arready", false,-1);
        tracep->declBus(c+196,"top ls_u clint_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+197,"top ls_u clint_u axi_rvalid", false,-1);
        tracep->declBit(c+245,"top ls_u clint_u aw_en", false,-1);
        tracep->declQuad(c+30,"top ls_u clint_u reg_data_out", false,-1, 63,0);
        tracep->declQuad(c+110,"top ls_u clint_u mtime", false,-1, 63,0);
        tracep->declQuad(c+112,"top ls_u clint_u mtimecmp", false,-1, 63,0);
        tracep->declBit(c+596,"top ls_u clint_u mtimeWrEn", false,-1);
        tracep->declBit(c+597,"top ls_u clint_u mtimecmpWrEn", false,-1);
        tracep->declBit(c+598,"top ls_u clint_u slv_reg_wren", false,-1);
        tracep->declBit(c+315,"top ls_u clint_u slv_reg_rden", false,-1);
        tracep->declBus(c+114,"top ls_u clint_u byte_index", false,-1, 31,0);
        tracep->declBit(c+821,"top Dcache_u clk", false,-1);
        tracep->declBit(c+822,"top Dcache_u rst_n", false,-1);
        tracep->declBus(c+599,"top Dcache_u addr_i", false,-1, 31,0);
        tracep->declBit(c+600,"top Dcache_u exValid_i", false,-1);
        tracep->declBit(c+601,"top Dcache_u lsValid_i", false,-1);
        tracep->declBit(c+602,"top Dcache_u op_i", false,-1);
        tracep->declQuad(c+143,"top Dcache_u wr_data_i", false,-1, 63,0);
        tracep->declBus(c+410,"top Dcache_u wr_mask_i", false,-1, 7,0);
        tracep->declBit(c+720,"top Dcache_u stall_n", false,-1);
        tracep->declBit(c+718,"top Dcache_u addr_ok_o", false,-1);
        tracep->declBit(c+721,"top Dcache_u data_notok_o", false,-1);
        tracep->declQuad(c+722,"top Dcache_u rd_data_o", false,-1, 63,0);
        tracep->declBus(c+411,"top Dcache_u ls_sram_wr_size", false,-1, 2,0);
        tracep->declBus(c+29,"top Dcache_u ls_sram_rd_size", false,-1, 2,0);
        tracep->declBit(c+437,"top Dcache_u fence_clean", false,-1);
        tracep->declBit(c+438,"top Dcache_u clear_Icache", false,-1);
        tracep->declBit(c+439,"top Dcache_u cacheRdValid_o", false,-1);
        tracep->declBit(c+35,"top Dcache_u axiRdReady", false,-1);
        tracep->declBus(c+339,"top Dcache_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+716,"top Dcache_u rdLast_i", false,-1);
        tracep->declBus(c+603,"top Dcache_u cacheRdAddr_o", false,-1, 31,0);
        tracep->declBus(c+900,"top Dcache_u cacheWrAddr_o", false,-1, 31,0);
        tracep->declBus(c+142,"top Dcache_u cacheRdSize_o", false,-1, 2,0);
        tracep->declQuad(c+714,"top Dcache_u rdData_i", false,-1, 63,0);
        tracep->declBit(c+725,"top Dcache_u dataValid_i", false,-1);
        tracep->declBit(c+445,"top Dcache_u axiWrReady", false,-1);
        tracep->declBit(c+440,"top Dcache_u cacheWrValid_o", false,-1);
        tracep->declArray(c+307,"top Dcache_u cacheWrData_o", false,-1, 255,0);
        tracep->declBus(c+339,"top Dcache_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+446,"top Dcache_u cacheWrMask_o", false,-1, 7,0);
        tracep->declBus(c+447,"top Dcache_u cacheWrSize_o", false,-1, 2,0);
        tracep->declBus(c+915,"top Dcache_u idle", false,-1, 2,0);
        tracep->declBus(c+942,"top Dcache_u compare", false,-1, 2,0);
        tracep->declBus(c+943,"top Dcache_u miss", false,-1, 2,0);
        tracep->declBus(c+944,"top Dcache_u getdata", false,-1, 2,0);
        tracep->declBus(c+945,"top Dcache_u replace", false,-1, 2,0);
        tracep->declBus(c+946,"top Dcache_u uncacheOp", false,-1, 2,0);
        tracep->declBus(c+968,"top Dcache_u clean", false,-1, 2,0);
        tracep->declBus(c+604,"top Dcache_u cacheCurState", false,-1, 2,0);
        tracep->declBus(c+741,"top Dcache_u cacheNexState", false,-1, 2,0);
        tracep->declBit(c+605,"top Dcache_u cacheHit", false,-1);
        tracep->declBit(c+606,"top Dcache_u way1Hit", false,-1);
        tracep->declBit(c+607,"top Dcache_u way2Hit", false,-1);
        tracep->declArray(c+246,"top Dcache_u dataWay1_1", false,-1, 127,0);
        tracep->declArray(c+250,"top Dcache_u dataWay1_2", false,-1, 127,0);
        tracep->declArray(c+254,"top Dcache_u dataWay2_1", false,-1, 127,0);
        tracep->declArray(c+258,"top Dcache_u dataWay2_2", false,-1, 127,0);
        tracep->declArray(c+608,"top Dcache_u inDataWay1_1", false,-1, 127,0);
        tracep->declArray(c+612,"top Dcache_u inDataWay1_2", false,-1, 127,0);
        tracep->declArray(c+608,"top Dcache_u inDataWay2_1", false,-1, 127,0);
        tracep->declArray(c+612,"top Dcache_u inDataWay2_2", false,-1, 127,0);
        tracep->declBit(c+616,"top Dcache_u wenWay1", false,-1);
        tracep->declBit(c+617,"top Dcache_u wenWay2", false,-1);
        tracep->declBit(c+618,"top Dcache_u uncached", false,-1);
        tracep->declBit(c+619,"top Dcache_u idleEn", false,-1);
        tracep->declQuad(c+620,"top Dcache_u reqLatch", false,-1, 32,0);
        tracep->declBus(c+622,"top Dcache_u offset", false,-1, 4,0);
        tracep->declBus(c+623,"top Dcache_u index", false,-1, 5,0);
        tracep->declBus(c+624,"top Dcache_u tag", false,-1, 20,0);
        tracep->declQuad(c+115,"top Dcache_u validArray1", false,-1, 63,0);
        tracep->declQuad(c+117,"top Dcache_u validArray2", false,-1, 63,0);
        tracep->declBit(c+168,"top Dcache_u bitValid1", false,-1);
        tracep->declBit(c+169,"top Dcache_u bitValid2", false,-1);
        tracep->declBit(c+901,"top Dcache_u bitValid1_d", false,-1);
        tracep->declBit(c+902,"top Dcache_u bitValid2_d", false,-1);
        tracep->declBus(c+903,"top Dcache_u tagArray1_d", false,-1, 20,0);
        tracep->declBus(c+904,"top Dcache_u tagArray2_d", false,-1, 20,0);
        tracep->declBus(c+170,"top Dcache_u tagWay1_q", false,-1, 20,0);
        tracep->declBus(c+171,"top Dcache_u tagWay2_q", false,-1, 20,0);
        tracep->declBit(c+969,"top Dcache_u validWay1_q", false,-1);
        tracep->declBit(c+970,"top Dcache_u validWay2_q", false,-1);
        tracep->declBus(c+119,"top Dcache_u testTag", false,-1, 20,0);
        tracep->declBus(c+120,"top Dcache_u tagtest", false,-1, 20,0);
        tracep->declBit(c+121,"top Dcache_u replaceEnDelay", false,-1);
        tracep->declBit(c+625,"top Dcache_u compareEn", false,-1);
        tracep->declArray(c+262,"top Dcache_u way1Data", false,-1, 255,0);
        tracep->declArray(c+270,"top Dcache_u way2Data", false,-1, 255,0);
        tracep->declQuad(c+905,"top Dcache_u rdDataRegWay1", false,-1, 63,0);
        tracep->declQuad(c+907,"top Dcache_u rdDataRegWay2", false,-1, 63,0);
        tracep->declBit(c+626,"top Dcache_u missEn", false,-1);
        tracep->declBit(c+627,"top Dcache_u getdataEn", false,-1);
        tracep->declQuad(c+628,"top Dcache_u addrToRead", false,-1, 63,0);
        tracep->declBit(c+278,"top Dcache_u randomBit", false,-1);
        tracep->declBit(c+121,"top Dcache_u missFlag", false,-1);
        tracep->declBus(c+630,"top Dcache_u rdCnt", false,-1, 1,0);
        tracep->declArray(c+631,"top Dcache_u rdBuffer", false,-1, 255,0);
        tracep->declBit(c+639,"top Dcache_u replaceEn", false,-1);
        tracep->declBit(c+122,"top Dcache_u wenDelay1", false,-1);
        tracep->declBit(c+123,"top Dcache_u wenDelay2", false,-1);
        tracep->declQuad(c+640,"top Dcache_u wrDataLatch", false,-1, 63,0);
        tracep->declBus(c+124,"top Dcache_u wrMaskLatch", false,-1, 7,0);
        tracep->declQuad(c+125,"top Dcache_u dirtyArray1", false,-1, 63,0);
        tracep->declQuad(c+127,"top Dcache_u dirtyArray2", false,-1, 63,0);
        tracep->declBit(c+642,"top Dcache_u wrLow", false,-1);
        tracep->declBit(c+643,"top Dcache_u wrHigh", false,-1);
        tracep->declQuad(c+644,"top Dcache_u storeData", false,-1, 63,0);
        tracep->declBus(c+646,"top Dcache_u storeMask", false,-1, 7,0);
        tracep->declQuad(c+647,"top Dcache_u sramMask", false,-1, 63,0);
        tracep->declArray(c+649,"top Dcache_u maskWay1_1", false,-1, 127,0);
        tracep->declArray(c+653,"top Dcache_u maskWay1_2", false,-1, 127,0);
        tracep->declArray(c+649,"top Dcache_u maskWay2_1", false,-1, 127,0);
        tracep->declArray(c+653,"top Dcache_u maskWay2_2", false,-1, 127,0);
        tracep->declBit(c+657,"top Dcache_u wrMiss", false,-1);
        tracep->declBit(c+658,"top Dcache_u rdMiss", false,-1);
        tracep->declBit(c+129,"top Dcache_u replaceWay", false,-1);
        tracep->declBit(c+909,"top Dcache_u needWrBk", false,-1);
        tracep->declBit(c+130,"top Dcache_u needWrBk_Reg", false,-1);
        tracep->declBit(c+131,"top Dcache_u uncache", false,-1);
        tracep->declBit(c+130,"top Dcache_u axiWrBusy", false,-1);
        tracep->declBus(c+910,"top Dcache_u addrToWrite", false,-1, 31,0);
        tracep->declBit(c+659,"top Dcache_u uncacheOpEn", false,-1);
        tracep->declBit(c+172,"top Dcache_u uncacheWrValid", false,-1);
        tracep->declBit(c+742,"top Dcache_u uncacheOpOk", false,-1);
        tracep->declBit(c+173,"top Dcache_u uncacheRdValid", false,-1);
        tracep->declBit(c+132,"top Dcache_u uncacheRdOk", false,-1);
        tracep->declBit(c+133,"top Dcache_u uncacheWrOk", false,-1);
        tracep->declBus(c+660,"top Dcache_u uncacheRdAddr", false,-1, 31,0);
        tracep->declQuad(c+134,"top Dcache_u temp", false,-1, 63,0);
        tracep->declBit(c+661,"top Dcache_u cleanEn", false,-1);
        tracep->declBit(c+438,"top Dcache_u clean_OK", false,-1);
        tracep->declBus(c+662,"top Dcache_u cleanCnt", false,-1, 6,0);
        tracep->declBit(c+663,"top Dcache_u cleanWrValid", false,-1);
        tracep->declBus(c+174,"top Dcache_u cleanWrAddr", false,-1, 31,0);
        tracep->declBit(c+136,"top Dcache_u oneCycleDelay", false,-1);
        tracep->declArray(c+316,"top Dcache_u cleanData", false,-1, 255,0);
        tracep->declBus(c+949,"top Dcache_u iramWay1_1 Bits", false,-1, 31,0);
        tracep->declBus(c+911,"top Dcache_u iramWay1_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+950,"top Dcache_u iramWay1_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+949,"top Dcache_u iramWay1_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+246,"top Dcache_u iramWay1_1 Q", false,-1, 127,0);
        tracep->declBit(c+821,"top Dcache_u iramWay1_1 CLK", false,-1);
        tracep->declBit(c+689,"top Dcache_u iramWay1_1 CEN", false,-1);
        tracep->declBit(c+664,"top Dcache_u iramWay1_1 WEN", false,-1);
        tracep->declArray(c+665,"top Dcache_u iramWay1_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+743,"top Dcache_u iramWay1_1 A", false,-1, 5,0);
        tracep->declArray(c+608,"top Dcache_u iramWay1_1 D", false,-1, 127,0);
        tracep->declBit(c+690,"top Dcache_u iramWay1_1 cen", false,-1);
        tracep->declBit(c+616,"top Dcache_u iramWay1_1 wen", false,-1);
        tracep->declArray(c+649,"top Dcache_u iramWay1_1 bwen", false,-1, 127,0);
        tracep->declBus(c+949,"top Dcache_u iramWay1_2 Bits", false,-1, 31,0);
        tracep->declBus(c+911,"top Dcache_u iramWay1_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+950,"top Dcache_u iramWay1_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+949,"top Dcache_u iramWay1_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+250,"top Dcache_u iramWay1_2 Q", false,-1, 127,0);
        tracep->declBit(c+821,"top Dcache_u iramWay1_2 CLK", false,-1);
        tracep->declBit(c+689,"top Dcache_u iramWay1_2 CEN", false,-1);
        tracep->declBit(c+664,"top Dcache_u iramWay1_2 WEN", false,-1);
        tracep->declArray(c+669,"top Dcache_u iramWay1_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+743,"top Dcache_u iramWay1_2 A", false,-1, 5,0);
        tracep->declArray(c+612,"top Dcache_u iramWay1_2 D", false,-1, 127,0);
        tracep->declBit(c+690,"top Dcache_u iramWay1_2 cen", false,-1);
        tracep->declBit(c+616,"top Dcache_u iramWay1_2 wen", false,-1);
        tracep->declArray(c+653,"top Dcache_u iramWay1_2 bwen", false,-1, 127,0);
        tracep->declBus(c+949,"top Dcache_u iramWay2_1 Bits", false,-1, 31,0);
        tracep->declBus(c+911,"top Dcache_u iramWay2_1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+950,"top Dcache_u iramWay2_1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+949,"top Dcache_u iramWay2_1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+254,"top Dcache_u iramWay2_1 Q", false,-1, 127,0);
        tracep->declBit(c+821,"top Dcache_u iramWay2_1 CLK", false,-1);
        tracep->declBit(c+691,"top Dcache_u iramWay2_1 CEN", false,-1);
        tracep->declBit(c+673,"top Dcache_u iramWay2_1 WEN", false,-1);
        tracep->declArray(c+665,"top Dcache_u iramWay2_1 BWEN", false,-1, 127,0);
        tracep->declBus(c+744,"top Dcache_u iramWay2_1 A", false,-1, 5,0);
        tracep->declArray(c+608,"top Dcache_u iramWay2_1 D", false,-1, 127,0);
        tracep->declBit(c+692,"top Dcache_u iramWay2_1 cen", false,-1);
        tracep->declBit(c+617,"top Dcache_u iramWay2_1 wen", false,-1);
        tracep->declArray(c+649,"top Dcache_u iramWay2_1 bwen", false,-1, 127,0);
        tracep->declBus(c+949,"top Dcache_u iramWay2_2 Bits", false,-1, 31,0);
        tracep->declBus(c+911,"top Dcache_u iramWay2_2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+950,"top Dcache_u iramWay2_2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+949,"top Dcache_u iramWay2_2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+258,"top Dcache_u iramWay2_2 Q", false,-1, 127,0);
        tracep->declBit(c+821,"top Dcache_u iramWay2_2 CLK", false,-1);
        tracep->declBit(c+691,"top Dcache_u iramWay2_2 CEN", false,-1);
        tracep->declBit(c+673,"top Dcache_u iramWay2_2 WEN", false,-1);
        tracep->declArray(c+669,"top Dcache_u iramWay2_2 BWEN", false,-1, 127,0);
        tracep->declBus(c+744,"top Dcache_u iramWay2_2 A", false,-1, 5,0);
        tracep->declArray(c+612,"top Dcache_u iramWay2_2 D", false,-1, 127,0);
        tracep->declBit(c+692,"top Dcache_u iramWay2_2 cen", false,-1);
        tracep->declBit(c+617,"top Dcache_u iramWay2_2 wen", false,-1);
        tracep->declArray(c+653,"top Dcache_u iramWay2_2 bwen", false,-1, 127,0);
        tracep->declBus(c+911,"top axi_ls_u RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+911,"top axi_ls_u RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+911,"top axi_ls_u AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+911,"top axi_ls_u AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+912,"top axi_ls_u AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+913,"top axi_ls_u AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+914,"top axi_ls_u AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+821,"top axi_ls_u clock", false,-1);
        tracep->declBit(c+822,"top axi_ls_u reset", false,-1);
        tracep->declBit(c+439,"top axi_ls_u rw_valid_i", false,-1);
        tracep->declBit(c+35,"top axi_ls_u rw_ready_o", false,-1);
        tracep->declQuad(c+714,"top axi_ls_u data_read_o", false,-1, 63,0);
        tracep->declQuad(c+441,"top axi_ls_u rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+339,"top axi_ls_u fetchLenth", false,-1, 7,0);
        tracep->declBit(c+716,"top axi_ls_u rdLast_o", false,-1);
        tracep->declBit(c+725,"top axi_ls_u dataValid_o", false,-1);
        tracep->declBit(c+440,"top axi_ls_u wr_valid_i", false,-1);
        tracep->declBit(c+445,"top axi_ls_u wr_ready_o", false,-1);
        tracep->declArray(c+307,"top axi_ls_u cacheWrData_i", false,-1, 255,0);
        tracep->declBus(c+339,"top axi_ls_u storeLenth", false,-1, 7,0);
        tracep->declBus(c+447,"top axi_ls_u storeSize", false,-1, 2,0);
        tracep->declBus(c+142,"top axi_ls_u loadSize", false,-1, 2,0);
        tracep->declBus(c+446,"top axi_ls_u rw_w_mask_i", false,-1, 7,0);
        tracep->declQuad(c+443,"top axi_ls_u cacheWrAddr_i", false,-1, 63,0);
        tracep->declBit(c+881,"top axi_ls_u axi_aw_ready_i", false,-1);
        tracep->declBit(c+338,"top axi_ls_u axi_aw_valid_o", false,-1);
        tracep->declQuad(c+191,"top axi_ls_u axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+915,"top axi_ls_u axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+928,"top axi_ls_u axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_ls_u axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+339,"top axi_ls_u axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+193,"top axi_ls_u axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+924,"top axi_ls_u axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+917,"top axi_ls_u axi_aw_lock_o", false,-1);
        tracep->declBus(c+929,"top axi_ls_u axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+918,"top axi_ls_u axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+918,"top axi_ls_u axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+712,"top axi_ls_u axi_w_ready_i", false,-1);
        tracep->declBit(c+340,"top axi_ls_u axi_w_valid_o", false,-1);
        tracep->declQuad(c+341,"top axi_ls_u axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+194,"top axi_ls_u axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+343,"top axi_ls_u axi_w_last_o", false,-1);
        tracep->declBus(c+916,"top axi_ls_u axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+344,"top axi_ls_u axi_b_ready_o", false,-1);
        tracep->declBit(c+882,"top axi_ls_u axi_b_valid_i", false,-1);
        tracep->declBus(c+883,"top axi_ls_u axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+884,"top axi_ls_u axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+885,"top axi_ls_u axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+886,"top axi_ls_u axi_ar_ready_i", false,-1);
        tracep->declBit(c+6,"top axi_ls_u axi_ar_valid_o", false,-1);
        tracep->declQuad(c+7,"top axi_ls_u axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+915,"top axi_ls_u axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+928,"top axi_ls_u axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+916,"top axi_ls_u axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+339,"top axi_ls_u axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+142,"top axi_ls_u axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+924,"top axi_ls_u axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+917,"top axi_ls_u axi_ar_lock_o", false,-1);
        tracep->declBus(c+925,"top axi_ls_u axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+918,"top axi_ls_u axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+930,"top axi_ls_u axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+9,"top axi_ls_u axi_r_ready_o", false,-1);
        tracep->declBit(c+713,"top axi_ls_u axi_r_valid_i", false,-1);
        tracep->declBus(c+887,"top axi_ls_u axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+714,"top axi_ls_u axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+716,"top axi_ls_u axi_r_last_i", false,-1);
        tracep->declBus(c+711,"top axi_ls_u axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+931,"top axi_ls_u axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+959,"top axi_ls_u w_state_idle", false,-1, 1,0);
        tracep->declBus(c+924,"top axi_ls_u w_state_aw_wait", false,-1, 1,0);
        tracep->declBus(c+960,"top axi_ls_u w_state_dw_wait", false,-1, 1,0);
        tracep->declBus(c+961,"top axi_ls_u w_state_b_wait_trans_ok", false,-1, 1,0);
        tracep->declBus(c+674,"top axi_ls_u w_state", false,-1, 1,0);
        tracep->declBus(c+745,"top axi_ls_u w_state_next", false,-1, 1,0);
        tracep->declBit(c+338,"top axi_ls_u aw_valid", false,-1);
        tracep->declBit(c+340,"top axi_ls_u w_valid", false,-1);
        tracep->declBit(c+344,"top axi_ls_u b_ready", false,-1);
        tracep->declBit(c+971,"top axi_ls_u trans_ok", false,-1);
        tracep->declBit(c+343,"top axi_ls_u wrLast", false,-1);
        tracep->declQuad(c+191,"top axi_ls_u wrAddr_reg", false,-1, 63,0);
        tracep->declArray(c+279,"top axi_ls_u wr_data_reg", false,-1, 255,0);
        tracep->declBus(c+287,"top axi_ls_u wrMask_reg", false,-1, 7,0);
        tracep->declBus(c+193,"top axi_ls_u wrSize_reg", false,-1, 2,0);
        tracep->declBus(c+288,"top axi_ls_u storeLenth_reg", false,-1, 7,0);
        tracep->declBus(c+137,"top axi_ls_u wrCnt", false,-1, 1,0);
        tracep->declBus(c+959,"top axi_ls_u r_state_idle", false,-1, 1,0);
        tracep->declBus(c+924,"top axi_ls_u r_state_ar_wait", false,-1, 1,0);
        tracep->declBus(c+960,"top axi_ls_u r_state_r_wait", false,-1, 1,0);
        tracep->declBus(c+961,"top axi_ls_u r_state_trans_ok", false,-1, 1,0);
        tracep->declBus(c+138,"top axi_ls_u r_state", false,-1, 1,0);
        tracep->declBus(c+746,"top axi_ls_u r_state_next", false,-1, 1,0);
        tracep->declBit(c+6,"top axi_ls_u ar_valid", false,-1);
        tracep->declBit(c+9,"top axi_ls_u r_ready", false,-1);
        tracep->declQuad(c+7,"top axi_ls_u rdAddr_reg", false,-1, 63,0);
        tracep->declBus(c+962,"top axi_ls_u AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+928,"top axi_ls_u axi_id", false,-1, 3,0);
        tracep->declBus(c+917,"top axi_ls_u axi_user", false,-1, 0,0);
        tracep->declBus(c+972,"top axi_ls_u axi_len", false,-1, 7,0);
        tracep->declBus(c+944,"top axi_ls_u axi_size", false,-1, 2,0);
        tracep->declBus(c+289,"top axi_ls_u shift", false,-1, 5,0);
        tracep->declBit(c+821,"top wb_reg_u clk", false,-1);
        tracep->declBit(c+822,"top wb_reg_u rst_n", false,-1);
        tracep->declQuad(c+12,"top wb_reg_u pc_wb_reg_i", false,-1, 63,0);
        tracep->declBus(c+18,"top wb_reg_u instr_wb_reg_i", false,-1, 31,0);
        tracep->declQuad(c+16,"top wb_reg_u alures_wb_reg_i", false,-1, 63,0);
        tracep->declQuad(c+888,"top wb_reg_u lsres_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+19,"top wb_reg_u wben_wb_reg_i", false,-1);
        tracep->declQuad(c+20,"top wb_reg_u csrdata_wb_reg_i", false,-1, 63,0);
        tracep->declBit(c+720,"top wb_reg_u stall_n", false,-1);
        tracep->declQuad(c+412,"top wb_reg_u pc_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+418,"top wb_reg_u instr_wb_reg_o", false,-1, 31,0);
        tracep->declQuad(c+414,"top wb_reg_u alures_wb_reg_o", false,-1, 63,0);
        tracep->declQuad(c+416,"top wb_reg_u lsres_wb_reg_o", false,-1, 63,0);
        tracep->declBit(c+422,"top wb_reg_u wben_wb_reg_o", false,-1);
        tracep->declQuad(c+423,"top wb_reg_u csrdata_wb_reg_o", false,-1, 63,0);
        tracep->declBus(c+973,"top wb_reg_u wb_reg WIDTH", false,-1, 31,0);
        tracep->declBus(c+964,"top wb_reg_u wb_reg RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+821,"top wb_reg_u wb_reg i_clk", false,-1);
        tracep->declBit(c+822,"top wb_reg_u wb_reg i_rst_n", false,-1);
        tracep->declBit(c+720,"top wb_reg_u wb_reg i_wen", false,-1);
        tracep->declArray(c+747,"top wb_reg_u wb_reg i_din", false,-1, 288,0);
        tracep->declArray(c+675,"top wb_reg_u wb_reg o_dout", false,-1, 288,0);
        tracep->declQuad(c+412,"top wb_stage_u pc_i", false,-1, 63,0);
        tracep->declBus(c+418,"top wb_stage_u instr_i", false,-1, 31,0);
        tracep->declQuad(c+414,"top wb_stage_u alures_i", false,-1, 63,0);
        tracep->declQuad(c+416,"top wb_stage_u lsres_i", false,-1, 63,0);
        tracep->declQuad(c+423,"top wb_stage_u csrdata_i", false,-1, 63,0);
        tracep->declBus(c+421,"top wb_stage_u rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+419,"top wb_stage_u rd_data_o", false,-1, 63,0);
        tracep->declBit(c+821,"top pipline_ctrl_u clk", false,-1);
        tracep->declBit(c+822,"top pipline_ctrl_u rst_n", false,-1);
        tracep->declBit(c+378,"top pipline_ctrl_u ld_use_hazard", false,-1);
        tracep->declBit(c+347,"top pipline_ctrl_u is_jump", false,-1);
        tracep->declBit(c+375,"top pipline_ctrl_u in_trap_id", false,-1);
        tracep->declBit(c+376,"top pipline_ctrl_u out_trap_id", false,-1);
        tracep->declBit(c+350,"top pipline_ctrl_u if_instr_valid", false,-1);
        tracep->declBit(c+719,"top pipline_ctrl_u ex_not_ok", false,-1);
        tracep->declBit(c+721,"top pipline_ctrl_u ls_not_ok", false,-1);
        tracep->declBit(c+33,"top pipline_ctrl_u in_intr_ls", false,-1);
        tracep->declBit(c+436,"top pipline_ctrl_u fence_id", false,-1);
        tracep->declBit(c+437,"top pipline_ctrl_u fence_ex", false,-1);
        tracep->declBit(c+34,"top pipline_ctrl_u fence_ls", false,-1);
        tracep->declBit(c+717,"top pipline_ctrl_u if_stall_n", false,-1);
        tracep->declBit(c+686,"top pipline_ctrl_u pc_stall_n", false,-1);
        tracep->declBit(c+687,"top pipline_ctrl_u id_stall_n", false,-1);
        tracep->declBit(c+688,"top pipline_ctrl_u ex_stall_n", false,-1);
        tracep->declBit(c+720,"top pipline_ctrl_u ls_stall_n", false,-1);
        tracep->declBit(c+720,"top pipline_ctrl_u wb_stall_n", false,-1);
        tracep->declBit(c+379,"top pipline_ctrl_u id_flush", false,-1);
        tracep->declBit(c+407,"top pipline_ctrl_u ex_flush", false,-1);
        tracep->declBit(c+33,"top pipline_ctrl_u ls_flush", false,-1);
        tracep->declBit(c+685,"top pipline_ctrl_u fenceInPip", false,-1);
        tracep->declBus(c+974,"top lsAxiSlaveRam_u C_S_AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+974,"top lsAxiSlaveRam_u C_S_AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+329,"top lsAxiSlaveRam_u S_AXI_ARSIZE", false,-1, 2,0);
        tracep->declBus(c+184,"top lsAxiSlaveRam_u S_AXI_AWSIZE", false,-1, 2,0);
        tracep->declBit(c+821,"top lsAxiSlaveRam_u S_AXI_ACLK", false,-1);
        tracep->declBit(c+822,"top lsAxiSlaveRam_u S_AXI_ARESETN", false,-1);
        tracep->declQuad(c+181,"top lsAxiSlaveRam_u S_AXI_AWADDR", false,-1, 63,0);
        tracep->declBus(c+915,"top lsAxiSlaveRam_u S_AXI_AWPROT", false,-1, 2,0);
        tracep->declBit(c+333,"top lsAxiSlaveRam_u S_AXI_AWVALID", false,-1);
        tracep->declBit(c+180,"top lsAxiSlaveRam_u S_AXI_AWREADY", false,-1);
        tracep->declQuad(c+304,"top lsAxiSlaveRam_u S_AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+188,"top lsAxiSlaveRam_u S_AXI_WSTRB", false,-1, 7,0);
        tracep->declBit(c+334,"top lsAxiSlaveRam_u S_AXI_WVALID", false,-1);
        tracep->declBit(c+187,"top lsAxiSlaveRam_u S_AXI_WREADY", false,-1);
        tracep->declBus(c+190,"top lsAxiSlaveRam_u S_AXI_BRESP", false,-1, 1,0);
        tracep->declBit(c+189,"top lsAxiSlaveRam_u S_AXI_BVALID", false,-1);
        tracep->declBit(c+335,"top lsAxiSlaveRam_u S_AXI_BREADY", false,-1);
        tracep->declQuad(c+327,"top lsAxiSlaveRam_u S_AXI_ARADDR", false,-1, 63,0);
        tracep->declBus(c+915,"top lsAxiSlaveRam_u S_AXI_ARPROT", false,-1, 2,0);
        tracep->declBit(c+326,"top lsAxiSlaveRam_u S_AXI_ARVALID", false,-1);
        tracep->declBit(c+175,"top lsAxiSlaveRam_u S_AXI_ARREADY", false,-1);
        tracep->declQuad(c+178,"top lsAxiSlaveRam_u S_AXI_RDATA", false,-1, 63,0);
        tracep->declBus(c+177,"top lsAxiSlaveRam_u S_AXI_RRESP", false,-1, 1,0);
        tracep->declBit(c+176,"top lsAxiSlaveRam_u S_AXI_RVALID", false,-1);
        tracep->declBit(c+332,"top lsAxiSlaveRam_u S_AXI_RREADY", false,-1);
        tracep->declQuad(c+290,"top lsAxiSlaveRam_u axi_awaddr", false,-1, 63,0);
        tracep->declBit(c+180,"top lsAxiSlaveRam_u axi_awready", false,-1);
        tracep->declBit(c+187,"top lsAxiSlaveRam_u axi_wready", false,-1);
        tracep->declBus(c+190,"top lsAxiSlaveRam_u axi_bresp", false,-1, 1,0);
        tracep->declBit(c+189,"top lsAxiSlaveRam_u axi_bvalid", false,-1);
        tracep->declQuad(c+292,"top lsAxiSlaveRam_u axi_araddr", false,-1, 63,0);
        tracep->declBit(c+175,"top lsAxiSlaveRam_u axi_arready", false,-1);
        tracep->declQuad(c+178,"top lsAxiSlaveRam_u axi_rdata", false,-1, 63,0);
        tracep->declBus(c+177,"top lsAxiSlaveRam_u axi_rresp", false,-1, 1,0);
        tracep->declBit(c+176,"top lsAxiSlaveRam_u axi_rvalid", false,-1);
        tracep->declBus(c+975,"top lsAxiSlaveRam_u ADDR_LSB", false,-1, 31,0);
        tracep->declBus(c+976,"top lsAxiSlaveRam_u OPT_MEM_ADDR_BITS", false,-1, 31,0);
        tracep->declQuad(c+294,"top lsAxiSlaveRam_u slv_reg0", false,-1, 63,0);
        tracep->declQuad(c+296,"top lsAxiSlaveRam_u slv_reg1", false,-1, 63,0);
        tracep->declQuad(c+298,"top lsAxiSlaveRam_u slv_reg2", false,-1, 63,0);
        tracep->declQuad(c+300,"top lsAxiSlaveRam_u slv_reg3", false,-1, 63,0);
        tracep->declBit(c+324,"top lsAxiSlaveRam_u slv_reg_rden", false,-1);
        tracep->declBit(c+325,"top lsAxiSlaveRam_u slv_reg_wren", false,-1);
        tracep->declQuad(c+977,"top lsAxiSlaveRam_u reg_data_out", false,-1, 63,0);
        tracep->declBus(c+979,"top lsAxiSlaveRam_u byte_index", false,-1, 31,0);
        tracep->declBit(c+302,"top lsAxiSlaveRam_u aw_en", false,-1);
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
    VlWide<8>/*255:0*/ __Vtemp268;
    VlWide<8>/*255:0*/ __Vtemp273;
    VlWide<8>/*255:0*/ __Vtemp278;
    VlWide<8>/*255:0*/ __Vtemp282;
    VlWide<4>/*127:0*/ __Vtemp283;
    VlWide<4>/*127:0*/ __Vtemp284;
    VlWide<3>/*95:0*/ __Vtemp285;
    VlWide<3>/*95:0*/ __Vtemp287;
    VlWide<3>/*95:0*/ __Vtemp288;
    VlWide<3>/*95:0*/ __Vtemp289;
    VlWide<3>/*95:0*/ __Vtemp290;
    VlWide<3>/*95:0*/ __Vtemp291;
    VlWide<3>/*95:0*/ __Vtemp294;
    VlWide<3>/*95:0*/ __Vtemp295;
    VlWide<3>/*95:0*/ __Vtemp296;
    VlWide<3>/*95:0*/ __Vtemp297;
    VlWide<3>/*95:0*/ __Vtemp298;
    VlWide<4>/*127:0*/ __Vtemp302;
    VlWide<4>/*127:0*/ __Vtemp309;
    VlWide<4>/*127:0*/ __Vtemp312;
    VlWide<4>/*127:0*/ __Vtemp319;
    VlWide<4>/*127:0*/ __Vtemp322;
    VlWide<4>/*127:0*/ __Vtemp331;
    VlWide<4>/*127:0*/ __Vtemp334;
    VlWide<4>/*127:0*/ __Vtemp343;
    VlWide<4>/*127:0*/ __Vtemp346;
    VlWide<4>/*127:0*/ __Vtemp356;
    VlWide<4>/*127:0*/ __Vtemp359;
    VlWide<4>/*127:0*/ __Vtemp369;
    VlWide<10>/*319:0*/ __Vtemp374;
    VlWide<4>/*127:0*/ __Vtemp375;
    VlWide<4>/*127:0*/ __Vtemp376;
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
        tracep->fullCData(oldp+60,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 0xaU))),5);
        tracep->fullBit(oldp+61,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
        tracep->fullCData(oldp+62,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
        tracep->fullWData(oldp+63,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),227);
        tracep->fullCData(oldp+71,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                          >> 0xfU))),3);
        tracep->fullBit(oldp+72,(vlSelf->top__DOT__ls_u__DOT__timr_int));
        tracep->fullBit(oldp+73,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 3U))) 
                                  & (0U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xfU))))));
        tracep->fullBit(oldp+74,(((3U == (0x7fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 3U))) 
                                  & (4U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xfU))))));
        tracep->fullBit(oldp+75,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh));
        tracep->fullBit(oldp+76,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu));
        tracep->fullBit(oldp+77,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw));
        tracep->fullBit(oldp+78,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu));
        tracep->fullBit(oldp+79,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld));
        tracep->fullBit(oldp+80,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 5U))) 
                                  & (0U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xfU))))));
        tracep->fullBit(oldp+81,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 5U))) 
                                  & (1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xfU))))));
        tracep->fullBit(oldp+82,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 5U))) 
                                  & (2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xfU))))));
        tracep->fullBit(oldp+83,(((8U == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 5U))) 
                                  & (3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xfU))))));
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__commitPC),64);
        tracep->fullBit(oldp+86,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrw));
        tracep->fullBit(oldp+87,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrs));
        tracep->fullBit(oldp+88,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrc));
        tracep->fullBit(oldp+89,((0x1cU == (0x1fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 5U)))));
        tracep->fullBit(oldp+90,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
        tracep->fullBit(oldp+91,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
        tracep->fullBit(oldp+92,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
        tracep->fullBit(oldp+93,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
        tracep->fullBit(oldp+94,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
        tracep->fullBit(oldp+95,(((0x304U == (0xfffU 
                                              & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                                  << 9U) 
                                                 | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                    >> 0x17U)))) 
                                  & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en))));
        tracep->fullBit(oldp+96,(((0x344U == (0xfffU 
                                              & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                                  << 9U) 
                                                 | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                    >> 0x17U)))) 
                                  & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en))));
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
        tracep->fullBit(oldp+99,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                >> 3U)))));
        tracep->fullQData(oldp+100,((((0x1cU == (0x1fU 
                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                    >> 5U))) 
                                      & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                         >> 1U)) ? 0xbULL
                                      : ((IData)(vlSelf->top__DOT__in_intr_ls)
                                          ? 0x8000000000000007ULL
                                          : 0ULL))),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie),64);
        tracep->fullBit(oldp+106,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie 
                                                 >> 7U)))));
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip),64);
        tracep->fullBit(oldp+109,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip 
                                                 >> 7U)))));
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtime),64);
        tracep->fullQData(oldp+112,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp),64);
        tracep->fullIData(oldp+114,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__byte_index),32);
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__Dcache_u__DOT__validArray1),64);
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__Dcache_u__DOT__validArray2),64);
        tracep->fullIData(oldp+119,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [0x3cU]),21);
        tracep->fullIData(oldp+120,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [0x23U]),21);
        tracep->fullBit(oldp+121,(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay));
        tracep->fullBit(oldp+122,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay1));
        tracep->fullBit(oldp+123,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay2));
        tracep->fullCData(oldp+124,(vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch),8);
        tracep->fullQData(oldp+125,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1),64);
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2),64);
        tracep->fullBit(oldp+129,(vlSelf->top__DOT__Dcache_u__DOT__replaceWay));
        tracep->fullBit(oldp+130,(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
        tracep->fullBit(oldp+131,(vlSelf->top__DOT__Dcache_u__DOT__uncache));
        tracep->fullBit(oldp+132,(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk));
        tracep->fullBit(oldp+133,(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk));
        tracep->fullQData(oldp+134,(vlSelf->top__DOT__Dcache_u__DOT__temp),64);
        tracep->fullBit(oldp+136,(vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay));
        tracep->fullCData(oldp+137,(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt),2);
        tracep->fullCData(oldp+138,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        tracep->fullCData(oldp+139,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                               ? 0U
                                               : 1U))),4);
        tracep->fullCData(oldp+140,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
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
        tracep->fullCData(oldp+141,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : (0xfU 
                                              & ((0U 
                                                  != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                                  ? (IData)(vlSelf->top__DOT__if_axi_ar_region_o)
                                                  : (IData)(vlSelf->top__DOT__ls_axi_ar_region_o))))),4);
        tracep->fullCData(oldp+142,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullQData(oldp+143,((((0U == (0x1fU 
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
        tracep->fullIData(oldp+145,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                      ? (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch)
                                      : (((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                   >> 0xbU)) 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U))))),32);
        tracep->fullBit(oldp+146,((((3U == (0x7fU & 
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
        tracep->fullCData(oldp+147,((0xffU & ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                               ? ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                                   ? 0U
                                                   : 3U)
                                               : ((6U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                   ? 0U
                                                   : 3U)))),8);
        tracep->fullQData(oldp+148,((QData)((IData)(
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
        tracep->fullBit(oldp+150,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 2U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xaU)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xbU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xaU))))));
        tracep->fullBit(oldp+151,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xbU)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->fullBit(oldp+152,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                     >> 2U) & ((0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xaU)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 6U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xaU))))));
        tracep->fullBit(oldp+153,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                    & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 6U)))) 
                                   & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        if (vlSelf->top__DOT__in_intr_ls) {
            __Vtemp268[0U] = Vtop__ConstPool__CONST_d5724acc_0[0U];
            __Vtemp268[1U] = Vtop__ConstPool__CONST_d5724acc_0[1U];
            __Vtemp268[2U] = Vtop__ConstPool__CONST_d5724acc_0[2U];
            __Vtemp268[3U] = Vtop__ConstPool__CONST_d5724acc_0[3U];
            __Vtemp268[4U] = Vtop__ConstPool__CONST_d5724acc_0[4U];
            __Vtemp268[5U] = Vtop__ConstPool__CONST_d5724acc_0[5U];
            __Vtemp268[6U] = Vtop__ConstPool__CONST_d5724acc_0[6U];
            __Vtemp268[7U] = Vtop__ConstPool__CONST_d5724acc_0[7U];
        } else {
            __Vtemp268[0U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                               << 3U) | ((4U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                >> 0xeU)) 
                                         | (3U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
            __Vtemp268[1U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                               >> 0x1dU) | ((IData)(
                                                    (vlSelf->top__DOT__alures_ex 
                                                     >> 0x20U)) 
                                            << 3U));
            __Vtemp268[2U] = (((IData)((vlSelf->top__DOT__alures_ex 
                                        >> 0x20U)) 
                               >> 0x1dU) | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                                            << 3U));
            __Vtemp268[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                               >> 0x1dU) | ((IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                     >> 0x20U)) 
                                            << 3U));
            __Vtemp268[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                        >> 0x20U)) 
                               >> 0x1dU) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 7U) 
                                            | (0x78U 
                                               & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                  >> 0x19U))));
            __Vtemp268[5U] = ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                    << 7U) 
                                                   | (0x78U 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                         >> 0x19U))));
            __Vtemp268[6U] = ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                    << 7U) 
                                                   | (0x78U 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                         >> 0x19U))));
            __Vtemp268[7U] = (7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                    >> 0x19U));
        }
        tracep->fullWData(oldp+154,(__Vtemp268),227);
        tracep->fullBit(oldp+162,(((0U == (0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 3U))) 
                                   & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x17U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
        tracep->fullBit(oldp+163,((((0x73U == (0x7fU 
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
        tracep->fullQData(oldp+164,((vlSelf->top__DOT__ls_u__DOT__csr_wr_data 
                                     | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullQData(oldp+166,(((~ vlSelf->top__DOT__ls_u__DOT__csr_wr_data) 
                                     & vlSelf->top__DOT__csrdata_ls)),64);
        tracep->fullBit(oldp+168,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullBit(oldp+169,((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U))))))));
        tracep->fullIData(oldp+170,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullIData(oldp+171,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                    [(0x3fU & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 5U)))]),21);
        tracep->fullBit(oldp+172,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk)))));
        tracep->fullBit(oldp+173,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk)))));
        tracep->fullIData(oldp+174,(((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullBit(oldp+175,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready));
        tracep->fullBit(oldp+176,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+177,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp),2);
        tracep->fullQData(oldp+178,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata),64);
        tracep->fullBit(oldp+180,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready));
        tracep->fullQData(oldp+181,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg)),64);
        tracep->fullCData(oldp+183,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),4);
        tracep->fullCData(oldp+184,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : (7U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg)))),3);
        tracep->fullCData(oldp+185,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),2);
        tracep->fullCData(oldp+186,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : 0xfU)),4);
        tracep->fullBit(oldp+187,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready));
        tracep->fullCData(oldp+188,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : (0xffU 
                                              & (IData)(vlSelf->top__DOT__ls_axi_w_strb_o)))),8);
        tracep->fullBit(oldp+189,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid));
        tracep->fullCData(oldp+190,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp),2);
        tracep->fullQData(oldp+191,(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg),64);
        tracep->fullCData(oldp+193,(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg),3);
        tracep->fullCData(oldp+194,(vlSelf->top__DOT__ls_axi_w_strb_o),8);
        tracep->fullBit(oldp+195,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready));
        tracep->fullCData(oldp+196,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp),2);
        tracep->fullBit(oldp+197,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid));
        tracep->fullCData(oldp+198,(((2U == (0xffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                        >> 0x18U))))
                                      ? (7U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg))
                                      : 0U)),3);
        tracep->fullQData(oldp+199,(((2U == (0xffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                        >> 0x18U))))
                                      ? vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg
                                      : 0ULL)),64);
        tracep->fullBit(oldp+201,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready));
        tracep->fullCData(oldp+202,(vlSelf->top__DOT__clint_axi_wstrb),8);
        tracep->fullBit(oldp+203,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready));
        tracep->fullBit(oldp+204,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid));
        tracep->fullBit(oldp+205,((2U == (0xffU & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U))))));
        tracep->fullBit(oldp+206,((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x1cU))))));
        tracep->fullWData(oldp+207,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+211,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+215,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+219,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+223,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
        tracep->fullWData(oldp+231,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
        tracep->fullIData(oldp+239,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
        tracep->fullQData(oldp+240,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr),64);
        tracep->fullCData(oldp+242,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bresp),2);
        tracep->fullQData(oldp+243,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_araddr),64);
        tracep->fullBit(oldp+245,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__aw_en));
        tracep->fullWData(oldp+246,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1),128);
        tracep->fullWData(oldp+250,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2),128);
        tracep->fullWData(oldp+254,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1),128);
        tracep->fullWData(oldp+258,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2),128);
        tracep->fullWData(oldp+262,(vlSelf->top__DOT__Dcache_u__DOT__way1Data),256);
        tracep->fullWData(oldp+270,(vlSelf->top__DOT__Dcache_u__DOT__way2Data),256);
        tracep->fullBit(oldp+278,(vlSelf->top__DOT__Dcache_u__DOT__randomBit));
        tracep->fullWData(oldp+279,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),256);
        tracep->fullCData(oldp+287,(vlSelf->top__DOT__axi_ls_u__DOT__wrMask_reg),8);
        tracep->fullCData(oldp+288,(vlSelf->top__DOT__axi_ls_u__DOT__storeLenth_reg),8);
        tracep->fullCData(oldp+289,((0x38U & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg) 
                                              << 3U))),6);
        tracep->fullQData(oldp+290,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
        tracep->fullQData(oldp+292,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
        tracep->fullQData(oldp+294,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
        tracep->fullQData(oldp+296,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
        tracep->fullQData(oldp+298,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
        tracep->fullQData(oldp+300,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
        tracep->fullBit(oldp+302,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        tracep->fullCData(oldp+303,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0U : ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                               ? 0U
                                               : 3U))),8);
        tracep->fullQData(oldp+304,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__ls_axi_w_data_o)),64);
        tracep->fullBit(oldp+306,((((0xaU != (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x1cU)))) 
                                    | (2U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x18U)))))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrLast)))));
        VL_EXTEND_WQ(256,64, __Vtemp273, vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch);
        if ((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp278[0U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U]);
            __Vtemp278[1U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U]);
            __Vtemp278[2U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U]);
            __Vtemp278[3U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U]);
            __Vtemp278[4U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U]);
            __Vtemp278[5U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U]);
            __Vtemp278[6U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U]);
            __Vtemp278[7U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                               ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U]
                               : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U]);
        } else {
            __Vtemp278[0U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp273[0U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U]));
            __Vtemp278[1U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp273[1U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U]));
            __Vtemp278[2U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp273[2U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U]));
            __Vtemp278[3U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp273[3U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U]));
            __Vtemp278[4U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp273[4U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U]));
            __Vtemp278[5U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp273[5U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U]));
            __Vtemp278[6U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp273[6U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U]));
            __Vtemp278[7U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                               ? __Vtemp273[7U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                    ? 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U]
                                                    : 
                                                   vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U]));
        }
        tracep->fullWData(oldp+307,(__Vtemp278),256);
        tracep->fullBit(oldp+315,((((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__clint_axi_arvalid)) 
                                   & (~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid)))));
        if ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))) {
            __Vtemp282[0U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U];
            __Vtemp282[1U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U];
            __Vtemp282[2U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U];
            __Vtemp282[3U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U];
            __Vtemp282[4U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U];
            __Vtemp282[5U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U];
            __Vtemp282[6U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U];
            __Vtemp282[7U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U];
        } else {
            __Vtemp282[0U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U];
            __Vtemp282[1U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U];
            __Vtemp282[2U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U];
            __Vtemp282[3U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U];
            __Vtemp282[4U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U];
            __Vtemp282[5U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U];
            __Vtemp282[6U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U];
            __Vtemp282[7U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U];
        }
        tracep->fullWData(oldp+316,(__Vtemp282),256);
        tracep->fullBit(oldp+324,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                    & (IData)(vlSelf->top__DOT__axi_mmio_ar_valid_o)) 
                                   & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
        tracep->fullBit(oldp+325,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                   & (IData)(vlSelf->top__DOT__axi_mmio_w_valid_o))));
        tracep->fullBit(oldp+326,(vlSelf->top__DOT__axi_mmio_ar_valid_o));
        tracep->fullQData(oldp+327,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr)),64);
        tracep->fullCData(oldp+329,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : (7U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size)))),3);
        tracep->fullCData(oldp+330,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : 1U)),2);
        tracep->fullCData(oldp+331,((((0xaU != (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x1cU)))) 
                                      | (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                      ? 0U : 2U)),4);
        tracep->fullBit(oldp+332,((((0xaU != (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x1cU)))) 
                                    | (2U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x18U)))))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready)))));
        tracep->fullBit(oldp+333,(vlSelf->top__DOT__axi_mmio_aw_valid_o));
        tracep->fullBit(oldp+334,(vlSelf->top__DOT__axi_mmio_w_valid_o));
        tracep->fullBit(oldp+335,(vlSelf->top__DOT__axi_mmio_b_ready_o));
        tracep->fullCData(oldp+336,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                      ? 0U : 3U)),8);
        tracep->fullCData(oldp+337,(((0U == ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                              ? 0U : 3U))
                                      ? 2U : 3U)),3);
        tracep->fullBit(oldp+338,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullCData(oldp+339,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? 0U : 3U)),8);
        tracep->fullBit(oldp+340,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+341,(vlSelf->top__DOT__ls_axi_w_data_o),64);
        tracep->fullBit(oldp+343,(vlSelf->top__DOT__axi_ls_u__DOT__wrLast));
        tracep->fullBit(oldp+344,((2U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullQData(oldp+345,(vlSelf->top__DOT__pc_new),64);
        tracep->fullBit(oldp+347,(vlSelf->top__DOT__is_jump));
        tracep->fullQData(oldp+348,(((0x400000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
        tracep->fullBit(oldp+350,(vlSelf->top__DOT__if_instr_valid));
        tracep->fullQData(oldp+351,(vlSelf->top__DOT__sram_rdata),64);
        tracep->fullQData(oldp+353,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
        tracep->fullBit(oldp+355,((0ULL != vlSelf->top__DOT__pc_new)));
        tracep->fullBit(oldp+356,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
        tracep->fullBit(oldp+357,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                     | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                    | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                   | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
        tracep->fullIData(oldp+358,(((1U & (IData)(
                                                   (vlSelf->top__DOT__pc_new 
                                                    >> 2U)))
                                      ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                 >> 0x20U))
                                      : (IData)(vlSelf->top__DOT__sram_rdata))),32);
        tracep->fullQData(oldp+359,((((QData)((IData)(
                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
        tracep->fullIData(oldp+361,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
        tracep->fullQData(oldp+362,(vlSelf->top__DOT__ID_u__DOT__imm),64);
        tracep->fullBit(oldp+364,(vlSelf->top__DOT__src1sel_id));
        tracep->fullCData(oldp+365,(vlSelf->top__DOT__src2sel_id),2);
        tracep->fullCData(oldp+366,(vlSelf->top__DOT__aluctr_id),5);
        tracep->fullBit(oldp+367,(vlSelf->top__DOT__is_brc_id));
        tracep->fullBit(oldp+368,(vlSelf->top__DOT__is_jal_id));
        tracep->fullBit(oldp+369,(vlSelf->top__DOT__is_jalr_id));
        tracep->fullBit(oldp+370,(vlSelf->top__DOT__wben_id));
        tracep->fullCData(oldp+371,(vlSelf->top__DOT__rs1_idx_id),5);
        tracep->fullCData(oldp+372,(vlSelf->top__DOT__rs2_idx_id),5);
        tracep->fullBit(oldp+373,(vlSelf->top__DOT__DivEn_id));
        tracep->fullCData(oldp+374,(vlSelf->top__DOT__DivSel_id),3);
        tracep->fullBit(oldp+375,(vlSelf->top__DOT__in_trap_id));
        tracep->fullBit(oldp+376,(vlSelf->top__DOT__out_trap_id));
        tracep->fullBit(oldp+377,(vlSelf->top__DOT__trap_id));
        tracep->fullBit(oldp+378,(vlSelf->top__DOT__ld_use_hazard));
        tracep->fullBit(oldp+379,(vlSelf->top__DOT__id_flush));
        tracep->fullQData(oldp+380,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullIData(oldp+382,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                      << 4U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                >> 0x1cU))),32);
        tracep->fullQData(oldp+383,(vlSelf->top__DOT__alures_ex),64);
        tracep->fullBit(oldp+385,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x13U))));
        tracep->fullCData(oldp+386,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x11U))),2);
        tracep->fullQData(oldp+387,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+389,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+391,((((QData)((IData)(
                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+393,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
        tracep->fullCData(oldp+395,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x17U))),5);
        tracep->fullBit(oldp+396,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+397,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+398,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+399,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x10U))));
        tracep->fullBit(oldp+400,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 5U))));
        tracep->fullCData(oldp+401,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 2U))),3);
        tracep->fullBit(oldp+402,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 1U))));
        tracep->fullCData(oldp+403,(vlSelf->top__DOT__rs1_sel),2);
        tracep->fullCData(oldp+404,(vlSelf->top__DOT__rs2_sel),2);
        tracep->fullCData(oldp+405,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0xbU))),5);
        tracep->fullCData(oldp+406,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 6U))),5);
        tracep->fullBit(oldp+407,(vlSelf->top__DOT__ex_flush));
        tracep->fullBit(oldp+408,((3U == (0x7fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 4U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1cU))))));
        tracep->fullBit(oldp+409,((8U == (0x1fU & (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 2U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1eU))))));
        tracep->fullCData(oldp+410,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
        tracep->fullCData(oldp+411,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
        tracep->fullQData(oldp+412,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+414,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+416,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))),64);
        tracep->fullIData(oldp+418,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                      << 0x1fU) | (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+419,(vlSelf->top__DOT__wb_data),64);
        tracep->fullCData(oldp+421,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                              >> 8U))),5);
        tracep->fullBit(oldp+422,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
        tracep->fullQData(oldp+423,((((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
        tracep->fullQData(oldp+425,(((2U == (0xffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                        >> 0x18U))))
                                      ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr
                                      : 0ULL)),64);
        tracep->fullBit(oldp+427,(vlSelf->top__DOT__clint_axi_arvalid));
        tracep->fullCData(oldp+428,(((2U == (0xffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                        >> 0x18U))))
                                      ? (7U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size))
                                      : 0U)),3);
        tracep->fullBit(oldp+429,(((2U == (0xffU & (IData)(
                                                           (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                            >> 0x18U))))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready))
                                    : 0U)));
        tracep->fullBit(oldp+430,(vlSelf->top__DOT__clint_axi_awvalid));
        tracep->fullQData(oldp+431,(vlSelf->top__DOT__clint_axi_wdata),64);
        tracep->fullBit(oldp+433,(vlSelf->top__DOT__clint_axi_wvalid));
        tracep->fullBit(oldp+434,(vlSelf->top__DOT__clint_axi_bready));
        tracep->fullBit(oldp+435,(vlSelf->top__DOT__rw_valid_i));
        tracep->fullBit(oldp+436,(vlSelf->top__DOT__fence_id));
        tracep->fullBit(oldp+437,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
        tracep->fullBit(oldp+438,(vlSelf->top__DOT__Dcache_u__DOT__clean_OK));
        tracep->fullBit(oldp+439,(vlSelf->top__DOT__DcacheRdValid));
        tracep->fullBit(oldp+440,(vlSelf->top__DOT__DcacheWrValid));
        tracep->fullQData(oldp+441,(vlSelf->top__DOT__DcacheRdAddr),64);
        tracep->fullQData(oldp+443,(vlSelf->top__DOT__DcacheWrAddr),64);
        tracep->fullBit(oldp+445,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
        tracep->fullCData(oldp+446,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (0xffU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask))
                                      : 0xffU)),8);
        tracep->fullCData(oldp+447,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (7U & (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size))
                                      : 3U)),3);
        tracep->fullQData(oldp+448,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
        tracep->fullCData(oldp+450,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
        tracep->fullBit(oldp+451,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
        tracep->fullBit(oldp+452,((2U == (0xffU & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U))))));
        tracep->fullBit(oldp+453,((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                            >> 0x1cU))))));
        tracep->fullIData(oldp+454,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
        tracep->fullBit(oldp+455,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
        tracep->fullCData(oldp+456,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
        tracep->fullBit(oldp+457,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
        __Vtemp283[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        __Vtemp283[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        __Vtemp283[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        __Vtemp283[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        tracep->fullWData(oldp+458,(__Vtemp283),128);
        __Vtemp284[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        __Vtemp284[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        __Vtemp284[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        __Vtemp284[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        tracep->fullWData(oldp+462,(__Vtemp284),128);
        tracep->fullBit(oldp+466,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
        tracep->fullBit(oldp+467,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
        tracep->fullBit(oldp+468,(vlSelf->top__DOT__cache_dut__DOT__uncached));
        tracep->fullBit(oldp+469,(vlSelf->top__DOT__cache_dut__DOT__diffAddr));
        tracep->fullBit(oldp+470,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+471,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+472,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+473,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullCData(oldp+474,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
        tracep->fullWData(oldp+475,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
        tracep->fullBit(oldp+483,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
        tracep->fullBit(oldp+484,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN));
        tracep->fullBit(oldp+485,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
        tracep->fullBit(oldp+486,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN)))));
        tracep->fullBit(oldp+487,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
        tracep->fullBit(oldp+488,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
        tracep->fullBit(oldp+489,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN));
        tracep->fullBit(oldp+490,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
        tracep->fullBit(oldp+491,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN)))));
        tracep->fullBit(oldp+492,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
        tracep->fullBit(oldp+493,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
        tracep->fullQData(oldp+494,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new)),64);
        tracep->fullIData(oldp+496,(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0U : ((1U & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                               ? (IData)(
                                                         (vlSelf->top__DOT__sram_rdata 
                                                          >> 0x20U))
                                               : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
        __Vtemp285[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                           ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                                  >> 2U)))
                                    ? (IData)((vlSelf->top__DOT__sram_rdata 
                                               >> 0x20U))
                                    : (IData)(vlSelf->top__DOT__sram_rdata)));
        __Vtemp285[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                   ? 0ULL : vlSelf->top__DOT__pc_new));
        __Vtemp285[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                    ? 0ULL : vlSelf->top__DOT__pc_new) 
                                  >> 0x20U));
        tracep->fullWData(oldp+497,(__Vtemp285),96);
        tracep->fullWData(oldp+500,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
        tracep->fullCData(oldp+503,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
        tracep->fullCData(oldp+504,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 2U))),5);
        tracep->fullCData(oldp+505,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+506,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+507,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 7U)),25);
        tracep->fullBit(oldp+508,((3U == (0x7fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 1U)))));
        tracep->fullQData(oldp+509,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0ULL : (((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
        tracep->fullIData(oldp+511,(((IData)(vlSelf->top__DOT__ex_flush)
                                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
        tracep->fullBit(oldp+512,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jalr_id))));
        tracep->fullBit(oldp+513,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_jal_id))));
        tracep->fullBit(oldp+514,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__is_brc_id))));
        tracep->fullBit(oldp+515,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__wben_id))));
        tracep->fullBit(oldp+516,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__trap_id))));
        tracep->fullBit(oldp+517,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__fence_id))));
        tracep->fullBit(oldp+518,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                   & (IData)(vlSelf->top__DOT__DivEn_id))));
        tracep->fullWData(oldp+519,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),316);
        tracep->fullQData(oldp+529,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
        tracep->fullQData(oldp+531,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
        tracep->fullQData(oldp+533,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
        VL_EXTEND_WQ(65,64, __Vtemp287, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp288, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp289, __Vtemp287, __Vtemp288);
        VL_EXTEND_WI(65,1, __Vtemp290, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp291, __Vtemp289, __Vtemp290);
        tracep->fullBit(oldp+535,((1U & ((0x4000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((1U & 
                                              __Vtemp291[2U]) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                          : ((IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                      >> 0x3fU)) 
                                             ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
        tracep->fullBit(oldp+536,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
        tracep->fullQData(oldp+537,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+539,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+540,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+542,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+544,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1aU))));
        tracep->fullBit(oldp+545,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x19U))));
        tracep->fullCData(oldp+546,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x17U))),3);
        tracep->fullQData(oldp+547,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp294, vlSelf->top__DOT__ex_stage_u__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp295, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp296, __Vtemp294, __Vtemp295);
        VL_EXTEND_WI(65,1, __Vtemp297, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp298, __Vtemp296, __Vtemp297);
        tracep->fullBit(oldp+549,((1U & __Vtemp298[2U])));
        tracep->fullBit(oldp+550,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+551,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+553,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+555,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                     & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
        tracep->fullQData(oldp+557,(((0x10U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? ((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? ((4U & 
                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                              ? VL_MODDIV_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                              : VL_MODDIVS_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2))
                                          : ((4U & 
                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                              ? VL_DIV_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                              : VL_DIVS_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)))
                                      : ((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? 0ULL : 
                                         ((4U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                           ? 0ULL : 
                                          (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                           * vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullCData(oldp+559,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x17U))),4);
        tracep->fullBit(oldp+560,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x1bU))));
        tracep->fullCData(oldp+561,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
        tracep->fullQData(oldp+562,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+564,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+566,((0xffffffffffffffffULL 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
        tracep->fullQData(oldp+568,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
        tracep->fullQData(oldp+570,(((0x8000000U & 
                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                         & (QData)((IData)(
                                                           ((0xffffffffffffffffULL 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                            >> 0x20U))))
                                      : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+572,(((0x8000000U & 
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
        tracep->fullQData(oldp+574,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullCData(oldp+576,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                           >> 8U))),3);
        tracep->fullQData(oldp+577,(((((QData)((IData)(
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
        tracep->fullQData(oldp+579,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                     + (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1cU))))),64);
        tracep->fullBit(oldp+581,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
        tracep->fullBit(oldp+582,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
        tracep->fullBit(oldp+583,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
        tracep->fullQData(oldp+584,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
        tracep->fullQData(oldp+586,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
        tracep->fullBit(oldp+588,((1U & ((0x400U & 
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
        tracep->fullBit(oldp+589,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xbU)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+590,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                    & ((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U)) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 6U)))) 
                                   & (0U != (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
        tracep->fullBit(oldp+591,((8U == (0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 3U)))));
        tracep->fullQData(oldp+592,(vlSelf->top__DOT__ls_u__DOT__csr_wr_data),64);
        tracep->fullQData(oldp+594,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        tracep->fullBit(oldp+596,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimeWrEn));
        tracep->fullBit(oldp+597,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmpWrEn));
        tracep->fullBit(oldp+598,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__slv_reg_wren));
        tracep->fullIData(oldp+599,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
        tracep->fullBit(oldp+600,(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i));
        tracep->fullBit(oldp+601,(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i));
        tracep->fullBit(oldp+602,(((3U != (0x7fU & 
                                           ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 4U) 
                                            | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                               >> 0x1cU)))) 
                                   | (8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 2U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1eU)))))));
        tracep->fullIData(oldp+603,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)
                                      : (((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0xbU)) 
                                          << 0xbU) 
                                         | (0x7e0U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 5U)) 
                                               << 5U))))),32);
        tracep->fullCData(oldp+604,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
        tracep->fullBit(oldp+605,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
        tracep->fullBit(oldp+606,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
        tracep->fullBit(oldp+607,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
        VL_EXTEND_WQ(128,64, __Vtemp302, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp309[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U];
            __Vtemp309[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U];
            __Vtemp309[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U];
            __Vtemp309[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U];
        } else {
            __Vtemp309[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp302[0U])
                               : 0U);
            __Vtemp309[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp302[1U])
                               : 0U);
            __Vtemp309[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp302[2U])
                               : 0U);
            __Vtemp309[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp302[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+608,(__Vtemp309),128);
        VL_EXTEND_WQ(128,64, __Vtemp312, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp319[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U];
            __Vtemp319[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U];
            __Vtemp319[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U];
            __Vtemp319[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U];
        } else {
            __Vtemp319[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp312[0U])
                               : 0U);
            __Vtemp319[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp312[1U])
                               : 0U);
            __Vtemp319[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp312[2U])
                               : 0U);
            __Vtemp319[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp312[3U])
                               : 0U);
        }
        tracep->fullWData(oldp+612,(__Vtemp319),128);
        tracep->fullBit(oldp+616,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
        tracep->fullBit(oldp+617,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
        tracep->fullBit(oldp+618,(vlSelf->top__DOT__Dcache_u__DOT__uncached));
        tracep->fullBit(oldp+619,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+620,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
        tracep->fullCData(oldp+622,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
        tracep->fullCData(oldp+623,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 5U)))),6);
        tracep->fullIData(oldp+624,((0x1fffffU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 0xbU)))),21);
        tracep->fullBit(oldp+625,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+626,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullBit(oldp+627,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+628,((((QData)((IData)(
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
        tracep->fullCData(oldp+630,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
        tracep->fullWData(oldp+631,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
        tracep->fullBit(oldp+639,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullQData(oldp+640,(vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch),64);
        tracep->fullBit(oldp+642,(vlSelf->top__DOT__Dcache_u__DOT__wrLow));
        tracep->fullBit(oldp+643,(vlSelf->top__DOT__Dcache_u__DOT__wrHigh));
        tracep->fullQData(oldp+644,(vlSelf->top__DOT__Dcache_u__DOT__storeData),64);
        tracep->fullCData(oldp+646,(vlSelf->top__DOT__Dcache_u__DOT__storeMask),8);
        tracep->fullQData(oldp+647,(vlSelf->top__DOT__Dcache_u__DOT__sramMask),64);
        VL_EXTEND_WQ(128,64, __Vtemp322, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp331[0U] = 0xffffffffU;
            __Vtemp331[1U] = 0xffffffffU;
            __Vtemp331[2U] = 0xffffffffU;
            __Vtemp331[3U] = 0xffffffffU;
        } else {
            __Vtemp331[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp322[0U])
                                   : 0U) : 0U);
            __Vtemp331[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp322[1U])
                                   : 0U) : 0U);
            __Vtemp331[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp322[2U])
                                   : 0U) : 0U);
            __Vtemp331[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp322[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+649,(__Vtemp331),128);
        VL_EXTEND_WQ(128,64, __Vtemp334, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            __Vtemp343[0U] = 0xffffffffU;
            __Vtemp343[1U] = 0xffffffffU;
            __Vtemp343[2U] = 0xffffffffU;
            __Vtemp343[3U] = 0xffffffffU;
        } else {
            __Vtemp343[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp334[0U])
                                   : 0U) : 0U);
            __Vtemp343[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp334[1U])
                                   : 0U) : 0U);
            __Vtemp343[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp334[2U])
                                   : 0U) : 0U);
            __Vtemp343[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 0x20U)))
                               ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp334[3U])
                                   : 0U) : 0U);
        }
        tracep->fullWData(oldp+653,(__Vtemp343),128);
        tracep->fullBit(oldp+657,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+658,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U)))) 
                                   & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
        tracep->fullBit(oldp+659,((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullIData(oldp+660,((IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)),32);
        tracep->fullBit(oldp+661,((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
        tracep->fullCData(oldp+662,(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt),7);
        tracep->fullBit(oldp+663,(vlSelf->top__DOT__Dcache_u__DOT__cleanWrValid));
        tracep->fullBit(oldp+664,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
        VL_EXTEND_WQ(128,64, __Vtemp346, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp356[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp346[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp356[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp346[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp356[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp346[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp356[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp346[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+665,(__Vtemp356),128);
        VL_EXTEND_WQ(128,64, __Vtemp359, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp369[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp359[0U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp369[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp359[1U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp369[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp359[2U])
                                                    : 0U)
                                                : 0U)));
        __Vtemp369[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                    __Vtemp359[3U])
                                                    : 0U)
                                                : 0U)));
        tracep->fullWData(oldp+669,(__Vtemp369),128);
        tracep->fullBit(oldp+673,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
        tracep->fullCData(oldp+674,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
        tracep->fullWData(oldp+675,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        tracep->fullBit(oldp+685,((1U & ((IData)(vlSelf->top__DOT__fence_id) 
                                         | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]))));
        tracep->fullBit(oldp+686,((1U & (~ (((((((IData)(vlSelf->top__DOT__fence_id) 
                                                 | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
                                                & (~ (IData)(vlSelf->top__DOT__is_jump))) 
                                               | (IData)(vlSelf->top__DOT__ld_use_hazard)) 
                                              | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                             | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                            | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))))));
        tracep->fullBit(oldp+687,((1U & (~ ((((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                              | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                             | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                            | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))))));
        tracep->fullBit(oldp+688,((1U & (~ (((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                             | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                            | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))))));
        tracep->fullBit(oldp+689,((1U & (~ ((((((((
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
        tracep->fullBit(oldp+690,((1U & ((((((((((0U 
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
        tracep->fullBit(oldp+691,((1U & (~ ((((((((
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
        tracep->fullBit(oldp+692,((1U & ((((((((((0U 
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
        tracep->fullQData(oldp+693,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->fullQData(oldp+695,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id])),64);
        __Vtemp374[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
                                                                | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                                     & (IData)(vlSelf->top__DOT__DivEn_id)) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->top__DOT__DivSel_id) 
                                                                       << 2U) 
                                                                      | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                                           & (IData)(vlSelf->top__DOT__trap_id)) 
                                                                          << 1U) 
                                                                         | ((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                                            & (IData)(vlSelf->top__DOT__fence_id)))))))))))))));
        __Vtemp374[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                           >> 4U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp374[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                    >> 0x20U)) >> 4U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs1_idx_id])) 
                             << 0x1cU));
        __Vtemp374[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id])) 
                           >> 4U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs1_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp374[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs1_idx_id]) 
                                    >> 0x20U)) >> 4U) 
                          | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                       ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                      [vlSelf->top__DOT__rs2_idx_id])) 
                             << 0x1cU));
        __Vtemp374[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])) 
                           >> 4U) | ((IData)((((0U 
                                                == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                ? 0ULL
                                                : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                               [vlSelf->top__DOT__rs2_idx_id]) 
                                              >> 0x20U)) 
                                     << 0x1cU));
        __Vtemp374[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                      ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                     [vlSelf->top__DOT__rs2_idx_id]) 
                                    >> 0x20U)) >> 4U) 
                          | (((IData)(vlSelf->top__DOT__ex_flush)
                               ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                             << 0x1cU));
        __Vtemp374[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                             ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                           >> 4U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                               ? 0ULL
                                               : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                     << 0x1cU));
        __Vtemp374[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
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
        __Vtemp374[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                     ? 0ULL : (((QData)((IData)(
                                                                vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                   >> 0x20U)) >> 4U);
        tracep->fullWData(oldp+697,(__Vtemp374),316);
        tracep->fullBit(oldp+707,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
        tracep->fullQData(oldp+708,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                      ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
        tracep->fullBit(oldp+710,(vlSelf->top__DOT__if_axi_r_last_i));
        tracep->fullCData(oldp+711,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
        tracep->fullBit(oldp+712,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready));
        tracep->fullBit(oldp+713,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                    ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                    : 0U)));
        tracep->fullQData(oldp+714,(vlSelf->top__DOT__ls_axi_r_data_i),64);
        tracep->fullBit(oldp+716,(vlSelf->top__DOT__ls_axi_r_last_i));
        tracep->fullBit(oldp+717,(vlSelf->top__DOT__if_stall_n));
        tracep->fullBit(oldp+718,(vlSelf->top__DOT__ls_addr_ok_i));
        tracep->fullBit(oldp+719,((1U & (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))));
        tracep->fullBit(oldp+720,(vlSelf->top__DOT__ls_stall_n));
        tracep->fullBit(oldp+721,(vlSelf->top__DOT__dataNotOk));
        tracep->fullQData(oldp+722,(vlSelf->top__DOT__ls_sram_rd_data),64);
        tracep->fullBit(oldp+724,(vlSelf->top__DOT__dataValid_o));
        tracep->fullBit(oldp+725,(vlSelf->top__DOT__lsAxiRdDataVAlid));
        tracep->fullBit(oldp+726,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
        tracep->fullBit(oldp+727,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
        tracep->fullQData(oldp+728,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
        tracep->fullBit(oldp+730,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        tracep->fullCData(oldp+731,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
        tracep->fullCData(oldp+732,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__A),6);
        tracep->fullCData(oldp+733,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+734,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__A),6);
        tracep->fullCData(oldp+735,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+736,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
        tracep->fullBit(oldp+737,(vlSelf->top__DOT__ls_u__DOT__csr_stall_n));
        tracep->fullCData(oldp+738,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
        tracep->fullSData(oldp+739,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
        tracep->fullIData(oldp+740,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        tracep->fullCData(oldp+741,(vlSelf->top__DOT__Dcache_u__DOT__cacheNexState),3);
        tracep->fullBit(oldp+742,(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk));
        tracep->fullCData(oldp+743,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
        tracep->fullCData(oldp+744,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
        tracep->fullCData(oldp+745,(vlSelf->top__DOT__axi_ls_u__DOT__w_state_next),2);
        tracep->fullCData(oldp+746,(vlSelf->top__DOT__axi_ls_u__DOT__r_state_next),2);
        tracep->fullWData(oldp+747,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        tracep->fullQData(oldp+757,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+759,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+761,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+763,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+765,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+767,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+769,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+771,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+773,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+775,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+777,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+779,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+781,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+783,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+785,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+787,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+789,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+791,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+793,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+795,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+797,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+799,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+801,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+803,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+805,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+807,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+809,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+811,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+813,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+815,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+817,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+819,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        tracep->fullBit(oldp+821,(vlSelf->clk));
        tracep->fullBit(oldp+822,(vlSelf->rst_n));
        tracep->fullQData(oldp+823,(vlSelf->pc_diff),64);
        tracep->fullQData(oldp+825,(vlSelf->pc_decoding),64);
        tracep->fullIData(oldp+827,(vlSelf->instr_diff),32);
        tracep->fullQData(oldp+828,(vlSelf->regA0),64);
        tracep->fullBit(oldp+830,(vlSelf->stall_n_diff));
        tracep->fullBit(oldp+831,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+832,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+833,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+835,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+836,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+837,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+838,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+839,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+840,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+841,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+842,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+843,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+844,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+845,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+846,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+847,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+848,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+850,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+851,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+852,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+853,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+854,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+855,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+857,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+858,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+859,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+860,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+861,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+862,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+863,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+864,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+865,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+866,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+867,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+868,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+869,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+871,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+872,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+873,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+874,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+875,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+876,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+877,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+878,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+879,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? 0U
                                    : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->fullCData(oldp+880,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
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
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                                >> 0x18U))))
                                                    ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp)
                                                    : (IData)(vlSelf->axi_r_resp_i)))))),2);
        tracep->fullBit(oldp+881,(((0xaU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x1cU))))
                                    ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)
                                    : ((2U == (0xffU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready)
                                        : (IData)(vlSelf->axi_aw_ready_i)))));
        tracep->fullBit(oldp+882,(((0xaU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x1cU))))
                                    ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid)
                                    : ((2U == (0xffU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid)
                                        : (IData)(vlSelf->axi_b_valid_i)))));
        tracep->fullCData(oldp+883,(((0xaU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x1cU))))
                                      ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp)
                                      : ((2U == (0xffU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x18U))))
                                          ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp)
                                          : (IData)(vlSelf->axi_b_resp_i)))),2);
        tracep->fullCData(oldp+884,(((0xaU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x1cU))))
                                      ? 1U : ((2U == 
                                               (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U))))
                                               ? 1U
                                               : (0xfU 
                                                  & (IData)(vlSelf->axi_b_id_i))))),4);
        tracep->fullBit(oldp+885,((1U & ((0xaU == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x1cU))))
                                          ? (IData)(vlSelf->top__DOT__axi_mmio_b_user_i)
                                          : ((2U == 
                                              (0xffU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x18U))))
                                              ? 0U : (IData)(vlSelf->axi_b_user_i))))));
        tracep->fullBit(oldp+886,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? (1U 
                                                   & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                    : 0U)));
        tracep->fullCData(oldp+887,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
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
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                                >> 0x18U))))
                                                    ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp)
                                                    : (IData)(vlSelf->axi_r_resp_i))))
                                      : 0U)),2);
        tracep->fullQData(oldp+888,(((((((((- (QData)((IData)(
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
        tracep->fullCData(oldp+890,(((0xaU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                          >> 0x1cU))))
                                      ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                      : ((2U == (0xffU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                            >> 0x18U))))
                                          ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp)
                                          : (IData)(vlSelf->axi_r_resp_i)))),2);
        tracep->fullBit(oldp+891,((1U & ((0xaU == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x1cU))))
                                          ? (IData)(vlSelf->top__DOT__axi_mmio_r_user_i)
                                          : ((2U == 
                                              (0xffU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                          >> 0x18U))))
                                              ? 0U : (IData)(vlSelf->axi_r_user_i))))));
        tracep->fullBit(oldp+892,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->fullBit(oldp+893,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->fullIData(oldp+894,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 0xbU)))
                                          : 0U) : 0U)),21);
        tracep->fullIData(oldp+895,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? 0U : (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 0xbU))))
                                      : 0U)),21);
        tracep->fullQData(oldp+896,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+898,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->fullIData(oldp+900,(((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullBit(oldp+901,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullBit(oldp+902,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->fullIData(oldp+903,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullIData(oldp+904,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+905,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullQData(oldp+907,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->fullBit(oldp+909,(((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i) 
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
        tracep->fullIData(oldp+910,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->fullIData(oldp+911,(0x40U),32);
        tracep->fullIData(oldp+912,(4U),32);
        tracep->fullIData(oldp+913,(8U),32);
        tracep->fullIData(oldp+914,(1U),32);
        tracep->fullCData(oldp+915,(0U),3);
        tracep->fullBit(oldp+916,(0U));
        tracep->fullBit(oldp+917,(0U));
        tracep->fullCData(oldp+918,(0U),4);
        tracep->fullBit(oldp+919,(vlSelf->top__DOT__axi_mmio_r_last_i));
        tracep->fullCData(oldp+920,(vlSelf->top__DOT__axi_mmio_r_id_i),4);
        tracep->fullBit(oldp+921,(vlSelf->top__DOT__axi_mmio_r_user_i));
        tracep->fullCData(oldp+922,(vlSelf->top__DOT__axi_mmio_b_id_i),4);
        tracep->fullBit(oldp+923,(vlSelf->top__DOT__axi_mmio_b_user_i));
        tracep->fullCData(oldp+924,(1U),2);
        tracep->fullCData(oldp+925,(2U),4);
        tracep->fullCData(oldp+926,(vlSelf->top__DOT__if_axi_ar_region_o),4);
        tracep->fullBit(oldp+927,(vlSelf->top__DOT__if_axi_r_user_i));
        tracep->fullCData(oldp+928,(1U),4);
        tracep->fullCData(oldp+929,(0xfU),4);
        tracep->fullCData(oldp+930,(vlSelf->top__DOT__ls_axi_ar_region_o),4);
        tracep->fullBit(oldp+931,(vlSelf->top__DOT__ls_axi_r_user_i));
        tracep->fullQData(oldp+932,(vlSelf->top__DOT__pc_next),64);
        tracep->fullBit(oldp+934,(vlSelf->top__DOT__sram_data_valid));
        tracep->fullBit(oldp+935,(1U));
        tracep->fullBit(oldp+936,(vlSelf->top__DOT__ls_sram_rd_data_valid));
        tracep->fullBit(oldp+937,(vlSelf->top__DOT__ls_sram_wr_data_ok));
        tracep->fullBit(oldp+938,(0U));
        tracep->fullQData(oldp+939,(0ULL),64);
        tracep->fullCData(oldp+941,(0U),8);
        tracep->fullCData(oldp+942,(1U),3);
        tracep->fullCData(oldp+943,(2U),3);
        tracep->fullCData(oldp+944,(3U),3);
        tracep->fullCData(oldp+945,(7U),3);
        tracep->fullCData(oldp+946,(6U),3);
        tracep->fullBit(oldp+947,(vlSelf->top__DOT__cache_dut__DOT__validWay1_q));
        tracep->fullBit(oldp+948,(vlSelf->top__DOT__cache_dut__DOT__validWay2_q));
        tracep->fullIData(oldp+949,(0x80U),32);
        tracep->fullIData(oldp+950,(6U),32);
        __Vtemp375[0U] = 0U;
        __Vtemp375[1U] = 0U;
        __Vtemp375[2U] = 0U;
        __Vtemp375[3U] = 0U;
        tracep->fullWData(oldp+951,(__Vtemp375),128);
        __Vtemp376[0U] = 0xffffffffU;
        __Vtemp376[1U] = 0xffffffffU;
        __Vtemp376[2U] = 0xffffffffU;
        __Vtemp376[3U] = 0xffffffffU;
        tracep->fullWData(oldp+955,(__Vtemp376),128);
        tracep->fullCData(oldp+959,(0U),2);
        tracep->fullCData(oldp+960,(3U),2);
        tracep->fullCData(oldp+961,(2U),2);
        tracep->fullIData(oldp+962,(3U),32);
        tracep->fullIData(oldp+963,(0x60U),32);
        tracep->fullIData(oldp+964,(0U),32);
        tracep->fullIData(oldp+965,(0x13cU),32);
        tracep->fullBit(oldp+966,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less));
        tracep->fullIData(oldp+967,(0xe3U),32);
        tracep->fullCData(oldp+968,(4U),3);
        tracep->fullBit(oldp+969,(vlSelf->top__DOT__Dcache_u__DOT__validWay1_q));
        tracep->fullBit(oldp+970,(vlSelf->top__DOT__Dcache_u__DOT__validWay2_q));
        tracep->fullBit(oldp+971,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
        tracep->fullCData(oldp+972,(3U),8);
        tracep->fullIData(oldp+973,(0x121U),32);
        tracep->fullIData(oldp+974,(0x40U),32);
        tracep->fullIData(oldp+975,(3U),32);
        tracep->fullIData(oldp+976,(1U),32);
        tracep->fullQData(oldp+977,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out),64);
        tracep->fullIData(oldp+979,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index),32);
    }
}
