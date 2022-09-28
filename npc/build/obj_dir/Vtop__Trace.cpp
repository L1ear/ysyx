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
    VlWide<3>/*95:0*/ __Vtemp68;
    VlWide<3>/*95:0*/ __Vtemp70;
    VlWide<3>/*95:0*/ __Vtemp71;
    VlWide<3>/*95:0*/ __Vtemp72;
    VlWide<3>/*95:0*/ __Vtemp73;
    VlWide<3>/*95:0*/ __Vtemp74;
    VlWide<3>/*95:0*/ __Vtemp77;
    VlWide<3>/*95:0*/ __Vtemp78;
    VlWide<3>/*95:0*/ __Vtemp79;
    VlWide<3>/*95:0*/ __Vtemp80;
    VlWide<3>/*95:0*/ __Vtemp81;
    VlWide<8>/*255:0*/ __Vtemp86;
    VlWide<10>/*319:0*/ __Vtemp91;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__pc_wb),64);
            tracep->chgQData(oldp+8,(vlSelf->top__DOT__alures_wb),64);
            tracep->chgQData(oldp+10,(vlSelf->top__DOT__csrdata_wb),64);
            tracep->chgBit(oldp+12,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
            tracep->chgCData(oldp+13,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
            tracep->chgQData(oldp+16,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+18,(vlSelf->top__DOT__lsres_wb),64);
            tracep->chgIData(oldp+20,(vlSelf->top__DOT__instr_wb),32);
            tracep->chgQData(oldp+21,(vlSelf->top__DOT__wb_data),64);
            tracep->chgCData(oldp+23,((0x1fU & (vlSelf->top__DOT__instr_wb 
                                                >> 7U))),5);
            tracep->chgBit(oldp+24,(vlSelf->top__DOT__wben_wb));
            tracep->chgBit(oldp+25,((8U == (0x1fU & 
                                            (vlSelf->top__DOT__instr_wb 
                                             >> 2U)))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgQData(oldp+26,((((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[7U])) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[6U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[5U])) 
                                           >> 2U)))),64);
            tracep->chgQData(oldp+28,((((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U])) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[3U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                           >> 2U)))),64);
            tracep->chgQData(oldp+30,((((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                           >> 2U)))),64);
            tracep->chgIData(oldp+32,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[5U] 
                                        << 0x1eU) | 
                                       (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                        >> 2U))),32);
            tracep->chgBit(oldp+33,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 1U))));
            tracep->chgBit(oldp+34,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[0U])));
            tracep->chgCData(oldp+35,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 9U))),5);
            tracep->chgWData(oldp+36,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout),226);
            tracep->chgBit(oldp+44,((8U == (0x1fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                             >> 4U)))));
            tracep->chgBit(oldp+45,((3U == (0x7fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                             >> 2U)))));
            tracep->chgCData(oldp+46,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                             >> 0xeU))),3);
            tracep->chgQData(oldp+47,((0xfffffffffffffff8ULL 
                                       & (((QData)((IData)(
                                                           vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                           << 0x3eU) 
                                          | (((QData)((IData)(
                                                              vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                              << 0x1eU) 
                                             | ((QData)((IData)(
                                                                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                                >> 2U))))),64);
            tracep->chgBit(oldp+49,(((3U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 2U))) 
                                     & (0U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+50,(((3U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 2U))) 
                                     & (4U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+51,(((3U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 2U))) 
                                     & (1U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+52,(((3U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 2U))) 
                                     & (5U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+53,(((3U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 2U))) 
                                     & (2U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+54,(((3U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 2U))) 
                                     & (6U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+55,(((3U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 2U))) 
                                     & (3U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgCData(oldp+56,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
            tracep->chgBit(oldp+57,(((8U == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 4U))) 
                                     & (0U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+58,(((8U == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 4U))) 
                                     & (1U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+59,(((8U == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 4U))) 
                                     & (2U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+60,(((8U == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 4U))) 
                                     & (3U == (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                >> 0xeU))))));
            tracep->chgBit(oldp+61,((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                  >> 0xeU)))));
            tracep->chgBit(oldp+62,((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                  >> 0xeU)))));
            tracep->chgBit(oldp+63,((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                  >> 0xeU)))));
            tracep->chgBit(oldp+64,((0x1cU == (0x1fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                  >> 4U)))));
            tracep->chgBit(oldp+65,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
            tracep->chgBit(oldp+66,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
            tracep->chgBit(oldp+67,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
            tracep->chgBit(oldp+68,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
            tracep->chgBit(oldp+69,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
            tracep->chgQData(oldp+70,(((0x1cU == (0x1fU 
                                                  & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                     >> 4U)))
                                        ? 0xbULL : 0ULL)),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__pc_new),64);
            tracep->chgBit(oldp+74,((1U & (~ (IData)(vlSelf->top__DOT__hazard_detect_u__DOT__hazard)))));
            tracep->chgIData(oldp+75,((IData)(vlSelf->top__DOT__IF_u__DOT__rdata)),32);
            tracep->chgQData(oldp+76,((((QData)((IData)(
                                                        vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
            tracep->chgIData(oldp+78,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__ID_u__DOT__imm),64);
            tracep->chgBit(oldp+81,(vlSelf->top__DOT__src1sel_id));
            tracep->chgCData(oldp+82,(vlSelf->top__DOT__src2sel_id),2);
            tracep->chgCData(oldp+83,(vlSelf->top__DOT__aluctr_id),5);
            tracep->chgBit(oldp+84,(vlSelf->top__DOT__is_brc_id));
            tracep->chgBit(oldp+85,(vlSelf->top__DOT__is_jal_id));
            tracep->chgBit(oldp+86,(vlSelf->top__DOT__is_jalr_id));
            tracep->chgBit(oldp+87,(vlSelf->top__DOT__wben_id));
            tracep->chgCData(oldp+88,(vlSelf->top__DOT__rs1_idx_id),5);
            tracep->chgCData(oldp+89,(vlSelf->top__DOT__rs2_idx_id),5);
            tracep->chgBit(oldp+90,(vlSelf->top__DOT__DivEn_id));
            tracep->chgCData(oldp+91,(vlSelf->top__DOT__DivSel_id),3);
            tracep->chgBit(oldp+92,(vlSelf->top__DOT__in_trap_id));
            tracep->chgBit(oldp+93,(vlSelf->top__DOT__out_trap_id));
            tracep->chgBit(oldp+94,(vlSelf->top__DOT__trap_id));
            tracep->chgQData(oldp+95,((((QData)((IData)(
                                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[9U])) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[8U])) 
                                         << 5U) | ((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])) 
                                                   >> 0x1bU)))),64);
            tracep->chgIData(oldp+97,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                        << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                                  >> 0x1bU))),32);
            tracep->chgBit(oldp+98,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0x12U))));
            tracep->chgCData(oldp+99,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                             >> 0x10U))),2);
            tracep->chgQData(oldp+100,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[6U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[5U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[4U])) 
                                              >> 0x1bU)))),64);
            tracep->chgQData(oldp+102,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[4U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[3U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                              >> 0x1bU)))),64);
            tracep->chgQData(oldp+104,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                              >> 0x1bU)))),64);
            tracep->chgCData(oldp+106,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                 >> 0x16U))),5);
            tracep->chgBit(oldp+107,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+108,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+109,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+110,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+111,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                            >> 4U))));
            tracep->chgCData(oldp+112,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 1U))),3);
            tracep->chgBit(oldp+113,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])));
            tracep->chgCData(oldp+114,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                 >> 0xaU))),5);
            tracep->chgCData(oldp+115,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                 >> 5U))),5);
            tracep->chgBit(oldp+116,(vlSelf->top__DOT__hazard_detect_u__DOT__hazard));
            tracep->chgQData(oldp+117,(vlSelf->top__DOT__IF_u__DOT__rdata),64);
            tracep->chgWData(oldp+119,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
            tracep->chgCData(oldp+122,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
            tracep->chgCData(oldp+123,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                 >> 2U))),5);
            tracep->chgCData(oldp+124,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+125,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 0x19U)),7);
            tracep->chgIData(oldp+126,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 7U)),25);
            tracep->chgWData(oldp+127,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout),315);
            tracep->chgBit(oldp+137,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            tracep->chgBit(oldp+138,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+139,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+140,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 0x16U))),3);
            tracep->chgCData(oldp+141,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                >> 0x16U))),4);
            tracep->chgBit(oldp+142,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+143,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                              >> 7U))),3);
            tracep->chgQData(oldp+144,(((((QData)((IData)(
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
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [4U] | vlSelf->__Vm_traceActivity
                         [6U]))) {
            tracep->chgQData(oldp+146,(((0x200000U 
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
                                                     >> 0x1bU)))))),64);
            tracep->chgQData(oldp+148,(((0x4000000U 
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
            tracep->chgQData(oldp+150,(((((IData)(vlSelf->top__DOT__is_jump) 
                                          | (IData)(vlSelf->top__DOT__in_trap_id)) 
                                         | (IData)(vlSelf->top__DOT__out_trap_id))
                                         ? 0ULL : vlSelf->top__DOT__pc_new)),64);
            tracep->chgIData(oldp+152,(((((IData)(vlSelf->top__DOT__is_jump) 
                                          | (IData)(vlSelf->top__DOT__in_trap_id)) 
                                         | (IData)(vlSelf->top__DOT__out_trap_id))
                                         ? 0U : (IData)(vlSelf->top__DOT__IF_u__DOT__rdata))),32);
            __Vtemp68[0U] = ((((IData)(vlSelf->top__DOT__is_jump) 
                               | (IData)(vlSelf->top__DOT__in_trap_id)) 
                              | (IData)(vlSelf->top__DOT__out_trap_id))
                              ? 0U : (IData)(vlSelf->top__DOT__IF_u__DOT__rdata));
            __Vtemp68[1U] = (IData)(((((IData)(vlSelf->top__DOT__is_jump) 
                                       | (IData)(vlSelf->top__DOT__in_trap_id)) 
                                      | (IData)(vlSelf->top__DOT__out_trap_id))
                                      ? 0ULL : vlSelf->top__DOT__pc_new));
            __Vtemp68[2U] = (IData)((((((IData)(vlSelf->top__DOT__is_jump) 
                                        | (IData)(vlSelf->top__DOT__in_trap_id)) 
                                       | (IData)(vlSelf->top__DOT__out_trap_id))
                                       ? 0ULL : vlSelf->top__DOT__pc_new) 
                                     >> 0x20U));
            tracep->chgWData(oldp+153,(__Vtemp68),96);
            tracep->chgQData(oldp+156,(((IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
            tracep->chgIData(oldp+158,(((IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)
                                         ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
            tracep->chgBit(oldp+159,(((~ (IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)) 
                                      & (IData)(vlSelf->top__DOT__is_jalr_id))));
            tracep->chgBit(oldp+160,(((~ (IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)) 
                                      & (IData)(vlSelf->top__DOT__is_jal_id))));
            tracep->chgBit(oldp+161,(((~ (IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)) 
                                      & (IData)(vlSelf->top__DOT__is_brc_id))));
            tracep->chgBit(oldp+162,(((~ (IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)) 
                                      & (IData)(vlSelf->top__DOT__wben_id))));
            tracep->chgBit(oldp+163,(((~ (IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)) 
                                      & (IData)(vlSelf->top__DOT__trap_id))));
            VL_EXTEND_WQ(65,64, __Vtemp70, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp71, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp72, __Vtemp70, __Vtemp71);
            VL_EXTEND_WI(65,1, __Vtemp73, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp74, __Vtemp72, __Vtemp73);
            tracep->chgBit(oldp+164,((1U & ((0x2000000U 
                                             & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                             ? ((1U 
                                                 & __Vtemp74[2U]) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                             : ((IData)(
                                                        (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                         >> 0x3fU)) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
            VL_EXTEND_WQ(65,64, __Vtemp77, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp78, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp79, __Vtemp77, __Vtemp78);
            VL_EXTEND_WI(65,1, __Vtemp80, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp81, __Vtemp79, __Vtemp80);
            tracep->chgBit(oldp+165,((1U & __Vtemp81[2U])));
            tracep->chgQData(oldp+166,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
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
            tracep->chgQData(oldp+168,(((0x4000000U 
                                         & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                         ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                            & (QData)((IData)(
                                                              ((0xffffffffffffffffULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                               >> 0x20U))))
                                         : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
            tracep->chgQData(oldp+170,(((0x4000000U 
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
            tracep->chgQData(oldp+172,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                        + (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                            << 0x25U) 
                                           | (((QData)((IData)(
                                                               vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                                 >> 0x1bU))))),64);
            tracep->chgBit(oldp+174,((1U & ((0x200U 
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
            __Vtemp86[0U] = (((IData)(((0x4000000U 
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
            __Vtemp86[1U] = (((IData)(((0x4000000U 
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
            __Vtemp86[2U] = (((IData)((((0x4000000U 
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
            __Vtemp86[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                              >> 0x1eU) | ((IData)(
                                                   (vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                    >> 0x20U)) 
                                           << 2U));
            __Vtemp86[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                       >> 0x20U)) >> 0x1eU) 
                             | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                 << 7U) | (0x7cU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                            >> 0x19U))));
            __Vtemp86[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                    >> 0x19U)) | ((
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[8U] 
                                                   << 7U) 
                                                  | (0x7cU 
                                                     & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                                        >> 0x19U))));
            __Vtemp86[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[8U] 
                                    >> 0x19U)) | ((
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[9U] 
                                                   << 7U) 
                                                  | (0x7cU 
                                                     & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[8U] 
                                                        >> 0x19U))));
            __Vtemp86[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[9U] 
                                   >> 0x19U));
            tracep->chgWData(oldp+175,(__Vtemp86),226);
        }
        if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity
                          [4U] | vlSelf->__Vm_traceActivity
                          [6U]) | vlSelf->__Vm_traceActivity
                         [7U]))) {
            __Vtemp91[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                              << 0x1bU) | (((IData)(vlSelf->top__DOT__aluctr_id) 
                                            << 0x16U) 
                                           | ((((~ (IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)) 
                                                & (IData)(vlSelf->top__DOT__is_jalr_id)) 
                                               << 0x15U) 
                                              | ((((~ (IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)) 
                                                   & (IData)(vlSelf->top__DOT__is_jal_id)) 
                                                  << 0x14U) 
                                                 | ((((~ (IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)) 
                                                      & (IData)(vlSelf->top__DOT__is_brc_id)) 
                                                     << 0x13U) 
                                                    | (((IData)(vlSelf->top__DOT__src1sel_id) 
                                                        << 0x12U) 
                                                       | (((IData)(vlSelf->top__DOT__src2sel_id) 
                                                           << 0x10U) 
                                                          | ((((~ (IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)) 
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
                                                                         | ((~ (IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)) 
                                                                            & (IData)(vlSelf->top__DOT__trap_id))))))))))))));
            __Vtemp91[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                              >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                                 >> 0x20U)) 
                                        << 0x1bU));
            __Vtemp91[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                       >> 0x20U)) >> 5U) 
                             | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                          ? 0ULL : 
                                         vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                         [vlSelf->top__DOT__rs1_idx_id])) 
                                << 0x1bU));
            __Vtemp91[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                        ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                       [vlSelf->top__DOT__rs1_idx_id])) 
                              >> 5U) | ((IData)((((0U 
                                                   == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                                  [vlSelf->top__DOT__rs1_idx_id]) 
                                                 >> 0x20U)) 
                                        << 0x1bU));
            __Vtemp91[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs1_idx_id]) 
                                       >> 0x20U)) >> 5U) 
                             | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                          ? 0ULL : 
                                         vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                         [vlSelf->top__DOT__rs2_idx_id])) 
                                << 0x1bU));
            __Vtemp91[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                        ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                       [vlSelf->top__DOT__rs2_idx_id])) 
                              >> 5U) | ((IData)((((0U 
                                                   == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                                  [vlSelf->top__DOT__rs2_idx_id]) 
                                                 >> 0x20U)) 
                                        << 0x1bU));
            __Vtemp91[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs2_idx_id]) 
                                       >> 0x20U)) >> 5U) 
                             | (((IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)
                                  ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                                << 0x1bU));
            __Vtemp91[7U] = ((((IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)
                                ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                              >> 5U) | ((IData)(((IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)
                                                  ? 0ULL
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                        << 0x1bU));
            __Vtemp91[8U] = (((IData)(((IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)
                                        ? 0ULL : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                              >> 5U) | ((IData)((((IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)
                                                   ? 0ULL
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                                 >> 0x20U)) 
                                        << 0x1bU));
            __Vtemp91[9U] = ((IData)((((IData)(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush)
                                        ? 0ULL : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                      >> 0x20U)) >> 5U);
            tracep->chgWData(oldp+183,(__Vtemp91),315);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
            tracep->chgCData(oldp+193,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
            tracep->chgSData(oldp+194,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
            tracep->chgIData(oldp+195,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
            tracep->chgBit(oldp+196,(vlSelf->top__DOT__is_jump));
            tracep->chgQData(oldp+197,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
            tracep->chgCData(oldp+199,(vlSelf->top__DOT__rs1_sel),2);
            tracep->chgCData(oldp+200,(vlSelf->top__DOT__rs2_sel),2);
            tracep->chgQData(oldp+201,(vlSelf->top__DOT__csrdata_ls),64);
            tracep->chgBit(oldp+203,(vlSelf->top__DOT____Vcellinp__EX_reg_u__flush));
            tracep->chgQData(oldp+204,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
            tracep->chgQData(oldp+206,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
            tracep->chgQData(oldp+208,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
            tracep->chgBit(oldp+210,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
            tracep->chgQData(oldp+211,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
            tracep->chgQData(oldp+213,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
            tracep->chgQData(oldp+215,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
            tracep->chgQData(oldp+217,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
            tracep->chgBit(oldp+219,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
            tracep->chgQData(oldp+220,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+222,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+224,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgCData(oldp+226,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
            tracep->chgQData(oldp+227,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
            tracep->chgQData(oldp+229,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
            tracep->chgQData(oldp+231,((0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
            tracep->chgQData(oldp+233,((~ (0xffffffffffffffffULL 
                                           >> (0x3fU 
                                               & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
            tracep->chgQData(oldp+235,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
            tracep->chgBit(oldp+237,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
            tracep->chgBit(oldp+238,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
            tracep->chgBit(oldp+239,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
            tracep->chgQData(oldp+240,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
            tracep->chgQData(oldp+242,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
            tracep->chgQData(oldp+244,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
            tracep->chgQData(oldp+246,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
            tracep->chgQData(oldp+248,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
            tracep->chgQData(oldp+250,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
            tracep->chgQData(oldp+252,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
            tracep->chgQData(oldp+254,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
            tracep->chgQData(oldp+256,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
            tracep->chgQData(oldp+258,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
            tracep->chgQData(oldp+260,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
            tracep->chgQData(oldp+262,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
            tracep->chgQData(oldp+264,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
            tracep->chgQData(oldp+266,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
            tracep->chgQData(oldp+268,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
            tracep->chgQData(oldp+270,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
            tracep->chgQData(oldp+272,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
            tracep->chgQData(oldp+274,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
            tracep->chgQData(oldp+276,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
            tracep->chgQData(oldp+278,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
            tracep->chgQData(oldp+280,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
            tracep->chgQData(oldp+282,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
            tracep->chgQData(oldp+284,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
            tracep->chgQData(oldp+286,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
            tracep->chgQData(oldp+288,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
            tracep->chgQData(oldp+290,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
            tracep->chgQData(oldp+292,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
            tracep->chgQData(oldp+294,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
            tracep->chgQData(oldp+296,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
            tracep->chgQData(oldp+298,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
            tracep->chgQData(oldp+300,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
            tracep->chgQData(oldp+302,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
            tracep->chgQData(oldp+304,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
            tracep->chgQData(oldp+306,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
            tracep->chgQData(oldp+308,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        }
        tracep->chgBit(oldp+310,(vlSelf->clk));
        tracep->chgBit(oldp+311,(vlSelf->rst_n));
        tracep->chgQData(oldp+312,(vlSelf->pc_diff),64);
        tracep->chgQData(oldp+314,(vlSelf->pc_decoding),64);
        tracep->chgIData(oldp+316,(vlSelf->instr_diff),32);
        tracep->chgQData(oldp+317,(vlSelf->regA0),64);
        tracep->chgQData(oldp+319,(((IData)(vlSelf->top__DOT__is_jump)
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
        tracep->chgQData(oldp+321,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->chgQData(oldp+323,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id])),64);
        tracep->chgQData(oldp+325,(((((((((- (QData)((IData)(
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
        tracep->chgBit(oldp+327,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                    >> 1U) & ((0x1fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                  >> 9U)) 
                                              == (0x1fU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                     >> 0xaU)))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                             >> 9U))))));
        tracep->chgBit(oldp+328,((((IData)(vlSelf->top__DOT__wben_wb) 
                                   & ((0x1fU & (vlSelf->top__DOT__instr_wb 
                                                >> 7U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                   >> 0xaU)))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__instr_wb 
                                             >> 7U))))));
        tracep->chgBit(oldp+329,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                   & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                   >> 0xaU)))) 
                                  & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->chgBit(oldp+330,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                    >> 1U) & ((0x1fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                  >> 9U)) 
                                              == (0x1fU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                     >> 5U)))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                             >> 9U))))));
        tracep->chgBit(oldp+331,((((IData)(vlSelf->top__DOT__wben_wb) 
                                   & ((0x1fU & (vlSelf->top__DOT__instr_wb 
                                                >> 7U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                   >> 5U)))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__instr_wb 
                                             >> 7U))))));
        tracep->chgBit(oldp+332,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                   & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                   >> 5U)))) 
                                  & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        tracep->chgQData(oldp+333,((((0U == (0x1fU 
                                             & (vlSelf->top__DOT__instr_wb 
                                                >> 2U))) 
                                     & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                                  >> 0x16U)) 
                                        == (0x1fU & 
                                            (vlSelf->top__DOT__instr_wb 
                                             >> 7U))))
                                     ? vlSelf->top__DOT__lsres_wb
                                     : (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[3U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                              >> 2U))))),64);
        tracep->chgQData(oldp+335,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base),64);
        tracep->chgBit(oldp+337,(((0U == (0x1fU & (vlSelf->top__DOT__instr_wb 
                                                   >> 2U))) 
                                  & ((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                                               >> 0x16U)) 
                                     == (0x1fU & (vlSelf->top__DOT__instr_wb 
                                                  >> 7U))))));
        tracep->chgQData(oldp+338,(((((QData)((IData)(
                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                                      >> 2U))) 
                                    | vlSelf->top__DOT__csrdata_ls)),64);
        tracep->chgQData(oldp+340,(((~ (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                              >> 2U)))) 
                                    & vlSelf->top__DOT__csrdata_ls)),64);
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
        vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    }
}
