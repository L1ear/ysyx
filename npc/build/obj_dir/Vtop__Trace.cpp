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
    VlWide<3>/*95:0*/ __Vtemp46;
    VlWide<3>/*95:0*/ __Vtemp47;
    VlWide<3>/*95:0*/ __Vtemp48;
    VlWide<3>/*95:0*/ __Vtemp49;
    VlWide<3>/*95:0*/ __Vtemp50;
    VlWide<3>/*95:0*/ __Vtemp53;
    VlWide<3>/*95:0*/ __Vtemp54;
    VlWide<3>/*95:0*/ __Vtemp55;
    VlWide<3>/*95:0*/ __Vtemp56;
    VlWide<3>/*95:0*/ __Vtemp57;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(((IData)(vlSelf->top__DOT__is_jalr_ex)
                                       ? vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__rs1_imm_res
                                       : vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__pc_imm_res)),64);
            tracep->chgBit(oldp+2,(vlSelf->top__DOT__src1sel_ex));
            tracep->chgCData(oldp+3,(vlSelf->top__DOT__src2sel_ex),2);
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__rs2_ex),64);
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__rs1_ex),64);
            tracep->chgQData(oldp+8,(vlSelf->top__DOT__imm_ex),64);
            tracep->chgBit(oldp+10,(vlSelf->top__DOT__is_brc_ex));
            tracep->chgBit(oldp+11,(vlSelf->top__DOT__is_jal_ex));
            tracep->chgBit(oldp+12,(vlSelf->top__DOT__is_jalr_ex));
            tracep->chgQData(oldp+13,(vlSelf->top__DOT__rs2_ls),64);
            tracep->chgQData(oldp+15,(vlSelf->top__DOT__pc_wb),64);
            tracep->chgQData(oldp+17,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
            tracep->chgCData(oldp+19,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
            tracep->chgQData(oldp+20,((0xffffffffffffffffULL 
                                       >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
            tracep->chgQData(oldp+22,((~ (0xffffffffffffffffULL 
                                          >> (0x3fU 
                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
            tracep->chgBit(oldp+24,((1U & (~ (IData)(
                                                     (0U 
                                                      != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
            tracep->chgBit(oldp+25,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
            tracep->chgBit(oldp+26,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
            tracep->chgQData(oldp+27,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
            tracep->chgQData(oldp+29,((~ vlSelf->top__DOT__rs2_ex)),64);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [3U]))) {
            tracep->chgQData(oldp+31,(((((IData)(vlSelf->top__DOT__is_jal_ex) 
                                         | (IData)(vlSelf->top__DOT__is_jalr_ex)) 
                                        | ((IData)(vlSelf->top__DOT__is_brc_ex) 
                                           & ((0x4000U 
                                               & vlSelf->top__DOT__instr_ex)
                                               ? ((0x2000U 
                                                   & vlSelf->top__DOT__instr_ex)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__instr_ex)
                                                    ? (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)
                                                    : 
                                                   (~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)))
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__instr_ex)
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
                                                   (vlSelf->top__DOT__instr_ex 
                                                    >> 0xdU)) 
                                                  & ((0x1000U 
                                                      & vlSelf->top__DOT__instr_ex)
                                                      ? 
                                                     (0U 
                                                      != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres)
                                                      : 
                                                     (~ (IData)(
                                                                (0U 
                                                                 != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))))))
                                        ? ((IData)(vlSelf->top__DOT__is_jalr_ex)
                                            ? vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__rs1_imm_res
                                            : vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__pc_imm_res)
                                        : (4ULL + vlSelf->top__DOT__pc_new))),64);
            tracep->chgBit(oldp+33,((((IData)(vlSelf->top__DOT__is_jal_ex) 
                                      | (IData)(vlSelf->top__DOT__is_jalr_ex)) 
                                     | ((IData)(vlSelf->top__DOT__is_brc_ex) 
                                        & ((0x4000U 
                                            & vlSelf->top__DOT__instr_ex)
                                            ? ((0x2000U 
                                                & vlSelf->top__DOT__instr_ex)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelf->top__DOT__instr_ex)
                                                    ? (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)
                                                    : 
                                                   (~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)))
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->top__DOT__instr_ex)
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
                                            : ((~ (vlSelf->top__DOT__instr_ex 
                                                   >> 0xdU)) 
                                               & ((0x1000U 
                                                   & vlSelf->top__DOT__instr_ex)
                                                   ? 
                                                  (0U 
                                                   != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres)
                                                   : 
                                                  (~ (IData)(
                                                             (0U 
                                                              != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))))))));
            tracep->chgQData(oldp+34,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                       ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+36,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                       | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+38,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                       & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+40,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                       * vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+42,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                        ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                           & (QData)((IData)(
                                                             ((0xffffffffffffffffULL 
                                                               >> 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                              >> 0x20U))))
                                        : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
            tracep->chgQData(oldp+44,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
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
            tracep->chgBit(oldp+46,((1U & ((0x4000U 
                                            & vlSelf->top__DOT__instr_ex)
                                            ? ((0x2000U 
                                                & vlSelf->top__DOT__instr_ex)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelf->top__DOT__instr_ex)
                                                    ? (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)
                                                    : 
                                                   (~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)))
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->top__DOT__instr_ex)
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
                                            : ((~ (vlSelf->top__DOT__instr_ex 
                                                   >> 0xdU)) 
                                               & ((0x1000U 
                                                   & vlSelf->top__DOT__instr_ex)
                                                   ? 
                                                  (0U 
                                                   != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres)
                                                   : 
                                                  (~ (IData)(
                                                             (0U 
                                                              != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres)))))))));
            tracep->chgQData(oldp+47,(((1U & (IData)(
                                                     (vlSelf->top__DOT__alures_ls 
                                                      >> 2U)))
                                        ? ((1U & (IData)(
                                                         (vlSelf->top__DOT__alures_ls 
                                                          >> 1U)))
                                            ? (((QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->top__DOT__rs2_ls)))) 
                                                << 0x30U) 
                                               | (0xffffffffffffULL 
                                                  & vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))
                                            : (((QData)((IData)(
                                                                (((IData)(
                                                                          (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                                                           >> 0x30U)) 
                                                                  << 0x10U) 
                                                                 | (0xffffU 
                                                                    & (IData)(vlSelf->top__DOT__rs2_ls))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))))
                                        : ((1U & (IData)(
                                                         (vlSelf->top__DOT__alures_ls 
                                                          >> 1U)))
                                            ? (((QData)((IData)(
                                                                (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                                                 >> 0x20U))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->top__DOT__rs2_ls) 
                                                                   << 0x10U) 
                                                                  | (0xffffU 
                                                                     & (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))))))
                                            : ((0xffffffffffff0000ULL 
                                                & vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__rs2_ls)))))))),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+49,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
            tracep->chgQData(oldp+51,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
            tracep->chgQData(oldp+53,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
            tracep->chgQData(oldp+55,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
            tracep->chgQData(oldp+57,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
            tracep->chgQData(oldp+59,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
            tracep->chgQData(oldp+61,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
            tracep->chgQData(oldp+71,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
            tracep->chgQData(oldp+75,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
            tracep->chgQData(oldp+81,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
            tracep->chgQData(oldp+83,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
            tracep->chgQData(oldp+85,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
            tracep->chgQData(oldp+87,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
            tracep->chgQData(oldp+95,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
            tracep->chgQData(oldp+97,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
            tracep->chgQData(oldp+99,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
            tracep->chgQData(oldp+101,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
            tracep->chgQData(oldp+103,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
            tracep->chgQData(oldp+105,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
            tracep->chgQData(oldp+107,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
            tracep->chgQData(oldp+109,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
            tracep->chgQData(oldp+111,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgQData(oldp+113,(vlSelf->top__DOT__pc_new),64);
            tracep->chgIData(oldp+115,((IData)(vlSelf->top__DOT__IF_u__DOT__rdata)),32);
            tracep->chgQData(oldp+116,(vlSelf->top__DOT__pc_id),64);
            tracep->chgIData(oldp+118,(vlSelf->top__DOT__instr_id),32);
            tracep->chgQData(oldp+119,(vlSelf->top__DOT__ID_u__DOT__imm),64);
            tracep->chgBit(oldp+121,(vlSelf->top__DOT__src1sel_id));
            tracep->chgCData(oldp+122,(vlSelf->top__DOT__src2sel_id),2);
            tracep->chgCData(oldp+123,(vlSelf->top__DOT__aluctr_id),5);
            tracep->chgBit(oldp+124,(vlSelf->top__DOT__wben_id));
            tracep->chgQData(oldp+125,(vlSelf->top__DOT__pc_ex),64);
            tracep->chgIData(oldp+127,(vlSelf->top__DOT__instr_ex),32);
            tracep->chgQData(oldp+128,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                         : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)),64);
            tracep->chgCData(oldp+130,(vlSelf->top__DOT__aluctr_ex),5);
            tracep->chgBit(oldp+131,(vlSelf->top__DOT__wben_ex));
            tracep->chgQData(oldp+132,(vlSelf->top__DOT__pc_ls),64);
            tracep->chgQData(oldp+134,(vlSelf->top__DOT__alures_ls),64);
            tracep->chgIData(oldp+136,(vlSelf->top__DOT__instr_ls),32);
            tracep->chgQData(oldp+137,(((((((((- (QData)((IData)(
                                                                 (0U 
                                                                  == 
                                                                  (0x707cU 
                                                                   & vlSelf->top__DOT__instr_ls))))) 
                                              & (((- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b) 
                                                                         >> 7U))))) 
                                                  << 8U) 
                                                 | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b)))) 
                                             | ((- (QData)((IData)(
                                                                   (0x4000U 
                                                                    == 
                                                                    (0x707cU 
                                                                     & vlSelf->top__DOT__instr_ls))))) 
                                                & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b)))) 
                                            | ((- (QData)((IData)(
                                                                  (0x1000U 
                                                                   == 
                                                                   (0x707cU 
                                                                    & vlSelf->top__DOT__instr_ls))))) 
                                               & (((- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h) 
                                                                          >> 0xfU))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h))))) 
                                           | ((- (QData)((IData)(
                                                                 (0x5000U 
                                                                  == 
                                                                  (0x707cU 
                                                                   & vlSelf->top__DOT__instr_ls))))) 
                                              & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h)))) 
                                          | ((- (QData)((IData)(
                                                                (0x2000U 
                                                                 == 
                                                                 (0x707cU 
                                                                  & vlSelf->top__DOT__instr_ls))))) 
                                             & (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w))))) 
                                         | ((- (QData)((IData)(
                                                               (0x6000U 
                                                                == 
                                                                (0x707cU 
                                                                 & vlSelf->top__DOT__instr_ls))))) 
                                            & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w)))) 
                                        | ((- (QData)((IData)(
                                                              (0x3000U 
                                                               == 
                                                               (0x707cU 
                                                                & vlSelf->top__DOT__instr_ls))))) 
                                           & vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))),64);
            tracep->chgBit(oldp+139,(vlSelf->top__DOT__wben_ls));
            tracep->chgQData(oldp+140,(vlSelf->top__DOT__alures_wb),64);
            tracep->chgQData(oldp+142,(vlSelf->top__DOT__lsres_wb),64);
            tracep->chgIData(oldp+144,(vlSelf->top__DOT__instr_wb),32);
            tracep->chgQData(oldp+145,(((0x40U & vlSelf->top__DOT__instr_wb)
                                         ? ((0x20U 
                                             & vlSelf->top__DOT__instr_wb)
                                             ? ((0x10U 
                                                 & vlSelf->top__DOT__instr_wb)
                                                 ? 0ULL
                                                 : 
                                                ((8U 
                                                  & vlSelf->top__DOT__instr_wb)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->top__DOT__instr_wb)
                                                   ? vlSelf->top__DOT__alures_wb
                                                   : 0ULL)
                                                  : vlSelf->top__DOT__alures_wb))
                                             : 0ULL)
                                         : ((0x20U 
                                             & vlSelf->top__DOT__instr_wb)
                                             ? ((0x10U 
                                                 & vlSelf->top__DOT__instr_wb)
                                                 ? 
                                                ((8U 
                                                  & vlSelf->top__DOT__instr_wb)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->top__DOT__instr_wb)
                                                   ? 0ULL
                                                   : vlSelf->top__DOT__alures_wb)
                                                  : vlSelf->top__DOT__alures_wb)
                                                 : 
                                                ((8U 
                                                  & vlSelf->top__DOT__instr_wb)
                                                  ? 0ULL
                                                  : 
                                                 ((4U 
                                                   & vlSelf->top__DOT__instr_wb)
                                                   ? 0ULL
                                                   : vlSelf->top__DOT__lsres_wb)))
                                             : ((0x10U 
                                                 & vlSelf->top__DOT__instr_wb)
                                                 ? 
                                                ((8U 
                                                  & vlSelf->top__DOT__instr_wb)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->top__DOT__instr_wb)
                                                   ? 0ULL
                                                   : vlSelf->top__DOT__alures_wb)
                                                  : vlSelf->top__DOT__alures_wb)
                                                 : 
                                                ((8U 
                                                  & vlSelf->top__DOT__instr_wb)
                                                  ? 0ULL
                                                  : 
                                                 ((4U 
                                                   & vlSelf->top__DOT__instr_wb)
                                                   ? 0ULL
                                                   : vlSelf->top__DOT__lsres_wb)))))),64);
            tracep->chgCData(oldp+147,((0x1fU & (vlSelf->top__DOT__instr_wb 
                                                 >> 7U))),5);
            tracep->chgBit(oldp+148,(vlSelf->top__DOT__wben_wb));
            tracep->chgQData(oldp+149,(vlSelf->top__DOT__IF_u__DOT__rdata),64);
            tracep->chgCData(oldp+151,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
            tracep->chgBit(oldp+152,(vlSelf->top__DOT__ID_u__DOT__is_jalr));
            tracep->chgBit(oldp+153,(vlSelf->top__DOT__ID_u__DOT__is_jal));
            tracep->chgBit(oldp+154,(vlSelf->top__DOT__ID_u__DOT__is_brc));
            tracep->chgCData(oldp+155,((0x1fU & (vlSelf->top__DOT__instr_id 
                                                 >> 2U))),5);
            tracep->chgCData(oldp+156,((7U & (vlSelf->top__DOT__instr_id 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+157,((vlSelf->top__DOT__instr_id 
                                        >> 0x19U)),7);
            tracep->chgIData(oldp+158,((vlSelf->top__DOT__instr_id 
                                        >> 7U)),25);
            tracep->chgCData(oldp+159,((0x1fU & (vlSelf->top__DOT__instr_id 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+160,((0x1fU & (vlSelf->top__DOT__instr_id 
                                                 >> 0x14U))),5);
            tracep->chgQData(oldp+161,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
            VL_EXTEND_WQ(65,64, __Vtemp46, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp47, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp48, __Vtemp46, __Vtemp47);
            VL_EXTEND_WI(65,1, __Vtemp49, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp50, __Vtemp48, __Vtemp49);
            tracep->chgBit(oldp+163,((1U & ((8U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                             ? ((1U 
                                                 & __Vtemp50[2U]) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                             : ((IData)(
                                                        (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                         >> 0x3fU)) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
            tracep->chgBit(oldp+164,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
            tracep->chgQData(oldp+165,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
            tracep->chgBit(oldp+167,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            tracep->chgQData(oldp+168,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
            tracep->chgQData(oldp+170,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
            tracep->chgBit(oldp+172,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                            >> 3U))));
            tracep->chgBit(oldp+173,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                            >> 2U))));
            tracep->chgCData(oldp+174,((7U & (IData)(vlSelf->top__DOT__aluctr_ex))),3);
            tracep->chgQData(oldp+175,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
            VL_EXTEND_WQ(65,64, __Vtemp53, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp54, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp55, __Vtemp53, __Vtemp54);
            VL_EXTEND_WI(65,1, __Vtemp56, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp57, __Vtemp55, __Vtemp56);
            tracep->chgBit(oldp+177,((1U & __Vtemp57[2U])));
            tracep->chgBit(oldp+178,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
            tracep->chgCData(oldp+179,((0xfU & (IData)(vlSelf->top__DOT__aluctr_ex))),4);
            tracep->chgBit(oldp+180,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                            >> 4U))));
            tracep->chgQData(oldp+181,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
            tracep->chgQData(oldp+183,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
            tracep->chgQData(oldp+185,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
            tracep->chgCData(oldp+187,((7U & (vlSelf->top__DOT__instr_ex 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+188,((8U == (0x1fU 
                                             & (vlSelf->top__DOT__instr_ls 
                                                >> 2U)))));
            tracep->chgBit(oldp+189,((0U == (0x1fU 
                                             & (vlSelf->top__DOT__instr_ls 
                                                >> 2U)))));
            tracep->chgCData(oldp+190,((7U & (vlSelf->top__DOT__instr_ls 
                                              >> 0xcU))),3);
            tracep->chgQData(oldp+191,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base),64);
            tracep->chgQData(oldp+193,((0xfffffffffffffff8ULL 
                                        & vlSelf->top__DOT__alures_ls)),64);
            tracep->chgBit(oldp+195,((IData)((0U == 
                                              (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+196,((IData)((0x4000U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+197,((IData)((0x1000U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+198,((IData)((0x5000U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+199,((IData)((0x2000U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+200,((IData)((0x6000U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+201,((IData)((0x3000U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgCData(oldp+202,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
            tracep->chgSData(oldp+203,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
            tracep->chgIData(oldp+204,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
            tracep->chgBit(oldp+205,((IData)((0x20U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+206,((IData)((0x1020U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+207,((IData)((0x2020U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+208,((IData)((0x3020U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgQData(oldp+209,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_b),64);
            tracep->chgQData(oldp+211,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_w),64);
            tracep->chgQData(oldp+213,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data),64);
        }
        tracep->chgBit(oldp+215,(vlSelf->clk));
        tracep->chgBit(oldp+216,(vlSelf->rst_n));
        tracep->chgQData(oldp+217,(vlSelf->pc_diff),64);
        tracep->chgQData(oldp+219,(vlSelf->pc_decoding),64);
        tracep->chgQData(oldp+221,(((0U == (0x1fU & 
                                            (vlSelf->top__DOT__instr_id 
                                             >> 0x14U)))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [(0x1fU & (vlSelf->top__DOT__instr_id 
                                               >> 0x14U))])),64);
        tracep->chgQData(oldp+223,(((0U == (0x1fU & 
                                            (vlSelf->top__DOT__instr_id 
                                             >> 0xfU)))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [(0x1fU & (vlSelf->top__DOT__instr_id 
                                               >> 0xfU))])),64);
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
    }
}
