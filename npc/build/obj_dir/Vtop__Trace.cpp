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
    VlWide<3>/*95:0*/ __Vtemp78;
    VlWide<3>/*95:0*/ __Vtemp80;
    VlWide<3>/*95:0*/ __Vtemp81;
    VlWide<3>/*95:0*/ __Vtemp82;
    VlWide<3>/*95:0*/ __Vtemp83;
    VlWide<3>/*95:0*/ __Vtemp84;
    VlWide<3>/*95:0*/ __Vtemp87;
    VlWide<3>/*95:0*/ __Vtemp88;
    VlWide<3>/*95:0*/ __Vtemp89;
    VlWide<3>/*95:0*/ __Vtemp90;
    VlWide<3>/*95:0*/ __Vtemp91;
    VlWide<8>/*255:0*/ __Vtemp96;
    VlWide<10>/*319:0*/ __Vtemp101;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_arready));
            tracep->chgBit(oldp+1,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid));
            tracep->chgCData(oldp+2,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rresp),2);
            tracep->chgQData(oldp+3,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rdata),64);
            tracep->chgQData(oldp+5,(vlSelf->top__DOT__axi_if_u__DOT__addr_reg),64);
            tracep->chgBit(oldp+7,(vlSelf->top__DOT__axi_if_u__DOT__instr_valid_reg));
            tracep->chgQData(oldp+8,(vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg),64);
            tracep->chgBit(oldp+10,(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok));
            tracep->chgQData(oldp+11,(vlSelf->top__DOT__axi_ls_u__DOT__addr_reg),64);
            tracep->chgQData(oldp+13,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),64);
            tracep->chgBit(oldp+15,(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid_reg));
            tracep->chgQData(oldp+16,(vlSelf->top__DOT__axi_ls_u__DOT__rd_data_reg),64);
            tracep->chgBit(oldp+18,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_awready));
            tracep->chgBit(oldp+19,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_wready));
            tracep->chgCData(oldp+20,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_bresp),2);
            tracep->chgBit(oldp+21,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_bvalid));
            tracep->chgQData(oldp+22,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_awaddr),64);
            tracep->chgQData(oldp+24,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_araddr),64);
            tracep->chgQData(oldp+26,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg0),64);
            tracep->chgQData(oldp+28,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg1),64);
            tracep->chgQData(oldp+30,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg2),64);
            tracep->chgQData(oldp+32,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg3),64);
            tracep->chgBit(oldp+34,(((((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_wready) 
                                       & (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WVALID)) 
                                      & (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_awready)) 
                                     & (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWVALID))));
            tracep->chgBit(oldp+35,(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__aw_en));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+36,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state) 
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
            tracep->chgBit(oldp+37,((((IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state) 
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
            tracep->chgCData(oldp+38,(((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                        ? ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                            ? ((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid)
                                                ? 2U
                                                : 3U)
                                            : ((0ULL 
                                                != vlSelf->top__DOT__pc_new)
                                                ? (
                                                   (vlSelf->top__DOT__pc_new 
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
            tracep->chgCData(oldp+39,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
                                        ? ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
                                            ? ((IData)(vlSelf->top__DOT__ls_axi_w_ready_i)
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
                                            ? ((IData)(vlSelf->top__DOT__ls_axi_aw_ready_i)
                                                ? 3U
                                                : 1U)
                                            : ((8U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                    >> 4U)))
                                                ? 1U
                                                : 0U)))),2);
            tracep->chgCData(oldp+40,(((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
                                        ? ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
                                            ? ((IData)(vlSelf->top__DOT__ls_axi_r_valid_i)
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
                                            ? ((IData)(vlSelf->top__DOT__ls_axi_ar_ready_i)
                                                ? 3U
                                                : 1U)
                                            : ((3U 
                                                == 
                                                (0x7fU 
                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0U)))),2);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+41,(vlSelf->top__DOT__instr_fetching));
            tracep->chgBit(oldp+42,(vlSelf->top__DOT__axi_if_u__DOT__ar_valid));
            tracep->chgQData(oldp+43,(vlSelf->top__DOT__pc_new),64);
            tracep->chgBit(oldp+45,(vlSelf->top__DOT__axi_if_u__DOT__r_ready));
            tracep->chgBit(oldp+46,(vlSelf->top__DOT__axi_ls_u__DOT__aw_valid));
            tracep->chgQData(oldp+47,((((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                           >> 2U)))),64);
            tracep->chgCData(oldp+49,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
            tracep->chgBit(oldp+50,(vlSelf->top__DOT__axi_ls_u__DOT__w_valid));
            tracep->chgQData(oldp+51,((vlSelf->top__DOT__ls_u__DOT__wr_data 
                                       << (0x38U & 
                                           (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                            << 1U)))),64);
            tracep->chgCData(oldp+53,((0xffU & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask) 
                                                << 
                                                (7U 
                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                    >> 2U))))),8);
            tracep->chgBit(oldp+54,(vlSelf->top__DOT__axi_ls_u__DOT__b_ready));
            tracep->chgBit(oldp+55,(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid));
            tracep->chgBit(oldp+56,(vlSelf->top__DOT__axi_ls_u__DOT__r_ready));
            tracep->chgBit(oldp+57,(vlSelf->top__DOT__is_jump));
            tracep->chgQData(oldp+58,(((0x200000U & 
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
            tracep->chgBit(oldp+60,((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                               | (~ (IData)(vlSelf->top__DOT__sram_data_valid))) 
                                              | (IData)(vlSelf->top__DOT__ls_not_ok))))));
            tracep->chgBit(oldp+61,(vlSelf->top__DOT__sram_data_valid));
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__sram_rdata),64);
            tracep->chgBit(oldp+64,((0ULL != vlSelf->top__DOT__pc_new)));
            tracep->chgIData(oldp+65,(((1U & (IData)(
                                                     (vlSelf->top__DOT__pc_new 
                                                      >> 2U)))
                                        ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                   >> 0x20U))
                                        : (IData)(vlSelf->top__DOT__sram_rdata))),32);
            tracep->chgQData(oldp+66,((((QData)((IData)(
                                                        vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
            tracep->chgIData(oldp+68,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__ID_u__DOT__imm),64);
            tracep->chgBit(oldp+71,(vlSelf->top__DOT__src1sel_id));
            tracep->chgCData(oldp+72,(vlSelf->top__DOT__src2sel_id),2);
            tracep->chgCData(oldp+73,(vlSelf->top__DOT__aluctr_id),5);
            tracep->chgBit(oldp+74,(vlSelf->top__DOT__is_brc_id));
            tracep->chgBit(oldp+75,(vlSelf->top__DOT__is_jal_id));
            tracep->chgBit(oldp+76,(vlSelf->top__DOT__is_jalr_id));
            tracep->chgBit(oldp+77,(vlSelf->top__DOT__wben_id));
            tracep->chgCData(oldp+78,(vlSelf->top__DOT__rs1_idx_id),5);
            tracep->chgCData(oldp+79,(vlSelf->top__DOT__rs2_idx_id),5);
            tracep->chgBit(oldp+80,(vlSelf->top__DOT__DivEn_id));
            tracep->chgCData(oldp+81,(vlSelf->top__DOT__DivSel_id),3);
            tracep->chgBit(oldp+82,(vlSelf->top__DOT__in_trap_id));
            tracep->chgBit(oldp+83,(vlSelf->top__DOT__out_trap_id));
            tracep->chgBit(oldp+84,(vlSelf->top__DOT__trap_id));
            tracep->chgBit(oldp+85,(vlSelf->top__DOT__ld_use_hazard));
            tracep->chgBit(oldp+86,(vlSelf->top__DOT__id_flush));
            tracep->chgQData(oldp+87,((((QData)((IData)(
                                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                         << 5U) | ((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                   >> 0x1bU)))),64);
            tracep->chgIData(oldp+89,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                        << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                  >> 0x1bU))),32);
            tracep->chgQData(oldp+90,(((0x4000000U 
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
            tracep->chgBit(oldp+92,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x12U))));
            tracep->chgCData(oldp+93,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 0x10U))),2);
            tracep->chgQData(oldp+94,((((QData)((IData)(
                                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                         << 5U) | ((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                   >> 0x1bU)))),64);
            tracep->chgQData(oldp+96,((((QData)((IData)(
                                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                         << 5U) | ((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                   >> 0x1bU)))),64);
            tracep->chgQData(oldp+98,((((QData)((IData)(
                                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                         << 5U) | ((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                   >> 0x1bU)))),64);
            tracep->chgQData(oldp+100,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
            tracep->chgCData(oldp+102,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0x16U))),5);
            tracep->chgBit(oldp+103,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+104,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+105,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+106,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+107,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 4U))));
            tracep->chgCData(oldp+108,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 1U))),3);
            tracep->chgBit(oldp+109,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
            tracep->chgBit(oldp+110,((1U & (~ ((~ (IData)(vlSelf->top__DOT__sram_data_valid)) 
                                               | (IData)(vlSelf->top__DOT__ls_not_ok))))));
            tracep->chgQData(oldp+111,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
            tracep->chgCData(oldp+113,(vlSelf->top__DOT__rs1_sel),2);
            tracep->chgCData(oldp+114,(vlSelf->top__DOT__rs2_sel),2);
            tracep->chgCData(oldp+115,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0xaU))),5);
            tracep->chgCData(oldp+116,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 5U))),5);
            tracep->chgBit(oldp+117,(vlSelf->top__DOT__ex_flush));
            tracep->chgQData(oldp+118,((((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                              >> 2U)))),64);
            tracep->chgQData(oldp+120,((((QData)((IData)(
                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                              >> 2U)))),64);
            tracep->chgIData(oldp+122,(((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                         << 0x1eU) 
                                        | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 2U))),32);
            tracep->chgQData(oldp+123,(((((((((- (QData)((IData)(
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
            tracep->chgBit(oldp+125,((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                            >> 1U))));
            tracep->chgQData(oldp+126,(vlSelf->top__DOT__csrdata_ls),64);
            tracep->chgQData(oldp+128,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
            tracep->chgQData(oldp+130,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
            tracep->chgBit(oldp+132,((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])));
            tracep->chgBit(oldp+133,(vlSelf->top__DOT__ls_not_ok));
            tracep->chgBit(oldp+134,((3U == (0x7fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+135,((8U == (0x1fU 
                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 4U)))));
            tracep->chgQData(oldp+136,(vlSelf->top__DOT__ls_u__DOT__wr_data),64);
            tracep->chgCData(oldp+138,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
            tracep->chgQData(oldp+139,(vlSelf->top__DOT__ls_sram_rd_data),64);
            tracep->chgQData(oldp+141,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                              >> 1U)))),64);
            tracep->chgQData(oldp+143,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                              >> 1U)))),64);
            tracep->chgQData(oldp+145,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                              >> 1U)))),64);
            tracep->chgIData(oldp+147,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                         << 0x1fU) 
                                        | (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                           >> 1U))),32);
            tracep->chgQData(oldp+148,(vlSelf->top__DOT__wb_data),64);
            tracep->chgCData(oldp+150,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U))),5);
            tracep->chgBit(oldp+151,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
            tracep->chgQData(oldp+152,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
            tracep->chgBit(oldp+154,(vlSelf->top__DOT__wb_stall_n));
            tracep->chgBit(oldp+155,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
            tracep->chgQData(oldp+156,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
            tracep->chgCData(oldp+158,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_prot),3);
            tracep->chgCData(oldp+159,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id),4);
            tracep->chgBit(oldp+160,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_user));
            tracep->chgCData(oldp+161,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_len),8);
            tracep->chgCData(oldp+162,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
            tracep->chgCData(oldp+163,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_burst),2);
            tracep->chgBit(oldp+164,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_lock));
            tracep->chgCData(oldp+165,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_cache),4);
            tracep->chgCData(oldp+166,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_qos),4);
            tracep->chgCData(oldp+167,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_region),4);
            tracep->chgBit(oldp+168,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
            tracep->chgQData(oldp+169,(((IData)(vlSelf->top__DOT__is_jump)
                                         ? ((0x200000U 
                                             & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                             ? (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                                + (
                                                   ((QData)((IData)(
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
                                                + (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                    << 0x25U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                       << 5U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                         >> 0x1bU)))))
                                         : ((IData)(vlSelf->top__DOT__in_trap_id)
                                             ? vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec
                                             : ((IData)(vlSelf->top__DOT__out_trap_id)
                                                 ? vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc
                                                 : 
                                                (4ULL 
                                                 + vlSelf->top__DOT__pc_new))))),64);
            tracep->chgCData(oldp+171,(vlSelf->top__DOT__axi_if_u__DOT__r_state),2);
            tracep->chgQData(oldp+172,(((IData)(vlSelf->top__DOT__id_flush)
                                         ? 0ULL : vlSelf->top__DOT__pc_new)),64);
            tracep->chgIData(oldp+174,(((IData)(vlSelf->top__DOT__id_flush)
                                         ? 0U : ((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                                  ? (IData)(
                                                            (vlSelf->top__DOT__sram_rdata 
                                                             >> 0x20U))
                                                  : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
            __Vtemp78[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                              ? 0U : ((1U & (IData)(
                                                    (vlSelf->top__DOT__pc_new 
                                                     >> 2U)))
                                       ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                  >> 0x20U))
                                       : (IData)(vlSelf->top__DOT__sram_rdata)));
            __Vtemp78[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                      ? 0ULL : vlSelf->top__DOT__pc_new));
            __Vtemp78[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                       ? 0ULL : vlSelf->top__DOT__pc_new) 
                                     >> 0x20U));
            tracep->chgWData(oldp+175,(__Vtemp78),96);
            tracep->chgWData(oldp+178,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
            tracep->chgCData(oldp+181,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
            tracep->chgCData(oldp+182,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                 >> 2U))),5);
            tracep->chgCData(oldp+183,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+184,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 0x19U)),7);
            tracep->chgIData(oldp+185,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 7U)),25);
            tracep->chgQData(oldp+186,(((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
            tracep->chgIData(oldp+188,(((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
            tracep->chgBit(oldp+189,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__is_jalr_id))));
            tracep->chgBit(oldp+190,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__is_jal_id))));
            tracep->chgBit(oldp+191,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__is_brc_id))));
            tracep->chgBit(oldp+192,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__wben_id))));
            tracep->chgBit(oldp+193,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__trap_id))));
            tracep->chgWData(oldp+194,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),315);
            tracep->chgQData(oldp+204,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
            tracep->chgQData(oldp+206,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
            tracep->chgQData(oldp+208,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
            VL_EXTEND_WQ(65,64, __Vtemp80, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp81, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp82, __Vtemp80, __Vtemp81);
            VL_EXTEND_WI(65,1, __Vtemp83, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp84, __Vtemp82, __Vtemp83);
            tracep->chgBit(oldp+210,((1U & ((0x2000000U 
                                             & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                             ? ((1U 
                                                 & __Vtemp84[2U]) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                             : ((IData)(
                                                        (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                         >> 0x3fU)) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
            tracep->chgBit(oldp+211,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
            tracep->chgQData(oldp+212,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
            tracep->chgBit(oldp+214,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            tracep->chgQData(oldp+215,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
            tracep->chgQData(oldp+217,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
            tracep->chgBit(oldp+219,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+220,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+221,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x16U))),3);
            tracep->chgQData(oldp+222,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
            VL_EXTEND_WQ(65,64, __Vtemp87, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp88, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp89, __Vtemp87, __Vtemp88);
            VL_EXTEND_WI(65,1, __Vtemp90, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp91, __Vtemp89, __Vtemp90);
            tracep->chgBit(oldp+224,((1U & __Vtemp91[2U])));
            tracep->chgBit(oldp+225,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
            tracep->chgQData(oldp+226,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+228,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+230,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+232,(((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
            tracep->chgCData(oldp+234,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                >> 0x16U))),4);
            tracep->chgBit(oldp+235,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+236,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
            tracep->chgQData(oldp+237,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
            tracep->chgQData(oldp+239,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
            tracep->chgQData(oldp+241,((0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
            tracep->chgQData(oldp+243,((~ (0xffffffffffffffffULL 
                                           >> (0x3fU 
                                               & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
            tracep->chgQData(oldp+245,(((0x4000000U 
                                         & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                         ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                            & (QData)((IData)(
                                                              ((0xffffffffffffffffULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                               >> 0x20U))))
                                         : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
            tracep->chgQData(oldp+247,(((0x4000000U 
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
            tracep->chgQData(oldp+249,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
            tracep->chgCData(oldp+251,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                              >> 7U))),3);
            tracep->chgQData(oldp+252,(((((QData)((IData)(
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
            tracep->chgQData(oldp+254,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                        + (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                            << 0x25U) 
                                           | (((QData)((IData)(
                                                               vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                 >> 0x1bU))))),64);
            tracep->chgBit(oldp+256,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
            tracep->chgBit(oldp+257,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
            tracep->chgBit(oldp+258,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
            tracep->chgQData(oldp+259,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
            tracep->chgQData(oldp+261,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
            tracep->chgBit(oldp+263,((1U & ((0x200U 
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
            tracep->chgCData(oldp+264,((0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 9U))),5);
            tracep->chgBit(oldp+265,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
            tracep->chgCData(oldp+266,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
            tracep->chgBit(oldp+267,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
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
            tracep->chgBit(oldp+268,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                       & ((0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 8U)) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0xaU)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+269,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                       & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0xaU)))) 
                                      & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
            tracep->chgBit(oldp+270,((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
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
            tracep->chgBit(oldp+271,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                       & ((0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 8U)) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 5U)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+272,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                       & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 5U)))) 
                                      & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
            __Vtemp96[0U] = (((IData)(((0x4000000U 
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
            __Vtemp96[1U] = (((IData)(((0x4000000U 
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
            __Vtemp96[2U] = (((IData)((((0x4000000U 
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
                                       >> 0x20U)) >> 0x1eU) 
                             | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                                << 2U));
            __Vtemp96[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                              >> 0x1eU) | ((IData)(
                                                   (vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                    >> 0x20U)) 
                                           << 2U));
            __Vtemp96[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                       >> 0x20U)) >> 0x1eU) 
                             | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                 << 7U) | (0x7cU & 
                                           (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                            >> 0x19U))));
            __Vtemp96[5U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                    >> 0x19U)) | ((
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                   << 7U) 
                                                  | (0x7cU 
                                                     & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                        >> 0x19U))));
            __Vtemp96[6U] = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                    >> 0x19U)) | ((
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                                   << 7U) 
                                                  | (0x7cU 
                                                     & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                        >> 0x19U))));
            __Vtemp96[7U] = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                   >> 0x19U));
            tracep->chgWData(oldp+273,(__Vtemp96),226);
            tracep->chgWData(oldp+281,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
            tracep->chgCData(oldp+289,((7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 0xeU))),3);
            tracep->chgBit(oldp+290,((8U == (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+291,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (0U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+292,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (4U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+293,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (1U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+294,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (5U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+295,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (2U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+296,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (6U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+297,(((3U == (0x7fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U))) 
                                      & (3U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgCData(oldp+298,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
            tracep->chgSData(oldp+299,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
            tracep->chgIData(oldp+300,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
            tracep->chgBit(oldp+301,(((8U == (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 4U))) 
                                      & (0U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+302,(((8U == (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 4U))) 
                                      & (1U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+303,(((8U == (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 4U))) 
                                      & (2U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+304,(((8U == (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 4U))) 
                                      & (3U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+305,(((0U == (0x1fU 
                                              & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 3U))) 
                                      & ((0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0x16U)) 
                                         == (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
            tracep->chgBit(oldp+306,((1U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU)))));
            tracep->chgBit(oldp+307,((2U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU)))));
            tracep->chgBit(oldp+308,((3U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU)))));
            tracep->chgBit(oldp+309,((0x1cU == (0x1fU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U)))));
            tracep->chgBit(oldp+310,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
            tracep->chgBit(oldp+311,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
            tracep->chgBit(oldp+312,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
            tracep->chgBit(oldp+313,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
            tracep->chgBit(oldp+314,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
            tracep->chgQData(oldp+315,(((((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U))) 
                                        | vlSelf->top__DOT__csrdata_ls)),64);
            tracep->chgQData(oldp+317,(((~ (((QData)((IData)(
                                                             vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                << 0x1eU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                  >> 2U)))) 
                                        & vlSelf->top__DOT__csrdata_ls)),64);
            tracep->chgQData(oldp+319,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
            tracep->chgQData(oldp+321,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
            tracep->chgQData(oldp+323,(((0x1cU == (0x1fU 
                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                      >> 4U)))
                                         ? 0xbULL : 0ULL)),64);
            tracep->chgQData(oldp+325,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
            tracep->chgCData(oldp+327,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
            tracep->chgCData(oldp+328,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
            tracep->chgCData(oldp+329,((0x38U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                 << 1U))),6);
            tracep->chgWData(oldp+330,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
            tracep->chgWData(oldp+340,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [2U] | vlSelf->__Vm_traceActivity
                         [3U]))) {
            tracep->chgQData(oldp+350,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs2_idx_id])),64);
            tracep->chgQData(oldp+352,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs1_idx_id])),64);
            __Vtemp101[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
            __Vtemp101[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                               >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                                  >> 0x20U)) 
                                         << 0x1bU));
            __Vtemp101[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                        >> 0x20U)) 
                               >> 5U) | ((IData)(((0U 
                                                   == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                                  [vlSelf->top__DOT__rs1_idx_id])) 
                                         << 0x1bU));
            __Vtemp101[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
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
            __Vtemp101[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
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
            __Vtemp101[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
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
            __Vtemp101[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                          ? 0ULL : 
                                         vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                         [vlSelf->top__DOT__rs2_idx_id]) 
                                        >> 0x20U)) 
                               >> 5U) | (((IData)(vlSelf->top__DOT__ex_flush)
                                           ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                                         << 0x1bU));
            __Vtemp101[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
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
            __Vtemp101[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
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
            __Vtemp101[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                       >> 0x20U)) >> 5U);
            tracep->chgWData(oldp+354,(__Vtemp101),315);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgQData(oldp+364,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
            tracep->chgQData(oldp+366,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
            tracep->chgQData(oldp+368,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
            tracep->chgQData(oldp+370,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
            tracep->chgQData(oldp+372,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
            tracep->chgQData(oldp+374,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
            tracep->chgQData(oldp+376,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
            tracep->chgQData(oldp+378,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
            tracep->chgQData(oldp+380,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
            tracep->chgQData(oldp+382,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
            tracep->chgQData(oldp+384,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
            tracep->chgQData(oldp+386,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
            tracep->chgQData(oldp+388,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
            tracep->chgQData(oldp+390,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
            tracep->chgQData(oldp+392,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
            tracep->chgQData(oldp+394,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
            tracep->chgQData(oldp+396,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
            tracep->chgQData(oldp+398,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
            tracep->chgQData(oldp+400,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
            tracep->chgQData(oldp+402,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
            tracep->chgQData(oldp+404,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
            tracep->chgQData(oldp+406,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
            tracep->chgQData(oldp+408,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
            tracep->chgQData(oldp+410,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
            tracep->chgQData(oldp+412,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
            tracep->chgQData(oldp+414,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
            tracep->chgQData(oldp+416,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
            tracep->chgQData(oldp+418,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
            tracep->chgQData(oldp+420,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
            tracep->chgQData(oldp+422,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
            tracep->chgQData(oldp+424,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
            tracep->chgQData(oldp+426,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+428,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
            tracep->chgCData(oldp+429,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                         ? 0U : (3U 
                                                 & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_resp)))),2);
            tracep->chgQData(oldp+430,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                         ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
            tracep->chgBit(oldp+432,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last)))));
            tracep->chgCData(oldp+433,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
            tracep->chgBit(oldp+434,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                       : 0U)));
            tracep->chgCData(oldp+435,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                         ? (3U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_resp))
                                         : 0U)),2);
            tracep->chgQData(oldp+436,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                         ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data
                                         : 0ULL)),64);
            tracep->chgBit(oldp+438,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last))
                                       : 0U)));
            tracep->chgBit(oldp+439,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
            tracep->chgBit(oldp+440,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
            tracep->chgCData(oldp+441,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_resp),2);
            tracep->chgQData(oldp+442,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
            tracep->chgBit(oldp+444,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        }
        tracep->chgBit(oldp+445,(vlSelf->clk));
        tracep->chgBit(oldp+446,(vlSelf->rst_n));
        tracep->chgQData(oldp+447,(vlSelf->pc_diff),64);
        tracep->chgQData(oldp+449,(vlSelf->pc_decoding),64);
        tracep->chgIData(oldp+451,(vlSelf->instr_diff),32);
        tracep->chgQData(oldp+452,(vlSelf->regA0),64);
        tracep->chgBit(oldp+454,(vlSelf->stall_n_diff));
        tracep->chgBit(oldp+455,(vlSelf->axi_ar_ready_i));
        tracep->chgBit(oldp+456,(vlSelf->axi_ar_valid_o));
        tracep->chgQData(oldp+457,(vlSelf->axi_ar_addr_o),64);
        tracep->chgCData(oldp+459,(vlSelf->axi_ar_prot_o),3);
        tracep->chgCData(oldp+460,(vlSelf->axi_ar_id_o),4);
        tracep->chgBit(oldp+461,(vlSelf->axi_ar_user_o));
        tracep->chgCData(oldp+462,(vlSelf->axi_ar_len_o),8);
        tracep->chgCData(oldp+463,(vlSelf->axi_ar_size_o),3);
        tracep->chgCData(oldp+464,(vlSelf->axi_ar_burst_o),2);
        tracep->chgBit(oldp+465,(vlSelf->axi_ar_lock_o));
        tracep->chgCData(oldp+466,(vlSelf->axi_ar_cache_o),4);
        tracep->chgCData(oldp+467,(vlSelf->axi_ar_qos_o),4);
        tracep->chgCData(oldp+468,(vlSelf->axi_ar_region_o),4);
        tracep->chgBit(oldp+469,(vlSelf->axi_r_ready_o));
        tracep->chgBit(oldp+470,(vlSelf->axi_r_valid_i));
        tracep->chgCData(oldp+471,(vlSelf->axi_r_resp_i),2);
        tracep->chgQData(oldp+472,(vlSelf->axi_r_data_i),64);
        tracep->chgBit(oldp+474,(vlSelf->axi_r_last_i));
        tracep->chgCData(oldp+475,(vlSelf->axi_r_id_i),4);
        tracep->chgBit(oldp+476,(vlSelf->axi_r_user_i));
        tracep->chgBit(oldp+477,(vlSelf->axi_aw_ready_i));
        tracep->chgBit(oldp+478,(vlSelf->axi_aw_valid_o));
        tracep->chgQData(oldp+479,(vlSelf->axi_aw_addr_o),64);
        tracep->chgCData(oldp+481,(vlSelf->axi_aw_prot_o),3);
        tracep->chgCData(oldp+482,(vlSelf->axi_aw_id_o),4);
        tracep->chgBit(oldp+483,(vlSelf->axi_aw_user_o));
        tracep->chgCData(oldp+484,(vlSelf->axi_aw_len_o),8);
        tracep->chgCData(oldp+485,(vlSelf->axi_aw_size_o),3);
        tracep->chgCData(oldp+486,(vlSelf->axi_aw_burst_o),2);
        tracep->chgBit(oldp+487,(vlSelf->axi_aw_lock_o));
        tracep->chgCData(oldp+488,(vlSelf->axi_aw_cache_o),4);
        tracep->chgCData(oldp+489,(vlSelf->axi_aw_qos_o),4);
        tracep->chgCData(oldp+490,(vlSelf->axi_aw_region_o),4);
        tracep->chgBit(oldp+491,(vlSelf->axi_w_ready_i));
        tracep->chgBit(oldp+492,(vlSelf->axi_w_valid_o));
        tracep->chgQData(oldp+493,(vlSelf->axi_w_data_o),64);
        tracep->chgCData(oldp+495,(vlSelf->axi_w_strb_o),8);
        tracep->chgBit(oldp+496,(vlSelf->axi_w_last_o));
        tracep->chgBit(oldp+497,(vlSelf->axi_w_user_o));
        tracep->chgBit(oldp+498,(vlSelf->axi_b_ready_o));
        tracep->chgBit(oldp+499,(vlSelf->axi_b_valid_i));
        tracep->chgCData(oldp+500,(vlSelf->axi_b_resp_i),2);
        tracep->chgCData(oldp+501,(vlSelf->axi_b_id_i),4);
        tracep->chgBit(oldp+502,(vlSelf->axi_b_user_i));
        tracep->chgBit(oldp+503,(vlSelf->axi_mmio_ar_ready_i));
        tracep->chgBit(oldp+504,(vlSelf->axi_mmio_ar_valid_o));
        tracep->chgQData(oldp+505,(vlSelf->axi_mmio_ar_addr_o),64);
        tracep->chgCData(oldp+507,(vlSelf->axi_mmio_ar_prot_o),3);
        tracep->chgCData(oldp+508,(vlSelf->axi_mmio_ar_id_o),4);
        tracep->chgBit(oldp+509,(vlSelf->axi_mmio_ar_user_o));
        tracep->chgCData(oldp+510,(vlSelf->axi_mmio_ar_len_o),8);
        tracep->chgCData(oldp+511,(vlSelf->axi_mmio_ar_size_o),3);
        tracep->chgCData(oldp+512,(vlSelf->axi_mmio_ar_burst_o),2);
        tracep->chgBit(oldp+513,(vlSelf->axi_mmio_ar_lock_o));
        tracep->chgCData(oldp+514,(vlSelf->axi_mmio_ar_cache_o),4);
        tracep->chgCData(oldp+515,(vlSelf->axi_mmio_ar_qos_o),4);
        tracep->chgCData(oldp+516,(vlSelf->axi_mmio_ar_region_o),4);
        tracep->chgBit(oldp+517,(vlSelf->axi_mmio_r_ready_o));
        tracep->chgBit(oldp+518,(vlSelf->axi_mmio_r_valid_i));
        tracep->chgCData(oldp+519,(vlSelf->axi_mmio_r_resp_i),2);
        tracep->chgQData(oldp+520,(vlSelf->axi_mmio_r_data_i),64);
        tracep->chgBit(oldp+522,(vlSelf->axi_mmio_r_last_i));
        tracep->chgCData(oldp+523,(vlSelf->axi_mmio_r_id_i),4);
        tracep->chgBit(oldp+524,(vlSelf->axi_mmio_r_user_i));
        tracep->chgBit(oldp+525,(vlSelf->axi_mmio_aw_ready_i));
        tracep->chgBit(oldp+526,(vlSelf->axi_mmio_aw_valid_o));
        tracep->chgQData(oldp+527,(vlSelf->axi_mmio_aw_addr_o),64);
        tracep->chgCData(oldp+529,(vlSelf->axi_mmio_aw_prot_o),3);
        tracep->chgCData(oldp+530,(vlSelf->axi_mmio_aw_id_o),4);
        tracep->chgBit(oldp+531,(vlSelf->axi_mmio_aw_user_o));
        tracep->chgCData(oldp+532,(vlSelf->axi_mmio_aw_len_o),8);
        tracep->chgCData(oldp+533,(vlSelf->axi_mmio_aw_size_o),3);
        tracep->chgCData(oldp+534,(vlSelf->axi_mmio_aw_burst_o),2);
        tracep->chgBit(oldp+535,(vlSelf->axi_mmio_aw_lock_o));
        tracep->chgCData(oldp+536,(vlSelf->axi_mmio_aw_cache_o),4);
        tracep->chgCData(oldp+537,(vlSelf->axi_mmio_aw_qos_o),4);
        tracep->chgCData(oldp+538,(vlSelf->axi_mmio_aw_region_o),4);
        tracep->chgBit(oldp+539,(vlSelf->axi_mmio_w_ready_i));
        tracep->chgBit(oldp+540,(vlSelf->axi_mmio_w_valid_o));
        tracep->chgQData(oldp+541,(vlSelf->axi_mmio_w_data_o),64);
        tracep->chgCData(oldp+543,(vlSelf->axi_mmio_w_strb_o),8);
        tracep->chgBit(oldp+544,(vlSelf->axi_mmio_w_last_o));
        tracep->chgBit(oldp+545,(vlSelf->axi_mmio_w_user_o));
        tracep->chgBit(oldp+546,(vlSelf->axi_mmio_b_ready_o));
        tracep->chgBit(oldp+547,(vlSelf->axi_mmio_b_valid_i));
        tracep->chgCData(oldp+548,(vlSelf->axi_mmio_b_resp_i),2);
        tracep->chgCData(oldp+549,(vlSelf->axi_mmio_b_id_i),4);
        tracep->chgBit(oldp+550,(vlSelf->axi_mmio_b_user_i));
        tracep->chgBit(oldp+551,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                   ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->chgBit(oldp+552,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                 >> 0x1dU)))
                                   ? (IData)(vlSelf->axi_mmio_aw_ready_i)
                                   : (IData)(vlSelf->axi_aw_ready_i))));
        tracep->chgBit(oldp+553,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                 >> 0x1dU)))
                                   ? (IData)(vlSelf->axi_mmio_w_ready_i)
                                   : (IData)(vlSelf->axi_w_ready_i))));
        tracep->chgBit(oldp+554,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                 >> 0x1dU)))
                                   ? (IData)(vlSelf->axi_mmio_b_valid_i)
                                   : (IData)(vlSelf->axi_b_valid_i))));
        tracep->chgCData(oldp+555,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                   >> 0x1dU)))
                                     ? (IData)(vlSelf->axi_mmio_b_resp_i)
                                     : (IData)(vlSelf->axi_b_resp_i))),2);
        tracep->chgCData(oldp+556,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                   >> 0x1dU)))
                                     ? (IData)(vlSelf->axi_mmio_b_id_i)
                                     : (IData)(vlSelf->axi_b_id_i))),4);
        tracep->chgBit(oldp+557,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__ls_axi_aw_addr_i 
                                                 >> 0x1dU)))
                                   ? (IData)(vlSelf->axi_mmio_b_user_i)
                                   : (IData)(vlSelf->axi_b_user_i))));
        tracep->chgBit(oldp+558,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_id))
                                   ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                   : 0U)));
        tracep->chgBit(oldp+559,(((1U & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
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
