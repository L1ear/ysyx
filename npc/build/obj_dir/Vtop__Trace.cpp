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
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__src1_ex),64);
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__src2_ex),64);
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__rs2_ex),64);
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__rs2_ls),64);
            tracep->chgQData(oldp+8,(vlSelf->top__DOT__pc_wb),64);
            tracep->chgQData(oldp+10,(vlSelf->top__DOT__alures_wb),64);
            tracep->chgQData(oldp+12,(vlSelf->top__DOT__lsres_wb),64);
            tracep->chgQData(oldp+14,((vlSelf->top__DOT__src1_ex 
                                       ^ vlSelf->top__DOT__src2_ex)),64);
            tracep->chgQData(oldp+16,((vlSelf->top__DOT__src1_ex 
                                       | vlSelf->top__DOT__src2_ex)),64);
            tracep->chgQData(oldp+18,((vlSelf->top__DOT__src1_ex 
                                       & vlSelf->top__DOT__src2_ex)),64);
            tracep->chgQData(oldp+20,((vlSelf->top__DOT__src1_ex 
                                       * vlSelf->top__DOT__src2_ex)),64);
            tracep->chgCData(oldp+22,((0x3fU & (IData)(vlSelf->top__DOT__src2_ex))),6);
            tracep->chgQData(oldp+23,((0xffffffffffffffffULL 
                                       >> (0x3fU & (IData)(vlSelf->top__DOT__src2_ex)))),64);
            tracep->chgQData(oldp+25,((~ (0xffffffffffffffffULL 
                                          >> (0x3fU 
                                              & (IData)(vlSelf->top__DOT__src2_ex))))),64);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [3U]))) {
            VL_EXTEND_WQ(65,64, __Vtemp46, vlSelf->top__DOT__src1_ex);
            VL_EXTEND_WQ(65,64, __Vtemp47, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp48, __Vtemp46, __Vtemp47);
            VL_EXTEND_WI(65,1, __Vtemp49, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp50, __Vtemp48, __Vtemp49);
            tracep->chgBit(oldp+27,((1U & ((8U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                            ? ((1U 
                                                & __Vtemp50[2U]) 
                                               ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                            : ((IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                        >> 0x3fU)) 
                                               ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
            VL_EXTEND_WQ(65,64, __Vtemp53, vlSelf->top__DOT__src1_ex);
            VL_EXTEND_WQ(65,64, __Vtemp54, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp55, __Vtemp53, __Vtemp54);
            VL_EXTEND_WI(65,1, __Vtemp56, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp57, __Vtemp55, __Vtemp56);
            tracep->chgBit(oldp+28,((1U & __Vtemp57[2U])));
            tracep->chgQData(oldp+29,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                        ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                           & (QData)((IData)(
                                                             ((0xffffffffffffffffULL 
                                                               >> 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->top__DOT__src2_ex))) 
                                                              >> 0x20U))))
                                        : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
            tracep->chgQData(oldp+31,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                        ? ((1U & (IData)(
                                                         (vlSelf->top__DOT__src1_ex 
                                                          >> 0x1fU)))
                                            ? (0x100000000ULL 
                                               | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                  | (QData)((IData)(
                                                                    (~ (IData)(
                                                                               ((0xffffffffffffffffULL 
                                                                                >> 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->top__DOT__src2_ex))) 
                                                                                >> 0x20U)))))))
                                            : (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                               & (QData)((IData)(
                                                                 ((0xffffffffffffffffULL 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (IData)(vlSelf->top__DOT__src2_ex))) 
                                                                  >> 0x20U)))))
                                        : (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                           | ((- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__src1_ex 
                                                                             >> 0x3fU)))))) 
                                              & (~ 
                                                 (0xffffffffffffffffULL 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->top__DOT__src2_ex)))))))),64);
            tracep->chgQData(oldp+33,(((1U & (IData)(
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
            tracep->chgQData(oldp+35,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
            tracep->chgQData(oldp+37,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
            tracep->chgQData(oldp+39,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
            tracep->chgQData(oldp+41,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
            tracep->chgQData(oldp+43,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
            tracep->chgQData(oldp+45,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
            tracep->chgQData(oldp+47,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
            tracep->chgQData(oldp+49,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
            tracep->chgQData(oldp+51,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
            tracep->chgQData(oldp+53,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
            tracep->chgQData(oldp+55,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
            tracep->chgQData(oldp+57,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
            tracep->chgQData(oldp+59,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
            tracep->chgQData(oldp+61,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
            tracep->chgQData(oldp+71,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
            tracep->chgQData(oldp+75,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
            tracep->chgQData(oldp+81,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
            tracep->chgQData(oldp+83,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
            tracep->chgQData(oldp+85,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
            tracep->chgQData(oldp+87,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
            tracep->chgQData(oldp+95,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
            tracep->chgQData(oldp+97,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgQData(oldp+99,(((((IData)(vlSelf->top__DOT__ID_u__DOT__is_jal) 
                                         | (IData)(vlSelf->top__DOT__ID_u__DOT__is_jalr)) 
                                        | ((IData)(vlSelf->top__DOT__ID_u__DOT__is_brc) 
                                           & ((0x4000U 
                                               & vlSelf->top__DOT__instr_id)
                                               ? ((0x2000U 
                                                   & vlSelf->top__DOT__instr_id)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__instr_id)
                                                    ? (IData)(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__carry)
                                                    : 
                                                   (~ (IData)(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__carry)))
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__instr_id)
                                                    ? 
                                                   (~ 
                                                    ((IData)(
                                                             (vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__subres 
                                                              >> 0x3fU)) 
                                                     ^ (IData)(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__overflow)))
                                                    : 
                                                   ((IData)(
                                                            (vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__subres 
                                                             >> 0x3fU)) 
                                                    ^ (IData)(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__overflow))))
                                               : ((~ 
                                                   (vlSelf->top__DOT__instr_id 
                                                    >> 0xdU)) 
                                                  & ((0x1000U 
                                                      & vlSelf->top__DOT__instr_id)
                                                      ? 
                                                     (0U 
                                                      != vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__subres)
                                                      : 
                                                     (~ (IData)(
                                                                (0U 
                                                                 != vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__subres))))))))
                                        ? ((IData)(vlSelf->top__DOT__ID_u__DOT__is_jalr)
                                            ? vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__rs1_imm_res
                                            : vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__pc_imm_res)
                                        : (4ULL + vlSelf->top__DOT__pc_new))),64);
            tracep->chgQData(oldp+101,(vlSelf->top__DOT__pc_new),64);
            tracep->chgBit(oldp+103,((((IData)(vlSelf->top__DOT__ID_u__DOT__is_jal) 
                                       | (IData)(vlSelf->top__DOT__ID_u__DOT__is_jalr)) 
                                      | ((IData)(vlSelf->top__DOT__ID_u__DOT__is_brc) 
                                         & ((0x4000U 
                                             & vlSelf->top__DOT__instr_id)
                                             ? ((0x2000U 
                                                 & vlSelf->top__DOT__instr_id)
                                                 ? 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__instr_id)
                                                  ? (IData)(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__carry)
                                                  : 
                                                 (~ (IData)(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__carry)))
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__instr_id)
                                                  ? 
                                                 (~ 
                                                  ((IData)(
                                                           (vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__subres 
                                                            >> 0x3fU)) 
                                                   ^ (IData)(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__overflow)))
                                                  : 
                                                 ((IData)(
                                                          (vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__subres 
                                                           >> 0x3fU)) 
                                                  ^ (IData)(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__overflow))))
                                             : ((~ 
                                                 (vlSelf->top__DOT__instr_id 
                                                  >> 0xdU)) 
                                                & ((0x1000U 
                                                    & vlSelf->top__DOT__instr_id)
                                                    ? 
                                                   (0U 
                                                    != vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__subres)
                                                    : 
                                                   (~ (IData)(
                                                              (0U 
                                                               != vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__subres))))))))));
            tracep->chgQData(oldp+104,(((IData)(vlSelf->top__DOT__ID_u__DOT__is_jalr)
                                         ? vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__rs1_imm_res
                                         : vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__pc_imm_res)),64);
            tracep->chgIData(oldp+106,((IData)(vlSelf->top__DOT__IF_u__DOT__rdata)),32);
            tracep->chgQData(oldp+107,(vlSelf->top__DOT__pc_id),64);
            tracep->chgIData(oldp+109,(vlSelf->top__DOT__instr_id),32);
            tracep->chgQData(oldp+110,(((IData)(vlSelf->top__DOT__ID_u__DOT__src1sel)
                                         ? vlSelf->top__DOT__pc_id
                                         : vlSelf->top__DOT__ID_u__DOT__rs1)),64);
            tracep->chgQData(oldp+112,(((2U & (IData)(vlSelf->top__DOT__ID_u__DOT__src2sel))
                                         ? 4ULL : (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__ID_u__DOT__src2sel))
                                                    ? vlSelf->top__DOT__ID_u__DOT__imm
                                                    : vlSelf->top__DOT__ID_u__DOT__rs2))),64);
            tracep->chgQData(oldp+114,(vlSelf->top__DOT__ID_u__DOT__rs2),64);
            tracep->chgCData(oldp+116,(vlSelf->top__DOT__aluctr_id),5);
            tracep->chgCData(oldp+117,(vlSelf->top__DOT__aluctr_ex),5);
            tracep->chgQData(oldp+118,(vlSelf->top__DOT__pc_ex),64);
            tracep->chgIData(oldp+120,(vlSelf->top__DOT__instr_ex),32);
            tracep->chgQData(oldp+121,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                         : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)),64);
            tracep->chgQData(oldp+123,(vlSelf->top__DOT__pc_ls),64);
            tracep->chgQData(oldp+125,(vlSelf->top__DOT__alures_ls),64);
            tracep->chgIData(oldp+127,(vlSelf->top__DOT__instr_ls),32);
            tracep->chgQData(oldp+128,(((((((((- (QData)((IData)(
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
            tracep->chgIData(oldp+130,(vlSelf->top__DOT__instr_wb),32);
            tracep->chgQData(oldp+131,(vlSelf->top__DOT__wb_data),64);
            tracep->chgCData(oldp+133,((0x1fU & (vlSelf->top__DOT__instr_wb 
                                                 >> 7U))),5);
            tracep->chgBit(oldp+134,(vlSelf->top__DOT__wb_wren));
            tracep->chgQData(oldp+135,(vlSelf->top__DOT__IF_u__DOT__rdata),64);
            tracep->chgCData(oldp+137,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
            tracep->chgBit(oldp+138,(vlSelf->top__DOT__ID_u__DOT__is_jalr));
            tracep->chgBit(oldp+139,(vlSelf->top__DOT__ID_u__DOT__is_jal));
            tracep->chgBit(oldp+140,(vlSelf->top__DOT__ID_u__DOT__is_brc));
            tracep->chgQData(oldp+141,(vlSelf->top__DOT__ID_u__DOT__imm),64);
            tracep->chgQData(oldp+143,(vlSelf->top__DOT__ID_u__DOT__rs1),64);
            tracep->chgBit(oldp+145,(vlSelf->top__DOT__ID_u__DOT__src1sel));
            tracep->chgCData(oldp+146,(vlSelf->top__DOT__ID_u__DOT__src2sel),2);
            tracep->chgCData(oldp+147,((0x1fU & (vlSelf->top__DOT__instr_id 
                                                 >> 2U))),5);
            tracep->chgCData(oldp+148,((7U & (vlSelf->top__DOT__instr_id 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+149,((vlSelf->top__DOT__instr_id 
                                        >> 0x19U)),7);
            tracep->chgIData(oldp+150,((vlSelf->top__DOT__instr_id 
                                        >> 7U)),25);
            tracep->chgCData(oldp+151,((0x1fU & (vlSelf->top__DOT__instr_id 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+152,((0x1fU & (vlSelf->top__DOT__instr_id 
                                                 >> 0x14U))),5);
            tracep->chgBit(oldp+153,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__subres))))));
            tracep->chgBit(oldp+154,(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__carry));
            tracep->chgBit(oldp+155,(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__overflow));
            tracep->chgQData(oldp+156,(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__subres),64);
            tracep->chgQData(oldp+158,((~ vlSelf->top__DOT__ID_u__DOT__rs2)),64);
            tracep->chgBit(oldp+160,((1U & ((0x4000U 
                                             & vlSelf->top__DOT__instr_id)
                                             ? ((0x2000U 
                                                 & vlSelf->top__DOT__instr_id)
                                                 ? 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__instr_id)
                                                  ? (IData)(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__carry)
                                                  : 
                                                 (~ (IData)(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__carry)))
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__instr_id)
                                                  ? 
                                                 (~ 
                                                  ((IData)(
                                                           (vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__subres 
                                                            >> 0x3fU)) 
                                                   ^ (IData)(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__overflow)))
                                                  : 
                                                 ((IData)(
                                                          (vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__subres 
                                                           >> 0x3fU)) 
                                                  ^ (IData)(vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__overflow))))
                                             : ((~ 
                                                 (vlSelf->top__DOT__instr_id 
                                                  >> 0xdU)) 
                                                & ((0x1000U 
                                                    & vlSelf->top__DOT__instr_id)
                                                    ? 
                                                   (0U 
                                                    != vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__subres)
                                                    : 
                                                   (~ (IData)(
                                                              (0U 
                                                               != vlSelf->top__DOT__ID_u__DOT__bcu_u__DOT__subres)))))))));
            tracep->chgBit(oldp+161,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
            tracep->chgQData(oldp+162,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
            tracep->chgBit(oldp+164,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            tracep->chgQData(oldp+165,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
            tracep->chgQData(oldp+167,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
            tracep->chgBit(oldp+169,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                            >> 3U))));
            tracep->chgBit(oldp+170,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                            >> 2U))));
            tracep->chgCData(oldp+171,((7U & (IData)(vlSelf->top__DOT__aluctr_ex))),3);
            tracep->chgQData(oldp+172,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
            tracep->chgBit(oldp+174,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
            tracep->chgCData(oldp+175,((0xfU & (IData)(vlSelf->top__DOT__aluctr_ex))),4);
            tracep->chgBit(oldp+176,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                            >> 4U))));
            tracep->chgQData(oldp+177,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
            tracep->chgQData(oldp+179,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
            tracep->chgQData(oldp+181,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
            tracep->chgBit(oldp+183,((8U == (0x1fU 
                                             & (vlSelf->top__DOT__instr_ls 
                                                >> 2U)))));
            tracep->chgBit(oldp+184,((0U == (0x1fU 
                                             & (vlSelf->top__DOT__instr_ls 
                                                >> 2U)))));
            tracep->chgCData(oldp+185,((7U & (vlSelf->top__DOT__instr_ls 
                                              >> 0xcU))),3);
            tracep->chgQData(oldp+186,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base),64);
            tracep->chgQData(oldp+188,((0xfffffffffffffff8ULL 
                                        & vlSelf->top__DOT__alures_ls)),64);
            tracep->chgBit(oldp+190,((IData)((0U == 
                                              (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+191,((IData)((0x4000U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+192,((IData)((0x1000U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+193,((IData)((0x5000U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+194,((IData)((0x2000U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+195,((IData)((0x6000U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+196,((IData)((0x3000U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgCData(oldp+197,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
            tracep->chgSData(oldp+198,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
            tracep->chgIData(oldp+199,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
            tracep->chgBit(oldp+200,((IData)((0x20U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+201,((IData)((0x1020U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+202,((IData)((0x2020U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+203,((IData)((0x3020U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgQData(oldp+204,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_b),64);
            tracep->chgQData(oldp+206,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_w),64);
            tracep->chgQData(oldp+208,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data),64);
        }
        tracep->chgBit(oldp+210,(vlSelf->clk));
        tracep->chgBit(oldp+211,(vlSelf->rst_n));
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
