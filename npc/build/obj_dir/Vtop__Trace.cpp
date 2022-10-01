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
    VlWide<3>/*95:0*/ __Vtemp79;
    VlWide<3>/*95:0*/ __Vtemp81;
    VlWide<3>/*95:0*/ __Vtemp82;
    VlWide<3>/*95:0*/ __Vtemp83;
    VlWide<3>/*95:0*/ __Vtemp84;
    VlWide<3>/*95:0*/ __Vtemp85;
    VlWide<3>/*95:0*/ __Vtemp88;
    VlWide<3>/*95:0*/ __Vtemp89;
    VlWide<3>/*95:0*/ __Vtemp90;
    VlWide<3>/*95:0*/ __Vtemp91;
    VlWide<3>/*95:0*/ __Vtemp92;
    VlWide<8>/*255:0*/ __Vtemp97;
    VlWide<10>/*319:0*/ __Vtemp102;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
            tracep->chgBit(oldp+6,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
            tracep->chgCData(oldp+7,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
            tracep->chgQData(oldp+8,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
            tracep->chgQData(oldp+10,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+12,(vlSelf->top__DOT__pc_new),64);
            tracep->chgBit(oldp+14,(vlSelf->top__DOT__is_jump));
            tracep->chgQData(oldp+15,(((0x200000U & 
                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                        ? (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                           + (((QData)((IData)(
                                                               vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                               << 0x25U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                                  << 5U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                                    >> 0x1bU))))
                                        : ((((QData)((IData)(
                                                             vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[9U])) 
                                             << 0x25U) 
                                            | (((QData)((IData)(
                                                                vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[8U])) 
                                                << 5U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])) 
                                                  >> 0x1bU))) 
                                           + (((QData)((IData)(
                                                               vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                               << 0x25U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                                  << 5U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                                    >> 0x1bU)))))),64);
            tracep->chgBit(oldp+17,((1U & (~ (IData)(vlSelf->top__DOT__ld_use_hazard)))));
            tracep->chgIData(oldp+18,((IData)(vlSelf->top__DOT__IF_u__DOT__rdata)),32);
            tracep->chgQData(oldp+19,((((QData)((IData)(
                                                        vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
            tracep->chgIData(oldp+21,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
            tracep->chgQData(oldp+22,(vlSelf->top__DOT__ID_u__DOT__imm),64);
            tracep->chgBit(oldp+24,(vlSelf->top__DOT__src1sel_id));
            tracep->chgCData(oldp+25,(vlSelf->top__DOT__src2sel_id),2);
            tracep->chgCData(oldp+26,(vlSelf->top__DOT__aluctr_id),5);
            tracep->chgBit(oldp+27,(vlSelf->top__DOT__is_brc_id));
            tracep->chgBit(oldp+28,(vlSelf->top__DOT__is_jal_id));
            tracep->chgBit(oldp+29,(vlSelf->top__DOT__is_jalr_id));
            tracep->chgBit(oldp+30,(vlSelf->top__DOT__wben_id));
            tracep->chgCData(oldp+31,(vlSelf->top__DOT__rs1_idx_id),5);
            tracep->chgCData(oldp+32,(vlSelf->top__DOT__rs2_idx_id),5);
            tracep->chgBit(oldp+33,(vlSelf->top__DOT__DivEn_id));
            tracep->chgCData(oldp+34,(vlSelf->top__DOT__DivSel_id),3);
            tracep->chgBit(oldp+35,(vlSelf->top__DOT__in_trap_id));
            tracep->chgBit(oldp+36,(vlSelf->top__DOT__out_trap_id));
            tracep->chgBit(oldp+37,(vlSelf->top__DOT__trap_id));
            tracep->chgBit(oldp+38,(vlSelf->top__DOT__ld_use_hazard));
            tracep->chgBit(oldp+39,(vlSelf->top__DOT__id_flush));
            tracep->chgQData(oldp+40,((((QData)((IData)(
                                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[9U])) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[8U])) 
                                         << 5U) | ((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])) 
                                                   >> 0x1bU)))),64);
            tracep->chgIData(oldp+42,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                        << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                                  >> 0x1bU))),32);
            tracep->chgQData(oldp+43,(((0x4000000U 
                                        & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                        ? (((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                        : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)),64);
            tracep->chgBit(oldp+45,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0x12U))));
            tracep->chgCData(oldp+46,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                             >> 0x10U))),2);
            tracep->chgQData(oldp+47,((((QData)((IData)(
                                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[6U])) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[5U])) 
                                         << 5U) | ((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[4U])) 
                                                   >> 0x1bU)))),64);
            tracep->chgQData(oldp+49,((((QData)((IData)(
                                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[4U])) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[3U])) 
                                         << 5U) | ((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   >> 0x1bU)))),64);
            tracep->chgQData(oldp+51,((((QData)((IData)(
                                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                         << 5U) | ((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                                   >> 0x1bU)))),64);
            tracep->chgQData(oldp+53,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
            tracep->chgCData(oldp+55,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                >> 0x16U))),5);
            tracep->chgBit(oldp+56,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0x13U))));
            tracep->chgBit(oldp+57,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0x14U))));
            tracep->chgBit(oldp+58,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0x15U))));
            tracep->chgBit(oldp+59,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xfU))));
            tracep->chgBit(oldp+60,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 4U))));
            tracep->chgCData(oldp+61,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                             >> 1U))),3);
            tracep->chgBit(oldp+62,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])));
            tracep->chgCData(oldp+63,(vlSelf->top__DOT__rs1_sel),2);
            tracep->chgCData(oldp+64,(vlSelf->top__DOT__rs2_sel),2);
            tracep->chgCData(oldp+65,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                >> 0xaU))),5);
            tracep->chgCData(oldp+66,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                >> 5U))),5);
            tracep->chgBit(oldp+67,(vlSelf->top__DOT__ex_flush));
            tracep->chgQData(oldp+68,((((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[7U])) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[6U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[5U])) 
                                           >> 2U)))),64);
            tracep->chgQData(oldp+70,((((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U])) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[3U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                           >> 2U)))),64);
            tracep->chgQData(oldp+72,((((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                           >> 2U)))),64);
            tracep->chgIData(oldp+74,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[5U] 
                                        << 0x1eU) | 
                                       (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                        >> 2U))),32);
            tracep->chgBit(oldp+75,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 1U))));
            tracep->chgQData(oldp+76,(vlSelf->top__DOT__csrdata_ls),64);
            tracep->chgBit(oldp+78,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[0U])));
            tracep->chgQData(oldp+79,((((QData)((IData)(
                                                        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[9U])) 
                                        << 0x3fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[8U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[7U])) 
                                           >> 1U)))),64);
            tracep->chgQData(oldp+81,((((QData)((IData)(
                                                        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[6U])) 
                                        << 0x3fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[5U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[4U])) 
                                           >> 1U)))),64);
            tracep->chgQData(oldp+83,((((QData)((IData)(
                                                        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[4U])) 
                                        << 0x3fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[3U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                           >> 1U)))),64);
            tracep->chgIData(oldp+85,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                        << 0x1fU) | 
                                       (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                        >> 1U))),32);
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__wb_data),64);
            tracep->chgCData(oldp+88,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                                >> 8U))),5);
            tracep->chgBit(oldp+89,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[2U])));
            tracep->chgQData(oldp+90,((((QData)((IData)(
                                                        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[0U])))),64);
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__IF_u__DOT__rdata),64);
            tracep->chgQData(oldp+94,(((IData)(vlSelf->top__DOT__id_flush)
                                        ? 0ULL : vlSelf->top__DOT__pc_new)),64);
            tracep->chgIData(oldp+96,(((IData)(vlSelf->top__DOT__id_flush)
                                        ? 0U : (IData)(vlSelf->top__DOT__IF_u__DOT__rdata))),32);
            __Vtemp79[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                              ? 0U : (IData)(vlSelf->top__DOT__IF_u__DOT__rdata));
            __Vtemp79[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new));
            __Vtemp79[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                       ? 0ULL : vlSelf->top__DOT__pc_new) 
                                     >> 0x20U));
            tracep->chgWData(oldp+97,(__Vtemp79),96);
            tracep->chgWData(oldp+100,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
            tracep->chgCData(oldp+103,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
            tracep->chgCData(oldp+104,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                 >> 2U))),5);
            tracep->chgCData(oldp+105,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+106,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 0x19U)),7);
            tracep->chgIData(oldp+107,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 7U)),25);
            tracep->chgQData(oldp+108,(((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
            tracep->chgIData(oldp+110,(((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
            tracep->chgBit(oldp+111,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__is_jalr_id))));
            tracep->chgBit(oldp+112,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__is_jal_id))));
            tracep->chgBit(oldp+113,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__is_brc_id))));
            tracep->chgBit(oldp+114,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__wben_id))));
            tracep->chgBit(oldp+115,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__trap_id))));
            tracep->chgWData(oldp+116,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout),315);
            tracep->chgQData(oldp+126,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
            tracep->chgQData(oldp+128,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
            tracep->chgQData(oldp+130,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
            VL_EXTEND_WQ(65,64, __Vtemp81, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp82, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp83, __Vtemp81, __Vtemp82);
            VL_EXTEND_WI(65,1, __Vtemp84, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp85, __Vtemp83, __Vtemp84);
            tracep->chgBit(oldp+132,((1U & ((0x2000000U 
                                             & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                             ? ((1U 
                                                 & __Vtemp85[2U]) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                             : ((IData)(
                                                        (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                         >> 0x3fU)) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
            tracep->chgBit(oldp+133,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
            tracep->chgQData(oldp+134,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
            tracep->chgBit(oldp+136,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            tracep->chgQData(oldp+137,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
            tracep->chgQData(oldp+139,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
            tracep->chgBit(oldp+141,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+142,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+143,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 0x16U))),3);
            tracep->chgQData(oldp+144,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
            VL_EXTEND_WQ(65,64, __Vtemp88, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp89, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp90, __Vtemp88, __Vtemp89);
            VL_EXTEND_WI(65,1, __Vtemp91, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp92, __Vtemp90, __Vtemp91);
            tracep->chgBit(oldp+146,((1U & __Vtemp92[2U])));
            tracep->chgBit(oldp+147,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
            tracep->chgQData(oldp+148,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+150,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+152,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+154,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                         ? ((4U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                             ? ((2U 
                                                 & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                 ? 
                                                VL_MODDIV_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                                 : 
                                                VL_MODDIVS_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2))
                                             : ((2U 
                                                 & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                 ? 
                                                VL_DIV_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                                 : 
                                                VL_DIVS_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)))
                                         : ((4U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                             ? ((2U 
                                                 & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                 ? 
                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                 * vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                                 : 
                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                 * vlSelf->top__DOT__ex_stage_u__DOT__src2))
                                             : ((2U 
                                                 & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                 ? 
                                                VL_MULS_QQQ(64,64,64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                                 : 
                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                 * vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
            tracep->chgCData(oldp+156,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                >> 0x16U))),4);
            tracep->chgBit(oldp+157,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+158,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
            tracep->chgQData(oldp+159,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
            tracep->chgQData(oldp+161,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
            tracep->chgQData(oldp+163,((0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
            tracep->chgQData(oldp+165,((~ (0xffffffffffffffffULL 
                                           >> (0x3fU 
                                               & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
            tracep->chgQData(oldp+167,(((0x4000000U 
                                         & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                         ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                            & (QData)((IData)(
                                                              ((0xffffffffffffffffULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                               >> 0x20U))))
                                         : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
            tracep->chgQData(oldp+169,(((0x4000000U 
                                         & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
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
            tracep->chgQData(oldp+171,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
            tracep->chgCData(oldp+173,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                              >> 7U))),3);
            tracep->chgQData(oldp+174,(((((QData)((IData)(
                                                          vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[9U])) 
                                          << 0x25U) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[8U])) 
                                             << 5U) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])) 
                                               >> 0x1bU))) 
                                        + (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                            << 0x25U) 
                                           | (((QData)((IData)(
                                                               vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                                 >> 0x1bU))))),64);
            tracep->chgQData(oldp+176,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                        + (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                            << 0x25U) 
                                           | (((QData)((IData)(
                                                               vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                                 >> 0x1bU))))),64);
            tracep->chgBit(oldp+178,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
            tracep->chgBit(oldp+179,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
            tracep->chgBit(oldp+180,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
            tracep->chgQData(oldp+181,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
            tracep->chgQData(oldp+183,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
            tracep->chgBit(oldp+185,((1U & ((0x200U 
                                             & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])
                                             ? ((0x100U 
                                                 & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])
                                                 ? 
                                                ((0x80U 
                                                  & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])
                                                  ? (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)
                                                  : 
                                                 (~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)))
                                                 : 
                                                ((0x80U 
                                                  & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])
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
                                                 (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                                  >> 8U)) 
                                                & ((0x80U 
                                                    & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])
                                                    ? 
                                                   (0U 
                                                    != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres)
                                                    : 
                                                   (~ (IData)(
                                                              (0U 
                                                               != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres)))))))));
            tracep->chgCData(oldp+186,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                 >> 9U))),5);
            tracep->chgBit(oldp+187,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 1U) & ((0x1fU 
                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                      >> 9U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 9U))))));
            tracep->chgBit(oldp+188,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[2U] 
                                       & ((0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                            >> 8U)) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                 >> 0xaU)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+189,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 1U) & ((0x1fU 
                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                      >> 9U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 9U))))));
            tracep->chgBit(oldp+190,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[2U] 
                                       & ((0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                            >> 8U)) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                 >> 5U)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                                   >> 8U))))));
            __Vtemp97[0U] = (((IData)(((0x4000000U 
                                        & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                        ? (((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                        : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)) 
                              << 2U) | ((2U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                               >> 0xeU)) 
                                        | (1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])));
            __Vtemp97[1U] = (((IData)(((0x4000000U 
                                        & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
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
                                                      & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
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
            __Vtemp97[2U] = (((IData)((((0x4000000U 
                                         & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                         : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout) 
                                       >> 0x20U)) >> 0x1eU) 
                             | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                                << 2U));
            __Vtemp97[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                              >> 0x1eU) | ((IData)(
                                                   (vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                    >> 0x20U)) 
                                           << 2U));
            __Vtemp97[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                       >> 0x20U)) >> 0x1eU) 
                             | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                 << 7U) | (0x7cU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                            >> 0x19U))));
            __Vtemp97[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                    >> 0x19U)) | ((
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[8U] 
                                                   << 7U) 
                                                  | (0x7cU 
                                                     & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                                        >> 0x19U))));
            __Vtemp97[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[8U] 
                                    >> 0x19U)) | ((
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[9U] 
                                                   << 7U) 
                                                  | (0x7cU 
                                                     & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[8U] 
                                                        >> 0x19U))));
            __Vtemp97[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[9U] 
                                   >> 0x19U));
            tracep->chgWData(oldp+191,(__Vtemp97),226);
            tracep->chgWData(oldp+199,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout),226);
            tracep->chgBit(oldp+207,((8U == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 4U)))));
            tracep->chgBit(oldp+208,((3U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 2U)))));
            tracep->chgCData(oldp+209,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                              >> 0xeU))),3);
            tracep->chgQData(oldp+210,((((0U == (0x1fU 
                                                 & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                                    >> 3U))) 
                                         & ((0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 0x16U)) 
                                            == (0x1fU 
                                                & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                                   >> 8U))))
                                         ? (((QData)((IData)(
                                                             vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[4U])) 
                                             << 0x3fU) 
                                            | (((QData)((IData)(
                                                                vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[3U])) 
                                                << 0x1fU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                  >> 1U)))
                                         : (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U])) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[3U])) 
                                                << 0x1eU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                  >> 2U))))),64);
            tracep->chgBit(oldp+212,((8U == (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                                >> 3U)))));
            tracep->chgQData(oldp+213,((0xfffffffffffffff8ULL 
                                        & (((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                               << 0x1eU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                                 >> 2U))))),64);
            tracep->chgBit(oldp+215,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (0U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+216,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (4U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+217,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (1U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+218,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (5U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+219,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (2U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+220,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (6U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+221,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (3U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgCData(oldp+222,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
            tracep->chgBit(oldp+223,(((8U == (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                 >> 4U))) 
                                      & (0U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+224,(((8U == (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                 >> 4U))) 
                                      & (1U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+225,(((8U == (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                 >> 4U))) 
                                      & (2U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+226,(((8U == (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                 >> 4U))) 
                                      & (3U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+227,(((0U == (0x1fU 
                                              & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                                 >> 3U))) 
                                      & ((0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 0x16U)) 
                                         == (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                                >> 8U))))));
            tracep->chgBit(oldp+228,((1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 0xeU)))));
            tracep->chgBit(oldp+229,((2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 0xeU)))));
            tracep->chgBit(oldp+230,((3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 0xeU)))));
            tracep->chgBit(oldp+231,((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                   >> 4U)))));
            tracep->chgBit(oldp+232,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
            tracep->chgBit(oldp+233,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
            tracep->chgBit(oldp+234,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
            tracep->chgBit(oldp+235,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
            tracep->chgBit(oldp+236,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
            tracep->chgQData(oldp+237,(((((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                               >> 2U))) 
                                        | vlSelf->top__DOT__csrdata_ls)),64);
            tracep->chgQData(oldp+239,(((~ (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                                << 0x1eU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                                  >> 2U)))) 
                                        & vlSelf->top__DOT__csrdata_ls)),64);
            tracep->chgQData(oldp+241,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
            tracep->chgQData(oldp+243,(((0x1cU == (0x1fU 
                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                      >> 4U)))
                                         ? 0xbULL : 0ULL)),64);
            tracep->chgWData(oldp+245,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__id_reg__o_dout),289);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [2U] | vlSelf->__Vm_traceActivity
                         [4U]))) {
            tracep->chgQData(oldp+255,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs2_idx_id])),64);
            tracep->chgQData(oldp+257,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs1_idx_id])),64);
            __Vtemp102[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
            __Vtemp102[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                               >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                                  >> 0x20U)) 
                                         << 0x1bU));
            __Vtemp102[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                        >> 0x20U)) 
                               >> 5U) | ((IData)(((0U 
                                                   == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                                  [vlSelf->top__DOT__rs1_idx_id])) 
                                         << 0x1bU));
            __Vtemp102[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
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
            __Vtemp102[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
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
            __Vtemp102[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
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
            __Vtemp102[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                          ? 0ULL : 
                                         vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                         [vlSelf->top__DOT__rs2_idx_id]) 
                                        >> 0x20U)) 
                               >> 5U) | (((IData)(vlSelf->top__DOT__ex_flush)
                                           ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                                         << 0x1bU));
            __Vtemp102[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
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
            __Vtemp102[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
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
            __Vtemp102[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                       >> 0x20U)) >> 5U);
            tracep->chgWData(oldp+259,(__Vtemp102),315);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgCData(oldp+269,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
            tracep->chgSData(oldp+270,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
            tracep->chgIData(oldp+271,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
            tracep->chgWData(oldp+272,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__id_reg__i_din),289);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgQData(oldp+282,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
            tracep->chgQData(oldp+284,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
            tracep->chgQData(oldp+286,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
            tracep->chgQData(oldp+288,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
            tracep->chgQData(oldp+290,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
            tracep->chgQData(oldp+292,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
            tracep->chgQData(oldp+294,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
            tracep->chgQData(oldp+296,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
            tracep->chgQData(oldp+298,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
            tracep->chgQData(oldp+300,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
            tracep->chgQData(oldp+302,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
            tracep->chgQData(oldp+304,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
            tracep->chgQData(oldp+306,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
            tracep->chgQData(oldp+308,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
            tracep->chgQData(oldp+310,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
            tracep->chgQData(oldp+312,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
            tracep->chgQData(oldp+314,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
            tracep->chgQData(oldp+316,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
            tracep->chgQData(oldp+318,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
            tracep->chgQData(oldp+320,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
            tracep->chgQData(oldp+322,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
            tracep->chgQData(oldp+324,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
            tracep->chgQData(oldp+326,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
            tracep->chgQData(oldp+328,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
            tracep->chgQData(oldp+330,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
            tracep->chgQData(oldp+332,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
            tracep->chgQData(oldp+334,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
            tracep->chgQData(oldp+336,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
            tracep->chgQData(oldp+338,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
            tracep->chgQData(oldp+340,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
            tracep->chgQData(oldp+342,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
            tracep->chgQData(oldp+344,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        }
        tracep->chgBit(oldp+346,(vlSelf->clk));
        tracep->chgBit(oldp+347,(vlSelf->rst_n));
        tracep->chgQData(oldp+348,(vlSelf->pc_diff),64);
        tracep->chgQData(oldp+350,(vlSelf->pc_decoding),64);
        tracep->chgIData(oldp+352,(vlSelf->instr_diff),32);
        tracep->chgQData(oldp+353,(vlSelf->regA0),64);
        tracep->chgQData(oldp+355,(((IData)(vlSelf->top__DOT__is_jump)
                                     ? ((0x200000U 
                                         & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                         ? (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                            + (((QData)((IData)(
                                                                vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x25U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                                     >> 0x1bU))))
                                         : ((((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[9U])) 
                                              << 0x25U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[8U])) 
                                                 << 5U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])) 
                                                   >> 0x1bU))) 
                                            + (((QData)((IData)(
                                                                vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                << 0x25U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                                     >> 0x1bU)))))
                                     : ((IData)(vlSelf->top__DOT__in_trap_id)
                                         ? vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec
                                         : ((IData)(vlSelf->top__DOT__out_trap_id)
                                             ? vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc
                                             : (4ULL 
                                                + vlSelf->top__DOT__pc_new))))),64);
        tracep->chgQData(oldp+357,(((((((((- (QData)((IData)(
                                                             ((3U 
                                                               == 
                                                               (0x7fU 
                                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                                   >> 2U))) 
                                                              & (0U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
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
                                                                  & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                                     >> 2U))) 
                                                                & (4U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                                       >> 0xeU))))))) 
                                            & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b)))) 
                                        | ((- (QData)((IData)(
                                                              ((3U 
                                                                == 
                                                                (0x7fU 
                                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                                    >> 2U))) 
                                                               & (1U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
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
                                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                                   >> 2U))) 
                                                              & (5U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                                     >> 0xeU))))))) 
                                          & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h)))) 
                                      | ((- (QData)((IData)(
                                                            ((3U 
                                                              == 
                                                              (0x7fU 
                                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                                  >> 2U))) 
                                                             & (2U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
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
                                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                                 >> 2U))) 
                                                            & (6U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                                   >> 0xeU))))))) 
                                        & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w)))) 
                                    | ((- (QData)((IData)(
                                                          ((3U 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                                >> 2U))) 
                                                           & (3U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                                  >> 0xeU))))))) 
                                       & vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))),64);
        tracep->chgBit(oldp+359,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                   & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                   >> 0xaU)))) 
                                  & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->chgBit(oldp+360,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                   & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                   >> 5U)))) 
                                  & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->chgQData(oldp+361,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base),64);
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
