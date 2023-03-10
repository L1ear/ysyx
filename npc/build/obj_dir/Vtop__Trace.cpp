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
    VlWide<8>/*255:0*/ __Vtemp359;
    VlWide<8>/*255:0*/ __Vtemp362;
    VlWide<4>/*127:0*/ __Vtemp363;
    VlWide<4>/*127:0*/ __Vtemp364;
    VlWide<3>/*95:0*/ __Vtemp365;
    VlWide<3>/*95:0*/ __Vtemp367;
    VlWide<3>/*95:0*/ __Vtemp368;
    VlWide<3>/*95:0*/ __Vtemp369;
    VlWide<3>/*95:0*/ __Vtemp370;
    VlWide<3>/*95:0*/ __Vtemp371;
    VlWide<3>/*95:0*/ __Vtemp374;
    VlWide<3>/*95:0*/ __Vtemp375;
    VlWide<3>/*95:0*/ __Vtemp376;
    VlWide<3>/*95:0*/ __Vtemp377;
    VlWide<3>/*95:0*/ __Vtemp378;
    VlWide<8>/*255:0*/ __Vtemp383;
    VlWide<4>/*127:0*/ __Vtemp386;
    VlWide<4>/*127:0*/ __Vtemp393;
    VlWide<4>/*127:0*/ __Vtemp396;
    VlWide<4>/*127:0*/ __Vtemp403;
    VlWide<4>/*127:0*/ __Vtemp406;
    VlWide<4>/*127:0*/ __Vtemp415;
    VlWide<4>/*127:0*/ __Vtemp418;
    VlWide<4>/*127:0*/ __Vtemp427;
    VlWide<4>/*127:0*/ __Vtemp430;
    VlWide<4>/*127:0*/ __Vtemp440;
    VlWide<4>/*127:0*/ __Vtemp443;
    VlWide<4>/*127:0*/ __Vtemp453;
    VlWide<10>/*319:0*/ __Vtemp458;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
            tracep->chgBit(oldp+1,((1U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg),64);
            tracep->chgBit(oldp+4,((3U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
            tracep->chgCData(oldp+5,(vlSelf->top__DOT__axi_ls_u__DOT__lenthReg),8);
            tracep->chgBit(oldp+6,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
            tracep->chgQData(oldp+7,(vlSelf->top__DOT__axi_ls_u__DOT__rdAddr_reg),64);
            tracep->chgBit(oldp+9,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
            tracep->chgQData(oldp+10,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
            tracep->chgQData(oldp+12,((((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                           >> 2U)))),64);
            tracep->chgQData(oldp+14,((((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                           >> 2U)))),64);
            tracep->chgQData(oldp+16,((((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                           >> 2U)))),64);
            tracep->chgIData(oldp+18,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                        << 0x1eU) | 
                                       (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                        >> 2U))),32);
            tracep->chgBit(oldp+19,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                           >> 1U))));
            tracep->chgQData(oldp+20,(vlSelf->top__DOT__csrdata_ls),64);
            tracep->chgQData(oldp+22,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
            tracep->chgQData(oldp+24,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
            tracep->chgBit(oldp+26,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
            tracep->chgBit(oldp+27,((3U == (0x7fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 2U)))));
            tracep->chgBit(oldp+28,((8U == (0x1fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 4U)))));
            tracep->chgCData(oldp+29,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
            tracep->chgCData(oldp+30,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
            tracep->chgBit(oldp+31,((0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
            tracep->chgIData(oldp+32,((((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                 >> 0xbU)) 
                                        << 0xbU) | 
                                       (0x7e0U & ((IData)(
                                                          (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                           >> 5U)) 
                                                  << 5U)))),32);
            tracep->chgBit(oldp+33,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
            tracep->chgBit(oldp+34,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
            tracep->chgCData(oldp+35,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                        ? 0U : 1U)),4);
            tracep->chgCData(oldp+36,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                        ? (IData)(vlSelf->top__DOT__if_axi_ar_region_o)
                                        : (IData)(vlSelf->top__DOT__ls_axi_ar_region_o))),4);
            tracep->chgBit(oldp+37,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
            tracep->chgBit(oldp+38,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
            tracep->chgBit(oldp+39,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
            tracep->chgQData(oldp+40,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
            tracep->chgCData(oldp+42,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
            tracep->chgCData(oldp+43,((0x3fU & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 5U)))),6);
            tracep->chgIData(oldp+44,((0x1fffffU & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 0xbU)))),21);
            tracep->chgQData(oldp+45,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
            tracep->chgQData(oldp+47,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
            tracep->chgBit(oldp+49,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                   >> 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                               >> 5U))))))));
            tracep->chgBit(oldp+50,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                   >> 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                               >> 5U))))))));
            tracep->chgIData(oldp+51,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                      [(0x3fU & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 5U)))]),21);
            tracep->chgIData(oldp+52,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                      [(0x3fU & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 5U)))]),21);
            tracep->chgQData(oldp+53,((((QData)((IData)(
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
            tracep->chgBit(oldp+55,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
            tracep->chgQData(oldp+56,((QData)((IData)(
                                                      (((IData)(
                                                                (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                 >> 0xbU)) 
                                                        << 0xbU) 
                                                       | (0x7e0U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                      >> 5U)) 
                                                             << 5U)))))),64);
            tracep->chgCData(oldp+58,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state),2);
            tracep->chgCData(oldp+59,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 9U))),5);
            tracep->chgBit(oldp+60,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
            tracep->chgCData(oldp+61,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
            tracep->chgWData(oldp+62,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
            tracep->chgCData(oldp+70,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 0xeU))),3);
            tracep->chgBit(oldp+71,(((3U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 2U))) 
                                     & (0U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+72,(((3U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 2U))) 
                                     & (4U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+73,(((3U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 2U))) 
                                     & (1U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+74,(((3U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 2U))) 
                                     & (5U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+75,(((3U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 2U))) 
                                     & (2U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+76,(((3U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 2U))) 
                                     & (6U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+77,(((3U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 2U))) 
                                     & (3U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+78,(((8U == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U))) 
                                     & (0U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+79,(((8U == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U))) 
                                     & (1U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+80,(((8U == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U))) 
                                     & (2U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+81,(((8U == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U))) 
                                     & (3U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+82,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU)))));
            tracep->chgBit(oldp+83,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU)))));
            tracep->chgBit(oldp+84,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xeU)))));
            tracep->chgBit(oldp+85,((0x1cU == (0x1fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 4U)))));
            tracep->chgBit(oldp+86,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
            tracep->chgBit(oldp+87,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
            tracep->chgBit(oldp+88,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
            tracep->chgBit(oldp+89,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
            tracep->chgBit(oldp+90,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
            tracep->chgQData(oldp+91,(((((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                              >> 2U))) 
                                       | vlSelf->top__DOT__csrdata_ls)),64);
            tracep->chgQData(oldp+93,(((~ (((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                               << 0x1eU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                 >> 2U)))) 
                                       & vlSelf->top__DOT__csrdata_ls)),64);
            tracep->chgQData(oldp+95,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
            tracep->chgQData(oldp+97,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
            tracep->chgQData(oldp+99,(((0x1cU == (0x1fU 
                                                  & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                     >> 4U)))
                                        ? 0xbULL : 0ULL)),64);
            tracep->chgQData(oldp+101,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
            tracep->chgQData(oldp+103,(vlSelf->top__DOT__Dcache_u__DOT__validArray1),64);
            tracep->chgQData(oldp+105,(vlSelf->top__DOT__Dcache_u__DOT__validArray2),64);
            tracep->chgIData(oldp+107,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                       [0x3cU]),21);
            tracep->chgIData(oldp+108,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                       [0x23U]),21);
            tracep->chgBit(oldp+109,(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay));
            tracep->chgBit(oldp+110,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay1));
            tracep->chgBit(oldp+111,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay2));
            tracep->chgCData(oldp+112,(vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch),8);
            tracep->chgBit(oldp+113,(vlSelf->top__DOT__Dcache_u__DOT__replaceWay));
            tracep->chgBit(oldp+114,(vlSelf->top__DOT__Dcache_u__DOT__uncache));
            tracep->chgBit(oldp+115,(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk));
            tracep->chgQData(oldp+116,(vlSelf->top__DOT__Dcache_u__DOT__temp),64);
            tracep->chgCData(oldp+118,(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt),2);
            tracep->chgCData(oldp+119,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [3U]))) {
            tracep->chgCData(oldp+120,(((1U & (IData)(
                                                      (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                       >> 0x1dU)))
                                         ? ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                             ? 0U : 1U)
                                         : 0U)),4);
            tracep->chgCData(oldp+121,(((1U & (IData)(
                                                      (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                       >> 0x1dU)))
                                         ? ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                             ? 3U : 
                                            ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                              ? 0U : 3U))
                                         : 0U)),8);
            tracep->chgCData(oldp+122,(((1U & (IData)(
                                                      (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                       >> 0x1dU)))
                                         ? (0xfU & 
                                            ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                              ? (IData)(vlSelf->top__DOT__if_axi_ar_region_o)
                                              : (IData)(vlSelf->top__DOT__ls_axi_ar_region_o)))
                                         : 0U)),4);
            tracep->chgBit(oldp+123,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                         & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
            tracep->chgBit(oldp+124,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                         & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                        | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                       | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                      | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
            tracep->chgQData(oldp+125,((((0U == (0x1fU 
                                                 & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                    >> 3U))) 
                                         & ((0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
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
            tracep->chgCData(oldp+127,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                         ? 3U : ((6U 
                                                  == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                  ? 0U
                                                  : 3U))),8);
            tracep->chgBit(oldp+128,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
            tracep->chgBit(oldp+129,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
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
            tracep->chgBit(oldp+130,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                       & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0xaU)))) 
                                      & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
            tracep->chgBit(oldp+131,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
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
            tracep->chgBit(oldp+132,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                       & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 5U)))) 
                                      & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
            tracep->chgBit(oldp+133,(((0U == (0x1fU 
                                              & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 3U))) 
                                      & ((0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0x16U)) 
                                         == (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
            tracep->chgBit(oldp+134,((1U & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                    >> 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 5U))))))));
            tracep->chgBit(oldp+135,((1U & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                    >> 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 5U))))))));
            tracep->chgIData(oldp+136,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                       [(0x3fU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 5U)))]),21);
            tracep->chgIData(oldp+137,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                       [(0x3fU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 5U)))]),21);
            tracep->chgBit(oldp+138,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & (~ (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 0x20U)))) 
                                      & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk)))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+139,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready));
            tracep->chgBit(oldp+140,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid));
            tracep->chgCData(oldp+141,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp),2);
            tracep->chgQData(oldp+142,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata),64);
            tracep->chgBit(oldp+144,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready));
            tracep->chgQData(oldp+145,(((1U & (IData)(
                                                      (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                       >> 0x1dU)))
                                         ? vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg
                                         : 0ULL)),64);
            tracep->chgCData(oldp+147,(((1U & (IData)(
                                                      (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                       >> 0x1dU)))
                                         ? 1U : 0U)),4);
            tracep->chgCData(oldp+148,(((1U & (IData)(
                                                      (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                       >> 0x1dU)))
                                         ? 1U : 0U)),2);
            tracep->chgCData(oldp+149,(((1U & (IData)(
                                                      (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                       >> 0x1dU)))
                                         ? 0xfU : 0U)),4);
            tracep->chgBit(oldp+150,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready));
            tracep->chgCData(oldp+151,(((1U & (IData)(
                                                      (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                       >> 0x1dU)))
                                         ? (0xffU & (IData)(vlSelf->top__DOT__ls_axi_w_strb_o))
                                         : 0U)),8);
            tracep->chgBit(oldp+152,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid));
            tracep->chgCData(oldp+153,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp),2);
            tracep->chgQData(oldp+154,(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg),64);
            tracep->chgCData(oldp+156,(vlSelf->top__DOT__ls_axi_w_strb_o),8);
            tracep->chgWData(oldp+157,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
            tracep->chgWData(oldp+161,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
            tracep->chgWData(oldp+165,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
            tracep->chgWData(oldp+169,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
            tracep->chgWData(oldp+173,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
            tracep->chgWData(oldp+181,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
            tracep->chgIData(oldp+189,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
            tracep->chgWData(oldp+190,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1),128);
            tracep->chgWData(oldp+194,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2),128);
            tracep->chgWData(oldp+198,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1),128);
            tracep->chgWData(oldp+202,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2),128);
            tracep->chgWData(oldp+206,(vlSelf->top__DOT__Dcache_u__DOT__way1Data),256);
            tracep->chgWData(oldp+214,(vlSelf->top__DOT__Dcache_u__DOT__way2Data),256);
            tracep->chgWData(oldp+222,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),256);
            tracep->chgCData(oldp+230,(vlSelf->top__DOT__axi_ls_u__DOT__wrMask_reg),8);
            tracep->chgCData(oldp+231,((0x38U & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg) 
                                                 << 3U))),6);
            tracep->chgQData(oldp+232,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
            tracep->chgQData(oldp+234,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
            tracep->chgQData(oldp+236,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
            tracep->chgQData(oldp+238,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
            tracep->chgQData(oldp+240,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
            tracep->chgQData(oldp+242,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
            tracep->chgBit(oldp+244,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [2U] | vlSelf->__Vm_traceActivity
                         [3U]))) {
            tracep->chgCData(oldp+245,(((1U & (IData)(
                                                      (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                       >> 0x1dU)))
                                         ? ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                             ? 0U : 3U)
                                         : 0U)),3);
            tracep->chgQData(oldp+246,(((1U & (IData)(
                                                      (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                       >> 0x1dU)))
                                         ? vlSelf->top__DOT__ls_axi_w_data_o
                                         : 0ULL)),64);
            tracep->chgBit(oldp+248,(((1U & (IData)(
                                                    (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                     >> 0x1dU)))
                                       ? (1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrLast))
                                       : 0U)));
            tracep->chgBit(oldp+249,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                       & (IData)(vlSelf->top__DOT__axi_mmio_ar_valid_o)) 
                                      & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
            tracep->chgBit(oldp+250,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                      & (IData)(vlSelf->top__DOT__axi_mmio_w_valid_o))));
        }
        if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity
                          [2U] | vlSelf->__Vm_traceActivity
                          [3U]) | vlSelf->__Vm_traceActivity
                         [5U]))) {
            VL_EXTEND_WQ(256,64, __Vtemp359, vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch);
            if ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
                __Vtemp362[0U] = __Vtemp359[0U];
                __Vtemp362[1U] = __Vtemp359[1U];
                __Vtemp362[2U] = __Vtemp359[2U];
                __Vtemp362[3U] = __Vtemp359[3U];
                __Vtemp362[4U] = __Vtemp359[4U];
                __Vtemp362[5U] = __Vtemp359[5U];
                __Vtemp362[6U] = __Vtemp359[6U];
                __Vtemp362[7U] = __Vtemp359[7U];
            } else {
                __Vtemp362[0U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                   ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U]
                                   : vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U]);
                __Vtemp362[1U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                   ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U]
                                   : vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U]);
                __Vtemp362[2U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                   ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U]
                                   : vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U]);
                __Vtemp362[3U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                   ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U]
                                   : vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U]);
                __Vtemp362[4U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                   ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U]
                                   : vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U]);
                __Vtemp362[5U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                   ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U]
                                   : vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U]);
                __Vtemp362[6U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                   ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U]
                                   : vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U]);
                __Vtemp362[7U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                   ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U]
                                   : vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U]);
            }
            tracep->chgWData(oldp+251,(__Vtemp362),256);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+259,(vlSelf->top__DOT__axi_mmio_ar_valid_o));
            tracep->chgQData(oldp+260,(((1U & (IData)(
                                                      (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                       >> 0x1dU)))
                                         ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr
                                         : 0ULL)),64);
            tracep->chgCData(oldp+262,(((1U & (IData)(
                                                      (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                       >> 0x1dU)))
                                         ? 3U : 0U)),3);
            tracep->chgCData(oldp+263,(((1U & (IData)(
                                                      (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                       >> 0x1dU)))
                                         ? 1U : 0U)),2);
            tracep->chgCData(oldp+264,(((1U & (IData)(
                                                      (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                       >> 0x1dU)))
                                         ? 2U : 0U)),4);
            tracep->chgBit(oldp+265,(((1U & (IData)(
                                                    (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                     >> 0x1dU)))
                                       ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready))
                                       : 0U)));
            tracep->chgBit(oldp+266,(vlSelf->top__DOT__axi_mmio_aw_valid_o));
            tracep->chgBit(oldp+267,(vlSelf->top__DOT__axi_mmio_w_valid_o));
            tracep->chgBit(oldp+268,(vlSelf->top__DOT__axi_mmio_b_ready_o));
            tracep->chgBit(oldp+269,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
            tracep->chgCData(oldp+270,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                         ? 0U : 3U)),3);
            tracep->chgBit(oldp+271,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
            tracep->chgQData(oldp+272,(vlSelf->top__DOT__ls_axi_w_data_o),64);
            tracep->chgBit(oldp+274,(vlSelf->top__DOT__axi_ls_u__DOT__wrLast));
            tracep->chgBit(oldp+275,((2U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
            tracep->chgCData(oldp+276,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                         ? 0U : 3U)),8);
            tracep->chgQData(oldp+277,(vlSelf->top__DOT__pc_new),64);
            tracep->chgBit(oldp+279,(vlSelf->top__DOT__is_jump));
            tracep->chgQData(oldp+280,(((0x200000U 
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
            tracep->chgBit(oldp+282,(vlSelf->top__DOT__if_instr_valid));
            tracep->chgQData(oldp+283,(vlSelf->top__DOT__sram_rdata),64);
            tracep->chgQData(oldp+285,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
            tracep->chgBit(oldp+287,((0ULL != vlSelf->top__DOT__pc_new)));
            tracep->chgIData(oldp+288,(((1U & (IData)(
                                                      (vlSelf->top__DOT__pc_new 
                                                       >> 2U)))
                                         ? (IData)(
                                                   (vlSelf->top__DOT__sram_rdata 
                                                    >> 0x20U))
                                         : (IData)(vlSelf->top__DOT__sram_rdata))),32);
            tracep->chgQData(oldp+289,((((QData)((IData)(
                                                         vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
            tracep->chgIData(oldp+291,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
            tracep->chgQData(oldp+292,(vlSelf->top__DOT__ID_u__DOT__imm),64);
            tracep->chgBit(oldp+294,(vlSelf->top__DOT__src1sel_id));
            tracep->chgCData(oldp+295,(vlSelf->top__DOT__src2sel_id),2);
            tracep->chgCData(oldp+296,(vlSelf->top__DOT__aluctr_id),5);
            tracep->chgBit(oldp+297,(vlSelf->top__DOT__is_brc_id));
            tracep->chgBit(oldp+298,(vlSelf->top__DOT__is_jal_id));
            tracep->chgBit(oldp+299,(vlSelf->top__DOT__is_jalr_id));
            tracep->chgBit(oldp+300,(vlSelf->top__DOT__wben_id));
            tracep->chgCData(oldp+301,(vlSelf->top__DOT__rs1_idx_id),5);
            tracep->chgCData(oldp+302,(vlSelf->top__DOT__rs2_idx_id),5);
            tracep->chgBit(oldp+303,(vlSelf->top__DOT__DivEn_id));
            tracep->chgCData(oldp+304,(vlSelf->top__DOT__DivSel_id),3);
            tracep->chgBit(oldp+305,(vlSelf->top__DOT__in_trap_id));
            tracep->chgBit(oldp+306,(vlSelf->top__DOT__out_trap_id));
            tracep->chgBit(oldp+307,(vlSelf->top__DOT__trap_id));
            tracep->chgBit(oldp+308,(vlSelf->top__DOT__ld_use_hazard));
            tracep->chgBit(oldp+309,(vlSelf->top__DOT__id_flush));
            tracep->chgQData(oldp+310,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                              >> 0x1bU)))),64);
            tracep->chgIData(oldp+312,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                         << 5U) | (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1bU))),32);
            tracep->chgQData(oldp+313,(vlSelf->top__DOT__alures_ex),64);
            tracep->chgBit(oldp+315,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+316,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x10U))),2);
            tracep->chgQData(oldp+317,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                              >> 0x1bU)))),64);
            tracep->chgQData(oldp+319,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                              >> 0x1bU)))),64);
            tracep->chgQData(oldp+321,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU)))),64);
            tracep->chgQData(oldp+323,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
            tracep->chgCData(oldp+325,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0x16U))),5);
            tracep->chgBit(oldp+326,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+327,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+328,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+329,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+330,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 4U))));
            tracep->chgCData(oldp+331,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 1U))),3);
            tracep->chgBit(oldp+332,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
            tracep->chgCData(oldp+333,(vlSelf->top__DOT__rs1_sel),2);
            tracep->chgCData(oldp+334,(vlSelf->top__DOT__rs2_sel),2);
            tracep->chgCData(oldp+335,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0xaU))),5);
            tracep->chgCData(oldp+336,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 5U))),5);
            tracep->chgBit(oldp+337,(vlSelf->top__DOT__ex_flush));
            tracep->chgBit(oldp+338,((3U == (0x7fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 5U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1bU))))));
            tracep->chgBit(oldp+339,((8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 3U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1dU))))));
            tracep->chgQData(oldp+340,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                              >> 1U)))),64);
            tracep->chgQData(oldp+342,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                              >> 1U)))),64);
            tracep->chgQData(oldp+344,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                              >> 1U)))),64);
            tracep->chgIData(oldp+346,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                         << 0x1fU) 
                                        | (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                           >> 1U))),32);
            tracep->chgQData(oldp+347,(vlSelf->top__DOT__wb_data),64);
            tracep->chgCData(oldp+349,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U))),5);
            tracep->chgBit(oldp+350,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
            tracep->chgQData(oldp+351,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
            tracep->chgBit(oldp+353,(vlSelf->top__DOT__rw_valid_i));
            tracep->chgBit(oldp+354,(vlSelf->top__DOT__DcacheRdValid));
            tracep->chgBit(oldp+355,(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
            tracep->chgQData(oldp+356,(vlSelf->top__DOT__DcacheRdAddr),64);
            tracep->chgBit(oldp+358,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
            tracep->chgCData(oldp+359,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                         ? (0xffU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask))
                                         : 0xffU)),8);
            tracep->chgQData(oldp+360,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
            tracep->chgBit(oldp+362,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
            tracep->chgIData(oldp+363,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
            tracep->chgCData(oldp+364,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
            __Vtemp363[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
            __Vtemp363[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
            __Vtemp363[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
            __Vtemp363[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
            tracep->chgWData(oldp+365,(__Vtemp363),128);
            __Vtemp364[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
            __Vtemp364[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
            __Vtemp364[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
            __Vtemp364[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
            tracep->chgWData(oldp+369,(__Vtemp364),128);
            tracep->chgBit(oldp+373,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
            tracep->chgBit(oldp+374,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
            tracep->chgBit(oldp+375,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgBit(oldp+376,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgBit(oldp+377,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgBit(oldp+378,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgCData(oldp+379,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
            tracep->chgWData(oldp+380,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
            tracep->chgBit(oldp+388,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgBit(oldp+389,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
            tracep->chgBit(oldp+390,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
            tracep->chgBit(oldp+391,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
            tracep->chgBit(oldp+392,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
            tracep->chgBit(oldp+393,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
            tracep->chgBit(oldp+394,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
            tracep->chgQData(oldp+395,(((IData)(vlSelf->top__DOT__id_flush)
                                         ? 0ULL : vlSelf->top__DOT__pc_new)),64);
            tracep->chgIData(oldp+397,(((IData)(vlSelf->top__DOT__id_flush)
                                         ? 0U : ((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                                  ? (IData)(
                                                            (vlSelf->top__DOT__sram_rdata 
                                                             >> 0x20U))
                                                  : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
            __Vtemp365[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                               ? 0U : ((1U & (IData)(
                                                     (vlSelf->top__DOT__pc_new 
                                                      >> 2U)))
                                        ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                   >> 0x20U))
                                        : (IData)(vlSelf->top__DOT__sram_rdata)));
            __Vtemp365[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                       ? 0ULL : vlSelf->top__DOT__pc_new));
            __Vtemp365[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                        ? 0ULL : vlSelf->top__DOT__pc_new) 
                                      >> 0x20U));
            tracep->chgWData(oldp+398,(__Vtemp365),96);
            tracep->chgWData(oldp+401,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
            tracep->chgCData(oldp+404,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
            tracep->chgCData(oldp+405,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                 >> 2U))),5);
            tracep->chgCData(oldp+406,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+407,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 0x19U)),7);
            tracep->chgIData(oldp+408,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 7U)),25);
            tracep->chgQData(oldp+409,(((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
            tracep->chgIData(oldp+411,(((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
            tracep->chgBit(oldp+412,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__is_jalr_id))));
            tracep->chgBit(oldp+413,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__is_jal_id))));
            tracep->chgBit(oldp+414,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__is_brc_id))));
            tracep->chgBit(oldp+415,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__wben_id))));
            tracep->chgBit(oldp+416,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__trap_id))));
            tracep->chgWData(oldp+417,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
            tracep->chgQData(oldp+427,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
            tracep->chgQData(oldp+429,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
            tracep->chgQData(oldp+431,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
            VL_EXTEND_WQ(65,64, __Vtemp367, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp368, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp369, __Vtemp367, __Vtemp368);
            VL_EXTEND_WI(65,1, __Vtemp370, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp371, __Vtemp369, __Vtemp370);
            tracep->chgBit(oldp+433,((1U & ((0x2000000U 
                                             & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                             ? ((1U 
                                                 & __Vtemp371[2U]) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                             : ((IData)(
                                                        (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                         >> 0x3fU)) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
            tracep->chgBit(oldp+434,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
            tracep->chgQData(oldp+435,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
            tracep->chgBit(oldp+437,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            tracep->chgQData(oldp+438,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
            tracep->chgQData(oldp+440,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
            tracep->chgBit(oldp+442,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+443,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+444,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),3);
            tracep->chgQData(oldp+445,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
            VL_EXTEND_WQ(65,64, __Vtemp374, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp375, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp376, __Vtemp374, __Vtemp375);
            VL_EXTEND_WI(65,1, __Vtemp377, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp378, __Vtemp376, __Vtemp377);
            tracep->chgBit(oldp+447,((1U & __Vtemp378[2U])));
            tracep->chgBit(oldp+448,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
            tracep->chgQData(oldp+449,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+451,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+453,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+455,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
            tracep->chgCData(oldp+457,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                >> 0x16U))),4);
            tracep->chgBit(oldp+458,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+459,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
            tracep->chgQData(oldp+460,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
            tracep->chgQData(oldp+462,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
            tracep->chgQData(oldp+464,((0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
            tracep->chgQData(oldp+466,((~ (0xffffffffffffffffULL 
                                           >> (0x3fU 
                                               & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
            tracep->chgQData(oldp+468,(((0x4000000U 
                                         & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                         ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                            & (QData)((IData)(
                                                              ((0xffffffffffffffffULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                               >> 0x20U))))
                                         : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
            tracep->chgQData(oldp+470,(((0x4000000U 
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
            tracep->chgQData(oldp+472,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
            tracep->chgCData(oldp+474,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                              >> 7U))),3);
            tracep->chgQData(oldp+475,(((((QData)((IData)(
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
            tracep->chgQData(oldp+477,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                        + (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                            << 0x25U) 
                                           | (((QData)((IData)(
                                                               vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                 >> 0x1bU))))),64);
            tracep->chgBit(oldp+479,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
            tracep->chgBit(oldp+480,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
            tracep->chgBit(oldp+481,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
            tracep->chgQData(oldp+482,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
            tracep->chgQData(oldp+484,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
            tracep->chgBit(oldp+486,((1U & ((0x200U 
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
            tracep->chgBit(oldp+487,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                       & ((0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 8U)) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0xaU)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+488,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                       & ((0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 8U)) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 5U)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
            __Vtemp383[0U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                               << 2U) | ((2U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                >> 0xeU)) 
                                         | (1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
            __Vtemp383[1U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                               >> 0x1eU) | ((IData)(
                                                    (vlSelf->top__DOT__alures_ex 
                                                     >> 0x20U)) 
                                            << 2U));
            __Vtemp383[2U] = (((IData)((vlSelf->top__DOT__alures_ex 
                                        >> 0x20U)) 
                               >> 0x1eU) | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                                            << 2U));
            __Vtemp383[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                               >> 0x1eU) | ((IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                     >> 0x20U)) 
                                            << 2U));
            __Vtemp383[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                        >> 0x20U)) 
                               >> 0x1eU) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 7U) 
                                            | (0x7cU 
                                               & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                  >> 0x19U))));
            __Vtemp383[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                    << 7U) 
                                                   | (0x7cU 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                         >> 0x19U))));
            __Vtemp383[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                    << 7U) 
                                                   | (0x7cU 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                         >> 0x19U))));
            __Vtemp383[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                    >> 0x19U));
            tracep->chgWData(oldp+489,(__Vtemp383),226);
            tracep->chgBit(oldp+497,((8U == (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 3U)))));
            tracep->chgIData(oldp+498,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
            tracep->chgBit(oldp+499,(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i));
            tracep->chgBit(oldp+500,(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i));
            tracep->chgBit(oldp+501,(((3U != (0x7fU 
                                              & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                  << 5U) 
                                                 | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                    >> 0x1bU)))) 
                                      | (8U == (0x1fU 
                                                & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 3U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1dU)))))));
            tracep->chgIData(oldp+502,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
            tracep->chgCData(oldp+503,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
            tracep->chgBit(oldp+504,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
            tracep->chgBit(oldp+505,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
            tracep->chgBit(oldp+506,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
            VL_EXTEND_WQ(128,64, __Vtemp386, vlSelf->top__DOT__Dcache_u__DOT__storeData);
            if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
                __Vtemp393[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U];
                __Vtemp393[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U];
                __Vtemp393[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U];
                __Vtemp393[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U];
            } else {
                __Vtemp393[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp386[0U])
                                   : 0U);
                __Vtemp393[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp386[1U])
                                   : 0U);
                __Vtemp393[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                       : __Vtemp386[2U])
                                   : 0U);
                __Vtemp393[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                                  >> 0x20U))
                                       : __Vtemp386[3U])
                                   : 0U);
            }
            tracep->chgWData(oldp+507,(__Vtemp393),128);
            VL_EXTEND_WQ(128,64, __Vtemp396, vlSelf->top__DOT__Dcache_u__DOT__storeData);
            if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
                __Vtemp403[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U];
                __Vtemp403[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U];
                __Vtemp403[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U];
                __Vtemp403[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U];
            } else {
                __Vtemp403[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp396[0U])
                                   : 0U);
                __Vtemp403[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp396[1U])
                                   : 0U);
                __Vtemp403[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                       : __Vtemp396[2U])
                                   : 0U);
                __Vtemp403[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                                  >> 0x20U))
                                       : __Vtemp396[3U])
                                   : 0U);
            }
            tracep->chgWData(oldp+511,(__Vtemp403),128);
            tracep->chgBit(oldp+515,(vlSelf->top__DOT__Dcache_u__DOT__uncached));
            tracep->chgBit(oldp+516,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgQData(oldp+517,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
            tracep->chgCData(oldp+519,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
            tracep->chgCData(oldp+520,((0x3fU & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 5U)))),6);
            tracep->chgIData(oldp+521,((0x1fffffU & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 0xbU)))),21);
            tracep->chgBit(oldp+522,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgBit(oldp+523,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgBit(oldp+524,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgQData(oldp+525,((((QData)((IData)(
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
            tracep->chgCData(oldp+527,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
            tracep->chgWData(oldp+528,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
            tracep->chgBit(oldp+536,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgQData(oldp+537,(vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch),64);
            tracep->chgQData(oldp+539,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1),64);
            tracep->chgQData(oldp+541,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2),64);
            tracep->chgBit(oldp+543,(vlSelf->top__DOT__Dcache_u__DOT__wrLow));
            tracep->chgBit(oldp+544,(vlSelf->top__DOT__Dcache_u__DOT__wrHigh));
            tracep->chgQData(oldp+545,(vlSelf->top__DOT__Dcache_u__DOT__storeData),64);
            tracep->chgCData(oldp+547,(vlSelf->top__DOT__Dcache_u__DOT__storeMask),8);
            tracep->chgQData(oldp+548,(vlSelf->top__DOT__Dcache_u__DOT__sramMask),64);
            VL_EXTEND_WQ(128,64, __Vtemp406, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
            if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
                __Vtemp415[0U] = 0xffffffffU;
                __Vtemp415[1U] = 0xffffffffU;
                __Vtemp415[2U] = 0xffffffffU;
                __Vtemp415[3U] = 0xffffffffU;
            } else {
                __Vtemp415[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? 0U : __Vtemp406[0U])
                                       : 0U) : 0U);
                __Vtemp415[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? 0U : __Vtemp406[1U])
                                       : 0U) : 0U);
                __Vtemp415[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                           : __Vtemp406[2U])
                                       : 0U) : 0U);
                __Vtemp415[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                      >> 0x20U))
                                           : __Vtemp406[3U])
                                       : 0U) : 0U);
            }
            tracep->chgWData(oldp+550,(__Vtemp415),128);
            VL_EXTEND_WQ(128,64, __Vtemp418, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
            if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
                __Vtemp427[0U] = 0xffffffffU;
                __Vtemp427[1U] = 0xffffffffU;
                __Vtemp427[2U] = 0xffffffffU;
                __Vtemp427[3U] = 0xffffffffU;
            } else {
                __Vtemp427[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? 0U : __Vtemp418[0U])
                                       : 0U) : 0U);
                __Vtemp427[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? 0U : __Vtemp418[1U])
                                       : 0U) : 0U);
                __Vtemp427[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                           : __Vtemp418[2U])
                                       : 0U) : 0U);
                __Vtemp427[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                      >> 0x20U))
                                           : __Vtemp418[3U])
                                       : 0U) : 0U);
            }
            tracep->chgWData(oldp+554,(__Vtemp427),128);
            tracep->chgBit(oldp+558,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U))) 
                                      & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
            tracep->chgBit(oldp+559,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & (~ (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 0x20U)))) 
                                      & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
            tracep->chgBit(oldp+560,((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgBit(oldp+561,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U))) 
                                      & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk)))));
            tracep->chgBit(oldp+562,(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk));
            tracep->chgIData(oldp+563,((IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)),32);
            VL_EXTEND_WQ(128,64, __Vtemp430, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
            __Vtemp440[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                     __Vtemp430[0U])
                                                     : 0U)
                                                    : 0U)));
            __Vtemp440[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                     __Vtemp430[1U])
                                                     : 0U)
                                                    : 0U)));
            __Vtemp440[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                     __Vtemp430[2U])
                                                     : 0U)
                                                    : 0U)));
            __Vtemp440[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                     __Vtemp430[3U])
                                                     : 0U)
                                                    : 0U)));
            tracep->chgWData(oldp+564,(__Vtemp440),128);
            VL_EXTEND_WQ(128,64, __Vtemp443, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
            __Vtemp453[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                     __Vtemp443[0U])
                                                     : 0U)
                                                    : 0U)));
            __Vtemp453[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                     __Vtemp443[1U])
                                                     : 0U)
                                                    : 0U)));
            __Vtemp453[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                     __Vtemp443[2U])
                                                     : 0U)
                                                    : 0U)));
            __Vtemp453[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
                                                     __Vtemp443[3U])
                                                     : 0U)
                                                    : 0U)));
            tracep->chgWData(oldp+568,(__Vtemp453),128);
            tracep->chgCData(oldp+572,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
            tracep->chgWData(oldp+573,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [3U] | vlSelf->__Vm_traceActivity
                         [5U]))) {
            tracep->chgQData(oldp+583,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs2_idx_id])),64);
            tracep->chgQData(oldp+585,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs1_idx_id])),64);
            __Vtemp458[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
            __Vtemp458[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                               >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                                  >> 0x20U)) 
                                         << 0x1bU));
            __Vtemp458[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                        >> 0x20U)) 
                               >> 5U) | ((IData)(((0U 
                                                   == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                                  [vlSelf->top__DOT__rs1_idx_id])) 
                                         << 0x1bU));
            __Vtemp458[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
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
            __Vtemp458[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
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
            __Vtemp458[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
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
            __Vtemp458[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                          ? 0ULL : 
                                         vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                         [vlSelf->top__DOT__rs2_idx_id]) 
                                        >> 0x20U)) 
                               >> 5U) | (((IData)(vlSelf->top__DOT__ex_flush)
                                           ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                                         << 0x1bU));
            __Vtemp458[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
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
            __Vtemp458[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
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
            __Vtemp458[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                       >> 0x20U)) >> 5U);
            tracep->chgWData(oldp+587,(__Vtemp458),315);
            tracep->chgBit(oldp+597,(((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
                                                                            >> 5U)))))))))))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+598,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
            tracep->chgQData(oldp+599,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                         ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
            tracep->chgBit(oldp+601,(vlSelf->top__DOT__if_axi_r_last_i));
            tracep->chgCData(oldp+602,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
            tracep->chgBit(oldp+603,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready));
            tracep->chgBit(oldp+604,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                       : 0U)));
            tracep->chgQData(oldp+605,(vlSelf->top__DOT__ls_axi_r_data_i),64);
            tracep->chgBit(oldp+607,(vlSelf->top__DOT__ls_axi_r_last_i));
            tracep->chgBit(oldp+608,(vlSelf->top__DOT__if_stall_n));
            tracep->chgBit(oldp+609,(vlSelf->top__DOT__ls_addr_ok_i));
            tracep->chgBit(oldp+610,((1U & (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))));
            tracep->chgBit(oldp+611,(vlSelf->top__DOT__ls_stall_n));
            tracep->chgBit(oldp+612,(vlSelf->top__DOT__ls_not_ok));
            tracep->chgQData(oldp+613,(vlSelf->top__DOT__ls_sram_rd_data),64);
            tracep->chgBit(oldp+615,(vlSelf->top__DOT__dataValid_o));
            tracep->chgBit(oldp+616,(vlSelf->top__DOT__lsAxiRdDataVAlid));
            tracep->chgBit(oldp+617,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
            tracep->chgBit(oldp+618,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
            tracep->chgQData(oldp+619,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
            tracep->chgBit(oldp+621,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
            tracep->chgCData(oldp+622,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
            tracep->chgCData(oldp+623,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
            tracep->chgCData(oldp+624,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
            tracep->chgCData(oldp+625,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
            tracep->chgCData(oldp+626,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
            tracep->chgSData(oldp+627,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
            tracep->chgIData(oldp+628,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
            tracep->chgBit(oldp+629,(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk));
            tracep->chgCData(oldp+630,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
            tracep->chgCData(oldp+631,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
            tracep->chgCData(oldp+632,(vlSelf->top__DOT__axi_ls_u__DOT__w_state_next),2);
            tracep->chgCData(oldp+633,(vlSelf->top__DOT__axi_ls_u__DOT__r_state_next),2);
            tracep->chgWData(oldp+634,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
            tracep->chgQData(oldp+644,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
            tracep->chgQData(oldp+646,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
            tracep->chgQData(oldp+648,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
            tracep->chgQData(oldp+650,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
            tracep->chgQData(oldp+652,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
            tracep->chgQData(oldp+654,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
            tracep->chgQData(oldp+656,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
            tracep->chgQData(oldp+658,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
            tracep->chgQData(oldp+660,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
            tracep->chgQData(oldp+662,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
            tracep->chgQData(oldp+664,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
            tracep->chgQData(oldp+666,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
            tracep->chgQData(oldp+668,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
            tracep->chgQData(oldp+670,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
            tracep->chgQData(oldp+672,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
            tracep->chgQData(oldp+674,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
            tracep->chgQData(oldp+676,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
            tracep->chgQData(oldp+678,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
            tracep->chgQData(oldp+680,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
            tracep->chgQData(oldp+682,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
            tracep->chgQData(oldp+684,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
            tracep->chgQData(oldp+686,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
            tracep->chgQData(oldp+688,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
            tracep->chgQData(oldp+690,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
            tracep->chgQData(oldp+692,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
            tracep->chgQData(oldp+694,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
            tracep->chgQData(oldp+696,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
            tracep->chgQData(oldp+698,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
            tracep->chgQData(oldp+700,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
            tracep->chgQData(oldp+702,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
            tracep->chgQData(oldp+704,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
            tracep->chgQData(oldp+706,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
            tracep->chgBit(oldp+708,(vlSelf->top__DOT__Dcache_u__DOT__randomBit));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
            tracep->chgQData(oldp+709,(vlSelf->top__DOT__DcacheWrAddr),64);
            tracep->chgBit(oldp+711,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
            tracep->chgBit(oldp+712,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
            tracep->chgBit(oldp+713,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
            tracep->chgBit(oldp+714,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
        }
        tracep->chgBit(oldp+715,(vlSelf->clk));
        tracep->chgBit(oldp+716,(vlSelf->rst_n));
        tracep->chgQData(oldp+717,(vlSelf->pc_diff),64);
        tracep->chgQData(oldp+719,(vlSelf->pc_decoding),64);
        tracep->chgIData(oldp+721,(vlSelf->instr_diff),32);
        tracep->chgQData(oldp+722,(vlSelf->regA0),64);
        tracep->chgBit(oldp+724,(vlSelf->stall_n_diff));
        tracep->chgBit(oldp+725,(vlSelf->axi_ar_ready_i));
        tracep->chgBit(oldp+726,(vlSelf->axi_ar_valid_o));
        tracep->chgQData(oldp+727,(vlSelf->axi_ar_addr_o),64);
        tracep->chgCData(oldp+729,(vlSelf->axi_ar_prot_o),3);
        tracep->chgCData(oldp+730,(vlSelf->axi_ar_id_o),4);
        tracep->chgBit(oldp+731,(vlSelf->axi_ar_user_o));
        tracep->chgCData(oldp+732,(vlSelf->axi_ar_len_o),8);
        tracep->chgCData(oldp+733,(vlSelf->axi_ar_size_o),3);
        tracep->chgCData(oldp+734,(vlSelf->axi_ar_burst_o),2);
        tracep->chgBit(oldp+735,(vlSelf->axi_ar_lock_o));
        tracep->chgCData(oldp+736,(vlSelf->axi_ar_cache_o),4);
        tracep->chgCData(oldp+737,(vlSelf->axi_ar_qos_o),4);
        tracep->chgCData(oldp+738,(vlSelf->axi_ar_region_o),4);
        tracep->chgBit(oldp+739,(vlSelf->axi_r_ready_o));
        tracep->chgBit(oldp+740,(vlSelf->axi_r_valid_i));
        tracep->chgCData(oldp+741,(vlSelf->axi_r_resp_i),2);
        tracep->chgQData(oldp+742,(vlSelf->axi_r_data_i),64);
        tracep->chgBit(oldp+744,(vlSelf->axi_r_last_i));
        tracep->chgCData(oldp+745,(vlSelf->axi_r_id_i),4);
        tracep->chgBit(oldp+746,(vlSelf->axi_r_user_i));
        tracep->chgBit(oldp+747,(vlSelf->axi_aw_ready_i));
        tracep->chgBit(oldp+748,(vlSelf->axi_aw_valid_o));
        tracep->chgQData(oldp+749,(vlSelf->axi_aw_addr_o),64);
        tracep->chgCData(oldp+751,(vlSelf->axi_aw_prot_o),3);
        tracep->chgCData(oldp+752,(vlSelf->axi_aw_id_o),4);
        tracep->chgBit(oldp+753,(vlSelf->axi_aw_user_o));
        tracep->chgCData(oldp+754,(vlSelf->axi_aw_len_o),8);
        tracep->chgCData(oldp+755,(vlSelf->axi_aw_size_o),3);
        tracep->chgCData(oldp+756,(vlSelf->axi_aw_burst_o),2);
        tracep->chgBit(oldp+757,(vlSelf->axi_aw_lock_o));
        tracep->chgCData(oldp+758,(vlSelf->axi_aw_cache_o),4);
        tracep->chgCData(oldp+759,(vlSelf->axi_aw_qos_o),4);
        tracep->chgCData(oldp+760,(vlSelf->axi_aw_region_o),4);
        tracep->chgBit(oldp+761,(vlSelf->axi_w_ready_i));
        tracep->chgBit(oldp+762,(vlSelf->axi_w_valid_o));
        tracep->chgQData(oldp+763,(vlSelf->axi_w_data_o),64);
        tracep->chgCData(oldp+765,(vlSelf->axi_w_strb_o),8);
        tracep->chgBit(oldp+766,(vlSelf->axi_w_last_o));
        tracep->chgBit(oldp+767,(vlSelf->axi_w_user_o));
        tracep->chgBit(oldp+768,(vlSelf->axi_b_ready_o));
        tracep->chgBit(oldp+769,(vlSelf->axi_b_valid_i));
        tracep->chgCData(oldp+770,(vlSelf->axi_b_resp_i),2);
        tracep->chgCData(oldp+771,(vlSelf->axi_b_id_i),4);
        tracep->chgBit(oldp+772,(vlSelf->axi_b_user_i));
        tracep->chgCData(oldp+773,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                   >> 0x1dU)))
                                     ? (0xffU & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__lenthReg))
                                     : 0U)),8);
        tracep->chgBit(oldp+774,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                    ? 0U : 1U) ? 0U
                                   : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->chgCData(oldp+775,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                     ? 0U : (3U & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                               >> 0x1dU)))
                                                    ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                                    : (IData)(vlSelf->axi_r_resp_i))))),2);
        tracep->chgBit(oldp+776,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                 >> 0x1dU)))
                                   ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)
                                   : (IData)(vlSelf->axi_aw_ready_i))));
        tracep->chgBit(oldp+777,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                 >> 0x1dU)))
                                   ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid)
                                   : (IData)(vlSelf->axi_b_valid_i))));
        tracep->chgCData(oldp+778,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                   >> 0x1dU)))
                                     ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp)
                                     : (IData)(vlSelf->axi_b_resp_i))),2);
        tracep->chgCData(oldp+779,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                   >> 0x1dU)))
                                     ? 1U : (IData)(vlSelf->axi_b_id_i))),4);
        tracep->chgBit(oldp+780,(((1U & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                 >> 0x1dU)))
                                   ? (IData)(vlSelf->top__DOT__axi_mmio_b_user_i)
                                   : (IData)(vlSelf->axi_b_user_i))));
        tracep->chgBit(oldp+781,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                    ? 0U : 1U) ? (1U 
                                                  & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                   : 0U)));
        tracep->chgCData(oldp+782,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                     ? (3U & ((1U & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x1dU)))
                                               ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                               : (IData)(vlSelf->axi_r_resp_i)))
                                     : 0U)),2);
        tracep->chgBit(oldp+783,((1U & (~ ((((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                             | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok)) 
                                           | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))))));
        tracep->chgBit(oldp+784,((1U & (~ (((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                            | (IData)(vlSelf->top__DOT__ls_not_ok)) 
                                           | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))))));
        tracep->chgQData(oldp+785,(((((((((- (QData)((IData)(
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
        tracep->chgBit(oldp+787,((((((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->chgCData(oldp+788,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                   >> 0x1dU)))
                                     ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                     : (IData)(vlSelf->axi_r_resp_i))),2);
        tracep->chgBit(oldp+789,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                 >> 0x1dU)))
                                   ? (IData)(vlSelf->top__DOT__axi_mmio_r_user_i)
                                   : (IData)(vlSelf->axi_r_user_i))));
        tracep->chgBit(oldp+790,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                  & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->chgBit(oldp+791,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                  & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->chgIData(oldp+792,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                     ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                         ? (0x1fffffU 
                                            & (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 0xbU)))
                                         : 0U) : 0U)),21);
        tracep->chgIData(oldp+793,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                     ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                         ? 0U : (0x1fffffU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 0xbU))))
                                     : 0U)),21);
        tracep->chgQData(oldp+794,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->chgQData(oldp+796,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
        tracep->chgIData(oldp+798,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
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
        tracep->chgCData(oldp+799,(((4U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                     ? ((2U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                         ? ((1U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                             ? 1U : 
                                            (((IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk) 
                                              & (IData)(vlSelf->top__DOT__ls_stall_n))
                                              ? 1U : 6U))
                                         : 0U) : ((2U 
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
        tracep->chgBit(oldp+800,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                  & ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                     | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 5U)))))))));
        tracep->chgBit(oldp+801,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                  & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                     | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 5U)))))))));
        tracep->chgIData(oldp+802,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))
                                     ? (0x1fffffU & 
                                        ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                          ? vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                         [(0x3fU & (IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 5U)))]
                                          : (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 0xbU))))
                                     : 0U)),21);
        tracep->chgIData(oldp+803,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))
                                     ? (0x1fffffU & 
                                        ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                          ? (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 0xbU))
                                          : vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                         [(0x3fU & (IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 5U)))]))
                                     : 0U)),21);
        tracep->chgQData(oldp+804,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->chgQData(oldp+806,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
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
        tracep->chgBit(oldp+808,((1U & (~ ((((((((0U 
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
                                           | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))))));
        tracep->chgBit(oldp+809,(((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                        | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                           & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                       & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                      | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                     | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                  | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))));
        tracep->chgBit(oldp+810,((1U & (~ ((((((((0U 
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
                                           | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))))));
        tracep->chgBit(oldp+811,(((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                        | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                           & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                       & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                      | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                     | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                  | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))));
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
        vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    }
}
