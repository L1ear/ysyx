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
    VlWide<8>/*255:0*/ __Vtemp298;
    VlWide<4>/*127:0*/ __Vtemp299;
    VlWide<4>/*127:0*/ __Vtemp300;
    VlWide<3>/*95:0*/ __Vtemp301;
    VlWide<3>/*95:0*/ __Vtemp303;
    VlWide<3>/*95:0*/ __Vtemp304;
    VlWide<3>/*95:0*/ __Vtemp305;
    VlWide<3>/*95:0*/ __Vtemp306;
    VlWide<3>/*95:0*/ __Vtemp307;
    VlWide<3>/*95:0*/ __Vtemp310;
    VlWide<3>/*95:0*/ __Vtemp311;
    VlWide<3>/*95:0*/ __Vtemp312;
    VlWide<3>/*95:0*/ __Vtemp313;
    VlWide<3>/*95:0*/ __Vtemp314;
    VlWide<8>/*255:0*/ __Vtemp319;
    VlWide<4>/*127:0*/ __Vtemp321;
    VlWide<4>/*127:0*/ __Vtemp326;
    VlWide<4>/*127:0*/ __Vtemp328;
    VlWide<4>/*127:0*/ __Vtemp333;
    VlWide<4>/*127:0*/ __Vtemp335;
    VlWide<4>/*127:0*/ __Vtemp342;
    VlWide<4>/*127:0*/ __Vtemp344;
    VlWide<4>/*127:0*/ __Vtemp351;
    VlWide<4>/*127:0*/ __Vtemp353;
    VlWide<4>/*127:0*/ __Vtemp361;
    VlWide<4>/*127:0*/ __Vtemp363;
    VlWide<4>/*127:0*/ __Vtemp371;
    VlWide<10>/*319:0*/ __Vtemp376;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
            tracep->chgIData(oldp+1,(vlSelf->top__DOT__Dcache_u__DOT__randomBit),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+2,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready));
            tracep->chgBit(oldp+3,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready));
            tracep->chgBit(oldp+4,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid));
            tracep->chgCData(oldp+5,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp),2);
            tracep->chgBit(oldp+6,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready));
            tracep->chgBit(oldp+7,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid));
            tracep->chgCData(oldp+8,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp),2);
            tracep->chgQData(oldp+9,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata),64);
            tracep->chgWData(oldp+11,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
            tracep->chgWData(oldp+15,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
            tracep->chgWData(oldp+19,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
            tracep->chgWData(oldp+23,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
            tracep->chgWData(oldp+27,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
            tracep->chgWData(oldp+35,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
            tracep->chgWData(oldp+43,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1),128);
            tracep->chgWData(oldp+47,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2),128);
            tracep->chgWData(oldp+51,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1),128);
            tracep->chgWData(oldp+55,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2),128);
            tracep->chgWData(oldp+59,(vlSelf->top__DOT__Dcache_u__DOT__way1Data),256);
            tracep->chgWData(oldp+67,(vlSelf->top__DOT__Dcache_u__DOT__way2Data),256);
            tracep->chgBit(oldp+75,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
            tracep->chgQData(oldp+76,(vlSelf->top__DOT__axi_ls_u__DOT__addr_reg),64);
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),64);
            tracep->chgBit(oldp+80,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid_reg));
            tracep->chgQData(oldp+81,(vlSelf->top__DOT__axi_ls_u__DOT__rd_data_reg),64);
            tracep->chgQData(oldp+83,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
            tracep->chgQData(oldp+85,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
            tracep->chgQData(oldp+87,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
            tracep->chgBit(oldp+95,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+96,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state) 
                                      >> 1U) & ((~ (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state)) 
                                                & (((((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                      << 0x3eU) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                         << 0x1eU) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                           >> 2U))) 
                                                    == vlSelf->top__DOT__axi_ls_u__DOT__addr_reg) 
                                                   & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid_reg))))));
            tracep->chgBit(oldp+97,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state) 
                                      >> 1U) & ((~ (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
                                                & ((~ 
                                                    (((((QData)((IData)(
                                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                        << 0x3eU) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                           << 0x1eU) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                             >> 2U))) 
                                                      != vlSelf->top__DOT__axi_ls_u__DOT__addr_reg) 
                                                     | (vlSelf->top__DOT__ls_u__DOT__wr_data 
                                                        != vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg))) 
                                                   & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok))))));
            tracep->chgQData(oldp+98,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                         & (0ULL != vlSelf->top__DOT__pc_new)) 
                                        | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
                                            : ((1U 
                                                & (IData)(
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
            tracep->chgQData(oldp+100,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                          & (0ULL != vlSelf->top__DOT__pc_new)) 
                                         | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
                                         : 0ULL)),64);
            if (vlSelf->top__DOT__Dcache_u__DOT__replaceWay) {
                __Vtemp298[0U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U];
                __Vtemp298[1U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U];
                __Vtemp298[2U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U];
                __Vtemp298[3U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U];
                __Vtemp298[4U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U];
                __Vtemp298[5U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U];
                __Vtemp298[6U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U];
                __Vtemp298[7U] = vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U];
            } else {
                __Vtemp298[0U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U];
                __Vtemp298[1U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U];
                __Vtemp298[2U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U];
                __Vtemp298[3U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U];
                __Vtemp298[4U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U];
                __Vtemp298[5U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U];
                __Vtemp298[6U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U];
                __Vtemp298[7U] = vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U];
            }
            tracep->chgWData(oldp+102,(__Vtemp298),256);
            tracep->chgQData(oldp+110,(((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                          & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__valid_i)) 
                                         | (((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                             & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__valid_i)) 
                                            & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 4U)))
                                             ? ((1U 
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
                                             : ((1U 
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
                                         : 0ULL)),64);
            tracep->chgQData(oldp+112,(((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                          & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__valid_i)) 
                                         | (((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                             & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__valid_i)) 
                                            & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 4U)))
                                             ? ((1U 
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
                                             : ((1U 
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
                                         : 0ULL)),64);
            tracep->chgCData(oldp+114,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
                                         ? ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
                                             ? ((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready)
                                                 ? 2U
                                                 : 3U)
                                             : ((8U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                     >> 4U)))
                                                 ? 
                                                (((((((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                      << 0x3eU) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                         << 0x1eU) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                           >> 2U))) 
                                                    != vlSelf->top__DOT__axi_ls_u__DOT__addr_reg) 
                                                   | (vlSelf->top__DOT__ls_u__DOT__wr_data 
                                                      != vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg)) 
                                                  & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok))
                                                  ? 1U
                                                  : 2U)
                                                 : 0U))
                                         : ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
                                             ? ((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)
                                                 ? 3U
                                                 : 1U)
                                             : ((8U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0U)))),2);
            tracep->chgCData(oldp+115,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
                                         ? ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
                                             ? ((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)
                                                 ? 2U
                                                 : 3U)
                                             : ((3U 
                                                 == 
                                                 (0x7fU 
                                                  & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                     >> 2U)))
                                                 ? 
                                                (((((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                    << 0x3eU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                       << 0x1eU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                         >> 2U))) 
                                                  != vlSelf->top__DOT__axi_ls_u__DOT__addr_reg)
                                                  ? 1U
                                                  : 2U)
                                                 : 0U))
                                         : ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
                                             ? ((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready)
                                                 ? 3U
                                                 : 1U)
                                             : ((3U 
                                                 == 
                                                 (0x7fU 
                                                  & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0U)))),2);
            tracep->chgBit(oldp+116,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                       & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid)) 
                                      & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
            tracep->chgBit(oldp+117,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                      & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_valid))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+118,((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
            tracep->chgBit(oldp+119,((1U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
            tracep->chgQData(oldp+120,(vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg),64);
            tracep->chgBit(oldp+122,((3U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
            tracep->chgBit(oldp+123,(vlSelf->top__DOT__axi_ls_u__DOT__aw_valid));
            tracep->chgQData(oldp+124,((((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                              >> 2U)))),64);
            tracep->chgCData(oldp+126,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
            tracep->chgBit(oldp+127,(vlSelf->top__DOT__axi_ls_u__DOT__w_valid));
            tracep->chgQData(oldp+128,((vlSelf->top__DOT__ls_u__DOT__wr_data 
                                        << (0x38U & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                             << 1U)))),64);
            tracep->chgCData(oldp+130,((0xffU & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                     >> 2U))))),8);
            tracep->chgBit(oldp+131,(vlSelf->top__DOT__axi_ls_u__DOT__b_ready));
            tracep->chgBit(oldp+132,(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid));
            tracep->chgBit(oldp+133,(vlSelf->top__DOT__axi_ls_u__DOT__r_ready));
            tracep->chgQData(oldp+134,(vlSelf->top__DOT__pc_new),64);
            tracep->chgBit(oldp+136,(vlSelf->top__DOT__is_jump));
            tracep->chgQData(oldp+137,(((0x200000U 
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
            tracep->chgBit(oldp+139,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                                | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                               | (IData)(vlSelf->top__DOT__ls_not_ok))))));
            tracep->chgBit(oldp+140,(vlSelf->top__DOT__if_stall_n));
            tracep->chgBit(oldp+141,(vlSelf->top__DOT__if_instr_valid));
            tracep->chgQData(oldp+142,(vlSelf->top__DOT__sram_rdata),64);
            tracep->chgQData(oldp+144,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
            tracep->chgBit(oldp+146,((0ULL != vlSelf->top__DOT__pc_new)));
            tracep->chgBit(oldp+147,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                         & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
            tracep->chgBit(oldp+148,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                         & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                        | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                       | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                      | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
            tracep->chgIData(oldp+149,(((1U & (IData)(
                                                      (vlSelf->top__DOT__pc_new 
                                                       >> 2U)))
                                         ? (IData)(
                                                   (vlSelf->top__DOT__sram_rdata 
                                                    >> 0x20U))
                                         : (IData)(vlSelf->top__DOT__sram_rdata))),32);
            tracep->chgQData(oldp+150,((((QData)((IData)(
                                                         vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
            tracep->chgIData(oldp+152,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
            tracep->chgQData(oldp+153,(vlSelf->top__DOT__ID_u__DOT__imm),64);
            tracep->chgBit(oldp+155,(vlSelf->top__DOT__src1sel_id));
            tracep->chgCData(oldp+156,(vlSelf->top__DOT__src2sel_id),2);
            tracep->chgCData(oldp+157,(vlSelf->top__DOT__aluctr_id),5);
            tracep->chgBit(oldp+158,(vlSelf->top__DOT__is_brc_id));
            tracep->chgBit(oldp+159,(vlSelf->top__DOT__is_jal_id));
            tracep->chgBit(oldp+160,(vlSelf->top__DOT__is_jalr_id));
            tracep->chgBit(oldp+161,(vlSelf->top__DOT__wben_id));
            tracep->chgCData(oldp+162,(vlSelf->top__DOT__rs1_idx_id),5);
            tracep->chgCData(oldp+163,(vlSelf->top__DOT__rs2_idx_id),5);
            tracep->chgBit(oldp+164,(vlSelf->top__DOT__DivEn_id));
            tracep->chgCData(oldp+165,(vlSelf->top__DOT__DivSel_id),3);
            tracep->chgBit(oldp+166,(vlSelf->top__DOT__in_trap_id));
            tracep->chgBit(oldp+167,(vlSelf->top__DOT__out_trap_id));
            tracep->chgBit(oldp+168,(vlSelf->top__DOT__trap_id));
            tracep->chgBit(oldp+169,(vlSelf->top__DOT__ld_use_hazard));
            tracep->chgBit(oldp+170,(vlSelf->top__DOT__id_flush));
            tracep->chgQData(oldp+171,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                              >> 0x1bU)))),64);
            tracep->chgIData(oldp+173,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                         << 5U) | (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1bU))),32);
            tracep->chgQData(oldp+174,(vlSelf->top__DOT__alures_ex),64);
            tracep->chgBit(oldp+176,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+177,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x10U))),2);
            tracep->chgQData(oldp+178,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                              >> 0x1bU)))),64);
            tracep->chgQData(oldp+180,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                              >> 0x1bU)))),64);
            tracep->chgQData(oldp+182,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU)))),64);
            tracep->chgQData(oldp+184,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
            tracep->chgCData(oldp+186,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0x16U))),5);
            tracep->chgBit(oldp+187,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+188,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+189,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+190,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+191,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 4U))));
            tracep->chgCData(oldp+192,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 1U))),3);
            tracep->chgBit(oldp+193,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
            tracep->chgBit(oldp+194,((1U & (~ ((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                               | (IData)(vlSelf->top__DOT__ls_not_ok))))));
            tracep->chgQData(oldp+195,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
            tracep->chgCData(oldp+197,(vlSelf->top__DOT__rs1_sel),2);
            tracep->chgCData(oldp+198,(vlSelf->top__DOT__rs2_sel),2);
            tracep->chgCData(oldp+199,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0xaU))),5);
            tracep->chgCData(oldp+200,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 5U))),5);
            tracep->chgBit(oldp+201,(vlSelf->top__DOT__ex_flush));
            tracep->chgBit(oldp+202,((3U == (0x7fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 5U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1bU))))));
            tracep->chgBit(oldp+203,((8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 3U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1dU))))));
            tracep->chgBit(oldp+204,(((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      | ((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                         & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
            tracep->chgQData(oldp+205,((((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                              >> 2U)))),64);
            tracep->chgQData(oldp+207,((((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                              >> 2U)))),64);
            tracep->chgIData(oldp+209,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                         << 0x1eU) 
                                        | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 2U))),32);
            tracep->chgQData(oldp+210,(((((((((- (QData)((IData)(
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
            tracep->chgBit(oldp+212,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                            >> 1U))));
            tracep->chgQData(oldp+213,(vlSelf->top__DOT__csrdata_ls),64);
            tracep->chgQData(oldp+215,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
            tracep->chgQData(oldp+217,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
            tracep->chgBit(oldp+219,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
            tracep->chgBit(oldp+220,(vlSelf->top__DOT__ls_not_ok));
            tracep->chgBit(oldp+221,((3U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+222,((8U == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U)))));
            tracep->chgQData(oldp+223,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
            tracep->chgCData(oldp+225,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
            tracep->chgQData(oldp+226,(vlSelf->top__DOT__ls_sram_rd_data),64);
            tracep->chgQData(oldp+228,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                              >> 1U)))),64);
            tracep->chgQData(oldp+230,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                              >> 1U)))),64);
            tracep->chgQData(oldp+232,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                              >> 1U)))),64);
            tracep->chgIData(oldp+234,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                         << 0x1fU) 
                                        | (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                           >> 1U))),32);
            tracep->chgQData(oldp+235,(vlSelf->top__DOT__wb_data),64);
            tracep->chgCData(oldp+237,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U))),5);
            tracep->chgBit(oldp+238,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
            tracep->chgQData(oldp+239,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
            tracep->chgBit(oldp+241,(vlSelf->top__DOT__wb_stall_n));
            tracep->chgBit(oldp+242,(vlSelf->top__DOT__rw_valid_i));
            tracep->chgBit(oldp+243,((0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
            tracep->chgIData(oldp+244,((((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                  >> 0xbU)) 
                                         << 0xbU) | 
                                        (0x7e0U & ((IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 5U)) 
                                                   << 5U)))),32);
            tracep->chgBit(oldp+245,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
            tracep->chgQData(oldp+246,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
            tracep->chgCData(oldp+248,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_prot),3);
            tracep->chgCData(oldp+249,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id),4);
            tracep->chgBit(oldp+250,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_user));
            tracep->chgCData(oldp+251,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_len),8);
            tracep->chgCData(oldp+252,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
            tracep->chgCData(oldp+253,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_burst),2);
            tracep->chgBit(oldp+254,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_lock));
            tracep->chgCData(oldp+255,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_cache),4);
            tracep->chgCData(oldp+256,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_qos),4);
            tracep->chgCData(oldp+257,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_region),4);
            tracep->chgBit(oldp+258,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
            tracep->chgIData(oldp+259,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
            tracep->chgBit(oldp+260,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
            tracep->chgCData(oldp+261,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
            tracep->chgBit(oldp+262,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
            tracep->chgBit(oldp+263,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
            tracep->chgBit(oldp+264,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
            __Vtemp299[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
            __Vtemp299[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
            __Vtemp299[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
            __Vtemp299[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
            tracep->chgWData(oldp+265,(__Vtemp299),128);
            __Vtemp300[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
            __Vtemp300[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
            __Vtemp300[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
            __Vtemp300[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
            tracep->chgWData(oldp+269,(__Vtemp300),128);
            tracep->chgBit(oldp+273,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
            tracep->chgBit(oldp+274,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
            tracep->chgBit(oldp+275,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgQData(oldp+276,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
            tracep->chgCData(oldp+278,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
            tracep->chgCData(oldp+279,((0x3fU & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 5U)))),6);
            tracep->chgIData(oldp+280,((0x1fffffU & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 0xbU)))),21);
            tracep->chgQData(oldp+281,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
            tracep->chgQData(oldp+283,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
            tracep->chgBit(oldp+285,((1U & (IData)(
                                                   (vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                    >> 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                >> 5U))))))));
            tracep->chgBit(oldp+286,((1U & (IData)(
                                                   (vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                    >> 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                >> 5U))))))));
            tracep->chgIData(oldp+287,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                       [(0x3fU & (IData)(
                                                         (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                          >> 5U)))]),21);
            tracep->chgIData(oldp+288,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                       [(0x3fU & (IData)(
                                                         (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                          >> 5U)))]),21);
            tracep->chgBit(oldp+289,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgBit(oldp+290,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgBit(oldp+291,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgQData(oldp+292,((((QData)((IData)(
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
            tracep->chgBit(oldp+294,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
            tracep->chgCData(oldp+295,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
            tracep->chgWData(oldp+296,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
            tracep->chgBit(oldp+304,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgBit(oldp+305,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
            tracep->chgBit(oldp+306,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
            tracep->chgCData(oldp+307,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
            tracep->chgBit(oldp+308,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
            tracep->chgBit(oldp+309,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
            tracep->chgBit(oldp+310,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
            tracep->chgCData(oldp+311,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
            tracep->chgBit(oldp+312,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
            tracep->chgQData(oldp+313,((QData)((IData)(
                                                       (((IData)(
                                                                 (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                  >> 0xbU)) 
                                                         << 0xbU) 
                                                        | (0x7e0U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                       >> 5U)) 
                                                              << 5U)))))),64);
            tracep->chgCData(oldp+315,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state),2);
            tracep->chgQData(oldp+316,(((IData)(vlSelf->top__DOT__id_flush)
                                         ? 0ULL : vlSelf->top__DOT__pc_new)),64);
            tracep->chgIData(oldp+318,(((IData)(vlSelf->top__DOT__id_flush)
                                         ? 0U : ((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                                  ? (IData)(
                                                            (vlSelf->top__DOT__sram_rdata 
                                                             >> 0x20U))
                                                  : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
            __Vtemp301[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                               ? 0U : ((1U & (IData)(
                                                     (vlSelf->top__DOT__pc_new 
                                                      >> 2U)))
                                        ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                   >> 0x20U))
                                        : (IData)(vlSelf->top__DOT__sram_rdata)));
            __Vtemp301[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                       ? 0ULL : vlSelf->top__DOT__pc_new));
            __Vtemp301[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                        ? 0ULL : vlSelf->top__DOT__pc_new) 
                                      >> 0x20U));
            tracep->chgWData(oldp+319,(__Vtemp301),96);
            tracep->chgWData(oldp+322,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
            tracep->chgCData(oldp+325,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
            tracep->chgCData(oldp+326,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                 >> 2U))),5);
            tracep->chgCData(oldp+327,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+328,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 0x19U)),7);
            tracep->chgIData(oldp+329,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 7U)),25);
            tracep->chgQData(oldp+330,(((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
            tracep->chgIData(oldp+332,(((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
            tracep->chgBit(oldp+333,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__is_jalr_id))));
            tracep->chgBit(oldp+334,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__is_jal_id))));
            tracep->chgBit(oldp+335,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__is_brc_id))));
            tracep->chgBit(oldp+336,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__wben_id))));
            tracep->chgBit(oldp+337,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__trap_id))));
            tracep->chgWData(oldp+338,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
            tracep->chgBit(oldp+348,((1U & (~ ((0U 
                                                == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                               | ((1U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                  & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))))));
            tracep->chgQData(oldp+349,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
            tracep->chgQData(oldp+351,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
            tracep->chgQData(oldp+353,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
            VL_EXTEND_WQ(65,64, __Vtemp303, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp304, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp305, __Vtemp303, __Vtemp304);
            VL_EXTEND_WI(65,1, __Vtemp306, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp307, __Vtemp305, __Vtemp306);
            tracep->chgBit(oldp+355,((1U & ((0x2000000U 
                                             & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                             ? ((1U 
                                                 & __Vtemp307[2U]) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                             : ((IData)(
                                                        (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                         >> 0x3fU)) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
            tracep->chgBit(oldp+356,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
            tracep->chgQData(oldp+357,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
            tracep->chgBit(oldp+359,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            tracep->chgQData(oldp+360,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
            tracep->chgQData(oldp+362,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
            tracep->chgBit(oldp+364,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+365,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+366,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),3);
            tracep->chgQData(oldp+367,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
            VL_EXTEND_WQ(65,64, __Vtemp310, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp311, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp312, __Vtemp310, __Vtemp311);
            VL_EXTEND_WI(65,1, __Vtemp313, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp314, __Vtemp312, __Vtemp313);
            tracep->chgBit(oldp+369,((1U & __Vtemp314[2U])));
            tracep->chgBit(oldp+370,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
            tracep->chgQData(oldp+371,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+373,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+375,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+377,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
            tracep->chgCData(oldp+379,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                >> 0x16U))),4);
            tracep->chgBit(oldp+380,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+381,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
            tracep->chgQData(oldp+382,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
            tracep->chgQData(oldp+384,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
            tracep->chgQData(oldp+386,((0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
            tracep->chgQData(oldp+388,((~ (0xffffffffffffffffULL 
                                           >> (0x3fU 
                                               & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
            tracep->chgQData(oldp+390,(((0x4000000U 
                                         & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                         ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                            & (QData)((IData)(
                                                              ((0xffffffffffffffffULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                               >> 0x20U))))
                                         : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
            tracep->chgQData(oldp+392,(((0x4000000U 
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
            tracep->chgQData(oldp+394,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
            tracep->chgCData(oldp+396,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                              >> 7U))),3);
            tracep->chgQData(oldp+397,(((((QData)((IData)(
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
            tracep->chgQData(oldp+399,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                        + (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                            << 0x25U) 
                                           | (((QData)((IData)(
                                                               vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                 >> 0x1bU))))),64);
            tracep->chgBit(oldp+401,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
            tracep->chgBit(oldp+402,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
            tracep->chgBit(oldp+403,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
            tracep->chgQData(oldp+404,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
            tracep->chgQData(oldp+406,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
            tracep->chgBit(oldp+408,((1U & ((0x200U 
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
            tracep->chgCData(oldp+409,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 9U))),5);
            tracep->chgBit(oldp+410,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
            tracep->chgCData(oldp+411,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
            tracep->chgBit(oldp+412,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
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
            tracep->chgBit(oldp+413,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                       & ((0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 8U)) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0xaU)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+414,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                       & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0xaU)))) 
                                      & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
            tracep->chgBit(oldp+415,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
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
            tracep->chgBit(oldp+416,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                       & ((0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 8U)) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 5U)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+417,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                       & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 5U)))) 
                                      & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
            __Vtemp319[0U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                               << 2U) | ((2U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                >> 0xeU)) 
                                         | (1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
            __Vtemp319[1U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                               >> 0x1eU) | ((IData)(
                                                    (vlSelf->top__DOT__alures_ex 
                                                     >> 0x20U)) 
                                            << 2U));
            __Vtemp319[2U] = (((IData)((vlSelf->top__DOT__alures_ex 
                                        >> 0x20U)) 
                               >> 0x1eU) | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                                            << 2U));
            __Vtemp319[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                               >> 0x1eU) | ((IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                     >> 0x20U)) 
                                            << 2U));
            __Vtemp319[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                        >> 0x20U)) 
                               >> 0x1eU) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 7U) 
                                            | (0x7cU 
                                               & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                  >> 0x19U))));
            __Vtemp319[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                    << 7U) 
                                                   | (0x7cU 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                         >> 0x19U))));
            __Vtemp319[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                    << 7U) 
                                                   | (0x7cU 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                         >> 0x19U))));
            __Vtemp319[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                    >> 0x19U));
            tracep->chgWData(oldp+418,(__Vtemp319),226);
            tracep->chgWData(oldp+426,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
            tracep->chgCData(oldp+434,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 0xeU))),3);
            tracep->chgBit(oldp+435,((8U == (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+436,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (0U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+437,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (4U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+438,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (1U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+439,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (5U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+440,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (2U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+441,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (6U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+442,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (3U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgCData(oldp+443,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
            tracep->chgSData(oldp+444,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
            tracep->chgIData(oldp+445,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
            tracep->chgBit(oldp+446,(((8U == (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 4U))) 
                                      & (0U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+447,(((8U == (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 4U))) 
                                      & (1U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+448,(((8U == (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 4U))) 
                                      & (2U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+449,(((8U == (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 4U))) 
                                      & (3U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+450,(((0U == (0x1fU 
                                              & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 3U))) 
                                      & ((0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0x16U)) 
                                         == (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
            tracep->chgBit(oldp+451,((1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU)))));
            tracep->chgBit(oldp+452,((2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU)))));
            tracep->chgBit(oldp+453,((3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU)))));
            tracep->chgBit(oldp+454,((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))));
            tracep->chgBit(oldp+455,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
            tracep->chgBit(oldp+456,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
            tracep->chgBit(oldp+457,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
            tracep->chgBit(oldp+458,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
            tracep->chgBit(oldp+459,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
            tracep->chgQData(oldp+460,(((((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U))) 
                                        | vlSelf->top__DOT__csrdata_ls)),64);
            tracep->chgQData(oldp+462,(((~ (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                << 0x1eU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                  >> 2U)))) 
                                        & vlSelf->top__DOT__csrdata_ls)),64);
            tracep->chgQData(oldp+464,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
            tracep->chgQData(oldp+466,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
            tracep->chgQData(oldp+468,(((0x1cU == (0x1fU 
                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                      >> 4U)))
                                         ? 0xbULL : 0ULL)),64);
            tracep->chgQData(oldp+470,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
            tracep->chgIData(oldp+472,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
            tracep->chgBit(oldp+473,(vlSelf->top__DOT____Vcellinp__Dcache_u__valid_i));
            tracep->chgBit(oldp+474,(((3U != (0x7fU 
                                              & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                  << 5U) 
                                                 | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                    >> 0x1bU)))) 
                                      | (8U == (0x1fU 
                                                & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 3U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1dU)))))));
            tracep->chgBit(oldp+475,(((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))));
            tracep->chgBit(oldp+476,((((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                         & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                        | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                       | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                      | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)))));
            tracep->chgQData(oldp+477,(vlSelf->top__DOT__Dcache_u__DOT__rd_data_o),64);
            tracep->chgBit(oldp+479,(((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__Dcache_u__DOT__axiRdReady))));
            tracep->chgIData(oldp+480,((((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0xbU)) 
                                         << 0xbU) | 
                                        (0x7e0U & ((IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 5U)) 
                                                   << 5U)))),32);
            tracep->chgIData(oldp+481,(((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceWay)
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
                                                  << 5U))))),32);
            tracep->chgBit(oldp+482,(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
            tracep->chgCData(oldp+483,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
            tracep->chgCData(oldp+484,(vlSelf->top__DOT__Dcache_u__DOT__cacheNexState),3);
            tracep->chgBit(oldp+485,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
            tracep->chgBit(oldp+486,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
            tracep->chgBit(oldp+487,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
            VL_EXTEND_WQ(128,64, __Vtemp321, vlSelf->top__DOT__Dcache_u__DOT__storeData);
            if ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                               >> 0x20U)))) {
                __Vtemp326[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp321[0U]);
                __Vtemp326[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp321[1U]);
                __Vtemp326[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp321[2U]);
                __Vtemp326[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp321[3U]);
            } else {
                __Vtemp326[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U];
                __Vtemp326[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U];
                __Vtemp326[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U];
                __Vtemp326[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U];
            }
            tracep->chgWData(oldp+488,(__Vtemp326),128);
            VL_EXTEND_WQ(128,64, __Vtemp328, vlSelf->top__DOT__Dcache_u__DOT__storeData);
            if ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                               >> 0x20U)))) {
                __Vtemp333[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp328[0U]);
                __Vtemp333[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? 0U : __Vtemp328[1U]);
                __Vtemp333[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                   : __Vtemp328[2U]);
                __Vtemp333[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)))
                                   ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                              >> 0x20U))
                                   : __Vtemp328[3U]);
            } else {
                __Vtemp333[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U];
                __Vtemp333[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U];
                __Vtemp333[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U];
                __Vtemp333[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U];
            }
            tracep->chgWData(oldp+492,(__Vtemp333),128);
            tracep->chgBit(oldp+496,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
            tracep->chgBit(oldp+497,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
            tracep->chgBit(oldp+498,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgQData(oldp+499,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
            tracep->chgCData(oldp+501,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
            tracep->chgCData(oldp+502,((0x3fU & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 5U)))),6);
            tracep->chgIData(oldp+503,((0x1fffffU & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 0xbU)))),21);
            tracep->chgQData(oldp+504,(vlSelf->top__DOT__Dcache_u__DOT__validArray1),64);
            tracep->chgQData(oldp+506,(vlSelf->top__DOT__Dcache_u__DOT__validArray2),64);
            tracep->chgBit(oldp+508,((1U & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                    >> 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 5U))))))));
            tracep->chgBit(oldp+509,((1U & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                    >> 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 5U))))))));
            tracep->chgBit(oldp+510,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & (IData)(vlSelf->top__DOT__Dcache_u__DOT__rdLast_i)) 
                                      & vlSelf->top__DOT__Dcache_u__DOT__randomBit)));
            tracep->chgBit(oldp+511,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & (IData)(vlSelf->top__DOT__Dcache_u__DOT__rdLast_i)) 
                                      & (~ vlSelf->top__DOT__Dcache_u__DOT__randomBit))));
            tracep->chgIData(oldp+512,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                         & (IData)(vlSelf->top__DOT__Dcache_u__DOT__rdLast_i))
                                         ? ((1U & vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                             ? (0x1fffffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0xbU)))
                                             : 0U) : 0U)),21);
            tracep->chgIData(oldp+513,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                         & (IData)(vlSelf->top__DOT__Dcache_u__DOT__rdLast_i))
                                         ? ((1U & vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                             ? 0U : 
                                            (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 0xbU))))
                                         : 0U)),21);
            tracep->chgIData(oldp+514,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                       [(0x3fU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 5U)))]),21);
            tracep->chgIData(oldp+515,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                       [(0x3fU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 5U)))]),21);
            tracep->chgBit(oldp+516,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgBit(oldp+517,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgBit(oldp+518,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgQData(oldp+519,((((QData)((IData)(
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
            tracep->chgBit(oldp+521,(vlSelf->top__DOT__Dcache_u__DOT__missFlag));
            tracep->chgCData(oldp+522,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
            tracep->chgWData(oldp+523,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
            tracep->chgBit(oldp+531,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgQData(oldp+532,(vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch),64);
            tracep->chgCData(oldp+534,(vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch),8);
            tracep->chgQData(oldp+535,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1),64);
            tracep->chgQData(oldp+537,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2),64);
            tracep->chgBit(oldp+539,(vlSelf->top__DOT__Dcache_u__DOT__wrLow));
            tracep->chgBit(oldp+540,(vlSelf->top__DOT__Dcache_u__DOT__wrHigh));
            tracep->chgQData(oldp+541,(vlSelf->top__DOT__Dcache_u__DOT__storeData),64);
            tracep->chgQData(oldp+543,(vlSelf->top__DOT__Dcache_u__DOT__sramMask),64);
            VL_EXTEND_WQ(128,64, __Vtemp335, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
            if ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                               >> 0x20U)))) {
                __Vtemp342[0U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp335[0U])
                                   : 0U);
                __Vtemp342[1U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp335[1U])
                                   : 0U);
                __Vtemp342[2U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp335[2U])
                                   : 0U);
                __Vtemp342[3U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp335[3U])
                                   : 0U);
            } else {
                __Vtemp342[0U] = 1U;
                __Vtemp342[1U] = 0U;
                __Vtemp342[2U] = 0U;
                __Vtemp342[3U] = 0U;
            }
            tracep->chgWData(oldp+545,(__Vtemp342),128);
            VL_EXTEND_WQ(128,64, __Vtemp344, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
            if ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                               >> 0x20U)))) {
                __Vtemp351[0U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp344[0U])
                                   : 0U);
                __Vtemp351[1U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp344[1U])
                                   : 0U);
                __Vtemp351[2U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                       : __Vtemp344[2U])
                                   : 0U);
                __Vtemp351[3U] = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                  >> 0x20U))
                                       : __Vtemp344[3U])
                                   : 0U);
            } else {
                __Vtemp351[0U] = 1U;
                __Vtemp351[1U] = 0U;
                __Vtemp351[2U] = 0U;
                __Vtemp351[3U] = 0U;
            }
            tracep->chgWData(oldp+549,(__Vtemp351),128);
            tracep->chgBit(oldp+553,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U))) 
                                      & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
            tracep->chgBit(oldp+554,(vlSelf->top__DOT__Dcache_u__DOT__replaceWay));
            tracep->chgBit(oldp+555,(((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                        & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U))) 
                                       & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                      & ((IData)((vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                              >> 5U))))) 
                                         | (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                                                    >> 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 5U)))))))));
            tracep->chgBit(oldp+556,((1U & (~ ((((0U 
                                                  == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                 & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__valid_i)) 
                                                | (1U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                               | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))))));
            tracep->chgBit(oldp+557,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
            VL_EXTEND_WQ(128,64, __Vtemp353, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
            __Vtemp361[0U] = (~ ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                >> 0x20U)))
                                  ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                      ? ((1U & (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 3U)))
                                          ? 0U : __Vtemp353[0U])
                                      : 0U) : 1U));
            __Vtemp361[1U] = (~ ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                >> 0x20U)))
                                  ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                      ? ((1U & (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 3U)))
                                          ? 0U : __Vtemp353[1U])
                                      : 0U) : 0U));
            __Vtemp361[2U] = (~ ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                >> 0x20U)))
                                  ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                      ? ((1U & (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 3U)))
                                          ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                          : __Vtemp353[2U])
                                      : 0U) : 0U));
            __Vtemp361[3U] = (~ ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                >> 0x20U)))
                                  ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                      ? ((1U & (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 3U)))
                                          ? (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                     >> 0x20U))
                                          : __Vtemp353[3U])
                                      : 0U) : 0U));
            tracep->chgWData(oldp+558,(__Vtemp361),128);
            tracep->chgCData(oldp+562,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_1__A),6);
            tracep->chgBit(oldp+563,(((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                        & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__valid_i)) 
                                       | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                      | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))));
            VL_EXTEND_WQ(128,64, __Vtemp363, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
            __Vtemp371[0U] = (~ ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                >> 0x20U)))
                                  ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                      ? ((1U & (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 3U)))
                                          ? 0U : __Vtemp363[0U])
                                      : 0U) : 1U));
            __Vtemp371[1U] = (~ ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                >> 0x20U)))
                                  ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                      ? ((1U & (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 3U)))
                                          ? 0U : __Vtemp363[1U])
                                      : 0U) : 0U));
            __Vtemp371[2U] = (~ ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                >> 0x20U)))
                                  ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                      ? ((1U & (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 3U)))
                                          ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                          : __Vtemp363[2U])
                                      : 0U) : 0U));
            __Vtemp371[3U] = (~ ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                >> 0x20U)))
                                  ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                      ? ((1U & (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 3U)))
                                          ? (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                     >> 0x20U))
                                          : __Vtemp363[3U])
                                      : 0U) : 0U));
            tracep->chgWData(oldp+564,(__Vtemp371),128);
            tracep->chgCData(oldp+568,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
            tracep->chgBit(oldp+569,((1U & (~ ((((0U 
                                                  == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                 & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__valid_i)) 
                                                | (1U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                               | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))))));
            tracep->chgBit(oldp+570,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
            tracep->chgCData(oldp+571,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_1__A),6);
            tracep->chgBit(oldp+572,(((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                        & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__valid_i)) 
                                       | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                      | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))));
            tracep->chgCData(oldp+573,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
            tracep->chgCData(oldp+574,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
            tracep->chgCData(oldp+575,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
            tracep->chgCData(oldp+576,((0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                 << 1U))),6);
            tracep->chgWData(oldp+577,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
            tracep->chgWData(oldp+587,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [2U] | vlSelf->__Vm_traceActivity
                         [3U]))) {
            tracep->chgBit(oldp+597,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                       ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
            tracep->chgBit(oldp+598,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                       ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                       : 0U)));
            tracep->chgBit(oldp+599,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                       & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                      & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
            tracep->chgBit(oldp+600,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                       & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                      & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
            tracep->chgIData(oldp+601,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                         & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                         ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                             ? (0x1fffffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                           >> 0xbU)))
                                             : 0U) : 0U)),21);
            tracep->chgIData(oldp+602,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                         & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                         ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                             ? 0U : 
                                            (0x1fffffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 0xbU))))
                                         : 0U)),21);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [2U] | vlSelf->__Vm_traceActivity
                         [4U]))) {
            tracep->chgQData(oldp+603,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs2_idx_id])),64);
            tracep->chgQData(oldp+605,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs1_idx_id])),64);
            __Vtemp376[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
            __Vtemp376[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                               >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                                  >> 0x20U)) 
                                         << 0x1bU));
            __Vtemp376[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                        >> 0x20U)) 
                               >> 5U) | ((IData)(((0U 
                                                   == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                                  [vlSelf->top__DOT__rs1_idx_id])) 
                                         << 0x1bU));
            __Vtemp376[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
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
            __Vtemp376[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
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
            __Vtemp376[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
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
            __Vtemp376[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                          ? 0ULL : 
                                         vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                         [vlSelf->top__DOT__rs2_idx_id]) 
                                        >> 0x20U)) 
                               >> 5U) | (((IData)(vlSelf->top__DOT__ex_flush)
                                           ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                                         << 0x1bU));
            __Vtemp376[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
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
            __Vtemp376[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
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
            __Vtemp376[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                       >> 0x20U)) >> 5U);
            tracep->chgWData(oldp+607,(__Vtemp376),315);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+617,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
            tracep->chgQData(oldp+618,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                         ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
            tracep->chgBit(oldp+620,(vlSelf->top__DOT__if_axi_r_last_i));
            tracep->chgCData(oldp+621,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
            tracep->chgBit(oldp+622,(vlSelf->top__DOT__dataValid_o));
            tracep->chgBit(oldp+623,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                       : 0U)));
            tracep->chgQData(oldp+624,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                         ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data
                                         : 0ULL)),64);
            tracep->chgBit(oldp+626,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last))
                                       : 0U)));
            tracep->chgBit(oldp+627,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
            tracep->chgBit(oldp+628,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
            tracep->chgQData(oldp+629,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
            tracep->chgBit(oldp+631,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
            tracep->chgCData(oldp+632,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
            tracep->chgCData(oldp+633,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgQData(oldp+634,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
            tracep->chgQData(oldp+636,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
            tracep->chgQData(oldp+638,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
            tracep->chgQData(oldp+640,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
            tracep->chgQData(oldp+642,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
            tracep->chgQData(oldp+644,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
            tracep->chgQData(oldp+646,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
            tracep->chgQData(oldp+648,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
            tracep->chgQData(oldp+650,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
            tracep->chgQData(oldp+652,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
            tracep->chgQData(oldp+654,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
            tracep->chgQData(oldp+656,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
            tracep->chgQData(oldp+658,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
            tracep->chgQData(oldp+660,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
            tracep->chgQData(oldp+662,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
            tracep->chgQData(oldp+664,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
            tracep->chgQData(oldp+666,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
            tracep->chgQData(oldp+668,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
            tracep->chgQData(oldp+670,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
            tracep->chgQData(oldp+672,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
            tracep->chgQData(oldp+674,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
            tracep->chgQData(oldp+676,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
            tracep->chgQData(oldp+678,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
            tracep->chgQData(oldp+680,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
            tracep->chgQData(oldp+682,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
            tracep->chgQData(oldp+684,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
            tracep->chgQData(oldp+686,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
            tracep->chgQData(oldp+688,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
            tracep->chgQData(oldp+690,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
            tracep->chgQData(oldp+692,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
            tracep->chgQData(oldp+694,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
            tracep->chgQData(oldp+696,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        }
        tracep->chgBit(oldp+698,(vlSelf->clk));
        tracep->chgBit(oldp+699,(vlSelf->rst_n));
        tracep->chgQData(oldp+700,(vlSelf->pc_diff),64);
        tracep->chgQData(oldp+702,(vlSelf->pc_decoding),64);
        tracep->chgIData(oldp+704,(vlSelf->instr_diff),32);
        tracep->chgQData(oldp+705,(vlSelf->regA0),64);
        tracep->chgBit(oldp+707,(vlSelf->stall_n_diff));
        tracep->chgBit(oldp+708,(vlSelf->axi_ar_ready_i));
        tracep->chgBit(oldp+709,(vlSelf->axi_ar_valid_o));
        tracep->chgQData(oldp+710,(vlSelf->axi_ar_addr_o),64);
        tracep->chgCData(oldp+712,(vlSelf->axi_ar_prot_o),3);
        tracep->chgCData(oldp+713,(vlSelf->axi_ar_id_o),4);
        tracep->chgBit(oldp+714,(vlSelf->axi_ar_user_o));
        tracep->chgCData(oldp+715,(vlSelf->axi_ar_len_o),8);
        tracep->chgCData(oldp+716,(vlSelf->axi_ar_size_o),3);
        tracep->chgCData(oldp+717,(vlSelf->axi_ar_burst_o),2);
        tracep->chgBit(oldp+718,(vlSelf->axi_ar_lock_o));
        tracep->chgCData(oldp+719,(vlSelf->axi_ar_cache_o),4);
        tracep->chgCData(oldp+720,(vlSelf->axi_ar_qos_o),4);
        tracep->chgCData(oldp+721,(vlSelf->axi_ar_region_o),4);
        tracep->chgBit(oldp+722,(vlSelf->axi_r_ready_o));
        tracep->chgBit(oldp+723,(vlSelf->axi_r_valid_i));
        tracep->chgCData(oldp+724,(vlSelf->axi_r_resp_i),2);
        tracep->chgQData(oldp+725,(vlSelf->axi_r_data_i),64);
        tracep->chgBit(oldp+727,(vlSelf->axi_r_last_i));
        tracep->chgCData(oldp+728,(vlSelf->axi_r_id_i),4);
        tracep->chgBit(oldp+729,(vlSelf->axi_r_user_i));
        tracep->chgBit(oldp+730,(vlSelf->axi_aw_ready_i));
        tracep->chgBit(oldp+731,(vlSelf->axi_aw_valid_o));
        tracep->chgQData(oldp+732,(vlSelf->axi_aw_addr_o),64);
        tracep->chgCData(oldp+734,(vlSelf->axi_aw_prot_o),3);
        tracep->chgCData(oldp+735,(vlSelf->axi_aw_id_o),4);
        tracep->chgBit(oldp+736,(vlSelf->axi_aw_user_o));
        tracep->chgCData(oldp+737,(vlSelf->axi_aw_len_o),8);
        tracep->chgCData(oldp+738,(vlSelf->axi_aw_size_o),3);
        tracep->chgCData(oldp+739,(vlSelf->axi_aw_burst_o),2);
        tracep->chgBit(oldp+740,(vlSelf->axi_aw_lock_o));
        tracep->chgCData(oldp+741,(vlSelf->axi_aw_cache_o),4);
        tracep->chgCData(oldp+742,(vlSelf->axi_aw_qos_o),4);
        tracep->chgCData(oldp+743,(vlSelf->axi_aw_region_o),4);
        tracep->chgBit(oldp+744,(vlSelf->axi_w_ready_i));
        tracep->chgBit(oldp+745,(vlSelf->axi_w_valid_o));
        tracep->chgQData(oldp+746,(vlSelf->axi_w_data_o),64);
        tracep->chgCData(oldp+748,(vlSelf->axi_w_strb_o),8);
        tracep->chgBit(oldp+749,(vlSelf->axi_w_last_o));
        tracep->chgBit(oldp+750,(vlSelf->axi_w_user_o));
        tracep->chgBit(oldp+751,(vlSelf->axi_b_ready_o));
        tracep->chgBit(oldp+752,(vlSelf->axi_b_valid_i));
        tracep->chgCData(oldp+753,(vlSelf->axi_b_resp_i),2);
        tracep->chgCData(oldp+754,(vlSelf->axi_b_id_i),4);
        tracep->chgBit(oldp+755,(vlSelf->axi_b_user_i));
        tracep->chgBit(oldp+756,(vlSelf->axi_mmio_ar_ready_i));
        tracep->chgBit(oldp+757,(vlSelf->axi_mmio_ar_valid_o));
        tracep->chgQData(oldp+758,(vlSelf->axi_mmio_ar_addr_o),64);
        tracep->chgCData(oldp+760,(vlSelf->axi_mmio_ar_prot_o),3);
        tracep->chgCData(oldp+761,(vlSelf->axi_mmio_ar_id_o),4);
        tracep->chgBit(oldp+762,(vlSelf->axi_mmio_ar_user_o));
        tracep->chgCData(oldp+763,(vlSelf->axi_mmio_ar_len_o),8);
        tracep->chgCData(oldp+764,(vlSelf->axi_mmio_ar_size_o),3);
        tracep->chgCData(oldp+765,(vlSelf->axi_mmio_ar_burst_o),2);
        tracep->chgBit(oldp+766,(vlSelf->axi_mmio_ar_lock_o));
        tracep->chgCData(oldp+767,(vlSelf->axi_mmio_ar_cache_o),4);
        tracep->chgCData(oldp+768,(vlSelf->axi_mmio_ar_qos_o),4);
        tracep->chgCData(oldp+769,(vlSelf->axi_mmio_ar_region_o),4);
        tracep->chgBit(oldp+770,(vlSelf->axi_mmio_r_ready_o));
        tracep->chgBit(oldp+771,(vlSelf->axi_mmio_r_valid_i));
        tracep->chgCData(oldp+772,(vlSelf->axi_mmio_r_resp_i),2);
        tracep->chgQData(oldp+773,(vlSelf->axi_mmio_r_data_i),64);
        tracep->chgBit(oldp+775,(vlSelf->axi_mmio_r_last_i));
        tracep->chgCData(oldp+776,(vlSelf->axi_mmio_r_id_i),4);
        tracep->chgBit(oldp+777,(vlSelf->axi_mmio_r_user_i));
        tracep->chgBit(oldp+778,(vlSelf->axi_mmio_aw_ready_i));
        tracep->chgBit(oldp+779,(vlSelf->axi_mmio_aw_valid_o));
        tracep->chgQData(oldp+780,(vlSelf->axi_mmio_aw_addr_o),64);
        tracep->chgCData(oldp+782,(vlSelf->axi_mmio_aw_prot_o),3);
        tracep->chgCData(oldp+783,(vlSelf->axi_mmio_aw_id_o),4);
        tracep->chgBit(oldp+784,(vlSelf->axi_mmio_aw_user_o));
        tracep->chgCData(oldp+785,(vlSelf->axi_mmio_aw_len_o),8);
        tracep->chgCData(oldp+786,(vlSelf->axi_mmio_aw_size_o),3);
        tracep->chgCData(oldp+787,(vlSelf->axi_mmio_aw_burst_o),2);
        tracep->chgBit(oldp+788,(vlSelf->axi_mmio_aw_lock_o));
        tracep->chgCData(oldp+789,(vlSelf->axi_mmio_aw_cache_o),4);
        tracep->chgCData(oldp+790,(vlSelf->axi_mmio_aw_qos_o),4);
        tracep->chgCData(oldp+791,(vlSelf->axi_mmio_aw_region_o),4);
        tracep->chgBit(oldp+792,(vlSelf->axi_mmio_w_ready_i));
        tracep->chgBit(oldp+793,(vlSelf->axi_mmio_w_valid_o));
        tracep->chgQData(oldp+794,(vlSelf->axi_mmio_w_data_o),64);
        tracep->chgCData(oldp+796,(vlSelf->axi_mmio_w_strb_o),8);
        tracep->chgBit(oldp+797,(vlSelf->axi_mmio_w_last_o));
        tracep->chgBit(oldp+798,(vlSelf->axi_mmio_w_user_o));
        tracep->chgBit(oldp+799,(vlSelf->axi_mmio_b_ready_o));
        tracep->chgBit(oldp+800,(vlSelf->axi_mmio_b_valid_i));
        tracep->chgCData(oldp+801,(vlSelf->axi_mmio_b_resp_i),2);
        tracep->chgCData(oldp+802,(vlSelf->axi_mmio_b_id_i),4);
        tracep->chgBit(oldp+803,(vlSelf->axi_mmio_b_user_i));
        tracep->chgCData(oldp+804,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                     ? 0U : (3U & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                               >> 0x1dU)))
                                                    ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                    : (IData)(vlSelf->axi_r_resp_i))))),2);
        tracep->chgBit(oldp+805,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                 >> 0x1dU)))
                                   ? (IData)(vlSelf->axi_mmio_aw_ready_i)
                                   : (IData)(vlSelf->axi_aw_ready_i))));
        tracep->chgBit(oldp+806,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                 >> 0x1dU)))
                                   ? (IData)(vlSelf->axi_mmio_w_ready_i)
                                   : (IData)(vlSelf->axi_w_ready_i))));
        tracep->chgBit(oldp+807,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                 >> 0x1dU)))
                                   ? (IData)(vlSelf->axi_mmio_b_valid_i)
                                   : (IData)(vlSelf->axi_b_valid_i))));
        tracep->chgCData(oldp+808,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                   >> 0x1dU)))
                                     ? (IData)(vlSelf->axi_mmio_b_resp_i)
                                     : (IData)(vlSelf->axi_b_resp_i))),2);
        tracep->chgCData(oldp+809,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                   >> 0x1dU)))
                                     ? (IData)(vlSelf->axi_mmio_b_id_i)
                                     : (IData)(vlSelf->axi_b_id_i))),4);
        tracep->chgBit(oldp+810,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                 >> 0x1dU)))
                                   ? (IData)(vlSelf->axi_mmio_b_user_i)
                                   : (IData)(vlSelf->axi_b_user_i))));
        tracep->chgCData(oldp+811,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                     ? (3U & ((1U & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x1dU)))
                                               ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                               : (IData)(vlSelf->axi_r_resp_i)))
                                     : 0U)),2);
        tracep->chgCData(oldp+812,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                   >> 0x1dU)))
                                     ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                     : (IData)(vlSelf->axi_r_resp_i))),2);
        tracep->chgBit(oldp+813,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                 >> 0x1dU)))
                                   ? (IData)(vlSelf->axi_mmio_r_user_i)
                                   : (IData)(vlSelf->axi_r_user_i))));
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
    }
}
