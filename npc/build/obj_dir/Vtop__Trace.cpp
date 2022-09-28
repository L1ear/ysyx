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
    VlWide<3>/*95:0*/ __Vtemp60;
    VlWide<3>/*95:0*/ __Vtemp62;
    VlWide<3>/*95:0*/ __Vtemp63;
    VlWide<3>/*95:0*/ __Vtemp64;
    VlWide<3>/*95:0*/ __Vtemp65;
    VlWide<3>/*95:0*/ __Vtemp66;
    VlWide<3>/*95:0*/ __Vtemp69;
    VlWide<3>/*95:0*/ __Vtemp70;
    VlWide<3>/*95:0*/ __Vtemp71;
    VlWide<3>/*95:0*/ __Vtemp72;
    VlWide<3>/*95:0*/ __Vtemp73;
    VlWide<10>/*319:0*/ __Vtemp79;
    VlWide<10>/*319:0*/ __Vtemp80;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
            tracep->chgBit(oldp+6,(vlSelf->top__DOT__trap_ls));
            tracep->chgQData(oldp+7,(vlSelf->top__DOT__pc_wb),64);
            tracep->chgQData(oldp+9,(vlSelf->top__DOT__alures_wb),64);
            tracep->chgQData(oldp+11,(vlSelf->top__DOT__csrdata_wb),64);
            tracep->chgBit(oldp+13,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
            tracep->chgCData(oldp+14,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
            tracep->chgQData(oldp+15,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
            tracep->chgQData(oldp+17,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+19,(vlSelf->top__DOT__pc_new),64);
            tracep->chgBit(oldp+21,(vlSelf->top__DOT__is_jump));
            tracep->chgQData(oldp+22,(((0x200000U & 
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
            tracep->chgBit(oldp+24,((1U & (~ (IData)(vlSelf->top__DOT__hazard_detect_u__DOT__hazard)))));
            tracep->chgIData(oldp+25,((IData)(vlSelf->top__DOT__IF_u__DOT__rdata)),32);
            tracep->chgQData(oldp+26,((((QData)((IData)(
                                                        vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
            tracep->chgIData(oldp+28,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
            tracep->chgQData(oldp+29,(vlSelf->top__DOT__ID_u__DOT__imm),64);
            tracep->chgBit(oldp+31,(vlSelf->top__DOT__src1sel_id));
            tracep->chgCData(oldp+32,(vlSelf->top__DOT__src2sel_id),2);
            tracep->chgCData(oldp+33,(vlSelf->top__DOT__aluctr_id),5);
            tracep->chgBit(oldp+34,(vlSelf->top__DOT__is_brc_id));
            tracep->chgBit(oldp+35,(vlSelf->top__DOT__is_jal_id));
            tracep->chgBit(oldp+36,(vlSelf->top__DOT__is_jalr_id));
            tracep->chgBit(oldp+37,(vlSelf->top__DOT__wben_id));
            tracep->chgCData(oldp+38,(vlSelf->top__DOT__rs1_idx_id),5);
            tracep->chgCData(oldp+39,(vlSelf->top__DOT__rs2_idx_id),5);
            tracep->chgBit(oldp+40,(vlSelf->top__DOT__DivEn_id));
            tracep->chgCData(oldp+41,(vlSelf->top__DOT__DivSel_id),3);
            tracep->chgBit(oldp+42,(vlSelf->top__DOT__in_trap_id));
            tracep->chgBit(oldp+43,(vlSelf->top__DOT__out_trap_id));
            tracep->chgBit(oldp+44,(vlSelf->top__DOT__trap_id));
            tracep->chgQData(oldp+45,((((QData)((IData)(
                                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[9U])) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[8U])) 
                                         << 5U) | ((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])) 
                                                   >> 0x1bU)))),64);
            tracep->chgIData(oldp+47,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                        << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                                  >> 0x1bU))),32);
            tracep->chgQData(oldp+48,(((0x4000000U 
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
            tracep->chgBit(oldp+50,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0x12U))));
            tracep->chgCData(oldp+51,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                             >> 0x10U))),2);
            tracep->chgQData(oldp+52,((((QData)((IData)(
                                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[6U])) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[5U])) 
                                         << 5U) | ((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[4U])) 
                                                   >> 0x1bU)))),64);
            tracep->chgQData(oldp+54,((((QData)((IData)(
                                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[4U])) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[3U])) 
                                         << 5U) | ((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   >> 0x1bU)))),64);
            tracep->chgQData(oldp+56,((((QData)((IData)(
                                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                         << 5U) | ((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                                   >> 0x1bU)))),64);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
            tracep->chgCData(oldp+60,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                >> 0x16U))),5);
            tracep->chgBit(oldp+61,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0x13U))));
            tracep->chgBit(oldp+62,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0x14U))));
            tracep->chgBit(oldp+63,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0x15U))));
            tracep->chgBit(oldp+64,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0xfU))));
            tracep->chgBit(oldp+65,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 4U))));
            tracep->chgCData(oldp+66,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                             >> 1U))),3);
            tracep->chgBit(oldp+67,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])));
            tracep->chgCData(oldp+68,(vlSelf->top__DOT__rs1_sel),2);
            tracep->chgCData(oldp+69,(vlSelf->top__DOT__rs2_sel),2);
            tracep->chgCData(oldp+70,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                >> 0xaU))),5);
            tracep->chgCData(oldp+71,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                >> 5U))),5);
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__pc_ls),64);
            tracep->chgQData(oldp+74,(vlSelf->top__DOT__rs2_ls),64);
            tracep->chgQData(oldp+76,(vlSelf->top__DOT__alures_ls),64);
            tracep->chgIData(oldp+78,(vlSelf->top__DOT__instr_ls),32);
            tracep->chgBit(oldp+79,(vlSelf->top__DOT__wben_ls));
            tracep->chgQData(oldp+80,(vlSelf->top__DOT__csrdata_ls),64);
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__lsres_wb),64);
            tracep->chgIData(oldp+84,(vlSelf->top__DOT__instr_wb),32);
            tracep->chgQData(oldp+85,(vlSelf->top__DOT__wb_data),64);
            tracep->chgCData(oldp+87,((0x1fU & (vlSelf->top__DOT__instr_wb 
                                                >> 7U))),5);
            tracep->chgBit(oldp+88,(vlSelf->top__DOT__wben_wb));
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__IF_u__DOT__rdata),64);
            tracep->chgQData(oldp+91,(((((IData)(vlSelf->top__DOT__is_jump) 
                                         | (IData)(vlSelf->top__DOT__in_trap_id)) 
                                        | (IData)(vlSelf->top__DOT__out_trap_id))
                                        ? 0ULL : vlSelf->top__DOT__pc_new)),64);
            tracep->chgIData(oldp+93,(((((IData)(vlSelf->top__DOT__is_jump) 
                                         | (IData)(vlSelf->top__DOT__in_trap_id)) 
                                        | (IData)(vlSelf->top__DOT__out_trap_id))
                                        ? 0U : (IData)(vlSelf->top__DOT__IF_u__DOT__rdata))),32);
            __Vtemp60[0U] = ((((IData)(vlSelf->top__DOT__is_jump) 
                               | (IData)(vlSelf->top__DOT__in_trap_id)) 
                              | (IData)(vlSelf->top__DOT__out_trap_id))
                              ? 0U : (IData)(vlSelf->top__DOT__IF_u__DOT__rdata));
            __Vtemp60[1U] = (IData)(((((IData)(vlSelf->top__DOT__is_jump) 
                                       | (IData)(vlSelf->top__DOT__in_trap_id)) 
                                      | (IData)(vlSelf->top__DOT__out_trap_id))
                                      ? 0ULL : vlSelf->top__DOT__pc_new));
            __Vtemp60[2U] = (IData)((((((IData)(vlSelf->top__DOT__is_jump) 
                                        | (IData)(vlSelf->top__DOT__in_trap_id)) 
                                       | (IData)(vlSelf->top__DOT__out_trap_id))
                                       ? 0ULL : vlSelf->top__DOT__pc_new) 
                                     >> 0x20U));
            tracep->chgWData(oldp+94,(__Vtemp60),96);
            tracep->chgWData(oldp+97,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
            tracep->chgCData(oldp+100,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
            tracep->chgCData(oldp+101,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                 >> 2U))),5);
            tracep->chgCData(oldp+102,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+103,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 0x19U)),7);
            tracep->chgIData(oldp+104,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 7U)),25);
            tracep->chgBit(oldp+105,(vlSelf->top__DOT__hazard_detect_u__DOT__hazard));
            tracep->chgQData(oldp+106,(((IData)(vlSelf->top__DOT__is_jump)
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
            tracep->chgIData(oldp+108,(((IData)(vlSelf->top__DOT__is_jump)
                                         ? 0x20U : 
                                        vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
            tracep->chgBit(oldp+109,(((~ (IData)(vlSelf->top__DOT__is_jump)) 
                                      & (IData)(vlSelf->top__DOT__is_jalr_id))));
            tracep->chgBit(oldp+110,(((~ (IData)(vlSelf->top__DOT__is_jump)) 
                                      & (IData)(vlSelf->top__DOT__is_jal_id))));
            tracep->chgBit(oldp+111,(((~ (IData)(vlSelf->top__DOT__is_jump)) 
                                      & (IData)(vlSelf->top__DOT__is_brc_id))));
            tracep->chgBit(oldp+112,(((~ (IData)(vlSelf->top__DOT__is_jump)) 
                                      & (IData)(vlSelf->top__DOT__wben_id))));
            tracep->chgBit(oldp+113,(((~ (IData)(vlSelf->top__DOT__is_jump)) 
                                      & (IData)(vlSelf->top__DOT__trap_id))));
            tracep->chgWData(oldp+114,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout),319);
            tracep->chgQData(oldp+124,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
            tracep->chgQData(oldp+126,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
            tracep->chgQData(oldp+128,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
            VL_EXTEND_WQ(65,64, __Vtemp62, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp63, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp64, __Vtemp62, __Vtemp63);
            VL_EXTEND_WI(65,1, __Vtemp65, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp66, __Vtemp64, __Vtemp65);
            tracep->chgBit(oldp+130,((1U & ((0x2000000U 
                                             & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                             ? ((1U 
                                                 & __Vtemp66[2U]) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                             : ((IData)(
                                                        (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                         >> 0x3fU)) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
            tracep->chgBit(oldp+131,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
            tracep->chgQData(oldp+132,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
            tracep->chgBit(oldp+134,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            tracep->chgQData(oldp+135,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
            tracep->chgQData(oldp+137,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
            tracep->chgBit(oldp+139,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+140,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
           