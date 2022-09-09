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
            tracep->chgQData(oldp+13,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
            tracep->chgCData(oldp+15,(vlSelf->top__DOT__rs1_idx_ex),5);
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__rs2_idx_ex),5);
            tracep->chgQData(oldp+17,(vlSelf->top__DOT__rs2_ls),64);
            tracep->chgQData(oldp+19,(vlSelf->top__DOT__pc_wb),64);
            tracep->chgQData(oldp+21,(vlSelf->top__DOT__alures_wb),64);
            tracep->chgQData(oldp+23,(vlSelf->top__DOT__lsres_wb),64);
            tracep->chgQData(oldp+25,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
            tracep->chgCData(oldp+27,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
            tracep->chgQData(oldp+28,((0xffffffffffffffffULL 
                                       >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
            tracep->chgQData(oldp+30,((~ (0xffffffffffffffffULL 
                                          >> (0x3fU 
                                              & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
            tracep->chgBit(oldp+32,((1U & (~ (IData)(
                                                     (0U 
                                                      != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
            tracep->chgBit(oldp+33,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
            tracep->chgBit(oldp+34,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
            tracep->chgQData(oldp+35,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
            tracep->chgQData(oldp+37,((~ vlSelf->top__DOT__rs2_ex)),64);
            tracep->chgBit(oldp+39,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
            tracep->chgCData(oldp+40,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
            tracep->chgBit(oldp+41,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                      & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                         == (IData)(vlSelf->top__DOT__rs1_idx_ex))) 
                                     & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
            tracep->chgBit(oldp+42,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                      & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                         == (IData)(vlSelf->top__DOT__forwarding_u__DOT__rs2_ido_idx))) 
                                     & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [3U]))) {
            tracep->chgQData(oldp+43,(((((IData)(vlSelf->top__DOT__is_jal_ex) 
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
            tracep->chgBit(oldp+45,((((IData)(vlSelf->top__DOT__is_jal_ex) 
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
            tracep->chgCData(oldp+46,(((((IData)(vlSelf->top__DOT__wben_ls) 
                                         & ((0x1fU 
                                             & (vlSelf->top__DOT__instr_ls 
                                                >> 7U)) 
                                            == (IData)(vlSelf->top__DOT__forwarding_u__DOT__rs2_ido_idx))) 
                                        & (0U != (0x1fU 
                                                  & (vlSelf->top__DOT__instr_ls 
                                                     >> 7U))))
                                        ? 1U : ((((IData)(vlSelf->top__DOT__wben_wb) 
                                                  & ((0x1fU 
                                                      & (vlSelf->top__DOT__instr_wb 
                                                         >> 7U)) 
                                                     == (IData)(vlSelf->top__DOT__forwarding_u__DOT__rs2_ido_idx))) 
                                                 & (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__instr_ls 
                                                        >> 7U))))
                                                 ? 2U
                                                 : 
                                                ((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                                   & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                                      == (IData)(vlSelf->top__DOT__forwarding_u__DOT__rs2_ido_idx))) 
                                                  & (0U 
                                                     != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))
                                                  ? 3U
                                                  : 0U)))),2);
            tracep->chgQData(oldp+47,(((2U & (IData)(vlSelf->top__DOT__rs1_sel))
                                        ? ((1U & (IData)(vlSelf->top__DOT__rs1_sel))
                                            ? vlSelf->top__DOT__forwarding_u__DOT__rd_wb
                                            : vlSelf->top__DOT__wb_data)
                                        : ((1U & (IData)(vlSelf->top__DOT__rs1_sel))
                                            ? vlSelf->top__DOT__alures_ls
                                            : vlSelf->top__DOT__rs1_ex))),64);
            tracep->chgQData(oldp+49,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                       ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+51,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                       | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+53,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                       & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+55,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                       * vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+57,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                        ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                           & (QData)((IData)(
                                                             ((0xffffffffffffffffULL 
                                                               >> 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                              >> 0x20U))))
                                        : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
            tracep->chgQData(oldp+59,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
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
            tracep->chgBit(oldp+61,((1U & ((0x4000U 
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
            tracep->chgBit(oldp+62,((((IData)(vlSelf->top__DOT__wben_ls) 
                                      & ((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                   >> 7U)) 
                                         == (IData)(vlSelf->top__DOT__rs1_idx_ex))) 
                                     & (0U != (0x1fU 
                                               & (vlSelf->top__DOT__instr_ls 
                                                  >> 7U))))));
            tracep->chgBit(oldp+63,((((IData)(vlSelf->top__DOT__wben_wb) 
                                      & ((0x1fU & (vlSelf->top__DOT__instr_wb 
                                                   >> 7U)) 
                                         == (IData)(vlSelf->top__DOT__rs1_idx_ex))) 
                                     & (0U != (0x1fU 
                                               & (vlSelf->top__DOT__instr_ls 
                                                  >> 7U))))));
            tracep->chgQData(oldp+64,(((1U & (IData)(
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
            tracep->chgQData(oldp+66,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
            tracep->chgQData(oldp+68,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
            tracep->chgQData(oldp+70,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
            tracep->chgQData(oldp+74,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
            tracep->chgQData(oldp+76,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
            tracep->chgQData(oldp+80,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
            tracep->chgQData(oldp+84,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
            tracep->chgQData(oldp+88,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
            tracep->chgQData(oldp+90,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
            tracep->chgQData(oldp+96,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
            tracep->chgQData(oldp+98,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
            tracep->chgQData(oldp+100,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
            tracep->chgQData(oldp+106,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
            tracep->chgQData(oldp+112,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
            tracep->chgQData(oldp+114,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
            tracep->chgQData(oldp+116,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
            tracep->chgQData(oldp+118,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
            tracep->chgQData(oldp+120,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
            tracep->chgQData(oldp+122,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
            tracep->chgQData(oldp+124,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
            tracep->chgQData(oldp+126,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
            tracep->chgQData(oldp+128,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgQData(oldp+130,(vlSelf->top__DOT__pc_new),64);
            tracep->chgIData(oldp+132,((IData)(vlSelf->top__DOT__IF_u__DOT__rdata)),32);
            tracep->chgQData(oldp+133,(vlSelf->top__DOT__pc_id),64);
            tracep->chgIData(oldp+135,(vlSelf->top__DOT__instr_id),32);
            tracep->chgQData(oldp+136,(vlSelf->top__DOT__ID_u__DOT__imm),64);
            tracep->chgBit(oldp+138,(vlSelf->top__DOT__src1sel_id));
            tracep->chgCData(oldp+139,(vlSelf->top__DOT__src2sel_id),2);
            tracep->chgCData(oldp+140,(vlSelf->top__DOT__aluctr_id),5);
            tracep->chgBit(oldp+141,(vlSelf->top__DOT__wben_id));
            tracep->chgCData(oldp+142,(vlSelf->top__DOT__rs1_idx_id),5);
            tracep->chgCData(oldp+143,(vlSelf->top__DOT__rs2_idx_id),5);
            tracep->chgQData(oldp+144,(vlSelf->top__DOT__pc_ex),64);
            tracep->chgIData(oldp+146,(vlSelf->top__DOT__instr_ex),32);
            tracep->chgQData(oldp+147,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                         : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)),64);
            tracep->chgCData(oldp+149,(vlSelf->top__DOT__aluctr_ex),5);
            tracep->chgBit(oldp+150,(vlSelf->top__DOT__wben_ex));
            tracep->chgCData(oldp+151,(vlSelf->top__DOT__rs1_sel),2);
            tracep->chgQData(oldp+152,(vlSelf->top__DOT__pc_ls),64);
            tracep->chgQData(oldp+154,(vlSelf->top__DOT__alures_ls),64);
            tracep->chgIData(oldp+156,(vlSelf->top__DOT__instr_ls),32);
            tracep->chgQData(oldp+157,(((((((((- (QData)((IData)(
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
            tracep->chgBit(oldp+159,(vlSelf->top__DOT__wben_ls));
            tracep->chgIData(oldp+160,(vlSelf->top__DOT__instr_wb),32);
            tracep->chgQData(oldp+161,(vlSelf->top__DOT__wb_data),64);
            tracep->chgCData(oldp+163,((0x1fU & (vlSelf->top__DOT__instr_wb 
                                                 >> 7U))),5);
            tracep->chgBit(oldp+164,(vlSelf->top__DOT__wben_wb));
            tracep->chgQData(oldp+165,(vlSelf->top__DOT__IF_u__DOT__rdata),64);
            tracep->chgCData(oldp+167,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
            tracep->chgBit(oldp+168,(vlSelf->top__DOT__ID_u__DOT__is_jalr));
            tracep->chgBit(oldp+169,(vlSelf->top__DOT__ID_u__DOT__is_jal));
            tracep->chgBit(oldp+170,(vlSelf->top__DOT__ID_u__DOT__is_brc));
            tracep->chgCData(oldp+171,((0x1fU & (vlSelf->top__DOT__instr_id 
                                                 >> 2U))),5);
            tracep->chgCData(oldp+172,((7U & (vlSelf->top__DOT__instr_id 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+173,((vlSelf->top__DOT__instr_id 
                                        >> 0x19U)),7);
            tracep->chgIData(oldp+174,((vlSelf->top__DOT__instr_id 
                                        >> 7U)),25);
            tracep->chgQData(oldp+175,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
            VL_EXTEND_WQ(65,64, __Vtemp46, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp47, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp48, __Vtemp46, __Vtemp47);
            VL_EXTEND_WI(65,1, __Vtemp49, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp50, __Vtemp48, __Vtemp49);
            tracep->chgBit(oldp+177,((1U & ((8U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                             ? ((1U 
                                                 & __Vtemp50[2U]) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                             : ((IData)(
                                                        (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                         >> 0x3fU)) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
            tracep->chgBit(oldp+178,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
            tracep->chgQData(oldp+179,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
            tracep->chgBit(oldp+181,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            tracep->chgQData(oldp+182,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
            tracep->chgQData(oldp+184,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
            tracep->chgBit(oldp+186,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                            >> 3U))));
            tracep->chgBit(oldp+187,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                            >> 2U))));
            tracep->chgCData(oldp+188,((7U & (IData)(vlSelf->top__DOT__aluctr_ex))),3);
            tracep->chgQData(oldp+189,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
            VL_EXTEND_WQ(65,64, __Vtemp53, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp54, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp55, __Vtemp53, __Vtemp54);
            VL_EXTEND_WI(65,1, __Vtemp56, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp57, __Vtemp55, __Vtemp56);
            tracep->chgBit(oldp+191,((1U & __Vtemp57[2U])));
            tracep->chgBit(oldp+192,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
            tracep->chgCData(oldp+193,((0xfU & (IData)(vlSelf->top__DOT__aluctr_ex))),4);
            tracep->chgBit(oldp+194,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                            >> 4U))));
            tracep->chgQData(oldp+195,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
            tracep->chgQData(oldp+197,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
            tracep->chgQData(oldp+199,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
            tracep->chgCData(oldp+201,((7U & (vlSelf->top__DOT__instr_ex 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+202,((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                 >> 7U))),5);
            tracep->chgBit(oldp+203,((((IData)(vlSelf->top__DOT__wben_ls) 
                                       & ((0x1fU & 
                                           (vlSelf->top__DOT__instr_ls 
                                            >> 7U)) 
                                          == (IData)(vlSelf->top__DOT__forwarding_u__DOT__rs2_ido_idx))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__instr_ls 
                                                   >> 7U))))));
            tracep->chgBit(oldp+204,((((IData)(vlSelf->top__DOT__wben_wb) 
                                       & ((0x1fU & 
                                           (vlSelf->top__DOT__instr_wb 
                                            >> 7U)) 
                                          == (IData)(vlSelf->top__DOT__forwarding_u__DOT__rs2_ido_idx))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__instr_ls 
                                                   >> 7U))))));
            tracep->chgBit(oldp+205,((8U == (0x1fU 
                                             & (vlSelf->top__DOT__instr_ls 
                                                >> 2U)))));
            tracep->chgBit(oldp+206,((0U == (0x1fU 
                                             & (vlSelf->top__DOT__instr_ls 
                                                >> 2U)))));
            tracep->chgCData(oldp+207,((7U & (vlSelf->top__DOT__instr_ls 
                                              >> 0xcU))),3);
            tracep->chgQData(oldp+208,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base),64);
            tracep->chgQData(oldp+210,((0xfffffffffffffff8ULL 
                                        & vlSelf->top__DOT__alures_ls)),64);
            tracep->chgBit(oldp+212,((IData)((0U == 
                                              (0x707cU 
                                               & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+213,((IData)((0x4000U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+214,((IData)((0x1000U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+215,((IData)((0x5000U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+216,((IData)((0x2000U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+217,((IData)((0x6000U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+218,((IData)((0x3000U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgCData(oldp+219,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
            tracep->chgSData(oldp+220,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
            tracep->chgIData(oldp+221,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
            tracep->chgBit(oldp+222,((IData)((0x20U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+223,((IData)((0x1020U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+224,((IData)((0x2020U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+225,((IData)((0x3020U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgQData(oldp+226,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_b),64);
            tracep->chgQData(oldp+228,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_w),64);
            tracep->chgQData(oldp+230,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data),64);
        }
        tracep->chgBit(oldp+232,(vlSelf->clk));
        tracep->chgBit(oldp+233,(vlSelf->rst_n));
        tracep->chgQData(oldp+234,(vlSelf->pc_diff),64);
        tracep->chgQData(oldp+236,(vlSelf->pc_decoding),64);
        tracep->chgQData(oldp+238,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->chgQData(oldp+240,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id])),64);
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
