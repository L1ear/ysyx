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
    VlWide<3>/*95:0*/ __Vtemp134;
    VlWide<3>/*95:0*/ __Vtemp136;
    VlWide<3>/*95:0*/ __Vtemp137;
    VlWide<3>/*95:0*/ __Vtemp138;
    VlWide<3>/*95:0*/ __Vtemp139;
    VlWide<3>/*95:0*/ __Vtemp140;
    VlWide<3>/*95:0*/ __Vtemp143;
    VlWide<3>/*95:0*/ __Vtemp144;
    VlWide<3>/*95:0*/ __Vtemp145;
    VlWide<3>/*95:0*/ __Vtemp146;
    VlWide<3>/*95:0*/ __Vtemp147;
    VlWide<8>/*255:0*/ __Vtemp152;
    VlWide<10>/*319:0*/ __Vtemp157;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__axi_if_u__DOT__addr_reg),64);
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
            tracep->chgBit(oldp+43,(vlSelf->top__DOT__axi_if_u__DOT__instr_valid_reg));
            tracep->chgQData(oldp+44,(vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg),64);
            tracep->chgBit(oldp+46,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
            tracep->chgQData(oldp+47,(vlSelf->top__DOT__axi_ls_u__DOT__addr_reg),64);
            tracep->chgQData(oldp+49,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),64);
            tracep->chgBit(oldp+51,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid_reg));
            tracep->chgQData(oldp+52,(vlSelf->top__DOT__axi_ls_u__DOT__rd_data_reg),64);
            tracep->chgQData(oldp+54,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
            tracep->chgBit(oldp+66,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+67,((((IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state) 
                                      >> 1U) & ((~ (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state)) 
                                                & ((vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                    == vlSelf->top__DOT__axi_if_u__DOT__addr_reg) 
                                                   & (IData)(vlSelf->top__DOT__axi_if_u__DOT__instr_valid_reg))))));
            tracep->chgBit(oldp+68,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state) 
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
            tracep->chgBit(oldp+69,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state) 
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
            tracep->chgQData(oldp+70,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
                                                                     vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1[7U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1[6U])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__cache_dut__DOT__way1Data[7U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__way1Data[6U]))))
                                                : ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1[5U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1[4U])))
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
                                                                     vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1[2U])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__cache_dut__DOT__way1Data[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__way1Data[2U]))))
                                                : ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1[0U])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__cache_dut__DOT__way1Data[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__way1Data[0U]))))))
                                        : 0ULL)),64);
            tracep->chgQData(oldp+72,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
                                                                     vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2[7U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2[6U])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__cache_dut__DOT__way2Data[7U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__way2Data[6U]))))
                                                : ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2[5U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2[4U])))
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
                                                ? ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2[2U])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__cache_dut__DOT__way2Data[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__way2Data[2U]))))
                                                : ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2[0U])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__cache_dut__DOT__way2Data[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__way2Data[0U]))))))
                                        : 0ULL)),64);
            tracep->chgQData(oldp+74,(((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                        ? ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                            ? 0ULL : 
                                           ((vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                             != vlSelf->top__DOT__axi_if_u__DOT__addr_reg)
                                             ? 0ULL
                                             : vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg))
                                        : 0ULL)),64);
            tracep->chgCData(oldp+76,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
                                        ? ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
                                            ? ((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready)
                                                ? 2U
                                                : 3U)
                                            : ((8U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                    >> 4U)))
                                                ? (
                                                   ((((((QData)((IData)(
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
            tracep->chgCData(oldp+77,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
                                        ? ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
                                            ? ((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)
                                                ? 2U
                                                : 3U)
                                            : ((3U 
                                                == 
                                                (0x7fU 
                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                    >> 2U)))
                                                ? (
                                                   ((((QData)((IData)(
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
            tracep->chgBit(oldp+78,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                      & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid)) 
                                     & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
            tracep->chgBit(oldp+79,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                     & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_valid))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+80,(vlSelf->top__DOT__instr_fetching));
            tracep->chgBit(oldp+81,(vlSelf->top__DOT__axi_if_u__DOT__ar_valid));
            tracep->chgBit(oldp+82,(vlSelf->top__DOT__axi_if_u__DOT__r_ready));
            tracep->chgBit(oldp+83,(vlSelf->top__DOT__axi_ls_u__DOT__aw_valid));
            tracep->chgQData(oldp+84,((((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                           >> 2U)))),64);
            tracep->chgCData(oldp+86,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
            tracep->chgBit(oldp+87,(vlSelf->top__DOT__axi_ls_u__DOT__w_valid));
            tracep->chgQData(oldp+88,((vlSelf->top__DOT__ls_u__DOT__wr_data 
                                       << (0x38U & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                            << 1U)))),64);
            tracep->chgCData(oldp+90,((0xffU & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask) 
                                                << 
                                                (7U 
                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                    >> 2U))))),8);
            tracep->chgBit(oldp+91,(vlSelf->top__DOT__axi_ls_u__DOT__b_ready));
            tracep->chgBit(oldp+92,(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid));
            tracep->chgBit(oldp+93,(vlSelf->top__DOT__axi_ls_u__DOT__r_ready));
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__pc_new),64);
            tracep->chgBit(oldp+96,(vlSelf->top__DOT__is_jump));
            tracep->chgQData(oldp+97,(((0x200000U & 
                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
            tracep->chgBit(oldp+99,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                               | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                              | (IData)(vlSelf->top__DOT__ls_not_ok))))));
            tracep->chgBit(oldp+100,(vlSelf->top__DOT__if_stall_n));
            tracep->chgBit(oldp+101,(vlSelf->top__DOT__if_instr_valid));
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__sram_rdata),64);
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
            tracep->chgBit(oldp+106,((0ULL != vlSelf->top__DOT__pc_new)));
            tracep->chgBit(oldp+107,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                         & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
            tracep->chgBit(oldp+108,(((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                        & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                       | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                      | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
            tracep->chgIData(oldp+109,(((1U & (IData)(
                                                      (vlSelf->top__DOT__pc_new 
                                                       >> 2U)))
                                         ? (IData)(
                                                   (vlSelf->top__DOT__sram_rdata 
                                                    >> 0x20U))
                                         : (IData)(vlSelf->top__DOT__sram_rdata))),32);
            tracep->chgQData(oldp+110,((((QData)((IData)(
                                                         vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
            tracep->chgIData(oldp+112,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
            tracep->chgQData(oldp+113,(vlSelf->top__DOT__ID_u__DOT__imm),64);
            tracep->chgBit(oldp+115,(vlSelf->top__DOT__src1sel_id));
            tracep->chgCData(oldp+116,(vlSelf->top__DOT__src2sel_id),2);
            tracep->chgCData(oldp+117,(vlSelf->top__DOT__aluctr_id),5);
            tracep->chgBit(oldp+118,(vlSelf->top__DOT__is_brc_id));
            tracep->chgBit(oldp+119,(vlSelf->top__DOT__is_jal_id));
            tracep->chgBit(oldp+120,(vlSelf->top__DOT__is_jalr_id));
            tracep->chgBit(oldp+121,(vlSelf->top__DOT__wben_id));
            tracep->chgCData(oldp+122,(vlSelf->top__DOT__rs1_idx_id),5);
            tracep->chgCData(oldp+123,(vlSelf->top__DOT__rs2_idx_id),5);
            tracep->chgBit(oldp+124,(vlSelf->top__DOT__DivEn_id));
            tracep->chgCData(oldp+125,(vlSelf->top__DOT__DivSel_id),3);
            tracep->chgBit(oldp+126,(vlSelf->top__DOT__in_trap_id));
            tracep->chgBit(oldp+127,(vlSelf->top__DOT__out_trap_id));
            tracep->chgBit(oldp+128,(vlSelf->top__DOT__trap_id));
            tracep->chgBit(oldp+129,(vlSelf->top__DOT__ld_use_hazard));
            tracep->chgBit(oldp+130,(vlSelf->top__DOT__id_flush));
            tracep->chgQData(oldp+131,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                              >> 0x1bU)))),64);
            tracep->chgIData(oldp+133,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                         << 5U) | (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1bU))),32);
            tracep->chgQData(oldp+134,(((0x4000000U 
                                         & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                         : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)),64);
            tracep->chgBit(oldp+136,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+137,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x10U))),2);
            tracep->chgQData(oldp+138,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                              >> 0x1bU)))),64);
            tracep->chgQData(oldp+140,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                              >> 0x1bU)))),64);
            tracep->chgQData(oldp+142,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU)))),64);
            tracep->chgQData(oldp+144,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
            tracep->chgCData(oldp+146,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0x16U))),5);
            tracep->chgBit(oldp+147,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+148,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+149,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+150,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+151,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 4U))));
            tracep->chgCData(oldp+152,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 1U))),3);
            tracep->chgBit(oldp+153,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
            tracep->chgBit(oldp+154,((1U & (~ ((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                               | (IData)(vlSelf->top__DOT__ls_not_ok))))));
            tracep->chgQData(oldp+155,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
            tracep->chgCData(oldp+157,(vlSelf->top__DOT__rs1_sel),2);
            tracep->chgCData(oldp+158,(vlSelf->top__DOT__rs2_sel),2);
            tracep->chgCData(oldp+159,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0xaU))),5);
            tracep->chgCData(oldp+160,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 5U))),5);
            tracep->chgBit(oldp+161,(vlSelf->top__DOT__ex_flush));
            tracep->chgQData(oldp+162,((((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                              >> 2U)))),64);
            tracep->chgQData(oldp+164,((((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                              >> 2U)))),64);
            tracep->chgIData(oldp+166,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                         << 0x1eU) 
                                        | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 2U))),32);
            tracep->chgQData(oldp+167,(((((((((- (QData)((IData)(
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
            tracep->chgBit(oldp+169,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                            >> 1U))));
            tracep->chgQData(oldp+170,(vlSelf->top__DOT__csrdata_ls),64);
            tracep->chgQData(oldp+172,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
            tracep->chgQData(oldp+174,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
            tracep->chgBit(oldp+176,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
            tracep->chgBit(oldp+177,(vlSelf->top__DOT__ls_not_ok));
            tracep->chgBit(oldp+178,((3U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+179,((8U == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U)))));
            tracep->chgQData(oldp+180,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
            tracep->chgCData(oldp+182,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
            tracep->chgQData(oldp+183,(vlSelf->top__DOT__ls_sram_rd_data),64);
            tracep->chgQData(oldp+185,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                              >> 1U)))),64);
            tracep->chgQData(oldp+187,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                              >> 1U)))),64);
            tracep->chgQData(oldp+189,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                              >> 1U)))),64);
            tracep->chgIData(oldp+191,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                         << 0x1fU) 
                                        | (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                           >> 1U))),32);
            tracep->chgQData(oldp+192,(vlSelf->top__DOT__wb_data),64);
            tracep->chgCData(oldp+194,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U))),5);
            tracep->chgBit(oldp+195,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
            tracep->chgQData(oldp+196,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
            tracep->chgBit(oldp+198,(vlSelf->top__DOT__wb_stall_n));
            tracep->chgBit(oldp+199,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
            tracep->chgQData(oldp+200,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
            tracep->chgCData(oldp+202,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_prot),3);
            tracep->chgCData(oldp+203,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id),4);
            tracep->chgBit(oldp+204,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_user));
            tracep->chgCData(oldp+205,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_len),8);
            tracep->chgCData(oldp+206,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
            tracep->chgCData(oldp+207,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_burst),2);
            tracep->chgBit(oldp+208,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_lock));
            tracep->chgCData(oldp+209,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_cache),4);
            tracep->chgCData(oldp+210,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_qos),4);
            tracep->chgCData(oldp+211,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_region),4);
            tracep->chgBit(oldp+212,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
            tracep->chgIData(oldp+213,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
            tracep->chgBit(oldp+214,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
            tracep->chgCData(oldp+215,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
            tracep->chgCData(oldp+216,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
            tracep->chgBit(oldp+217,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
            tracep->chgBit(oldp+218,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
            tracep->chgBit(oldp+219,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
            tracep->chgWData(oldp+220,(vlSelf->top__DOT__cache_dut__DOT__inDataWay1_1),128);
            tracep->chgWData(oldp+224,(vlSelf->top__DOT__cache_dut__DOT__inDataWay1_2),128);
            tracep->chgWData(oldp+228,(vlSelf->top__DOT__cache_dut__DOT__inDataWay2_1),128);
            tracep->chgWData(oldp+232,(vlSelf->top__DOT__cache_dut__DOT__inDataWay2_2),128);
            tracep->chgBit(oldp+236,(vlSelf->top__DOT__cache_dut__DOT__wenWay1_1));
            tracep->chgBit(oldp+237,(vlSelf->top__DOT__cache_dut__DOT__wenWay1_2));
            tracep->chgBit(oldp+238,(vlSelf->top__DOT__cache_dut__DOT__wenWay2_1));
            tracep->chgBit(oldp+239,(vlSelf->top__DOT__cache_dut__DOT__wenWay2_2));
            tracep->chgBit(oldp+240,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgQData(oldp+241,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
            tracep->chgCData(oldp+243,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
            tracep->chgCData(oldp+244,((0x3fU & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 5U)))),6);
            tracep->chgIData(oldp+245,((0x1fffffU & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 0xbU)))),21);
            tracep->chgQData(oldp+246,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
            tracep->chgQData(oldp+248,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
            tracep->chgBit(oldp+250,((1U & (IData)(
                                                   (vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                    >> 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                >> 5U))))))));
            tracep->chgBit(oldp+251,((1U & (IData)(
                                                   (vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                    >> 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                >> 5U))))))));
            tracep->chgBit(oldp+252,(vlSelf->top__DOT__cache_dut__DOT__bitValid1_d));
            tracep->chgBit(oldp+253,(vlSelf->top__DOT__cache_dut__DOT__bitValid2_d));
            tracep->chgIData(oldp+254,(vlSelf->top__DOT__cache_dut__DOT__tagArray1_d),21);
            tracep->chgIData(oldp+255,(vlSelf->top__DOT__cache_dut__DOT__tagArray2_d),21);
            tracep->chgIData(oldp+256,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                       [(0x3fU & (IData)(
                                                         (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                          >> 5U)))]),21);
            tracep->chgIData(oldp+257,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                       [(0x3fU & (IData)(
                                                         (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                          >> 5U)))]),21);
            tracep->chgBit(oldp+258,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgBit(oldp+259,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgBit(oldp+260,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgQData(oldp+261,(vlSelf->top__DOT__cache_dut__DOT__addrToRead),64);
            tracep->chgIData(oldp+263,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
            tracep->chgBit(oldp+264,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
            tracep->chgWData(oldp+265,(vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1),256);
            tracep->chgWData(oldp+273,(vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2),256);
            tracep->chgBit(oldp+281,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN));
            tracep->chgBit(oldp+282,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1_1)))));
            tracep->chgCData(oldp+283,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
            tracep->chgBit(oldp+284,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN)))));
            tracep->chgBit(oldp+285,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
            tracep->chgBit(oldp+286,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1_2)))));
            tracep->chgBit(oldp+287,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
            tracep->chgBit(oldp+288,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN));
            tracep->chgBit(oldp+289,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2_1)))));
            tracep->chgBit(oldp+290,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN)))));
            tracep->chgBit(oldp+291,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
            tracep->chgBit(oldp+292,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2_2)))));
            tracep->chgBit(oldp+293,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
            tracep->chgCData(oldp+294,(vlSelf->top__DOT__axi_if_u__DOT__r_state),2);
            tracep->chgQData(oldp+295,(((IData)(vlSelf->top__DOT__id_flush)
                                         ? 0ULL : vlSelf->top__DOT__pc_new)),64);
            tracep->chgIData(oldp+297,(((IData)(vlSelf->top__DOT__id_flush)
                                         ? 0U : ((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                                  ? (IData)(
                                                            (vlSelf->top__DOT__sram_rdata 
                                                             >> 0x20U))
                                                  : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
            __Vtemp134[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                               ? 0U : ((1U & (IData)(
                                                     (vlSelf->top__DOT__pc_new 
                                                      >> 2U)))
                                        ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                   >> 0x20U))
                                        : (IData)(vlSelf->top__DOT__sram_rdata)));
            __Vtemp134[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                       ? 0ULL : vlSelf->top__DOT__pc_new));
            __Vtemp134[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                        ? 0ULL : vlSelf->top__DOT__pc_new) 
                                      >> 0x20U));
            tracep->chgWData(oldp+298,(__Vtemp134),96);
            tracep->chgWData(oldp+301,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
            tracep->chgCData(oldp+304,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
            tracep->chgCData(oldp+305,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                 >> 2U))),5);
            tracep->chgCData(oldp+306,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+307,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 0x19U)),7);
            tracep->chgIData(oldp+308,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 7U)),25);
            tracep->chgQData(oldp+309,(((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
            tracep->chgIData(oldp+311,(((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
            tracep->chgBit(oldp+312,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__is_jalr_id))));
            tracep->chgBit(oldp+313,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__is_jal_id))));
            tracep->chgBit(oldp+314,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__is_brc_id))));
            tracep->chgBit(oldp+315,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__wben_id))));
            tracep->chgBit(oldp+316,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__trap_id))));
            tracep->chgWData(oldp+317,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
            tracep->chgQData(oldp+327,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
            tracep->chgQData(oldp+329,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
            tracep->chgQData(oldp+331,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
            VL_EXTEND_WQ(65,64, __Vtemp136, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp137, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp138, __Vtemp136, __Vtemp137);
            VL_EXTEND_WI(65,1, __Vtemp139, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp140, __Vtemp138, __Vtemp139);
            tracep->chgBit(oldp+333,((1U & ((0x2000000U 
                                             & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                             ? ((1U 
                                                 & __Vtemp140[2U]) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                             : ((IData)(
                                                        (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                         >> 0x3fU)) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
            tracep->chgBit(oldp+334,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
            tracep->chgQData(oldp+335,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
            tracep->chgBit(oldp+337,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            tracep->chgQData(oldp+338,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
            tracep->chgQData(oldp+340,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
            tracep->chgBit(oldp+342,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+343,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+344,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),3);
            tracep->chgQData(oldp+345,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
            VL_EXTEND_WQ(65,64, __Vtemp143, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp144, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp145, __Vtemp143, __Vtemp144);
            VL_EXTEND_WI(65,1, __Vtemp146, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp147, __Vtemp145, __Vtemp146);
            tracep->chgBit(oldp+347,((1U & __Vtemp147[2U])));
            tracep->chgBit(oldp+348,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
            tracep->chgQData(oldp+349,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+351,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+353,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+355,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
            tracep->chgCData(oldp+357,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                >> 0x16U))),4);
            tracep->chgBit(oldp+358,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+359,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
            tracep->chgQData(oldp+360,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
            tracep->chgQData(oldp+362,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
            tracep->chgQData(oldp+364,((0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
            tracep->chgQData(oldp+366,((~ (0xffffffffffffffffULL 
                                           >> (0x3fU 
                                               & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
            tracep->chgQData(oldp+368,(((0x4000000U 
                                         & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                         ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                            & (QData)((IData)(
                                                              ((0xffffffffffffffffULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                               >> 0x20U))))
                                         : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
            tracep->chgQData(oldp+370,(((0x4000000U 
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
            tracep->chgQData(oldp+372,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
            tracep->chgCData(oldp+374,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                              >> 7U))),3);
            tracep->chgQData(oldp+375,(((((QData)((IData)(
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
            tracep->chgQData(oldp+377,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                        + (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                            << 0x25U) 
                                           | (((QData)((IData)(
                                                               vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                 >> 0x1bU))))),64);
            tracep->chgBit(oldp+379,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
            tracep->chgBit(oldp+380,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
            tracep->chgBit(oldp+381,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
            tracep->chgQData(oldp+382,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
            tracep->chgQData(oldp+384,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
            tracep->chgBit(oldp+386,((1U & ((0x200U 
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
            tracep->chgCData(oldp+387,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 9U))),5);
            tracep->chgBit(oldp+388,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
            tracep->chgCData(oldp+389,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
            tracep->chgBit(oldp+390,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
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
            tracep->chgBit(oldp+391,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                       & ((0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 8U)) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0xaU)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+392,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                       & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0xaU)))) 
                                      & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
            tracep->chgBit(oldp+393,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
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
            tracep->chgBit(oldp+394,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                       & ((0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 8U)) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 5U)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+395,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                       & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 5U)))) 
                                      & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
            __Vtemp152[0U] = (((IData)(((0x4000000U 
                                         & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                         : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)) 
                               << 2U) | ((2U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                >> 0xeU)) 
                                         | (1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
            __Vtemp152[1U] = (((IData)(((0x4000000U 
                                         & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                         : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)) 
                               >> 0x1eU) | ((IData)(
                                                    (((0x4000000U 
                                                       & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                                       ? 
                                                      (((QData)((IData)(
                                                                        (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                                       : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout) 
                                                     >> 0x20U)) 
                                            << 2U));
            __Vtemp152[2U] = (((IData)((((0x4000000U 
                                          & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                          ? (((QData)((IData)(
                                                              (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                          : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout) 
                                        >> 0x20U)) 
                               >> 0x1eU) | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                                            << 2U));
            __Vtemp152[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                               >> 0x1eU) | ((IData)(
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                     >> 0x20U)) 
                                            << 2U));
            __Vtemp152[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                        >> 0x20U)) 
                               >> 0x1eU) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                             << 7U) 
                                            | (0x7cU 
                                               & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                  >> 0x19U))));
            __Vtemp152[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                    << 7U) 
                                                   | (0x7cU 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                         >> 0x19U))));
            __Vtemp152[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                     >> 0x19U)) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                    << 7U) 
                                                   | (0x7cU 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                         >> 0x19U))));
            __Vtemp152[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                    >> 0x19U));
            tracep->chgWData(oldp+396,(__Vtemp152),226);
            tracep->chgWData(oldp+404,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
            tracep->chgCData(oldp+412,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 0xeU))),3);
            tracep->chgBit(oldp+413,((8U == (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+414,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (0U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+415,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (4U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+416,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (1U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+417,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (5U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+418,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (2U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+419,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (6U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+420,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (3U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgCData(oldp+421,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
            tracep->chgSData(oldp+422,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
            tracep->chgIData(oldp+423,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
            tracep->chgBit(oldp+424,(((8U == (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 4U))) 
                                      & (0U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+425,(((8U == (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 4U))) 
                                      & (1U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+426,(((8U == (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 4U))) 
                                      & (2U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+427,(((8U == (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 4U))) 
                                      & (3U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+428,(((0U == (0x1fU 
                                              & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 3U))) 
                                      & ((0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0x16U)) 
                                         == (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
            tracep->chgBit(oldp+429,((1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU)))));
            tracep->chgBit(oldp+430,((2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU)))));
            tracep->chgBit(oldp+431,((3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU)))));
            tracep->chgBit(oldp+432,((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))));
            tracep->chgBit(oldp+433,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
            tracep->chgBit(oldp+434,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
            tracep->chgBit(oldp+435,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
            tracep->chgBit(oldp+436,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
            tracep->chgBit(oldp+437,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
            tracep->chgQData(oldp+438,(((((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U))) 
                                        | vlSelf->top__DOT__csrdata_ls)),64);
            tracep->chgQData(oldp+440,(((~ (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                << 0x1eU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                  >> 2U)))) 
                                        & vlSelf->top__DOT__csrdata_ls)),64);
            tracep->chgQData(oldp+442,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
            tracep->chgQData(oldp+444,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
            tracep->chgQData(oldp+446,(((0x1cU == (0x1fU 
                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                      >> 4U)))
                                         ? 0xbULL : 0ULL)),64);
            tracep->chgQData(oldp+448,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
            tracep->chgCData(oldp+450,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
            tracep->chgCData(oldp+451,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
            tracep->chgCData(oldp+452,((0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                 << 1U))),6);
            tracep->chgWData(oldp+453,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
            tracep->chgWData(oldp+463,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [2U] | vlSelf->__Vm_traceActivity
                         [3U]))) {
            tracep->chgQData(oldp+473,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs2_idx_id])),64);
            tracep->chgQData(oldp+475,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs1_idx_id])),64);
            __Vtemp157[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
            __Vtemp157[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                               >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                                  >> 0x20U)) 
                                         << 0x1bU));
            __Vtemp157[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                        >> 0x20U)) 
                               >> 5U) | ((IData)(((0U 
                                                   == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                                  [vlSelf->top__DOT__rs1_idx_id])) 
                                         << 0x1bU));
            __Vtemp157[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
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
            __Vtemp157[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
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
            __Vtemp157[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
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
            __Vtemp157[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                          ? 0ULL : 
                                         vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                         [vlSelf->top__DOT__rs2_idx_id]) 
                                        >> 0x20U)) 
                               >> 5U) | (((IData)(vlSelf->top__DOT__ex_flush)
                                           ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                                         << 0x1bU));
            __Vtemp157[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
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
            __Vtemp157[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
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
            __Vtemp157[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                       >> 0x20U)) >> 5U);
            tracep->chgWData(oldp+477,(__Vtemp157),315);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgQData(oldp+487,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
            tracep->chgQData(oldp+489,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
            tracep->chgQData(oldp+491,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
            tracep->chgQData(oldp+493,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
            tracep->chgQData(oldp+495,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
            tracep->chgQData(oldp+497,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
            tracep->chgQData(oldp+499,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
            tracep->chgQData(oldp+501,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
            tracep->chgQData(oldp+503,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
            tracep->chgQData(oldp+505,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
            tracep->chgQData(oldp+507,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
            tracep->chgQData(oldp+509,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
            tracep->chgQData(oldp+511,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
            tracep->chgQData(oldp+513,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
            tracep->chgQData(oldp+515,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
            tracep->chgQData(oldp+517,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
            tracep->chgQData(oldp+519,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
            tracep->chgQData(oldp+521,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
            tracep->chgQData(oldp+523,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
            tracep->chgQData(oldp+525,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
            tracep->chgQData(oldp+527,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
            tracep->chgQData(oldp+529,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
            tracep->chgQData(oldp+531,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
            tracep->chgQData(oldp+533,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
            tracep->chgQData(oldp+535,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
            tracep->chgQData(oldp+537,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
            tracep->chgQData(oldp+539,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
            tracep->chgQData(oldp+541,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
            tracep->chgQData(oldp+543,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
            tracep->chgQData(oldp+545,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
            tracep->chgQData(oldp+547,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
            tracep->chgQData(oldp+549,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+551,(vlSelf->top__DOT__if_axi_r_valid_i));
            tracep->chgQData(oldp+552,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                         ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
            tracep->chgBit(oldp+554,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last)))));
            tracep->chgCData(oldp+555,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
            tracep->chgBit(oldp+556,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                       : 0U)));
            tracep->chgQData(oldp+557,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                         ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data
                                         : 0ULL)),64);
            tracep->chgBit(oldp+559,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last))
                                       : 0U)));
            tracep->chgBit(oldp+560,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
            tracep->chgBit(oldp+561,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
            tracep->chgQData(oldp+562,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
            tracep->chgBit(oldp+564,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        }
        tracep->chgBit(oldp+565,(vlSelf->clk));
        tracep->chgBit(oldp+566,(vlSelf->rst_n));
        tracep->chgQData(oldp+567,(vlSelf->pc_diff),64);
        tracep->chgQData(oldp+569,(vlSelf->pc_decoding),64);
        tracep->chgIData(oldp+571,(vlSelf->instr_diff),32);
        tracep->chgQData(oldp+572,(vlSelf->regA0),64);
        tracep->chgBit(oldp+574,(vlSelf->stall_n_diff));
        tracep->chgBit(oldp+575,(vlSelf->axi_ar_ready_i));
        tracep->chgBit(oldp+576,(vlSelf->axi_ar_valid_o));
        tracep->chgQData(oldp+577,(vlSelf->axi_ar_addr_o),64);
        tracep->chgCData(oldp+579,(vlSelf->axi_ar_prot_o),3);
        tracep->chgCData(oldp+580,(vlSelf->axi_ar_id_o),4);
        tracep->chgBit(oldp+581,(vlSelf->axi_ar_user_o));
        tracep->chgCData(oldp+582,(vlSelf->axi_ar_len_o),8);
        tracep->chgCData(oldp+583,(vlSelf->axi_ar_size_o),3);
        tracep->chgCData(oldp+584,(vlSelf->axi_ar_burst_o),2);
        tracep->chgBit(oldp+585,(vlSelf->axi_ar_lock_o));
        tracep->chgCData(oldp+586,(vlSelf->axi_ar_cache_o),4);
        tracep->chgCData(oldp+587,(vlSelf->axi_ar_qos_o),4);
        tracep->chgCData(oldp+588,(vlSelf->axi_ar_region_o),4);
        tracep->chgBit(oldp+589,(vlSelf->axi_r_ready_o));
        tracep->chgBit(oldp+590,(vlSelf->axi_r_valid_i));
        tracep->chgCData(oldp+591,(vlSelf->axi_r_resp_i),2);
        tracep->chgQData(oldp+592,(vlSelf->axi_r_data_i),64);
        tracep->chgBit(oldp+594,(vlSelf->axi_r_last_i));
        tracep->chgCData(oldp+595,(vlSelf->axi_r_id_i),4);
        tracep->chgBit(oldp+596,(vlSelf->axi_r_user_i));
        tracep->chgBit(oldp+597,(vlSelf->axi_aw_ready_i));
        tracep->chgBit(oldp+598,(vlSelf->axi_aw_valid_o));
        tracep->chgQData(oldp+599,(vlSelf->axi_aw_addr_o),64);
        tracep->chgCData(oldp+601,(vlSelf->axi_aw_prot_o),3);
        tracep->chgCData(oldp+602,(vlSelf->axi_aw_id_o),4);
        tracep->chgBit(oldp+603,(vlSelf->axi_aw_user_o));
        tracep->chgCData(oldp+604,(vlSelf->axi_aw_len_o),8);
        tracep->chgCData(oldp+605,(vlSelf->axi_aw_size_o),3);
        tracep->chgCData(oldp+606,(vlSelf->axi_aw_burst_o),2);
        tracep->chgBit(oldp+607,(vlSelf->axi_aw_lock_o));
        tracep->chgCData(oldp+608,(vlSelf->axi_aw_cache_o),4);
        tracep->chgCData(oldp+609,(vlSelf->axi_aw_qos_o),4);
        tracep->chgCData(oldp+610,(vlSelf->axi_aw_region_o),4);
        tracep->chgBit(oldp+611,(vlSelf->axi_w_ready_i));
        tracep->chgBit(oldp+612,(vlSelf->axi_w_valid_o));
        tracep->chgQData(oldp+613,(vlSelf->axi_w_data_o),64);
        tracep->chgCData(oldp+615,(vlSelf->axi_w_strb_o),8);
        tracep->chgBit(oldp+616,(vlSelf->axi_w_last_o));
        tracep->chgBit(oldp+617,(vlSelf->axi_w_user_o));
        tracep->chgBit(oldp+618,(vlSelf->axi_b_ready_o));
        tracep->chgBit(oldp+619,(vlSelf->axi_b_valid_i));
        tracep->chgCData(oldp+620,(vlSelf->axi_b_resp_i),2);
        tracep->chgCData(oldp+621,(vlSelf->axi_b_id_i),4);
        tracep->chgBit(oldp+622,(vlSelf->axi_b_user_i));
        tracep->chgBit(oldp+623,(vlSelf->axi_mmio_ar_ready_i));
        tracep->chgBit(oldp+624,(vlSelf->axi_mmio_ar_valid_o));
        tracep->chgQData(oldp+625,(vlSelf->axi_mmio_ar_addr_o),64);
        tracep->chgCData(oldp+627,(vlSelf->axi_mmio_ar_prot_o),3);
        tracep->chgCData(oldp+628,(vlSelf->axi_mmio_ar_id_o),4);
        tracep->chgBit(oldp+629,(vlSelf->axi_mmio_ar_user_o));
        tracep->chgCData(oldp+630,(vlSelf->axi_mmio_ar_len_o),8);
        tracep->chgCData(oldp+631,(vlSelf->axi_mmio_ar_size_o),3);
        tracep->chgCData(oldp+632,(vlSelf->axi_mmio_ar_burst_o),2);
        tracep->chgBit(oldp+633,(vlSelf->axi_mmio_ar_lock_o));
        tracep->chgCData(oldp+634,(vlSelf->axi_mmio_ar_cache_o),4);
        tracep->chgCData(oldp+635,(vlSelf->axi_mmio_ar_qos_o),4);
        tracep->chgCData(oldp+636,(vlSelf->axi_mmio_ar_region_o),4);
        tracep->chgBit(oldp+637,(vlSelf->axi_mmio_r_ready_o));
        tracep->chgBit(oldp+638,(vlSelf->axi_mmio_r_valid_i));
        tracep->chgCData(oldp+639,(vlSelf->axi_mmio_r_resp_i),2);
        tracep->chgQData(oldp+640,(vlSelf->axi_mmio_r_data_i),64);
        tracep->chgBit(oldp+642,(vlSelf->axi_mmio_r_last_i));
        tracep->chgCData(oldp+643,(vlSelf->axi_mmio_r_id_i),4);
        tracep->chgBit(oldp+644,(vlSelf->axi_mmio_r_user_i));
        tracep->chgBit(oldp+645,(vlSelf->axi_mmio_aw_ready_i));
        tracep->chgBit(oldp+646,(vlSelf->axi_mmio_aw_valid_o));
        tracep->chgQData(oldp+647,(vlSelf->axi_mmio_aw_addr_o),64);
        tracep->chgCData(oldp+649,(vlSelf->axi_mmio_aw_prot_o),3);
        tracep->chgCData(oldp+650,(vlSelf->axi_mmio_aw_id_o),4);
        tracep->chgBit(oldp+651,(vlSelf->axi_mmio_aw_user_o));
        tracep->chgCData(oldp+652,(vlSelf->axi_mmio_aw_len_o),8);
        tracep->chgCData(oldp+653,(vlSelf->axi_mmio_aw_size_o),3);
        tracep->chgCData(oldp+654,(vlSelf->axi_mmio_aw_burst_o),2);
        tracep->chgBit(oldp+655,(vlSelf->axi_mmio_aw_lock_o));
        tracep->chgCData(oldp+656,(vlSelf->axi_mmio_aw_cache_o),4);
        tracep->chgCData(oldp+657,(vlSelf->axi_mmio_aw_qos_o),4);
        tracep->chgCData(oldp+658,(vlSelf->axi_mmio_aw_region_o),4);
        tracep->chgBit(oldp+659,(vlSelf->axi_mmio_w_ready_i));
        tracep->chgBit(oldp+660,(vlSelf->axi_mmio_w_valid_o));
        tracep->chgQData(oldp+661,(vlSelf->axi_mmio_w_data_o),64);
        tracep->chgCData(oldp+663,(vlSelf->axi_mmio_w_strb_o),8);
        tracep->chgBit(oldp+664,(vlSelf->axi_mmio_w_last_o));
        tracep->chgBit(oldp+665,(vlSelf->axi_mmio_w_user_o));
        tracep->chgBit(oldp+666,(vlSelf->axi_mmio_b_ready_o));
        tracep->chgBit(oldp+667,(vlSelf->axi_mmio_b_valid_i));
        tracep->chgCData(oldp+668,(vlSelf->axi_mmio_b_resp_i),2);
        tracep->chgCData(oldp+669,(vlSelf->axi_mmio_b_id_i),4);
        tracep->chgBit(oldp+670,(vlSelf->axi_mmio_b_user_i));
        tracep->chgBit(oldp+671,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                   ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->chgCData(oldp+672,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                     ? 0U : (3U & (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                               >> 0x1dU)))
                                                    ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                                    : (IData)(vlSelf->axi_r_resp_i))))),2);
        tracep->chgBit(oldp+673,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                 >> 0x1dU)))
                                   ? (IData)(vlSelf->axi_mmio_aw_ready_i)
                                   : (IData)(vlSelf->axi_aw_ready_i))));
        tracep->chgBit(oldp+674,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                 >> 0x1dU)))
                                   ? (IData)(vlSelf->axi_mmio_w_ready_i)
                                   : (IData)(vlSelf->axi_w_ready_i))));
        tracep->chgBit(oldp+675,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                 >> 0x1dU)))
                                   ? (IData)(vlSelf->axi_mmio_b_valid_i)
                                   : (IData)(vlSelf->axi_b_valid_i))));
        tracep->chgCData(oldp+676,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                   >> 0x1dU)))
                                     ? (IData)(vlSelf->axi_mmio_b_resp_i)
                                     : (IData)(vlSelf->axi_b_resp_i))),2);
        tracep->chgCData(oldp+677,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                   >> 0x1dU)))
                                     ? (IData)(vlSelf->axi_mmio_b_id_i)
                                     : (IData)(vlSelf->axi_b_id_i))),4);
        tracep->chgBit(oldp+678,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                 >> 0x1dU)))
                                   ? (IData)(vlSelf->axi_mmio_b_user_i)
                                   : (IData)(vlSelf->axi_b_user_i))));
        tracep->chgBit(oldp+679,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                   ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                   : 0U)));
        tracep->chgCData(oldp+680,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                     ? (3U & ((1U & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x1dU)))
                                               ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                               : (IData)(vlSelf->axi_r_resp_i)))
                                     : 0U)),2);
        tracep->chgCData(oldp+681,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                   >> 0x1dU)))
                                     ? (IData)(vlSelf->axi_mmio_r_resp_i)
                                     : (IData)(vlSelf->axi_r_resp_i))),2);
        tracep->chgBit(oldp+682,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                 >> 0x1dU)))
                                   ? (IData)(vlSelf->axi_mmio_r_user_i)
                                   : (IData)(vlSelf->axi_r_user_i))));
        tracep->chgCData(oldp+683,(((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                     ? ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                         ? (((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                              ? 0U : 
                                             (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last)))
                                             ? 2U : 3U)
                                         : ((0ULL != vlSelf->top__DOT__pc_new)
                                             ? ((vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                 != vlSelf->top__DOT__axi_if_u__DOT__addr_reg)
                                                 ? 1U
                                                 : 2U)
                                             : 0U))
                                     : ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                         ? (((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                              ? 0U : 
                                             (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))
                                             ? 3U : 1U)
                                         : ((0ULL != vlSelf->top__DOT__pc_new)
                                             ? 1U : 0U)))),2);
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
