// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

extern const VlWide<8>/*255:0*/ Vtop__ConstPool__CONST_d5724acc_0;

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<8>/*255:0*/ __Vtemp386;
    VlWide<8>/*255:0*/ __Vtemp391;
    VlWide<8>/*255:0*/ __Vtemp396;
    VlWide<8>/*255:0*/ __Vtemp400;
    VlWide<4>/*127:0*/ __Vtemp401;
    VlWide<4>/*127:0*/ __Vtemp402;
    VlWide<3>/*95:0*/ __Vtemp403;
    VlWide<3>/*95:0*/ __Vtemp405;
    VlWide<3>/*95:0*/ __Vtemp406;
    VlWide<3>/*95:0*/ __Vtemp407;
    VlWide<3>/*95:0*/ __Vtemp408;
    VlWide<3>/*95:0*/ __Vtemp409;
    VlWide<3>/*95:0*/ __Vtemp412;
    VlWide<3>/*95:0*/ __Vtemp413;
    VlWide<3>/*95:0*/ __Vtemp414;
    VlWide<3>/*95:0*/ __Vtemp415;
    VlWide<3>/*95:0*/ __Vtemp416;
    VlWide<4>/*127:0*/ __Vtemp420;
    VlWide<4>/*127:0*/ __Vtemp427;
    VlWide<4>/*127:0*/ __Vtemp430;
    VlWide<4>/*127:0*/ __Vtemp437;
    VlWide<4>/*127:0*/ __Vtemp440;
    VlWide<4>/*127:0*/ __Vtemp449;
    VlWide<4>/*127:0*/ __Vtemp452;
    VlWide<4>/*127:0*/ __Vtemp461;
    VlWide<4>/*127:0*/ __Vtemp464;
    VlWide<4>/*127:0*/ __Vtemp474;
    VlWide<4>/*127:0*/ __Vtemp477;
    VlWide<4>/*127:0*/ __Vtemp487;
    VlWide<10>/*319:0*/ __Vtemp492;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
            tracep->chgBit(oldp+1,((1U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg),64);
            tracep->chgBit(oldp+4,((3U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
            tracep->chgBit(oldp+5,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__axi_ls_u__DOT__rdAddr_reg),64);
            tracep->chgBit(oldp+8,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
            tracep->chgQData(oldp+9,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
            tracep->chgQData(oldp+11,((((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                        << 0x3dU) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                         << 0x1dU) 
                                        | ((QData)((IData)(
                                                           vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                           >> 3U)))),64);
            tracep->chgQData(oldp+13,((((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                        << 0x3dU) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                         << 0x1dU) 
                                        | ((QData)((IData)(
                                                           vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                           >> 3U)))),64);
            tracep->chgQData(oldp+15,((((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                        << 0x3dU) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                         << 0x1dU) 
                                        | ((QData)((IData)(
                                                           vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                           >> 3U)))),64);
            tracep->chgIData(oldp+17,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                        << 0x1dU) | 
                                       (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                        >> 3U))),32);
            tracep->chgBit(oldp+18,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                           >> 2U))));
            tracep->chgQData(oldp+19,(vlSelf->top__DOT__csrdata_ls),64);
            tracep->chgQData(oldp+21,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
            tracep->chgQData(oldp+23,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
            tracep->chgBit(oldp+25,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                           >> 1U))));
            tracep->chgBit(oldp+26,((3U == (0x7fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 3U)))));
            tracep->chgBit(oldp+27,((8U == (0x1fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 5U)))));
            tracep->chgCData(oldp+28,(((((1U & ((- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh))) 
                                                | (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu))))) 
                                         | (2U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw))))) 
                                        | (2U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu))))) 
                                       | (3U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld)))))),3);
            tracep->chgQData(oldp+29,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__reg_data_out),64);
            tracep->chgBit(oldp+31,((0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
            tracep->chgBit(oldp+32,(vlSelf->top__DOT__in_intr_ls));
            tracep->chgBit(oldp+33,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
            tracep->chgBit(oldp+34,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
            tracep->chgBit(oldp+35,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
            tracep->chgCData(oldp+36,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                        ? 0U : 1U)),4);
            tracep->chgCData(oldp+37,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                        ? (IData)(vlSelf->top__DOT__if_axi_ar_region_o)
                                        : (IData)(vlSelf->top__DOT__ls_axi_ar_region_o))),4);
            tracep->chgBit(oldp+38,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
            tracep->chgBit(oldp+39,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
            tracep->chgBit(oldp+40,(vlSelf->top__DOT__cache_dut__DOT__uncachedOk));
            tracep->chgQData(oldp+41,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
            tracep->chgCData(oldp+43,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
            tracep->chgCData(oldp+44,((0x3fU & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 5U)))),6);
            tracep->chgIData(oldp+45,((0x1fffffU & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 0xbU)))),21);
            tracep->chgQData(oldp+46,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
            tracep->chgBit(oldp+50,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                   >> 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                               >> 5U))))))));
            tracep->chgBit(oldp+51,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                   >> 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                               >> 5U))))))));
            tracep->chgIData(oldp+52,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                      [(0x3fU & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 5U)))]),21);
            tracep->chgIData(oldp+53,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                      [(0x3fU & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 5U)))]),21);
            tracep->chgQData(oldp+54,((((QData)((IData)(
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
            tracep->chgBit(oldp+56,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
            tracep->chgCData(oldp+57,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state),2);
            tracep->chgBit(oldp+58,(((0x73U == (0x7fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 3U))) 
                                     & (((1U == (7U 
                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                    >> 0xfU))) 
                                         | (3U == (7U 
                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                      >> 0xfU)))) 
                                        | (2U == (7U 
                                                  & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                     >> 0xfU)))))));
            tracep->chgQData(oldp+59,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src1Reg),64);
            tracep->chgQData(oldp+61,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2Reg),64);
            tracep->chgQData(oldp+63,(((2U & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_type_r))
                                        ? ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign)
                                            ? (1ULL 
                                               + (~ vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s))
                                            : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s)
                                        : (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign) 
                                            ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_sign))
                                            ? (1ULL 
                                               + (~ 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[0U])))))
                                            : (((QData)((IData)(
                                                                vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[0U])))))),64);
            tracep->chgBit(oldp+65,((1U & (~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_busy)))));
            tracep->chgCData(oldp+66,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_type_r),2);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_N_r),64);
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_P_r),64);
            tracep->chgWData(oldp+71,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg),128);
            tracep->chgQData(oldp+75,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__restore_remainder),64);
            tracep->chgCData(oldp+77,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_cnt),6);
            tracep->chgBit(oldp+78,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_busy));
            tracep->chgBit(oldp+79,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign));
            tracep->chgBit(oldp+80,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_sign));
            tracep->chgQData(oldp+81,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2),64);
            tracep->chgQData(oldp+83,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__r_64),64);
            tracep->chgBit(oldp+85,(((1U & (IData)(
                                                   (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__r_64 
                                                    >> 0x3fU)))
                                      ? 0U : 1U)));
            tracep->chgQData(oldp+86,((((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign) 
                                        ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_sign))
                                        ? (1ULL + (~ 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[0U])))))
                                        : (((QData)((IData)(
                                                            vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[0U]))))),64);
            tracep->chgQData(oldp+88,(((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign)
                                        ? (1ULL + (~ vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s))
                                        : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s)),64);
            tracep->chgQData(oldp+90,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s),64);
            tracep->chgQData(oldp+92,((((QData)((IData)(
                                                        vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U])) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U])) 
                                         << 1U) | ((QData)((IData)(
                                                                   vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U])) 
                                                   >> 0x1fU)))),64);
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64),64);
            tracep->chgQData(oldp+96,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64),64);
            tracep->chgBit(oldp+98,((1U & ((((((((((IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                            >> 0x3fU)) 
                                                   | ((IData)(
                                                              (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                               >> 0x3fU)) 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                                 >> 0x3eU)))) 
                                                  | ((IData)(
                                                             (0xc000000000000000ULL 
                                                              == 
                                                              (0xc000000000000000ULL 
                                                               & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                                >> 0x3dU)))) 
                                                 | ((IData)(
                                                            (0xe000000000000000ULL 
                                                             == 
                                                             (0xe000000000000000ULL 
                                                              & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                               >> 0x3cU)))) 
                                                | ((0xfU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                                >> 0x3cU)))) 
                                                   & ((((IData)(
                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                                 >> 0x3bU)) 
                                                        | ((IData)(
                                                                   (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                                    >> 0x3bU)) 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                                      >> 0x3aU)))) 
                                                       | ((IData)(
                                                                  (0xc00000000000000ULL 
                                                                   == 
                                                                   (0xc00000000000000ULL 
                                                                    & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                                     >> 0x39U)))) 
                                                      | ((IData)(
                                                                 (0xe00000000000000ULL 
                                                                  == 
                                                                  (0xe00000000000000ULL 
                                                                   & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                                    >> 0x38U)))))) 
                                               | ((IData)(
                                                          (0xff00000000000000ULL 
                                                           == 
                                                           (0xff00000000000000ULL 
                                                            & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                                  & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__gx2))) 
                                              | ((IData)(
                                                         (0xfff0000000000000ULL 
                                                          == 
                                                          (0xfff0000000000000ULL 
                                                           & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                                 & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__gx1))) 
                                             | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px4) 
                                                & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__gx3))) 
                                            | (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px4) 
                                                & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px3)) 
                                               & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__gx2))) 
                                           | ((((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px4) 
                                                & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px3)) 
                                               & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px2)) 
                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__gx1))))));
            tracep->chgBit(oldp+99,(((((IData)((0xffffULL 
                                                == 
                                                (0xffffULL 
                                                 & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                       & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px2)) 
                                      & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px3)) 
                                     & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px4))));
            tracep->chgBit(oldp+100,((IData)((0xffffULL 
                                              == (0xffffULL 
                                                  & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64)))));
            tracep->chgBit(oldp+101,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px2));
            tracep->chgBit(oldp+102,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px3));
            tracep->chgBit(oldp+103,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__px4));
            tracep->chgBit(oldp+104,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__gx1));
            tracep->chgBit(oldp+105,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__gx2));
            tracep->chgBit(oldp+106,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__gx3));
            tracep->chgBit(oldp+107,((1U & (((((((IData)(
                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                          >> 0x3fU)) 
                                                 | ((IData)(
                                                            (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                             >> 0x3fU)) 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                               >> 0x3eU)))) 
                                                | ((IData)(
                                                           (0xc000000000000000ULL 
                                                            == 
                                                            (0xc000000000000000ULL 
                                                             & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                              >> 0x3dU)))) 
                                               | ((IData)(
                                                          (0xe000000000000000ULL 
                                                           == 
                                                           (0xe000000000000000ULL 
                                                            & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                             >> 0x3cU)))) 
                                              | ((0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                              >> 0x3cU)))) 
                                                 & ((((IData)(
                                                              (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                               >> 0x3bU)) 
                                                      | ((IData)(
                                                                 (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                                  >> 0x3bU)) 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                                    >> 0x3aU)))) 
                                                     | ((IData)(
                                                                (0xc00000000000000ULL 
                                                                 == 
                                                                 (0xc00000000000000ULL 
                                                                  & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                                   >> 0x39U)))) 
                                                    | ((IData)(
                                                               (0xe00000000000000ULL 
                                                                == 
                                                                (0xe00000000000000ULL 
                                                                 & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                                  >> 0x38U)))))) 
                                             | ((IData)(
                                                        (0xff00000000000000ULL 
                                                         == 
                                                         (0xff00000000000000ULL 
                                                          & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                                & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__gx2))) 
                                            | ((IData)(
                                                       (0xfff0000000000000ULL 
                                                        == 
                                                        (0xfff0000000000000ULL 
                                                         & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                               & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__gx1))))));
            tracep->chgBit(oldp+108,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__c31));
            tracep->chgBit(oldp+109,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__c47));
            tracep->chgSData(oldp+110,((0xffffU & (
                                                   (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                                    << 1U) 
                                                   | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U] 
                                                      >> 0x1fU)))),16);
            tracep->chgSData(oldp+111,((0xffffU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2))),16);
            tracep->chgSData(oldp+112,((0xffffU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))),16);
            tracep->chgSData(oldp+113,((0xffffU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64))),16);
            tracep->chgSData(oldp+114,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT____Vcellout__u1__s_16),16);
            tracep->chgBit(oldp+115,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__gx1));
            tracep->chgBit(oldp+116,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__c7));
            tracep->chgBit(oldp+117,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__c11));
            tracep->chgBit(oldp+118,((0xfU == (0xfU 
                                               & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64)))));
            tracep->chgBit(oldp+119,((0xfU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                          >> 4U))))));
            tracep->chgBit(oldp+120,((0xfU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                          >> 8U))))));
            tracep->chgBit(oldp+121,((0xfU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                          >> 0xcU))))));
            tracep->chgBit(oldp+122,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__gx2));
            tracep->chgBit(oldp+123,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__gx3));
            tracep->chgBit(oldp+124,((1U & ((((IData)(
                                                      (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                       >> 0xfU)) 
                                              | ((IData)(
                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                          >> 0xfU)) 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                            >> 0xeU)))) 
                                             | ((IData)(
                                                        (0xc000ULL 
                                                         == 
                                                         (0xc000ULL 
                                                          & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                           >> 0xdU)))) 
                                            | ((IData)(
                                                       (0xe000ULL 
                                                        == 
                                                        (0xe000ULL 
                                                         & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                          >> 0xcU)))))));
            tracep->chgCData(oldp+125,((0xfU & ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                                 << 1U) 
                                                | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U] 
                                                   >> 0x1fU)))),4);
            tracep->chgCData(oldp+126,((0xfU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2))),4);
            tracep->chgCData(oldp+127,((0xfU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))),4);
            tracep->chgCData(oldp+128,((0xfU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64))),4);
            tracep->chgCData(oldp+129,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT____Vcellout__u1__s_4),4);
            tracep->chgCData(oldp+130,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__u1__DOT__c_int),4);
            tracep->chgCData(oldp+131,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                                >> 3U))),4);
            tracep->chgCData(oldp+132,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                        >> 4U)))),4);
            tracep->chgCData(oldp+133,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                        >> 4U)))),4);
            tracep->chgCData(oldp+134,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 4U)))),4);
            tracep->chgCData(oldp+135,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT____Vcellout__u2__s_4),4);
            tracep->chgCData(oldp+136,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__u2__DOT__c_int),4);
            tracep->chgCData(oldp+137,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                                >> 7U))),4);
            tracep->chgCData(oldp+138,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                        >> 8U)))),4);
            tracep->chgCData(oldp+139,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                        >> 8U)))),4);
            tracep->chgCData(oldp+140,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 8U)))),4);
            tracep->chgCData(oldp+141,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT____Vcellout__u3__s_4),4);
            tracep->chgCData(oldp+142,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__u3__DOT__c_int),4);
            tracep->chgCData(oldp+143,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                                >> 0xbU))),4);
            tracep->chgCData(oldp+144,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                        >> 0xcU)))),4);
            tracep->chgCData(oldp+145,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                        >> 0xcU)))),4);
            tracep->chgCData(oldp+146,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0xcU)))),4);
            tracep->chgCData(oldp+147,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT____Vcellout__u4__s_4),4);
            tracep->chgCData(oldp+148,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u1__DOT__u4__DOT__c_int),4);
            tracep->chgSData(oldp+149,((0xffffU & (
                                                   vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                                   >> 0xfU))),16);
            tracep->chgSData(oldp+150,((0xffffU & (IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                           >> 0x10U)))),16);
            tracep->chgSData(oldp+151,((0xffffU & (IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                           >> 0x10U)))),16);
            tracep->chgSData(oldp+152,((0xffffU & (IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                           >> 0x10U)))),16);
            tracep->chgSData(oldp+153,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT____Vcellout__u2__s_16),16);
            tracep->chgBit(oldp+154,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__c3));
            tracep->chgBit(oldp+155,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__c7));
            tracep->chgBit(oldp+156,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__c11));
            tracep->chgBit(oldp+157,((0xfU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                          >> 0x10U))))));
            tracep->chgBit(oldp+158,((0xfU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                          >> 0x14U))))));
            tracep->chgBit(oldp+159,((0xfU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                          >> 0x18U))))));
            tracep->chgBit(oldp+160,((0xfU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                          >> 0x1cU))))));
            tracep->chgBit(oldp+161,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__gx1));
            tracep->chgBit(oldp+162,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__gx2));
            tracep->chgBit(oldp+163,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__gx3));
            tracep->chgBit(oldp+164,((1U & ((((IData)(
                                                      (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                       >> 0x1fU)) 
                                              | ((IData)(
                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                          >> 0x1fU)) 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                            >> 0x1eU)))) 
                                             | ((IData)(
                                                        (0xc0000000ULL 
                                                         == 
                                                         (0xc0000000ULL 
                                                          & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                           >> 0x1dU)))) 
                                            | ((IData)(
                                                       (0xe0000000ULL 
                                                        == 
                                                        (0xe0000000ULL 
                                                         & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                          >> 0x1cU)))))));
            tracep->chgCData(oldp+165,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                                >> 0xfU))),4);
            tracep->chgCData(oldp+166,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                        >> 0x10U)))),4);
            tracep->chgCData(oldp+167,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                        >> 0x10U)))),4);
            tracep->chgCData(oldp+168,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0x10U)))),4);
            tracep->chgCData(oldp+169,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT____Vcellout__u1__s_4),4);
            tracep->chgCData(oldp+170,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__u1__DOT__c_int),4);
            tracep->chgCData(oldp+171,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                                >> 0x13U))),4);
            tracep->chgCData(oldp+172,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                        >> 0x14U)))),4);
            tracep->chgCData(oldp+173,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                        >> 0x14U)))),4);
            tracep->chgCData(oldp+174,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0x14U)))),4);
            tracep->chgCData(oldp+175,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT____Vcellout__u2__s_4),4);
            tracep->chgCData(oldp+176,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__u2__DOT__c_int),4);
            tracep->chgCData(oldp+177,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                                >> 0x17U))),4);
            tracep->chgCData(oldp+178,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                        >> 0x18U)))),4);
            tracep->chgCData(oldp+179,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                        >> 0x18U)))),4);
            tracep->chgCData(oldp+180,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0x18U)))),4);
            tracep->chgCData(oldp+181,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT____Vcellout__u3__s_4),4);
            tracep->chgCData(oldp+182,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__u3__DOT__c_int),4);
            tracep->chgCData(oldp+183,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                                >> 0x1bU))),4);
            tracep->chgCData(oldp+184,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                        >> 0x1cU)))),4);
            tracep->chgCData(oldp+185,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                        >> 0x1cU)))),4);
            tracep->chgCData(oldp+186,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0x1cU)))),4);
            tracep->chgCData(oldp+187,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT____Vcellout__u4__s_4),4);
            tracep->chgCData(oldp+188,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u2__DOT__u4__DOT__c_int),4);
            tracep->chgSData(oldp+189,((0xffffU & (
                                                   (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                                    << 1U) 
                                                   | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                                      >> 0x1fU)))),16);
            tracep->chgSData(oldp+190,((0xffffU & (IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                           >> 0x20U)))),16);
            tracep->chgSData(oldp+191,((0xffffU & (IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                           >> 0x20U)))),16);
            tracep->chgSData(oldp+192,((0xffffU & (IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                           >> 0x20U)))),16);
            tracep->chgSData(oldp+193,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT____Vcellout__u3__s_16),16);
            tracep->chgBit(oldp+194,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__c3));
            tracep->chgBit(oldp+195,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__c7));
            tracep->chgBit(oldp+196,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__c11));
            tracep->chgBit(oldp+197,((0xfU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                          >> 0x20U))))));
            tracep->chgBit(oldp+198,((0xfU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                          >> 0x24U))))));
            tracep->chgBit(oldp+199,((0xfU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                          >> 0x28U))))));
            tracep->chgBit(oldp+200,((0xfU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                          >> 0x2cU))))));
            tracep->chgBit(oldp+201,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__gx1));
            tracep->chgBit(oldp+202,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__gx2));
            tracep->chgBit(oldp+203,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__gx3));
            tracep->chgBit(oldp+204,((1U & ((((IData)(
                                                      (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                       >> 0x2fU)) 
                                              | ((IData)(
                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                          >> 0x2fU)) 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                            >> 0x2eU)))) 
                                             | ((IData)(
                                                        (0xc00000000000ULL 
                                                         == 
                                                         (0xc00000000000ULL 
                                                          & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                           >> 0x2dU)))) 
                                            | ((IData)(
                                                       (0xe00000000000ULL 
                                                        == 
                                                        (0xe00000000000ULL 
                                                         & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                          >> 0x2cU)))))));
            tracep->chgCData(oldp+205,((0xfU & ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                                 << 1U) 
                                                | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[2U] 
                                                   >> 0x1fU)))),4);
            tracep->chgCData(oldp+206,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                        >> 0x20U)))),4);
            tracep->chgCData(oldp+207,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                        >> 0x20U)))),4);
            tracep->chgCData(oldp+208,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0x20U)))),4);
            tracep->chgCData(oldp+209,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT____Vcellout__u1__s_4),4);
            tracep->chgCData(oldp+210,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__u1__DOT__c_int),4);
            tracep->chgCData(oldp+211,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                                >> 3U))),4);
            tracep->chgCData(oldp+212,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                        >> 0x24U)))),4);
            tracep->chgCData(oldp+213,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                        >> 0x24U)))),4);
            tracep->chgCData(oldp+214,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0x24U)))),4);
            tracep->chgCData(oldp+215,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT____Vcellout__u2__s_4),4);
            tracep->chgCData(oldp+216,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__u2__DOT__c_int),4);
            tracep->chgCData(oldp+217,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                                >> 7U))),4);
            tracep->chgCData(oldp+218,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                        >> 0x28U)))),4);
            tracep->chgCData(oldp+219,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                        >> 0x28U)))),4);
            tracep->chgCData(oldp+220,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0x28U)))),4);
            tracep->chgCData(oldp+221,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT____Vcellout__u3__s_4),4);
            tracep->chgCData(oldp+222,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__u3__DOT__c_int),4);
            tracep->chgCData(oldp+223,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                                >> 0xbU))),4);
            tracep->chgCData(oldp+224,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                        >> 0x2cU)))),4);
            tracep->chgCData(oldp+225,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                        >> 0x2cU)))),4);
            tracep->chgCData(oldp+226,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0x2cU)))),4);
            tracep->chgCData(oldp+227,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT____Vcellout__u4__s_4),4);
            tracep->chgCData(oldp+228,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u3__DOT__u4__DOT__c_int),4);
            tracep->chgSData(oldp+229,((0xffffU & (
                                                   vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                                   >> 0xfU))),16);
            tracep->chgSData(oldp+230,((0xffffU & (IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                           >> 0x30U)))),16);
            tracep->chgSData(oldp+231,((0xffffU & (IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                           >> 0x30U)))),16);
            tracep->chgSData(oldp+232,((0xffffU & (IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                           >> 0x30U)))),16);
            tracep->chgSData(oldp+233,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT____Vcellout__u4__s_16),16);
            tracep->chgBit(oldp+234,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__c3));
            tracep->chgBit(oldp+235,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__c7));
            tracep->chgBit(oldp+236,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__c11));
            tracep->chgBit(oldp+237,((0xfU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                          >> 0x30U))))));
            tracep->chgBit(oldp+238,((0xfU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                          >> 0x34U))))));
            tracep->chgBit(oldp+239,((0xfU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                          >> 0x38U))))));
            tracep->chgBit(oldp+240,((0xfU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                          >> 0x3cU))))));
            tracep->chgBit(oldp+241,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__gx1));
            tracep->chgBit(oldp+242,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__gx2));
            tracep->chgBit(oldp+243,((1U & ((((IData)(
                                                      (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                       >> 0x3bU)) 
                                              | ((IData)(
                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                          >> 0x3bU)) 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                            >> 0x3aU)))) 
                                             | ((IData)(
                                                        (0xc00000000000000ULL 
                                                         == 
                                                         (0xc00000000000000ULL 
                                                          & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                           >> 0x39U)))) 
                                            | ((IData)(
                                                       (0xe00000000000000ULL 
                                                        == 
                                                        (0xe00000000000000ULL 
                                                         & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                          >> 0x38U)))))));
            tracep->chgBit(oldp+244,((1U & ((((IData)(
                                                      (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                       >> 0x3fU)) 
                                              | ((IData)(
                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                          >> 0x3fU)) 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                            >> 0x3eU)))) 
                                             | ((IData)(
                                                        (0xc000000000000000ULL 
                                                         == 
                                                         (0xc000000000000000ULL 
                                                          & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                           >> 0x3dU)))) 
                                            | ((IData)(
                                                       (0xe000000000000000ULL 
                                                        == 
                                                        (0xe000000000000000ULL 
                                                         & vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64))) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                          >> 0x3cU)))))));
            tracep->chgCData(oldp+245,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                                >> 0xfU))),4);
            tracep->chgCData(oldp+246,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                        >> 0x30U)))),4);
            tracep->chgCData(oldp+247,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                        >> 0x30U)))),4);
            tracep->chgCData(oldp+248,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0x30U)))),4);
            tracep->chgCData(oldp+249,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT____Vcellout__u1__s_4),4);
            tracep->chgCData(oldp+250,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__u1__DOT__c_int),4);
            tracep->chgCData(oldp+251,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                                >> 0x13U))),4);
            tracep->chgCData(oldp+252,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                        >> 0x34U)))),4);
            tracep->chgCData(oldp+253,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                        >> 0x34U)))),4);
            tracep->chgCData(oldp+254,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0x34U)))),4);
            tracep->chgCData(oldp+255,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT____Vcellout__u2__s_4),4);
            tracep->chgCData(oldp+256,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__u2__DOT__c_int),4);
            tracep->chgCData(oldp+257,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                                >> 0x17U))),4);
            tracep->chgCData(oldp+258,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                        >> 0x38U)))),4);
            tracep->chgCData(oldp+259,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                        >> 0x38U)))),4);
            tracep->chgCData(oldp+260,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0x38U)))),4);
            tracep->chgCData(oldp+261,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT____Vcellout__u3__s_4),4);
            tracep->chgCData(oldp+262,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__u3__DOT__c_int),4);
            tracep->chgCData(oldp+263,((0xfU & (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[3U] 
                                                >> 0x1bU))),4);
            tracep->chgCData(oldp+264,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__x2 
                                                        >> 0x3cU)))),4);
            tracep->chgCData(oldp+265,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__p_64 
                                                        >> 0x3cU)))),4);
            tracep->chgCData(oldp+266,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT____Vcellinp__cla_64_u1__g_64 
                                                        >> 0x3cU)))),4);
            tracep->chgCData(oldp+267,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT____Vcellout__u4__s_4),4);
            tracep->chgCData(oldp+268,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__cla_64_u1__DOT__u4__DOT__u4__DOT__c_int),4);
            tracep->chgCData(oldp+269,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 0xaU))),5);
            tracep->chgBit(oldp+270,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
            tracep->chgCData(oldp+271,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
            tracep->chgWData(oldp+272,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),227);
            tracep->chgCData(oldp+280,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 0xfU))),3);
            tracep->chgBit(oldp+281,(vlSelf->top__DOT__ls_u__DOT__timr_int));
            tracep->chgBit(oldp+282,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 3U))) 
                                      & (0U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
            tracep->chgBit(oldp+283,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 3U))) 
                                      & (4U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
            tracep->chgBit(oldp+284,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh));
            tracep->chgBit(oldp+285,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu));
            tracep->chgBit(oldp+286,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw));
            tracep->chgBit(oldp+287,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu));
            tracep->chgBit(oldp+288,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld));
            tracep->chgBit(oldp+289,(((8U == (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 5U))) 
                                      & (0U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
            tracep->chgBit(oldp+290,(((8U == (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 5U))) 
                                      & (1U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
            tracep->chgBit(oldp+291,(((8U == (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 5U))) 
                                      & (2U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
            tracep->chgBit(oldp+292,(((8U == (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 5U))) 
                                      & (3U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))))));
            tracep->chgQData(oldp+293,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__commitPC),64);
            tracep->chgBit(oldp+295,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrw));
            tracep->chgBit(oldp+296,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrs));
            tracep->chgBit(oldp+297,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrc));
            tracep->chgBit(oldp+298,((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 5U)))));
            tracep->chgBit(oldp+299,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
            tracep->chgBit(oldp+300,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
            tracep->chgBit(oldp+301,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
            tracep->chgBit(oldp+302,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
            tracep->chgBit(oldp+303,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
            tracep->chgBit(oldp+304,(((0x304U == (0xfffU 
                                                  & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                                      << 9U) 
                                                     | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                        >> 0x17U)))) 
                                      & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en))));
            tracep->chgBit(oldp+305,(((0x344U == (0xfffU 
                                                  & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                                      << 9U) 
                                                     | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                        >> 0x17U)))) 
                                      & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en))));
            tracep->chgQData(oldp+306,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
            tracep->chgBit(oldp+308,((1U & (IData)(
                                                   (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                    >> 3U)))));
            tracep->chgQData(oldp+309,(((0x1cU == (0x1fU 
                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                      >> 5U)))
                                         ? 0xbULL : 
                                        ((IData)(vlSelf->top__DOT__in_intr_ls)
                                          ? 0x8000000000000007ULL
                                          : 0ULL))),64);
            tracep->chgQData(oldp+311,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
            tracep->chgQData(oldp+313,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie),64);
            tracep->chgBit(oldp+315,((1U & (IData)(
                                                   (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie 
                                                    >> 7U)))));
            tracep->chgQData(oldp+316,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip),64);
            tracep->chgBit(oldp+318,((1U & (IData)(
                                                   (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip 
                                                    >> 7U)))));
            tracep->chgQData(oldp+319,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtime),64);
            tracep->chgQData(oldp+321,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp),64);
            tracep->chgIData(oldp+323,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__byte_index),32);
            tracep->chgQData(oldp+324,(vlSelf->top__DOT__Dcache_u__DOT__validArray1),64);
            tracep->chgQData(oldp+326,(vlSelf->top__DOT__Dcache_u__DOT__validArray2),64);
            tracep->chgIData(oldp+328,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                       [0x3cU]),21);
            tracep->chgIData(oldp+329,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                       [0x23U]),21);
            tracep->chgBit(oldp+330,(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay));
            tracep->chgBit(oldp+331,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay1));
            tracep->chgBit(oldp+332,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay2));
            tracep->chgCData(oldp+333,(vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch),8);
            tracep->chgQData(oldp+334,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1),64);
            tracep->chgQData(oldp+336,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2),64);
            tracep->chgBit(oldp+338,(vlSelf->top__DOT__Dcache_u__DOT__replaceWay));
            tracep->chgBit(oldp+339,(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
            tracep->chgBit(oldp+340,(vlSelf->top__DOT__Dcache_u__DOT__uncache));
            tracep->chgBit(oldp+341,(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk));
            tracep->chgBit(oldp+342,(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk));
            tracep->chgQData(oldp+343,(vlSelf->top__DOT__Dcache_u__DOT__temp),64);
            tracep->chgBit(oldp+345,(vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay));
            tracep->chgCData(oldp+346,(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt),2);
            tracep->chgCData(oldp+347,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [3U]))) {
            tracep->chgCData(oldp+348,((((0xaU != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x1cU)))) 
                                         | (2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x18U)))))
                                         ? 0U : ((0U 
                                                  != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                                  ? 0U
                                                  : 1U))),4);
            tracep->chgCData(oldp+349,((((0xaU != (0xfU 
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
            tracep->chgCData(oldp+350,((((0xaU != (0xfU 
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
            tracep->chgCData(oldp+351,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                         ? (7U & ((
                                                   ((1U 
                                                     & ((- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh))) 
                                                        | (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu))))) 
                                                    | (2U 
                                                       & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw))))) 
                                                   | (2U 
                                                      & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu))))) 
                                                  | (3U 
                                                     & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld))))))
                                         : 3U)),3);
            tracep->chgQData(oldp+352,((((0U == (0x1fU 
                                                 & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                    >> 3U))) 
                                         & ((0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
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
                                         : ((((0x73U 
                                               == (0x7fU 
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
            tracep->chgIData(oldp+354,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                         ? (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch)
                                         : (((IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 0xbU)) 
                                             << 0xbU) 
                                            | (0x7e0U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                           >> 5U)) 
                                                  << 5U))))),32);
            tracep->chgBit(oldp+355,((((3U == (0x7fU 
                                               & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                  >> 1U))) 
                                       & ((0x73U == 
                                           (0x7fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 3U))) 
                                          & (((1U == 
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
                                      & ((0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U)) 
                                         == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0x12U))))));
            tracep->chgCData(oldp+356,((0xffU & ((0U 
                                                  != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                                   ? 0U
                                                   : 3U)
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                   ? 0U
                                                   : 3U)))),8);
            tracep->chgQData(oldp+357,((QData)((IData)(
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
            tracep->chgQData(oldp+359,(((0x10U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                         ? ((2U & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_type_r))
                                             ? ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign)
                                                 ? 
                                                (1ULL 
                                                 + 
                                                 (~ vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s))
                                                 : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s)
                                             : (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign) 
                                                 ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_sign))
                                                 ? 
                                                (1ULL 
                                                 + 
                                                 (~ 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[0U])))))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg[0U])))))
                                         : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__mulOut)),64);
            tracep->chgBit(oldp+361,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                        >> 2U) & ((0x1fU 
                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                      >> 0xaU)) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xbU)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+362,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                       & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0xbU)))) 
                                      & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
            tracep->chgBit(oldp+363,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                        >> 2U) & ((0x1fU 
                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                      >> 0xaU)) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 6U)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+364,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                       & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 6U)))) 
                                      & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
            if (vlSelf->top__DOT__in_intr_ls) {
                __Vtemp386[0U] = Vtop__ConstPool__CONST_d5724acc_0[0U];
                __Vtemp386[1U] = Vtop__ConstPool__CONST_d5724acc_0[1U];
                __Vtemp386[2U] = Vtop__ConstPool__CONST_d5724acc_0[2U];
                __Vtemp386[3U] = Vtop__ConstPool__CONST_d5724acc_0[3U];
                __Vtemp386[4U] = Vtop__ConstPool__CONST_d5724acc_0[4U];
                __Vtemp386[5U] = Vtop__ConstPool__CONST_d5724acc_0[5U];
                __Vtemp386[6U] = Vtop__ConstPool__CONST_d5724acc_0[6U];
                __Vtemp386[7U] = Vtop__ConstPool__CONST_d5724acc_0[7U];
            } else {
                __Vtemp386[0U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                                   << 3U) | ((4U & 
                                              (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                               >> 0xeU)) 
                                             | (3U 
                                                & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
                __Vtemp386[1U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                                   >> 0x1dU) | ((IData)(
                                                        (vlSelf->top__DOT__alures_ex 
                                                         >> 0x20U)) 
                                                << 3U));
                __Vtemp386[2U] = (((IData)((vlSelf->top__DOT__alures_ex 
                                            >> 0x20U)) 
                                   >> 0x1dU) | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                                                << 3U));
                __Vtemp386[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                                   >> 0x1dU) | ((IData)(
                                                        (vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                         >> 0x20U)) 
                                                << 3U));
                __Vtemp386[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                            >> 0x20U)) 
                                   >> 0x1dU) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 7U) 
                                                | (0x78U 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x19U))));
                __Vtemp386[5U] = ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                         >> 0x19U)) 
                                  | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                      << 7U) | (0x78U 
                                                & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                   >> 0x19U))));
                __Vtemp386[6U] = ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                         >> 0x19U)) 
                                  | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                      << 7U) | (0x78U 
                                                & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                   >> 0x19U))));
                __Vtemp386[7U] = (7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                        >> 0x19U));
            }
            tracep->chgWData(oldp+365,(__Vtemp386),227);
            tracep->chgBit(oldp+373,(((0U == (0x1fU 
                                              & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 3U))) 
                                      & ((0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0x17U)) 
                                         == (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
            tracep->chgBit(oldp+374,((((0x73U == (0x7fU 
                                                  & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                     >> 1U))) 
                                       & (((1U == (7U 
                                                   & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                      >> 0xdU))) 
                                           | (3U == 
                                              (7U & 
                                               (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 0xdU)))) 
                                          | (2U == 
                                             (7U & 
                                              (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                               >> 0xdU))))) 
                                      & ((0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0x17U)) 
                                         == (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
            tracep->chgQData(oldp+375,((vlSelf->top__DOT__ls_u__DOT__csr_wr_data 
                                        | vlSelf->top__DOT__csrdata_ls)),64);
            tracep->chgQData(oldp+377,(((~ vlSelf->top__DOT__ls_u__DOT__csr_wr_data) 
                                        & vlSelf->top__DOT__csrdata_ls)),64);
            tracep->chgBit(oldp+379,((1U & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                    >> 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 5U))))))));
            tracep->chgBit(oldp+380,((1U & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                    >> 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 5U))))))));
            tracep->chgIData(oldp+381,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                       [(0x3fU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 5U)))]),21);
            tracep->chgIData(oldp+382,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                       [(0x3fU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 5U)))]),21);
            tracep->chgBit(oldp+383,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U))) 
                                      & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk)))));
            tracep->chgBit(oldp+384,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & (~ (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 0x20U)))) 
                                      & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk)))));
            tracep->chgIData(oldp+385,(((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                         : 0U)),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+386,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready));
            tracep->chgBit(oldp+387,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid));
            tracep->chgCData(oldp+388,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp),2);
            tracep->chgQData(oldp+389,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata),64);
            tracep->chgBit(oldp+391,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready));
            tracep->chgQData(oldp+392,((((0xaU != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x1cU)))) 
                                         | (2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x18U)))))
                                         ? 0ULL : vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg)),64);
            tracep->chgCData(oldp+394,((((0xaU != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x1cU)))) 
                                         | (2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x18U)))))
                                         ? 0U : 1U)),4);
            tracep->chgCData(oldp+395,((((0xaU != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x1cU)))) 
                                         | (2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x18U)))))
                                         ? 0U : (7U 
                                                 & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg)))),3);
            tracep->chgCData(oldp+396,((((0xaU != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x1cU)))) 
                                         | (2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x18U)))))
                                         ? 0U : 1U)),2);
            tracep->chgCData(oldp+397,((((0xaU != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x1cU)))) 
                                         | (2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x18U)))))
                                         ? 0U : 0xfU)),4);
            tracep->chgBit(oldp+398,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready));
            tracep->chgCData(oldp+399,((((0xaU != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x1cU)))) 
                                         | (2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x18U)))))
                                         ? 0U : (0xffU 
                                                 & (IData)(vlSelf->top__DOT__ls_axi_w_strb_o)))),8);
            tracep->chgBit(oldp+400,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid));
            tracep->chgCData(oldp+401,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp),2);
            tracep->chgQData(oldp+402,(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg),64);
            tracep->chgCData(oldp+404,(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg),3);
            tracep->chgCData(oldp+405,(vlSelf->top__DOT__ls_axi_w_strb_o),8);
            tracep->chgBit(oldp+406,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready));
            tracep->chgCData(oldp+407,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp),2);
            tracep->chgBit(oldp+408,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid));
            tracep->chgCData(oldp+409,(((2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U))))
                                         ? (7U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg))
                                         : 0U)),3);
            tracep->chgQData(oldp+410,(((2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U))))
                                         ? vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg
                                         : 0ULL)),64);
            tracep->chgBit(oldp+412,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready));
            tracep->chgCData(oldp+413,(vlSelf->top__DOT__clint_axi_wstrb),8);
            tracep->chgBit(oldp+414,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready));
            tracep->chgBit(oldp+415,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid));
            tracep->chgBit(oldp+416,((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x18U))))));
            tracep->chgBit(oldp+417,((0xaU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x1cU))))));
            tracep->chgWData(oldp+418,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
            tracep->chgWData(oldp+422,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
            tracep->chgWData(oldp+426,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
            tracep->chgWData(oldp+430,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
            tracep->chgWData(oldp+434,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
            tracep->chgWData(oldp+442,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
            tracep->chgIData(oldp+450,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
            tracep->chgQData(oldp+451,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr),64);
            tracep->chgCData(oldp+453,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bresp),2);
            tracep->chgQData(oldp+454,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_araddr),64);
            tracep->chgBit(oldp+456,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__aw_en));
            tracep->chgWData(oldp+457,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1),128);
            tracep->chgWData(oldp+461,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2),128);
            tracep->chgWData(oldp+465,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1),128);
            tracep->chgWData(oldp+469,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2),128);
            tracep->chgWData(oldp+473,(vlSelf->top__DOT__Dcache_u__DOT__way1Data),256);
            tracep->chgWData(oldp+481,(vlSelf->top__DOT__Dcache_u__DOT__way2Data),256);
            tracep->chgBit(oldp+489,(vlSelf->top__DOT__Dcache_u__DOT__randomBit));
            tracep->chgWData(oldp+490,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),256);
            tracep->chgCData(oldp+498,(vlSelf->top__DOT__axi_ls_u__DOT__wrMask_reg),8);
            tracep->chgCData(oldp+499,(vlSelf->top__DOT__axi_ls_u__DOT__storeLenth_reg),8);
            tracep->chgCData(oldp+500,((0x38U & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg) 
                                                 << 3U))),6);
            tracep->chgQData(oldp+501,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
            tracep->chgQData(oldp+503,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
            tracep->chgQData(oldp+505,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
            tracep->chgQData(oldp+507,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
            tracep->chgQData(oldp+509,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
            tracep->chgQData(oldp+511,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
            tracep->chgBit(oldp+513,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [2U] | vlSelf->__Vm_traceActivity
                         [3U]))) {
            tracep->chgCData(oldp+514,((((0xaU != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x1cU)))) 
                                         | (2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x18U)))))
                                         ? 0U : ((6U 
                                                  == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                  ? 0U
                                                  : 3U))),8);
            tracep->chgQData(oldp+515,((((0xaU != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x1cU)))) 
                                         | (2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x18U)))))
                                         ? 0ULL : vlSelf->top__DOT__ls_axi_w_data_o)),64);
            tracep->chgBit(oldp+517,((((0xaU != (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x1cU)))) 
                                       | (2U == (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x18U)))))
                                       ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrLast)))));
            VL_EXTEND_WQ(256,64, __Vtemp391, vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch);
            if ((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
                __Vtemp396[0U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                                   ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U]
                                   : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U]);
                __Vtemp396[1U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                                   ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U]
                                   : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U]);
                __Vtemp396[2U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                                   ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U]
                                   : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U]);
                __Vtemp396[3U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                                   ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U]
                                   : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U]);
                __Vtemp396[4U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                                   ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U]
                                   : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U]);
                __Vtemp396[5U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                                   ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U]
                                   : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U]);
                __Vtemp396[6U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                                   ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U]
                                   : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U]);
                __Vtemp396[7U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                                   ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U]
                                   : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U]);
            } else {
                __Vtemp396[0U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                   ? __Vtemp391[0U]
                                   : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                       ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U]
                                       : vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U]));
                __Vtemp396[1U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                   ? __Vtemp391[1U]
                                   : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                       ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U]
                                       : vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U]));
                __Vtemp396[2U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                   ? __Vtemp391[2U]
                                   : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                       ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U]
                                       : vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U]));
                __Vtemp396[3U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                   ? __Vtemp391[3U]
                                   : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                       ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U]
                                       : vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U]));
                __Vtemp396[4U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                   ? __Vtemp391[4U]
                                   : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                       ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U]
                                       : vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U]));
                __Vtemp396[5U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                   ? __Vtemp391[5U]
                                   : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                       ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U]
                                       : vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U]));
                __Vtemp396[6U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                   ? __Vtemp391[6U]
                                   : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                       ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U]
                                       : vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U]));
                __Vtemp396[7U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                   ? __Vtemp391[7U]
                                   : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                       ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U]
                                       : vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U]));
            }
            tracep->chgWData(oldp+518,(__Vtemp396),256);
            tracep->chgBit(oldp+526,((((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready) 
                                       & (IData)(vlSelf->top__DOT__clint_axi_arvalid)) 
                                      & (~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid)))));
            if ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))) {
                __Vtemp400[0U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U];
                __Vtemp400[1U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U];
                __Vtemp400[2U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U];
                __Vtemp400[3U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U];
                __Vtemp400[4U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U];
                __Vtemp400[5U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U];
                __Vtemp400[6U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U];
                __Vtemp400[7U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U];
            } else {
                __Vtemp400[0U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U];
                __Vtemp400[1U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U];
                __Vtemp400[2U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U];
                __Vtemp400[3U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U];
                __Vtemp400[4U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U];
                __Vtemp400[5U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U];
                __Vtemp400[6U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U];
                __Vtemp400[7U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U];
            }
            tracep->chgWData(oldp+527,(__Vtemp400),256);
            tracep->chgBit(oldp+535,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                       & (IData)(vlSelf->top__DOT__axi_mmio_ar_valid_o)) 
                                      & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
            tracep->chgBit(oldp+536,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                      & (IData)(vlSelf->top__DOT__axi_mmio_w_valid_o))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+537,(vlSelf->top__DOT__axi_mmio_ar_valid_o));
            tracep->chgQData(oldp+538,((((0xaU != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x1cU)))) 
                                         | (2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x18U)))))
                                         ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr)),64);
            tracep->chgCData(oldp+540,((((0xaU != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x1cU)))) 
                                         | (2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x18U)))))
                                         ? 0U : (7U 
                                                 & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size)))),3);
            tracep->chgCData(oldp+541,((((0xaU != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x1cU)))) 
                                         | (2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x18U)))))
                                         ? 0U : 1U)),2);
            tracep->chgCData(oldp+542,((((0xaU != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x1cU)))) 
                                         | (2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x18U)))))
                                         ? 0U : 2U)),4);
            tracep->chgBit(oldp+543,((((0xaU != (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                            >> 0x1cU)))) 
                                       | (2U == (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                            >> 0x18U)))))
                                       ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready)))));
            tracep->chgBit(oldp+544,(vlSelf->top__DOT__axi_mmio_aw_valid_o));
            tracep->chgBit(oldp+545,(vlSelf->top__DOT__axi_mmio_w_valid_o));
            tracep->chgBit(oldp+546,(vlSelf->top__DOT__axi_mmio_b_ready_o));
            tracep->chgCData(oldp+547,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                         ? 0U : 3U)),8);
            tracep->chgCData(oldp+548,(((0U == ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                                 ? 0U
                                                 : 3U))
                                         ? 2U : 3U)),3);
            tracep->chgBit(oldp+549,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
            tracep->chgCData(oldp+550,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                         ? 0U : 3U)),8);
            tracep->chgBit(oldp+551,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
            tracep->chgQData(oldp+552,(vlSelf->top__DOT__ls_axi_w_data_o),64);
            tracep->chgBit(oldp+554,(vlSelf->top__DOT__axi_ls_u__DOT__wrLast));
            tracep->chgBit(oldp+555,((2U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
            tracep->chgQData(oldp+556,(vlSelf->top__DOT__pc_new),64);
            tracep->chgBit(oldp+558,(vlSelf->top__DOT__is_jump));
            tracep->chgQData(oldp+559,(((0x400000U 
                                         & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
            tracep->chgBit(oldp+561,(vlSelf->top__DOT__if_instr_valid));
            tracep->chgQData(oldp+562,(vlSelf->top__DOT__sram_rdata),64);
            tracep->chgQData(oldp+564,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
            tracep->chgBit(oldp+566,((0ULL != vlSelf->top__DOT__pc_new)));
            tracep->chgBit(oldp+567,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                         & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
            tracep->chgBit(oldp+568,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                         & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                        | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                       | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                      | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
            tracep->chgIData(oldp+569,(((1U & (IData)(
                                                      (vlSelf->top__DOT__pc_new 
                                                       >> 2U)))
                                         ? (IData)(
                                                   (vlSelf->top__DOT__sram_rdata 
                                                    >> 0x20U))
                                         : (IData)(vlSelf->top__DOT__sram_rdata))),32);
            tracep->chgQData(oldp+570,((((QData)((IData)(
                                                         vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
            tracep->chgIData(oldp+572,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
            tracep->chgQData(oldp+573,(vlSelf->top__DOT__ID_u__DOT__imm),64);
            tracep->chgBit(oldp+575,(vlSelf->top__DOT__src1sel_id));
            tracep->chgCData(oldp+576,(vlSelf->top__DOT__src2sel_id),2);
            tracep->chgCData(oldp+577,(vlSelf->top__DOT__aluctr_id),5);
            tracep->chgBit(oldp+578,(vlSelf->top__DOT__is_brc_id));
            tracep->chgBit(oldp+579,(vlSelf->top__DOT__is_jal_id));
            tracep->chgBit(oldp+580,(vlSelf->top__DOT__is_jalr_id));
            tracep->chgBit(oldp+581,(vlSelf->top__DOT__wben_id));
            tracep->chgCData(oldp+582,(vlSelf->top__DOT__rs1_idx_id),5);
            tracep->chgCData(oldp+583,(vlSelf->top__DOT__rs2_idx_id),5);
            tracep->chgBit(oldp+584,(vlSelf->top__DOT__DivEn_id));
            tracep->chgCData(oldp+585,(vlSelf->top__DOT__DivSel_id),3);
            tracep->chgBit(oldp+586,(vlSelf->top__DOT__in_trap_id));
            tracep->chgBit(oldp+587,(vlSelf->top__DOT__out_trap_id));
            tracep->chgBit(oldp+588,(vlSelf->top__DOT__trap_id));
            tracep->chgBit(oldp+589,(vlSelf->top__DOT__ld_use_hazard));
            tracep->chgBit(oldp+590,(vlSelf->top__DOT__id_flush));
            tracep->chgQData(oldp+591,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                              >> 0x1cU)))),64);
            tracep->chgIData(oldp+593,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                         << 4U) | (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1cU))),32);
            tracep->chgQData(oldp+594,(vlSelf->top__DOT__alures_ex),64);
            tracep->chgBit(oldp+596,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+597,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x11U))),2);
            tracep->chgQData(oldp+598,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                              >> 0x1cU)))),64);
            tracep->chgQData(oldp+600,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                              >> 0x1cU)))),64);
            tracep->chgQData(oldp+602,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1cU)))),64);
            tracep->chgQData(oldp+604,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
            tracep->chgCData(oldp+606,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0x17U))),5);
            tracep->chgBit(oldp+607,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+608,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+609,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+610,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+611,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U))));
            tracep->chgCData(oldp+612,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 2U))),3);
            tracep->chgBit(oldp+613,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 1U))));
            tracep->chgCData(oldp+614,(vlSelf->top__DOT__rs1_sel),2);
            tracep->chgCData(oldp+615,(vlSelf->top__DOT__rs2_sel),2);
            tracep->chgCData(oldp+616,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0xbU))),5);
            tracep->chgCData(oldp+617,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 6U))),5);
            tracep->chgBit(oldp+618,(vlSelf->top__DOT__ex_flush));
            tracep->chgBit(oldp+619,((3U == (0x7fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 4U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1cU))))));
            tracep->chgBit(oldp+620,((8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 2U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1eU))))));
            tracep->chgCData(oldp+621,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
            tracep->chgCData(oldp+622,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
            tracep->chgQData(oldp+623,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                              >> 1U)))),64);
            tracep->chgQData(oldp+625,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                              >> 1U)))),64);
            tracep->chgQData(oldp+627,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                              >> 1U)))),64);
            tracep->chgIData(oldp+629,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                         << 0x1fU) 
                                        | (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                           >> 1U))),32);
            tracep->chgQData(oldp+630,(vlSelf->top__DOT__wb_data),64);
            tracep->chgCData(oldp+632,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U))),5);
            tracep->chgBit(oldp+633,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
            tracep->chgQData(oldp+634,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
            tracep->chgQData(oldp+636,(((2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U))))
                                         ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr
                                         : 0ULL)),64);
            tracep->chgBit(oldp+638,(vlSelf->top__DOT__clint_axi_arvalid));
            tracep->chgCData(oldp+639,(((2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U))))
                                         ? (7U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size))
                                         : 0U)),3);
            tracep->chgBit(oldp+640,(((2U == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x18U))))
                                       ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready))
                                       : 0U)));
            tracep->chgBit(oldp+641,(vlSelf->top__DOT__clint_axi_awvalid));
            tracep->chgQData(oldp+642,(vlSelf->top__DOT__clint_axi_wdata),64);
            tracep->chgBit(oldp+644,(vlSelf->top__DOT__clint_axi_wvalid));
            tracep->chgBit(oldp+645,(vlSelf->top__DOT__clint_axi_bready));
            tracep->chgBit(oldp+646,(vlSelf->top__DOT__rw_valid_i));
            tracep->chgBit(oldp+647,(vlSelf->top__DOT__fence_id));
            tracep->chgBit(oldp+648,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
            tracep->chgBit(oldp+649,(vlSelf->top__DOT__Dcache_u__DOT__clean_OK));
            tracep->chgBit(oldp+650,(vlSelf->top__DOT__DcacheRdValid));
            tracep->chgBit(oldp+651,(vlSelf->top__DOT__DcacheWrValid));
            tracep->chgQData(oldp+652,(vlSelf->top__DOT__DcacheRdAddr),64);
            tracep->chgQData(oldp+654,(vlSelf->top__DOT__DcacheWrAddr),64);
            tracep->chgBit(oldp+656,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
            tracep->chgCData(oldp+657,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                         ? (0xffU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask))
                                         : 0xffU)),8);
            tracep->chgCData(oldp+658,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                         ? (7U & (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size))
                                         : 3U)),3);
            tracep->chgQData(oldp+659,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
            tracep->chgCData(oldp+661,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
            tracep->chgBit(oldp+662,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
            tracep->chgBit(oldp+663,((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x18U))))));
            tracep->chgBit(oldp+664,((0xaU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                          >> 0x1cU))))));
            tracep->chgIData(oldp+665,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
            tracep->chgBit(oldp+666,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
            tracep->chgCData(oldp+667,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
            tracep->chgBit(oldp+668,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
            __Vtemp401[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
            __Vtemp401[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
            __Vtemp401[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
            __Vtemp401[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
            tracep->chgWData(oldp+669,(__Vtemp401),128);
            __Vtemp402[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
            __Vtemp402[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
            __Vtemp402[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
            __Vtemp402[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
            tracep->chgWData(oldp+673,(__Vtemp402),128);
            tracep->chgBit(oldp+677,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
            tracep->chgBit(oldp+678,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
            tracep->chgBit(oldp+679,(vlSelf->top__DOT__cache_dut__DOT__uncached));
            tracep->chgBit(oldp+680,(vlSelf->top__DOT__cache_dut__DOT__diffAddr));
            tracep->chgBit(oldp+681,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgBit(oldp+682,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgBit(oldp+683,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgBit(oldp+684,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgCData(oldp+685,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
            tracep->chgWData(oldp+686,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
            tracep->chgBit(oldp+694,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgBit(oldp+695,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN));
            tracep->chgBit(oldp+696,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
            tracep->chgBit(oldp+697,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN)))));
            tracep->chgBit(oldp+698,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
            tracep->chgBit(oldp+699,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
            tracep->chgBit(oldp+700,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN));
            tracep->chgBit(oldp+701,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
            tracep->chgBit(oldp+702,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN)))));
            tracep->chgBit(oldp+703,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
            tracep->chgBit(oldp+704,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
            tracep->chgQData(oldp+705,(((IData)(vlSelf->top__DOT__id_flush)
                                         ? 0ULL : vlSelf->top__DOT__pc_new)),64);
            tracep->chgIData(oldp+707,(((IData)(vlSelf->top__DOT__id_flush)
                                         ? 0U : ((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                                  ? (IData)(
                                                            (vlSelf->top__DOT__sram_rdata 
                                                             >> 0x20U))
                                                  : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
            __Vtemp403[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                               ? 0U : ((1U & (IData)(
                                                     (vlSelf->top__DOT__pc_new 
                                                      >> 2U)))
                                        ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                   >> 0x20U))
                                        : (IData)(vlSelf->top__DOT__sram_rdata)));
            __Vtemp403[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                       ? 0ULL : vlSelf->top__DOT__pc_new));
            __Vtemp403[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                        ? 0ULL : vlSelf->top__DOT__pc_new) 
                                      >> 0x20U));
            tracep->chgWData(oldp+708,(__Vtemp403),96);
            tracep->chgWData(oldp+711,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
            tracep->chgCData(oldp+714,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
            tracep->chgCData(oldp+715,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                 >> 2U))),5);
            tracep->chgCData(oldp+716,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+717,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 0x19U)),7);
            tracep->chgIData(oldp+718,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 7U)),25);
            tracep->chgBit(oldp+719,((3U == (0x7fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 1U)))));
            tracep->chgQData(oldp+720,(((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
            tracep->chgIData(oldp+722,(((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
            tracep->chgBit(oldp+723,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__is_jalr_id))));
            tracep->chgBit(oldp+724,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__is_jal_id))));
            tracep->chgBit(oldp+725,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__is_brc_id))));
            tracep->chgBit(oldp+726,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__wben_id))));
            tracep->chgBit(oldp+727,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__trap_id))));
            tracep->chgBit(oldp+728,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__fence_id))));
            tracep->chgWData(oldp+729,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),316);
            tracep->chgQData(oldp+739,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
            tracep->chgQData(oldp+741,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
            tracep->chgQData(oldp+743,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
            tracep->chgBit(oldp+745,(((((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__diffIn) 
                                        & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 5U)) 
                                       & (~ (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 4U))) 
                                      & (~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__mul_resValid)))));
            VL_EXTEND_WQ(65,64, __Vtemp405, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp406, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp407, __Vtemp405, __Vtemp406);
            VL_EXTEND_WI(65,1, __Vtemp408, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp409, __Vtemp407, __Vtemp408);
            tracep->chgBit(oldp+746,((1U & ((0x4000000U 
                                             & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                             ? ((1U 
                                                 & __Vtemp409[2U]) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                             : ((IData)(
                                                        (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                         >> 0x3fU)) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
            tracep->chgBit(oldp+747,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
            tracep->chgQData(oldp+748,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
            tracep->chgBit(oldp+750,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            tracep->chgQData(oldp+751,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
            tracep->chgQData(oldp+753,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
            tracep->chgBit(oldp+755,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+756,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+757,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x17U))),3);
            tracep->chgQData(oldp+758,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
            VL_EXTEND_WQ(65,64, __Vtemp412, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp413, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp414, __Vtemp412, __Vtemp413);
            VL_EXTEND_WI(65,1, __Vtemp415, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp416, __Vtemp414, __Vtemp415);
            tracep->chgBit(oldp+760,((1U & __Vtemp416[2U])));
            tracep->chgBit(oldp+761,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
            tracep->chgQData(oldp+762,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+764,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+766,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgBit(oldp+768,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__diffIn));
            tracep->chgBit(oldp+769,((((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__diffIn) 
                                       & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                          >> 5U)) & 
                                      (~ (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                          >> 4U)))));
            tracep->chgBit(oldp+770,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__div_valid));
            tracep->chgCData(oldp+771,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                >> 0x17U))),4);
            tracep->chgBit(oldp+772,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+773,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
            tracep->chgQData(oldp+774,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
            tracep->chgQData(oldp+776,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
            tracep->chgQData(oldp+778,((0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
            tracep->chgQData(oldp+780,((~ (0xffffffffffffffffULL 
                                           >> (0x3fU 
                                               & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
            tracep->chgQData(oldp+782,(((0x8000000U 
                                         & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                         ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                            & (QData)((IData)(
                                                              ((0xffffffffffffffffULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                               >> 0x20U))))
                                         : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
            tracep->chgQData(oldp+784,(((0x8000000U 
                                         & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
                                               & (~ 
                                                  (0xffffffffffffffffULL 
                                                   >> 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))))))),64);
            tracep->chgQData(oldp+786,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
            tracep->chgCData(oldp+788,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 2U))),2);
            tracep->chgQData(oldp+789,((1ULL + (~ vlSelf->top__DOT__ex_stage_u__DOT__src1))),64);
            tracep->chgQData(oldp+791,((1ULL + (~ vlSelf->top__DOT__ex_stage_u__DOT__src2))),64);
            tracep->chgCData(oldp+793,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                              >> 8U))),3);
            tracep->chgQData(oldp+794,(((((QData)((IData)(
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
                                                 >> 0x1cU))))),64);
            tracep->chgQData(oldp+796,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                        + (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                            << 0x24U) 
                                           | (((QData)((IData)(
                                                               vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                 >> 0x1cU))))),64);
            tracep->chgBit(oldp+798,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
            tracep->chgBit(oldp+799,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
            tracep->chgBit(oldp+800,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
            tracep->chgQData(oldp+801,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
            tracep->chgQData(oldp+803,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
            tracep->chgBit(oldp+805,((1U & ((0x400U 
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
            tracep->chgBit(oldp+806,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                       & ((0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 8U)) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0xbU)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+807,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                       & ((0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 8U)) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 6U)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+808,((8U == (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 3U)))));
            tracep->chgQData(oldp+809,(vlSelf->top__DOT__ls_u__DOT__csr_wr_data),64);
            tracep->chgQData(oldp+811,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
            tracep->chgBit(oldp+813,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimeWrEn));
            tracep->chgBit(oldp+814,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmpWrEn));
            tracep->chgBit(oldp+815,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__slv_reg_wren));
            tracep->chgIData(oldp+816,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
            tracep->chgBit(oldp+817,(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i));
            tracep->chgBit(oldp+818,(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i));
            tracep->chgBit(oldp+819,(((3U != (0x7fU 
                                              & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                  << 4U) 
                                                 | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                    >> 0x1cU)))) 
                                      | (8U == (0x1fU 
                                                & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 2U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1eU)))))));
            tracep->chgIData(oldp+820,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                         ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)
                                         : (((IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 0xbU)) 
                                             << 0xbU) 
                                            | (0x7e0U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 5U)) 
                                                  << 5U))))),32);
            tracep->chgCData(oldp+821,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
            tracep->chgBit(oldp+822,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
            tracep->chgBit(oldp+823,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
            tracep->chgBit(oldp+824,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
            VL_EXTEND_WQ(128,64, __Vtemp420, vlSelf->top__DOT__Dcache_u__DOT__storeData);
            if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
                __Vtemp427[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U];
                __Vtemp427[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U];
                __Vtemp427[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U];
                __Vtemp427[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U];
            } else {
                __Vtemp427[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp420[0U])
                                   : 0U);
                __Vtemp427[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp420[1U])
                                   : 0U);
                __Vtemp427[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                       : __Vtemp420[2U])
                                   : 0U);
                __Vtemp427[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                                  >> 0x20U))
                                       : __Vtemp420[3U])
                                   : 0U);
            }
            tracep->chgWData(oldp+825,(__Vtemp427),128);
            VL_EXTEND_WQ(128,64, __Vtemp430, vlSelf->top__DOT__Dcache_u__DOT__storeData);
            if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
                __Vtemp437[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U];
                __Vtemp437[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U];
                __Vtemp437[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U];
                __Vtemp437[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U];
            } else {
                __Vtemp437[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp430[0U])
                                   : 0U);
                __Vtemp437[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp430[1U])
                                   : 0U);
                __Vtemp437[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                       : __Vtemp430[2U])
                                   : 0U);
                __Vtemp437[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                                  >> 0x20U))
                                       : __Vtemp430[3U])
                                   : 0U);
            }
            tracep->chgWData(oldp+829,(__Vtemp437),128);
            tracep->chgBit(oldp+833,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
            tracep->chgBit(oldp+834,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
            tracep->chgBit(oldp+835,(vlSelf->top__DOT__Dcache_u__DOT__uncached));
            tracep->chgBit(oldp+836,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgQData(oldp+837,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
            tracep->chgCData(oldp+839,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
            tracep->chgCData(oldp+840,((0x3fU & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 5U)))),6);
            tracep->chgIData(oldp+841,((0x1fffffU & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 0xbU)))),21);
            tracep->chgBit(oldp+842,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgBit(oldp+843,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgBit(oldp+844,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgQData(oldp+845,((((QData)((IData)(
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
            tracep->chgCData(oldp+847,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
            tracep->chgWData(oldp+848,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
            tracep->chgBit(oldp+856,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgQData(oldp+857,(vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch),64);
            tracep->chgBit(oldp+859,(vlSelf->top__DOT__Dcache_u__DOT__wrLow));
            tracep->chgBit(oldp+860,(vlSelf->top__DOT__Dcache_u__DOT__wrHigh));
            tracep->chgQData(oldp+861,(vlSelf->top__DOT__Dcache_u__DOT__storeData),64);
            tracep->chgCData(oldp+863,(vlSelf->top__DOT__Dcache_u__DOT__storeMask),8);
            tracep->chgQData(oldp+864,(vlSelf->top__DOT__Dcache_u__DOT__sramMask),64);
            VL_EXTEND_WQ(128,64, __Vtemp440, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
            if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
                __Vtemp449[0U] = 0xffffffffU;
                __Vtemp449[1U] = 0xffffffffU;
                __Vtemp449[2U] = 0xffffffffU;
                __Vtemp449[3U] = 0xffffffffU;
            } else {
                __Vtemp449[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? 0U : __Vtemp440[0U])
                                       : 0U) : 0U);
                __Vtemp449[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? 0U : __Vtemp440[1U])
                                       : 0U) : 0U);
                __Vtemp449[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                           : __Vtemp440[2U])
                                       : 0U) : 0U);
                __Vtemp449[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                      >> 0x20U))
                                           : __Vtemp440[3U])
                                       : 0U) : 0U);
            }
            tracep->chgWData(oldp+866,(__Vtemp449),128);
            VL_EXTEND_WQ(128,64, __Vtemp452, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
            if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
                __Vtemp461[0U] = 0xffffffffU;
                __Vtemp461[1U] = 0xffffffffU;
                __Vtemp461[2U] = 0xffffffffU;
                __Vtemp461[3U] = 0xffffffffU;
            } else {
                __Vtemp461[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? 0U : __Vtemp452[0U])
                                       : 0U) : 0U);
                __Vtemp461[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? 0U : __Vtemp452[1U])
                                       : 0U) : 0U);
                __Vtemp461[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                           : __Vtemp452[2U])
                                       : 0U) : 0U);
                __Vtemp461[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                      >> 0x20U))
                                           : __Vtemp452[3U])
                                       : 0U) : 0U);
            }
            tracep->chgWData(oldp+870,(__Vtemp461),128);
            tracep->chgBit(oldp+874,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U))) 
                                      & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
            tracep->chgBit(oldp+875,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & (~ (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 0x20U)))) 
                                      & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
            tracep->chgBit(oldp+876,((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgIData(oldp+877,((IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)),32);
            tracep->chgBit(oldp+878,((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgCData(oldp+879,(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt),7);
            tracep->chgBit(oldp+880,(vlSelf->top__DOT__Dcache_u__DOT__cleanWrValid));
            tracep->chgBit(oldp+881,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
            VL_EXTEND_WQ(128,64, __Vtemp464, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
            __Vtemp474[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                  ? 0xffffffffU : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                 >> 3U)))
                                                      ? 0U
                                                      : 
                                                     __Vtemp464[0U])
                                                     : 0U)
                                                    : 0U)));
            __Vtemp474[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                  ? 0xffffffffU : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                 >> 3U)))
                                                      ? 0U
                                                      : 
                                                     __Vtemp464[1U])
                                                     : 0U)
                                                    : 0U)));
            __Vtemp474[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                  ? 0xffffffffU : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                 >> 3U)))
                                                      ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                                      : 
                                                     __Vtemp464[2U])
                                                     : 0U)
                                                    : 0U)));
            __Vtemp474[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                  ? 0xffffffffU : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                 >> 3U)))
                                                      ? (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                                 >> 0x20U))
                                                      : 
                                                     __Vtemp464[3U])
                                                     : 0U)
                                                    : 0U)));
            tracep->chgWData(oldp+882,(__Vtemp474),128);
            VL_EXTEND_WQ(128,64, __Vtemp477, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
            __Vtemp487[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                  ? 0xffffffffU : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                 >> 3U)))
                                                      ? 0U
                                                      : 
                                                     __Vtemp477[0U])
                                                     : 0U)
                                                    : 0U)));
            __Vtemp487[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                  ? 0xffffffffU : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                 >> 3U)))
                                                      ? 0U
                                                      : 
                                                     __Vtemp477[1U])
                                                     : 0U)
                                                    : 0U)));
            __Vtemp487[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                  ? 0xffffffffU : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                 >> 3U)))
                                                      ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                                      : 
                                                     __Vtemp477[2U])
                                                     : 0U)
                                                    : 0U)));
            __Vtemp487[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                  ? 0xffffffffU : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                 >> 3U)))
                                                      ? (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                                 >> 0x20U))
                                                      : 
                                                     __Vtemp477[3U])
                                                     : 0U)
                                                    : 0U)));
            tracep->chgWData(oldp+886,(__Vtemp487),128);
            tracep->chgBit(oldp+890,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
            tracep->chgCData(oldp+891,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
            tracep->chgWData(oldp+892,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
            tracep->chgBit(oldp+902,((1U & ((IData)(vlSelf->top__DOT__fence_id) 
                                            | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]))));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [3U] | vlSelf->__Vm_traceActivity
                         [4U]))) {
            tracep->chgBit(oldp+903,((1U & (~ (((((
                                                   ((IData)(vlSelf->top__DOT__fence_id) 
                                                    | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
                                                   & (~ (IData)(vlSelf->top__DOT__is_jump))) 
                                                  | (IData)(vlSelf->top__DOT__ld_use_hazard)) 
                                                 | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                                | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                               | (IData)(vlSelf->top__DOT__ex_not_ok))))));
            tracep->chgBit(oldp+904,((1U & (~ ((((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                                 | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                                | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                               | (IData)(vlSelf->top__DOT__ex_not_ok))))));
            tracep->chgBit(oldp+905,((1U & (~ (((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                                | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                               | (IData)(vlSelf->top__DOT__ex_not_ok))))));
            tracep->chgBit(oldp+906,((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       | ((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                          & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit) 
                                             | (~ (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i))))) 
                                      | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                         & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk)))));
            tracep->chgBit(oldp+907,((1U & (~ (((((
                                                   (((((0U 
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
            tracep->chgBit(oldp+908,((1U & ((((((((
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
                                            | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]))));
            tracep->chgBit(oldp+909,((1U & (~ (((((
                                                   (((((0U 
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
            tracep->chgBit(oldp+910,((1U & ((((((((
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
                                            | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]))));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [3U] | vlSelf->__Vm_traceActivity
                         [5U]))) {
            tracep->chgQData(oldp+911,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs2_idx_id])),64);
            tracep->chgQData(oldp+913,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs1_idx_id])),64);
            __Vtemp492[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
            __Vtemp492[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                               >> 4U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                                  >> 0x20U)) 
                                         << 0x1cU));
            __Vtemp492[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                        >> 0x20U)) 
                               >> 4U) | ((IData)(((0U 
                                                   == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                                  [vlSelf->top__DOT__rs1_idx_id])) 
                                         << 0x1cU));
            __Vtemp492[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs1_idx_id])) 
                               >> 4U) | ((IData)(((
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                    ? 0ULL
                                                    : 
                                                   vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                                   [vlSelf->top__DOT__rs1_idx_id]) 
                                                  >> 0x20U)) 
                                         << 0x1cU));
            __Vtemp492[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                          ? 0ULL : 
                                         vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                         [vlSelf->top__DOT__rs1_idx_id]) 
                                        >> 0x20U)) 
                               >> 4U) | ((IData)(((0U 
                                                   == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                                  [vlSelf->top__DOT__rs2_idx_id])) 
                                         << 0x1cU));
            __Vtemp492[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs2_idx_id])) 
                               >> 4U) | ((IData)(((
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                    ? 0ULL
                                                    : 
                                                   vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                                   [vlSelf->top__DOT__rs2_idx_id]) 
                                                  >> 0x20U)) 
                                         << 0x1cU));
            __Vtemp492[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                          ? 0ULL : 
                                         vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                         [vlSelf->top__DOT__rs2_idx_id]) 
                                        >> 0x20U)) 
                               >> 4U) | (((IData)(vlSelf->top__DOT__ex_flush)
                                           ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                                         << 0x1cU));
            __Vtemp492[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                                 ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                               >> 4U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                                   ? 0ULL
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                         << 0x1cU));
            __Vtemp492[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                               >> 4U) | ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                                    ? 0ULL
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                                  >> 0x20U)) 
                                         << 0x1cU));
            __Vtemp492[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                       >> 0x20U)) >> 4U);
            tracep->chgWData(oldp+915,(__Vtemp492),316);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+925,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
            tracep->chgQData(oldp+926,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                         ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
            tracep->chgBit(oldp+928,(vlSelf->top__DOT__if_axi_r_last_i));
            tracep->chgCData(oldp+929,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
            tracep->chgBit(oldp+930,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready));
            tracep->chgBit(oldp+931,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                       : 0U)));
            tracep->chgQData(oldp+932,(vlSelf->top__DOT__ls_axi_r_data_i),64);
            tracep->chgBit(oldp+934,(vlSelf->top__DOT__ls_axi_r_last_i));
            tracep->chgBit(oldp+935,(vlSelf->top__DOT__if_stall_n));
            tracep->chgBit(oldp+936,(vlSelf->top__DOT__ex_not_ok));
            tracep->chgBit(oldp+937,(vlSelf->top__DOT__ls_stall_n));
            tracep->chgBit(oldp+938,(vlSelf->top__DOT__dataNotOk));
            tracep->chgQData(oldp+939,(vlSelf->top__DOT__ls_sram_rd_data),64);
            tracep->chgBit(oldp+941,(vlSelf->top__DOT__dataValid_o));
            tracep->chgBit(oldp+942,(vlSelf->top__DOT__lsAxiRdDataVAlid));
            tracep->chgBit(oldp+943,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
            tracep->chgBit(oldp+944,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
            tracep->chgQData(oldp+945,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
            tracep->chgBit(oldp+947,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
            tracep->chgCData(oldp+948,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
            tracep->chgCData(oldp+949,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__A),6);
            tracep->chgCData(oldp+950,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
            tracep->chgCData(oldp+951,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__A),6);
            tracep->chgCData(oldp+952,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
            tracep->chgCData(oldp+953,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
            tracep->chgBit(oldp+954,(vlSelf->top__DOT__ls_u__DOT__csr_stall_n));
            tracep->chgCData(oldp+955,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
            tracep->chgSData(oldp+956,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
            tracep->chgIData(oldp+957,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
            tracep->chgCData(oldp+958,(vlSelf->top__DOT__Dcache_u__DOT__cacheNexState),3);
            tracep->chgBit(oldp+959,(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk));
            tracep->chgCData(oldp+960,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
            tracep->chgCData(oldp+961,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
            tracep->chgCData(oldp+962,(vlSelf->top__DOT__axi_ls_u__DOT__w_state_next),2);
            tracep->chgCData(oldp+963,(vlSelf->top__DOT__axi_ls_u__DOT__r_state_next),2);
            tracep->chgWData(oldp+964,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
            tracep->chgQData(oldp+974,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
            tracep->chgQData(oldp+976,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
            tracep->chgQData(oldp+978,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
            tracep->chgQData(oldp+980,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
            tracep->chgQData(oldp+982,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
            tracep->chgQData(oldp+984,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
            tracep->chgQData(oldp+986,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
            tracep->chgQData(oldp+988,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
            tracep->chgQData(oldp+990,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
            tracep->chgQData(oldp+992,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
            tracep->chgQData(oldp+994,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
            tracep->chgQData(oldp+996,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
            tracep->chgQData(oldp+998,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
            tracep->chgQData(oldp+1000,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
            tracep->chgQData(oldp+1002,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
            tracep->chgQData(oldp+1004,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
            tracep->chgQData(oldp+1006,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
            tracep->chgQData(oldp+1008,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
            tracep->chgQData(oldp+1010,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
            tracep->chgQData(oldp+1012,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
            tracep->chgQData(oldp+1014,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
            tracep->chgQData(oldp+1016,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
            tracep->chgQData(oldp+1018,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
            tracep->chgQData(oldp+1020,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
            tracep->chgQData(oldp+1022,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
            tracep->chgQData(oldp+1024,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
            tracep->chgQData(oldp+1026,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
            tracep->chgQData(oldp+1028,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
            tracep->chgQData(oldp+1030,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
            tracep->chgQData(oldp+1032,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
            tracep->chgQData(oldp+1034,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
            tracep->chgQData(oldp+1036,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        }
        tracep->chgBit(oldp+1038,(vlSelf->clk));
        tracep->chgBit(oldp+1039,(vlSelf->rst_n));
        tracep->chgQData(oldp+1040,(vlSelf->pc_diff),64);
        tracep->chgQData(oldp+1042,(vlSelf->pc_decoding),64);
        tracep->chgIData(oldp+1044,(vlSelf->instr_diff),32);
        tracep->chgQData(oldp+1045,(vlSelf->regA0),64);
        tracep->chgBit(oldp+1047,(vlSelf->stall_n_diff));
        tracep->chgBit(oldp+1048,(vlSelf->axi_ar_ready_i));
        tracep->chgBit(oldp+1049,(vlSelf->axi_ar_valid_o));
        tracep->chgQData(oldp+1050,(vlSelf->axi_ar_addr_o),64);
        tracep->chgCData(oldp+1052,(vlSelf->axi_ar_prot_o),3);
        tracep->chgCData(oldp+1053,(vlSelf->axi_ar_id_o),4);
        tracep->chgBit(oldp+1054,(vlSelf->axi_ar_user_o));
        tracep->chgCData(oldp+1055,(vlSelf->axi_ar_len_o),8);
        tracep->chgCData(oldp+1056,(vlSelf->axi_ar_size_o),3);
        tracep->chgCData(oldp+1057,(vlSelf->axi_ar_burst_o),2);
        tracep->chgBit(oldp+1058,(vlSelf->axi_ar_lock_o));
        tracep->chgCData(oldp+1059,(vlSelf->axi_ar_cache_o),4);
        tracep->chgCData(oldp+1060,(vlSelf->axi_ar_qos_o),4);
        tracep->chgCData(oldp+1061,(vlSelf->axi_ar_region_o),4);
        tracep->chgBit(oldp+1062,(vlSelf->axi_r_ready_o));
        tracep->chgBit(oldp+1063,(vlSelf->axi_r_valid_i));
        tracep->chgCData(oldp+1064,(vlSelf->axi_r_resp_i),2);
        tracep->chgQData(oldp+1065,(vlSelf->axi_r_data_i),64);
        tracep->chgBit(oldp+1067,(vlSelf->axi_r_last_i));
        tracep->chgCData(oldp+1068,(vlSelf->axi_r_id_i),4);
        tracep->chgBit(oldp+1069,(vlSelf->axi_r_user_i));
        tracep->chgBit(oldp+1070,(vlSelf->axi_aw_ready_i));
        tracep->chgBit(oldp+1071,(vlSelf->axi_aw_valid_o));
        tracep->chgQData(oldp+1072,(vlSelf->axi_aw_addr_o),64);
        tracep->chgCData(oldp+1074,(vlSelf->axi_aw_prot_o),3);
        tracep->chgCData(oldp+1075,(vlSelf->axi_aw_id_o),4);
        tracep->chgBit(oldp+1076,(vlSelf->axi_aw_user_o));
        tracep->chgCData(oldp+1077,(vlSelf->axi_aw_len_o),8);
        tracep->chgCData(oldp+1078,(vlSelf->axi_aw_size_o),3);
        tracep->chgCData(oldp+1079,(vlSelf->axi_aw_burst_o),2);
        tracep->chgBit(oldp+1080,(vlSelf->axi_aw_lock_o));
        tracep->chgCData(oldp+1081,(vlSelf->axi_aw_cache_o),4);
        tracep->chgCData(oldp+1082,(vlSelf->axi_aw_qos_o),4);
        tracep->chgCData(oldp+1083,(vlSelf->axi_aw_region_o),4);
        tracep->chgBit(oldp+1084,(vlSelf->axi_w_ready_i));
        tracep->chgBit(oldp+1085,(vlSelf->axi_w_valid_o));
        tracep->chgQData(oldp+1086,(vlSelf->axi_w_data_o),64);
        tracep->chgCData(oldp+1088,(vlSelf->axi_w_strb_o),8);
        tracep->chgBit(oldp+1089,(vlSelf->axi_w_last_o));
        tracep->chgBit(oldp+1090,(vlSelf->axi_w_user_o));
        tracep->chgBit(oldp+1091,(vlSelf->axi_b_ready_o));
        tracep->chgBit(oldp+1092,(vlSelf->axi_b_valid_i));
        tracep->chgCData(oldp+1093,(vlSelf->axi_b_resp_i),2);
        tracep->chgCData(oldp+1094,(vlSelf->axi_b_id_i),4);
        tracep->chgBit(oldp+1095,(vlSelf->axi_b_user_i));
        tracep->chgBit(oldp+1096,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? 0U
                                    : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->chgCData(oldp+1097,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
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
        tracep->chgBit(oldp+1098,(((0xaU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x1cU))))
                                    ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)
                                    : ((2U == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready)
                                        : (IData)(vlSelf->axi_aw_ready_i)))));
        tracep->chgBit(oldp+1099,(((0xaU == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x1cU))))
                                    ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid)
                                    : ((2U == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x18U))))
                                        ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid)
                                        : (IData)(vlSelf->axi_b_valid_i)))));
        tracep->chgCData(oldp+1100,(((0xaU == (0xfU 
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
        tracep->chgCData(oldp+1101,(((0xaU == (0xfU 
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
        tracep->chgBit(oldp+1102,((1U & ((0xaU == (0xfU 
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
        tracep->chgBit(oldp+1103,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                     ? 0U : 1U) ? (1U 
                                                   & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                    : 0U)));
        tracep->chgCData(oldp+1104,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
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
        tracep->chgQData(oldp+1105,(((((((((- (QData)((IData)(
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
        tracep->chgCData(oldp+1107,(((0xaU == (0xfU 
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
        tracep->chgBit(oldp+1108,((1U & ((0xaU == (0xfU 
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
        tracep->chgBit(oldp+1109,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->chgBit(oldp+1110,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->chgIData(oldp+1111,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 0xbU)))
                                          : 0U) : 0U)),21);
        tracep->chgIData(oldp+1112,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                      ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                          ? 0U : (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 0xbU))))
                                      : 0U)),21);
        tracep->chgQData(oldp+1113,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->chgQData(oldp+1115,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->chgIData(oldp+1117,(((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->chgBit(oldp+1118,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->chgBit(oldp+1119,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                   & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                      | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))));
        tracep->chgIData(oldp+1120,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->chgIData(oldp+1121,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->chgQData(oldp+1122,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->chgQData(oldp+1124,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->chgBit(oldp+1126,(((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i) 
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
        tracep->chgIData(oldp+1127,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    }
}
