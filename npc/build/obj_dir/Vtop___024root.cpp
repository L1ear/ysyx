// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void ebreak();

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__ID_u__DOT__regfile_u__DOT__ebreak_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__ID_u__DOT__regfile_u__DOT__ebreak_TOP\n"); );
    // Body
    ebreak();
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__ID_u__DOT__regfile_u__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__ID_u__DOT__regfile_u__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {0, 31};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__13__PROF__Dcache__l571(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__13__PROF__Dcache__l571\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT__axiWrBusy = vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg;
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__14__PROF__divTop__l130(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__14__PROF__divTop__l130\n"); );
    // Body
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__r_64 
        = ((((QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U])) 
             << 0x21U) | (((QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U])) 
                           << 1U) | ((QData)((IData)(
                                                     vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U])) 
                                     >> 0x1fU))) + 
           ((0x40000000U & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U])
             ? vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_P_r
             : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_N_r));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__15__PROF__axi_dcache__l295(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__15__PROF__axi_dcache__l295\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__16__PROF__axi_dcache__l296(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__16__PROF__axi_dcache__l296\n"); );
    // Body
    vlSelf->top__DOT__ls_axi_w_strb_o = vlSelf->top__DOT__axi_ls_u__DOT__wrMask_reg;
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__17__PROF__Icache__l204(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__17__PROF__Icache__l204\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__18__PROF__Icache__l205(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__18__PROF__Icache__l205\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__19__PROF__mul64__l96(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__19__PROF__mul64__l96\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<5>/*159:0*/ __Vtemp7;
    VlWide<5>/*159:0*/ __Vtemp12;
    VlWide<5>/*159:0*/ __Vtemp13;
    VlWide<5>/*159:0*/ __Vtemp18;
    VlWide<5>/*159:0*/ __Vtemp19;
    VlWide<5>/*159:0*/ __Vtemp23;
    VlWide<5>/*159:0*/ __Vtemp24;
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__20__PROF__divTop__l141(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__20__PROF__divTop__l141\n"); );
    // Body
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s 
        = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
            >> 0x1fU) ? ((((QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U]))) 
                         + vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_P_r)
            : (((QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U]))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__21__PROF__clint__l302(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__21__PROF__clint__l302\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__timr_int = (vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtime 
                                             >= vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__22__PROF__top__l297(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__22__PROF__top__l297\n"); );
    // Body
    vlSelf->pc_diff = (((QData)((IData)(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                        << 0x3fU) | (((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                      << 0x1fU) | ((QData)((IData)(
                                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                   >> 1U)));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__23__PROF__top__l299(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__23__PROF__top__l299\n"); );
    // Body
    vlSelf->instr_diff = ((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                           << 0x1fU) | (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                        >> 1U));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__24__PROF__axi_crossbar__l296(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__24__PROF__axi_crossbar__l296\n"); );
    // Body
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready 
        = ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
            ? (3U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
            : (3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state)));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__25__PROF__axi_crossbar__l284(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__25__PROF__axi_crossbar__l284\n"); );
    // Body
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid 
        = ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
            ? (1U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
            : (1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state)));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__26__PROF__Dcache__l298(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__26__PROF__Dcache__l298\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__27__PROF__Dcache__l299(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__27__PROF__Dcache__l299\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__28__PROF__Icache__l194(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__28__PROF__Icache__l194\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__29__PROF__Icache__l195(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__29__PROF__Icache__l195\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__30__PROF__axi_crossbar__l285(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__30__PROF__axi_crossbar__l285\n"); );
    // Body
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
        = ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
            ? vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg
            : vlSelf->top__DOT__axi_ls_u__DOT__rdAddr_reg);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__31__PROF__WB_stage__l15(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__31__PROF__WB_stage__l15\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__32__PROF__axi_crossbar__l316(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__32__PROF__axi_crossbar__l316\n"); );
    // Body
    vlSelf->axi_aw_addr_o = (((0xaU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                        >> 0x1cU)))) 
                              | (2U == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                        >> 0x18U)))))
                              ? 0ULL : vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__33__PROF__axi_crossbar__l318(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__33__PROF__axi_crossbar__l318\n"); );
    // Body
    vlSelf->axi_aw_id_o = (((0xaU == (0xfU & (IData)(
                                                     (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                      >> 0x1cU)))) 
                            | (2U == (0xfU & (IData)(
                                                     (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                      >> 0x18U)))))
                            ? 0U : 1U);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__34__PROF__axi_crossbar__l322(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__34__PROF__axi_crossbar__l322\n"); );
    // Body
    vlSelf->axi_aw_burst_o = (((0xaU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x1cU)))) 
                               | (2U == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x18U)))))
                               ? 0U : 1U);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__35__PROF__axi_crossbar__l324(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__35__PROF__axi_crossbar__l324\n"); );
    // Body
    vlSelf->axi_aw_cache_o = (((0xaU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x1cU)))) 
                               | (2U == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x18U)))))
                               ? 0U : 0xfU);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__36__PROF__Dcache__l471(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__36__PROF__Dcache__l471\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT__wrLow = (IData)(
                                                     (0x100000000ULL 
                                                      == 
                                                      (0x100000010ULL 
                                                       & vlSelf->top__DOT__Dcache_u__DOT__reqLatch)));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__37__PROF__Dcache__l472(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__37__PROF__Dcache__l472\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT__wrHigh = (IData)(
                                                      (0x100000010ULL 
                                                       == 
                                                       (0x100000010ULL 
                                                        & vlSelf->top__DOT__Dcache_u__DOT__reqLatch)));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__38__PROF__axi_crossbar__l321(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__38__PROF__axi_crossbar__l321\n"); );
    // Body
    vlSelf->axi_aw_size_o = (((0xaU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                        >> 0x1cU)))) 
                              | (2U == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                        >> 0x18U)))))
                              ? 0U : (7U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg)));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__39__PROF__Dcache__l477(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__39__PROF__Dcache__l477\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__40__PROF__L_S_stage__l113(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__40__PROF__L_S_stage__l113\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__41__PROF__Icache__l265(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__41__PROF__Icache__l265\n"); );
    // Body
    vlSelf->top__DOT__rw_valid_i = ((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state)));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__42__PROF__axi_crossbar__l327(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__42__PROF__axi_crossbar__l327\n"); );
    // Body
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready 
        = ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                     >> 0x1cU)))) ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready)
            : ((2U == (0xfU & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                       >> 0x18U))))
                ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready)
                : (IData)(vlSelf->axi_w_ready_i)));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__43__PROF__lsu__l67(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__43__PROF__lsu__l67\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__44__PROF__lsu__l68(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__44__PROF__lsu__l68\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu = 
        ((3U == (0x7fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                          >> 3U))) & (5U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__45__PROF__lsu__l69(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__45__PROF__lsu__l69\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__46__PROF__lsu__l70(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__46__PROF__lsu__l70\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu = 
        ((3U == (0x7fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                          >> 3U))) & (6U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__47__PROF__lsu__l71(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__47__PROF__lsu__l71\n"); );
    // Body
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
}

extern const VlUnpacked<CData/*7:0*/, 16> Vtop__ConstPool__TABLE_b95eb736_0;
extern const VlUnpacked<CData/*2:0*/, 16> Vtop__ConstPool__TABLE_0ca066a7_0;

VL_INLINE_OPT void Vtop___024root___settle__TOP__48__PROF__lsu__l216(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__48__PROF__lsu__l216\n"); );
    // Variables
    CData/*3:0*/ __Vtableidx3;
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__49__PROF__CSR__l36(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__49__PROF__CSR__l36\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrw 
        = ((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                         >> 0xfU))) | (5U == (7U & 
                                              (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xfU))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__50__PROF__CSR__l37(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__50__PROF__CSR__l37\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrs 
        = ((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                         >> 0xfU))) | (6U == (7U & 
                                              (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xfU))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__51__PROF__CSR__l38(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__51__PROF__CSR__l38\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrc 
        = ((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                         >> 0xfU))) | (7U == (7U & 
                                              (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xfU))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__52__PROF__top__l922(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__52__PROF__top__l922\n"); );
    // Body
    vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i 
        = ((8U == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                            >> 5U))) | (3U == (0x7fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 3U))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__53__PROF__Dcache__l269(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__53__PROF__Dcache__l269\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__54__PROF__Dcache__l268(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__54__PROF__Dcache__l268\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__55__PROF__regfile__l29(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__55__PROF__regfile__l29\n"); );
    // Body
    vlSelf->regA0 = vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
        [0xaU];
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__56__PROF__top__l943(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__56__PROF__top__l943\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__57__PROF__axi_crossbar__l315(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__57__PROF__axi_crossbar__l315\n"); );
    // Body
    vlSelf->axi_aw_valid_o = (((0xaU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x1cU)))) 
                               | (2U == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x18U)))))
                               ? 0U : (IData)((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__58__PROF__axi_crossbar__l320(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__58__PROF__axi_crossbar__l320\n"); );
    // Body
    vlSelf->axi_aw_len_o = (((0xaU == (0xfU & (IData)(
                                                      (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                       >> 0x1cU)))) 
                             | (2U == (0xfU & (IData)(
                                                      (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                       >> 0x18U)))))
                             ? 0U : ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? 0U : 3U));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__59__PROF__axi_crossbar__l328(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__59__PROF__axi_crossbar__l328\n"); );
    // Body
    vlSelf->axi_w_valid_o = (((0xaU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                        >> 0x1cU)))) 
                              | (2U == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                        >> 0x18U)))))
                              ? 0U : (IData)((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__60__PROF__axi_crossbar__l333(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__60__PROF__axi_crossbar__l333\n"); );
    // Body
    vlSelf->axi_b_ready_o = (((0xaU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                        >> 0x1cU)))) 
                              | (2U == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                        >> 0x18U)))))
                              ? 0U : (IData)((2U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__61__PROF__axi_crossbar__l359(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__61__PROF__axi_crossbar__l359\n"); );
    // Body
    vlSelf->top__DOT__axi_mmio_aw_valid_o = (((0xaU 
                                               != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x1cU)))) 
                                              | (2U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x18U)))))
                                              ? 0U : (IData)(
                                                             (1U 
                                                              == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__62__PROF__axi_crossbar__l371(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__62__PROF__axi_crossbar__l371\n"); );
    // Body
    vlSelf->top__DOT__axi_mmio_w_valid_o = (((0xaU 
                                              != (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x1cU)))) 
                                             | (2U 
                                                == 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x18U)))))
                                             ? 0U : (IData)(
                                                            (3U 
                                                             == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__63__PROF__axi_crossbar__l376(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__63__PROF__axi_crossbar__l376\n"); );
    // Body
    vlSelf->top__DOT__axi_mmio_b_ready_o = (((0xaU 
                                              != (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x1cU)))) 
                                             | (2U 
                                                == 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x18U)))))
                                             ? 0U : (IData)(
                                                            (2U 
                                                             == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__64__PROF__axi_crossbar__l406(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__64__PROF__axi_crossbar__l406\n"); );
    // Body
    vlSelf->top__DOT__clint_axi_awvalid = ((2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x18U))))
                                            ? (IData)(
                                                      (1U 
                                                       == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)))
                                            : 0U);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__65__PROF__axi_crossbar__l413(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__65__PROF__axi_crossbar__l413\n"); );
    // Body
    vlSelf->top__DOT__clint_axi_bready = ((2U == (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x18U))))
                                           ? (IData)(
                                                     (2U 
                                                      == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)))
                                           : 0U);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__66__PROF__top__l944(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__66__PROF__top__l944\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__67__PROF__mulTop__l59(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__67__PROF__mulTop__l59\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__68__PROF__Dcache__l347(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__68__PROF__Dcache__l347\n"); );
    // Body
    vlSelf->top__DOT__DcacheRdValid = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                        ? (((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                            & (~ (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 0x20U)))) 
                                           & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk)))
                                        : ((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                           & (0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__69__PROF__axi_dcache__l171(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__69__PROF__axi_dcache__l171\n"); );
    // Body
    vlSelf->top__DOT__axi_ls_u__DOT__wrLast = ((3U 
                                                == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
                                               & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt) 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__storeLenth_reg))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__70__PROF__axi_crossbar__l410(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__70__PROF__axi_crossbar__l410\n"); );
    // Body
    vlSelf->top__DOT__clint_axi_wvalid = ((2U == (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x18U))))
                                           ? (IData)(
                                                     (3U 
                                                      == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)))
                                           : 0U);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__71__PROF__top__l921(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__71__PROF__top__l921\n"); );
    // Body
    vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i 
        = ((3U == (0x7fU & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                             << 4U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                       >> 0x1cU)))) 
           | (8U == (0x1fU & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                               << 2U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                         >> 0x1eU)))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__72__PROF__ALU__l223(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__72__PROF__ALU__l223\n"); );
    // Body
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin 
        = (1U & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                  >> 0x18U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                               >> 0x1aU)));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__73__PROF__Dcache__l657(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__73__PROF__Dcache__l657\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__74__PROF__forwarding__l52(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__74__PROF__forwarding__l52\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__75__PROF__forwarding__l41(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__75__PROF__forwarding__l41\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__76__PROF__top__l298(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__76__PROF__top__l298\n"); );
    // Body
    vlSelf->pc_decoding = (((QData)((IData)(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__77__PROF__decoder__l32(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__77__PROF__decoder__l32\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__78__PROF__decoder__l32(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__78__PROF__decoder__l32\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__79__PROF__decoder__l32(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__79__PROF__decoder__l32\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__80__PROF__decoder__l32(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__80__PROF__decoder__l32\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__81__PROF__decoder__l32(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__81__PROF__decoder__l32\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__82__PROF__decoder__l32(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__82__PROF__decoder__l32\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__83__PROF__decoder__l32(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__83__PROF__decoder__l32\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__84__PROF__decoder__l32(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__84__PROF__decoder__l32\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__85__PROF__decoder__l32(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__85__PROF__decoder__l32\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__86__PROF__decoder__l32(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__86__PROF__decoder__l32\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__87__PROF__decoder__l32(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__87__PROF__decoder__l32\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__88__PROF__decoder__l32(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__88__PROF__decoder__l32\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__89__PROF__decoder__l32(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__89__PROF__decoder__l32\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__90__PROF__decoder__l32(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__90__PROF__decoder__l32\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__91__PROF__hazard_detect__l13(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__91__PROF__hazard_detect__l13\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__92__PROF__decoder__l32(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__92__PROF__decoder__l32\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__93__PROF__decoder__l32(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__93__PROF__decoder__l32\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__94__PROF__Icache__l56(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__94__PROF__Icache__l56\n"); );
    // Body
    vlSelf->top__DOT__cache_dut__DOT__uncached = ((0ULL 
                                                   != vlSelf->top__DOT__pc_new) 
                                                  & (3U 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                 >> 0x1cU)))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__95__PROF__axi_crossbar__l329(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__95__PROF__axi_crossbar__l329\n"); );
    // Body
    vlSelf->axi_w_data_o = (((0xaU == (0xfU & (IData)(
                                                      (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                       >> 0x1cU)))) 
                             | (2U == (0xfU & (IData)(
                                                      (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                       >> 0x18U)))))
                             ? 0ULL : vlSelf->top__DOT__ls_axi_w_data_o);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__96__PROF__axi_crossbar__l408(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__96__PROF__axi_crossbar__l408\n"); );
    // Body
    vlSelf->top__DOT__clint_axi_wdata = ((2U == (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x18U))))
                                          ? vlSelf->top__DOT__ls_axi_w_data_o
                                          : 0ULL);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__97__PROF__axi_crossbar__l330(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__97__PROF__axi_crossbar__l330\n"); );
    // Body
    vlSelf->axi_w_strb_o = (((0xaU == (0xfU & (IData)(
                                                      (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                       >> 0x1cU)))) 
                             | (2U == (0xfU & (IData)(
                                                      (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                       >> 0x18U)))))
                             ? 0U : (0xffU & (IData)(vlSelf->top__DOT__ls_axi_w_strb_o)));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__98__PROF__axi_crossbar__l409(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__98__PROF__axi_crossbar__l409\n"); );
    // Body
    vlSelf->top__DOT__clint_axi_wstrb = ((2U == (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x18U))))
                                          ? (0xffU 
                                             & (IData)(vlSelf->top__DOT__ls_axi_w_strb_o))
                                          : 0U);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__99__PROF__CSR__l159(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__99__PROF__CSR__l159\n"); );
    // Body
    vlSelf->top__DOT__in_intr_ls = (1U & (((IData)(
                                                   (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip 
                                                    >> 7U)) 
                                           | (IData)(vlSelf->top__DOT__ls_u__DOT__timr_int)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                     >> 3U))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__100__PROF__axi_crossbar__l340(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__100__PROF__axi_crossbar__l340\n"); );
    // Body
    vlSelf->axi_ar_addr_o = (((0xaU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                        >> 0x1cU)))) 
                              | (2U == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                        >> 0x18U)))))
                              ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__101__PROF__axi_crossbar__l346(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__101__PROF__axi_crossbar__l346\n"); );
    // Body
    vlSelf->axi_ar_burst_o = (((0xaU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x1cU)))) 
                               | (2U == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x18U)))))
                               ? 0U : 1U);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__102__PROF__axi_crossbar__l348(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__102__PROF__axi_crossbar__l348\n"); );
    // Body
    vlSelf->axi_ar_cache_o = (((0xaU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x1cU)))) 
                               | (2U == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x18U)))))
                               ? 0U : 2U);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__103__PROF__axi_crossbar__l339(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__103__PROF__axi_crossbar__l339\n"); );
    // Body
    vlSelf->axi_ar_valid_o = (((0xaU == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x1cU)))) 
                               | (2U == (0xfU & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x18U)))))
                               ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid)));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__104__PROF__axi_crossbar__l342(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__104__PROF__axi_crossbar__l342\n"); );
    // Body
    vlSelf->axi_ar_id_o = (((0xaU == (0xfU & (IData)(
                                                     (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                      >> 0x1cU)))) 
                            | (2U == (0xfU & (IData)(
                                                     (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                      >> 0x18U)))))
                            ? 0U : ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__105__PROF__axi_crossbar__l351(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__105__PROF__axi_crossbar__l351\n"); );
    // Body
    vlSelf->axi_r_ready_o = (((0xaU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                        >> 0x1cU)))) 
                              | (2U == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                        >> 0x18U)))))
                              ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready)));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__106__PROF__axi_crossbar__l377(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__106__PROF__axi_crossbar__l377\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__107__PROF__axi_crossbar__l398(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__107__PROF__axi_crossbar__l398\n"); );
    // Body
    vlSelf->top__DOT__clint_axi_arvalid = ((2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x18U))))
                                            ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid))
                                            : 0U);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__108__PROF__axi_crossbar__l350(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__108__PROF__axi_crossbar__l350\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__109__PROF__axi_crossbar__l352(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__109__PROF__axi_crossbar__l352\n"); );
    // Body
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid 
        = ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                     >> 0x1cU)))) ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)
            : ((2U == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                       >> 0x18U))))
                ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid)
                : (IData)(vlSelf->axi_r_valid_i)));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__110__PROF__axi_crossbar__l338(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__110__PROF__axi_crossbar__l338\n"); );
    // Body
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready 
        = ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                     >> 0x1cU)))) ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready)
            : ((2U == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                       >> 0x18U))))
                ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready)
                : (IData)(vlSelf->axi_ar_ready_i)));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__111__PROF__axi_crossbar__l354(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__111__PROF__axi_crossbar__l354\n"); );
    // Body
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data 
        = ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                     >> 0x1cU)))) ? vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata
            : ((2U == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                       >> 0x18U))))
                ? vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__reg_data_out
                : vlSelf->axi_r_data_i));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__112__PROF__axi_crossbar__l355(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__112__PROF__axi_crossbar__l355\n"); );
    // Body
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last 
        = ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                     >> 0x1cU)))) ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)
            : ((2U == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                       >> 0x18U))))
                ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid)
                : (IData)(vlSelf->axi_r_last_i)));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__113__PROF__axi_crossbar__l356(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__113__PROF__axi_crossbar__l356\n"); );
    // Body
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id 
        = ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                     >> 0x1cU)))) ? 1U
            : ((2U == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                       >> 0x18U))))
                ? 1U : (0xfU & (IData)(vlSelf->axi_r_id_i))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__114__PROF__Dcache__l479(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__114__PROF__Dcache__l479\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT__storeMask = (0xffU 
                                                  & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__115__PROF__CSR__l43(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__115__PROF__CSR__l43\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en 
        = ((((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrw) 
             | (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrs)) 
            | (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrc)) 
           & (0x1cU == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                 >> 5U))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__116__PROF__Dcache__l74(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__116__PROF__Dcache__l74\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT__uncached = (((1U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                  & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i)) 
                                                 & (8U 
                                                    != 
                                                    (0xfU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 0x1cU)))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__117__PROF__Dcache__l270(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__117__PROF__Dcache__l270\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT__cacheHit = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__way1Hit) 
                                                 | (IData)(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__118__PROF__axi_crossbar__l331(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__118__PROF__axi_crossbar__l331\n"); );
    // Body
    vlSelf->axi_w_last_o = (((0xaU == (0xfU & (IData)(
                                                      (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                       >> 0x1cU)))) 
                             | (2U == (0xfU & (IData)(
                                                      (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                       >> 0x18U)))))
                             ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrLast)));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__119__PROF__clint__l128(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__119__PROF__clint__l128\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__slv_reg_wren 
        = ((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready) 
           & (IData)(vlSelf->top__DOT__clint_axi_wvalid));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__120__PROF__Dcache__l651(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__120__PROF__Dcache__l651\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT__clean_OK = ((0x7fU 
                                                  == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt)) 
                                                 & (((IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanWrValid) 
                                                     & (0U 
                                                        == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))) 
                                                    | (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanWrValid))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__121__PROF__Dcache__l572(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__121__PROF__Dcache__l572\n"); );
    // Body
    vlSelf->top__DOT__DcacheWrValid = ((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                        ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanWrValid)
                                        : (IData)(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__122__PROF__EX_stage__l61(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__122__PROF__EX_stage__l61\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__123__PROF__EX_stage__l44(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__123__PROF__EX_stage__l44\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__124__PROF__imm_ext__l13(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__124__PROF__imm_ext__l13\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__125__PROF__axi_crossbar__l344(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__125__PROF__axi_crossbar__l344\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__126__PROF__axi_crossbar__l290(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__126__PROF__axi_crossbar__l290\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__127__PROF__Icache__l333(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__127__PROF__Icache__l333\n"); );
    // Body
    vlSelf->top__DOT__cache_dut__DOT__wenWay1 = (((7U 
                                                   == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                                  & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__uncached))) 
                                                 & vlSelf->top__DOT__cache_dut__DOT__randomBit);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__128__PROF__Icache__l333(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__128__PROF__Icache__l333\n"); );
    // Body
    vlSelf->top__DOT__cache_dut__DOT__wenWay2 = (((7U 
                                                   == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                                  & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__uncached))) 
                                                 & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__129__PROF__Icache__l196(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__129__PROF__Icache__l196\n"); );
    // Body
    vlSelf->top__DOT__cache_dut__DOT__cacheHit = ((
                                                   ((IData)(vlSelf->top__DOT__cache_dut__DOT__way1Hit) 
                                                    | (IData)(vlSelf->top__DOT__cache_dut__DOT__way2Hit)) 
                                                   & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__uncached))) 
                                                  | (IData)(vlSelf->top__DOT__cache_dut__DOT__uncachedOk));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__130__PROF__axi_icache__l105(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__130__PROF__axi_icache__l105\n"); );
    // Body
    vlSelf->top__DOT__dataValid_o = (((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? 0U : (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)) 
                                     & (3U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state)));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__131__PROF__axi_dcache__l243(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__131__PROF__axi_dcache__l243\n"); );
    // Body
    vlSelf->top__DOT__lsAxiRdDataVAlid = (((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                            ? (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)
                                            : 0U) & 
                                          (3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state)));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__132__PROF__axi_crossbar__l307(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__132__PROF__axi_crossbar__l307\n"); );
    // Body
    vlSelf->top__DOT__if_axi_r_last_i = ((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                          ? 0U : (1U 
                                                  & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last)));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__133__PROF__axi_crossbar__l306(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__133__PROF__axi_crossbar__l306\n"); );
    // Body
    vlSelf->top__DOT__ls_axi_r_data_i = ((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                          ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data
                                          : 0ULL);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__134__PROF__axi_crossbar__l308(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__134__PROF__axi_crossbar__l308\n"); );
    // Body
    vlSelf->top__DOT__ls_axi_r_last_i = ((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                          ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last))
                                          : 0U);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__135__PROF__Dcache__l482(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__135__PROF__Dcache__l482\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__136__PROF__Dcache__l484(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__136__PROF__Dcache__l484\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__137__PROF__Dcache__l486(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__137__PROF__Dcache__l486\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__138__PROF__Dcache__l488(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__138__PROF__Dcache__l488\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__139__PROF__CSR__l47(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__139__PROF__CSR__l47\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc 
        = ((0x341U == (0xfffU & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                  << 9U) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 0x17U)))) 
           & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__140__PROF__CSR__l48(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__140__PROF__CSR__l48\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec 
        = ((0x305U == (0xfffU & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                  << 9U) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 0x17U)))) 
           & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__141__PROF__CSR__l49(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__141__PROF__CSR__l49\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus 
        = ((0x300U == (0xfffU & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                  << 9U) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 0x17U)))) 
           & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__142__PROF__CSR__l50(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__142__PROF__CSR__l50\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause 
        = ((0x342U == (0xfffU & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                  << 9U) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 0x17U)))) 
           & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__143__PROF__Dcache__l404(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__143__PROF__Dcache__l404\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT__wenWay2 = ((7U 
                                                 == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                 ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                 : 
                                                ((((1U 
                                                    == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                   & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)) 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 0x20U))) 
                                                 & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__way1Hit))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__144__PROF__Dcache__l404(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__144__PROF__Dcache__l404\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT__wenWay1 = (1U 
                                                & ((7U 
                                                    == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                    ? 
                                                   (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit))
                                                    : 
                                                   ((((1U 
                                                       == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                      & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)) 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 0x20U))) 
                                                    & (IData)(vlSelf->top__DOT__Dcache_u__DOT__way1Hit))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__145__PROF__clint__l130(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__145__PROF__clint__l130\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimeWrEn 
        = ((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__slv_reg_wren) 
           & ((0x4000U != (0xffffU & (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr))) 
              & (0xbff8U == (0xffffU & (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr)))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__146__PROF__clint__l130(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__146__PROF__clint__l130\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmpWrEn 
        = ((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__slv_reg_wren) 
           & (0x4000U == (0xffffU & (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr))));
}

extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_0260afd5_0;

VL_INLINE_OPT void Vtop___024root___settle__TOP__147__PROF__axi_dcache__l104(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__147__PROF__axi_dcache__l104\n"); );
    // Variables
    CData/*6:0*/ __Vtableidx4;
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__148__PROF__EX_stage__l80(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__148__PROF__EX_stage__l80\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__149__PROF__bcu__l28(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__149__PROF__bcu__l28\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp29;
    VlWide<3>/*95:0*/ __Vtemp30;
    VlWide<3>/*95:0*/ __Vtemp31;
    VlWide<3>/*95:0*/ __Vtemp32;
    VlWide<3>/*95:0*/ __Vtemp33;
    // Body
    __Vtemp29[0U] = 1U;
    __Vtemp29[1U] = 0U;
    __Vtemp29[2U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp30, vlSelf->top__DOT__ex_stage_u__DOT__rs1);
    VL_EXTEND_WQ(65,64, __Vtemp31, (~ vlSelf->top__DOT__ex_stage_u__DOT__rs2));
    VL_ADD_W(3, __Vtemp32, __Vtemp30, __Vtemp31);
    VL_ADD_W(3, __Vtemp33, __Vtemp29, __Vtemp32);
    vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry 
        = (1U & __Vtemp33[2U]);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__150__PROF__bcu__l28(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__150__PROF__bcu__l28\n"); );
    // Body
    vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres 
        = (1ULL + (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                   + (~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__151__PROF__EX_stage__l79(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__151__PROF__EX_stage__l79\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__152__PROF__axi_crossbar__l345(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__152__PROF__axi_crossbar__l345\n"); );
    // Body
    vlSelf->axi_ar_size_o = (((0xaU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                        >> 0x1cU)))) 
                              | (2U == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                        >> 0x18U)))))
                              ? 0U : (7U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size)));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__153__PROF__Icache__l366(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__153__PROF__Icache__l366\n"); );
    // Body
    vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN 
        = (1U & (~ ((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                      & (0ULL != vlSelf->top__DOT__pc_new)) 
                     | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                         & (0ULL != vlSelf->top__DOT__pc_new)) 
                        & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                    | (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__154__PROF__Icache__l386(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__154__PROF__Icache__l386\n"); );
    // Body
    vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN 
        = (1U & (~ ((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                      & (0ULL != vlSelf->top__DOT__pc_new)) 
                     | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                         & (0ULL != vlSelf->top__DOT__pc_new)) 
                        & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                    | (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__155__PROF__Icache__l229(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__155__PROF__Icache__l229\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__156__PROF__IF_stage__l32(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__156__PROF__IF_stage__l32\n"); );
    // Body
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
}

extern const VlUnpacked<CData/*1:0*/, 32> Vtop__ConstPool__TABLE_b1b41ba9_0;

VL_INLINE_OPT void Vtop___024root___settle__TOP__157__PROF__axi_icache__l73(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__157__PROF__axi_icache__l73\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx2;
    // Body
    __Vtableidx2 = (((IData)(vlSelf->top__DOT__if_axi_r_last_i) 
                     << 4U) | (((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                   ? 0U : 1U) ? 0U : 
                                 (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))) 
                                << 3U) | (((IData)(vlSelf->top__DOT__rw_valid_i) 
                                           << 2U) | (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
    vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next 
        = Vtop__ConstPool__TABLE_b1b41ba9_0[__Vtableidx2];
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__158__PROF__Dcache__l377(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__158__PROF__Dcache__l377\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT__tagArray1_d = 
        (((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
          & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))
          ? (0x1fffffU & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                           ? vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                          [(0x3fU & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 5U)))]
                           : (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                      >> 0xbU)))) : 0U);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__159__PROF__Dcache__l377(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__159__PROF__Dcache__l377\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT__bitValid2_d = 
        (((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
          & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
         & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
            | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                       >> (0x3fU & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                            >> 5U)))))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__160__PROF__Dcache__l377(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__160__PROF__Dcache__l377\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT__bitValid1_d = 
        (((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
          & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
         & ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
            | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                       >> (0x3fU & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                            >> 5U)))))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__161__PROF__Dcache__l377(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__161__PROF__Dcache__l377\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT__tagArray2_d = 
        (((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
          & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))
          ? (0x1fffffU & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                           ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                      >> 0xbU)) : vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                          [(0x3fU & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                             >> 5U)))]))
          : 0U);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__162__PROF__axi_dcache__l211(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__162__PROF__axi_dcache__l211\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx5;
    // Body
    __Vtableidx5 = (((IData)(vlSelf->top__DOT__ls_axi_r_last_i) 
                     << 4U) | (((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                   ? 0U : 1U) ? (1U 
                                                 & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                  : 0U) << 3U) | (((IData)(vlSelf->top__DOT__DcacheRdValid) 
                                                   << 2U) 
                                                  | (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
    vlSelf->top__DOT__axi_ls_u__DOT__r_state_next = 
        Vtop__ConstPool__TABLE_b1b41ba9_0[__Vtableidx5];
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__163__PROF__Dcache__l598(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__163__PROF__Dcache__l598\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk = 
        (((((IData)(vlSelf->top__DOT__DcacheWrValid) 
            & (0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))) 
           | (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk)) 
          | (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
         | (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__164__PROF__CSR__l54(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__164__PROF__CSR__l54\n"); );
    // Body
    vlSelf->top__DOT__csrdata_ls = (((((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc))) 
                                       & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc) 
                                      | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec))) 
                                         & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec)) 
                                     | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus))) 
                                        & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus)) 
                                    | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause))) 
                                       & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__165__PROF__mul64__l59(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__165__PROF__mul64__l59\n"); );
    // Body
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_hi_src2 
        = (((QData)((IData)((1U & ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul_signed) 
                                   & (IData)((vlSelf->top__DOT__ex_stage_u__DOT__src2 
                                              >> 0x3fU)))))) 
            << 0x20U) | (QData)((IData)((vlSelf->top__DOT__ex_stage_u__DOT__src2 
                                         >> 0x20U))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__166__PROF__ALU__l34(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__166__PROF__ALU__l34\n"); );
    // Body
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin 
        = (vlSelf->top__DOT__ex_stage_u__DOT__src2 
           ^ (- (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__167__PROF__ALU__l248(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__167__PROF__ALU__l248\n"); );
    // Body
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src2 
        = (0x3fU & ((0x8000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                     ? (0x1fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))
                     : (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__168__PROF__bcu__l29(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__168__PROF__bcu__l29\n"); );
    // Body
    vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow 
        = (((1U & (IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                           >> 0x3fU))) == (1U & (~ (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                            >> 0x3fU))))) 
           & ((1U & (IData)((vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres 
                             >> 0x3fU))) != (1U & (IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                                           >> 0x3fU)))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__169__PROF__mul64__l57(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__169__PROF__mul64__l57\n"); );
    // Body
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_hi_src1 
        = (((QData)((IData)((1U & (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul_signed) 
                                    >> 1U) & (IData)(
                                                     (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                      >> 0x3fU)))))) 
            << 0x20U) | (QData)((IData)((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                         >> 0x20U))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__170__PROF__ALU__l79(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__170__PROF__ALU__l79\n"); );
    // Body
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__diffIn 
        = ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src1Reg 
            != vlSelf->top__DOT__ex_stage_u__DOT__src1) 
           | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2Reg 
              != vlSelf->top__DOT__ex_stage_u__DOT__src2));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__171__PROF__ALU__l249(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__171__PROF__ALU__l249\n"); );
    // Body
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 
        = ((0x8000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
            ? (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1))
            : vlSelf->top__DOT__ex_stage_u__DOT__src1);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__172__PROF__Dcache__l283(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__172__PROF__Dcache__l283\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__173__PROF__CSR__l65(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__173__PROF__CSR__l65\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data 
        = ((((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrw))) 
             & vlSelf->top__DOT__ls_u__DOT__csr_wr_data) 
            | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrs))) 
               & (vlSelf->top__DOT__ls_u__DOT__csr_wr_data 
                  | vlSelf->top__DOT__csrdata_ls))) 
           | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrc))) 
              & ((~ vlSelf->top__DOT__ls_u__DOT__csr_wr_data) 
                 & vlSelf->top__DOT__csrdata_ls)));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__174__PROF__ALU__l186(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__174__PROF__ALU__l186\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp35;
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__175__PROF__bcu__l59(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__175__PROF__bcu__l59\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__176__PROF__ALU__l91(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__176__PROF__ALU__l91\n"); );
    // Body
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__mul_valid 
        = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__diffIn) 
            & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
               >> 5U)) & (~ (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                             >> 4U)));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__177__PROF__ALU__l112(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__177__PROF__ALU__l112\n"); );
    // Body
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__div_valid 
        = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__diffIn) 
            & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
               >> 5U)) & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                          >> 4U));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__178__PROF__ALU__l250(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__178__PROF__ALU__l250\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__179__PROF__pipline_ctrl__l36(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__179__PROF__pipline_ctrl__l36\n"); );
    // Body
    vlSelf->top__DOT__id_flush = (1U & (((((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            | (IData)(vlSelf->top__DOT__fence_id)) 
                                           | (IData)(vlSelf->top__DOT__in_intr_ls)) 
                                          | (IData)(vlSelf->top__DOT__is_jump)) 
                                         | (IData)(vlSelf->top__DOT__in_trap_id)) 
                                        | (IData)(vlSelf->top__DOT__out_trap_id)));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__180__PROF__pipline_ctrl__l35(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__180__PROF__pipline_ctrl__l35\n"); );
    // Body
    vlSelf->top__DOT__ex_flush = (1U & (((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                          | (IData)(vlSelf->top__DOT__in_intr_ls)) 
                                         | (IData)(vlSelf->top__DOT__ld_use_hazard)) 
                                        | (IData)(vlSelf->top__DOT__is_jump)));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__181__PROF__IF_stage__l51(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__181__PROF__IF_stage__l51\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__182__PROF__mulTop__l37(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__182__PROF__mulTop__l37\n"); );
    // Body
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n 
        = ((IData)(vlSelf->rst_n) & (~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__mul_valid)));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__183__PROF__EX_stage__l116(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__183__PROF__EX_stage__l116\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__184__PROF__ALU__l261(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__184__PROF__ALU__l261\n"); );
    // Body
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
        = (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src 
           >> (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src2));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__185__PROF__mul64__l67(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__185__PROF__mul64__l67\n"); );
    // Body
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_set 
        = (1U & ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__mul_valid) 
                 & (~ (IData)(vlSelf->top__DOT__ex_flush))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__186__PROF__Icache__l67(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__186__PROF__Icache__l67\n"); );
    // Body
    vlSelf->top__DOT__cache_dut__DOT__diffAddr = ((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o) 
                                                  != (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__187__PROF__pipline_ctrl__l29(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__187__PROF__pipline_ctrl__l29\n"); );
    // Body
    vlSelf->top__DOT__if_stall_n = (1U & (~ (((((((IData)(vlSelf->top__DOT__fence_id) 
                                                  | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
                                                 & (~ (IData)(vlSelf->top__DOT__is_jump))) 
                                                | (IData)(vlSelf->top__DOT__ld_use_hazard)) 
                                               | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                              | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                             | (IData)(vlSelf->top__DOT__ex_not_ok))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__188__PROF__pipline_ctrl__l32(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__188__PROF__pipline_ctrl__l32\n"); );
    // Body
    vlSelf->top__DOT__ls_stall_n = (1U & (~ (((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                              | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                             | (IData)(vlSelf->top__DOT__ex_not_ok))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__189__PROF__ALU__l269(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__189__PROF__ALU__l269\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__190__PROF__mul64__l69(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__190__PROF__mul64__l69\n"); );
    // Body
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_d 
        = ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_set) 
           | (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q) 
               & (~ ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q) 
                     | (IData)(vlSelf->top__DOT__ex_flush)))) 
              & (~ (IData)(vlSelf->top__DOT__ex_flush))));
}

extern const VlUnpacked<CData/*2:0*/, 1024> Vtop__ConstPool__TABLE_b22aa1bc_0;

VL_INLINE_OPT void Vtop___024root___settle__TOP__191__PROF__Icache__l69(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__191__PROF__Icache__l69\n"); );
    // Variables
    SData/*9:0*/ __Vtableidx1;
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__192__PROF__Icache__l369(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__192__PROF__Icache__l369\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__193__PROF__Icache__l389(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__193__PROF__Icache__l389\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__194__PROF__top__l300(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__194__PROF__top__l300\n"); );
    // Body
    vlSelf->stall_n_diff = vlSelf->top__DOT__ls_stall_n;
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__195__PROF__L_S_stage__l115(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__195__PROF__L_S_stage__l115\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__csr_stall_n = ((IData)(vlSelf->top__DOT__in_intr_ls)
                                                 ? (IData)(vlSelf->top__DOT__if_stall_n)
                                                 : (IData)(vlSelf->top__DOT__ls_stall_n));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__196__PROF__Dcache__l101(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__196__PROF__Dcache__l101\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__197__PROF__Dcache__l325(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__197__PROF__Dcache__l325\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__198__PROF__ALU__l279(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__198__PROF__ALU__l279\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__199__PROF__lsu__l88(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__199__PROF__lsu__l88\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b 
        = (0xffU & ((0x20U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                     ? ((0x10U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                         ? ((8U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                             ? (IData)((vlSelf->top__DOT__ls_sram_rd_data 
                                        >> 0x38U)) : (IData)(
                                                             (vlSelf->top__DOT__ls_sram_rd_data 
                                                              >> 0x30U)))
                         : ((8U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                             ? (IData)((vlSelf->top__DOT__ls_sram_rd_data 
                                        >> 0x28U)) : (IData)(
                                                             (vlSelf->top__DOT__ls_sram_rd_data 
                                                              >> 0x20U))))
                     : ((0x10U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                         ? ((8U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                             ? (IData)((vlSelf->top__DOT__ls_sram_rd_data 
                                        >> 0x18U)) : (IData)(
                                                             (vlSelf->top__DOT__ls_sram_rd_data 
                                                              >> 0x10U)))
                         : ((8U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                             ? (IData)((vlSelf->top__DOT__ls_sram_rd_data 
                                        >> 8U)) : (IData)(vlSelf->top__DOT__ls_sram_rd_data)))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__200__PROF__lsu__l117(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__200__PROF__lsu__l117\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h 
        = (0xffffU & ((0x20U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                       ? ((0x10U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                           ? (IData)((vlSelf->top__DOT__ls_sram_rd_data 
                                      >> 0x30U)) : (IData)(
                                                           (vlSelf->top__DOT__ls_sram_rd_data 
                                                            >> 0x20U)))
                       : ((0x10U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                           ? (IData)((vlSelf->top__DOT__ls_sram_rd_data 
                                      >> 0x10U)) : (IData)(vlSelf->top__DOT__ls_sram_rd_data))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__201__PROF__lsu__l133(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__201__PROF__lsu__l133\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__202__PROF__ALU__l142(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__202__PROF__ALU__l142\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp37;
    VlWide<3>/*95:0*/ __Vtemp38;
    VlWide<3>/*95:0*/ __Vtemp39;
    VlWide<3>/*95:0*/ __Vtemp40;
    VlWide<3>/*95:0*/ __Vtemp41;
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__203__PROF__WB_reg__l27(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__203__PROF__WB_reg__l27\n"); );
    // Variables
    VlWide<7>/*223:0*/ __Vtemp45;
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__204__PROF__ALU__l171(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__204__PROF__ALU__l171\n"); );
    // Body
    vlSelf->top__DOT__alures_ex = ((0x8000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                    ? (((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                    : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__205__PROF__top__l920(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__205__PROF__top__l920\n"); );
    // Body
    vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i 
        = (((3U == (0x7fU & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                              << 4U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                        >> 0x1cU)))) 
            | (8U == (0x1fU & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                << 2U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                          >> 0x1eU)))))
            ? (IData)(vlSelf->top__DOT__alures_ex) : 0U);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__206__PROF__Dcache__l722(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__206__PROF__Dcache__l722\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A 
        = (0x3fU & ((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                     ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt)
                     : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)
                         ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                    >> 5U)) : ((IData)(vlSelf->top__DOT__ls_stall_n)
                                                ? (vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i 
                                                   >> 5U)
                                                : (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 5U))))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__207__PROF__Dcache__l742(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__207__PROF__Dcache__l742\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A 
        = (0x3fU & ((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                     ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt)
                     : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)
                         ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                    >> 5U)) : ((IData)(vlSelf->top__DOT__ls_stall_n)
                                                ? (vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i 
                                                   >> 5U)
                                                : (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 5U))))));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__281__PROF__divTop__l85(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__281__PROF__divTop__l85\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_cnt 
        = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_cnt;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__282__PROF__clint__l279(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__282__PROF__clint__l279\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp 
        = vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__283__PROF__clint__l260(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__283__PROF__clint__l260\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime 
        = vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtime;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__287__PROF__Icache__l286(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__287__PROF__Icache__l286\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__cache_dut__DOT__rdCnt 
        = vlSelf->top__DOT__cache_dut__DOT__rdCnt;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__289__PROF__axi_dcache__l161(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__289__PROF__axi_dcache__l161\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__axi_ls_u__DOT__wrCnt 
        = vlSelf->top__DOT__axi_ls_u__DOT__wrCnt;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__293__PROF__Dcache__l357(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__293__PROF__Dcache__l357\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__Dcache_u__DOT__rdCnt 
        = vlSelf->top__DOT__Dcache_u__DOT__rdCnt;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__297__PROF__Icache__l186(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__297__PROF__Icache__l186\n"); );
    // Body
    vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__tagArray2__v0 = 0U;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__298__PROF__Icache__l185(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__298__PROF__Icache__l185\n"); );
    // Body
    vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__tagArray1__v0 = 0U;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__308__PROF__divTop__l61(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__308__PROF__divTop__l61\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[0U] 
        = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[0U];
    vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U] 
        = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U];
    vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
        = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U];
    vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
        = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U];
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__313__PROF__Dcache__l258(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__313__PROF__Dcache__l258\n"); );
    // Body
    vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__tagArray2__v0 = 0U;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__314__PROF__Dcache__l257(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__314__PROF__Dcache__l257\n"); );
    // Body
    vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__tagArray1__v0 = 0U;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__319__PROF__CSR__l102(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__319__PROF__CSR__l102\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
        = vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__323__PROF__Dcache__l693(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__323__PROF__Dcache__l693\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__Dcache_u__DOT__oneCycleDelay 
        = vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__324__PROF__Dcache__l648(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__324__PROF__Dcache__l648\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__Dcache_u__DOT__cleanCnt 
        = vlSelf->top__DOT__Dcache_u__DOT__cleanCnt;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__325__PROF__clint__l250(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__325__PROF__clint__l250\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimeWrEn) {
            vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__byte_index = 9U;
        }
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__326__PROF__clint__l269(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__326__PROF__clint__l269\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmpWrEn) {
            vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__byte_index = 9U;
        }
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__327__PROF__clint__l228(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__327__PROF__clint__l228\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__reg_data_out 
        = ((IData)(vlSelf->rst_n) ? ((((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready) 
                                       & (IData)(vlSelf->top__DOT__clint_axi_arvalid)) 
                                      & (~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid)))
                                      ? ((0x4000U == 
                                          (0xffffU 
                                           & (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_araddr)))
                                          ? vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp
                                          : ((0xbff8U 
                                              == (0xffffU 
                                                  & (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_araddr)))
                                              ? vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtime
                                              : 0ULL))
                                      : 0ULL) : 0ULL);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__328__PROF__Dcache__l568(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__328__PROF__Dcache__l568\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT__uncache = vlSelf->top__DOT__Dcache_u__DOT__uncached;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__329__PROF__CSR__l84(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__329__PROF__CSR__l84\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec) 
             & (IData)(vlSelf->top__DOT__ls_u__DOT__csr_stall_n))) {
            vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec 
                = ((3ULL & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec) 
                   | (0xfffffffffffffffcULL & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data));
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__330__PROF__divTop__l80(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__330__PROF__divTop__l80\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__div_valid) 
             & (~ (IData)(vlSelf->top__DOT__ex_flush)))) {
            vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_cnt = 0x3fU;
        } else if (((0U != (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_cnt)) 
                    & (~ (IData)(vlSelf->top__DOT__ex_flush)))) {
            vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_cnt 
                = (0x3fU & ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_cnt) 
                            - (IData)(1U)));
        } else if (vlSelf->top__DOT__ex_flush) {
            vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_cnt = 0U;
        }
    } else {
        vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_cnt = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__331__PROF__clint__l269(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__331__PROF__clint__l269\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmpWrEn) {
            if ((1U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp 
                    = ((0xffffffffffffff00ULL & vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp) 
                       | (IData)((IData)((0xffU & (IData)(vlSelf->top__DOT__clint_axi_wdata)))));
            }
            if ((2U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp 
                    = ((0xffffffffffff00ffULL & vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp) 
                       | ((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->top__DOT__clint_axi_wdata 
                                                            >> 8U))))) 
                          << 8U));
            }
            if ((4U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp 
                    = ((0xffffffffff00ffffULL & vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp) 
                       | ((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->top__DOT__clint_axi_wdata 
                                                            >> 0x10U))))) 
                          << 0x10U));
            }
            if ((8U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp 
                    = ((0xffffffff00ffffffULL & vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp) 
                       | ((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->top__DOT__clint_axi_wdata 
                                                            >> 0x18U))))) 
                          << 0x18U));
            }
            if ((0x10U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp 
                    = ((0xffffff00ffffffffULL & vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp) 
                       | ((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->top__DOT__clint_axi_wdata 
                                                            >> 0x20U))))) 
                          << 0x20U));
            }
            if ((0x20U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp 
                    = ((0xffff00ffffffffffULL & vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp) 
                       | ((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->top__DOT__clint_axi_wdata 
                                                            >> 0x28U))))) 
                          << 0x28U));
            }
            if ((0x40U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp 
                    = ((0xff00ffffffffffffULL & vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp) 
                       | ((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->top__DOT__clint_axi_wdata 
                                                            >> 0x30U))))) 
                          << 0x30U));
            }
            if ((0x80U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp 
                    = ((0xffffffffffffffULL & vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp) 
                       | ((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->top__DOT__clint_axi_wdata 
                                                            >> 0x38U))))) 
                          << 0x38U));
            }
            if ((1U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp 
                    = ((0xffffffffffffff00ULL & vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp) 
                       | (IData)((IData)((0xffU & (IData)(vlSelf->top__DOT__clint_axi_wdata)))));
            }
        } else {
            vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp 
                = vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp;
        }
    } else {
        vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__332__PROF__clint__l250(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__332__PROF__clint__l250\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimeWrEn) {
            if ((1U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime 
                    = ((0xffffffffffffff00ULL & vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime) 
                       | (IData)((IData)((0xffU & (IData)(vlSelf->top__DOT__clint_axi_wdata)))));
            }
            if ((2U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime 
                    = ((0xffffffffffff00ffULL & vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime) 
                       | ((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->top__DOT__clint_axi_wdata 
                                                            >> 8U))))) 
                          << 8U));
            }
            if ((4U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime 
                    = ((0xffffffffff00ffffULL & vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime) 
                       | ((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->top__DOT__clint_axi_wdata 
                                                            >> 0x10U))))) 
                          << 0x10U));
            }
            if ((8U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime 
                    = ((0xffffffff00ffffffULL & vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime) 
                       | ((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->top__DOT__clint_axi_wdata 
                                                            >> 0x18U))))) 
                          << 0x18U));
            }
            if ((0x10U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime 
                    = ((0xffffff00ffffffffULL & vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime) 
                       | ((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->top__DOT__clint_axi_wdata 
                                                            >> 0x20U))))) 
                          << 0x20U));
            }
            if ((0x20U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime 
                    = ((0xffff00ffffffffffULL & vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime) 
                       | ((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->top__DOT__clint_axi_wdata 
                                                            >> 0x28U))))) 
                          << 0x28U));
            }
            if ((0x40U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime 
                    = ((0xff00ffffffffffffULL & vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime) 
                       | ((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->top__DOT__clint_axi_wdata 
                                                            >> 0x30U))))) 
                          << 0x30U));
            }
            if ((0x80U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime 
                    = ((0xffffffffffffffULL & vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime) 
                       | ((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->top__DOT__clint_axi_wdata 
                                                            >> 0x38U))))) 
                          << 0x38U));
            }
            if ((1U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime 
                    = ((0xffffffffffffff00ULL & vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime) 
                       | (IData)((IData)((0xffU & (IData)(vlSelf->top__DOT__clint_axi_wdata)))));
            }
        } else {
            vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime 
                = (1ULL + vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtime);
        }
    } else {
        vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__333__PROF__Dcache__l433(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__333__PROF__Dcache__l433\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT__wenDelay2 = ((IData)(vlSelf->rst_n) 
                                                  & (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__334__PROF__Dcache__l433(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__334__PROF__Dcache__l433\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT__wenDelay1 = ((IData)(vlSelf->rst_n) 
                                                  & (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__335__PROF__Icache__l252(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__335__PROF__Icache__l252\n"); );
    // Body
    vlSelf->top__DOT__cache_dut__DOT__missFlag = ((IData)(vlSelf->rst_n) 
                                                  & ((3U 
                                                      == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                                     | (7U 
                                                        == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__336__PROF__Icache__l277(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__336__PROF__Icache__l277\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
             & (IData)(vlSelf->top__DOT__dataValid_o))) {
            vlSelf->__Vdly__top__DOT__cache_dut__DOT__rdCnt 
                = ((IData)(vlSelf->top__DOT__if_axi_r_last_i)
                    ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__cache_dut__DOT__rdCnt))));
        }
    } else {
        vlSelf->__Vdly__top__DOT__cache_dut__DOT__rdCnt = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__337__PROF__Icache__l233(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__337__PROF__Icache__l233\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
             & (IData)(vlSelf->top__DOT__if_axi_r_last_i))) {
            vlSelf->top__DOT__cache_dut__DOT__uncachedOk = 1U;
        } else if (vlSelf->top__DOT__if_stall_n) {
            vlSelf->top__DOT__cache_dut__DOT__uncachedOk = 0U;
        }
    } else {
        vlSelf->top__DOT__cache_dut__DOT__uncachedOk = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__338__PROF__axi_dcache__l156(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__338__PROF__axi_dcache__l156\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
             & (IData)(vlSelf->top__DOT__DcacheWrValid))) {
            vlSelf->__Vdly__top__DOT__axi_ls_u__DOT__wrCnt = 0U;
        } else if ((((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
                     & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready)) 
                    & (~ (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrLast)))) {
            vlSelf->__Vdly__top__DOT__axi_ls_u__DOT__wrCnt 
                = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt)));
        }
    } else {
        vlSelf->__Vdly__top__DOT__axi_ls_u__DOT__wrCnt = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__339__PROF__dff__l12(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__339__PROF__dff__l12\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp49;
    VlWide<3>/*95:0*/ __Vtemp50;
    VlWide<3>/*95:0*/ __Vtemp51;
    VlWide<3>/*95:0*/ __Vtemp55;
    VlWide<3>/*95:0*/ __Vtemp56;
    VlWide<3>/*95:0*/ __Vtemp58;
    VlWide<3>/*95:0*/ __Vtemp59;
    VlWide<3>/*95:0*/ __Vtemp60;
    VlWide<3>/*95:0*/ __Vtemp64;
    VlWide<3>/*95:0*/ __Vtemp65;
    VlWide<3>/*95:0*/ __Vtemp67;
    VlWide<3>/*95:0*/ __Vtemp68;
    VlWide<3>/*95:0*/ __Vtemp69;
    VlWide<3>/*95:0*/ __Vtemp73;
    VlWide<3>/*95:0*/ __Vtemp74;
    VlWide<3>/*95:0*/ __Vtemp76;
    VlWide<3>/*95:0*/ __Vtemp77;
    VlWide<3>/*95:0*/ __Vtemp78;
    // Body
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_set) {
            VL_EXTEND_WI(66,32, __Vtemp49, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1));
            VL_EXTEND_WI(66,32, __Vtemp50, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2));
            VL_MUL_W(3, __Vtemp51, __Vtemp49, __Vtemp50);
            VL_EXTENDS_WQ(66,33, __Vtemp55, (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1)));
            __Vtemp56[0U] = __Vtemp55[0U];
            __Vtemp56[1U] = __Vtemp55[1U];
            __Vtemp56[2U] = (3U & __Vtemp55[2U]);
            VL_EXTENDS_WQ(66,33, __Vtemp58, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_hi_src2);
            __Vtemp59[0U] = __Vtemp58[0U];
            __Vtemp59[1U] = __Vtemp58[1U];
            __Vtemp59[2U] = (3U & __Vtemp58[2U]);
            VL_MULS_WWW(66,66,66, __Vtemp60, __Vtemp56, __Vtemp59);
            VL_EXTENDS_WQ(66,33, __Vtemp64, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_hi_src1);
            __Vtemp65[0U] = __Vtemp64[0U];
            __Vtemp65[1U] = __Vtemp64[1U];
            __Vtemp65[2U] = (3U & __Vtemp64[2U]);
            VL_EXTENDS_WQ(66,33, __Vtemp67, (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)));
            __Vtemp68[0U] = __Vtemp67[0U];
            __Vtemp68[1U] = __Vtemp67[1U];
            __Vtemp68[2U] = (3U & __Vtemp67[2U]);
            VL_MULS_WWW(66,66,66, __Vtemp69, __Vtemp65, __Vtemp68);
            VL_EXTENDS_WQ(66,33, __Vtemp73, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_hi_src1);
            __Vtemp74[0U] = __Vtemp73[0U];
            __Vtemp74[1U] = __Vtemp73[1U];
            __Vtemp74[2U] = (3U & __Vtemp73[2U]);
            VL_EXTENDS_WQ(66,33, __Vtemp76, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_hi_src2);
            __Vtemp77[0U] = __Vtemp76[0U];
            __Vtemp77[1U] = __Vtemp76[1U];
            __Vtemp77[2U] = (3U & __Vtemp76[2U]);
            VL_MULS_WWW(66,66,66, __Vtemp78, __Vtemp74, __Vtemp77);
            vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[0U] 
                = __Vtemp78[0U];
            vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[1U] 
                = __Vtemp78[1U];
            vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U] 
                = ((__Vtemp69[0U] << 2U) | (3U & __Vtemp78[2U]));
            vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] 
                = ((__Vtemp69[0U] >> 0x1eU) | (__Vtemp69[1U] 
                                               << 2U));
            vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] 
                = ((__Vtemp60[0U] << 4U) | ((__Vtemp69[1U] 
                                             >> 0x1eU) 
                                            | (0xcU 
                                               & (__Vtemp69[2U] 
                                                  << 2U))));
            vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] 
                = ((__Vtemp60[0U] >> 0x1cU) | (__Vtemp60[1U] 
                                               << 4U));
            vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] 
                = ((__Vtemp51[0U] << 6U) | ((__Vtemp60[1U] 
                                             >> 0x1cU) 
                                            | (0x30U 
                                               & (__Vtemp60[2U] 
                                                  << 4U))));
            vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] 
                = ((__Vtemp51[0U] >> 0x1aU) | (__Vtemp51[1U] 
                                               << 6U));
            vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] 
                = ((__Vtemp51[1U] >> 0x1aU) | (0xc0U 
                                               & (__Vtemp51[2U] 
                                                  << 6U)));
        }
    } else {
        vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[0U] = 0U;
        vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[1U] = 0U;
        vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[2U] = 0U;
        vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[3U] = 0U;
        vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[4U] = 0U;
        vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[5U] = 0U;
        vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[6U] = 0U;
        vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[7U] = 0U;
        vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout[8U] = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__340__PROF__Icache__l159(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__340__PROF__Icache__l159\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->rst_n)) | (IData)(vlSelf->top__DOT__Dcache_u__DOT__clean_OK)))) {
        vlSelf->top__DOT__cache_dut__DOT__validArray2 = 0ULL;
    } else if (((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)))) {
        vlSelf->top__DOT__cache_dut__DOT__validArray2 
            = (((~ (1ULL << (0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                              >> 5U))))) 
                & vlSelf->top__DOT__cache_dut__DOT__validArray2) 
               | ((QData)((IData)((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit)))) 
                  << (0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                       >> 5U)))));
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__341__PROF__Icache__l159(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__341__PROF__Icache__l159\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->rst_n)) | (IData)(vlSelf->top__DOT__Dcache_u__DOT__clean_OK)))) {
        vlSelf->top__DOT__cache_dut__DOT__validArray1 = 0ULL;
    } else if (((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)))) {
        vlSelf->top__DOT__cache_dut__DOT__validArray1 
            = (((~ (1ULL << (0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                              >> 5U))))) 
                & vlSelf->top__DOT__cache_dut__DOT__validArray1) 
               | ((QData)((IData)((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & vlSelf->top__DOT__cache_dut__DOT__randomBit))) 
                  << (0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                       >> 5U)))));
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__342__PROF__Dcache__l352(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__342__PROF__Dcache__l352\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
             & (IData)(vlSelf->top__DOT__lsAxiRdDataVAlid))) {
            vlSelf->__Vdly__top__DOT__Dcache_u__DOT__rdCnt 
                = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__Dcache_u__DOT__rdCnt)));
        }
    } else {
        vlSelf->__Vdly__top__DOT__Dcache_u__DOT__rdCnt = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__343__PROF__Dcache__l539(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__343__PROF__Dcache__l539\n"); );
    // Body
    if (vlSelf->rst_n) {
        if ((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            vlSelf->top__DOT__Dcache_u__DOT__replaceWay 
                = vlSelf->top__DOT__Dcache_u__DOT__randomBit;
        }
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__replaceWay = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__344__PROF__Dcache__l334(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__344__PROF__Dcache__l334\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT__missFlag = ((IData)(vlSelf->rst_n) 
                                                 & (7U 
                                                    == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__345__PROF__Dcache__l286(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__345__PROF__Dcache__l286\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay 
        = ((IData)(vlSelf->rst_n) & (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__346__PROF__Icache__l183(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__346__PROF__Icache__l183\n"); );
    // Body
    if (((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
         & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)))) {
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__tagArray2__v0 
            = (((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                    ? 0U : (0x1fffffU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                 >> 0xbU))))
                : 0U);
        vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__tagArray2__v0 = 1U;
        vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__tagArray2__v0 
            = (0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                >> 5U)));
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__347__PROF__Icache__l183(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__347__PROF__Icache__l183\n"); );
    // Body
    if (((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
         & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)))) {
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__tagArray1__v0 
            = (((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                    ? (0x1fffffU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                            >> 0xbU)))
                    : 0U) : 0U);
        vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__tagArray1__v0 = 1U;
        vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__tagArray1__v0 
            = (0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                >> 5U)));
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__348__PROF__Dcache__l606(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__348__PROF__Dcache__l606\n"); );
    // Body
    if (((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
         & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))) {
        vlSelf->top__DOT__Dcache_u__DOT__temp = vlSelf->top__DOT__ls_axi_r_data_i;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__349__PROF__axi_dcache__l232(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__349__PROF__axi_dcache__l232\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state)) 
             & (IData)(vlSelf->top__DOT__DcacheRdValid))) {
            vlSelf->top__DOT__axi_ls_u__DOT__rdAddr_reg 
                = vlSelf->top__DOT__DcacheRdAddr;
        }
    } else {
        vlSelf->top__DOT__axi_ls_u__DOT__rdAddr_reg = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__350__PROF__axi_icache__l94(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__350__PROF__axi_icache__l94\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state)) 
             & (IData)(vlSelf->top__DOT__rw_valid_i))) {
            vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg 
                = (QData)((IData)(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                    ? (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch)
                                    : (((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                 >> 0xbU)) 
                                        << 0xbU) | 
                                       (0x7e0U & ((IData)(
                                                          (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                           >> 5U)) 
                                                  << 5U))))));
        }
    } else {
        vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__351__PROF__divTop__l21(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__351__PROF__divTop__l21\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__div_valid) {
            vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_type_r 
                = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                         >> 2U));
        }
    } else {
        vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_type_r = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__352__PROF__divTop__l69(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__352__PROF__divTop__l69\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__div_valid) {
            vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_N_r 
                = ((1U & ((~ (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                              >> 2U)) & (IData)((vlSelf->top__DOT__ex_stage_u__DOT__src2 
                                                 >> 0x3fU))))
                    ? vlSelf->top__DOT__ex_stage_u__DOT__src2
                    : (1ULL + (~ vlSelf->top__DOT__ex_stage_u__DOT__src2)));
        }
    } else {
        vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_N_r = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__353__PROF__divTop__l44(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__353__PROF__divTop__l44\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__div_valid) {
            vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_sign 
                = ((4U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                    ? 0U : (1U & (IData)((vlSelf->top__DOT__ex_stage_u__DOT__src2 
                                          >> 0x3fU))));
        }
    } else {
        vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_sign = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__354__PROF__divTop__l69(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__354__PROF__divTop__l69\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__div_valid) {
            vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_P_r 
                = ((1U & ((~ (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                              >> 2U)) & (IData)((vlSelf->top__DOT__ex_stage_u__DOT__src2 
                                                 >> 0x3fU))))
                    ? (1ULL + (~ vlSelf->top__DOT__ex_stage_u__DOT__src2))
                    : vlSelf->top__DOT__ex_stage_u__DOT__src2);
        }
    } else {
        vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_P_r = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__355__PROF__divTop__l44(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__355__PROF__divTop__l44\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__div_valid) {
            vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign 
                = ((4U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                    ? 0U : (1U & (IData)((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                          >> 0x3fU))));
        }
    } else {
        vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__356__PROF__ALU__l80(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__356__PROF__ALU__l80\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
              >> 5U) & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__diffIn))) {
            vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2Reg 
                = vlSelf->top__DOT__ex_stage_u__DOT__src2;
        }
    } else {
        vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2Reg = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__357__PROF__divTop__l55(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__357__PROF__divTop__l55\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp84;
    // Body
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__div_valid) {
            VL_EXTEND_WQ(128,64, __Vtemp84, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            if ((1U & ((~ (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                           >> 2U)) & (IData)((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                              >> 0x3fU))))) {
                vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[0U] 
                    = (IData)((1ULL + (~ vlSelf->top__DOT__ex_stage_u__DOT__src1)));
                vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U] 
                    = (IData)(((1ULL + (~ vlSelf->top__DOT__ex_stage_u__DOT__src1)) 
                               >> 0x20U));
                vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                    = (IData)((- (QData)((IData)((1U 
                                                  & (IData)(
                                                            ((1ULL 
                                                              + 
                                                              (~ vlSelf->top__DOT__ex_stage_u__DOT__src1)) 
                                                             >> 0x3fU)))))));
                vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                    = (IData)(((- (QData)((IData)((1U 
                                                   & (IData)(
                                                             ((1ULL 
                                                               + 
                                                               (~ vlSelf->top__DOT__ex_stage_u__DOT__src1)) 
                                                              >> 0x3fU)))))) 
                               >> 0x20U));
            } else {
                vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[0U] 
                    = __Vtemp84[0U];
                vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U] 
                    = __Vtemp84[1U];
                vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                    = __Vtemp84[2U];
                vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                    = __Vtemp84[3U];
            }
        } else if (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_busy) {
            vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[0U] 
                = (IData)(((0xfffffffffffffffeULL & 
                            (((QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U])) 
                              << 0x21U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[0U])) 
                                           << 1U))) 
                           | (QData)((IData)(((1U & (IData)(
                                                            (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__r_64 
                                                             >> 0x3fU)))
                                               ? 0U
                                               : 1U)))));
            vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U] 
                = (IData)((((0xfffffffffffffffeULL 
                             & (((QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U])) 
                                 << 0x21U) | ((QData)((IData)(
                                                              vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[0U])) 
                                              << 1U))) 
                            | (QData)((IData)(((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__r_64 
                                                           >> 0x3fU)))
                                                ? 0U
                                                : 1U)))) 
                           >> 0x20U));
            vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                = (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__r_64);
            vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                = (IData)((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__r_64 
                           >> 0x20U));
        }
    } else {
        vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[0U] = 0U;
        vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U] = 0U;
        vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] = 0U;
        vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__358__PROF__ALU__l80(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__358__PROF__ALU__l80\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
              >> 5U) & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__diffIn))) {
            vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src1Reg 
                = vlSelf->top__DOT__ex_stage_u__DOT__src1;
        }
    } else {
        vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src1Reg = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__359__PROF__CSR__l27(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__359__PROF__CSR__l27\n"); );
    // Body
    if (vlSelf->rst_n) {
        if ((0U != (((QData)((IData)(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                     << 0x3fU) | (((QData)((IData)(
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                   << 0x1fU) | ((QData)((IData)(
                                                                vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                >> 1U))))) {
            vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__commitPC 
                = (((QData)((IData)(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                    << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                  << 0x1fU) | ((QData)((IData)(
                                                               vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                               >> 1U)));
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__commitPC = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__360__PROF__Dcache__l452(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__360__PROF__Dcache__l452\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
             & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                        >> 0x20U)))) {
            vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch 
                = vlSelf->top__DOT__Dcache_u__DOT__storeMask;
        }
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__361__PROF__Dcache__l612(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__361__PROF__Dcache__l612\n"); );
    // Body
    if (vlSelf->rst_n) {
        if ((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
              & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
             & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                           >> 0x20U))))) {
            vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk = 1U;
        } else if ((6U != (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk = 0U;
        }
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__362__PROF__Dcache__l255(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__362__PROF__Dcache__l255\n"); );
    // Body
    if (((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
         & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))) {
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__tagArray2__v0 
            = vlSelf->top__DOT__Dcache_u__DOT__tagArray2_d;
        vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__tagArray2__v0 = 1U;
        vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__tagArray2__v0 
            = (0x3fU & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                >> 5U)));
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__363__PROF__Dcache__l255(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__363__PROF__Dcache__l255\n"); );
    // Body
    if (((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
         & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))) {
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__tagArray1__v0 
            = vlSelf->top__DOT__Dcache_u__DOT__tagArray1_d;
        vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__tagArray1__v0 = 1U;
        vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__tagArray1__v0 
            = (0x3fU & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                >> 5U)));
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__364__PROF__forwarding__l20(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__364__PROF__forwarding__l20\n"); );
    // Body
    if (vlSelf->rst_n) {
        if ((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
             & (IData)(vlSelf->top__DOT__ls_stall_n))) {
            vlSelf->top__DOT__forwarding_u__DOT__rd_wb 
                = vlSelf->top__DOT__wb_data;
        }
    } else {
        vlSelf->top__DOT__forwarding_u__DOT__rd_wb = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__365__PROF__forwarding__l20(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__365__PROF__forwarding__l20\n"); );
    // Body
    if (vlSelf->rst_n) {
        if ((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
             & (IData)(vlSelf->top__DOT__ls_stall_n))) {
            vlSelf->top__DOT__forwarding_u__DOT__reg_wben 
                = (1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U]);
        }
    } else {
        vlSelf->top__DOT__forwarding_u__DOT__reg_wben = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__366__PROF__forwarding__l20(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__366__PROF__forwarding__l20\n"); );
    // Body
    if (vlSelf->rst_n) {
        if ((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
             & (IData)(vlSelf->top__DOT__ls_stall_n))) {
            vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx 
                = (0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                            >> 8U));
        }
    } else {
        vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__367__PROF__CSR__l116(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__367__PROF__CSR__l116\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause) 
               | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                  >> 1U)) | (IData)(vlSelf->top__DOT__in_intr_ls)) 
             & (IData)(vlSelf->top__DOT__ls_u__DOT__csr_stall_n))) {
            vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause 
                = ((1U & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                           >> 1U) | (IData)(vlSelf->top__DOT__in_intr_ls)))
                    ? (((0x1cU == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 5U))) 
                        & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                           >> 1U)) ? 0xbULL : ((IData)(vlSelf->top__DOT__in_intr_ls)
                                                ? 0x8000000000000007ULL
                                                : 0ULL))
                    : vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data);
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__368__PROF__CSR__l97(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__368__PROF__CSR__l97\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus) 
               | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                  >> 1U)) | (IData)(vlSelf->top__DOT__in_intr_ls)) 
             & (IData)(vlSelf->top__DOT__ls_u__DOT__csr_stall_n))) {
            vlSelf->__Vdly__top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                = ((1U & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                           >> 1U) | (IData)(vlSelf->top__DOT__in_intr_ls)))
                    ? (((((0x1cU == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 5U))) 
                          & (~ (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                >> 0x18U))) & (0U == 
                                               (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU)))) 
                        | (IData)(vlSelf->top__DOT__in_intr_ls))
                        ? ((0xffffffffffffe000ULL & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus) 
                           | (QData)((IData)((0x1800U 
                                              | ((0x700U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                              >> 8U)) 
                                                     << 8U)) 
                                                 | ((0x80U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                                 >> 3U)) 
                                                        << 7U)) 
                                                    | ((0x70U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                                    >> 4U)) 
                                                           << 4U)) 
                                                       | (7U 
                                                          & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus)))))))))
                        : ((0xffffffffffffff00ULL & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus) 
                           | (QData)((IData)((0x80U 
                                              | ((0x70U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                              >> 4U)) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                                 >> 7U)) 
                                                        << 3U)) 
                                                    | (7U 
                                                       & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus)))))))))
                    : vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data);
        }
    } else {
        vlSelf->__Vdly__top__DOT__ls_u__DOT__CSR_u__DOT__mstatus = 0xa00001800ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__369__PROF__CSR__l72(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__369__PROF__CSR__l72\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc) 
               | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                  >> 1U)) | (IData)(vlSelf->top__DOT__in_intr_ls)) 
             & (IData)(vlSelf->top__DOT__ls_u__DOT__csr_stall_n))) {
            vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc 
                = ((3ULL & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc) 
                   | (((2U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                        ? (((QData)((IData)(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                            << 0x3bU) | (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                          << 0x1bU) 
                                         | ((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                            >> 5U)))
                        : ((IData)(vlSelf->top__DOT__in_intr_ls)
                            ? ((0U != (0x3fffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                           << 0x22U) 
                                          | (((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                              << 2U) 
                                             | ((QData)((IData)(
                                                                vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                >> 0x1eU)))))
                                ? (((QData)((IData)(
                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                    << 0x22U) | (((QData)((IData)(
                                                                  vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                    >> 0x1eU)))
                                : ((0U != (0x3fffffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                               << 0x1eU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                                 >> 2U))))
                                    ? (((QData)((IData)(
                                                        vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                           >> 2U)))
                                    : (vlSelf->top__DOT__pc_new 
                                       >> 2U))) : (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data 
                                                   >> 2U))) 
                      << 2U));
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__370__PROF__CSR__l144(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__370__PROF__CSR__l144\n"); );
    // Body
    if (vlSelf->rst_n) {
        if ((((0x344U == (0xfffU & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                     << 9U) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0x17U)))) 
              & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en)) 
             & (IData)(vlSelf->top__DOT__ls_u__DOT__csr_stall_n))) {
            vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip 
                = vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data;
        } else if ((((IData)(vlSelf->top__DOT__ls_u__DOT__timr_int) 
                     & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie 
                                >> 7U))) & (IData)(
                                                   (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                    >> 3U)))) {
            vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip 
                = (0x80ULL | vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip);
        } else if ((1U & (~ (IData)(vlSelf->top__DOT__ls_u__DOT__timr_int)))) {
            vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip 
                = (0xffffffffffffff7fULL & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip);
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__371__PROF__Dcache__l555(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__371__PROF__Dcache__l555\n"); );
    // Body
    if (vlSelf->rst_n) {
        if ((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
              | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                 & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                            >> 0x20U)))) & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__axiWrBusy)))) {
            vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg 
                = ((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i) 
                   & ((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                        & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                   >> 0x20U))) & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk))) 
                      | ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncached)) 
                         & (((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                               & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                          >> 0x20U))) 
                              & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                             & (((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                 & (IData)((vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                                            >> (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 5U)))))) 
                                | ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                   & (IData)((vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                                              >> (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))) 
                            | ((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                 & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))) 
                                & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                               & (((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                   & (IData)((vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                                              >> (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))) 
                                  | ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                     & (IData)((vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 5U))))))))))));
        } else if (((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
                    & (IData)(vlSelf->top__DOT__DcacheWrValid))) {
            vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg = 0U;
        }
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__372__PROF__Dcache__l688(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__372__PROF__Dcache__l688\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
             & ((((~ ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt) 
                      >> 6U)) & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                         >> (0x3fU 
                                             & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))))) 
                 & (IData)((vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                            >> (0x3fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))))) 
                | ((((IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt) 
                     >> 6U) & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                       >> (0x3fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))))) 
                   & (IData)((vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                              >> (0x3fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt)))))))) {
            vlSelf->__Vdly__top__DOT__Dcache_u__DOT__oneCycleDelay = 1U;
        }
    } else {
        vlSelf->__Vdly__top__DOT__Dcache_u__DOT__oneCycleDelay = 0U;
    }
    if (((IData)(vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay) 
         & (0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)))) {
        vlSelf->__Vdly__top__DOT__Dcache_u__DOT__oneCycleDelay = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__373__PROF__Dcache__l643(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__373__PROF__Dcache__l643\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
             & (((IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanWrValid) 
                 & (0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))) 
                | ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanWrValid)) 
                   & (~ ((((~ ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt) 
                               >> 6U)) & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))))) 
                          & (IData)((vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))))) 
                         | ((((IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt) 
                              >> 6U) & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))))) 
                            & (IData)((vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                                       >> (0x3fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))))))))))) {
            vlSelf->__Vdly__top__DOT__Dcache_u__DOT__cleanCnt 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt)));
        }
    } else {
        vlSelf->__Vdly__top__DOT__Dcache_u__DOT__cleanCnt = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__376__PROF__clint__l279(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__376__PROF__clint__l279\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp 
        = vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__377__PROF__clint__l260(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__377__PROF__clint__l260\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtime 
        = vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__382__PROF__axi_dcache__l161(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__382__PROF__axi_dcache__l161\n"); );
    // Body
    vlSelf->top__DOT__axi_ls_u__DOT__wrCnt = vlSelf->__Vdly__top__DOT__axi_ls_u__DOT__wrCnt;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__389__PROF__Icache__l186(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__389__PROF__Icache__l186\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__tagArray2__v0) {
        vlSelf->top__DOT__cache_dut__DOT__tagArray2[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__tagArray2__v0] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__tagArray2__v0;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__390__PROF__Icache__l185(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__390__PROF__Icache__l185\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__tagArray1__v0) {
        vlSelf->top__DOT__cache_dut__DOT__tagArray1[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__tagArray1__v0] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__tagArray1__v0;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__403__PROF__divTop__l61(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__403__PROF__divTop__l61\n"); );
    // Body
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[0U] 
        = vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[0U];
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U] 
        = vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U];
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
        = vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U];
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
        = vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U];
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__409__PROF__Dcache__l258(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__409__PROF__Dcache__l258\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__tagArray2__v0) {
        vlSelf->top__DOT__Dcache_u__DOT__tagArray2[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__tagArray2__v0] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__tagArray2__v0;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__410__PROF__Dcache__l257(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__410__PROF__Dcache__l257\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__tagArray1__v0) {
        vlSelf->top__DOT__Dcache_u__DOT__tagArray1[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__tagArray1__v0] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__tagArray1__v0;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__417__PROF__CSR__l102(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__417__PROF__CSR__l102\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
        = vlSelf->__Vdly__top__DOT__ls_u__DOT__CSR_u__DOT__mstatus;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__421__PROF__Dcache__l693(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__421__PROF__Dcache__l693\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay 
        = vlSelf->__Vdly__top__DOT__Dcache_u__DOT__oneCycleDelay;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__428__PROF__axi_dcache__l203(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__428__PROF__axi_dcache__l203\n"); );
    // Body
    vlSelf->top__DOT__axi_ls_u__DOT__r_state = ((IData)(vlSelf->rst_n)
                                                 ? (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state_next)
                                                 : 0U);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__429__PROF__Icache__l131(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__429__PROF__Icache__l131\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
               & (0ULL != vlSelf->top__DOT__pc_new)) 
              & (IData)(vlSelf->top__DOT__cache_dut__DOT__diffAddr)) 
             | (((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                   & (0ULL != vlSelf->top__DOT__pc_new)) 
                  & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)) 
                 & (IData)(vlSelf->top__DOT__cache_dut__DOT__diffAddr)) 
                & (IData)(vlSelf->top__DOT__if_stall_n)))) {
            vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                = (QData)((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o));
        }
    } else {
        vlSelf->top__DOT__cache_dut__DOT__reqLatch = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__430__PROF__axi_icache__l65(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__430__PROF__axi_icache__l65\n"); );
    // Body
    vlSelf->top__DOT__axi_icache_dut__DOT__r_state 
        = ((IData)(vlSelf->rst_n) ? (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next)
            : 0U);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__433__PROF__divTop__l95(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__433__PROF__divTop__l95\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__div_valid) 
             & (~ (IData)(vlSelf->top__DOT__ex_flush)))) {
            vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_busy = 1U;
        } else if ((1U & ((~ (IData)((0U != (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_cnt)))) 
                          & (~ (IData)(vlSelf->top__DOT__ex_flush))))) {
            vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_busy = 0U;
        } else if (vlSelf->top__DOT__ex_flush) {
            vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_busy = 0U;
        }
    } else {
        vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_busy = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__434__PROF__CSR__l131(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__434__PROF__CSR__l131\n"); );
    // Body
    if (vlSelf->rst_n) {
        if ((((0x304U == (0xfffU & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                     << 9U) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0x17U)))) 
              & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en)) 
             & (IData)(vlSelf->top__DOT__ls_u__DOT__csr_stall_n))) {
            vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie 
                = vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data;
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__436__PROF__Dcache__l624(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__436__PROF__Dcache__l624\n"); );
    // Body
    if (vlSelf->rst_n) {
        if ((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
              & (0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))) 
             & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                        >> 0x20U)))) {
            vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk = 1U;
        } else if ((6U != (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk = 0U;
        }
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__437__PROF__Dcache__l517(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__437__PROF__Dcache__l517\n"); );
    // Body
    if (vlSelf->rst_n) {
        if ((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
              & (IData)(vlSelf->top__DOT__Dcache_u__DOT__way2Hit)) 
             & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                        >> 0x20U)))) {
            vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                = (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                   | ((QData)((IData)(1U)) << (0x3fU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 5U)))));
        } else if ((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                     & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                    & (IData)(vlSelf->top__DOT__Dcache_u__DOT__way2Hit))) {
            vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                = ((~ (1ULL << (0x3fU & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 5U))))) 
                   & vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2);
        }
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__438__PROF__Dcache__l505(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__438__PROF__Dcache__l505\n"); );
    // Body
    if (vlSelf->rst_n) {
        if ((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
              & (IData)(vlSelf->top__DOT__Dcache_u__DOT__way1Hit)) 
             & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                        >> 0x20U)))) {
            vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                = (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                   | ((QData)((IData)(1U)) << (0x3fU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 5U)))));
        } else if ((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                     & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                    & (IData)(vlSelf->top__DOT__Dcache_u__DOT__way1Hit))) {
            vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                = ((~ (1ULL << (0x3fU & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 5U))))) 
                   & vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1);
        }
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__439__PROF__Dcache__l231(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__439__PROF__Dcache__l231\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
             & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))) {
            vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                = (((~ (1ULL << (0x3fU & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 5U))))) 
                    & vlSelf->top__DOT__Dcache_u__DOT__validArray2) 
                   | ((QData)((IData)(vlSelf->top__DOT__Dcache_u__DOT__bitValid2_d)) 
                      << (0x3fU & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                           >> 5U)))));
        }
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__validArray2 = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__440__PROF__Dcache__l231(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__440__PROF__Dcache__l231\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
             & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))) {
            vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                = (((~ (1ULL << (0x3fU & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 5U))))) 
                    & vlSelf->top__DOT__Dcache_u__DOT__validArray1) 
                   | ((QData)((IData)(vlSelf->top__DOT__Dcache_u__DOT__bitValid1_d)) 
                      << (0x3fU & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                           >> 5U)))));
        }
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__validArray1 = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__444__PROF__divTop__l85(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__444__PROF__divTop__l85\n"); );
    // Body
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_cnt 
        = vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_cnt;
}

extern const VlWide<8>/*255:0*/ Vtop__ConstPool__CONST_d5724acc_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__456__PROF__dff__l12(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__456__PROF__dff__l12\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__ls_stall_n) {
            if (vlSelf->top__DOT__in_intr_ls) {
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                    = Vtop__ConstPool__CONST_d5724acc_0[0U];
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U] 
                    = Vtop__ConstPool__CONST_d5724acc_0[1U];
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U] 
                    = Vtop__ConstPool__CONST_d5724acc_0[2U];
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U] 
                    = Vtop__ConstPool__CONST_d5724acc_0[3U];
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                    = Vtop__ConstPool__CONST_d5724acc_0[4U];
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                    = Vtop__ConstPool__CONST_d5724acc_0[5U];
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U] 
                    = Vtop__ConstPool__CONST_d5724acc_0[6U];
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U] 
                    = Vtop__ConstPool__CONST_d5724acc_0[7U];
            } else {
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                    = (((IData)(vlSelf->top__DOT__alures_ex) 
                        << 3U) | ((4U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xeU)) 
                                  | (3U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U] 
                    = (((IData)(vlSelf->top__DOT__alures_ex) 
                        >> 0x1dU) | ((IData)((vlSelf->top__DOT__alures_ex 
                                              >> 0x20U)) 
                                     << 3U));
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U] 
                    = (((IData)((vlSelf->top__DOT__alures_ex 
                                 >> 0x20U)) >> 0x1dU) 
                       | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                          << 3U));
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U] 
                    = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                        >> 0x1dU) | ((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                              >> 0x20U)) 
                                     << 3U));
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                    = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                 >> 0x20U)) >> 0x1dU) 
                       | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                           << 7U) | (0x78U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                              >> 0x19U))));
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                    = ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                              >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                             << 7U) 
                                            | (0x78U 
                                               & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                  >> 0x19U))));
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U] 
                    = ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                              >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                             << 7U) 
                                            | (0x78U 
                                               & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                  >> 0x19U))));
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U] 
                    = (7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                             >> 0x19U));
            }
        }
    } else {
        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] = 0U;
        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U] = 0U;
        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U] = 0U;
        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U] = 0U;
        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] = 0U;
        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] = 0U;
        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U] = 0U;
        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U] = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__527__PROF__axi_slave_ram__l150(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__527__PROF__axi_slave_ram__l150\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__aw_en 
        = vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__528__PROF__clint__l75(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__528__PROF__clint__l75\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__aw_en 
        = vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__aw_en;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__529__PROF__axi_slave_ram__l149(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__529__PROF__axi_slave_ram__l149\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_awready 
        = vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__530__PROF__clint__l74(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__530__PROF__clint__l74\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_awready 
        = vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__532__PROF__axi_slave_ram__l292(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__532__PROF__axi_slave_ram__l292\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid 
        = vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__533__PROF__axi_slave_ram__l203(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__533__PROF__axi_slave_ram__l203\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_wready 
        = vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__534__PROF__clint__l165(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__534__PROF__clint__l165\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid 
        = vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__538__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__538__PROF__S011HD1P_X32Y2D128_BW__l24\n"); );
    // Body
    vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__539__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__539__PROF__S011HD1P_X32Y2D128_BW__l24\n"); );
    // Body
    vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__540__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__540__PROF__S011HD1P_X32Y2D128_BW__l24\n"); );
    // Body
    vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__541__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__541__PROF__S011HD1P_X32Y2D128_BW__l24\n"); );
    // Body
    vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__544__PROF__clint__l192(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__544__PROF__clint__l192\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_arready 
        = vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__545__PROF__Dcache__l374(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__545__PROF__Dcache__l374\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__Dcache_u__DOT__randomBit 
        = vlSelf->top__DOT__Dcache_u__DOT__randomBit;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__550__PROF__axi_slave_ram__l357(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__550__PROF__axi_slave_ram__l357\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid 
        = vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__551__PROF__clint__l215(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__551__PROF__clint__l215\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid 
        = vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__556__PROF__regfile__l33(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__556__PROF__regfile__l33\n"); );
    // Body
    vlSelf->__Vdlyvset__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0 = 0U;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__557__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__557__PROF__S011HD1P_X32Y2D128_BW__l24\n"); );
    // Body
    vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__558__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__558__PROF__S011HD1P_X32Y2D128_BW__l24\n"); );
    // Body
    vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__559__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__559__PROF__S011HD1P_X32Y2D128_BW__l24\n"); );
    // Body
    vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0 = 0U;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__560__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__560__PROF__S011HD1P_X32Y2D128_BW__l24\n"); );
    // Body
    vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0 = 0U;
}

void Vtop___024unit____Vdpiimwrap_axiSlaveRead_TOP____024unit(QData/*63:0*/ raddr, CData/*7:0*/ size, QData/*63:0*/ &rdata);

VL_INLINE_OPT void Vtop___024root___sequent__TOP__562__PROF__axi_slave_ram__l385(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__562__PROF__axi_slave_ram__l385\n"); );
    // Variables
    QData/*63:0*/ __Vtask_axiSlaveRead__3__rdata;
    // Body
    if (vlSelf->rst_n) {
        if ((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
              & (IData)(vlSelf->top__DOT__axi_mmio_ar_valid_o)) 
             & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))) {
            Vtop___024unit____Vdpiimwrap_axiSlaveRead_TOP____024unit(
                                                                     (0xfffffffffffffff8ULL 
                                                                      & vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr), 
                                                                     (((0xaU 
                                                                        != 
                                                                        (0xfU 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                                                >> 0x1cU)))) 
                                                                       | (2U 
                                                                          == 
                                                                          (0xfU 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                                                >> 0x18U)))))
                                                                       ? 0U
                                                                       : 
                                                                      (7U 
                                                                       & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size))), __Vtask_axiSlaveRead__3__rdata);
            vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata 
                = __Vtask_axiSlaveRead__3__rdata;
        }
    } else {
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__563__PROF__regfile__l40(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__563__PROF__regfile__l40\n"); );
    // Body
    if ((0x100073U == ((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                        << 0x1fU) | (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                     >> 1U)))) {
        Vtop___024root____Vdpiimwrap_top__DOT__ID_u__DOT__regfile_u__DOT__ebreak_TOP();
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__564__PROF__axi_slave_ram__l280(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__564__PROF__axi_slave_ram__l280\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
             & (IData)(vlSelf->top__DOT__axi_mmio_w_valid_o))) {
            vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp = 0U;
        }
    } else {
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__565__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__565__PROF__S011HD1P_X32Y2D128_BW__l22\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)) 
               & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2))))) {
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_2[0U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A][0U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_2[1U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A][1U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_2[2U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A][2U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_2[3U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A][3U];
    } else {
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_2[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_2[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_2[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_2[3U] 
            = VL_RANDOM_I(32);
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__566__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__566__PROF__S011HD1P_X32Y2D128_BW__l22\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)) 
               & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2))))) {
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_1[0U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A][0U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_1[1U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A][1U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_1[2U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A][2U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_1[3U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A][3U];
    } else {
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_1[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_1[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_1[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_1[3U] 
            = VL_RANDOM_I(32);
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__567__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__567__PROF__S011HD1P_X32Y2D128_BW__l22\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)) 
               & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1))))) {
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_2[0U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A][0U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_2[1U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A][1U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_2[2U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A][2U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_2[3U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A][3U];
    } else {
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_2[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_2[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_2[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_2[3U] 
            = VL_RANDOM_I(32);
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__568__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__568__PROF__S011HD1P_X32Y2D128_BW__l22\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)) 
               & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1))))) {
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_1[0U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A][0U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_1[1U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A][1U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_1[2U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A][2U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_1[3U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A][3U];
    } else {
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_1[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_1[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_1[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_1[3U] 
            = VL_RANDOM_I(32);
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__569__PROF__axi_slave_ram__l134(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__569__PROF__axi_slave_ram__l134\n"); );
    // Body
    if (vlSelf->rst_n) {
        if ((((~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)) 
              & (IData)(vlSelf->top__DOT__axi_mmio_aw_valid_o)) 
             & (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en))) {
            vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_awready = 1U;
            vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__aw_en = 0U;
        } else if (((IData)(vlSelf->top__DOT__axi_mmio_b_ready_o) 
                    & (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid))) {
            vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__aw_en = 1U;
            vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_awready = 0U;
        } else {
            vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_awready = 0U;
        }
    } else {
        vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_awready = 0U;
        vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__aw_en = 1U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__570__PROF__clint__l60(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__570__PROF__clint__l60\n"); );
    // Body
    if (vlSelf->rst_n) {
        if ((((~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready)) 
              & (IData)(vlSelf->top__DOT__clint_axi_awvalid)) 
             & (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__aw_en))) {
            vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_awready = 1U;
            vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__aw_en = 0U;
        } else if (((IData)(vlSelf->top__DOT__clint_axi_bready) 
                    & (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid))) {
            vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__aw_en = 1U;
            vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_awready = 0U;
        } else {
            vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_awready = 0U;
        }
    } else {
        vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_awready = 0U;
        vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__aw_en = 1U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__571__PROF__clint__l153(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__571__PROF__clint__l153\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready) 
             & (IData)(vlSelf->top__DOT__clint_axi_wvalid))) {
            vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bresp = 0U;
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bresp = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__572__PROF__axi_slave_ram__l280(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__572__PROF__axi_slave_ram__l280\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
             & (IData)(vlSelf->top__DOT__axi_mmio_w_valid_o))) {
            vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid = 1U;
        } else if (((IData)(vlSelf->top__DOT__axi_mmio_b_ready_o) 
                    & (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid))) {
            vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid = 0U;
        }
    } else {
        vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__573__PROF__axi_slave_ram__l189(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__573__PROF__axi_slave_ram__l189\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_wready 
        = ((IData)(vlSelf->rst_n) & ((~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready)) 
                                     & (IData)(vlSelf->top__DOT__axi_mmio_w_valid_o)));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__574__PROF__clint__l153(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__574__PROF__clint__l153\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready) 
             & (IData)(vlSelf->top__DOT__clint_axi_wvalid))) {
            vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid = 1U;
        } else if (((IData)(vlSelf->top__DOT__clint_axi_bready) 
                    & (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid))) {
            vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid = 0U;
        }
    } else {
        vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__575__PROF__clint__l105(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__575__PROF__clint__l105\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready 
        = ((IData)(vlSelf->rst_n) & ((~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready)) 
                                     & (IData)(vlSelf->top__DOT__clint_axi_wvalid)));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__576__PROF__Icache__l301(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__576__PROF__Icache__l301\n"); );
    // Body
    if ((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) {
        vlSelf->top__DOT__cache_dut__DOT__randomBit 
            = (~ vlSelf->top__DOT__cache_dut__DOT__randomBit);
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__577__PROF__clint__l89(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__577__PROF__clint__l89\n"); );
    // Body
    if (vlSelf->rst_n) {
        if ((((~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready)) 
              & (IData)(vlSelf->top__DOT__clint_axi_awvalid)) 
             & (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__aw_en))) {
            vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr 
                = ((2U == (0xfU & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                           >> 0x18U))))
                    ? vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg
                    : 0ULL);
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__578__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__578__PROF__S011HD1P_X32Y2D128_BW__l22\n"); );
    // Body
    if (((~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)) 
         & (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2))) {
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0[0U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0[1U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0[2U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0[3U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0 
            = vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__579__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__579__PROF__S011HD1P_X32Y2D128_BW__l22\n"); );
    // Body
    if (((~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)) 
         & (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2))) {
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0[0U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0[1U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0[2U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0[3U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0 
            = vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__580__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__580__PROF__S011HD1P_X32Y2D128_BW__l22\n"); );
    // Body
    if (((~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)) 
         & (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1))) {
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0[0U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0[1U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0[2U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0[3U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0 
            = vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__581__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__581__PROF__S011HD1P_X32Y2D128_BW__l22\n"); );
    // Body
    if (((~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)) 
         & (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1))) {
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0[0U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0[1U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0[2U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0[3U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0 
            = vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__582__PROF__clint__l180(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__582__PROF__clint__l180\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready)) 
             & (IData)(vlSelf->top__DOT__clint_axi_arvalid))) {
            vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_arready = 1U;
            vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_araddr 
                = ((2U == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                           >> 0x18U))))
                    ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr
                    : 0ULL);
        } else {
            vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_arready = 0U;
        }
    } else {
        vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_arready = 0U;
        vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_araddr = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__583__PROF__Dcache__l372(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__583__PROF__Dcache__l372\n"); );
    // Body
    if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
        vlSelf->__Vdly__top__DOT__Dcache_u__DOT__randomBit 
            = (1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)));
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__584__PROF__axi_dcache__l145(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__584__PROF__axi_dcache__l145\n"); );
    // Body
    if (((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
         & (IData)(vlSelf->top__DOT__DcacheWrValid))) {
        vlSelf->top__DOT__axi_ls_u__DOT__storeLenth_reg 
            = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                ? 0U : 3U);
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__585__PROF__axi_dcache__l145(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__585__PROF__axi_dcache__l145\n"); );
    // Body
    if (((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
         & (IData)(vlSelf->top__DOT__DcacheWrValid))) {
        vlSelf->top__DOT__axi_ls_u__DOT__wrMask_reg 
            = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                ? (0xffU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask))
                : 0xffU);
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__586__PROF__axi_slave_ram__l345(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__586__PROF__axi_slave_ram__l345\n"); );
    // Body
    if (vlSelf->rst_n) {
        if ((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
              & (IData)(vlSelf->top__DOT__axi_mmio_ar_valid_o)) 
             & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))) {
            vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid = 1U;
            vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp = 0U;
        } else if (((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid) 
                    & (((0xaU != (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1cU)))) 
                        | (2U == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x18U)))))
                        ? 0U : (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready)))) {
            vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid = 0U;
        }
    } else {
        vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid = 0U;
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__587__PROF__clint__l203(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__587__PROF__clint__l203\n"); );
    // Body
    if (vlSelf->rst_n) {
        if ((((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready) 
              & (IData)(vlSelf->top__DOT__clint_axi_arvalid)) 
             & (~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid)))) {
            vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid = 1U;
            vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp = 0U;
        } else if (((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid) 
                    & ((2U == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                               >> 0x18U))))
                        ? (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready)
                        : 0U))) {
            vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid = 0U;
        }
    } else {
        vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid = 0U;
        vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp = 0U;
    }
}

void Vtop___024unit____Vdpiimwrap_axiSlaveWrite_TOP____024unit(QData/*63:0*/ waddr, CData/*7:0*/ size, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vtop___024root___sequent__TOP__588__PROF__axi_slave_ram__l221(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__588__PROF__axi_slave_ram__l221\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
             & (IData)(vlSelf->top__DOT__axi_mmio_w_valid_o))) {
            Vtop___024unit____Vdpiimwrap_axiSlaveWrite_TOP____024unit(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr, 
                                                                      (((0xaU 
                                                                         != 
                                                                         (0xfU 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                                                >> 0x1cU)))) 
                                                                        | (2U 
                                                                           == 
                                                                           (0xfU 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                                                >> 0x18U)))))
                                                                        ? 0U
                                                                        : 
                                                                       (7U 
                                                                        & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg))), 
                                                                      (((0xaU 
                                                                         != 
                                                                         (0xfU 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                                                >> 0x1cU)))) 
                                                                        | (2U 
                                                                           == 
                                                                           (0xfU 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                                                >> 0x18U)))))
                                                                        ? 0ULL
                                                                        : vlSelf->top__DOT__ls_axi_w_data_o), 
                                                                      (((0xaU 
                                                                         != 
                                                                         (0xfU 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                                                >> 0x1cU)))) 
                                                                        | (2U 
                                                                           == 
                                                                           (0xfU 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                                                >> 0x18U)))))
                                                                        ? 0U
                                                                        : 
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->top__DOT__ls_axi_w_strb_o))));
        }
    } else {
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0 = 0ULL;
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1 = 0ULL;
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2 = 0ULL;
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3 = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__589__PROF__regfile__l31(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__589__PROF__regfile__l31\n"); );
    // Body
    if ((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) {
        vlSelf->__Vdlyvval__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0 
            = ((0U == (0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                >> 8U))) ? 0ULL : vlSelf->top__DOT__wb_data);
        vlSelf->__Vdlyvset__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0 = 1U;
        vlSelf->__Vdlyvdim0__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0 
            = (0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                        >> 8U));
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__590__PROF__axi_dcache__l145(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__590__PROF__axi_dcache__l145\n"); );
    // Variables
    VlWide<8>/*255:0*/ __Vtemp119;
    // Body
    if (((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
         & (IData)(vlSelf->top__DOT__DcacheWrValid))) {
        VL_EXTEND_WQ(256,64, __Vtemp119, vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch);
        if ((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[0U] 
                = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                    ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U]
                    : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U]);
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[1U] 
                = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                    ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U]
                    : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U]);
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[2U] 
                = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                    ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U]
                    : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U]);
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[3U] 
                = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                    ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U]
                    : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U]);
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[4U] 
                = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                    ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U]
                    : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U]);
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[5U] 
                = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                    ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U]
                    : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U]);
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[6U] 
                = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                    ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U]
                    : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U]);
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[7U] 
                = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                    ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U]
                    : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U]);
        } else {
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[0U] 
                = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                    ? __Vtemp119[0U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                         ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U]
                                         : vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U]));
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[1U] 
                = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                    ? __Vtemp119[1U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                         ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U]
                                         : vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U]));
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[2U] 
                = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                    ? __Vtemp119[2U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                         ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U]
                                         : vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U]));
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[3U] 
                = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                    ? __Vtemp119[3U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                         ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U]
                                         : vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U]));
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[4U] 
                = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                    ? __Vtemp119[4U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                         ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U]
                                         : vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U]));
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[5U] 
                = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                    ? __Vtemp119[5U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                         ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U]
                                         : vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U]));
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[6U] 
                = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                    ? __Vtemp119[6U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                         ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U]
                                         : vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U]));
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[7U] 
                = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                    ? __Vtemp119[7U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                         ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U]
                                         : vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U]));
        }
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__598__PROF__axi_slave_ram__l292(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__598__PROF__axi_slave_ram__l292\n"); );
    // Body
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid 
        = vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__599__PROF__clint__l165(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__599__PROF__clint__l165\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid 
        = vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__602__PROF__clint__l75(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__602__PROF__clint__l75\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__aw_en 
        = vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__aw_en;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__604__PROF__clint__l74(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__604__PROF__clint__l74\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready 
        = vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_awready;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__605__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__605__PROF__S011HD1P_X32Y2D128_BW__l24\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0) {
        vlSelf->top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0[0U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0[1U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0[2U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0[3U];
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__606__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__606__PROF__S011HD1P_X32Y2D128_BW__l24\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0) {
        vlSelf->top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0[0U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0[1U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0[2U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0[3U];
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__607__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__607__PROF__S011HD1P_X32Y2D128_BW__l24\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0) {
        vlSelf->top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0[0U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0[1U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0[2U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0[3U];
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__608__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__608__PROF__S011HD1P_X32Y2D128_BW__l24\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0) {
        vlSelf->top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0[0U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0[1U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0[2U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0[3U];
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__613__PROF__axi_slave_ram__l357(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__613__PROF__axi_slave_ram__l357\n"); );
    // Body
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid 
        = vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__615__PROF__clint__l215(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__615__PROF__clint__l215\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid 
        = vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__616__PROF__clint__l192(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__616__PROF__clint__l192\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready 
        = vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_arready;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__621__PROF__axi_slave_ram__l203(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__621__PROF__axi_slave_ram__l203\n"); );
    // Body
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready 
        = vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_wready;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__625__PROF__Dcache__l374(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__625__PROF__Dcache__l374\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT__randomBit = vlSelf->__Vdly__top__DOT__Dcache_u__DOT__randomBit;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__630__PROF__axi_slave_ram__l314(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__630__PROF__axi_slave_ram__l314\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready)) 
             & (IData)(vlSelf->top__DOT__axi_mmio_ar_valid_o))) {
            vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready = 1U;
            vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr 
                = (((0xaU != (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                              >> 0x1cU)))) 
                    | (2U == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                              >> 0x18U)))))
                    ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr);
        } else {
            vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready = 0U;
        }
    } else {
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready = 0U;
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__634__PROF__axi_slave_ram__l168(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__634__PROF__axi_slave_ram__l168\n"); );
    // Body
    if (vlSelf->rst_n) {
        if ((((~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)) 
              & (IData)(vlSelf->top__DOT__axi_mmio_aw_valid_o)) 
             & (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en))) {
            vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr 
                = (((0xaU != (0xfU & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                              >> 0x1cU)))) 
                    | (2U == (0xfU & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                              >> 0x18U)))))
                    ? 0ULL : vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg);
        }
    } else {
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__635__PROF__axi_dcache__l145(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__635__PROF__axi_dcache__l145\n"); );
    // Body
    if (((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
         & (IData)(vlSelf->top__DOT__DcacheWrValid))) {
        vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg 
            = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                ? (7U & (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size))
                : 3U);
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__636__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__636__PROF__S011HD1P_X32Y2D128_BW__l22\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp127;
    VlWide<4>/*127:0*/ __Vtemp137;
    VlWide<4>/*127:0*/ __Vtemp151;
    VlWide<4>/*127:0*/ __Vtemp163;
    // Body
    if ((((((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                  | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                     & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                 & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
               | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
              | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
             | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)) 
           | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
          | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
         & (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))) {
        VL_EXTEND_WQ(128,64, __Vtemp127, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        VL_EXTEND_WQ(128,64, __Vtemp137, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        VL_EXTEND_WQ(128,64, __Vtemp151, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp163[0U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? 0U : __Vtemp127[0U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
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
                                                    __Vtemp137[0U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][0U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? 0U : 
                                            __Vtemp151[0U])
                                         : 0U) : 0U)))));
        __Vtemp163[1U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? 0U : __Vtemp127[1U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
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
                                                    __Vtemp137[1U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][1U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? 0U : 
                                            __Vtemp151[1U])
                                         : 0U) : 0U)))));
        __Vtemp163[2U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                     : __Vtemp127[2U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
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
                                                    __Vtemp137[2U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][2U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                             : __Vtemp151[2U])
                                         : 0U) : 0U)))));
        __Vtemp163[3U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                                >> 0x20U))
                                     : __Vtemp127[3U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
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
                                                    __Vtemp137[3U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][3U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                        >> 0x20U))
                                             : __Vtemp151[3U])
                                         : 0U) : 0U)))));
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0[0U] 
            = __Vtemp163[0U];
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0[1U] 
            = __Vtemp163[1U];
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0[2U] 
            = __Vtemp163[2U];
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0[3U] 
            = __Vtemp163[3U];
        vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0 
            = vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A;
    }
    if ((1U & (((((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                        | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                           & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                       & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                      | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                     | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                    | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                   | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                  | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)) 
                 | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
               & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))))) {
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][0U];
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][1U];
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][2U];
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][3U];
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U] 
            = VL_RANDOM_I(32);
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__637__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__637__PROF__S011HD1P_X32Y2D128_BW__l22\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp170;
    VlWide<4>/*127:0*/ __Vtemp180;
    VlWide<4>/*127:0*/ __Vtemp194;
    VlWide<4>/*127:0*/ __Vtemp206;
    // Body
    if ((((((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                  | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                     & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                 & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
               | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
              | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
             | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)) 
           | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
          | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
         & (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))) {
        VL_EXTEND_WQ(128,64, __Vtemp170, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        VL_EXTEND_WQ(128,64, __Vtemp180, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        VL_EXTEND_WQ(128,64, __Vtemp194, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp206[0U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? 0U : __Vtemp170[0U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
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
                                                    __Vtemp180[0U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][0U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? 0U : 
                                            __Vtemp194[0U])
                                         : 0U) : 0U)))));
        __Vtemp206[1U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? 0U : __Vtemp170[1U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
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
                                                    __Vtemp180[1U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][1U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? 0U : 
                                            __Vtemp194[1U])
                                         : 0U) : 0U)))));
        __Vtemp206[2U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                     : __Vtemp170[2U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
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
                                                    __Vtemp180[2U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][2U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                             : __Vtemp194[2U])
                                         : 0U) : 0U)))));
        __Vtemp206[3U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                                >> 0x20U))
                                     : __Vtemp170[3U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
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
                                                    __Vtemp180[3U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][3U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                        >> 0x20U))
                                             : __Vtemp194[3U])
                                         : 0U) : 0U)))));
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0[0U] 
            = __Vtemp206[0U];
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0[1U] 
            = __Vtemp206[1U];
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0[2U] 
            = __Vtemp206[2U];
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0[3U] 
            = __Vtemp206[3U];
        vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0 
            = vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A;
    }
    if ((1U & (((((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                        | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                           & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                       & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                      | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                     | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                    | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                   | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                  | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)) 
                 | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
               & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))))) {
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][0U];
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][1U];
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][2U];
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][3U];
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U] 
            = VL_RANDOM_I(32);
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__638__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__638__PROF__S011HD1P_X32Y2D128_BW__l22\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp213;
    VlWide<4>/*127:0*/ __Vtemp223;
    VlWide<4>/*127:0*/ __Vtemp237;
    VlWide<4>/*127:0*/ __Vtemp249;
    // Body
    if ((((((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                  | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                     & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                 & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
               | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
              | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
             | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)) 
           | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
          | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
         & (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))) {
        VL_EXTEND_WQ(128,64, __Vtemp213, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        VL_EXTEND_WQ(128,64, __Vtemp223, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        VL_EXTEND_WQ(128,64, __Vtemp237, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp249[0U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? 0U : __Vtemp213[0U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
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
                                                    __Vtemp223[0U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][0U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? 0U : 
                                            __Vtemp237[0U])
                                         : 0U) : 0U)))));
        __Vtemp249[1U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? 0U : __Vtemp213[1U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
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
                                                    __Vtemp223[1U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][1U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? 0U : 
                                            __Vtemp237[1U])
                                         : 0U) : 0U)))));
        __Vtemp249[2U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                     : __Vtemp213[2U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
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
                                                    __Vtemp223[2U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][2U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                             : __Vtemp237[2U])
                                         : 0U) : 0U)))));
        __Vtemp249[3U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                                >> 0x20U))
                                     : __Vtemp213[3U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
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
                                                    __Vtemp223[3U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][3U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                        >> 0x20U))
                                             : __Vtemp237[3U])
                                         : 0U) : 0U)))));
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0[0U] 
            = __Vtemp249[0U];
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0[1U] 
            = __Vtemp249[1U];
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0[2U] 
            = __Vtemp249[2U];
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0[3U] 
            = __Vtemp249[3U];
        vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0 
            = vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A;
    }
    if ((1U & (((((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                        | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                           & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                       & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                      | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                     | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                    | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                   | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                  | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)) 
                 | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
               & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))))) {
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][0U];
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][1U];
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][2U];
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][3U];
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U] 
            = VL_RANDOM_I(32);
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__639__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__639__PROF__S011HD1P_X32Y2D128_BW__l22\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp256;
    VlWide<4>/*127:0*/ __Vtemp266;
    VlWide<4>/*127:0*/ __Vtemp280;
    VlWide<4>/*127:0*/ __Vtemp292;
    // Body
    if ((((((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                  | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                     & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                 & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
               | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
              | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
             | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)) 
           | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
          | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
         & (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))) {
        VL_EXTEND_WQ(128,64, __Vtemp256, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        VL_EXTEND_WQ(128,64, __Vtemp266, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        VL_EXTEND_WQ(128,64, __Vtemp280, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp292[0U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? 0U : __Vtemp256[0U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
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
                                                    __Vtemp266[0U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][0U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? 0U : 
                                            __Vtemp280[0U])
                                         : 0U) : 0U)))));
        __Vtemp292[1U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? 0U : __Vtemp256[1U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
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
                                                    __Vtemp266[1U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][1U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? 0U : 
                                            __Vtemp280[1U])
                                         : 0U) : 0U)))));
        __Vtemp292[2U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                     : __Vtemp256[2U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
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
                                                    __Vtemp266[2U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][2U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                             : __Vtemp280[2U])
                                         : 0U) : 0U)))));
        __Vtemp292[3U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                                >> 0x20U))
                                     : __Vtemp256[3U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
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
                                                    __Vtemp266[3U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][3U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                        >> 0x20U))
                                             : __Vtemp280[3U])
                                         : 0U) : 0U)))));
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0[0U] 
            = __Vtemp292[0U];
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0[1U] 
            = __Vtemp292[1U];
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0[2U] 
            = __Vtemp292[2U];
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0[3U] 
            = __Vtemp292[3U];
        vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0 
            = vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A;
    }
    if ((1U & (((((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                        | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                           & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                       & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                      | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                     | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                    | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                   | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                  | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)) 
                 | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
               & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))))) {
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][0U];
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][1U];
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][2U];
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][3U];
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U] 
            = VL_RANDOM_I(32);
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__642__PROF__axi_slave_ram__l150(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__642__PROF__axi_slave_ram__l150\n"); );
    // Body
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en = vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__aw_en;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__644__PROF__axi_slave_ram__l149(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__644__PROF__axi_slave_ram__l149\n"); );
    // Body
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready 
        = vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_awready;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__647__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__647__PROF__S011HD1P_X32Y2D128_BW__l24\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0) {
        vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0[0U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0[1U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0[2U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0[3U];
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__649__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__649__PROF__S011HD1P_X32Y2D128_BW__l24\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0) {
        vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0[0U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0[1U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0[2U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0[3U];
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__651__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__651__PROF__S011HD1P_X32Y2D128_BW__l24\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0) {
        vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0[0U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0[1U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0[2U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0[3U];
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__653__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__653__PROF__S011HD1P_X32Y2D128_BW__l24\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0) {
        vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0[0U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0[1U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0[2U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0[3U];
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__655__PROF__axi_dcache__l145(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__655__PROF__axi_dcache__l145\n"); );
    // Body
    if (((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
         & (IData)(vlSelf->top__DOT__DcacheWrValid))) {
        vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
            = vlSelf->top__DOT__DcacheWrAddr;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__669__PROF__dff__l12(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__669__PROF__dff__l12\n"); );
    // Body
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__resultValidReg_q 
        = ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n) 
           & ((~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__stateReg)) 
              | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__stateReg) 
                 & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q))));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__674__PROF__Dcache__l648(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__674__PROF__Dcache__l648\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT__cleanCnt = vlSelf->__Vdly__top__DOT__Dcache_u__DOT__cleanCnt;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__682__PROF__Icache__l291(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__682__PROF__Icache__l291\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
             & (IData)(vlSelf->top__DOT__dataValid_o))) {
            VL_ASSIGNSEL_WIIQ(256,64,(0xffU & ((IData)(vlSelf->top__DOT__cache_dut__DOT__rdCnt) 
                                               << 6U)), vlSelf->top__DOT__cache_dut__DOT__rdBuffer, 
                              ((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data));
        }
    } else {
        vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U] = 0U;
        vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U] = 0U;
        vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U] = 0U;
        vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U] = 0U;
        vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U] = 0U;
        vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U] = 0U;
        vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U] = 0U;
        vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U] = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__683__PROF__dff__l12(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__683__PROF__dff__l12\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__ls_stall_n) {
            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U] 
                = vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[0U];
            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U] 
                = vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[1U];
            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                = vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[2U];
            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U] 
                = vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[3U];
            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U] 
                = vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[4U];
            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U] 
                = vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[5U];
            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                = vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[6U];
            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                = vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[7U];
            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U] 
                = vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[8U];
            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U] 
                = vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[9U];
        }
    } else {
        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U] = 0U;
        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U] = 0U;
        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] = 0U;
        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U] = 0U;
        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U] = 0U;
        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U] = 0U;
        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] = 0U;
        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] = 0U;
        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U] = 0U;
        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U] = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__684__PROF__Dcache__l452(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__684__PROF__Dcache__l452\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
             & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                        >> 0x20U)))) {
            vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch 
                = vlSelf->top__DOT__Dcache_u__DOT__storeData;
        }
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__696__PROF__Dcache__l361(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__696__PROF__Dcache__l361\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
             & (IData)(vlSelf->top__DOT__lsAxiRdDataVAlid))) {
            VL_ASSIGNSEL_WIIQ(256,64,(0xffU & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__rdCnt) 
                                               << 6U)), vlSelf->top__DOT__Dcache_u__DOT__rdBuffer, vlSelf->top__DOT__ls_axi_r_data_i);
        }
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U] = 0U;
        vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U] = 0U;
        vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U] = 0U;
        vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U] = 0U;
        vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U] = 0U;
        vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U] = 0U;
        vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U] = 0U;
        vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U] = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__697__PROF__axi_dcache__l95(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__697__PROF__axi_dcache__l95\n"); );
    // Body
    vlSelf->top__DOT__axi_ls_u__DOT__w_state = ((IData)(vlSelf->rst_n)
                                                 ? (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state_next)
                                                 : 0U);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__698__PROF__mulTop__l17(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__698__PROF__mulTop__l17\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__mul_valid) {
            vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__stateReg = 1U;
        } else if (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q) {
            vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__stateReg = 0U;
        }
    } else {
        vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__stateReg = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__699__PROF__Icache__l286(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__699__PROF__Icache__l286\n"); );
    // Body
    vlSelf->top__DOT__cache_dut__DOT__rdCnt = vlSelf->__Vdly__top__DOT__cache_dut__DOT__rdCnt;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__705__PROF__Dcache__l357(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__705__PROF__Dcache__l357\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT__rdCnt = vlSelf->__Vdly__top__DOT__Dcache_u__DOT__rdCnt;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__710__PROF__Icache__l58(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__710__PROF__Icache__l58\n"); );
    // Body
    vlSelf->top__DOT__cache_dut__DOT__cacheCurState 
        = ((IData)(vlSelf->rst_n) ? (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheNexState)
            : 0U);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__715__PROF__Dcache__l203(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__715__PROF__Dcache__l203\n"); );
    // Body
    if (vlSelf->rst_n) {
        if ((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
               | ((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                  & ((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i) 
                     & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit) 
                        | (~ (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i)))))) 
              | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                 & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i))) 
             & (IData)(vlSelf->top__DOT__ls_stall_n))) {
            vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                = (((QData)((IData)(((3U != (0x7fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 4U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1cU)))) 
                                     | (8U == (0x1fU 
                                               & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                   << 2U) 
                                                  | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                     >> 0x1eU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i)));
        }
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__reqLatch = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__726__PROF__mul64__l71(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__726__PROF__mul64__l71\n"); );
    // Body
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q 
        = ((IData)(vlSelf->rst_n) & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_d));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__743__PROF__Dcache__l92(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__743__PROF__Dcache__l92\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT__cacheCurState 
        = ((IData)(vlSelf->rst_n) ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheNexState)
            : 0U);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__744__PROF__dff__l12(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__744__PROF__dff__l12\n"); );
    // Variables
    VlWide<10>/*319:0*/ __Vtemp301;
    // Body
    if (vlSelf->rst_n) {
        if ((1U & (~ (((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                       | (IData)(vlSelf->top__DOT__dataNotOk)) 
                      | (IData)(vlSelf->top__DOT__ex_not_ok))))) {
            __Vtemp301[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                = __Vtemp301[0U];
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U] 
                = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                    >> 4U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                       >> 0x20U)) << 0x1cU));
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U] 
                = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                             >> 0x20U)) >> 4U) | ((IData)(
                                                          ((0U 
                                                            == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                            ? 0ULL
                                                            : 
                                                           vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                                           [vlSelf->top__DOT__rs1_idx_id])) 
                                                  << 0x1cU));
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U] 
                = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                              ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                             [vlSelf->top__DOT__rs1_idx_id])) 
                    >> 4U) | ((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs1_idx_id]) 
                                       >> 0x20U)) << 0x1cU));
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U] 
                = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                               ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                              [vlSelf->top__DOT__rs1_idx_id]) 
                             >> 0x20U)) >> 4U) | ((IData)(
                                                          ((0U 
                                                            == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                            ? 0ULL
                                                            : 
                                                           vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                                           [vlSelf->top__DOT__rs2_idx_id])) 
                                                  << 0x1cU));
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U] 
                = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                              ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                             [vlSelf->top__DOT__rs2_idx_id])) 
                    >> 4U) | ((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs2_idx_id]) 
                                       >> 0x20U)) << 0x1cU));
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                               ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                              [vlSelf->top__DOT__rs2_idx_id]) 
                             >> 0x20U)) >> 4U) | (((IData)(vlSelf->top__DOT__ex_flush)
                                                    ? 0U
                                                    : 
                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                                                  << 0x1cU));
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                = ((((IData)(vlSelf->top__DOT__ex_flush)
                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                    >> 4U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                        ? 0ULL : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                              << 0x1cU));
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                              ? 0ULL : (((QData)((IData)(
                                                         vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                    >> 4U) | ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                       >> 0x20U)) << 0x1cU));
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                              ? 0ULL : (((QData)((IData)(
                                                         vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                            >> 0x20U)) >> 4U);
        }
    } else {
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] = 0U;
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U] = 0U;
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U] = 0U;
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U] = 0U;
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U] = 0U;
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U] = 0U;
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] = 0U;
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] = 0U;
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] = 0U;
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] = 0U;
    }
}
