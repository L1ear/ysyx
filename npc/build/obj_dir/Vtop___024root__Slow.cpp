// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root____Vdpiimwrap_top__DOT__ID_u__DOT__regfile_u__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vtop___024root___initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->axi_ar_user_o = 0U;
    vlSelf->top__DOT__ls_axi_w_strb_o = 0xffU;
    Vtop___024root____Vdpiimwrap_top__DOT__ID_u__DOT__regfile_u__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles);
}

extern const VlUnpacked<CData/*7:0*/, 16> Vtop__ConstPool__TABLE_b95eb736_0;
extern const VlUnpacked<CData/*2:0*/, 16> Vtop__ConstPool__TABLE_0ca066a7_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_0260afd5_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vtop__ConstPool__TABLE_b1b41ba9_0;
extern const VlUnpacked<CData/*2:0*/, 1024> Vtop__ConstPool__TABLE_b22aa1bc_0;

void Vtop___024root___settle__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__2\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx2;
    CData/*3:0*/ __Vtableidx3;
    CData/*6:0*/ __Vtableidx4;
    CData/*4:0*/ __Vtableidx5;
    SData/*9:0*/ __Vtableidx1;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<5>/*159:0*/ __Vtemp7;
    VlWide<5>/*159:0*/ __Vtemp12;
    VlWide<5>/*159:0*/ __Vtemp13;
    VlWide<5>/*159:0*/ __Vtemp18;
    VlWide<5>/*159:0*/ __Vtemp19;
    VlWide<5>/*159:0*/ __Vtemp23;
    VlWide<5>/*159:0*/ __Vtemp24;
    VlWide<3>/*95:0*/ __Vtemp29;
    VlWide<3>/*95:0*/ __Vtemp30;
    VlWide<3>/*95:0*/ __Vtemp31;
    VlWide<3>/*95:0*/ __Vtemp32;
    VlWide<3>/*95:0*/ __Vtemp33;
    VlWide<3>/*95:0*/ __Vtemp35;
    VlWide<3>/*95:0*/ __Vtemp37;
    VlWide<3>/*95:0*/ __Vtemp38;
    VlWide<3>/*95:0*/ __Vtemp39;
    VlWide<3>/*95:0*/ __Vtemp40;
    VlWide<3>/*95:0*/ __Vtemp41;
    VlWide<7>/*223:0*/ __Vtemp45;
    // Body
    vlSelf->axi_aw_prot_o = 0U;
    vlSelf->axi_aw_user_o = 0U;
    vlSelf->axi_aw_lock_o = 0U;
    vlSelf->axi_aw_qos_o = 0U;
    vlSelf->axi_aw_region_o = 0U;
    vlSelf->axi_w_user_o = 0U;
    vlSelf->axi_ar_prot_o = 0U;
    vlSelf->axi_ar_lock_o = 0U;
    vlSelf->axi_ar_qos_o = 0U;
    vlSelf->top__DOT__Dcache_u__DOT__axiWrBusy = vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__r_64 
        = ((((QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U])) 
             << 0x21U) | (((QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U])) 
                           << 1U) | ((QData)((IData)(
                                                     vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U])) 
                                     >> 0x1fU))) + 
           ((0x40000000U & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U])
             ? vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_P_r
             : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_N_r));
    vlSelf->top__DOT__ls_axi_w_data_o = (((QData)((IData)(
                                                          vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[
                                                          (((IData)(0x3fU) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt) 
                                                                << 6U))) 
                                                           >> 5U)])) 
                                          << ((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt) 
                                                   << 6U)))
                                               ? 0x20U
                                               : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt) 
                                                      << 6U))))) 
                                         | (((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt) 
                                                  << 6U)))
                                              ? 0ULL
                                              : ((QData)((IData)(
                                                                 vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt) 
                                                                       << 6U))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt) 
                                                      << 6U))))) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[
                                                               (6U 
                                                                & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt) 
                                                                   << 1U))])) 
                                               >> (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt) 
                                                      << 6U)))));
    vlSelf->top__DOT__ls_axi_w_strb_o = vlSelf->top__DOT__axi_ls_u__DOT__wrMask_reg;
    vlSelf->top__DOT__cache_dut__DOT__way1Data[0U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay1_1[0U];
    vlSelf->top__DOT__cache_dut__DOT__way1Data[1U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay1_1[1U];
    vlSelf->top__DOT__cache_dut__DOT__way1Data[2U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay1_1[2U];
    vlSelf->top__DOT__cache_dut__DOT__way1Data[3U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay1_1[3U];
    vlSelf->top__DOT__cache_dut__DOT__way1Data[4U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay1_2[0U];
    vlSelf->top__DOT__cache_dut__DOT__way1Data[5U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay1_2[1U];
    vlSelf->top__DOT__cache_dut__DOT__way1Data[6U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay1_2[2U];
    vlSelf->top__DOT__cache_dut__DOT__way1Data[7U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay1_2[3U];
    vlSelf->top__DOT__cache_dut__DOT__way2Data[0U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay2_1[0U];
    vlSelf->top__DOT__cache_dut__DOT__way2Data[1U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay2_1[1U];
    vlSelf->top__DOT__cache_dut__DOT__way2Data[2U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay2_1[2U];
    vlSelf->top__DOT__cache_dut__DOT__way2Data[3U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay2_1[3U];
    vlSelf->top__DOT__cache_dut__DOT__way2Data[4U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay2_2[0U];
    vlSelf->top__DOT__cache_dut__DOT__way2Data[5U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay2_2[1U];
    vlSelf->top__DOT__cache_dut__DOT__way2Data[6U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay2_2[2U];
    vlSelf->top__DOT__cache_dut__DOT__way2Data[7U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay2_2[3U];
    __Vtemp6[0U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                     << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                  >> 6U));
    __Vtemp6[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                     << 0x1aU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                  >> 6U));
    __Vtemp6[2U] = (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                          >> 6U));
    VL_EXTEND_WW(130,66, __Vtemp7, __Vtemp6);
    __Vtemp12[0U] = 0U;
    __Vtemp12[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                      << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                   >> 4U));
    __Vtemp12[2U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                      << 0x1cU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                                   >> 4U));
    __Vtemp12[3U] = (((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                        >> 5U)))) << 2U) 
                     | (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                              >> 4U)));
    __Vtemp12[4U] = ((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                       >> 5U)))) >> 0x1eU);
    VL_ADD_W(5, __Vtemp13, __Vtemp7, __Vtemp12);
    __Vtemp18[0U] = 0U;
    __Vtemp18[1U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                      << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U] 
                                   >> 2U));
    __Vtemp18[2U] = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                      << 0x1eU) | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                                   >> 2U));
    __Vtemp18[3U] = (((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                        >> 3U)))) << 2U) 
                     | (3U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                              >> 2U)));
    __Vtemp18[4U] = ((- (IData)((1U & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                       >> 3U)))) >> 0x1eU);
    VL_ADD_W(5, __Vtemp19, __Vtemp13, __Vtemp18);
    __Vtemp23[0U] = 0U;
    __Vtemp23[1U] = 0U;
    __Vtemp23[2U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[0U];
    __Vtemp23[3U] = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[1U];
    __Vtemp23[4U] = (3U & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U]);
    VL_ADD_W(5, __Vtemp24, __Vtemp19, __Vtemp23);
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[0U] 
        = __Vtemp24[0U];
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[1U] 
        = __Vtemp24[1U];
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[2U] 
        = __Vtemp24[2U];
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[3U] 
        = __Vtemp24[3U];
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[4U] 
        = (3U & __Vtemp24[4U]);
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s 
        = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
            >> 0x1fU) ? ((((QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U]))) 
                         + vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_P_r)
            : (((QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U]))));
    vlSelf->top__DOT__ls_u__DOT__timr_int = (vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtime 
                                             >= vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp);
    vlSelf->pc_diff = (((QData)((IData)(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                        << 0x3fU) | (((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                      << 0x1fU) | ((QData)((IData)(
                                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                   >> 1U)));
    vlSelf->instr_diff = ((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                           << 0x1fU) | (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                        >> 1U));
    if ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))) {
        vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready 
            = (3U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state));
        vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid 
            = (1U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state));
    } else {
        vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready 
            = (3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state));
        vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid 
            = (1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state));
    }
    vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U];
    vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U];
    vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U];
    vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U];
    vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U];
    vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U];
    vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U];
    vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U];
    vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U];
    vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U];
    vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U];
    vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U];
    vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U];
    vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U];
    vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U];
    vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U];
    vlSelf->top__DOT__cache_dut__DOT__way1Hit = ((1U 
                                                  & ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fffffU 
                                                                  & (vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                                                     [
                                                                     (0x3fU 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                                >> 5U)))] 
                                                                     ^ (IData)(
                                                                               (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                                >> 0xbU))))))) 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                                >> 
                                                                (0x3fU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                            >> 5U)))))))
                                                  ? 1U
                                                  : 0U);
    vlSelf->top__DOT__cache_dut__DOT__way2Hit = ((1U 
                                                  & ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fffffU 
                                                                  & (vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                                                     [
                                                                     (0x3fU 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                                >> 5U)))] 
                                                                     ^ (IData)(
                                                                               (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                                >> 0xbU))))))) 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                                >> 
                                                                (0x3fU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                            >> 5U)))))))
                                                  ? 1U
                                                  : 0U);
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
        = ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
            ? vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg
            : vlSelf->top__DOT__axi_ls_u__DOT__rdAddr_reg);
    vlSelf->top__DOT__wb_data = ((0x80U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                  ? ((0x40U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                      ? ((0x20U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                          ? ((0x10U 
                                              & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                              ? 0ULL
                                              : ((8U 
                                                  & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                                  ? 0ULL
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))))
                                          : ((0x10U 
                                              & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                              ? ((8U 
                                                  & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                                   << 0x3fU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                      << 0x1fU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                        >> 1U)))
                                                  : 0ULL)
                                              : (((QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                                  << 0x3fU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                     << 0x1fU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                       >> 1U)))))
                                      : 0ULL) : ((0x40U 
                                                  & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                                  ? 
                                                 ((0x20U 
                                                   & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                                   ? 
                                                  ((0x10U 
                                                    & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                                     ? 0ULL
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                                      << 0x3fU) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                         << 0x1fU) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                           >> 1U))))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                                     << 0x3fU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                        << 0x1fU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                          >> 1U))))
                                                   : 
                                                  ((0x10U 
                                                    & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                                    ? 0ULL
                                                    : 
                                                   ((8U 
                                                     & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                                     ? 0ULL
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      << 0x3fU) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                         << 0x1fU) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                           >> 1U))))))
                                                  : 
                                                 ((0x20U 
                                                   & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                                   ? 
                                                  ((0x10U 
                                                    & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                                     ? 0ULL
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                                      << 0x3fU) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                         << 0x1fU) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                           >> 1U))))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                                     << 0x3fU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                        << 0x1fU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                          >> 1U))))
                                                   : 
                                                  ((0x10U 
                                                    & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                                    ? 0ULL
                                                    : 
                                                   ((8U 
                                                     & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                                     ? 0ULL
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      << 0x3fU) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                         << 0x1fU) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                           >> 1U))))))));
    if (((0xaU == (0xfU & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                   >> 0x1cU)))) | (2U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                               >> 0x18U)))))) {
        vlSelf->axi_aw_addr_o = 0ULL;
        vlSelf->axi_aw_id_o = 0U;
        vlSelf->axi_aw_burst_o = 0U;
        vlSelf->axi_aw_cache_o = 0U;
    } else {
        vlSelf->axi_aw_addr_o = vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg;
        vlSelf->axi_aw_id_o = 1U;
        vlSelf->axi_aw_burst_o = 1U;
        vlSelf->axi_aw_cache_o = 0xfU;
    }
    vlSelf->top__DOT__Dcache_u__DOT__wrLow = (IData)(
                                                     (0x100000000ULL 
                                                      == 
                                                      (0x100000010ULL 
                                                       & vlSelf->top__DOT__Dcache_u__DOT__reqLatch)));
    vlSelf->top__DOT__Dcache_u__DOT__wrHigh = (IData)(
                                                      (0x100000010ULL 
                                                       == 
                                                       (0x100000010ULL 
                                                        & vlSelf->top__DOT__Dcache_u__DOT__reqLatch)));
    vlSelf->axi_aw_size_o = (((0xaU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                        >> 0x1cU)))) 
                              | (2U == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                        >> 0x18U)))))
                              ? 0U : (7U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg)));
    vlSelf->top__DOT__Dcache_u__DOT__storeData = ((
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                         >> 3U))) 
                                                    & ((0x1fU 
                                                        & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                           >> 0x17U)) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                           >> 8U))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                     << 0x3fU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                        << 0x1fU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                          >> 1U)))
                                                    : 
                                                   ((((0x73U 
                                                       == 
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
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                            >> 8U))))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                                      << 0x3dU) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                         << 0x1dU) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                           >> 3U))))) 
                                                  << 
                                                  (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch) 
                                                      << 3U)));
    vlSelf->top__DOT__ls_u__DOT__csr_wr_data = ((((3U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                       >> 1U))) 
                                                  & ((0x73U 
                                                      == 
                                                      (0x7fU 
                                                       & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                          >> 3U))) 
                                                     & (((1U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                              >> 0xfU))) 
                                                         | (3U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                >> 0xfU)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                               >> 0xfU)))))) 
                                                 & ((0x1fU 
                                                     & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                        >> 8U)) 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                        >> 0x12U))))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                  << 0x3fU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                     << 0x1fU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                       >> 1U)))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                  << 0x3dU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                     << 0x1dU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                       >> 3U))));
    vlSelf->top__DOT__rw_valid_i = ((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state)));
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready 
        = ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                     >> 0x1cU)))) ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready)
            : ((2U == (0xfU & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                       >> 0x18U))))
                ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready)
                : (IData)(vlSelf->axi_w_ready_i)));
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh = (
                                                   (3U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                        >> 3U))) 
                                                   & (1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                          >> 0xfU))));
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu = 
        ((3U == (0x7fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                          >> 3U))) & (5U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))));
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw = (
                                                   (3U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                        >> 3U))) 
                                                   & (2U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                          >> 0xfU))));
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu = 
        ((3U == (0x7fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                          >> 3U))) & (6U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))));
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld = (
                                                   (3U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                        >> 3U))) 
                                                   & (3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                          >> 0xfU))));
    __Vtableidx3 = ((((8U == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                       >> 5U))) & (3U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                       >> 0xfU)))) 
                     << 3U) | ((((8U == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 5U))) 
                                 & (2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 0xfU)))) 
                                << 2U) | ((((8U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 5U))) 
                                            & (1U == 
                                               (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU)))) 
                                           << 1U) | 
                                          ((8U == (0x1fU 
                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                      >> 5U))) 
                                           & (0U == 
                                              (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xfU)))))));
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask 
        = Vtop__ConstPool__TABLE_b95eb736_0[__Vtableidx3];
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size 
        = Vtop__ConstPool__TABLE_0ca066a7_0[__Vtableidx3];
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrw 
        = ((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                         >> 0xfU))) | (5U == (7U & 
                                              (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xfU))));
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrs 
        = ((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                         >> 0xfU))) | (6U == (7U & 
                                              (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xfU))));
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrc 
        = ((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                         >> 0xfU))) | (7U == (7U & 
                                              (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xfU))));
    vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i 
        = ((8U == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                            >> 5U))) | (3U == (0x7fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 3U))));
    vlSelf->top__DOT__Dcache_u__DOT__way2Hit = ((1U 
                                                 & ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fffffU 
                                                                 & (vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                                                    [
                                                                    (0x3fU 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                                >> 5U)))] 
                                                                    ^ (IData)(
                                                                              (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                               >> 0xbU))))))) 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                               >> 
                                                               (0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                           >> 5U)))))))
                                                 ? 1U
                                                 : 0U);
    vlSelf->top__DOT__Dcache_u__DOT__way1Hit = ((1U 
                                                 & ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fffffU 
                                                                 & (vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                                                    [
                                                                    (0x3fU 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                                >> 5U)))] 
                                                                    ^ (IData)(
                                                                              (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                               >> 0xbU))))))) 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                               >> 
                                                               (0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                           >> 5U)))))))
                                                 ? 1U
                                                 : 0U);
    vlSelf->regA0 = vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
        [0xaU];
    vlSelf->top__DOT__DcacheRdAddr = ((0xffffffff00000000ULL 
                                       & vlSelf->top__DOT__DcacheRdAddr) 
                                      | (IData)((IData)(
                                                        ((6U 
                                                          == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                          ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)
                                                          : 
                                                         (((IData)(
                                                                   (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                    >> 0xbU)) 
                                                           << 0xbU) 
                                                          | (0x7e0U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                         >> 5U)) 
                                                                << 5U)))))));
    if (((0xaU == (0xfU & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                   >> 0x1cU)))) | (2U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                               >> 0x18U)))))) {
        vlSelf->axi_aw_valid_o = 0U;
        vlSelf->axi_aw_len_o = 0U;
        vlSelf->axi_w_valid_o = 0U;
        vlSelf->axi_b_ready_o = 0U;
    } else {
        vlSelf->axi_aw_valid_o = (IData)((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)));
        vlSelf->axi_aw_len_o = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                 ? 0U : 3U);
        vlSelf->axi_w_valid_o = (IData)((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)));
        vlSelf->axi_b_ready_o = (IData)((2U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)));
    }
    if (((0xaU != (0xfU & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                   >> 0x1cU)))) | (2U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                               >> 0x18U)))))) {
        vlSelf->top__DOT__axi_mmio_aw_valid_o = 0U;
        vlSelf->top__DOT__axi_mmio_w_valid_o = 0U;
        vlSelf->top__DOT__axi_mmio_b_ready_o = 0U;
    } else {
        vlSelf->top__DOT__axi_mmio_aw_valid_o = (IData)(
                                                        (1U 
                                                         == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)));
        vlSelf->top__DOT__axi_mmio_w_valid_o = (IData)(
                                                       (3U 
                                                        == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)));
        vlSelf->top__DOT__axi_mmio_b_ready_o = (IData)(
                                                       (2U 
                                                        == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)));
    }
    if ((2U == (0xfU & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                >> 0x18U))))) {
        vlSelf->top__DOT__clint_axi_awvalid = (IData)(
                                                      (1U 
                                                       == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)));
        vlSelf->top__DOT__clint_axi_bready = (IData)(
                                                     (2U 
                                                      == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)));
    } else {
        vlSelf->top__DOT__clint_axi_awvalid = 0U;
        vlSelf->top__DOT__clint_axi_bready = 0U;
    }
    vlSelf->top__DOT__DcacheWrAddr = ((0xffffffff00000000ULL 
                                       & vlSelf->top__DOT__DcacheWrAddr) 
                                      | (IData)((IData)(
                                                        ((4U 
                                                          == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                          ? 
                                                         ((4U 
                                                           == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                           ? 
                                                          ((0x40U 
                                                            & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                                                            ? 
                                                           ((((IData)(
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
                                                            : 
                                                           ((((IData)(
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
                                                           : 0U)
                                                          : 
                                                         ((6U 
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
                                                                  << 5U)))))))));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul_signed 
        = ((2U & (((~ (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                       >> 2U)) << 1U) | (0x7ffffffeU 
                                         & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 1U) 
                                            & ((~ (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                   >> 3U)) 
                                               << 1U))))) 
           | (1U & (~ (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                       >> 3U))));
    vlSelf->top__DOT__DcacheRdValid = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                        ? (((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                            & (~ (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 0x20U)))) 
                                           & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk)))
                                        : ((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                           & (0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
    vlSelf->top__DOT__axi_ls_u__DOT__wrLast = ((3U 
                                                == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
                                               & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt) 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__storeLenth_reg))));
    vlSelf->top__DOT__clint_axi_wvalid = ((2U == (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x18U))))
                                           ? (IData)(
                                                     (3U 
                                                      == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)))
                                           : 0U);
    vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i 
        = ((3U == (0x7fU & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                             << 4U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                       >> 0x1cU)))) 
           | (8U == (0x1fU & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                               << 2U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                         >> 0x1eU)))));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin 
        = (1U & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                  >> 0x18U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                               >> 0x1aU)));
    vlSelf->top__DOT__Dcache_u__DOT__cleanWrValid = 
        ((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
         & ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
             ? (((IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                          >> (0x3fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt)))) 
                 & (IData)((vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                            >> (0x3fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))))) 
                & (IData)(vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay))
             : (((IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                          >> (0x3fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt)))) 
                 & (IData)((vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                            >> (0x3fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))))) 
                & (IData)(vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay))));
    vlSelf->top__DOT__rs2_sel = ((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                    >> 2U) & ((0x1fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xaU)) 
                                              == (0x1fU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                     >> 6U)))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 0xaU))))
                                  ? 1U : (((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                            & ((0x1fU 
                                                & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 6U)))) 
                                           & (0U != 
                                              (0x1fU 
                                               & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                  >> 8U))))
                                           ? 2U : (
                                                   (((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                                     & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                            >> 6U)))) 
                                                    & (0U 
                                                       != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))
                                                    ? 3U
                                                    : 0U)));
    vlSelf->top__DOT__rs1_sel = ((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                    >> 2U) & ((0x1fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xaU)) 
                                              == (0x1fU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                     >> 0xbU)))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 0xaU))))
                                  ? 1U : (((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                            & ((0x1fU 
                                                & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xbU)))) 
                                           & (0U != 
                                              (0x1fU 
                                               & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                  >> 8U))))
                                           ? 2U : (
                                                   (((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                                     & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                            >> 0xbU)))) 
                                                    & (0U 
                                                       != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))
                                                    ? 3U
                                                    : 0U)));
    vlSelf->pc_decoding = (((QData)((IData)(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])));
    vlSelf->top__DOT__DivSel_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                    if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                        vlSelf->top__DOT__DivSel_id = 0U;
                    }
                } else {
                    vlSelf->top__DOT__DivSel_id = 0U;
                }
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 2U)))) {
                    vlSelf->top__DOT__DivSel_id = (7U 
                                                   & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                      >> 0xcU));
                }
            } else {
                vlSelf->top__DOT__DivSel_id = ((4U 
                                                & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                ? 0U
                                                : (7U 
                                                   & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                      >> 0xcU)));
            }
        } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__DivSel_id = 0U;
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__DivSel_id = 0U;
            }
        } else {
            vlSelf->top__DOT__DivSel_id = 0U;
        }
    } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                      >> 2U)))) {
            vlSelf->top__DOT__DivSel_id = 0U;
        }
    }
    vlSelf->top__DOT__DivEn_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                    if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                        vlSelf->top__DOT__DivEn_id = 0U;
                    }
                } else {
                    vlSelf->top__DOT__DivEn_id = 0U;
                }
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 2U)))) {
                    vlSelf->top__DOT__DivEn_id = (1U 
                                                  & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                     >> 0x19U));
                }
            } else {
                vlSelf->top__DOT__DivEn_id = (1U & 
                                              ((~ (
                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                   >> 2U)) 
                                               & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                  >> 0x19U)));
            }
        } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__DivEn_id = 0U;
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__DivEn_id = 0U;
            }
        } else {
            vlSelf->top__DOT__DivEn_id = 0U;
        }
    } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                      >> 2U)))) {
            vlSelf->top__DOT__DivEn_id = 0U;
        }
    }
    vlSelf->top__DOT__is_jalr_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 3U)))) {
                    if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                        vlSelf->top__DOT__is_jalr_id = 1U;
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__src2sel_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                  >> 2U)))) {
                        vlSelf->top__DOT__src2sel_id = 2U;
                        if ((0x4000U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                            if ((0x2000U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                                vlSelf->top__DOT__src2sel_id = 1U;
                            } else if ((0x1000U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                                vlSelf->top__DOT__src2sel_id = 1U;
                            }
                        }
                    }
                }
            } else if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                    vlSelf->top__DOT__src2sel_id = 3U;
                }
            } else {
                vlSelf->top__DOT__src2sel_id = ((4U 
                                                 & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                 ? 3U
                                                 : 0U);
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 2U)))) {
                    vlSelf->top__DOT__src2sel_id = 0U;
                }
            } else {
                vlSelf->top__DOT__src2sel_id = ((4U 
                                                 & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                 ? 1U
                                                 : 0U);
            }
        } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__src2sel_id = 1U;
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__src2sel_id = 1U;
            }
        } else {
            vlSelf->top__DOT__src2sel_id = 1U;
        }
    } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                      >> 2U)))) {
            vlSelf->top__DOT__src2sel_id = 1U;
        }
    }
    vlSelf->top__DOT__src1sel_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                  >> 2U)))) {
                        vlSelf->top__DOT__src1sel_id = 0U;
                    }
                }
            } else if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                    vlSelf->top__DOT__src1sel_id = 1U;
                }
            } else {
                vlSelf->top__DOT__src1sel_id = (1U 
                                                & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                   >> 2U));
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 2U)))) {
                    vlSelf->top__DOT__src1sel_id = 0U;
                }
            } else {
                vlSelf->top__DOT__src1sel_id = 0U;
            }
        } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__src1sel_id = 0U;
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__src1sel_id = 0U;
            }
        } else {
            vlSelf->top__DOT__src1sel_id = (1U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                  >> 2U));
        }
    } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                      >> 2U)))) {
            vlSelf->top__DOT__src1sel_id = 0U;
        }
    }
    vlSelf->top__DOT__aluctr_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                  >> 2U)))) {
                        vlSelf->top__DOT__aluctr_id = 0U;
                        if ((0x4000U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                            if ((0x2000U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                                vlSelf->top__DOT__aluctr_id = 3U;
                            } else if ((0x1000U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                                vlSelf->top__DOT__aluctr_id = 3U;
                            }
                        }
                    }
                }
            } else if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                    vlSelf->top__DOT__aluctr_id = 0U;
                }
            } else if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                vlSelf->top__DOT__aluctr_id = 0U;
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 2U)))) {
                    vlSelf->top__DOT__aluctr_id = (
                                                   (0x4000U 
                                                    & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                      ? 7U
                                                      : 6U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                      ? 
                                                     ((0x40000000U 
                                                       & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                       ? 
                                                      ((8U 
                                                        & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                        ? 0x1dU
                                                        : 0xdU)
                                                       : 
                                                      ((8U 
                                                        & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                        ? 0x15U
                                                        : 5U))
                                                      : 4U))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                      ? 0xaU
                                                      : 2U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                      ? 
                                                     ((8U 
                                                       & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                       ? 0x11U
                                                       : 1U)
                                                      : 
                                                     ((0x40000000U 
                                                       & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                       ? 
                                                      ((8U 
                                                        & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                        ? 0x18U
                                                        : 8U)
                                                       : 
                                                      ((8U 
                                                        & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                        ? 0x10U
                                                        : 0U)))));
                }
            } else {
                vlSelf->top__DOT__aluctr_id = ((4U 
                                                & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                ? 3U
                                                : (
                                                   (0x4000U 
                                                    & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                      ? 7U
                                                      : 6U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                      ? 
                                                     ((0x40000000U 
                                                       & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                       ? 
                                                      ((8U 
                                                        & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                        ? 0x1dU
                                                        : 0xdU)
                                                       : 
                                                      ((8U 
                                                        & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                        ? 0x15U
                                                        : 5U))
                                                      : 4U))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                      ? 0xaU
                                                      : 2U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                      ? 
                                                     ((8U 
                                                       & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                       ? 0x11U
                                                       : 1U)
                                                      : 
                                                     ((0x40000000U 
                                                       & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                       ? 
                                                      ((8U 
                                                        & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                        ? 0x18U
                                                        : 8U)
                                                       : 
                                                      ((8U 
                                                        & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                        ? 0x10U
                                                        : 0U))))));
            }
        } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__aluctr_id = 0U;
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__aluctr_id = ((0x4000U 
                                                & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                ? (
                                                   (0x2000U 
                                                    & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                     ? 7U
                                                     : 6U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                     ? 
                                                    ((0x40000000U 
                                                      & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                      ? 
                                                     ((8U 
                                                       & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                       ? 0x1dU
                                                       : 0xdU)
                                                      : 
                                                     ((8U 
                                                       & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                       ? 0x15U
                                                       : 5U))
                                                     : 4U))
                                                : (
                                                   (0x2000U 
                                                    & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                     ? 0xaU
                                                     : 2U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                     ? 
                                                    ((8U 
                                                      & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                      ? 0x11U
                                                      : 1U)
                                                     : 
                                                    ((8U 
                                                      & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                      ? 0x10U
                                                      : 0U))));
            }
        } else {
            vlSelf->top__DOT__aluctr_id = ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                            ? 0U : 
                                           ((0x4000U 
                                             & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                             ? ((0x2000U 
                                                 & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                 ? 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                  ? 7U
                                                  : 6U)
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                  ? 
                                                 ((0x40000000U 
                                                   & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                    ? 0x1dU
                                                    : 0xdU)
                                                   : 
                                                  ((8U 
                                                    & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                    ? 0x15U
                                                    : 5U))
                                                  : 4U))
                                             : ((0x2000U 
                                                 & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                 ? 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                  ? 0xaU
                                                  : 2U)
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                  ? 
                                                 ((8U 
                                                   & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                   ? 0x11U
                                                   : 1U)
                                                  : 
                                                 ((8U 
                                                   & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                   ? 0x10U
                                                   : 0U)))));
        }
    } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                      >> 2U)))) {
            vlSelf->top__DOT__aluctr_id = 0U;
        }
    }
    vlSelf->top__DOT__is_jal_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                    if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                        vlSelf->top__DOT__is_jal_id = 1U;
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__is_brc_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                  >> 2U)))) {
                        vlSelf->top__DOT__is_brc_id = 1U;
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__wben_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                  >> 2U)))) {
                        if ((0x4000U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                            if ((0x2000U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                                vlSelf->top__DOT__wben_id = 1U;
                            } else if ((0x1000U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                                vlSelf->top__DOT__wben_id = 1U;
                            }
                        } else {
                            vlSelf->top__DOT__wben_id 
                                = (1U & ((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                          >> 0xdU) 
                                         | (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                            >> 0xcU)));
                        }
                    }
                }
            } else if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                    vlSelf->top__DOT__wben_id = 1U;
                }
            } else {
                vlSelf->top__DOT__wben_id = (1U & (
                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                   >> 2U));
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 2U)))) {
                    vlSelf->top__DOT__wben_id = 1U;
                }
            } else {
                vlSelf->top__DOT__wben_id = 1U;
            }
        } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__wben_id = 0U;
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__wben_id = 1U;
            }
        } else {
            vlSelf->top__DOT__wben_id = 1U;
        }
    } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                      >> 2U)))) {
            vlSelf->top__DOT__wben_id = (0U != (3U 
                                                & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]));
        }
    }
    vlSelf->top__DOT__rs1_idx_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                  >> 2U)))) {
                        vlSelf->top__DOT__rs1_idx_id 
                            = (0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 0xfU));
                    }
                }
            } else if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                    vlSelf->top__DOT__rs1_idx_id = 0U;
                }
            } else {
                vlSelf->top__DOT__rs1_idx_id = (0x1fU 
                                                & ((4U 
                                                    & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                    ? 
                                                   ((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                     << 0x11U) 
                                                    | (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                       >> 0xfU))
                                                    : 
                                                   ((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                     << 0x11U) 
                                                    | (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                       >> 0xfU))));
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 2U)))) {
                    vlSelf->top__DOT__rs1_idx_id = 
                        (0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                  >> 0xfU));
                }
            } else {
                vlSelf->top__DOT__rs1_idx_id = ((4U 
                                                 & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                 ? 0U
                                                 : 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                    >> 0xfU)));
            }
        } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__rs1_idx_id = (0x1fU 
                                                & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                   >> 0xfU));
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__rs1_idx_id = (0x1fU 
                                                & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                   >> 0xfU));
            }
        } else {
            vlSelf->top__DOT__rs1_idx_id = ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                             ? 0U : 
                                            (0x1fU 
                                             & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                >> 0xfU)));
        }
    } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                      >> 2U)))) {
            vlSelf->top__DOT__rs1_idx_id = (0x1fU & 
                                            (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                             >> 0xfU));
        }
    }
    vlSelf->top__DOT__rs2_idx_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                  >> 2U)))) {
                        vlSelf->top__DOT__rs2_idx_id = 0U;
                    }
                }
            } else if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                    vlSelf->top__DOT__rs2_idx_id = 0U;
                }
            } else {
                vlSelf->top__DOT__rs2_idx_id = ((4U 
                                                 & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                 ? 0U
                                                 : 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                    >> 0x14U)));
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 2U)))) {
                    vlSelf->top__DOT__rs2_idx_id = 
                        (0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                  >> 0x14U));
                }
            } else {
                vlSelf->top__DOT__rs2_idx_id = ((4U 
                                                 & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                 ? 0U
                                                 : 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                    >> 0x14U)));
            }
        } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__rs2_idx_id = (0x1fU 
                                                & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                   >> 0x14U));
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__rs2_idx_id = 0U;
            }
        } else {
            vlSelf->top__DOT__rs2_idx_id = 0U;
        }
    } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                      >> 2U)))) {
            vlSelf->top__DOT__rs2_idx_id = 0U;
        }
    }
    vlSelf->top__DOT__trap_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                  >> 2U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                      >> 0xeU)))) {
                            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                          >> 0xdU)))) {
                                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 0xcU)))) {
                                    vlSelf->top__DOT__trap_id = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__ID_u__DOT__ext_op = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                  >> 2U)))) {
                        if ((0x4000U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                            if ((0x2000U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                                vlSelf->top__DOT__ID_u__DOT__ext_op = 0x11U;
                            } else if ((0x1000U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                                vlSelf->top__DOT__ID_u__DOT__ext_op = 0x11U;
                            }
                        }
                    }
                }
            } else if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                    vlSelf->top__DOT__ID_u__DOT__ext_op = 8U;
                }
            } else {
                vlSelf->top__DOT__ID_u__DOT__ext_op 
                    = ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                        ? 1U : 0x10U);
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 3U)))) {
                if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                    vlSelf->top__DOT__ID_u__DOT__ext_op = 2U;
                }
            }
        } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__ID_u__DOT__ext_op = 4U;
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__ID_u__DOT__ext_op = 1U;
            }
        } else {
            vlSelf->top__DOT__ID_u__DOT__ext_op = (
                                                   (4U 
                                                    & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                    ? 2U
                                                    : 1U);
        }
    } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                      >> 2U)))) {
            vlSelf->top__DOT__ID_u__DOT__ext_op = 1U;
        }
    }
    vlSelf->top__DOT__fence_id = 0U;
    if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                  >> 6U)))) {
        if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                      >> 5U)))) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                    if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                        vlSelf->top__DOT__fence_id 
                            = (1U == (7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                            >> 0xcU)));
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__ld_use_hazard = ((((3U == (0x7fU 
                                                 & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                     << 4U) 
                                                    | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                       >> 0x1cU)))) 
                                         & ((((((0x19U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                     >> 2U))) 
                                                | (0x18U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                       >> 2U)))) 
                                               | (4U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                      >> 2U)))) 
                                              | (6U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                     >> 2U)))) 
                                             | (0xcU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                    >> 2U)))) 
                                            | (0xeU 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                      >> 2U))))) 
                                        & (((0x1fU 
                                             & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                >> 3U)) 
                                            == (0x1fU 
                                                & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                   >> 0xfU))) 
                                           | ((0x1fU 
                                               & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                  >> 3U)) 
                                              == (0x1fU 
                                                  & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                     >> 0x14U))))) 
                                       | (((3U == (0x7fU 
                                                   & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                       << 4U) 
                                                      | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                         >> 0x1cU)))) 
                                           & ((3U == 
                                               (0x7fU 
                                                & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                              | (8U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                     >> 2U))))) 
                                          & ((0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 >> 3U)) 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                    >> 0xfU)))));
    vlSelf->top__DOT__out_trap_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                  >> 2U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                      >> 0xeU)))) {
                            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                          >> 0xdU)))) {
                                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 0xcU)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                  >> 0x14U)))) {
                                        if ((0x200000U 
                                             & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                                            vlSelf->top__DOT__out_trap_id = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__in_trap_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                  >> 2U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                      >> 0xeU)))) {
                            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                          >> 0xdU)))) {
                                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 0xcU)))) {
                                    if ((0x100000U 
                                         & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                                        vlSelf->top__DOT__in_trap_id = 0U;
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                    >> 0x15U)))) {
                                        vlSelf->top__DOT__in_trap_id = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__cache_dut__DOT__uncached = ((0ULL 
                                                   != vlSelf->top__DOT__pc_new) 
                                                  & (3U 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                 >> 0x1cU)))));
    vlSelf->axi_w_data_o = (((0xaU == (0xfU & (IData)(
                                                      (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                       >> 0x1cU)))) 
                             | (2U == (0xfU & (IData)(
                                                      (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                       >> 0x18U)))))
                             ? 0ULL : vlSelf->top__DOT__ls_axi_w_data_o);
    vlSelf->top__DOT__clint_axi_wdata = ((2U == (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x18U))))
                                          ? vlSelf->top__DOT__ls_axi_w_data_o
                                          : 0ULL);
    vlSelf->axi_w_strb_o = (((0xaU == (0xfU & (IData)(
                                                      (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                       >> 0x1cU)))) 
                             | (2U == (0xfU & (IData)(
                                                      (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                       >> 0x18U)))))
                             ? 0U : (0xffU & (IData)(vlSelf->top__DOT__ls_axi_w_strb_o)));
    vlSelf->top__DOT__clint_axi_wstrb = ((2U == (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x18U))))
                                          ? (0xffU 
                                             & (IData)(vlSelf->top__DOT__ls_axi_w_strb_o))
                                          : 0U);
    vlSelf->top__DOT__in_intr_ls = (1U & (((IData)(
                                                   (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip 
                                                    >> 7U)) 
                                           | (IData)(vlSelf->top__DOT__ls_u__DOT__timr_int)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                     >> 3U))));
    if (((0xaU == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                   >> 0x1cU)))) | (2U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                               >> 0x18U)))))) {
        vlSelf->axi_ar_addr_o = 0ULL;
        vlSelf->axi_ar_burst_o = 0U;
        vlSelf->axi_ar_cache_o = 0U;
        vlSelf->axi_ar_valid_o = 0U;
        vlSelf->axi_ar_id_o = 0U;
        vlSelf->axi_r_ready_o = 0U;
    } else {
        vlSelf->axi_ar_addr_o = vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr;
        vlSelf->axi_ar_burst_o = 1U;
        vlSelf->axi_ar_cache_o = 2U;
        vlSelf->axi_ar_valid_o = (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
        vlSelf->axi_ar_id_o = ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                ? 0U : 1U);
        vlSelf->axi_r_ready_o = (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
    }
    vlSelf->top__DOT__axi_mmio_ar_valid_o = (((0xaU 
                                               != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x1cU)))) 
                                              | (2U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x18U)))))
                                              ? 0U : 
                                             (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid)));
    vlSelf->top__DOT__clint_axi_arvalid = ((2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x18U))))
                                            ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid))
                                            : 0U);
    vlSelf->axi_ar_region_o = (((0xaU == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                          >> 0x1cU)))) 
                                | (2U == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                          >> 0x18U)))))
                                ? 0U : (0xfU & ((0U 
                                                 != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                                 ? (IData)(vlSelf->top__DOT__if_axi_ar_region_o)
                                                 : (IData)(vlSelf->top__DOT__ls_axi_ar_region_o))));
    if ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                  >> 0x1cU))))) {
        vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid 
            = vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid;
        vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready 
            = vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready;
        vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data 
            = vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata;
        vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last 
            = vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid;
        vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id = 1U;
    } else {
        vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid 
            = ((2U == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                       >> 0x18U))))
                ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid)
                : (IData)(vlSelf->axi_r_valid_i));
        vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready 
            = ((2U == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                       >> 0x18U))))
                ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready)
                : (IData)(vlSelf->axi_ar_ready_i));
        vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data 
            = ((2U == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                       >> 0x18U))))
                ? vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__reg_data_out
                : vlSelf->axi_r_data_i);
        vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last 
            = ((2U == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                       >> 0x18U))))
                ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid)
                : (IData)(vlSelf->axi_r_last_i));
        vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id 
            = ((2U == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                       >> 0x18U))))
                ? 1U : (0xfU & (IData)(vlSelf->axi_r_id_i)));
    }
    vlSelf->top__DOT__Dcache_u__DOT__storeMask = (0xffU 
                                                  & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))));
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en 
        = ((((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrw) 
             | (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrs)) 
            | (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrc)) 
           & (0x1cU == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                 >> 5U))));
    vlSelf->top__DOT__Dcache_u__DOT__uncached = (((1U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                  & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i)) 
                                                 & (8U 
                                                    != 
                                                    (0xfU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 0x1cU)))));
    vlSelf->top__DOT__Dcache_u__DOT__cacheHit = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__way1Hit) 
                                                 | (IData)(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
    vlSelf->axi_w_last_o = (((0xaU == (0xfU & (IData)(
                                                      (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                       >> 0x1cU)))) 
                             | (2U == (0xfU & (IData)(
                                                      (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                       >> 0x18U)))))
                             ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrLast)));
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__slv_reg_wren 
        = ((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready) 
           & (IData)(vlSelf->top__DOT__clint_axi_wvalid));
    vlSelf->top__DOT__Dcache_u__DOT__clean_OK = ((0x7fU 
                                                  == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt)) 
                                                 & (((IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanWrValid) 
                                                     & (0U 
                                                        == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))) 
                                                    | (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanWrValid))));
    vlSelf->top__DOT__DcacheWrValid = ((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                        ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanWrValid)
                                        : (IData)(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
    vlSelf->top__DOT__ex_stage_u__DOT__rs2 = ((2U & (IData)(vlSelf->top__DOT__rs2_sel))
                                               ? ((1U 
                                                   & (IData)(vlSelf->top__DOT__rs2_sel))
                                                   ? vlSelf->top__DOT__forwarding_u__DOT__rd_wb
                                                   : vlSelf->top__DOT__wb_data)
                                               : ((1U 
                                                   & (IData)(vlSelf->top__DOT__rs2_sel))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                    << 0x3dU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                       << 0x1dU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                         >> 3U)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                       << 4U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                         >> 0x1cU)))));
    vlSelf->top__DOT__ex_stage_u__DOT__rs1 = ((2U & (IData)(vlSelf->top__DOT__rs1_sel))
                                               ? ((1U 
                                                   & (IData)(vlSelf->top__DOT__rs1_sel))
                                                   ? vlSelf->top__DOT__forwarding_u__DOT__rd_wb
                                                   : vlSelf->top__DOT__wb_data)
                                               : ((1U 
                                                   & (IData)(vlSelf->top__DOT__rs1_sel))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                    << 0x3dU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                       << 0x1dU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                         >> 3U)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                       << 4U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                         >> 0x1cU)))));
    vlSelf->top__DOT__ID_u__DOT__imm = ((0x10U & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                         ? ((8U & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                             ? 0ULL
                                             : ((4U 
                                                 & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                                 ? 0ULL
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                                  ? 0ULL
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                                   ? (QData)((IData)(
                                                                     (0x1fU 
                                                                      & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                                         >> 0xfU))))
                                                   : 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0x800U 
                                                                       & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                                          << 4U)) 
                                                                      | ((0x7e0U 
                                                                          & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                                             >> 0x14U)) 
                                                                         | (0x1eU 
                                                                            & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                                               >> 7U)))))))))))
                                         : ((8U & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                             ? ((4U 
                                                 & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                                 ? 0ULL
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                                  ? 0ULL
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                                   ? 0ULL
                                                   : 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                                        >> 0x1fU)))) 
                                                    << 0x14U) 
                                                   | (QData)((IData)(
                                                                     ((0xff000U 
                                                                       & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                                                                      | ((0x800U 
                                                                          & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                                             >> 9U)) 
                                                                         | (0x7feU 
                                                                            & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                                               >> 0x14U))))))))))
                                             : ((4U 
                                                 & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                                  ? 0ULL
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                                   ? 0ULL
                                                   : 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0xfe0U 
                                                                       & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                                          >> 0x14U)) 
                                                                      | (0x1fU 
                                                                         & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                                            >> 7U))))))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                                   ? 0ULL
                                                   : 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (0xfffff000U 
                                                                      & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                                      >> 0x14U))))
                                                   : 0ULL)))));
    vlSelf->axi_ar_len_o = (((0xaU == (0xfU & (IData)(
                                                      (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                       >> 0x1cU)))) 
                             | (2U == (0xfU & (IData)(
                                                      (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                       >> 0x18U)))))
                             ? 0U : (0xffU & ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                               ? ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                                   ? 0U
                                                   : 3U)
                                               : ((6U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                   ? 0U
                                                   : 3U))));
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size 
        = (7U & ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                  ? ((0U == ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                              ? 0U : 3U)) ? 2U : 3U)
                  : ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                      ? ((((1U & ((- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh))) 
                                  | (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu))))) 
                           | (2U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw))))) 
                          | (2U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu))))) 
                         | (3U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld)))))
                      : 3U)));
    vlSelf->top__DOT__cache_dut__DOT__wenWay1 = (((7U 
                                                   == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                                  & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__uncached))) 
                                                 & vlSelf->top__DOT__cache_dut__DOT__randomBit);
    vlSelf->top__DOT__cache_dut__DOT__wenWay2 = (((7U 
                                                   == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                                  & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__uncached))) 
                                                 & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit));
    vlSelf->top__DOT__cache_dut__DOT__cacheHit = ((
                                                   ((IData)(vlSelf->top__DOT__cache_dut__DOT__way1Hit) 
                                                    | (IData)(vlSelf->top__DOT__cache_dut__DOT__way2Hit)) 
                                                   & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__uncached))) 
                                                  | (IData)(vlSelf->top__DOT__cache_dut__DOT__uncachedOk));
    vlSelf->top__DOT__dataValid_o = (((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? 0U : (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)) 
                                     & (3U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state)));
    vlSelf->top__DOT__lsAxiRdDataVAlid = (((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                            ? (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)
                                            : 0U) & 
                                          (3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state)));
    if ((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))) {
        vlSelf->top__DOT__if_axi_r_last_i = 0U;
        vlSelf->top__DOT__ls_axi_r_data_i = vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data;
        vlSelf->top__DOT__ls_axi_r_last_i = (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
    } else {
        vlSelf->top__DOT__if_axi_r_last_i = (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        vlSelf->top__DOT__ls_axi_r_data_i = 0ULL;
        vlSelf->top__DOT__ls_axi_r_last_i = 0U;
    }
    vlSelf->top__DOT__Dcache_u__DOT__sramMask = ((0xffffffffffff0000ULL 
                                                  & vlSelf->top__DOT__Dcache_u__DOT__sramMask) 
                                                 | (IData)((IData)(
                                                                   ((0xff00U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask) 
                                                                                >> 1U)))) 
                                                                        << 8U)) 
                                                                    | (0xffU 
                                                                       & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask)))))))));
    vlSelf->top__DOT__Dcache_u__DOT__sramMask = ((0xffffffff0000ffffULL 
                                                  & vlSelf->top__DOT__Dcache_u__DOT__sramMask) 
                                                 | ((QData)((IData)(
                                                                    ((0xff00U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask) 
                                                                                >> 3U)))) 
                                                                         << 8U)) 
                                                                     | (0xffU 
                                                                        & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask) 
                                                                                >> 2U)))))))) 
                                                    << 0x10U));
    vlSelf->top__DOT__Dcache_u__DOT__sramMask = ((0xffff0000ffffffffULL 
                                                  & vlSelf->top__DOT__Dcache_u__DOT__sramMask) 
                                                 | ((QData)((IData)(
                                                                    ((0xff00U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask) 
                                                                                >> 5U)))) 
                                                                         << 8U)) 
                                                                     | (0xffU 
                                                                        & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask) 
                                                                                >> 4U)))))))) 
                                                    << 0x20U));
    vlSelf->top__DOT__Dcache_u__DOT__sramMask = ((0xffffffffffffULL 
                                                  & vlSelf->top__DOT__Dcache_u__DOT__sramMask) 
                                                 | ((QData)((IData)(
                                                                    ((0xff00U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask) 
                                                                                >> 7U)))) 
                                                                         << 8U)) 
                                                                     | (0xffU 
                                                                        & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask) 
                                                                                >> 6U)))))))) 
                                                    << 0x30U));
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc 
        = ((0x341U == (0xfffU & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                  << 9U) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 0x17U)))) 
           & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec 
        = ((0x305U == (0xfffU & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                  << 9U) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 0x17U)))) 
           & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus 
        = ((0x300U == (0xfffU & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                  << 9U) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 0x17U)))) 
           & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause 
        = ((0x342U == (0xfffU & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                  << 9U) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 0x17U)))) 
           & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
    if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
        vlSelf->top__DOT__Dcache_u__DOT__wenWay2 = vlSelf->top__DOT__Dcache_u__DOT__randomBit;
        vlSelf->top__DOT__Dcache_u__DOT__wenWay1 = 
            (1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)));
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__wenWay2 = 
            ((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
               & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)) 
              & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                         >> 0x20U))) & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__way1Hit)));
        vlSelf->top__DOT__Dcache_u__DOT__wenWay1 = 
            (1U & ((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                     & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)) 
                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                               >> 0x20U))) & (IData)(vlSelf->top__DOT__Dcache_u__DOT__way1Hit)));
    }
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimeWrEn 
        = ((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__slv_reg_wren) 
           & ((0x4000U != (0xffffU & (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr))) 
              & (0xbff8U == (0xffffU & (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr)))));
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmpWrEn 
        = ((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__slv_reg_wren) 
           & (0x4000U == (0xffffU & (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr))));
    __Vtableidx4 = (((IData)(vlSelf->top__DOT__DcacheWrValid) 
                     << 6U) | ((((0xaU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU))))
                                  ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)
                                  : ((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x18U))))
                                      ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready)
                                      : (IData)(vlSelf->axi_aw_ready_i))) 
                                << 5U) | ((((0xaU == 
                                             (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x1cU))))
                                             ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid)
                                             : ((2U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x18U))))
                                                 ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid)
                                                 : (IData)(vlSelf->axi_b_valid_i))) 
                                           << 4U) | 
                                          (((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrLast) 
                                            << 3U) 
                                           | (((IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready) 
                                               << 2U) 
                                              | (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))))));
    vlSelf->top__DOT__axi_ls_u__DOT__w_state_next = 
        Vtop__ConstPool__TABLE_0260afd5_0[__Vtableidx4];
    vlSelf->top__DOT__ex_stage_u__DOT__src2 = ((0x40000U 
                                                & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                                ? (
                                                   (0x20000U 
                                                    & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                                    ? 4ULL
                                                    : 0ULL)
                                                : (
                                                   (0x20000U 
                                                    & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                          >> 0x1cU)))
                                                    : vlSelf->top__DOT__ex_stage_u__DOT__rs2));
    __Vtemp29[0U] = 1U;
    __Vtemp29[1U] = 0U;
    __Vtemp29[2U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp30, vlSelf->top__DOT__ex_stage_u__DOT__rs1);
    VL_EXTEND_WQ(65,64, __Vtemp31, (~ vlSelf->top__DOT__ex_stage_u__DOT__rs2));
    VL_ADD_W(3, __Vtemp32, __Vtemp30, __Vtemp31);
    VL_ADD_W(3, __Vtemp33, __Vtemp29, __Vtemp32);
    vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry 
        = (1U & __Vtemp33[2U]);
    vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres 
        = (1ULL + (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                   + (~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)));
    vlSelf->top__DOT__ex_stage_u__DOT__src1 = ((0x80000U 
                                                & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                       << 4U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                         >> 0x1cU)))
                                                : vlSelf->top__DOT__ex_stage_u__DOT__rs1);
    vlSelf->axi_ar_size_o = (((0xaU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                        >> 0x1cU)))) 
                              | (2U == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                        >> 0x18U)))))
                              ? 0U : (7U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size)));
    vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN 
        = (1U & (~ ((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                      & (0ULL != vlSelf->top__DOT__pc_new)) 
                     | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                         & (0ULL != vlSelf->top__DOT__pc_new)) 
                        & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                    | (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1))));
    vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN 
        = (1U & (~ ((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                      & (0ULL != vlSelf->top__DOT__pc_new)) 
                     | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                         & (0ULL != vlSelf->top__DOT__pc_new)) 
                        & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                    | (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2))));
    vlSelf->top__DOT__sram_rdata = ((((- (QData)((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached))) 
                                      & (((QData)((IData)(
                                                          vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U])))) 
                                     | ((- (QData)((IData)(vlSelf->top__DOT__cache_dut__DOT__way1Hit))) 
                                        & ((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                             & (0ULL 
                                                != vlSelf->top__DOT__pc_new)) 
                                            | (((1U 
                                                 == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                                & (0ULL 
                                                   != vlSelf->top__DOT__pc_new)) 
                                               & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                           >> 4U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                               >> 3U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
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
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
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
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                               >> 3U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
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
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
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
                                            : 0ULL))) 
                                    | ((- (QData)((IData)(vlSelf->top__DOT__cache_dut__DOT__way2Hit))) 
                                       & ((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                            & (0ULL 
                                               != vlSelf->top__DOT__pc_new)) 
                                           | (((1U 
                                                == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                               & (0ULL 
                                                  != vlSelf->top__DOT__pc_new)) 
                                              & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))
                                           ? ((1U & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 4U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                              >> 3U)))
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
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
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
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
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                              >> 3U)))
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
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
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
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
                                           : 0ULL)));
    vlSelf->top__DOT__if_instr_valid = (((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                         | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                            & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                        & (~ (((((1U 
                                                  == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                                 & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                                | (3U 
                                                   == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                               | (2U 
                                                  == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                              | (7U 
                                                 == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
    __Vtableidx2 = (((IData)(vlSelf->top__DOT__if_axi_r_last_i) 
                     << 4U) | (((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                   ? 0U : 1U) ? 0U : 
                                 (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))) 
                                << 3U) | (((IData)(vlSelf->top__DOT__rw_valid_i) 
                                           << 2U) | (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
    vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next 
        = Vtop__ConstPool__TABLE_b1b41ba9_0[__Vtableidx2];
    if (((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
         & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))) {
        vlSelf->top__DOT__Dcache_u__DOT__tagArray1_d 
            = (0x1fffffU & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                             ? vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                            [(0x3fU & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 5U)))]
                             : (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                        >> 0xbU))));
        vlSelf->top__DOT__Dcache_u__DOT__bitValid2_d 
            = (((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                           >> (0x3fU & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                >> 5U)))))) 
               & 1U);
        vlSelf->top__DOT__Dcache_u__DOT__bitValid1_d 
            = (((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                           >> (0x3fU & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                >> 5U)))))) 
               & 1U);
        vlSelf->top__DOT__Dcache_u__DOT__tagArray2_d 
            = (0x1fffffU & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                             ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                        >> 0xbU)) : 
                            vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                            [(0x3fU & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 5U)))]));
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__tagArray1_d = 0U;
        vlSelf->top__DOT__Dcache_u__DOT__bitValid2_d = 0U;
        vlSelf->top__DOT__Dcache_u__DOT__bitValid1_d = 0U;
        vlSelf->top__DOT__Dcache_u__DOT__tagArray2_d = 0U;
    }
    __Vtableidx5 = (((IData)(vlSelf->top__DOT__ls_axi_r_last_i) 
                     << 4U) | (((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                   ? 0U : 1U) ? (1U 
                                                 & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                  : 0U) << 3U) | (((IData)(vlSelf->top__DOT__DcacheRdValid) 
                                                   << 2U) 
                                                  | (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
    vlSelf->top__DOT__axi_ls_u__DOT__r_state_next = 
        Vtop__ConstPool__TABLE_b1b41ba9_0[__Vtableidx5];
    vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk = 
        (((((IData)(vlSelf->top__DOT__DcacheWrValid) 
            & (0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))) 
           | (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk)) 
          | (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
         | (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk));
    vlSelf->top__DOT__csrdata_ls = (((((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc))) 
                                       & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc) 
                                      | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec))) 
                                         & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec)) 
                                     | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus))) 
                                        & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus)) 
                                    | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause))) 
                                       & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_hi_src2 
        = (((QData)((IData)((1U & ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul_signed) 
                                   & (IData)((vlSelf->top__DOT__ex_stage_u__DOT__src2 
                                              >> 0x3fU)))))) 
            << 0x20U) | (QData)((IData)((vlSelf->top__DOT__ex_stage_u__DOT__src2 
                                         >> 0x20U))));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin 
        = (vlSelf->top__DOT__ex_stage_u__DOT__src2 
           ^ (- (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src2 
        = (0x3fU & ((0x8000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                     ? (0x1fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))
                     : (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)));
    vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow 
        = (((1U & (IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                           >> 0x3fU))) == (1U & (~ (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                            >> 0x3fU))))) 
           & ((1U & (IData)((vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres 
                             >> 0x3fU))) != (1U & (IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                                           >> 0x3fU)))));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_hi_src1 
        = (((QData)((IData)((1U & (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul_signed) 
                                    >> 1U) & (IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                      >> 0x3fU)))))) 
            << 0x20U) | (QData)((IData)((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                         >> 0x20U))));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__diffIn 
        = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src1Reg 
            != vlSelf->top__DOT__ex_stage_u__DOT__src1) 
           | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2Reg 
              != vlSelf->top__DOT__ex_stage_u__DOT__src2));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
        = ((0x8000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
            ? (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1))
            : vlSelf->top__DOT__ex_stage_u__DOT__src1);
    vlSelf->top__DOT__dataNotOk = (((((((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                        | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                           & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk)))) 
                                       | (((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                           & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                          & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i))) 
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
                                            & (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenDelay2)))));
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data 
        = ((((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrw))) 
             & vlSelf->top__DOT__ls_u__DOT__csr_wr_data) 
            | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrs))) 
               & (vlSelf->top__DOT__ls_u__DOT__csr_wr_data 
                  | vlSelf->top__DOT__csrdata_ls))) 
           | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrc))) 
              & ((~ vlSelf->top__DOT__ls_u__DOT__csr_wr_data) 
                 & vlSelf->top__DOT__csrdata_ls)));
    VL_EXTEND_WI(65,1, __Vtemp35, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
        = ((vlSelf->top__DOT__ex_stage_u__DOT__src1 
            + vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin) 
           + (((QData)((IData)(__Vtemp35[1U])) << 0x20U) 
              | (QData)((IData)(__Vtemp35[0U]))));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow 
        = (((1U & (IData)((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                           >> 0x3fU))) == (1U & (IData)(
                                                        (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin 
                                                         >> 0x3fU)))) 
           & ((1U & (IData)((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                             >> 0x3fU))) != (1U & (IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                           >> 0x3fU)))));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero 
        = (1U & (~ (IData)((0U != vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o))));
    vlSelf->top__DOT__is_jump = (1U & (((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U) 
                                        | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U)) 
                                       | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x14U) 
                                          & ((0x400U 
                                              & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                              ? ((0x200U 
                                                  & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                                  ? 
                                                 ((0x100U 
                                                   & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                                   ? (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)
                                                   : 
                                                  (~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)))
                                                  : 
                                                 ((0x100U 
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
                                              : ((~ 
                                                  (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
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
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__mul_valid 
        = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__diffIn) 
            & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
               >> 5U)) & (~ (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                             >> 4U)));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__div_valid 
        = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__diffIn) 
            & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
               >> 5U)) & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                          >> 4U));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src 
        = ((0x2000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
            ? ((0x8000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                ? (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1))
                : vlSelf->top__DOT__ex_stage_u__DOT__src1)
            : (((QData)((IData)((((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1) 
                                  << 0x1fU) | ((0x40000000U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                            >> 1U)) 
                                                   << 0x1eU)) 
                                               | ((0x20000000U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                               >> 2U)) 
                                                      << 0x1dU)) 
                                                  | ((0x10000000U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                  >> 3U)) 
                                                         << 0x1cU)) 
                                                     | ((0x8000000U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                     >> 4U)) 
                                                            << 0x1bU)) 
                                                        | ((0x4000000U 
                                                            & ((IData)(
                                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                        >> 5U)) 
                                                               << 0x1aU)) 
                                                           | ((0x2000000U 
                                                               & ((IData)(
                                                                          (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                           >> 6U)) 
                                                                  << 0x19U)) 
                                                              | ((0x1000000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                              >> 7U)) 
                                                                     << 0x18U)) 
                                                                 | ((0x800000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 8U)) 
                                                                        << 0x17U)) 
                                                                    | ((0x400000U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 9U)) 
                                                                           << 0x16U)) 
                                                                       | ((0x200000U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0xaU)) 
                                                                              << 0x15U)) 
                                                                          | ((0x100000U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0xbU)) 
                                                                                << 0x14U)) 
                                                                             | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0xcU)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0xdU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0xeU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0xfU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x10U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x11U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x12U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x13U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x15U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x16U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x17U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x18U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x19U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x1aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x1fU)))))))))))))))))))))))))))))))))))) 
                << 0x20U) | (QData)((IData)((((IData)(
                                                      (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                       >> 0x20U)) 
                                              << 0x1fU) 
                                             | ((0x40000000U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                             >> 0x21U)) 
                                                    << 0x1eU)) 
                                                | ((0x20000000U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                >> 0x22U)) 
                                                       << 0x1dU)) 
                                                   | ((0x10000000U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                   >> 0x23U)) 
                                                          << 0x1cU)) 
                                                      | ((0x8000000U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                      >> 0x24U)) 
                                                             << 0x1bU)) 
                                                         | ((0x4000000U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                         >> 0x25U)) 
                                                                << 0x1aU)) 
                                                            | ((0x2000000U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                            >> 0x26U)) 
                                                                   << 0x19U)) 
                                                               | ((0x1000000U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                               >> 0x27U)) 
                                                                      << 0x18U)) 
                                                                  | ((0x800000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x28U)) 
                                                                         << 0x17U)) 
                                                                     | ((0x400000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x29U)) 
                                                                            << 0x16U)) 
                                                                        | ((0x200000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x2aU)) 
                                                                               << 0x15U)) 
                                                                           | ((0x100000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x2bU)) 
                                                                                << 0x14U)) 
                                                                              | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x2cU)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x2dU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x2eU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x2fU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x30U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x31U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x32U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x33U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x34U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x35U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x36U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x37U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x38U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x39U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x3aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x3bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x3cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x3dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x3eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
                                                                                >> 0x3fU))))))))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__id_flush = (1U & (((((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            | (IData)(vlSelf->top__DOT__fence_id)) 
                                           | (IData)(vlSelf->top__DOT__in_intr_ls)) 
                                          | (IData)(vlSelf->top__DOT__is_jump)) 
                                         | (IData)(vlSelf->top__DOT__in_trap_id)) 
                                        | (IData)(vlSelf->top__DOT__out_trap_id)));
    vlSelf->top__DOT__ex_flush = (1U & (((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                          | (IData)(vlSelf->top__DOT__in_intr_ls)) 
                                         | (IData)(vlSelf->top__DOT__ld_use_hazard)) 
                                        | (IData)(vlSelf->top__DOT__is_jump)));
    vlSelf->top__DOT__IF_u__DOT__pc_next_o = ((IData)(vlSelf->top__DOT__in_intr_ls)
                                               ? vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec
                                               : ((IData)(vlSelf->top__DOT__is_jump)
                                                   ? 
                                                  ((0x400000U 
                                                    & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                                    ? 
                                                   (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                                    + 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                         << 4U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                           >> 0x1cU))))
                                                    : 
                                                   ((((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                         << 4U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                           >> 0x1cU))) 
                                                    + 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                         << 4U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                           >> 0x1cU)))))
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__in_trap_id)
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__out_trap_id)
                                                     ? 
                                                    (4ULL 
                                                     + vlSelf->top__DOT__pc_new)
                                                     : vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec)
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__out_trap_id)
                                                     ? vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc
                                                     : 
                                                    (4ULL 
                                                     + vlSelf->top__DOT__pc_new)))));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n 
        = ((IData)(vlSelf->rst_n) & (~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__mul_valid)));
    vlSelf->top__DOT__ex_not_ok = (1U & ((~ (((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                              | ((1U 
                                                  == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                 & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit) 
                                                    | (~ (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i))))) 
                                             | ((6U 
                                                 == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk)))) 
                                         | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 5U) 
                                            & ((~ ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__resultValidReg_q) 
                                                   | (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q))) 
                                               | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_busy) 
                                                  | (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__div_valid))))));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
        = (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src 
           >> (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src2));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_set 
        = (1U & ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__mul_valid) 
                 & (~ (IData)(vlSelf->top__DOT__ex_flush))));
    vlSelf->top__DOT__cache_dut__DOT__diffAddr = ((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o) 
                                                  != (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch));
    vlSelf->top__DOT__if_stall_n = (1U & (~ (((((((IData)(vlSelf->top__DOT__fence_id) 
                                                  | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
                                                 & (~ (IData)(vlSelf->top__DOT__is_jump))) 
                                                | (IData)(vlSelf->top__DOT__ld_use_hazard)) 
                                               | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                              | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                             | (IData)(vlSelf->top__DOT__ex_not_ok))));
    vlSelf->top__DOT__ls_stall_n = (1U & (~ (((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                              | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                             | (IData)(vlSelf->top__DOT__ex_not_ok))));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res 
        = (((QData)((IData)((((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res) 
                              << 0x1fU) | ((0x40000000U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                        >> 1U)) 
                                               << 0x1eU)) 
                                           | ((0x20000000U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                           >> 2U)) 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                              >> 3U)) 
                                                     << 0x1cU)) 
                                                 | ((0x8000000U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                 >> 4U)) 
                                                        << 0x1bU)) 
                                                    | ((0x4000000U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                    >> 5U)) 
                                                           << 0x1aU)) 
                                                       | ((0x2000000U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                       >> 6U)) 
                                                              << 0x19U)) 
                                                          | ((0x1000000U 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                          >> 7U)) 
                                                                 << 0x18U)) 
                                                             | ((0x800000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                             >> 8U)) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 9U)) 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0xaU)) 
                                                                          << 0x15U)) 
                                                                      | ((0x100000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0xbU)) 
                                                                             << 0x14U)) 
                                                                         | ((0x80000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0xcU)) 
                                                                                << 0x13U)) 
                                                                            | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0xdU)) 
                                                                                << 0x12U)) 
                                                                               | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0xeU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0xfU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x10U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x11U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x12U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x13U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x15U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x16U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x17U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x18U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x19U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x1aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x1fU)))))))))))))))))))))))))))))))))))) 
            << 0x20U) | (QData)((IData)((((IData)((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                   >> 0x20U)) 
                                          << 0x1fU) 
                                         | ((0x40000000U 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                         >> 0x21U)) 
                                                << 0x1eU)) 
                                            | ((0x20000000U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                            >> 0x22U)) 
                                                   << 0x1dU)) 
                                               | ((0x10000000U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                               >> 0x23U)) 
                                                      << 0x1cU)) 
                                                  | ((0x8000000U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                  >> 0x24U)) 
                                                         << 0x1bU)) 
                                                     | ((0x4000000U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                     >> 0x25U)) 
                                                            << 0x1aU)) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                        >> 0x26U)) 
                                                               << 0x19U)) 
                                                           | ((0x1000000U 
                                                               & ((IData)(
                                                                          (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                           >> 0x27U)) 
                                                                  << 0x18U)) 
                                                              | ((0x800000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                              >> 0x28U)) 
                                                                     << 0x17U)) 
                                                                 | ((0x400000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x29U)) 
                                                                        << 0x16U)) 
                                                                    | ((0x200000U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x2aU)) 
                                                                           << 0x15U)) 
                                                                       | ((0x100000U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x2bU)) 
                                                                              << 0x14U)) 
                                                                          | ((0x80000U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x2cU)) 
                                                                                << 0x13U)) 
                                                                             | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x2dU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x2eU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x2fU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x30U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x31U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x32U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x33U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x34U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x35U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x36U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x37U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x38U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x39U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x3aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x3bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x3cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x3dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x3eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x3fU)))))))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_d 
        = ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_set) 
           | (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q) 
               & (~ ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q) 
                     | (IData)(vlSelf->top__DOT__ex_flush)))) 
              & (~ (IData)(vlSelf->top__DOT__ex_flush))));
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__cache_dut__DOT__diffAddr) 
                     << 9U) | (((0ULL != vlSelf->top__DOT__pc_new) 
                                << 8U) | (((IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit) 
                                           << 7U) | 
                                          (((IData)(vlSelf->top__DOT__cache_dut__DOT__uncachedOk) 
                                            << 6U) 
                                           | (((0U 
                                                == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state)) 
                                               << 5U) 
                                              | (((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->top__DOT__if_axi_r_last_i) 
                                                     << 3U) 
                                                    | (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))))))));
    vlSelf->top__DOT__cache_dut__DOT__cacheNexState 
        = Vtop__ConstPool__TABLE_b22aa1bc_0[__Vtableidx1];
    vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A 
        = (0x3fU & ((IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)
                     ? (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                >> 5U)) : ((IData)(vlSelf->top__DOT__if_stall_n)
                                            ? (IData)(
                                                      (vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                       >> 5U))
                                            : (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 5U)))));
    vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A 
        = (0x3fU & ((IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)
                     ? (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                >> 5U)) : ((IData)(vlSelf->top__DOT__if_stall_n)
                                            ? (IData)(
                                                      (vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                       >> 5U))
                                            : (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 5U)))));
    vlSelf->stall_n_diff = vlSelf->top__DOT__ls_stall_n;
    vlSelf->top__DOT__ls_u__DOT__csr_stall_n = ((IData)(vlSelf->top__DOT__in_intr_ls)
                                                 ? (IData)(vlSelf->top__DOT__if_stall_n)
                                                 : (IData)(vlSelf->top__DOT__ls_stall_n));
    vlSelf->top__DOT__Dcache_u__DOT__cacheNexState 
        = ((4U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
            ? ((2U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                ? ((1U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                    ? 1U : (((IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk) 
                             & (IData)(vlSelf->top__DOT__ls_stall_n))
                             ? 1U : 6U)) : ((1U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                             ? 0U : 
                                            ((IData)(vlSelf->top__DOT__Dcache_u__DOT__clean_OK)
                                              ? 0U : 4U)))
            : ((2U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                ? ((1U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                    ? ((IData)(vlSelf->top__DOT__ls_axi_r_last_i)
                        ? 7U : 3U) : ((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
                                       ? 3U : 2U)) : 
               ((1U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                 ? ((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                     ? 4U : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__uncached)
                              ? 6U : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)
                                       ? ((((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i) 
                                            & (IData)(vlSelf->top__DOT__ls_stall_n)) 
                                           | (((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i) 
                                               & (~ (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 0x20U)))) 
                                              & (~ (IData)(vlSelf->top__DOT__ls_stall_n))))
                                           ? 1U : 0U)
                                       : ((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i)
                                           ? (((IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 0x20U)) 
                                               & (IData)(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg))
                                               ? 1U
                                               : 2U)
                                           : ((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)
                                               ? 1U
                                               : 0U)))))
                 : ((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                     ? 4U : (((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i) 
                              & (IData)(vlSelf->top__DOT__ls_stall_n))
                              ? 1U : 0U)))));
    vlSelf->top__DOT__ls_sram_rd_data = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                          ? vlSelf->top__DOT__ls_axi_r_data_i
                                          : (((- (QData)((IData)(vlSelf->top__DOT__Dcache_u__DOT__way1Hit))) 
                                              & ((((((0U 
                                                      == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                     & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                                    & (IData)(vlSelf->top__DOT__ls_stall_n)) 
                                                   | (((1U 
                                                        == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                       & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                                      & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                                  | (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                              >> 4U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                               >> 3U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                               >> 3U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
                                                  : 0ULL)) 
                                             | ((- (QData)((IData)(vlSelf->top__DOT__Dcache_u__DOT__way2Hit))) 
                                                & ((((((0U 
                                                        == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                       & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                                      & (IData)(vlSelf->top__DOT__ls_stall_n)) 
                                                     | (((1U 
                                                          == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                         & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                                        & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                                    | (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 4U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                 >> 3U)))
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                 >> 3U)))
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
                                                    : 0ULL))));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift 
        = ((0x2000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
            ? ((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                ? ((0x8000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                    ? ((1U & (IData)((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                      >> 0x1fU))) ? 
                       (0x100000000ULL | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                          | (QData)((IData)(
                                                            (~ (IData)(
                                                                       ((0xffffffffffffffffULL 
                                                                         >> (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src2)) 
                                                                        >> 0x20U)))))))
                        : (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                           & (QData)((IData)(((0xffffffffffffffffULL 
                                               >> (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src2)) 
                                              >> 0x20U)))))
                    : (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                       | ((- (QData)((IData)((1U & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                            >> 0x3fU)))))) 
                          & (~ (0xffffffffffffffffULL 
                                >> (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src2))))))
                : ((0x8000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                    ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                       & (QData)((IData)(((0xffffffffffffffffULL 
                                           >> (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src2)) 
                                          >> 0x20U))))
                    : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res))
            : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res);
    if ((0x20U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) {
        vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b 
            = (0xffU & ((0x10U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                         ? ((8U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                             ? (IData)((vlSelf->top__DOT__ls_sram_rd_data 
                                        >> 0x38U)) : (IData)(
                                                             (vlSelf->top__DOT__ls_sram_rd_data 
                                                              >> 0x30U)))
                         : ((8U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                             ? (IData)((vlSelf->top__DOT__ls_sram_rd_data 
                                        >> 0x28U)) : (IData)(
                                                             (vlSelf->top__DOT__ls_sram_rd_data 
                                                              >> 0x20U)))));
        vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h 
            = (0xffffU & ((0x10U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                           ? (IData)((vlSelf->top__DOT__ls_sram_rd_data 
                                      >> 0x30U)) : (IData)(
                                                           (vlSelf->top__DOT__ls_sram_rd_data 
                                                            >> 0x20U))));
    } else {
        vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b 
            = (0xffU & ((0x10U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                         ? ((8U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                             ? (IData)((vlSelf->top__DOT__ls_sram_rd_data 
                                        >> 0x18U)) : (IData)(
                                                             (vlSelf->top__DOT__ls_sram_rd_data 
                                                              >> 0x10U)))
                         : ((8U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                             ? (IData)((vlSelf->top__DOT__ls_sram_rd_data 
                                        >> 8U)) : (IData)(vlSelf->top__DOT__ls_sram_rd_data))));
        vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h 
            = (0xffffU & ((0x10U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                           ? (IData)((vlSelf->top__DOT__ls_sram_rd_data 
                                      >> 0x10U)) : (IData)(vlSelf->top__DOT__ls_sram_rd_data)));
    }
    if ((0x20U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) {
            vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w 
                = (IData)((vlSelf->top__DOT__ls_sram_rd_data 
                           >> 0x20U));
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w 
            = (IData)(vlSelf->top__DOT__ls_sram_rd_data);
    }
    VL_EXTEND_WQ(65,64, __Vtemp37, vlSelf->top__DOT__ex_stage_u__DOT__src1);
    VL_EXTEND_WQ(65,64, __Vtemp38, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
    VL_ADD_W(3, __Vtemp39, __Vtemp37, __Vtemp38);
    VL_EXTEND_WI(65,1, __Vtemp40, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
    VL_ADD_W(3, __Vtemp41, __Vtemp39, __Vtemp40);
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
        = ((0x20U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
            ? ((0x10U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                ? ((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                    ? ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign)
                        ? (1ULL + (~ vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s))
                        : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s)
                    : (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign) 
                        ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_sign))
                        ? (1ULL + (~ (((QData)((IData)(
                                                       vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[0U])))))
                        : (((QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[0U])))))
                : ((0U == (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                 >> 2U))) ? (((QData)((IData)(
                                                              vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[0U])))
                    : (((QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2[2U])))))
            : ((0x2000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                ? ((0x1000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                    ? ((0x800000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                        ? (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                           & vlSelf->top__DOT__ex_stage_u__DOT__src2)
                        : (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                           | vlSelf->top__DOT__ex_stage_u__DOT__src2))
                    : ((0x800000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                        ? vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift
                        : (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                           ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)))
                : ((0x1000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                    ? ((0x800000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                        ? vlSelf->top__DOT__ex_stage_u__DOT__src2
                        : (QData)((IData)((1U & ((0x4000000U 
                                                  & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                                  ? 
                                                 ((1U 
                                                   & __Vtemp41[2U]) 
                                                  ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                                  : 
                                                 ((IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                           >> 0x3fU)) 
                                                  ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow)))))))
                    : ((0x800000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                        ? vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift
                        : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o))));
    __Vtemp45[0U] = (IData)(((((((((- (QData)((IData)(
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
                                       << 8U) | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b)))) 
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
                                        << 0x10U) | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h))))) 
                                | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu))) 
                                   & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h)))) 
                               | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw))) 
                                  & (((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w))))) 
                              | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu))) 
                                 & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w)))) 
                             | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld))) 
                                & vlSelf->top__DOT__ls_sram_rd_data)));
    __Vtemp45[1U] = (IData)((((((((((- (QData)((IData)(
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
                                        << 8U) | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b)))) 
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
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w))))) 
                               | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu))) 
                                  & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w)))) 
                              | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld))) 
                                 & vlSelf->top__DOT__ls_sram_rd_data)) 
                             >> 0x20U));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[0U] 
        = (IData)(vlSelf->top__DOT__csrdata_ls);
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[1U] 
        = (IData)((vlSelf->top__DOT__csrdata_ls >> 0x20U));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[2U] 
        = ((__Vtemp45[0U] << 1U) | (1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                          >> 2U)));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[3U] 
        = ((__Vtemp45[0U] >> 0x1fU) | (__Vtemp45[1U] 
                                       << 1U));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[4U] 
        = ((__Vtemp45[1U] >> 0x1fU) | ((IData)((((QData)((IData)(
                                                                 vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                      >> 3U)))) 
                                       << 1U));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[5U] 
        = (((IData)((((QData)((IData)(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                      << 0x3dU) | (((QData)((IData)(
                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                    << 0x1dU) | ((QData)((IData)(
                                                                 vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                 >> 3U)))) 
            >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                    << 0x3dU) | (((QData)((IData)(
                                                                  vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                  << 0x1dU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                    >> 3U))) 
                                  >> 0x20U)) << 1U));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[6U] 
        = (((IData)(((((QData)((IData)(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                       << 0x3dU) | (((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                     << 0x1dU) | ((QData)((IData)(
                                                                  vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                  >> 3U))) 
                     >> 0x20U)) >> 0x1fU) | ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                              << 0x1eU) 
                                             | (0x3ffffffeU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[7U] 
        = ((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                  >> 2U)) | ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U] 
                              << 0x1eU) | (0x3ffffffeU 
                                           & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                              >> 2U))));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[8U] 
        = ((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U] 
                  >> 2U)) | ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U] 
                              << 0x1eU) | (0x3ffffffeU 
                                           & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U] 
                                              >> 2U))));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[9U] 
        = (1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U] 
                 >> 2U));
    vlSelf->top__DOT__alures_ex = ((0x8000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                    ? (((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                    : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout);
    vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i 
        = (((3U == (0x7fU & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                              << 4U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                        >> 0x1cU)))) 
            | (8U == (0x1fU & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                << 2U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                          >> 0x1eU)))))
            ? (IData)(vlSelf->top__DOT__alures_ex) : 0U);
    if ((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
        vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A 
            = (0x3fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt));
        vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A 
            = (0x3fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt));
    } else {
        vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A 
            = (0x3fU & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)
                         ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                    >> 5U)) : ((IData)(vlSelf->top__DOT__ls_stall_n)
                                                ? (vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i 
                                                   >> 5U)
                                                : (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 5U)))));
        vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A 
            = (0x3fU & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)
                         ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                    >> 5U)) : ((IData)(vlSelf->top__DOT__ls_stall_n)
                                                ? (vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i 
                                                   >> 5U)
                                                : (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 5U)))));
    }
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n 
        = vlSelf->__VinpClk__TOP__top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst_n = 0;
    vlSelf->pc_diff = 0;
    vlSelf->pc_decoding = 0;
    vlSelf->instr_diff = 0;
    vlSelf->regA0 = 0;
    vlSelf->stall_n_diff = 0;
    vlSelf->axi_ar_ready_i = 0;
    vlSelf->axi_ar_valid_o = 0;
    vlSelf->axi_ar_addr_o = 0;
    vlSelf->axi_ar_prot_o = 0;
    vlSelf->axi_ar_id_o = 0;
    vlSelf->axi_ar_user_o = 0;
    vlSelf->axi_ar_len_o = 0;
    vlSelf->axi_ar_size_o = 0;
    vlSelf->axi_ar_burst_o = 0;
    vlSelf->axi_ar_lock_o = 0;
    vlSelf->axi_ar_cache_o = 0;
    vlSelf->axi_ar_qos_o = 0;
    vlSelf->axi_ar_region_o = 0;
    vlSelf->axi_r_ready_o = 0;
    vlSelf->axi_r_valid_i = 0;
    vlSelf->axi_r_resp_i = 0;
    vlSelf->axi_r_data_i = 0;
    vlSelf->axi_r_last_i = 0;
    vlSelf->axi_r_id_i = 0;
    vlSelf->axi_r_user_i = 0;
    vlSelf->axi_aw_ready_i = 0;
    vlSelf->axi_aw_valid_o = 0;
    vlSelf->axi_aw_addr_o = 0;
    vlSelf->axi_aw_prot_o = 0;
    vlSelf->axi_aw_id_o = 0;
    vlSelf->axi_aw_user_o = 0;
    vlSelf->axi_aw_len_o = 0;
    vlSelf->axi_aw_size_o = 0;
    vlSelf->axi_aw_burst_o = 0;
    vlSelf->axi_aw_lock_o = 0;
    vlSelf->axi_aw_cache_o = 0;
    vlSelf->axi_aw_qos_o = 0;
    vlSelf->axi_aw_region_o = 0;
    vlSelf->axi_w_ready_i = 0;
    vlSelf->axi_w_valid_o = 0;
    vlSelf->axi_w_data_o = 0;
    vlSelf->axi_w_strb_o = 0;
    vlSelf->axi_w_last_o = 0;
    vlSelf->axi_w_user_o = 0;
    vlSelf->axi_b_ready_o = 0;
    vlSelf->axi_b_valid_i = 0;
    vlSelf->axi_b_resp_i = 0;
    vlSelf->axi_b_id_i = 0;
    vlSelf->axi_b_user_i = 0;
    vlSelf->top__DOT__axi_mmio_ar_valid_o = 0;
    vlSelf->top__DOT__axi_mmio_r_last_i = 0;
    vlSelf->top__DOT__axi_mmio_r_id_i = 0;
    vlSelf->top__DOT__axi_mmio_r_user_i = 0;
    vlSelf->top__DOT__axi_mmio_aw_valid_o = 0;
    vlSelf->top__DOT__axi_mmio_w_valid_o = 0;
    vlSelf->top__DOT__axi_mmio_b_ready_o = 0;
    vlSelf->top__DOT__axi_mmio_b_id_i = 0;
    vlSelf->top__DOT__axi_mmio_b_user_i = 0;
    vlSelf->top__DOT__if_axi_ar_region_o = 0;
    vlSelf->top__DOT__if_axi_r_last_i = 0;
    vlSelf->top__DOT__if_axi_r_user_i = 0;
    vlSelf->top__DOT__ls_axi_w_data_o = 0;
    vlSelf->top__DOT__ls_axi_w_strb_o = 0;
    vlSelf->top__DOT__ls_axi_ar_region_o = 0;
    vlSelf->top__DOT__ls_axi_r_data_i = 0;
    vlSelf->top__DOT__ls_axi_r_last_i = 0;
    vlSelf->top__DOT__ls_axi_r_user_i = 0;
    vlSelf->top__DOT__pc_next = 0;
    vlSelf->top__DOT__pc_new = 0;
    vlSelf->top__DOT__is_jump = 0;
    vlSelf->top__DOT__if_stall_n = 0;
    vlSelf->top__DOT__if_instr_valid = 0;
    vlSelf->top__DOT__sram_data_valid = 0;
    vlSelf->top__DOT__sram_rdata = 0;
    vlSelf->top__DOT__src1sel_id = 0;
    vlSelf->top__DOT__src2sel_id = 0;
    vlSelf->top__DOT__aluctr_id = 0;
    vlSelf->top__DOT__is_brc_id = 0;
    vlSelf->top__DOT__is_jal_id = 0;
    vlSelf->top__DOT__is_jalr_id = 0;
    vlSelf->top__DOT__wben_id = 0;
    vlSelf->top__DOT__rs1_idx_id = 0;
    vlSelf->top__DOT__rs2_idx_id = 0;
    vlSelf->top__DOT__DivEn_id = 0;
    vlSelf->top__DOT__DivSel_id = 0;
    vlSelf->top__DOT__in_trap_id = 0;
    vlSelf->top__DOT__out_trap_id = 0;
    vlSelf->top__DOT__trap_id = 0;
    vlSelf->top__DOT__ld_use_hazard = 0;
    vlSelf->top__DOT__id_flush = 0;
    vlSelf->top__DOT__alures_ex = 0;
    vlSelf->top__DOT__rs1_sel = 0;
    vlSelf->top__DOT__rs2_sel = 0;
    vlSelf->top__DOT__ex_flush = 0;
    vlSelf->top__DOT__ex_not_ok = 0;
    vlSelf->top__DOT__csrdata_ls = 0;
    vlSelf->top__DOT__ls_stall_n = 0;
    vlSelf->top__DOT__ls_sram_rd_data_valid = 0;
    vlSelf->top__DOT__ls_sram_wr_data_ok = 0;
    vlSelf->top__DOT__ls_sram_rd_data = 0;
    vlSelf->top__DOT__wb_data = 0;
    vlSelf->top__DOT__clint_axi_arvalid = 0;
    vlSelf->top__DOT__clint_axi_awvalid = 0;
    vlSelf->top__DOT__clint_axi_wdata = 0;
    vlSelf->top__DOT__clint_axi_wstrb = 0;
    vlSelf->top__DOT__clint_axi_wvalid = 0;
    vlSelf->top__DOT__clint_axi_bready = 0;
    vlSelf->top__DOT__rw_valid_i = 0;
    vlSelf->top__DOT__dataValid_o = 0;
    vlSelf->top__DOT__fence_id = 0;
    vlSelf->top__DOT__in_intr_ls = 0;
    vlSelf->top__DOT__dataNotOk = 0;
    vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i = 0;
    vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i = 0;
    vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i = 0;
    vlSelf->top__DOT__DcacheRdValid = 0;
    vlSelf->top__DOT__DcacheWrValid = 0;
    vlSelf->top__DOT__DcacheRdAddr = 0;
    vlSelf->top__DOT__DcacheWrAddr = 0;
    vlSelf->top__DOT__lsAxiRdDataVAlid = 0;
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready = 0;
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready = 0;
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid = 0;
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr = 0;
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size = 0;
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready = 0;
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid = 0;
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data = 0;
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last = 0;
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id = 0;
    vlSelf->top__DOT__IF_u__DOT__pc_next_o = 0;
    vlSelf->top__DOT__cache_dut__DOT__cacheCurState = 0;
    vlSelf->top__DOT__cache_dut__DOT__cacheNexState = 0;
    vlSelf->top__DOT__cache_dut__DOT__cacheHit = 0;
    vlSelf->top__DOT__cache_dut__DOT__way1Hit = 0;
    vlSelf->top__DOT__cache_dut__DOT__way2Hit = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__cache_dut__DOT__dataWay1_1);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__cache_dut__DOT__dataWay1_2);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__cache_dut__DOT__dataWay2_1);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__cache_dut__DOT__dataWay2_2);
    vlSelf->top__DOT__cache_dut__DOT__wenWay1 = 0;
    vlSelf->top__DOT__cache_dut__DOT__wenWay2 = 0;
    vlSelf->top__DOT__cache_dut__DOT__uncached = 0;
    vlSelf->top__DOT__cache_dut__DOT__uncachedOk = 0;
    vlSelf->top__DOT__cache_dut__DOT__diffAddr = 0;
    vlSelf->top__DOT__cache_dut__DOT__reqLatch = 0;
    vlSelf->top__DOT__cache_dut__DOT__validArray1 = 0;
    vlSelf->top__DOT__cache_dut__DOT__validArray2 = 0;
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->top__DOT__cache_dut__DOT__tagArray1[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->top__DOT__cache_dut__DOT__tagArray2[__Vi0] = 0;
    }
    vlSelf->top__DOT__cache_dut__DOT__validWay1_q = 0;
    vlSelf->top__DOT__cache_dut__DOT__validWay2_q = 0;
    VL_ZERO_RESET_W(256, vlSelf->top__DOT__cache_dut__DOT__way1Data);
    VL_ZERO_RESET_W(256, vlSelf->top__DOT__cache_dut__DOT__way2Data);
    vlSelf->top__DOT__cache_dut__DOT__randomBit = 0;
    vlSelf->top__DOT__cache_dut__DOT__missFlag = 0;
    vlSelf->top__DOT__cache_dut__DOT__rdCnt = 0;
    VL_ZERO_RESET_W(256, vlSelf->top__DOT__cache_dut__DOT__rdBuffer);
    vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A = 0;
    vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN = 0;
    vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A = 0;
    vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN = 0;
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram[__Vi0]);
    }
    vlSelf->top__DOT__axi_icache_dut__DOT__r_state = 0;
    vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next = 0;
    vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg = 0;
    VL_ZERO_RESET_W(96, vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout);
    vlSelf->top__DOT__ID_u__DOT__ext_op = 0;
    vlSelf->top__DOT__ID_u__DOT__imm = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[__Vi0] = 0;
    }
    VL_ZERO_RESET_W(316, vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout);
    vlSelf->top__DOT__ex_stage_u__DOT__src1 = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__src2 = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__rs1 = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__rs2 = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src1Reg = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2Reg = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__diffIn = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__mul_valid = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__div_valid = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src2 = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__stateReg = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__resultValidReg_q = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul_signed = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_hi_src1 = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_hi_src2 = 0;
    VL_ZERO_RESET_W(130, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2);
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_set = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_d = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q = 0;
    VL_ZERO_RESET_W(264, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout);
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_type_r = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_N_r = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_P_r = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg);
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_cnt = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_busy = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_sign = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__r_64 = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres = 0;
    vlSelf->top__DOT__forwarding_u__DOT__rd_wb = 0;
    vlSelf->top__DOT__forwarding_u__DOT__reg_wben = 0;
    vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx = 0;
    VL_ZERO_RESET_W(227, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
    vlSelf->top__DOT__ls_u__DOT__csr_wr_data = 0;
    vlSelf->top__DOT__ls_u__DOT__csr_stall_n = 0;
    vlSelf->top__DOT__ls_u__DOT__timr_int = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__commitPC = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrw = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrs = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrc = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bresp = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_araddr = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__aw_en = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__reg_data_out = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtime = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimeWrEn = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmpWrEn = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__slv_reg_wren = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__byte_index = 0;
    vlSelf->top__DOT__Dcache_u__DOT__cacheCurState = 0;
    vlSelf->top__DOT__Dcache_u__DOT__cacheNexState = 0;
    vlSelf->top__DOT__Dcache_u__DOT__cacheHit = 0;
    vlSelf->top__DOT__Dcache_u__DOT__way1Hit = 0;
    vlSelf->top__DOT__Dcache_u__DOT__way2Hit = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2);
    vlSelf->top__DOT__Dcache_u__DOT__wenWay1 = 0;
    vlSelf->top__DOT__Dcache_u__DOT__wenWay2 = 0;
    vlSelf->top__DOT__Dcache_u__DOT__uncached = 0;
    vlSelf->top__DOT__Dcache_u__DOT__reqLatch = 0;
    vlSelf->top__DOT__Dcache_u__DOT__validArray1 = 0;
    vlSelf->top__DOT__Dcache_u__DOT__validArray2 = 0;
    vlSelf->top__DOT__Dcache_u__DOT__bitValid1_d = 0;
    vlSelf->top__DOT__Dcache_u__DOT__bitValid2_d = 0;
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->top__DOT__Dcache_u__DOT__tagArray1[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->top__DOT__Dcache_u__DOT__tagArray2[__Vi0] = 0;
    }
    vlSelf->top__DOT__Dcache_u__DOT__tagArray1_d = 0;
    vlSelf->top__DOT__Dcache_u__DOT__tagArray2_d = 0;
    vlSelf->top__DOT__Dcache_u__DOT__validWay1_q = 0;
    vlSelf->top__DOT__Dcache_u__DOT__validWay2_q = 0;
    vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay = 0;
    VL_ZERO_RESET_W(256, vlSelf->top__DOT__Dcache_u__DOT__way1Data);
    VL_ZERO_RESET_W(256, vlSelf->top__DOT__Dcache_u__DOT__way2Data);
    vlSelf->top__DOT__Dcache_u__DOT__randomBit = 0;
    vlSelf->top__DOT__Dcache_u__DOT__missFlag = 0;
    vlSelf->top__DOT__Dcache_u__DOT__rdCnt = 0;
    VL_ZERO_RESET_W(256, vlSelf->top__DOT__Dcache_u__DOT__rdBuffer);
    vlSelf->top__DOT__Dcache_u__DOT__wenDelay1 = 0;
    vlSelf->top__DOT__Dcache_u__DOT__wenDelay2 = 0;
    vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch = 0;
    vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch = 0;
    vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 = 0;
    vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 = 0;
    vlSelf->top__DOT__Dcache_u__DOT__wrLow = 0;
    vlSelf->top__DOT__Dcache_u__DOT__wrHigh = 0;
    vlSelf->top__DOT__Dcache_u__DOT__storeData = 0;
    vlSelf->top__DOT__Dcache_u__DOT__storeMask = 0;
    vlSelf->top__DOT__Dcache_u__DOT__sramMask = 0;
    vlSelf->top__DOT__Dcache_u__DOT__replaceWay = 0;
    vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg = 0;
    vlSelf->top__DOT__Dcache_u__DOT__uncache = 0;
    vlSelf->top__DOT__Dcache_u__DOT__axiWrBusy = 0;
    vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk = 0;
    vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk = 0;
    vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk = 0;
    vlSelf->top__DOT__Dcache_u__DOT__temp = 0;
    vlSelf->top__DOT__Dcache_u__DOT__clean_OK = 0;
    vlSelf->top__DOT__Dcache_u__DOT__cleanCnt = 0;
    vlSelf->top__DOT__Dcache_u__DOT__cleanWrValid = 0;
    vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay = 0;
    vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A = 0;
    vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A = 0;
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram[__Vi0]);
    }
    vlSelf->top__DOT__axi_ls_u__DOT__w_state = 0;
    vlSelf->top__DOT__axi_ls_u__DOT__w_state_next = 0;
    vlSelf->top__DOT__axi_ls_u__DOT__trans_ok = 0;
    vlSelf->top__DOT__axi_ls_u__DOT__wrLast = 0;
    vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg = 0;
    VL_ZERO_RESET_W(256, vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg);
    vlSelf->top__DOT__axi_ls_u__DOT__wrMask_reg = 0;
    vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg = 0;
    vlSelf->top__DOT__axi_ls_u__DOT__storeLenth_reg = 0;
    vlSelf->top__DOT__axi_ls_u__DOT__wrCnt = 0;
    vlSelf->top__DOT__axi_ls_u__DOT__r_state = 0;
    vlSelf->top__DOT__axi_ls_u__DOT__r_state_next = 0;
    vlSelf->top__DOT__axi_ls_u__DOT__rdAddr_reg = 0;
    VL_ZERO_RESET_W(289, vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout);
    VL_ZERO_RESET_W(289, vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din);
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0 = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1 = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2 = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3 = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en = 0;
    vlSelf->__Vdly__top__DOT__cache_dut__DOT__rdCnt = 0;
    vlSelf->__Vdly__top__DOT__Dcache_u__DOT__rdCnt = 0;
    vlSelf->__Vdly__top__DOT__Dcache_u__DOT__cleanCnt = 0;
    vlSelf->__Vdlyvdim0__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0 = 0;
    vlSelf->__Vdlyvval__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0 = 0;
    vlSelf->__Vdlyvset__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0 = 0;
    vlSelf->__VinpClk__TOP__top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n = 0;
    vlSelf->__Vchglast__TOP__top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n = 0;
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
