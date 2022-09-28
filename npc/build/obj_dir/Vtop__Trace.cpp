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
    VlWide<3>/*95:0*/ __Vtemp48;
    VlWide<3>/*95:0*/ __Vtemp50;
    VlWide<3>/*95:0*/ __Vtemp51;
    VlWide<3>/*95:0*/ __Vtemp52;
    VlWide<3>/*95:0*/ __Vtemp53;
    VlWide<3>/*95:0*/ __Vtemp54;
    VlWide<3>/*95:0*/ __Vtemp57;
    VlWide<3>/*95:0*/ __Vtemp58;
    VlWide<3>/*95:0*/ __Vtemp59;
    VlWide<3>/*95:0*/ __Vtemp60;
    VlWide<3>/*95:0*/ __Vtemp61;
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
            tracep->chgQData(oldp+18,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
            tracep->chgQData(oldp+20,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
            tracep->chgBit(oldp+22,(vlSelf->top__DOT__trap_ls));
            tracep->chgQData(oldp+23,(vlSelf->top__DOT__pc_wb),64);
            tracep->chgQData(oldp+25,(vlSelf->top__DOT__alures_wb),64);
            tracep->chgQData(oldp+27,(vlSelf->top__DOT__csrdata_wb),64);
            tracep->chgBit(oldp+29,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
            tracep->chgCData(oldp+30,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
            tracep->chgBit(oldp+31,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                      & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                         == (IData)(vlSelf->top__DOT__rs1_idx_ex))) 
                                     & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
            tracep->chgBit(oldp+32,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                      & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                         == (IData)(vlSelf->top__DOT__rs2_idx_ex))) 
                                     & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
            tracep->chgQData(oldp+33,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
            tracep->chgQData(oldp+35,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [3U]))) {
            tracep->chgQData(oldp+37,(((IData)(vlSelf->top__DOT__is_jump)
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
            tracep->chgQData(oldp+39,(((IData)(vlSelf->top__DOT__is_jalr_ex)
                                        ? (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                           + vlSelf->top__DOT__imm_ex)
                                        : (vlSelf->top__DOT__pc_ex 
                                           + vlSelf->top__DOT__imm_ex))),64);
            tracep->chgQData(oldp+41,(((4U & (IData)(vlSelf->top__DOT__DivSel_ex))
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
            tracep->chgQData(oldp+43,((vlSelf->top__DOT__pc_ex 
                                       + vlSelf->top__DOT__imm_ex)),64);
            tracep->chgQData(oldp+45,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                       + vlSelf->top__DOT__imm_ex)),64);
            tracep->chgBit(oldp+47,((((IData)(vlSelf->top__DOT__wben_ls) 
                                      & ((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                   >> 7U)) 
                                         == (IData)(vlSelf->top__DOT__rs1_idx_ex))) 
                                     & (0U != (0x1fU 
                                               & (vlSelf->top__DOT__instr_ls 
                                                  >> 7U))))));
            tracep->chgBit(oldp+48,((((IData)(vlSelf->top__DOT__wben_wb) 
                                      & ((0x1fU & (vlSelf->top__DOT__instr_wb 
                                                   >> 7U)) 
                                         == (IData)(vlSelf->top__DOT__rs1_idx_ex))) 
                                     & (0U != (0x1fU 
                                               & (vlSelf->top__DOT__instr_wb 
                                                  >> 7U))))));
            tracep->chgBit(oldp+49,((((IData)(vlSelf->top__DOT__wben_ls) 
                                      & ((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                   >> 7U)) 
                                         == (IData)(vlSelf->top__DOT__rs2_idx_ex))) 
                                     & (0U != (0x1fU 
                                               & (vlSelf->top__DOT__instr_ls 
                                                  >> 7U))))));
            tracep->chgBit(oldp+50,((((IData)(vlSelf->top__DOT__wben_wb) 
                                      & ((0x1fU & (vlSelf->top__DOT__instr_wb 
                                                   >> 7U)) 
                                         == (IData)(vlSelf->top__DOT__rs2_idx_ex))) 
                                     & (0U != (0x1fU 
                                               & (vlSelf->top__DOT__instr_wb 
                                                  >> 7U))))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+51,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
            tracep->chgQData(oldp+53,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
            tracep->chgQData(oldp+55,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
            tracep->chgQData(oldp+57,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
            tracep->chgQData(oldp+59,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
            tracep->chgQData(oldp+61,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
            tracep->chgQData(oldp+71,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
            tracep->chgQData(oldp+75,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
            tracep->chgQData(oldp+81,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
            tracep->chgQData(oldp+83,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
            tracep->chgQData(oldp+85,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
            tracep->chgQData(oldp+87,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
            tracep->chgQData(oldp+95,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
            tracep->chgQData(oldp+97,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
            tracep->chgQData(oldp+99,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
            tracep->chgQData(oldp+101,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
            tracep->chgQData(oldp+103,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
            tracep->chgQData(oldp+105,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
            tracep->chgQData(oldp+107,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
            tracep->chgQData(oldp+109,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
            tracep->chgQData(oldp+111,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
            tracep->chgQData(oldp+113,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgQData(oldp+115,(vlSelf->top__DOT__pc_new),64);
            tracep->chgBit(oldp+117,(vlSelf->top__DOT__is_jump));
            tracep->chgBit(oldp+118,((1U & (~ (IData)(vlSelf->top__DOT__hazard_detect_u__DOT__hazard)))));
            tracep->chgIData(oldp+119,((IData)(vlSelf->top__DOT__IF_u__DOT__rdata)),32);
            tracep->chgQData(oldp+120,((((QData)((IData)(
                                                         vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
            tracep->chgIData(oldp+122,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
            tracep->chgQData(oldp+123,(vlSelf->top__DOT__ID_u__DOT__imm),64);
            tracep->chgBit(oldp+125,(vlSelf->top__DOT__src1sel_id));
            tracep->chgCData(oldp+126,(vlSelf->top__DOT__src2sel_id),2);
            tracep->chgCData(oldp+127,(vlSelf->top__DOT__aluctr_id),5);
            tracep->chgBit(oldp+128,(vlSelf->top__DOT__is_brc_id));
            tracep->chgBit(oldp+129,(vlSelf->top__DOT__is_jal_id));
            tracep->chgBit(oldp+130,(vlSelf->top__DOT__is_jalr_id));
            tracep->chgBit(oldp+131,(vlSelf->top__DOT__wben_id));
            tracep->chgCData(oldp+132,(vlSelf->top__DOT__rs1_idx_id),5);
            tracep->chgCData(oldp+133,(vlSelf->top__DOT__rs2_idx_id),5);
            tracep->chgBit(oldp+134,(vlSelf->top__DOT__DivEn_id));
            tracep->chgCData(oldp+135,(vlSelf->top__DOT__DivSel_id),3);
            tracep->chgBit(oldp+136,(vlSelf->top__DOT__in_trap_id));
            tracep->chgBit(oldp+137,(vlSelf->top__DOT__out_trap_id));
            tracep->chgBit(oldp+138,(vlSelf->top__DOT__trap_id));
            tracep->chgQData(oldp+139,(vlSelf->top__DOT__pc_ex),64);
            tracep->chgIData(oldp+141,(vlSelf->top__DOT__instr_ex),32);
            tracep->chgQData(oldp+142,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                         : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)),64);
            tracep->chgQData(oldp+144,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
            tracep->chgCData(oldp+146,(vlSelf->top__DOT__aluctr_ex),5);
            tracep->chgBit(oldp+147,(vlSelf->top__DOT__wben_ex));
            tracep->chgCData(oldp+148,(vlSelf->top__DOT__rs1_sel),2);
            tracep->chgCData(oldp+149,(vlSelf->top__DOT__rs2_sel),2);
            tracep->chgQData(oldp+150,(vlSelf->top__DOT__pc_ls),64);
            tracep->chgQData(oldp+152,(vlSelf->top__DOT__rs2_ls),64);
            tracep->chgQData(oldp+154,(vlSelf->top__DOT__alures_ls),64);
            tracep->chgIData(oldp+156,(vlSelf->top__DOT__instr_ls),32);
            tracep->chgBit(oldp+157,(vlSelf->top__DOT__wben_ls));
            tracep->chgQData(oldp+158,(vlSelf->top__DOT__csrdata_ls),64);
            tracep->chgQData(oldp+160,(vlSelf->top__DOT__lsres_wb),64);
            tracep->chgIData(oldp+162,(vlSelf->top__DOT__instr_wb),32);
            tracep->chgQData(oldp+163,(vlSelf->top__DOT__wb_data),64);
            tracep->chgCData(oldp+165,((0x1fU & (vlSelf->top__DOT__instr_wb 
                                                 >> 7U))),5);
            tracep->chgBit(oldp+166,(vlSelf->top__DOT__wben_wb));
            tracep->chgQData(oldp+167,(vlSelf->top__DOT__IF_u__DOT__rdata),64);
            tracep->chgQData(oldp+169,(((((IData)(vlSelf->top__DOT__is_jump) 
                                          | (IData)(vlSelf->top__DOT__in_trap_id)) 
                                         | (IData)(vlSelf->top__DOT__out_trap_id))
                                         ? 0ULL : vlSelf->top__DOT__pc_new)),64);
            tracep->chgIData(oldp+171,(((((IData)(vlSelf->top__DOT__is_jump) 
                                          | (IData)(vlSelf->top__DOT__in_trap_id)) 
                                         | (IData)(vlSelf->top__DOT__out_trap_id))
                                         ? 0U : (IData)(vlSelf->top__DOT__IF_u__DOT__rdata))),32);
            __Vtemp48[0U] = ((((IData)(vlSelf->top__DOT__is_jump) 
                               | (IData)(vlSelf->top__DOT__in_trap_id)) 
                              | (IData)(vlSelf->top__DOT__out_trap_id))
                              ? 0U : (IData)(vlSelf->top__DOT__IF_u__DOT__rdata));
            __Vtemp48[1U] = (IData)(((((IData)(vlSelf->top__DOT__is_jump) 
                                       | (IData)(vlSelf->top__DOT__in_trap_id)) 
                                      | (IData)(vlSelf->top__DOT__out_trap_id))
                                      ? 0ULL : vlSelf->top__DOT__pc_new));
            __Vtemp48[2U] = (IData)((((((IData)(vlSelf->top__DOT__is_jump) 
                                        | (IData)(vlSelf->top__DOT__in_trap_id)) 
                                       | (IData)(vlSelf->top__DOT__out_trap_id))
                                       ? 0ULL : vlSelf->top__DOT__pc_new) 
                                     >> 0x20U));
            tracep->chgWData(oldp+172,(__Vtemp48),96);
            tracep->chgWData(oldp+175,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
            tracep->chgCData(oldp+178,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
            tracep->chgCData(oldp+179,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                 >> 2U))),5);
            tracep->chgCData(oldp+180,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+181,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 0x19U)),7);
            tracep->chgIData(oldp+182,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 7U)),25);
            tracep->chgBit(oldp+183,(vlSelf->top__DOT__hazard_detect_u__DOT__hazard));
            tracep->chgQData(oldp+184,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
            tracep->chgQData(oldp+186,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
            tracep->chgQData(oldp+188,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
            VL_EXTEND_WQ(65,64, __Vtemp50, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp51, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp52, __Vtemp50, __Vtemp51);
            VL_EXTEND_WI(65,1, __Vtemp53, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp54, __Vtemp52, __Vtemp53);
            tracep->chgBit(oldp+190,((1U & ((8U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                             ? ((1U 
                                                 & __Vtemp54[2U]) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                             : ((IData)(
                                                        (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                         >> 0x3fU)) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
            tracep->chgBit(oldp+191,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
            tracep->chgQData(oldp+192,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
            tracep->chgBit(oldp+194,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            tracep->chgQData(oldp+195,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
            tracep->chgQData(oldp+197,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
            tracep->chgBit(oldp+199,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                            >> 3U))));
            tracep->chgBit(oldp+200,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                            >> 2U))));
            tracep->chgCData(oldp+201,((7U & (IData)(vlSelf->top__DOT__aluctr_ex))),3);
            tracep->chgQData(oldp+202,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
            VL_EXTEND_WQ(65,64, __Vtemp57, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp58, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp59, __Vtemp57, __Vtemp58);
            VL_EXTEND_WI(65,1, __Vtemp60, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp61, __Vtemp59, __Vtemp60);
            tracep->chgBit(oldp+204,((1U & __Vtemp61[2U])));
            tracep->chgBit(oldp+205,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
            tracep->chgQData(oldp+206,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+208,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+210,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgCData(oldp+212,((0xfU & (IData)(vlSelf->top__DOT__aluctr_ex))),4);
            tracep->chgBit(oldp+213,((1U & ((IData)(vlSelf->top__DOT__aluctr_ex) 
                                            >> 4U))));
            tracep->chgCData(oldp+214,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
            tracep->chgQData(oldp+215,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
            tracep->chgQData(oldp+217,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
            tracep->chgQData(oldp+219,((0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
            tracep->chgQData(oldp+221,((~ (0xffffffffffffffffULL 
                                           >> (0x3fU 
                                               & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
            tracep->chgQData(oldp+223,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
                                         ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                            & (QData)((IData)(
                                                              ((0xffffffffffffffffULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                               >> 0x20U))))
                                         : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
            tracep->chgQData(oldp+225,(((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
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
            tracep->chgQData(oldp+227,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
            tracep->chgCData(oldp+229,((7U & (vlSelf->top__DOT__instr_ex 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+230,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
            tracep->chgBit(oldp+231,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
            tracep->chgBit(oldp+232,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
            tracep->chgQData(oldp+233,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
            tracep->chgQData(oldp+235,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
            tracep->chgBit(oldp+237,((1U & ((0x4000U 
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
            tracep->chgCData(oldp+238,((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                 >> 7U))),5);
            tracep->chgBit(oldp+239,((8U == (0x1fU 
                                             & (vlSelf->top__DOT__instr_ls 
                                                >> 2U)))));
            tracep->chgBit(oldp+240,((3U == (0x7fU 
                                             & vlSelf->top__DOT__instr_ls))));
            tracep->chgCData(oldp+241,((7U & (vlSelf->top__DOT__instr_ls 
                                              >> 0xcU))),3);
            tracep->chgQData(oldp+242,((((0U == (0x1fU 
                                                 & (vlSelf->top__DOT__instr_wb 
                                                    >> 2U))) 
                                         & ((0x1fU 
                                             & (vlSelf->top__DOT__instr_ls 
                                                >> 0x14U)) 
                                            == (0x1fU 
                                                & (vlSelf->top__DOT__instr_wb 
                                                   >> 7U))))
                                         ? vlSelf->top__DOT__lsres_wb
                                         : vlSelf->top__DOT__rs2_ls)),64);
            tracep->chgBit(oldp+244,((8U == (0x1fU 
                                             & (vlSelf->top__DOT__instr_wb 
                                                >> 2U)))));
            tracep->chgQData(oldp+245,((0xfffffffffffffff8ULL 
                                        & vlSelf->top__DOT__alures_ls)),64);
            tracep->chgBit(oldp+247,((IData)((3U == 
                                              (0x707fU 
                                               & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+248,((IData)((0x4003U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+249,((IData)((0x1003U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+250,((IData)((0x5003U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+251,((IData)((0x2003U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+252,((IData)((0x6003U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+253,((IData)((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgCData(oldp+254,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
            tracep->chgBit(oldp+255,((IData)((0x20U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+256,((IData)((0x1020U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+257,((IData)((0x2020U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+258,((IData)((0x3020U 
                                              == (0x707cU 
                                                  & vlSelf->top__DOT__instr_ls)))));
            tracep->chgBit(oldp+259,(((0U == (0x1fU 
                                              & (vlSelf->top__DOT__instr_wb 
                                                 >> 2U))) 
                                      & ((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                   >> 0x14U)) 
                                         == (0x1fU 
                                             & (vlSelf->top__DOT__instr_wb 
                                                >> 7U))))));
            tracep->chgBit(oldp+260,((1U == (7U & (vlSelf->top__DOT__instr_ls 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+261,((2U == (7U & (vlSelf->top__DOT__instr_ls 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+262,((3U == (7U & (vlSelf->top__DOT__instr_ls 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+263,((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__instr_ls 
                                                   >> 2U)))));
            tracep->chgBit(oldp+264,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
            tracep->chgBit(oldp+265,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
            tracep->chgBit(oldp+266,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
            tracep->chgBit(oldp+267,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
            tracep->chgBit(oldp+268,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
            tracep->chgQData(oldp+269,((vlSelf->top__DOT__alures_ls 
                                        | vlSelf->top__DOT__csrdata_ls)),64);
            tracep->chgQData(oldp+271,(((~ vlSelf->top__DOT__alures_ls) 
                                        & vlSelf->top__DOT__csrdata_ls)),64);
            tracep->chgQData(oldp+273,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
            tracep->chgQData(oldp+275,(((0x1cU == (0x1fU 
                                                   & (vlSelf->top__DOT__instr_ls 
                                                      >> 2U)))
                                         ? 0xbULL : 0ULL)),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgCData(oldp+277,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
            tracep->chgSData(oldp+278,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
            tracep->chgIData(oldp+279,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
        }
        tracep->chgBit(oldp+280,(vlSelf->clk));
        tracep->chgBit(oldp+281,(vlSelf->rst_n));
        tracep->chgQData(oldp+282,(vlSelf->pc_diff),64);
        tracep->chgQData(oldp+284,(vlSelf->pc_decoding),64);
        tracep->chgIData(oldp+286,(vlSelf->instr_diff),32);
        tracep->chgQData(oldp+287,(vlSelf->regA0),64);
        tracep->chgQData(oldp+289,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs2_idx_id])),64);
        tracep->chgQData(oldp+291,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                     ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                    [vlSelf->top__DOT__rs1_idx_id])),64);
        tracep->chgQData(oldp+293,(((((((((- (QData)((IData)(
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
        tracep->chgQData(oldp+295,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base),64);
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
