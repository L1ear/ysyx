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
    VlWide<3>/*95:0*/ __Vtemp47;
    VlWide<3>/*95:0*/ __Vtemp48;
    VlWide<3>/*95:0*/ __Vtemp49;
    VlWide<3>/*95:0*/ __Vtemp50;
    VlWide<3>/*95:0*/ __Vtemp51;
    VlWide<3>/*95:0*/ __Vtemp54;
    VlWide<3>/*95:0*/ __Vtemp55;
    VlWide<3>/*95:0*/ __Vtemp56;
    VlWide<3>/*95:0*/ __Vtemp57;
    VlWide<3>/*95:0*/ __Vtemp58;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->top__DOT__src1sel_ex));
            tracep->chgCData(oldp+1,(vlSelf->top__DOT__src2sel_ex),2);
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__rs2_ex),64);
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__rs1_ex),64);
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__imm_ex),64);
            tracep->chgBit(oldp+8,(vlSelf->top__DOT__is_brc_ex));
            tracep->chgBit(oldp+9,(vlSelf->top__DOT__is_jal_ex));
            tracep->chgBit(oldp+10,(vlSelf->top__DOT__is_jalr_ex));
            tracep->chgBit(oldp+11,(vlSelf->top__DOT__DivEn_ex));
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__DivSel_ex),3);
            tracep->chgBit(oldp+13,(vlSelf->top__DOT__trap_ex));
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__rs1_idx_ex),5);
            tracep->chgCData(oldp+17,(vlSelf->top__DOT__rs2_idx_ex),5);
            tracep->chgQData(oldp+18,(vlSelf->top__DOT__rs2_ls),64);
            tracep->chgQData(oldp+20,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
            tracep->chgQData(oldp+22,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
            tracep->chgBit(oldp+24,(vlSelf->top__DOT__trap_ls));
            tracep->chgQData(oldp+25,(vlSelf->top__DOT__pc_wb),64);
            tracep->chgQData(oldp+27,(vlSelf->top__DOT__alures_wb),64);
            tracep->chgQData(oldp+29,(vlSelf->top__DOT__lsres_wb),64);
            tracep->chgQData(oldp+31,(vlSelf->top__DOT__csrdata_wb),64);
            tracep->chgBit(oldp+33,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
            tracep->chgCData(oldp+34,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
            tracep->chgBit(oldp+35,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                      & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                         == (IData)(vlSelf->top__DOT__rs1_idx_ex))) 
                                     & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
            tracep->chgBit(oldp+36,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                      & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                         == (IData)(vlSelf->top__DOT__rs2_idx_ex))) 
                                     & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
            tracep->chgQData(oldp+37,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
            tracep->chgQData(oldp+39,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [3U]))) {
            tracep->chgQData(oldp+41,(((IData)(vlSelf->top__DOT__is_jump)
                                        ? ((IData)(vlSelf->top__DOT__is_jalr_ex)
                                            ? (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                               + vlSelf->top__DOT__imm_ex)
                                            : (vlSelf->top__DOT__pc_ex 
                                               + vlSelf->top__DOT__imm_ex))
                                        : ((IData)(vlSelf->top__DOT__in_trap_id)
                                            ? vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec
                                            : ((IData)(vlSelf->top__DOT__out_trap_id)
                                                ? vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc
                                                : (4ULL 
                                                   + vlSelf->top__DOT__pc_new))))),64);
            tracep->chgQData(oldp+43,(((IData)(vlSelf->top__DOT__is_jalr_ex)
                                        ? (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                           + vlSelf->top__DOT__imm_ex)
                                        : (vlSelf->top__DOT__pc_ex 
                                           + vlSelf->top__DOT__imm_ex))),64);
            tracep->chgQData(oldp+45,(((4U & (IData)(vlSelf->top__DOT__DivSel_ex))
                                        ? ((2U & (IData)(vlSelf->top__DOT__DivSel_ex))
                                            ? ((1U 
                                                & (IData)(vlSelf->top__DOT__DivSel_ex))
                                                ? VL_MODDIV_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                                : VL_MODDIVS_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2))
                                            : ((1U 
                                                & (IData)(vlSelf->top__DOT__DivSel_ex))
                                                ? VL_DIV_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                                : VL_DIVS_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)))
                                        : ((2U & (IData)(vlSelf->top__DOT__DivSel_ex))
                                            ? ((1U 
                                                & (IData)(vlSelf->top__DOT__DivSel_ex))
                                                ? (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                   * vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                                : (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                   * vlSelf->top__DOT__ex_stage_u__DOT__src2))
                                            : ((1U 
                                                & (IData)(vlSelf->top__DOT__DivSel_ex))
                                                ? VL_MULS_QQQ(64,64,64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                                : (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                   * vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
            tracep->chgQData(oldp+47,((vlSelf->top__DOT__pc_ex 
                                       + vlSelf->top__DOT__imm_ex)),64);
            tracep->chgQData(oldp+49,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                       + vlSelf->top__DOT__imm_ex)),64);
            tracep->chgBit(oldp+51,((((IData)(vlSelf->top__DOT__wben_ls) 
                                      & ((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                   >> 7U)) 
                                         == (IData)(vlSelf->top__DOT__rs1_idx_ex))) 
                                     & (0U != (0x1fU 
                                               & (vlSelf->top__DOT__instr_ls 
                                                  >> 7U))))));
            tracep->chgBit(oldp+52,((((IData)(vlSelf->top__DOT__wben_wb) 
                                      & ((0x1fU & (vlSelf->top__DOT__instr_wb 
                                                   >> 7U)) 
                                         == (IData)(vlSelf->top__DOT__rs1_idx_ex))) 
                                     & (0U != (0x1fU 
                                               & (vlSelf->top__DOT__instr_wb 
                                                  >> 7U))))));
            tracep->chgBit(oldp+53,((((IData)(vlSelf->top__DOT__wben_ls) 
                                      & ((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                   >> 7U)) 
                                         == (IData)(vlSelf->top__DOT__rs2_idx_ex))) 
                                     & (0U != (0x1fU 
                                               & (vlSelf->top__DOT__instr_ls 
                                                  >> 7U))))));
            tracep->chgBit(oldp+54,((((IData)(vlSelf->top__DOT__wben_wb) 
                                      & ((0x1fU & (vlSelf->top__DOT__instr_wb 
                                                   >> 7U)) 
                                         == (IData)(vlSelf->top__DOT__rs2_idx_ex))) 
                                     & (0U != (0x1fU 
                                               & (vlSelf->top__DOT__instr_wb 
                                                  >> 7U))))));
            tracep->chgBit(oldp+55,(((8U == (0x1fU 
                                             & (vlSelf->top__DOT__instr_wb 
                                                >> 2U))) 
                                     & (vlSelf->top__DOT__alures_wb 
                                        == vlSelf->top__DOT__alures_ls))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
            tracep->chgQData(oldp+66,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
            tracep->chgQData(oldp+68,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
            tracep->chgQData(oldp+70,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
            tracep->chgQData(oldp+74,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
            tracep->chgQData(oldp+76,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
            tracep->chgQData(oldp+80,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
            tracep->chgQData(oldp+84,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
            tracep->chgQData(oldp+88,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
            tracep->chgQData(oldp+90,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
            tracep->chgQData(oldp+96,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
            tracep->chgQData(oldp+98,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
            tracep->chgQData(oldp+100,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
            tracep->chgQData(oldp+106,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
            tracep->chgQData(oldp+112,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
            tracep->chgQData(oldp+114,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
            tracep->chgQData(oldp+116,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
            tracep->chgQData(oldp+118,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
            tracep->chgQData(oldp+120,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_buf),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgQData(oldp+122,(vlSelf->top__DOT__pc_new),64);
            tracep->chgBit(oldp+124,(vlSelf->top__DOT__is_jump));
            tracep->chgBit(oldp+125,((1U & (~ (IData)(vlSelf->top__DOT__hazard_detect_u__DOT__hazard)))));
            tracep->chgIData(oldp+126,((IData)(vlSelf->top__DOT__IF_u__DOT__rdata)),32);
            tracep->chgQData(oldp+127,(vlSelf->top__DOT__pc_id),64);
            tracep->chgIData(oldp+129,(vlSelf->top__DOT__instr_id),32);
            tracep->chgQData(oldp+130,(vlSelf->top__DOT__ID_u__DOT__imm),64);
            tracep->chgBit(oldp+132,(vlSelf->top__DOT__src1sel_id));
            tracep->chgCData(oldp+133,(vlSelf->top__DOT__src2sel_id),2);
            tracep->chgCData(oldp+134,(vlSelf->top__DOT__aluctr_id),5);
            tracep->chgBit(oldp+135,(vlSelf->top__DOT__is_brc_id));
            tracep->chgBit(oldp+136,(vlSelf->top__DOT__is_jal_id));
            tracep->chgBit(oldp+137,(vlSelf->top__DOT__is_jalr_id));
            tracep->chgBit(oldp+138,(vlSelf->top__DOT__wben_id));
            tracep->chgCData(oldp+139,(vlSelf->top__DOT__rs1_idx_id),5);
            tracep->chgCData(oldp+140,(vlSelf->top__DOT__rs2_idx_id),5);
            tracep->chgBit(oldp+141,(vlSelf->top__DOT__DivEn_id));
            tracep->chgCData(oldp+142,(vlSelf->top__DOT__DivSel_id),3);
            tracep->chgBit(oldp+143,(vlSelf->top__DOT__in_trap_id));
            tracep->chgBit(oldp+144,(vlSelf->top__DOT__out_trap_id));
            tracep->chgBit(oldp+145,(vlSelf->top__DOT__trap_id));
            tracep->chgQData(oldp+146,(vlSelf->top__DOT__pc_ex),64);
            tracep->chgIData(oldp+148,(vlSelf->top__DOT__instr_ex),32);
            tracep->chgQData(oldp+149,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                         : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)),64);
            tracep->chgQData(oldp+151,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
            tracep->chgCData(oldp+153,(vlSelf->top__DOT__aluctr_ex),5);
            tracep->chgBit(oldp+154,(vlSelf->top__DOT__wben_ex));
            tracep->chgCData(oldp+155,(vlSelf->top__DOT__rs1_sel),2);
            tracep->chgCData(oldp+156,(vlSelf->top__DOT__rs2_sel),2);
            tracep->chgQData(oldp+157,(vlSelf->top__DOT__pc_ls),64);
            tracep->chgQData(oldp+159,(vlSelf->top__DOT__alures_ls),64);
            tracep->chgIData(oldp+161,(vlSelf->top__DOT__instr_ls),32);
            tracep->chgQData(oldp+162,(((((((((- (QData)((IData)(
                                                                 (3U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top__DOT__instr_ls))))) 
                                              & (((- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b) 
                                                                         >> 7U))))) 
                                                  << 8U) 
                                                 | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b)))) 
                                             | ((- (QData)((IData)(
                                                                   (0x4003U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->top__DOT__instr_ls))))) 
                                                & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b)))) 
                                            | ((- (QData)((IData)(
                                                                  (0x1003U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->top__DOT__instr_ls))))) 
                                               & (((- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h) 
                                                                          >> 0xfU))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h))))) 
                                           | ((- (QData)((IData)(
                                                                 (0x5003U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top__DOT__instr_ls))))) 
                                              & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h)))) 
                                          | ((- (QData)((IData)(
                                                                (0x2003U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top__DOT__instr_ls))))) 
                                             & (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w))))) 
                                         | ((- (QData)((IData)(
                                                               (0x6003U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__instr_ls))))) 
                                            & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w)))) 
                                        | ((- (QData)((IData)(
                                                              (0x3003U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__instr_ls))))) 
                                           & vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))),64);
            tracep->chgBit(oldp+164,(vlSelf->top__DOT__wben_ls));
            tracep->chgQData(oldp+165,(vlSelf->top__DOT__csrdata_ls),64);
            tracep->chgIData(oldp+167,(vlSelf->top__DOT__instr_wb),32);
            tracep->chgQData(oldp+168,(vlSelf->top__DOT__wb_data),64);
            tracep->chgCData(oldp+170,((0x1fU & (vlSelf->top__DOT__instr_wb 
                                                 >> 7U))),5);
            tracep->chgBit(oldp+171,(vlSelf->top__DOT__wben_wb));
            tracep->chgQData(oldp+172,(vlSelf->top__DOT__IF_u__DOT__rdata),64);
            tracep->chgQData(oldp+174,(((IData)(vlSelf->top__DOT__is_jump)
                                         ? 0ULL : vlSelf->top__DOT__pc_new)),64);
            tracep->chgIData(oldp+176,(((IData)(vlSelf->top__DOT__is_jump)
                                         ? 0U : (IData)(vlSelf->top__DOT__IF_u__DOT__rdata))),32);
            tracep->chgCData(oldp+177,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
            tracep->chgCData(oldp+178,((0x1fU & (vlSelf->top__DOT__instr_id 
                                                 >> 2U))),5);
            tracep->chgCData(oldp+179,((7U & (vlSelf->top__DOT__instr_id 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+180,((vlSelf->top__DOT__instr_id 
                                        >> 0x19U)),7);
            tracep->chgIData(oldp+181,((vlSelf->top__DOT__instr_id 
                                        >> 7U)),25);
            tracep->chgBit(oldp+182,(vlSelf->top__DOT__hazard_detect_u__DOT__hazard));
            tracep->chgQData(oldp+183,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
            tracep->chgQData(oldp+185,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
            tracep->chgQData(oldp+187,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
            VL_EXTEND_WQ(65,64, __Vtemp47, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp48, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp49, __Vtemp47, __Vtemp48);
            VL_EXTEND_WI(65,1, __Vtemp50, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp51, __Vtemp49, __Vtemp50);
            tracep->chgBit(oldp+189,((1U & ((8U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                             ? ((1U 
                                                 & __Vtemp51[2U]) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                             : ((IData)(
                                                        (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                         >> 0x3fU)) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
            tracep->chgBit(oldp+190,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
            tracep->chgQData(oldp+191,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
            tracep->chgBit(oldp+193,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            tracep->chgQData(oldp+194,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
            tracep->chgQData(oldp+196,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
            tracep->chgBit(oldp+198,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                            >> 3U))));
            tracep->chgBit(oldp+199,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                            >> 2U))));
            tracep->chgCData(oldp+200,((7U & (IData)(vlSelf->top__DOT__aluctr_ex))),3);
            tracep->chgQData(oldp+201,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
            VL_EXTEND_WQ(65,64, __Vtemp54, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp55, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp56, __Vtemp54, __Vtemp55);
            VL_EXTEND_WI(65,1, __Vtemp57, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp58, __Vtemp56, __Vtemp57);
            tracep->chgBit(oldp+203,((1U & __Vtemp58[2U])));
            tracep->chgBit(oldp+204,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
            tracep->chgQData(oldp+205,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+207,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+209,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgCData(oldp+211,((0xfU & (IData)(vlSelf->top__DOT__aluctr_ex))),4);
            tracep->chgBit(oldp+212,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                            >> 4U))));
            tracep->chgCData(oldp+213,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
            tracep->chgQData(oldp+214,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
            tracep->chgQData(oldp+216,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
            tracep->chgQData(oldp+218,((0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
            tracep->chgQData(oldp+220,((~ (0xffffffffffffffffULL 
                                           >> (0x3fU 
                                               & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
            tracep->chgQData(oldp+222,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                         ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                            & (QData)((IData)(
                                                              ((0xffffffffffffffffULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                               >> 0x20U))))
                                         : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
            tracep->chgQData(oldp+224,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
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
            tracep->chgQData(oldp+226,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
            tracep->chgCData(oldp+228,((7U & (vlSelf->top__DOT__instr_ex 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+229,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
            tracep->chgBit(oldp+230,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
            tracep->chgBit(oldp+231,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
            tracep->chgQData(oldp+232,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
            tracep->chgQData(oldp+234,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
            tracep->chgBit(oldp+236,((1U & ((0x4000U 
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
                                                               != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres)))))))));
            tracep->chgCData(oldp+237,((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                 >> 7U))),5);
            tracep->chgBit(oldp+238,((8U == (0x1fU 
                                             & (vlSelf->top__DOT__instr_ls 
                                                >> 2U)))));
            tracep->chgBit(oldp+239,((3U == (0x7fU 
                                             & vlSelf->top__DOT__instr_ls))));
            tracep->chgCData(oldp+240,((7U & (vlSelf->top__DOT__instr_ls 
                                              >> 0xcU))),3);
            tracep->chgQData(oldp+241,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
            tracep->chgBit(oldp+243,((8U == (0x1fU 
                                             & (vlSelf->top__DOT__instr_wb 
                                                >> 2U)))));
            tracep->chgQData(oldp+244,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base),64);
            tracep->chgQData(oldp+246,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base_buf),64);
            tracep->chgQData(oldp+248,((0xfffffffffffffff8ULL 
                                        & vlSelf->top__DOT__alures_ls)),64);
            tracep->chgBit(oldp+250,((IData)((3U == 
                                              (0x707fU 
                                               & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+251,((IData)((0x4003U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+252,((IData)((0x1003U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+253,((IData)((0x5003U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+254,((IData)((0x2003U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+255,((IData)((0x6003U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+256,((IData)((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgCData(oldp+257,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
            tracep->chgSData(oldp+258,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
            tracep->chgIData(oldp+259,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
            tracep->chgBit(oldp+260,((IData)((0x20U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+261,((IData)((0x1020U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+262,((IData)((0x2020U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+263,((IData)((0x3020U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgQData(oldp+264,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_b),64);
            tracep->chgQData(oldp+266,(((1U & (IData)(
                                                      (vlSelf->top__DOT__alures_ls 
                                                       >> 2U)))
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__alures_ls 
                                                           >> 1U)))
                                             ? (((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__ls_u__DOT__wr_data)))) 
                                                 << 0x30U) 
                                                | (0xffffffffffffULL 
                                                   & vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))
                                             : (((QData)((IData)(
                                                                 (((IData)(
                                                                           (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                                                            >> 0x30U)) 
                                                                   << 0x10U) 
                                                                  | (0xffffU 
                                                                     & (IData)(vlSelf->top__DOT__ls_u__DOT__wr_data))))) 
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
                                                                  (((IData)(vlSelf->top__DOT__ls_u__DOT__wr_data) 
                                                                    << 0x10U) 
                                                                   | (0xffffU 
                                                                      & (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))))))
                                             : ((0xffffffffffff0000ULL 
                                                 & vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->top__DOT__ls_u__DOT__wr_data)))))))),64);
            tracep->chgQData(oldp+268,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_w),64);
            tracep->chgQData(oldp+270,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data),64);
            tracep->chgBit(oldp+272,(((0U == (0x1fU 
                                              & (vlSelf->top__DOT__instr_wb 
                                                 >> 2U))) 
                                      & ((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                   >> 0x14U)) 
                                         == (0x1fU 
                                             & (vlSelf->top__DOT__instr_wb 
                                                >> 7U))))));
            tracep->chgBit(oldp+273,((1U == (7U & (vlSelf->top__DOT__instr_ls 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+274,((2U == (7U & (vlSelf->top__DOT__instr_ls 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+275,((3U == (7U & (vlSelf->top__DOT__instr_ls 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+276,((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__instr_ls 
                                                   >> 2U)))));
            tracep->chgBit(oldp+277,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
            tracep->chgBit(oldp+278,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
            tracep->chgBit(oldp+279,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
            tracep->chgBit(oldp+280,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
            tracep->chgBit(oldp+281,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
            tracep->chgQData(oldp+282,((vlSelf->top__DOT__alures_ls 
                                        | vlSelf->top__DOT__csrdata_ls)),64);
            tracep->chgQData(oldp+284,(((~ vlSelf->top__DOT__alures_ls) 
                                        & vlSelf->top__DOT__csrdata_ls)),64);
            tracep->chgQData(oldp+286,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
            tracep->chgQData(oldp+288,(((0x1cU == (0x1fU 
                                                   & (vlSelf->top__DOT__instr_ls 
                                                      >> 2U)))
                                         ? 0xbULL : 0ULL)),64);
        }
        tracep->chgBit(oldp+290,(vlSelf->clk));
        tracep->chgBit(oldp+291,(vlSelf->rst_n));
        tracep->chgQData(oldp+292,(vlSelf->pc_diff),64);
        tracep->chgQData(oldp+294,(vlSelf->pc_decoding),64);
        tracep->chgIData(oldp+296,(vlSelf->instr_diff),32);
        tracep->chgQData(oldp+297,(vlSelf->regA0),64);
        tracep->chgQData(oldp+299,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->chgQData(oldp+301,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
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
