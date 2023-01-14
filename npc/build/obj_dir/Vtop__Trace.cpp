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
            tracep->chgBit(oldp+0,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_arready));
            tracep->chgBit(oldp+1,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid));
            tracep->chgCData(oldp+2,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rresp),2);
            tracep->chgQData(oldp+3,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rdata),64);
            tracep->chgBit(oldp+5,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready));
            tracep->chgBit(oldp+6,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready));
            tracep->chgBit(oldp+7,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid));
            tracep->chgCData(oldp+8,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp),2);
            tracep->chgBit(oldp+9,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready));
            tracep->chgBit(oldp+10,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid));
            tracep->chgCData(oldp+11,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp),2);
            tracep->chgQData(oldp+12,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata),64);
            tracep->chgWData(oldp+14,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
            tracep->chgWData(oldp+18,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
            tracep->chgWData(oldp+22,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
            tracep->chgWData(oldp+26,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
            tracep->chgWData(oldp+30,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
            tracep->chgWData(oldp+38,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
            tracep->chgQData(oldp+46,(vlSelf->top__DOT__axi_if_u__DOT__addr_reg),64);
            tracep->chgBit(oldp+48,(vlSelf->top__DOT__axi_if_u__DOT__instr_valid_reg));
            tracep->chgQData(oldp+49,(vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg),64);
            tracep->chgBit(oldp+51,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
            tracep->chgQData(oldp+52,(vlSelf->top__DOT__axi_ls_u__DOT__addr_reg),64);
            tracep->chgQData(oldp+54,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),64);
            tracep->chgBit(oldp+56,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid_reg));
            tracep->chgQData(oldp+57,(vlSelf->top__DOT__axi_ls_u__DOT__rd_data_reg),64);
            tracep->chgBit(oldp+59,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_awready));
            tracep->chgBit(oldp+60,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_wready));
            tracep->chgCData(oldp+61,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_bresp),2);
            tracep->chgBit(oldp+62,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_bvalid));
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_awaddr),64);
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_araddr),64);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg0),64);
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg1),64);
            tracep->chgQData(oldp+71,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg2),64);
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg3),64);
            tracep->chgBit(oldp+75,(((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_wready) 
                                     & (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WVALID))));
            tracep->chgBit(oldp+76,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__aw_en));
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
            tracep->chgQData(oldp+81,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
            tracep->chgQData(oldp+83,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
            tracep->chgQData(oldp+85,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
            tracep->chgQData(oldp+87,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
            tracep->chgBit(oldp+89,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+90,((((IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state) 
                                      >> 1U) & ((~ (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state)) 
                                                & ((vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                    == vlSelf->top__DOT__axi_if_u__DOT__addr_reg) 
                                                   & (IData)(vlSelf->top__DOT__axi_if_u__DOT__instr_valid_reg))))));
            tracep->chgBit(oldp+91,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state) 
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
            tracep->chgBit(oldp+92,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state) 
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
            tracep->chgQData(oldp+93,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
            tracep->chgQData(oldp+95,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
            tracep->chgQData(oldp+97,(((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                        ? ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                            ? 0ULL : 
                                           ((vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                             != vlSelf->top__DOT__axi_if_u__DOT__addr_reg)
                                             ? 0ULL
                                             : vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg))
                                        : 0ULL)),64);
            tracep->chgCData(oldp+99,(((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                        ? ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                            ? ((IData)(vlSelf->top__DOT__if_axi_r_last_i)
                                                ? 2U
                                                : 3U)
                                            : ((0ULL 
                                                != vlSelf->top__DOT__pc_new)
                                                ? (
                                                   (vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                    != vlSelf->top__DOT__axi_if_u__DOT__addr_reg)
                                                    ? 1U
                                                    : 2U)
                                                : 0U))
                                        : ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                            ? ((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_arready)
                                                ? 3U
                                                : 1U)
                                            : ((0ULL 
                                                != vlSelf->top__DOT__pc_new)
                                                ? 1U
                                                : 0U)))),2);
            tracep->chgCData(oldp+100,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
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
            tracep->chgCData(oldp+101,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
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
            tracep->chgBit(oldp+102,((((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_arready) 
                                       & (IData)(vlSelf->top__DOT__axi_if_u__DOT__ar_valid)) 
                                      & (~ (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid)))));
            tracep->chgBit(oldp+103,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                       & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid)) 
                                      & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
            tracep->chgBit(oldp+104,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                      & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_valid))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+105,(vlSelf->top__DOT__instr_fetching));
            tracep->chgBit(oldp+106,(vlSelf->top__DOT__axi_if_u__DOT__ar_valid));
            tracep->chgQData(oldp+107,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
            tracep->chgBit(oldp+109,(vlSelf->top__DOT__axi_if_u__DOT__r_ready));
            tracep->chgBit(oldp+110,(vlSelf->top__DOT__axi_ls_u__DOT__aw_valid));
            tracep->chgQData(oldp+111,((((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                              >> 2U)))),64);
            tracep->chgCData(oldp+113,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
            tracep->chgBit(oldp+114,(vlSelf->top__DOT__axi_ls_u__DOT__w_valid));
            tracep->chgQData(oldp+115,((vlSelf->top__DOT__ls_u__DOT__wr_data 
                                        << (0x38U & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                             << 1U)))),64);
            tracep->chgCData(oldp+117,((0xffU & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                     >> 2U))))),8);
            tracep->chgBit(oldp+118,(vlSelf->top__DOT__axi_ls_u__DOT__b_ready));
            tracep->chgBit(oldp+119,(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid));
            tracep->chgBit(oldp+120,(vlSelf->top__DOT__axi_ls_u__DOT__r_ready));
            tracep->chgQData(oldp+121,(vlSelf->top__DOT__pc_new),64);
            tracep->chgBit(oldp+123,(vlSelf->top__DOT__is_jump));
            tracep->chgQData(oldp+124,(((0x200000U 
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
            tracep->chgBit(oldp+126,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                                | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                               | (IData)(vlSelf->top__DOT__ls_not_ok))))));
            tracep->chgBit(oldp+127,(vlSelf->top__DOT__if_stall_n));
            tracep->chgBit(oldp+128,(vlSelf->top__DOT__if_instr_valid));
            tracep->chgQData(oldp+129,(vlSelf->top__DOT__sram_rdata),64);
            tracep->chgBit(oldp+131,((0ULL != vlSelf->top__DOT__pc_new)));
            tracep->chgBit(oldp+132,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                         & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
            tracep->chgBit(oldp+133,(((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                        & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                       | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                      | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
            tracep->chgIData(oldp+134,(((1U & (IData)(
                                                      (vlSelf->top__DOT__pc_new 
                                                       >> 2U)))
                                         ? (IData)(
                                                   (vlSelf->top__DOT__sram_rdata 
                                                    >> 0x20U))
                                         : (IData)(vlSelf->top__DOT__sram_rdata))),32);
            tracep->chgQData(oldp+135,((((QData)((IData)(
                                                         vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
            tracep->chgIData(oldp+137,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
            tracep->chgQData(oldp+138,(vlSelf->top__DOT__ID_u__DOT__imm),64);
            tracep->chgBit(oldp+140,(vlSelf->top__DOT__src1sel_id));
            tracep->chgCData(oldp+141,(vlSelf->top__DOT__src2sel_id),2);
            tracep->chgCData(oldp+142,(vlSelf->top__DOT__aluctr_id),5);
            tracep->chgBit(oldp+143,(vlSelf->top__DOT__is_brc_id));
            tracep->chgBit(oldp+144,(vlSelf->top__DOT__is_jal_id));
            tracep->chgBit(oldp+145,(vlSelf->top__DOT__is_jalr_id));
            tracep->chgBit(oldp+146,(vlSelf->top__DOT__wben_id));
            tracep->chgCData(oldp+147,(vlSelf->top__DOT__rs1_idx_id),5);
            tracep->chgCData(oldp+148,(vlSelf->top__DOT__rs2_idx_id),5);
            tracep->chgBit(oldp+149,(vlSelf->top__DOT__DivEn_id));
            tracep->chgCData(oldp+150,(vlSelf->top__DOT__DivSel_id),3);
            tracep->chgBit(oldp+151,(vlSelf->top__DOT__in_trap_id));
            tracep->chgBit(oldp+152,(vlSelf->top__DOT__out_trap_id));
            tracep->chgBit(oldp+153,(vlSelf->top__DOT__trap_id));
            tracep->chgBit(oldp+154,(vlSelf->top__DOT__ld_use_hazard));
            tracep->chgBit(oldp+155,(vlSelf->top__DOT__id_flush));
            tracep->chgQData(oldp+156,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                              >> 0x1bU)))),64);
            tracep->chgIData(oldp+158,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                         << 5U) | (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1bU))),32);
            tracep->chgQData(oldp+159,(((0x4000000U 
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
            tracep->chgBit(oldp+161,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+162,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x10U))),2);
            tracep->chgQData(oldp+163,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                              >> 0x1bU)))),64);
            tracep->chgQData(oldp+165,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                              >> 0x1bU)))),64);
            tracep->chgQData(oldp+167,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1bU)))),64);
            tracep->chgQData(oldp+169,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
            tracep->chgCData(oldp+171,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0x16U))),5);
            tracep->chgBit(oldp+172,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+173,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+174,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+175,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+176,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 4U))));
            tracep->chgCData(oldp+177,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 1U))),3);
            tracep->chgBit(oldp+178,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
            tracep->chgBit(oldp+179,((1U & (~ ((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                               | (IData)(vlSelf->top__DOT__ls_not_ok))))));
            tracep->chgQData(oldp+180,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
            tracep->chgCData(oldp+182,(vlSelf->top__DOT__rs1_sel),2);
            tracep->chgCData(oldp+183,(vlSelf->top__DOT__rs2_sel),2);
            tracep->chgCData(oldp+184,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0xaU))),5);
            tracep->chgCData(oldp+185,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 5U))),5);
            tracep->chgBit(oldp+186,(vlSelf->top__DOT__ex_flush));
            tracep->chgQData(oldp+187,((((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                              >> 2U)))),64);
            tracep->chgQData(oldp+189,((((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                              >> 2U)))),64);
            tracep->chgIData(oldp+191,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                         << 0x1eU) 
                                        | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 2U))),32);
            tracep->chgQData(oldp+192,(((((((((- (QData)((IData)(
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
            tracep->chgBit(oldp+194,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                            >> 1U))));
            tracep->chgQData(oldp+195,(vlSelf->top__DOT__csrdata_ls),64);
            tracep->chgQData(oldp+197,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
            tracep->chgQData(oldp+199,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
            tracep->chgBit(oldp+201,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
            tracep->chgBit(oldp+202,(vlSelf->top__DOT__ls_not_ok));
            tracep->chgBit(oldp+203,((3U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+204,((8U == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U)))));
            tracep->chgQData(oldp+205,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
            tracep->chgCData(oldp+207,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
            tracep->chgQData(oldp+208,(vlSelf->top__DOT__ls_sram_rd_data),64);
            tracep->chgQData(oldp+210,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                              >> 1U)))),64);
            tracep->chgQData(oldp+212,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                              >> 1U)))),64);
            tracep->chgQData(oldp+214,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                              >> 1U)))),64);
            tracep->chgIData(oldp+216,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                         << 0x1fU) 
                                        | (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                           >> 1U))),32);
            tracep->chgQData(oldp+217,(vlSelf->top__DOT__wb_data),64);
            tracep->chgCData(oldp+219,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U))),5);
            tracep->chgBit(oldp+220,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
            tracep->chgQData(oldp+221,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
            tracep->chgBit(oldp+223,(vlSelf->top__DOT__wb_stall_n));
            tracep->chgBit(oldp+224,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
            tracep->chgQData(oldp+225,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
            tracep->chgCData(oldp+227,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_prot),3);
            tracep->chgCData(oldp+228,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id),4);
            tracep->chgBit(oldp+229,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_user));
            tracep->chgCData(oldp+230,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_len),8);
            tracep->chgCData(oldp+231,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
            tracep->chgCData(oldp+232,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_burst),2);
            tracep->chgBit(oldp+233,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_lock));
            tracep->chgCData(oldp+234,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_cache),4);
            tracep->chgCData(oldp+235,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_qos),4);
            tracep->chgCData(oldp+236,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_region),4);
            tracep->chgBit(oldp+237,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
            tracep->chgIData(oldp+238,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
            tracep->chgBit(oldp+239,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
            tracep->chgCData(oldp+240,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
            tracep->chgCData(oldp+241,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
            tracep->chgBit(oldp+242,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
            tracep->chgBit(oldp+243,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
            tracep->chgBit(oldp+244,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
            tracep->chgWData(oldp+245,(vlSelf->top__DOT__cache_dut__DOT__inDataWay1_1),128);
            tracep->chgWData(oldp+249,(vlSelf->top__DOT__cache_dut__DOT__inDataWay1_2),128);
            tracep->chgWData(oldp+253,(vlSelf->top__DOT__cache_dut__DOT__inDataWay2_1),128);
            tracep->chgWData(oldp+257,(vlSelf->top__DOT__cache_dut__DOT__inDataWay2_2),128);
            tracep->chgBit(oldp+261,(vlSelf->top__DOT__cache_dut__DOT__wenWay1_1));
            tracep->chgBit(oldp+262,(vlSelf->top__DOT__cache_dut__DOT__wenWay1_2));
            tracep->chgBit(oldp+263,(vlSelf->top__DOT__cache_dut__DOT__wenWay2_1));
            tracep->chgBit(oldp+264,(vlSelf->top__DOT__cache_dut__DOT__wenWay2_2));
            tracep->chgBit(oldp+265,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgQData(oldp+266,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
            tracep->chgCData(oldp+268,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
            tracep->chgCData(oldp+269,((0x3fU & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 5U)))),6);
            tracep->chgIData(oldp+270,((0x1fffffU & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 0xbU)))),21);
            tracep->chgQData(oldp+271,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
            tracep->chgQData(oldp+273,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
            tracep->chgBit(oldp+275,((1U & (IData)(
                                                   (vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                    >> 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                >> 5U))))))));
            tracep->chgBit(oldp+276,((1U & (IData)(
                                                   (vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                    >> 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                >> 5U))))))));
            tracep->chgBit(oldp+277,(vlSelf->top__DOT__cache_dut__DOT__bitValid1_d));
            tracep->chgBit(oldp+278,(vlSelf->top__DOT__cache_dut__DOT__bitValid2_d));
            tracep->chgIData(oldp+279,(vlSelf->top__DOT__cache_dut__DOT__tagArray1_d),21);
            tracep->chgIData(oldp+280,(vlSelf->top__DOT__cache_dut__DOT__tagArray2_d),21);
            tracep->chgIData(oldp+281,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                       [(0x3fU & (IData)(
                                                         (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                          >> 5U)))]),21);
            tracep->chgIData(oldp+282,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                       [(0x3fU & (IData)(
                                                         (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                          >> 5U)))]),21);
            tracep->chgBit(oldp+283,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgBit(oldp+284,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgBit(oldp+285,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgQData(oldp+286,(vlSelf->top__DOT__cache_dut__DOT__addrToRead),64);
            tracep->chgIData(oldp+288,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
            tracep->chgBit(oldp+289,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
            tracep->chgWData(oldp+290,(vlSelf->top__DOT__cache_dut__DOT__dpiRegWay1),256);
            tracep->chgWData(oldp+298,(vlSelf->top__DOT__cache_dut__DOT__dpiRegWay2),256);
            tracep->chgBit(oldp+306,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN));
            tracep->chgBit(oldp+307,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1_1)))));
            tracep->chgCData(oldp+308,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
            tracep->chgBit(oldp+309,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN)))));
            tracep->chgBit(oldp+310,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
            tracep->chgBit(oldp+311,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1_2)))));
            tracep->chgBit(oldp+312,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
            tracep->chgBit(oldp+313,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN));
            tracep->chgBit(oldp+314,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2_1)))));
            tracep->chgBit(oldp+315,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN)))));
            tracep->chgBit(oldp+316,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
            tracep->chgBit(oldp+317,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2_2)))));
            tracep->chgBit(oldp+318,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
            tracep->chgCData(oldp+319,(vlSelf->top__DOT__axi_if_u__DOT__r_state),2);
            tracep->chgQData(oldp+320,(((IData)(vlSelf->top__DOT__id_flush)
                                         ? 0ULL : vlSelf->top__DOT__pc_new)),64);
            tracep->chgIData(oldp+322,(((IData)(vlSelf->top__DOT__id_flush)
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
            tracep->chgWData(oldp+323,(__Vtemp134),96);
            tracep->chgWData(oldp+326,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
            tracep->chgCData(oldp+329,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
            tracep->chgCData(oldp+330,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                 >> 2U))),5);
            tracep->chgCData(oldp+331,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+332,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 0x19U)),7);
            tracep->chgIData(oldp+333,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 7U)),25);
            tracep->chgQData(oldp+334,(((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
            tracep->chgIData(oldp+336,(((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
            tracep->chgBit(oldp+337,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__is_jalr_id))));
            tracep->chgBit(oldp+338,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__is_jal_id))));
            tracep->chgBit(oldp+339,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__is_brc_id))));
            tracep->chgBit(oldp+340,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__wben_id))));
            tracep->chgBit(oldp+341,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__trap_id))));
            tracep->chgWData(oldp+342,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
            tracep->chgQData(oldp+352,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
            tracep->chgQData(oldp+354,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
            tracep->chgQData(oldp+356,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
            VL_EXTEND_WQ(65,64, __Vtemp136, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp137, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp138, __Vtemp136, __Vtemp137);
            VL_EXTEND_WI(65,1, __Vtemp139, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp140, __Vtemp138, __Vtemp139);
            tracep->chgBit(oldp+358,((1U & ((0x2000000U 
                                             & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                             ? ((1U 
                                                 & __Vtemp140[2U]) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                             : ((IData)(
                                                        (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                         >> 0x3fU)) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
            tracep->chgBit(oldp+359,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
            tracep->chgQData(oldp+360,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
            tracep->chgBit(oldp+362,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            tracep->chgQData(oldp+363,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
            tracep->chgQData(oldp+365,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
            tracep->chgBit(oldp+367,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+368,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+369,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),3);
            tracep->chgQData(oldp+370,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
            VL_EXTEND_WQ(65,64, __Vtemp143, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp144, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp145, __Vtemp143, __Vtemp144);
            VL_EXTEND_WI(65,1, __Vtemp146, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp147, __Vtemp145, __Vtemp146);
            tracep->chgBit(oldp+372,((1U & __Vtemp147[2U])));
            tracep->chgBit(oldp+373,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
            tracep->chgQData(oldp+374,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+376,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+378,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+380,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
            tracep->chgCData(oldp+382,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                >> 0x16U))),4);
            tracep->chgBit(oldp+383,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+384,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
            tracep->chgQData(oldp+385,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
            tracep->chgQData(oldp+387,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
            tracep->chgQData(oldp+389,((0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
            tracep->chgQData(oldp+391,((~ (0xffffffffffffffffULL 
                                           >> (0x3fU 
                                               & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
            tracep->chgQData(oldp+393,(((0x4000000U 
                                         & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                         ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                            & (QData)((IData)(
                                                              ((0xffffffffffffffffULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                               >> 0x20U))))
                                         : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
            tracep->chgQData(oldp+395,(((0x4000000U 
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
            tracep->chgQData(oldp+397,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
            tracep->chgCData(oldp+399,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                              >> 7U))),3);
            tracep->chgQData(oldp+400,(((((QData)((IData)(
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
            tracep->chgQData(oldp+402,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                        + (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                            << 0x25U) 
                                           | (((QData)((IData)(
                                                               vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                 >> 0x1bU))))),64);
            tracep->chgBit(oldp+404,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
            tracep->chgBit(oldp+405,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
            tracep->chgBit(oldp+406,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
            tracep->chgQData(oldp+407,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
            tracep->chgQData(oldp+409,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
            tracep->chgBit(oldp+411,((1U & ((0x200U 
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
            tracep->chgCData(oldp+412,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 9U))),5);
            tracep->chgBit(oldp+413,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
            tracep->chgCData(oldp+414,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
            tracep->chgBit(oldp+415,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
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
            tracep->chgBit(oldp+416,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                       & ((0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 8U)) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0xaU)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+417,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                       & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0xaU)))) 
                                      & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
            tracep->chgBit(oldp+418,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
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
            tracep->chgBit(oldp+419,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                       & ((0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 8U)) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 5U)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+420,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
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
            tracep->chgWData(oldp+421,(__Vtemp152),226);
            tracep->chgWData(oldp+429,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
            tracep->chgCData(oldp+437,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 0xeU))),3);
            tracep->chgBit(oldp+438,((8U == (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+439,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (0U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+440,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (4U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+441,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (1U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+442,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (5U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+443,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (2U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+444,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (6U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+445,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (3U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgCData(oldp+446,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
            tracep->chgSData(oldp+447,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
            tracep->chgIData(oldp+448,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
            tracep->chgBit(oldp+449,(((8U == (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 4U))) 
                                      & (0U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+450,(((8U == (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 4U))) 
                                      & (1U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+451,(((8U == (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 4U))) 
                                      & (2U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+452,(((8U == (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 4U))) 
                                      & (3U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+453,(((0U == (0x1fU 
                                              & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 3U))) 
                                      & ((0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0x16U)) 
                                         == (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
            tracep->chgBit(oldp+454,((1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU)))));
            tracep->chgBit(oldp+455,((2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU)))));
            tracep->chgBit(oldp+456,((3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU)))));
            tracep->chgBit(oldp+457,((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))));
            tracep->chgBit(oldp+458,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
            tracep->chgBit(oldp+459,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
            tracep->chgBit(oldp+460,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
            tracep->chgBit(oldp+461,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
            tracep->chgBit(oldp+462,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
            tracep->chgQData(oldp+463,(((((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U))) 
                                        | vlSelf->top__DOT__csrdata_ls)),64);
            tracep->chgQData(oldp+465,(((~ (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                << 0x1eU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                  >> 2U)))) 
                                        & vlSelf->top__DOT__csrdata_ls)),64);
            tracep->chgQData(oldp+467,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
            tracep->chgQData(oldp+469,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
            tracep->chgQData(oldp+471,(((0x1cU == (0x1fU 
                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                      >> 4U)))
                                         ? 0xbULL : 0ULL)),64);
            tracep->chgQData(oldp+473,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
            tracep->chgCData(oldp+475,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
            tracep->chgCData(oldp+476,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
            tracep->chgCData(oldp+477,((0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                 << 1U))),6);
            tracep->chgWData(oldp+478,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
            tracep->chgWData(oldp+488,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [2U] | vlSelf->__Vm_traceActivity
                         [3U]))) {
            tracep->chgQData(oldp+498,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs2_idx_id])),64);
            tracep->chgQData(oldp+500,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
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
            tracep->chgWData(oldp+502,(__Vtemp157),315);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgQData(oldp+512,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
            tracep->chgQData(oldp+514,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
            tracep->chgQData(oldp+516,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
            tracep->chgQData(oldp+518,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
            tracep->chgQData(oldp+520,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
            tracep->chgQData(oldp+522,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
            tracep->chgQData(oldp+524,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
            tracep->chgQData(oldp+526,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
            tracep->chgQData(oldp+528,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
            tracep->chgQData(oldp+530,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
            tracep->chgQData(oldp+532,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
            tracep->chgQData(oldp+534,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
            tracep->chgQData(oldp+536,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
            tracep->chgQData(oldp+538,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
            tracep->chgQData(oldp+540,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
            tracep->chgQData(oldp+542,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
            tracep->chgQData(oldp+544,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
            tracep->chgQData(oldp+546,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
            tracep->chgQData(oldp+548,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
            tracep->chgQData(oldp+550,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
            tracep->chgQData(oldp+552,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
            tracep->chgQData(oldp+554,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
            tracep->chgQData(oldp+556,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
            tracep->chgQData(oldp+558,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
            tracep->chgQData(oldp+560,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
            tracep->chgQData(oldp+562,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
            tracep->chgQData(oldp+564,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
            tracep->chgQData(oldp+566,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
            tracep->chgQData(oldp+568,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
            tracep->chgQData(oldp+570,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
            tracep->chgQData(oldp+572,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
            tracep->chgQData(oldp+574,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+576,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
            tracep->chgCData(oldp+577,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                         ? 0U : (3U 
                                                 & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_resp)))),2);
            tracep->chgQData(oldp+578,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                         ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
            tracep->chgBit(oldp+580,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last)))));
            tracep->chgCData(oldp+581,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
            tracep->chgBit(oldp+582,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                       : 0U)));
            tracep->chgCData(oldp+583,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                         ? (3U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_resp))
                                         : 0U)),2);
            tracep->chgQData(oldp+584,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                         ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data
                                         : 0ULL)),64);
            tracep->chgBit(oldp+586,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last))
                                       : 0U)));
            tracep->chgBit(oldp+587,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
            tracep->chgBit(oldp+588,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
            tracep->chgCData(oldp+589,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_resp),2);
            tracep->chgQData(oldp+590,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
            tracep->chgBit(oldp+592,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        }
        tracep->chgBit(oldp+593,(vlSelf->clk));
        tracep->chgBit(oldp+594,(vlSelf->rst_n));
        tracep->chgQData(oldp+595,(vlSelf->pc_diff),64);
        tracep->chgQData(oldp+597,(vlSelf->pc_decoding),64);
        tracep->chgIData(oldp+599,(vlSelf->instr_diff),32);
        tracep->chgQData(oldp+600,(vlSelf->regA0),64);
        tracep->chgBit(oldp+602,(vlSelf->stall_n_diff));
        tracep->chgBit(oldp+603,(vlSelf->axi_ar_ready_i));
        tracep->chgBit(oldp+604,(vlSelf->axi_ar_valid_o));
        tracep->chgQData(oldp+605,(vlSelf->axi_ar_addr_o),64);
        tracep->chgCData(oldp+607,(vlSelf->axi_ar_prot_o),3);
        tracep->chgCData(oldp+608,(vlSelf->axi_ar_id_o),4);
        tracep->chgBit(oldp+609,(vlSelf->axi_ar_user_o));
        tracep->chgCData(oldp+610,(vlSelf->axi_ar_len_o),8);
        tracep->chgCData(oldp+611,(vlSelf->axi_ar_size_o),3);
        tracep->chgCData(oldp+612,(vlSelf->axi_ar_burst_o),2);
        tracep->chgBit(oldp+613,(vlSelf->axi_ar_lock_o));
        tracep->chgCData(oldp+614,(vlSelf->axi_ar_cache_o),4);
        tracep->chgCData(oldp+615,(vlSelf->axi_ar_qos_o),4);
        tracep->chgCData(oldp+616,(vlSelf->axi_ar_region_o),4);
        tracep->chgBit(oldp+617,(vlSelf->axi_r_ready_o));
        tracep->chgBit(oldp+618,(vlSelf->axi_r_valid_i));
        tracep->chgCData(oldp+619,(vlSelf->axi_r_resp_i),2);
        tracep->chgQData(oldp+620,(vlSelf->axi_r_data_i),64);
        tracep->chgBit(oldp+622,(vlSelf->axi_r_last_i));
        tracep->chgCData(oldp+623,(vlSelf->axi_r_id_i),4);
        tracep->chgBit(oldp+624,(vlSelf->axi_r_user_i));
        tracep->chgBit(oldp+625,(vlSelf->axi_aw_ready_i));
        tracep->chgBit(oldp+626,(vlSelf->axi_aw_valid_o));
        tracep->chgQData(oldp+627,(vlSelf->axi_aw_addr_o),64);
        tracep->chgCData(oldp+629,(vlSelf->axi_aw_prot_o),3);
        tracep->chgCData(oldp+630,(vlSelf->axi_aw_id_o),4);
        tracep->chgBit(oldp+631,(vlSelf->axi_aw_user_o));
        tracep->chgCData(oldp+632,(vlSelf->axi_aw_len_o),8);
        tracep->chgCData(oldp+633,(vlSelf->axi_aw_size_o),3);
        tracep->chgCData(oldp+634,(vlSelf->axi_aw_burst_o),2);
        tracep->chgBit(oldp+635,(vlSelf->axi_aw_lock_o));
        tracep->chgCData(oldp+636,(vlSelf->axi_aw_cache_o),4);
        tracep->chgCData(oldp+637,(vlSelf->axi_aw_qos_o),4);
        tracep->chgCData(oldp+638,(vlSelf->axi_aw_region_o),4);
        tracep->chgBit(oldp+639,(vlSelf->axi_w_ready_i));
        tracep->chgBit(oldp+640,(vlSelf->axi_w_valid_o));
        tracep->chgQData(oldp+641,(vlSelf->axi_w_data_o),64);
        tracep->chgCData(oldp+643,(vlSelf->axi_w_strb_o),8);
        tracep->chgBit(oldp+644,(vlSelf->axi_w_last_o));
        tracep->chgBit(oldp+645,(vlSelf->axi_w_user_o));
        tracep->chgBit(oldp+646,(vlSelf->axi_b_ready_o));
        tracep->chgBit(oldp+647,(vlSelf->axi_b_valid_i));
        tracep->chgCData(oldp+648,(vlSelf->axi_b_resp_i),2);
        tracep->chgCData(oldp+649,(vlSelf->axi_b_id_i),4);
        tracep->chgBit(oldp+650,(vlSelf->axi_b_user_i));
        tracep->chgBit(oldp+651,(vlSelf->axi_mmio_ar_ready_i));
        tracep->chgBit(oldp+652,(vlSelf->axi_mmio_ar_valid_o));
        tracep->chgQData(oldp+653,(vlSelf->axi_mmio_ar_addr_o),64);
        tracep->chgCData(oldp+655,(vlSelf->axi_mmio_ar_prot_o),3);
        tracep->chgCData(oldp+656,(vlSelf->axi_mmio_ar_id_o),4);
        tracep->chgBit(oldp+657,(vlSelf->axi_mmio_ar_user_o));
        tracep->chgCData(oldp+658,(vlSelf->axi_mmio_ar_len_o),8);
        tracep->chgCData(oldp+659,(vlSelf->axi_mmio_ar_size_o),3);
        tracep->chgCData(oldp+660,(vlSelf->axi_mmio_ar_burst_o),2);
        tracep->chgBit(oldp+661,(vlSelf->axi_mmio_ar_lock_o));
        tracep->chgCData(oldp+662,(vlSelf->axi_mmio_ar_cache_o),4);
        tracep->chgCData(oldp+663,(vlSelf->axi_mmio_ar_qos_o),4);
        tracep->chgCData(oldp+664,(vlSelf->axi_mmio_ar_region_o),4);
        tracep->chgBit(oldp+665,(vlSelf->axi_mmio_r_ready_o));
        tracep->chgBit(oldp+666,(vlSelf->axi_mmio_r_valid_i));
        tracep->chgCData(oldp+667,(vlSelf->axi_mmio_r_resp_i),2);
        tracep->chgQData(oldp+668,(vlSelf->axi_mmio_r_data_i),64);
        tracep->chgBit(oldp+670,(vlSelf->axi_mmio_r_last_i));
        tracep->chgCData(oldp+671,(vlSelf->axi_mmio_r_id_i),4);
        tracep->chgBit(oldp+672,(vlSelf->axi_mmio_r_user_i));
        tracep->chgBit(oldp+673,(vlSelf->axi_mmio_aw_ready_i));
        tracep->chgBit(oldp+674,(vlSelf->axi_mmio_aw_valid_o));
        tracep->chgQData(oldp+675,(vlSelf->axi_mmio_aw_addr_o),64);
        tracep->chgCData(oldp+677,(vlSelf->axi_mmio_aw_prot_o),3);
        tracep->chgCData(oldp+678,(vlSelf->axi_mmio_aw_id_o),4);
        tracep->chgBit(oldp+679,(vlSelf->axi_mmio_aw_user_o));
        tracep->chgCData(oldp+680,(vlSelf->axi_mmio_aw_len_o),8);
        tracep->chgCData(oldp+681,(vlSelf->axi_mmio_aw_size_o),3);
        tracep->chgCData(oldp+682,(vlSelf->axi_mmio_aw_burst_o),2);
        tracep->chgBit(oldp+683,(vlSelf->axi_mmio_aw_lock_o));
        tracep->chgCData(oldp+684,(vlSelf->axi_mmio_aw_cache_o),4);
        tracep->chgCData(oldp+685,(vlSelf->axi_mmio_aw_qos_o),4);
        tracep->chgCData(oldp+686,(vlSelf->axi_mmio_aw_region_o),4);
        tracep->chgBit(oldp+687,(vlSelf->axi_mmio_w_ready_i));
        tracep->chgBit(oldp+688,(vlSelf->axi_mmio_w_valid_o));
        tracep->chgQData(oldp+689,(vlSelf->axi_mmio_w_data_o),64);
        tracep->chgCData(oldp+691,(vlSelf->axi_mmio_w_strb_o),8);
        tracep->chgBit(oldp+692,(vlSelf->axi_mmio_w_last_o));
        tracep->chgBit(oldp+693,(vlSelf->axi_mmio_w_user_o));
        tracep->chgBit(oldp+694,(vlSelf->axi_mmio_b_ready_o));
        tracep->chgBit(oldp+695,(vlSelf->axi_mmio_b_valid_i));
        tracep->chgCData(oldp+696,(vlSelf->axi_mmio_b_resp_i),2);
        tracep->chgCData(oldp+697,(vlSelf->axi_mmio_b_id_i),4);
        tracep->chgBit(oldp+698,(vlSelf->axi_mmio_b_user_i));
        tracep->chgBit(oldp+699,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                   ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->chgBit(oldp+700,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                 >> 0x1dU)))
                                   ? (IData)(vlSelf->axi_mmio_aw_ready_i)
                                   : (IData)(vlSelf->axi_aw_ready_i))));
        tracep->chgBit(oldp+701,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                 >> 0x1dU)))
                                   ? (IData)(vlSelf->axi_mmio_w_ready_i)
                                   : (IData)(vlSelf->axi_w_ready_i))));
        tracep->chgBit(oldp+702,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                 >> 0x1dU)))
                                   ? (IData)(vlSelf->axi_mmio_b_valid_i)
                                   : (IData)(vlSelf->axi_b_valid_i))));
        tracep->chgCData(oldp+703,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                   >> 0x1dU)))
                                     ? (IData)(vlSelf->axi_mmio_b_resp_i)
                                     : (IData)(vlSelf->axi_b_resp_i))),2);
        tracep->chgCData(oldp+704,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                   >> 0x1dU)))
                                     ? (IData)(vlSelf->axi_mmio_b_id_i)
                                     : (IData)(vlSelf->axi_b_id_i))),4);
        tracep->chgBit(oldp+705,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                 >> 0x1dU)))
                                   ? (IData)(vlSelf->axi_mmio_b_user_i)
                                   : (IData)(vlSelf->axi_b_user_i))));
        tracep->chgBit(oldp+706,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                   ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                   : 0U)));
        tracep->chgBit(oldp+707,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
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
