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

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<8>/*255:0*/ __Vtemp356;
    VlWide<4>/*127:0*/ __Vtemp357;
    VlWide<4>/*127:0*/ __Vtemp358;
    VlWide<3>/*95:0*/ __Vtemp359;
    VlWide<3>/*95:0*/ __Vtemp361;
    VlWide<3>/*95:0*/ __Vtemp362;
    VlWide<3>/*95:0*/ __Vtemp363;
    VlWide<3>/*95:0*/ __Vtemp364;
    VlWide<3>/*95:0*/ __Vtemp365;
    VlWide<3>/*95:0*/ __Vtemp368;
    VlWide<3>/*95:0*/ __Vtemp369;
    VlWide<3>/*95:0*/ __Vtemp370;
    VlWide<3>/*95:0*/ __Vtemp371;
    VlWide<3>/*95:0*/ __Vtemp372;
    VlWide<8>/*255:0*/ __Vtemp377;
    VlWide<4>/*127:0*/ __Vtemp380;
    VlWide<4>/*127:0*/ __Vtemp387;
    VlWide<4>/*127:0*/ __Vtemp390;
    VlWide<4>/*127:0*/ __Vtemp397;
    VlWide<4>/*127:0*/ __Vtemp400;
    VlWide<4>/*127:0*/ __Vtemp409;
    VlWide<4>/*127:0*/ __Vtemp412;
    VlWide<4>/*127:0*/ __Vtemp421;
    VlWide<4>/*127:0*/ __Vtemp424;
    VlWide<4>/*127:0*/ __Vtemp434;
    VlWide<4>/*127:0*/ __Vtemp437;
    VlWide<4>/*127:0*/ __Vtemp447;
    VlWide<10>/*319:0*/ __Vtemp452;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+1,((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
            tracep->chgBit(oldp+2,((1U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
            tracep->chgQData(oldp+3,(vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg),64);
            tracep->chgBit(oldp+5,((3U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
            tracep->chgBit(oldp+6,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt))));
            tracep->chgBit(oldp+7,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
            tracep->chgQData(oldp+8,(vlSelf->top__DOT__axi_ls_u__DOT__rdAddr_reg),64);
            tracep->chgBit(oldp+10,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
            tracep->chgQData(oldp+11,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
            tracep->chgQData(oldp+13,((((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                           >> 2U)))),64);
            tracep->chgQData(oldp+15,((((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                           >> 2U)))),64);
            tracep->chgQData(oldp+17,((((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                           >> 2U)))),64);
            tracep->chgIData(oldp+19,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                        << 0x1eU) | 
                                       (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                        >> 2U))),32);
            tracep->chgBit(oldp+20,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                           >> 1U))));
            tracep->chgQData(oldp+21,(vlSelf->top__DOT__csrdata_ls),64);
            tracep->chgQData(oldp+23,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
            tracep->chgQData(oldp+25,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
            tracep->chgBit(oldp+27,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
            tracep->chgBit(oldp+28,((3U == (0x7fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 2U)))));
            tracep->chgBit(oldp+29,((8U == (0x1fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 4U)))));
            tracep->chgCData(oldp+30,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
            tracep->chgCData(oldp+31,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
            tracep->chgBit(oldp+32,((0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
            tracep->chgIData(oldp+33,((((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                 >> 0xbU)) 
                                        << 0xbU) | 
                                       (0x7e0U & ((IData)(
                                                          (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                           >> 5U)) 
                                                  << 5U)))),32);
            tracep->chgBit(oldp+34,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
            tracep->chgBit(oldp+35,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
            tracep->chgQData(oldp+36,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
            tracep->chgCData(oldp+38,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                        ? 0U : 1U)),4);
            tracep->chgCData(oldp+39,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_region),4);
            tracep->chgBit(oldp+40,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
            tracep->chgBit(oldp+41,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
            tracep->chgBit(oldp+42,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
            tracep->chgBit(oldp+43,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
            tracep->chgQData(oldp+44,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
            tracep->chgCData(oldp+46,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
            tracep->chgCData(oldp+47,((0x3fU & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 5U)))),6);
            tracep->chgIData(oldp+48,((0x1fffffU & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 0xbU)))),21);
            tracep->chgQData(oldp+49,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
            tracep->chgQData(oldp+51,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
            tracep->chgBit(oldp+53,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                   >> 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                               >> 5U))))))));
            tracep->chgBit(oldp+54,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                   >> 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                               >> 5U))))))));
            tracep->chgIData(oldp+55,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                      [(0x3fU & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 5U)))]),21);
            tracep->chgIData(oldp+56,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                      [(0x3fU & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 5U)))]),21);
            tracep->chgQData(oldp+57,((((QData)((IData)(
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
            tracep->chgBit(oldp+59,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
            tracep->chgQData(oldp+60,((QData)((IData)(
                                                      (((IData)(
                                                                (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                 >> 0xbU)) 
                                                        << 0xbU) 
                                                       | (0x7e0U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                      >> 5U)) 
                                                             << 5U)))))),64);
            tracep->chgCData(oldp+62,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state),2);
            tracep->chgCData(oldp+63,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))),5);
            tracep->chgBit(oldp+64,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
            tracep->chgCData(oldp+65,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
            tracep->chgWData(oldp+66,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
            tracep->chgCData(oldp+74,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 0xeU))),3);
            tracep->chgBit(oldp+75,(((3U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 2U))) 
                                     & (0U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+76,(((3U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 2U))) 
                                     & (4U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+77,(((3U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 2U))) 
                                     & (1U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+78,(((3U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 2U))) 
                                     & (5U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+79,(((3U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 2U))) 
                                     & (2U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+80,(((3U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 2U))) 
                                     & (6U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+81,(((3U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 2U))) 
                                     & (3U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+82,(((8U == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U))) 
                                     & (0U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+83,(((8U == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U))) 
                                     & (1U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+84,(((8U == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U))) 
                                     & (2U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+85,(((8U == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U))) 
                                     & (3U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+86,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU)))));
            tracep->chgBit(oldp+87,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU)))));
            tracep->chgBit(oldp+88,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU)))));
            tracep->chgBit(oldp+89,((0x1cU == (0x1fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 4U)))));
            tracep->chgBit(oldp+90,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
            tracep->chgBit(oldp+91,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
            tracep->chgBit(oldp+92,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
            tracep->chgBit(oldp+93,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
            tracep->chgBit(oldp+94,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
            tracep->chgQData(oldp+95,(((((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                              >> 2U))) 
                                       | vlSelf->top__DOT__csrdata_ls)),64);
            tracep->chgQData(oldp+97,(((~ (((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                               << 0x1eU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                 >> 2U)))) 
                                       & vlSelf->top__DOT__csrdata_ls)),64);
            tracep->chgQData(oldp+99,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
            tracep->chgQData(oldp+101,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
            tracep->chgQData(oldp+103,(((0x1cU == (0x1fU 
                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                      >> 4U)))
                                         ? 0xbULL : 0ULL)),64);
            tracep->chgQData(oldp+105,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
            tracep->chgBit(oldp+107,(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i));
            tracep->chgBit(oldp+108,(vlSelf->top__DOT__Dcache_u__DOT__validFlag));
            tracep->chgQData(oldp+109,(vlSelf->top__DOT__Dcache_u__DOT__validArray1),64);
            tracep->chgQData(oldp+111,(vlSelf->top__DOT__Dcache_u__DOT__validArray2),64);
            tracep->chgIData(oldp+113,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                       [0x3cU]),21);
            tracep->chgBit(oldp+114,(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay));
            tracep->chgBit(oldp+115,(vlSelf->top__DOT__Dcache_u__DOT__missFlag));
            tracep->chgBit(oldp+116,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay1));
            tracep->chgBit(oldp+117,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay2));
            tracep->chgQData(oldp+118,(vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch),64);
            tracep->chgCData(oldp+120,(vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch),8);
            tracep->chgQData(oldp+121,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1),64);
            tracep->chgQData(oldp+123,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2),64);
            tracep->chgBit(oldp+125,(vlSelf->top__DOT__Dcache_u__DOT__replaceWay));
            tracep->chgCData(oldp+126,(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt),2);
            tracep->chgCData(oldp+127,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [4U]))) {
            tracep->chgBit(oldp+128,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                         & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
            tracep->chgBit(oldp+129,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                         & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                        | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                       | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                      | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
            tracep->chgQData(oldp+130,(((((((((- (QData)((IData)(
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
            tracep->chgBit(oldp+132,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
            tracep->chgBit(oldp+133,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                        >> 1U) & ((0x1fU 
                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                      >> 9U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U))))));
            tracep->chgBit(oldp+134,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                       & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0xaU)))) 
                                      & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
            tracep->chgBit(oldp+135,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                        >> 1U) & ((0x1fU 
                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                      >> 9U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 9U))))));
            tracep->chgBit(oldp+136,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                       & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 5U)))) 
                                      & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
            tracep->chgBit(oldp+137,(((0U == (0x1fU 
                                              & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 3U))) 
                                      & ((0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0x16U)) 
                                         == (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
            tracep->chgBit(oldp+138,(((((IData)(vlSelf->top__DOT__Dcache_u__DOT__validFlag) 
                                        & (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                       & (~ (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i))) 
                                      & (IData)(vlSelf->top__DOT__ls_stall_n))));
            tracep->chgBit(oldp+139,((1U & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                    >> 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 5U))))))));
            tracep->chgBit(oldp+140,((1U & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                    >> 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 5U))))))));
            tracep->chgIData(oldp+141,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                       [(0x3fU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 5U)))]),21);
            tracep->chgIData(oldp+142,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                       [(0x3fU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 5U)))]),21);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+143,(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg),64);
            if ((1U & vlSelf->top__DOT__Dcache_u__DOT__randomBit)) {
                __Vtemp356[0U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U];
                __Vtemp356[1U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U];
                __Vtemp356[2U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U];
                __Vtemp356[3U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U];
                __Vtemp356[4U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U];
                __Vtemp356[5U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U];
                __Vtemp356[6U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U];
                __Vtemp356[7U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U];
            } else {
                __Vtemp356[0U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U];
                __Vtemp356[1U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U];
                __Vtemp356[2U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U];
                __Vtemp356[3U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U];
                __Vtemp356[4U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U];
                __Vtemp356[5U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U];
                __Vtemp356[6U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U];
                __Vtemp356[7U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U];
            }
            tracep->chgWData(oldp+145,(__Vtemp356),256);
            tracep->chgWData(oldp+153,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
            tracep->chgWData(oldp+157,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
            tracep->chgWData(oldp+161,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
            tracep->chgWData(oldp+165,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
            tracep->chgWData(oldp+169,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
            tracep->chgWData(oldp+177,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
            tracep->chgWData(oldp+185,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1),128);
            tracep->chgWData(oldp+189,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2),128);
            tracep->chgWData(oldp+193,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1),128);
            tracep->chgWData(oldp+197,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2),128);
            tracep->chgWData(oldp+201,(vlSelf->top__DOT__Dcache_u__DOT__way1Data),256);
            tracep->chgWData(oldp+209,(vlSelf->top__DOT__Dcache_u__DOT__way2Data),256);
            tracep->chgIData(oldp+217,(vlSelf->top__DOT__Dcache_u__DOT__randomBit),32);
            tracep->chgWData(oldp+218,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),256);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+226,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
            tracep->chgQData(oldp+227,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                         ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
            tracep->chgBit(oldp+229,(vlSelf->top__DOT__if_axi_r_last_i));
            tracep->chgCData(oldp+230,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
            tracep->chgBit(oldp+231,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready));
            tracep->chgBit(oldp+232,(vlSelf->top__DOT__axi_ls_u__DOT__b_ready));
            tracep->chgBit(oldp+233,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_b_valid));
            tracep->chgBit(oldp+234,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                       : 0U)));
            tracep->chgQData(oldp+235,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                         ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data
                                         : 0ULL)),64);
            tracep->chgBit(oldp+237,(vlSelf->top__DOT__ls_axi_r_last_i));
            tracep->chgBit(oldp+238,(vlSelf->top__DOT__dataValid_o));
            tracep->chgBit(oldp+239,(vlSelf->top__DOT__lsAxiRdDataVAlid));
            tracep->chgBit(oldp+240,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
            tracep->chgBit(oldp+241,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
            tracep->chgQData(oldp+242,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
            tracep->chgBit(oldp+244,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
            tracep->chgCData(oldp+245,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
            tracep->chgCData(oldp+246,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
            tracep->chgCData(oldp+247,(vlSelf->top__DOT__axi_ls_u__DOT__w_state_next),2);
            tracep->chgCData(oldp+248,(vlSelf->top__DOT__axi_ls_u__DOT__r_state_next),2);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+249,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
            tracep->chgBit(oldp+250,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
            tracep->chgQData(oldp+251,(vlSelf->top__DOT__ls_axi_w_data_o),64);
            tracep->chgQData(oldp+253,(vlSelf->top__DOT__pc_new),64);
            tracep->chgBit(oldp+255,(vlSelf->top__DOT__is_jump));
            tracep->chgQData(oldp+256,(((0x200000U 
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
                                                     >> 0x1bU)))))),64);
            tracep->chgBit(oldp+258,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                                | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                               | (IData)(vlSelf->top__DOT__ls_not_ok))))));
            tracep->chgBit(oldp+259,(vlSelf->top__DOT__if_stall_n));
            tracep->chgBit(oldp+260,(vlSelf->top__DOT__if_instr_valid));
            tracep->chgQData(oldp+261,(vlSelf->top__DOT__sram_rdata),64);
            tracep->chgQData(oldp+263,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
            tracep->chgBit(oldp+265,((0ULL != vlSelf->top__DOT__pc_new)));
            tracep->chgIData(oldp+266,(((1U & (IData)(
                                                      (vlSelf->top__DOT__pc_new 
                                                       >> 2U)))
                                         ? (IData)(
                                                   (vlSelf->top__DOT__sram_rdata 
                                                    >> 0x20U))
                                         : (IData)(vlSelf->top__DOT__sram_rdata))),32);
            tracep->chgQData(oldp+267,((((QData)((IData)(
                                                         vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
            tracep->chgIData(oldp+269,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
            tracep->chgQData(oldp+270,(vlSelf->top__DOT__ID_u__DOT__imm),64);
            tracep->chgBit(oldp+272,(vlSelf->top__DOT__src1sel_id));
            tracep->chgCData(oldp+273,(vlSelf->top__DOT__src2sel_id),2);
            tracep->chgCData(oldp+274,(vlSelf->top__DOT__aluctr_id),5);
            tracep->chgBit(oldp+275,(vlSelf->top__DOT__is_brc_id));
            tracep->chgBit(oldp+276,(vlSelf->top__DOT__is_jal_id));
            tracep->chgBit(oldp+277,(vlSelf->top__DOT__is_jalr_id));
            tracep->chgBit(oldp+278,(vlSelf->top__DOT__wben_id));
            tracep->chgCData(oldp+279,(vlSelf->top__DOT__rs1_idx_id),5);
            tracep->chgCData(oldp+280,(vlSelf->top__DOT__rs2_idx_id),5);
            tracep->chgBit(oldp+281,(vlSelf->top__DOT__DivEn_id));
            tracep->chgCData(oldp+282,(vlSelf->top__DOT__DivSel_id),3);
            tracep->chgBit(oldp+283,(vlSelf->top__DOT__in_trap_id));
            tracep->chgBit(oldp+284,(vlSelf->top__DOT__out_trap_id));
            tracep->chgBit(oldp+285,(vlSelf->top__DOT__trap_id));
            tracep->chgBit(oldp+286,(vlSelf->top__DOT__ld_use_hazard));
            tracep->chgBit(oldp+287,(vlSelf->top__DOT__id_flush));
            tracep->chgQData(oldp+288,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                              >> 0x1bU)))),64);
            tracep->chgIData(oldp+290,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                         << 5U) | (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1bU))),32);
            tracep->chgQData(oldp+291,(vlSelf->top__DOT__alures_ex),64);
            tracep->chgBit(oldp+293,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+294,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x10U))),2);
            tracep->chgQData(oldp+295,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                              >> 0x1bU)))),64);
            tracep->chgQData(oldp+297,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                              >> 0x1bU)))),64);
            tracep->chgQData(oldp+299,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU)))),64);
            tracep->chgQData(oldp+301,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
            tracep->chgCData(oldp+303,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0x16U))),5);
            tracep->chgBit(oldp+304,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+305,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+306,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+307,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+308,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 4U))));
            tracep->chgCData(oldp+309,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 1U))),3);
            tracep->chgBit(oldp+310,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
            tracep->chgBit(oldp+311,((1U & (~ ((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                               | (IData)(vlSelf->top__DOT__ls_not_ok))))));
            tracep->chgCData(oldp+312,(vlSelf->top__DOT__rs1_sel),2);
            tracep->chgCData(oldp+313,(vlSelf->top__DOT__rs2_sel),2);
            tracep->chgCData(oldp+314,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0xaU))),5);
            tracep->chgCData(oldp+315,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 5U))),5);
            tracep->chgBit(oldp+316,(vlSelf->top__DOT__ex_flush));
            tracep->chgBit(oldp+317,((3U == (0x7fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 5U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1bU))))));
            tracep->chgBit(oldp+318,((8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 3U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1dU))))));
            tracep->chgBit(oldp+319,(((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      | ((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                         & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
            tracep->chgBit(oldp+320,(vlSelf->top__DOT__ls_stall_n));
            tracep->chgBit(oldp+321,(vlSelf->top__DOT__ls_not_ok));
            tracep->chgQData(oldp+322,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
            tracep->chgQData(oldp+324,(vlSelf->top__DOT__ls_sram_rd_data),64);
            tracep->chgQData(oldp+326,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                              >> 1U)))),64);
            tracep->chgQData(oldp+328,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                              >> 1U)))),64);
            tracep->chgQData(oldp+330,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                              >> 1U)))),64);
            tracep->chgIData(oldp+332,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                         << 0x1fU) 
                                        | (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                           >> 1U))),32);
            tracep->chgQData(oldp+333,(vlSelf->top__DOT__wb_data),64);
            tracep->chgCData(oldp+335,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U))),5);
            tracep->chgBit(oldp+336,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
            tracep->chgQData(oldp+337,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
            tracep->chgBit(oldp+339,(vlSelf->top__DOT__rw_valid_i));
            tracep->chgBit(oldp+340,((((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                         & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                        | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                       | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                      | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)))));
            tracep->chgBit(oldp+341,(vlSelf->top__DOT__DcacheRdValid));
            tracep->chgBit(oldp+342,(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
            tracep->chgQData(oldp+343,(vlSelf->top__DOT__DcacheRdAddr),64);
            tracep->chgQData(oldp+345,(vlSelf->top__DOT__DcacheWrAddr),64);
            tracep->chgBit(oldp+347,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
            tracep->chgIData(oldp+348,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
            tracep->chgCData(oldp+349,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
            __Vtemp357[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
            __Vtemp357[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
            __Vtemp357[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
            __Vtemp357[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
            tracep->chgWData(oldp+350,(__Vtemp357),128);
            __Vtemp358[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
            __Vtemp358[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
            __Vtemp358[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
            __Vtemp358[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
            tracep->chgWData(oldp+354,(__Vtemp358),128);
            tracep->chgBit(oldp+358,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
            tracep->chgBit(oldp+359,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
            tracep->chgBit(oldp+360,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgBit(oldp+361,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgBit(oldp+362,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgBit(oldp+363,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgCData(oldp+364,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
            tracep->chgWData(oldp+365,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
            tracep->chgBit(oldp+373,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgBit(oldp+374,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
            tracep->chgBit(oldp+375,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
            tracep->chgCData(oldp+376,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
            tracep->chgBit(oldp+377,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
            tracep->chgBit(oldp+378,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
            tracep->chgBit(oldp+379,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
            tracep->chgCData(oldp+380,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
            tracep->chgBit(oldp+381,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
            tracep->chgQData(oldp+382,(((IData)(vlSelf->top__DOT__id_flush)
                                         ? 0ULL : vlSelf->top__DOT__pc_new)),64);
            tracep->chgIData(oldp+384,(((IData)(vlSelf->top__DOT__id_flush)
                                         ? 0U : ((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                                  ? (IData)(
                                                            (vlSelf->top__DOT__sram_rdata 
                                                             >> 0x20U))
                                                  : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
            __Vtemp359[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                               ? 0U : ((1U & (IData)(
                                                     (vlSelf->top__DOT__pc_new 
                                                      >> 2U)))
                                        ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                   >> 0x20U))
                                        : (IData)(vlSelf->top__DOT__sram_rdata)));
            __Vtemp359[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                       ? 0ULL : vlSelf->top__DOT__pc_new));
            __Vtemp359[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                        ? 0ULL : vlSelf->top__DOT__pc_new) 
                                      >> 0x20U));
            tracep->chgWData(oldp+385,(__Vtemp359),96);
            tracep->chgWData(oldp+388,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
            tracep->chgCData(oldp+391,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
            tracep->chgCData(oldp+392,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                 >> 2U))),5);
            tracep->chgCData(oldp+393,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+394,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 0x19U)),7);
            tracep->chgIData(oldp+395,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 7U)),25);
            tracep->chgQData(oldp+396,(((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
            tracep->chgIData(oldp+398,(((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
            tracep->chgBit(oldp+399,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__is_jalr_id))));
            tracep->chgBit(oldp+400,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__is_jal_id))));
            tracep->chgBit(oldp+401,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__is_brc_id))));
            tracep->chgBit(oldp+402,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__wben_id))));
            tracep->chgBit(oldp+403,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__trap_id))));
            tracep->chgWData(oldp+404,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
            tracep->chgBit(oldp+414,((1U & (~ ((0U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                               | ((1U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                  & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))))));
            tracep->chgQData(oldp+415,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
            tracep->chgQData(oldp+417,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
            tracep->chgQData(oldp+419,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
            VL_EXTEND_WQ(65,64, __Vtemp361, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp362, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp363, __Vtemp361, __Vtemp362);
            VL_EXTEND_WI(65,1, __Vtemp364, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp365, __Vtemp363, __Vtemp364);
            tracep->chgBit(oldp+421,((1U & ((0x2000000U 
                                             & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                             ? ((1U 
                                                 & __Vtemp365[2U]) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                             : ((IData)(
                                                        (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                         >> 0x3fU)) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
            tracep->chgBit(oldp+422,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
            tracep->chgQData(oldp+423,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
            tracep->chgBit(oldp+425,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            tracep->chgQData(oldp+426,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
            tracep->chgQData(oldp+428,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
            tracep->chgBit(oldp+430,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+431,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+432,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),3);
            tracep->chgQData(oldp+433,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
            VL_EXTEND_WQ(65,64, __Vtemp368, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp369, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp370, __Vtemp368, __Vtemp369);
            VL_EXTEND_WI(65,1, __Vtemp371, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp372, __Vtemp370, __Vtemp371);
            tracep->chgBit(oldp+435,((1U & __Vtemp372[2U])));
            tracep->chgBit(oldp+436,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
            tracep->chgQData(oldp+437,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+439,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+441,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+443,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                         ? ((4U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                             ? ((2U 
                                                 & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                                 ? 
                                                VL_MODDIV_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                                 : 
                                                VL_MODDIVS_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2))
                                             : ((2U 
                                                 & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                                 ? 
                                                VL_DIV_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                                 : 
                                                VL_DIVS_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)))
                                         : ((4U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                             ? ((2U 
                                                 & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                                 ? 
                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                 * vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                                 : 
                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                 * vlSelf->top__DOT__ex_stage_u__DOT__src2))
                                             : ((2U 
                                                 & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                                 ? 
                                                VL_MULS_QQQ(64,64,64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                                 : 
                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                 * vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
            tracep->chgCData(oldp+445,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                >> 0x16U))),4);
            tracep->chgBit(oldp+446,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+447,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
            tracep->chgQData(oldp+448,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
            tracep->chgQData(oldp+450,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
            tracep->chgQData(oldp+452,((0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
            tracep->chgQData(oldp+454,((~ (0xffffffffffffffffULL 
                                           >> (0x3fU 
                                               & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
            tracep->chgQData(oldp+456,(((0x4000000U 
                                         & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                         ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                            & (QData)((IData)(
                                                              ((0xffffffffffffffffULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                               >> 0x20U))))
                                         : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
            tracep->chgQData(oldp+458,(((0x4000000U 
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
            tracep->chgQData(oldp+460,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
            tracep->chgCData(oldp+462,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                              >> 7U))),3);
            tracep->chgQData(oldp+463,(((((QData)((IData)(
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
                                                 >> 0x1bU))))),64);
            tracep->chgQData(oldp+465,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                        + (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                            << 0x25U) 
                                           | (((QData)((IData)(
                                                               vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                 >> 0x1bU))))),64);
            tracep->chgBit(oldp+467,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
            tracep->chgBit(oldp+468,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
            tracep->chgBit(oldp+469,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
            tracep->chgQData(oldp+470,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
            tracep->chgQData(oldp+472,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
            tracep->chgBit(oldp+474,((1U & ((0x200U 
                                             & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                             ? ((0x100U 
                                                 & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                                 ? 
                                                ((0x80U 
                                                  & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                                  ? (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)
                                                  : 
                                                 (~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)))
                                                 : 
                                                ((0x80U 
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
            tracep->chgBit(oldp+475,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                       & ((0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 8U)) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0xaU)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+476,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                       & ((0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 8U)) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 5U)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
            __Vtemp377[0U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                               << 2U) | ((2U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                >> 0xeU)) 
                                         | (1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
            __Vtemp377[1U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                               >> 0x1eU) | ((IData)(
                                                    (vlSelf->top__DOT__alures_ex 
                                                     >> 0x20U)) 
                                            << 2U));
            __Vtemp377[2U] = (((IData)((vlSelf->top__DOT__alures_ex 
                                        >> 0x20U)) 
                               >> 0x1eU) | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                                            << 2U));
            __Vtemp377[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                               >> 0x1eU) | ((IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                     >> 0x20U)) 
                                            << 2U));
            __Vtemp377[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                        >> 0x20U)) 
                               >> 0x1eU) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 7U) 
                                            | (0x7cU 
                                               & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                  >> 0x19U))));
            __Vtemp377[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                    << 7U) 
                                                   | (0x7cU 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                         >> 0x19U))));
            __Vtemp377[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                    << 7U) 
                                                   | (0x7cU 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                         >> 0x19U))));
            __Vtemp377[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                    >> 0x19U));
            tracep->chgWData(oldp+477,(__Vtemp377),226);
            tracep->chgBit(oldp+485,((8U == (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 3U)))));
            tracep->chgCData(oldp+486,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
            tracep->chgSData(oldp+487,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
            tracep->chgIData(oldp+488,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
            tracep->chgIData(oldp+489,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
            tracep->chgBit(oldp+490,(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i));
            tracep->chgBit(oldp+491,(((3U != (0x7fU 
                                              & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                  << 5U) 
                                                 | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                    >> 0x1bU)))) 
                                      | (8U == (0x1fU 
                                                & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 3U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1dU)))))));
            tracep->chgBit(oldp+492,(((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))));
            tracep->chgIData(oldp+493,((((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0xbU)) 
                                         << 0xbU) | 
                                        (0x7e0U & ((IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 5U)) 
                                                   << 5U)))),32);
            tracep->chgCData(oldp+494,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
            tracep->chgBit(oldp+495,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
            tracep->chgBit(oldp+496,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
            tracep->chgBit(oldp+497,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
            VL_EXTEND_WQ(128,64, __Vtemp380, vlSelf->top__DOT__Dcache_u__DOT__storeData);
            if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
                __Vtemp387[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U];
                __Vtemp387[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U];
                __Vtemp387[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U];
                __Vtemp387[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U];
            } else {
                __Vtemp387[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp380[0U])
                                   : vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U]);
                __Vtemp387[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp380[1U])
                                   : vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U]);
                __Vtemp387[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                       : __Vtemp380[2U])
                                   : vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U]);
                __Vtemp387[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                                  >> 0x20U))
                                       : __Vtemp380[3U])
                                   : vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U]);
            }
            tracep->chgWData(oldp+498,(__Vtemp387),128);
            VL_EXTEND_WQ(128,64, __Vtemp390, vlSelf->top__DOT__Dcache_u__DOT__storeData);
            if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
                __Vtemp397[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U];
                __Vtemp397[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U];
                __Vtemp397[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U];
                __Vtemp397[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U];
            } else {
                __Vtemp397[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp390[0U])
                                   : vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U]);
                __Vtemp397[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp390[1U])
                                   : vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U]);
                __Vtemp397[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                       : __Vtemp390[2U])
                                   : vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U]);
                __Vtemp397[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                                  >> 0x20U))
                                       : __Vtemp390[3U])
                                   : vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U]);
            }
            tracep->chgWData(oldp+502,(__Vtemp397),128);
            tracep->chgBit(oldp+506,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
            tracep->chgBit(oldp+507,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
            tracep->chgBit(oldp+508,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgQData(oldp+509,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
            tracep->chgCData(oldp+511,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
            tracep->chgCData(oldp+512,((0x3fU & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 5U)))),6);
            tracep->chgIData(oldp+513,((0x1fffffU & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 0xbU)))),21);
            tracep->chgBit(oldp+514,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgBit(oldp+515,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgBit(oldp+516,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgQData(oldp+517,((((QData)((IData)(
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
            tracep->chgCData(oldp+519,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
            tracep->chgWData(oldp+520,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
            tracep->chgBit(oldp+528,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgBit(oldp+529,(vlSelf->top__DOT__Dcache_u__DOT__wrLow));
            tracep->chgBit(oldp+530,(vlSelf->top__DOT__Dcache_u__DOT__wrHigh));
            tracep->chgQData(oldp+531,(vlSelf->top__DOT__Dcache_u__DOT__storeData),64);
            tracep->chgCData(oldp+533,(vlSelf->top__DOT__Dcache_u__DOT__storeMask),8);
            tracep->chgQData(oldp+534,(vlSelf->top__DOT__Dcache_u__DOT__sramMask),64);
            VL_EXTEND_WQ(128,64, __Vtemp400, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
            if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
                __Vtemp409[0U] = 0xffffffffU;
                __Vtemp409[1U] = 0xffffffffU;
                __Vtemp409[2U] = 0xffffffffU;
                __Vtemp409[3U] = 0xffffffffU;
            } else {
                __Vtemp409[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? 0U : __Vtemp400[0U])
                                       : 0U) : 0xffffffffU);
                __Vtemp409[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? 0U : __Vtemp400[1U])
                                       : 0U) : 0xffffffffU);
                __Vtemp409[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                           : __Vtemp400[2U])
                                       : 0U) : 0xffffffffU);
                __Vtemp409[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                      >> 0x20U))
                                           : __Vtemp400[3U])
                                       : 0U) : 0xffffffffU);
            }
            tracep->chgWData(oldp+536,(__Vtemp409),128);
            VL_EXTEND_WQ(128,64, __Vtemp412, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
            if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
                __Vtemp421[0U] = 0xffffffffU;
                __Vtemp421[1U] = 0xffffffffU;
                __Vtemp421[2U] = 0xffffffffU;
                __Vtemp421[3U] = 0xffffffffU;
            } else {
                __Vtemp421[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? 0U : __Vtemp412[0U])
                                       : 0U) : 0xffffffffU);
                __Vtemp421[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? 0U : __Vtemp412[1U])
                                       : 0U) : 0xffffffffU);
                __Vtemp421[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                           : __Vtemp412[2U])
                                       : 0U) : 0xffffffffU);
                __Vtemp421[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                      >> 0x20U))
                                           : __Vtemp412[3U])
                                       : 0U) : 0xffffffffU);
            }
            tracep->chgWData(oldp+540,(__Vtemp421),128);
            tracep->chgBit(oldp+544,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U))) 
                                      & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
            tracep->chgBit(oldp+545,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & (~ (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 0x20U)))) 
                                      & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
            tracep->chgBit(oldp+546,((1U & (~ ((((0U 
                                                  == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                 & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                                | (1U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                               | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))))));
            tracep->chgBit(oldp+547,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
            VL_EXTEND_WQ(128,64, __Vtemp424, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
            __Vtemp434[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                     __Vtemp424[0U])
                                                     : 0U)
                                                    : 0xffffffffU)));
            __Vtemp434[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                     __Vtemp424[1U])
                                                     : 0U)
                                                    : 0xffffffffU)));
            __Vtemp434[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                     __Vtemp424[2U])
                                                     : 0U)
                                                    : 0xffffffffU)));
            __Vtemp434[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                     __Vtemp424[3U])
                                                     : 0U)
                                                    : 0xffffffffU)));
            tracep->chgWData(oldp+548,(__Vtemp434),128);
            tracep->chgCData(oldp+552,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
            tracep->chgBit(oldp+553,(((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                        & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                       | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                      | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))));
            VL_EXTEND_WQ(128,64, __Vtemp437, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
            __Vtemp447[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                     __Vtemp437[0U])
                                                     : 0U)
                                                    : 0xffffffffU)));
            __Vtemp447[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                     __Vtemp437[1U])
                                                     : 0U)
                                                    : 0xffffffffU)));
            __Vtemp447[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                     __Vtemp437[2U])
                                                     : 0U)
                                                    : 0xffffffffU)));
            __Vtemp447[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                     __Vtemp437[3U])
                                                     : 0U)
                                                    : 0xffffffffU)));
            tracep->chgWData(oldp+554,(__Vtemp447),128);
            tracep->chgBit(oldp+558,((1U & (~ ((((0U 
                                                  == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                 & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                                | (1U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                               | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))))));
            tracep->chgBit(oldp+559,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
            tracep->chgCData(oldp+560,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
            tracep->chgBit(oldp+561,(((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                        & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                       | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                      | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))));
            tracep->chgCData(oldp+562,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
            tracep->chgCData(oldp+563,((0x38U & ((IData)(vlSelf->top__DOT__DcacheRdAddr) 
                                                 << 3U))),6);
            tracep->chgWData(oldp+564,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
            tracep->chgWData(oldp+574,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [4U] | vlSelf->__Vm_traceActivity
                         [5U]))) {
            tracep->chgQData(oldp+584,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs2_idx_id])),64);
            tracep->chgQData(oldp+586,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs1_idx_id])),64);
            __Vtemp452[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
            __Vtemp452[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                               >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                                  >> 0x20U)) 
                                         << 0x1bU));
            __Vtemp452[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                        >> 0x20U)) 
                               >> 5U) | ((IData)(((0U 
                                                   == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                                  [vlSelf->top__DOT__rs1_idx_id])) 
                                         << 0x1bU));
            __Vtemp452[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs1_idx_id])) 
                               >> 5U) | ((IData)(((
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                    ? 0ULL
                                                    : 
                                                   vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                                   [vlSelf->top__DOT__rs1_idx_id]) 
                                                  >> 0x20U)) 
                                         << 0x1bU));
            __Vtemp452[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                          ? 0ULL : 
                                         vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                         [vlSelf->top__DOT__rs1_idx_id]) 
                                        >> 0x20U)) 
                               >> 5U) | ((IData)(((0U 
                                                   == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                                  [vlSelf->top__DOT__rs2_idx_id])) 
                                         << 0x1bU));
            __Vtemp452[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs2_idx_id])) 
                               >> 5U) | ((IData)(((
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                    ? 0ULL
                                                    : 
                                                   vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                                   [vlSelf->top__DOT__rs2_idx_id]) 
                                                  >> 0x20U)) 
                                         << 0x1bU));
            __Vtemp452[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                          ? 0ULL : 
                                         vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                         [vlSelf->top__DOT__rs2_idx_id]) 
                                        >> 0x20U)) 
                               >> 5U) | (((IData)(vlSelf->top__DOT__ex_flush)
                                           ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                                         << 0x1bU));
            __Vtemp452[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                                 ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                               >> 5U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                                   ? 0ULL
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                         << 0x1bU));
            __Vtemp452[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                               >> 5U) | ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                                    ? 0ULL
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                                  >> 0x20U)) 
                                         << 0x1bU));
            __Vtemp452[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                       >> 0x20U)) >> 5U);
            tracep->chgWData(oldp+588,(__Vtemp452),315);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
            tracep->chgQData(oldp+598,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
            tracep->chgQData(oldp+600,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
            tracep->chgQData(oldp+602,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
            tracep->chgQData(oldp+604,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
            tracep->chgQData(oldp+606,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
            tracep->chgQData(oldp+608,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
            tracep->chgQData(oldp+610,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
            tracep->chgQData(oldp+612,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
            tracep->chgQData(oldp+614,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
            tracep->chgQData(oldp+616,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
            tracep->chgQData(oldp+618,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
            tracep->chgQData(oldp+620,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
            tracep->chgQData(oldp+622,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
            tracep->chgQData(oldp+624,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
            tracep->chgQData(oldp+626,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
            tracep->chgQData(oldp+628,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
            tracep->chgQData(oldp+630,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
            tracep->chgQData(oldp+632,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
            tracep->chgQData(oldp+634,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
            tracep->chgQData(oldp+636,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
            tracep->chgQData(oldp+638,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
            tracep->chgQData(oldp+640,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
            tracep->chgQData(oldp+642,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
            tracep->chgQData(oldp+644,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
            tracep->chgQData(oldp+646,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
            tracep->chgQData(oldp+648,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
            tracep->chgQData(oldp+650,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
            tracep->chgQData(oldp+652,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
            tracep->chgQData(oldp+654,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
            tracep->chgQData(oldp+656,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
            tracep->chgQData(oldp+658,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
            tracep->chgQData(oldp+660,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        }
        tracep->chgBit(oldp+662,(vlSelf->clk));
        tracep->chgBit(oldp+663,(vlSelf->rst_n));
        tracep->chgQData(oldp+664,(vlSelf->pc_diff),64);
        tracep->chgQData(oldp+666,(vlSelf->pc_decoding),64);
        tracep->chgIData(oldp+668,(vlSelf->instr_diff),32);
        tracep->chgQData(oldp+669,(vlSelf->regA0),64);
        tracep->chgBit(oldp+671,(vlSelf->stall_n_diff));
        tracep->chgBit(oldp+672,(vlSelf->axi_ar_ready_i));
        tracep->chgBit(oldp+673,(vlSelf->axi_ar_valid_o));
        tracep->chgQData(oldp+674,(vlSelf->axi_ar_addr_o),64);
        tracep->chgCData(oldp+676,(vlSelf->axi_ar_prot_o),3);
        tracep->chgCData(oldp+677,(vlSelf->axi_ar_id_o),4);
        tracep->chgBit(oldp+678,(vlSelf->axi_ar_user_o));
        tracep->chgCData(oldp+679,(vlSelf->axi_ar_len_o),8);
        tracep->chgCData(oldp+680,(vlSelf->axi_ar_size_o),3);
        tracep->chgCData(oldp+681,(vlSelf->axi_ar_burst_o),2);
        tracep->chgBit(oldp+682,(vlSelf->axi_ar_lock_o));
        tracep->chgCData(oldp+683,(vlSelf->axi_ar_cache_o),4);
        tracep->chgCData(oldp+684,(vlSelf->axi_ar_qos_o),4);
        tracep->chgCData(oldp+685,(vlSelf->axi_ar_region_o),4);
        tracep->chgBit(oldp+686,(vlSelf->axi_r_ready_o));
        tracep->chgBit(oldp+687,(vlSelf->axi_r_valid_i));
        tracep->chgCData(oldp+688,(vlSelf->axi_r_resp_i),2);
        tracep->chgQData(oldp+689,(vlSelf->axi_r_data_i),64);
        tracep->chgBit(oldp+691,(vlSelf->axi_r_last_i));
        tracep->chgCData(oldp+692,(vlSelf->axi_r_id_i),4);
        tracep->chgBit(oldp+693,(vlSelf->axi_r_user_i));
        tracep->chgBit(oldp+694,(vlSelf->axi_aw_ready_i));
        tracep->chgBit(oldp+695,(vlSelf->axi_aw_valid_o));
        tracep->chgQData(oldp+696,(vlSelf->axi_aw_addr_o),64);
        tracep->chgCData(oldp+698,(vlSelf->axi_aw_prot_o),3);
        tracep->chgCData(oldp+699,(vlSelf->axi_aw_id_o),4);
        tracep->chgBit(oldp+700,(vlSelf->axi_aw_user_o));
        tracep->chgCData(oldp+701,(vlSelf->axi_aw_len_o),8);
        tracep->chgCData(oldp+702,(vlSelf->axi_aw_size_o),3);
        tracep->chgCData(oldp+703,(vlSelf->axi_aw_burst_o),2);
        tracep->chgBit(oldp+704,(vlSelf->axi_aw_lock_o));
        tracep->chgCData(oldp+705,(vlSelf->axi_aw_cache_o),4);
        tracep->chgCData(oldp+706,(vlSelf->axi_aw_qos_o),4);
        tracep->chgCData(oldp+707,(vlSelf->axi_aw_region_o),4);
        tracep->chgBit(oldp+708,(vlSelf->axi_w_ready_i));
        tracep->chgBit(oldp+709,(vlSelf->axi_w_valid_o));
        tracep->chgQData(oldp+710,(vlSelf->axi_w_data_o),64);
        tracep->chgCData(oldp+712,(vlSelf->axi_w_strb_o),8);
        tracep->chgBit(oldp+713,(vlSelf->axi_w_last_o));
        tracep->chgBit(oldp+714,(vlSelf->axi_w_user_o));
        tracep->chgBit(oldp+715,(vlSelf->axi_b_ready_o));
        tracep->chgBit(oldp+716,(vlSelf->axi_b_valid_i));
        tracep->chgCData(oldp+717,(vlSelf->axi_b_resp_i),2);
        tracep->chgCData(oldp+718,(vlSelf->axi_b_id_i),4);
        tracep->chgBit(oldp+719,(vlSelf->axi_b_user_i));
        tracep->chgBit(oldp+720,(vlSelf->axi_mmio_ar_ready_i));
        tracep->chgBit(oldp+721,(vlSelf->axi_mmio_ar_valid_o));
        tracep->chgQData(oldp+722,(vlSelf->axi_mmio_ar_addr_o),64);
        tracep->chgCData(oldp+724,(vlSelf->axi_mmio_ar_prot_o),3);
        tracep->chgCData(oldp+725,(vlSelf->axi_mmio_ar_id_o),4);
        tracep->chgBit(oldp+726,(vlSelf->axi_mmio_ar_user_o));
        tracep->chgCData(oldp+727,(vlSelf->axi_mmio_ar_len_o),8);
        tracep->chgCData(oldp+728,(vlSelf->axi_mmio_ar_size_o),3);
        tracep->chgCData(oldp+729,(vlSelf->axi_mmio_ar_burst_o),2);
        tracep->chgBit(oldp+730,(vlSelf->axi_mmio_ar_lock_o));
        tracep->chgCData(oldp+731,(vlSelf->axi_mmio_ar_cache_o),4);
        tracep->chgCData(oldp+732,(vlSelf->axi_mmio_ar_qos_o),4);
        tracep->chgCData(oldp+733,(vlSelf->axi_mmio_ar_region_o),4);
        tracep->chgBit(oldp+734,(vlSelf->axi_mmio_r_ready_o));
        tracep->chgBit(oldp+735,(vlSelf->axi_mmio_r_valid_i));
        tracep->chgCData(oldp+736,(vlSelf->axi_mmio_r_resp_i),2);
        tracep->chgQData(oldp+737,(vlSelf->axi_mmio_r_data_i),64);
        tracep->chgBit(oldp+739,(vlSelf->axi_mmio_r_last_i));
        tracep->chgCData(oldp+740,(vlSelf->axi_mmio_r_id_i),4);
        tracep->chgBit(oldp+741,(vlSelf->axi_mmio_r_user_i));
        tracep->chgBit(oldp+742,(vlSelf->axi_mmio_aw_ready_i));
        tracep->chgBit(oldp+743,(vlSelf->axi_mmio_aw_valid_o));
        tracep->chgQData(oldp+744,(vlSelf->axi_mmio_aw_addr_o),64);
        tracep->chgCData(oldp+746,(vlSelf->axi_mmio_aw_prot_o),3);
        tracep->chgCData(oldp+747,(vlSelf->axi_mmio_aw_id_o),4);
        tracep->chgBit(oldp+748,(vlSelf->axi_mmio_aw_user_o));
        tracep->chgCData(oldp+749,(vlSelf->axi_mmio_aw_len_o),8);
        tracep->chgCData(oldp+750,(vlSelf->axi_mmio_aw_size_o),3);
        tracep->chgCData(oldp+751,(vlSelf->axi_mmio_aw_burst_o),2);
        tracep->chgBit(oldp+752,(vlSelf->axi_mmio_aw_lock_o));
        tracep->chgCData(oldp+753,(vlSelf->axi_mmio_aw_cache_o),4);
        tracep->chgCData(oldp+754,(vlSelf->axi_mmio_aw_qos_o),4);
        tracep->chgCData(oldp+755,(vlSelf->axi_mmio_aw_region_o),4);
        tracep->chgBit(oldp+756,(vlSelf->axi_mmio_w_ready_i));
        tracep->chgBit(oldp+757,(vlSelf->axi_mmio_w_valid_o));
        tracep->chgQData(oldp+758,(vlSelf->axi_mmio_w_data_o),64);
        tracep->chgCData(oldp+760,(vlSelf->axi_mmio_w_strb_o),8);
        tracep->chgBit(oldp+761,(vlSelf->axi_mmio_w_last_o));
        tracep->chgBit(oldp+762,(vlSelf->axi_mmio_w_user_o));
        tracep->chgBit(oldp+763,(vlSelf->axi_mmio_b_ready_o));
        tracep->chgBit(oldp+764,(vlSelf->axi_mmio_b_valid_i));
        tracep->chgCData(oldp+765,(vlSelf->axi_mmio_b_resp_i),2);
        tracep->chgCData(oldp+766,(vlSelf->axi_mmio_b_id_i),4);
        tracep->chgBit(oldp+767,(vlSelf->axi_mmio_b_user_i));
        tracep->chgBit(oldp+768,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                    ? 0U : 1U) ? 0U
                                   : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->chgCData(oldp+769,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                     ? 0U : (3U & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                               >> 0x1dU)))
                                                    ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                    : (IData)(vlSelf->axi_r_resp_i))))),2);
        tracep->chgBit(oldp+770,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                 >> 0x1dU)))
                                   ? (IData)(vlSelf->axi_mmio_aw_ready_i)
                                   : (IData)(vlSelf->axi_aw_ready_i))));
        tracep->chgCData(oldp+771,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                   >> 0x1dU)))
                                     ? (IData)(vlSelf->axi_mmio_b_resp_i)
                                     : (IData)(vlSelf->axi_b_resp_i))),2);
        tracep->chgCData(oldp+772,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                   >> 0x1dU)))
                                     ? (IData)(vlSelf->axi_mmio_b_id_i)
                                     : (IData)(vlSelf->axi_b_id_i))),4);
        tracep->chgBit(oldp+773,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                 >> 0x1dU)))
                                   ? (IData)(vlSelf->axi_mmio_b_user_i)
                                   : (IData)(vlSelf->axi_b_user_i))));
        tracep->chgBit(oldp+774,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                    ? 0U : 1U) ? (1U 
                                                  & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                   : 0U)));
        tracep->chgCData(oldp+775,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                     ? (3U & ((1U & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x1dU)))
                                               ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                               : (IData)(vlSelf->axi_r_resp_i)))
                                     : 0U)),2);
        tracep->chgCData(oldp+776,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                   >> 0x1dU)))
                                     ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                     : (IData)(vlSelf->axi_r_resp_i))),2);
        tracep->chgBit(oldp+777,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                 >> 0x1dU)))
                                   ? (IData)(vlSelf->axi_mmio_r_user_i)
                                   : (IData)(vlSelf->axi_r_user_i))));
        tracep->chgBit(oldp+778,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                  & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->chgBit(oldp+779,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                  & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->chgIData(oldp+780,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                     ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                         ? (0x1fffffU 
                                            & (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 0xbU)))
                                         : 0U) : 0U)),21);
        tracep->chgIData(oldp+781,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                     ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                         ? 0U : (0x1fffffU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 0xbU))))
                                     : 0U)),21);
        tracep->chgQData(oldp+782,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->chgQData(oldp+784,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->chgIData(oldp+786,(((1U & vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                     ? ((vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                         [(0x3fU & (IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 5U)))] 
                                         << 0xbU) | 
                                        (0x7e0U & ((IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 5U)) 
                                                   << 5U)))
                                     : ((vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                         [(0x3fU & (IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 5U)))] 
                                         << 0xbU) | 
                                        (0x7e0U & ((IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 5U)) 
                                                   << 5U))))),32);
        tracep->chgCData(oldp+787,(((4U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                     ? ((2U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                         ? ((1U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                             ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg)
                                                 ? 7U
                                                 : 1U)
                                             : 0U) : 0U)
                                     : ((2U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                         ? ((1U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                             ? ((IData)(vlSelf->top__DOT__ls_axi_r_last_i)
                                                 ? 7U
                                                 : 3U)
                                             : ((0U 
                                                 == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                             ? (((((IData)(vlSelf->top__DOT__Dcache_u__DOT__validFlag) 
                                                   & (1U 
                                                      == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                                  & (~ (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i))) 
                                                 & (IData)(vlSelf->top__DOT__ls_stall_n))
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)
                                                  ? 
                                                 ((((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i) 
                                                    & (IData)(vlSelf->top__DOT__ls_stall_n)) 
                                                   | ((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i) 
                                                      & (~ (IData)(
                                                                   (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                    >> 0x20U)))))
                                                   ? 1U
                                                   : 0U)
                                                  : 2U))
                                             : (((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i) 
                                                 & (IData)(vlSelf->top__DOT__ls_stall_n))
                                                 ? 1U
                                                 : 0U))))),3);
        tracep->chgBit(oldp+788,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                  & ((~ vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                     | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 5U)))))))));
        tracep->chgBit(oldp+789,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                  & (vlSelf->top__DOT__Dcache_u__DOT__randomBit 
                                     | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 5U)))))))));
        tracep->chgIData(oldp+790,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))
                                     ? (0x1fffffU & 
                                        ((1U & vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                          ? vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                         [(0x3fU & (IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 5U)))]
                                          : (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 0xbU))))
                                     : 0U)),21);
        tracep->chgIData(oldp+791,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))
                                     ? (0x1fffffU & 
                                        ((1U & vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                          ? (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 0xbU))
                                          : vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                         [(0x3fU & (IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 5U)))]))
                                     : 0U)),21);
        tracep->chgQData(oldp+792,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->chgQData(oldp+794,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
                                     : 7ULL)),64);
        tracep->chgBit(oldp+796,((((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                >> 0x20U))) 
                                    & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                   & (((~ vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                       & (IData)((vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                              >> 5U)))))) 
                                      | (vlSelf->top__DOT__Dcache_u__DOT__randomBit 
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
                                     & (((~ vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                                                    >> 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 5U)))))) 
                                        | (vlSelf->top__DOT__Dcache_u__DOT__randomBit 
                                           & (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                                                      >> 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                  >> 5U)))))))))));
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
