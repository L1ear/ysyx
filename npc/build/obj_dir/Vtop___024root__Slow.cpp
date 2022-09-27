// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root____Vdpiimwrap_top__DOT__ID_u__DOT__regfile_u__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);
void Vtop___024root____Vdpiimwrap_top__DOT__IF_u__DOT__vmemread_TOP(QData/*63:0*/ raddr, IData/*31:0*/ len, QData/*63:0*/ &rdata, QData/*63:0*/ pc);

void Vtop___024root___initial__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__4\n"); );
    // Variables
    QData/*63:0*/ __Vtask_top__DOT__IF_u__DOT__vmemread__0__rdata;
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__ID_u__DOT__regfile_u__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles);
    Vtop___024root____Vdpiimwrap_top__DOT__IF_u__DOT__vmemread_TOP(vlSelf->top__DOT__pc_new, 4U, __Vtask_top__DOT__IF_u__DOT__vmemread__0__rdata, vlSelf->top__DOT__pc_new);
    vlSelf->top__DOT__IF_u__DOT__rdata = __Vtask_top__DOT__IF_u__DOT__vmemread__0__rdata;
}

void Vtop___024root___settle__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__5\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp4;
    VlWide<3>/*95:0*/ __Vtemp5;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<3>/*95:0*/ __Vtemp7;
    VlWide<3>/*95:0*/ __Vtemp9;
    VlWide<3>/*95:0*/ __Vtemp11;
    VlWide<3>/*95:0*/ __Vtemp12;
    VlWide<3>/*95:0*/ __Vtemp13;
    VlWide<3>/*95:0*/ __Vtemp14;
    VlWide<3>/*95:0*/ __Vtemp15;
    // Body
    vlSelf->pc_diff = vlSelf->top__DOT__pc_wb;
    vlSelf->regA0 = vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
        [0xaU];
    vlSelf->instr_diff = vlSelf->top__DOT__instr_wb;
    if ((1U & (IData)((vlSelf->top__DOT__alures_ls 
                       >> 2U)))) {
        vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b 
            = (0xffU & ((1U & (IData)((vlSelf->top__DOT__alures_ls 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__alures_ls))
                                                    ? (IData)(
                                                              (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                                               >> 0x38U))
                                                    : (IData)(
                                                              (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                                               >> 0x30U)))
                         : ((1U & (IData)(vlSelf->top__DOT__alures_ls))
                             ? (IData)((vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                        >> 0x28U)) : (IData)(
                                                             (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                                              >> 0x20U)))));
        vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h 
            = (0xffffU & ((1U & (IData)((vlSelf->top__DOT__alures_ls 
                                         >> 1U))) ? 
                          ((1U & (IData)(vlSelf->top__DOT__alures_ls))
                            ? (IData)((vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                       >> 0x30U)) : (IData)(
                                                            (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                                             >> 0x30U)))
                           : ((1U & (IData)(vlSelf->top__DOT__alures_ls))
                               ? (IData)((vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                          >> 0x20U))
                               : (IData)((vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                          >> 0x20U)))));
        vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w 
            = ((1U & (IData)((vlSelf->top__DOT__alures_ls 
                              >> 1U))) ? ((1U & (IData)(vlSelf->top__DOT__alures_ls))
                                           ? (IData)(
                                                     (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                                      >> 0x20U))
                                           : (IData)(
                                                     (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                                      >> 0x20U)))
                : ((1U & (IData)(vlSelf->top__DOT__alures_ls))
                    ? (IData)((vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                               >> 0x20U)) : (IData)(
                                                    (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                                     >> 0x20U))));
    } else {
        vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b 
            = (0xffU & ((1U & (IData)((vlSelf->top__DOT__alures_ls 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__alures_ls))
                                                    ? (IData)(
                                                              (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                                               >> 0x18U))
                                                    : (IData)(
                                                              (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                                               >> 0x10U)))
                         : ((1U & (IData)(vlSelf->top__DOT__alures_ls))
                             ? (IData)((vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                        >> 8U)) : (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))));
        vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h 
            = (0xffffU & ((1U & (IData)((vlSelf->top__DOT__alures_ls 
                                         >> 1U))) ? 
                          ((1U & (IData)(vlSelf->top__DOT__alures_ls))
                            ? (IData)((vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                       >> 0x10U)) : (IData)(
                                                            (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                                             >> 0x10U)))
                           : ((1U & (IData)(vlSelf->top__DOT__alures_ls))
                               ? (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base)
                               : (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))));
        vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w 
            = ((1U & (IData)((vlSelf->top__DOT__alures_ls 
                              >> 1U))) ? ((1U & (IData)(vlSelf->top__DOT__alures_ls))
                                           ? (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base)
                                           : (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))
                : ((1U & (IData)(vlSelf->top__DOT__alures_ls))
                    ? (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base)
                    : (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base)));
    }
    vlSelf->top__DOT__wb_data = ((0x40U & vlSelf->top__DOT__instr_wb)
                                  ? ((0x20U & vlSelf->top__DOT__instr_wb)
                                      ? ((0x10U & vlSelf->top__DOT__instr_wb)
                                          ? ((8U & vlSelf->top__DOT__instr_wb)
                                              ? 0ULL
                                              : ((4U 
                                                  & vlSelf->top__DOT__instr_wb)
                                                  ? 0ULL
                                                  : vlSelf->top__DOT__csrdata_wb))
                                          : ((8U & vlSelf->top__DOT__instr_wb)
                                              ? ((4U 
                                                  & vlSelf->top__DOT__instr_wb)
                                                  ? vlSelf->top__DOT__alures_wb
                                                  : 0ULL)
                                              : vlSelf->top__DOT__alures_wb))
                                      : 0ULL) : ((0x20U 
                                                  & vlSelf->top__DOT__instr_wb)
                                                  ? 
                                                 ((0x10U 
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
                                                  : 
                                                 ((0x10U 
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
                                                     : vlSelf->top__DOT__lsres_wb)))));
    vlSelf->top__DOT__ls_u__DOT__wr_data = (((0U == 
                                              (0x1fU 
                                               & (vlSelf->top__DOT__instr_wb 
                                                  >> 2U))) 
                                             & ((0x1fU 
                                                 & (vlSelf->top__DOT__instr_ls 
                                                    >> 0x14U)) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__instr_wb 
                                                    >> 7U))))
                                             ? vlSelf->top__DOT__lsres_wb
                                             : vlSelf->top__DOT__rs2_ls);
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en 
        = ((((1U == (7U & (vlSelf->top__DOT__instr_ls 
                           >> 0xcU))) | (2U == (7U 
                                                & (vlSelf->top__DOT__instr_ls 
                                                   >> 0xcU)))) 
            | (3U == (7U & (vlSelf->top__DOT__instr_ls 
                            >> 0xcU)))) & (0x1cU == 
                                           (0x1fU & 
                                            (vlSelf->top__DOT__instr_ls 
                                             >> 2U))));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin 
        = (IData)((0U != (0xaU & (IData)(vlSelf->top__DOT__aluctr_ex))));
    vlSelf->top__DOT__rs2_sel = ((((IData)(vlSelf->top__DOT__wben_ls) 
                                   & ((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                >> 7U)) 
                                      == (IData)(vlSelf->top__DOT__rs2_idx_ex))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__instr_ls 
                                             >> 7U))))
                                  ? 1U : ((((IData)(vlSelf->top__DOT__wben_wb) 
                                            & ((0x1fU 
                                                & (vlSelf->top__DOT__instr_wb 
                                                   >> 7U)) 
                                               == (IData)(vlSelf->top__DOT__rs2_idx_ex))) 
                                           & (0U != 
                                              (0x1fU 
                                               & (vlSelf->top__DOT__instr_wb 
                                                  >> 7U))))
                                           ? 2U : (
                                                   (((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                                     & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                                        == (IData)(vlSelf->top__DOT__rs2_idx_ex))) 
                                                    & (0U 
                                                       != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))
                                                    ? 3U
                                                    : 0U)));
    vlSelf->top__DOT__rs1_sel = ((((IData)(vlSelf->top__DOT__wben_ls) 
                                   & ((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                >> 7U)) 
                                      == (IData)(vlSelf->top__DOT__rs1_idx_ex))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__instr_ls 
                                             >> 7U))))
                                  ? 1U : ((((IData)(vlSelf->top__DOT__wben_wb) 
                                            & ((0x1fU 
                                                & (vlSelf->top__DOT__instr_wb 
                                                   >> 7U)) 
                                               == (IData)(vlSelf->top__DOT__rs1_idx_ex))) 
                                           & (0U != 
                                              (0x1fU 
                                               & (vlSelf->top__DOT__instr_wb 
                                                  >> 7U))))
                                           ? 2U : (
                                                   (((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                                     & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                                        == (IData)(vlSelf->top__DOT__rs1_idx_ex))) 
                                                    & (0U 
                                                       != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))
                                                    ? 3U
                                                    : 0U)));
    vlSelf->pc_decoding = vlSelf->top__DOT__pc_id;
    vlSelf->top__DOT__DivSel_id = 0U;
    if ((0x40U & vlSelf->top__DOT__instr_id)) {
        if ((0x20U & vlSelf->top__DOT__instr_id)) {
            if ((1U & (~ (vlSelf->top__DOT__instr_id 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__instr_id)) {
                    if ((4U & vlSelf->top__DOT__instr_id)) {
                        vlSelf->top__DOT__DivSel_id = 0U;
                    }
                } else {
                    vlSelf->top__DOT__DivSel_id = 0U;
                }
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__instr_id)) {
        if ((0x10U & vlSelf->top__DOT__instr_id)) {
            if ((8U & vlSelf->top__DOT__instr_id)) {
                if ((1U & (~ (vlSelf->top__DOT__instr_id 
                              >> 2U)))) {
                    vlSelf->top__DOT__DivSel_id = (7U 
                                                   & (vlSelf->top__DOT__instr_id 
                                                      >> 0xcU));
                }
            } else {
                vlSelf->top__DOT__DivSel_id = ((4U 
                                                & vlSelf->top__DOT__instr_id)
                                                ? 0U
                                                : (7U 
                                                   & (vlSelf->top__DOT__instr_id 
                                                      >> 0xcU)));
            }
        } else if ((1U & (~ (vlSelf->top__DOT__instr_id 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__instr_id 
                          >> 2U)))) {
                vlSelf->top__DOT__DivSel_id = 0U;
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__instr_id)) {
        if ((8U & vlSelf->top__DOT__instr_id)) {
            if ((1U & (~ (vlSelf->top__DOT__instr_id 
                          >> 2U)))) {
                vlSelf->top__DOT__DivSel_id = 0U;
            }
        } else {
            vlSelf->top__DOT__DivSel_id = 0U;
        }
    } else if ((1U & (~ (vlSelf->top__DOT__instr_id 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top__DOT__instr_id >> 2U)))) {
            vlSelf->top__DOT__DivSel_id = 0U;
        }
    }
    vlSelf->top__DOT__DivEn_id = 0U;
    if ((0x40U & vlSelf->top__DOT__instr_id)) {
        if ((0x20U & vlSelf->top__DOT__instr_id)) {
            if ((1U & (~ (vlSelf->top__DOT__instr_id 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__instr_id)) {
                    if ((4U & vlSelf->top__DOT__instr_id)) {
                        vlSelf->top__DOT__DivEn_id = 0U;
                    }
                } else {
                    vlSelf->top__DOT__DivEn_id = 0U;
                }
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__instr_id)) {
        if ((0x10U & vlSelf->top__DOT__instr_id)) {
            if ((8U & vlSelf->top__DOT__instr_id)) {
                if ((1U & (~ (vlSelf->top__DOT__instr_id 
                              >> 2U)))) {
                    vlSelf->top__DOT__DivEn_id = (1U 
                                                  & (vlSelf->top__DOT__instr_id 
                                                     >> 0x19U));
                }
            } else {
                vlSelf->top__DOT__DivEn_id = (IData)(
                                                     (0x2000000U 
                                                      == 
                                                      (0x2000004U 
                                                       & vlSelf->top__DOT__instr_id)));
            }
        } else if ((1U & (~ (vlSelf->top__DOT__instr_id 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__instr_id 
                          >> 2U)))) {
                vlSelf->top__DOT__DivEn_id = 0U;
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__instr_id)) {
        if ((8U & vlSelf->top__DOT__instr_id)) {
            if ((1U & (~ (vlSelf->top__DOT__instr_id 
                          >> 2U)))) {
                vlSelf->top__DOT__DivEn_id = 0U;
            }
        } else {
            vlSelf->top__DOT__DivEn_id = 0U;
        }
    } else if ((1U & (~ (vlSelf->top__DOT__instr_id 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top__DOT__instr_id >> 2U)))) {
            vlSelf->top__DOT__DivEn_id = 0U;
        }
    }
    vlSelf->top__DOT__is_jalr_id = 0U;
    if ((0x40U & vlSelf->top__DOT__instr_id)) {
        if ((0x20U & vlSelf->top__DOT__instr_id)) {
            if ((1U & (~ (vlSelf->top__DOT__instr_id 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__instr_id 
                              >> 3U)))) {
                    if ((4U & vlSelf->top__DOT__instr_id)) {
                        vlSelf->top__DOT__is_jalr_id = 1U;
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__src2sel_id = 0U;
    if ((0x40U & vlSelf->top__DOT__instr_id)) {
        if ((0x20U & vlSelf->top__DOT__instr_id)) {
            if ((0x10U & vlSelf->top__DOT__instr_id)) {
                if ((1U & (~ (vlSelf->top__DOT__instr_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__instr_id 
                                  >> 2U)))) {
                        vlSelf->top__DOT__src2sel_id = 2U;
                    }
                }
            } else if ((8U & vlSelf->top__DOT__instr_id)) {
                if ((4U & vlSelf->top__DOT__instr_id)) {
                    vlSelf->top__DOT__src2sel_id = 3U;
                }
            } else {
                vlSelf->top__DOT__src2sel_id = ((4U 
                                                 & vlSelf->top__DOT__instr_id)
                                                 ? 3U
                                                 : 0U);
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__instr_id)) {
        if ((0x10U & vlSelf->top__DOT__instr_id)) {
            if ((8U & vlSelf->top__DOT__instr_id)) {
                if ((1U & (~ (vlSelf->top__DOT__instr_id 
                              >> 2U)))) {
                    vlSelf->top__DOT__src2sel_id = 0U;
                }
            } else {
                vlSelf->top__DOT__src2sel_id = ((4U 
                                                 & vlSelf->top__DOT__instr_id)
                                                 ? 1U
                                                 : 0U);
            }
        } else if ((1U & (~ (vlSelf->top__DOT__instr_id 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__instr_id 
                          >> 2U)))) {
                vlSelf->top__DOT__src2sel_id = 1U;
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__instr_id)) {
        if ((8U & vlSelf->top__DOT__instr_id)) {
            if ((1U & (~ (vlSelf->top__DOT__instr_id 
                          >> 2U)))) {
                vlSelf->top__DOT__src2sel_id = 1U;
            }
        } else {
            vlSelf->top__DOT__src2sel_id = 1U;
        }
    } else if ((1U & (~ (vlSelf->top__DOT__instr_id 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top__DOT__instr_id >> 2U)))) {
            vlSelf->top__DOT__src2sel_id = 1U;
        }
    }
    vlSelf->top__DOT__src1sel_id = 0U;
    if ((0x40U & vlSelf->top__DOT__instr_id)) {
        if ((0x20U & vlSelf->top__DOT__instr_id)) {
            if ((0x10U & vlSelf->top__DOT__instr_id)) {
                if ((1U & (~ (vlSelf->top__DOT__instr_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__instr_id 
                                  >> 2U)))) {
                        vlSelf->top__DOT__src1sel_id = 0U;
                    }
                }
            } else if ((8U & vlSelf->top__DOT__instr_id)) {
                if ((4U & vlSelf->top__DOT__instr_id)) {
                    vlSelf->top__DOT__src1sel_id = 1U;
                }
            } else {
                vlSelf->top__DOT__src1sel_id = (1U 
                                                & (vlSelf->top__DOT__instr_id 
                                                   >> 2U));
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__instr_id)) {
        if ((0x10U & vlSelf->top__DOT__instr_id)) {
            if ((8U & vlSelf->top__DOT__instr_id)) {
                if ((1U & (~ (vlSelf->top__DOT__instr_id 
                              >> 2U)))) {
                    vlSelf->top__DOT__src1sel_id = 0U;
                }
            } else {
                vlSelf->top__DOT__src1sel_id = 0U;
            }
        } else if ((1U & (~ (vlSelf->top__DOT__instr_id 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__instr_id 
                          >> 2U)))) {
                vlSelf->top__DOT__src1sel_id = 0U;
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__instr_id)) {
        if ((8U & vlSelf->top__DOT__instr_id)) {
            if ((1U & (~ (vlSelf->top__DOT__instr_id 
                          >> 2U)))) {
                vlSelf->top__DOT__src1sel_id = 0U;
            }
        } else {
            vlSelf->top__DOT__src1sel_id = (1U & (vlSelf->top__DOT__instr_id 
                                                  >> 2U));
        }
    } else if ((1U & (~ (vlSelf->top__DOT__instr_id 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top__DOT__instr_id >> 2U)))) {
            vlSelf->top__DOT__src1sel_id = 0U;
        }
    }
    vlSelf->top__DOT__aluctr_id = 0U;
    if ((0x40U & vlSelf->top__DOT__instr_id)) {
        if ((0x20U & vlSelf->top__DOT__instr_id)) {
            if ((0x10U & vlSelf->top__DOT__instr_id)) {
                if ((1U & (~ (vlSelf->top__DOT__instr_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__instr_id 
                                  >> 2U)))) {
                        vlSelf->top__DOT__aluctr_id = 0U;
                    }
                }
            } else if ((8U & vlSelf->top__DOT__instr_id)) {
                if ((4U & vlSelf->top__DOT__instr_id)) {
                    vlSelf->top__DOT__aluctr_id = 0U;
                }
            } else if ((4U & vlSelf->top__DOT__instr_id)) {
                vlSelf->top__DOT__aluctr_id = 0U;
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__instr_id)) {
        if ((0x10U & vlSelf->top__DOT__instr_id)) {
            if ((8U & vlSelf->top__DOT__instr_id)) {
                if ((1U & (~ (vlSelf->top__DOT__instr_id 
                              >> 2U)))) {
                    vlSelf->top__DOT__aluctr_id = (
                                                   (0x4000U 
                                                    & vlSelf->top__DOT__instr_id)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelf->top__DOT__instr_id)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__instr_id)
                                                      ? 7U
                                                      : 6U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__instr_id)
                                                      ? 
                                                     ((0x40000000U 
                                                       & vlSelf->top__DOT__instr_id)
                                                       ? 
                                                      ((8U 
                                                        & vlSelf->top__DOT__instr_id)
                                                        ? 0x1dU
                                                        : 0xdU)
                                                       : 
                                                      ((8U 
                                                        & vlSelf->top__DOT__instr_id)
                                                        ? 0x15U
                                                        : 5U))
                                                      : 4U))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->top__DOT__instr_id)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__instr_id)
                                                      ? 0xaU
                                                      : 2U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__instr_id)
                                                      ? 
                                                     ((8U 
                                                       & vlSelf->top__DOT__instr_id)
                                                       ? 0x11U
                                                       : 1U)
                                                      : 
                                                     ((0x40000000U 
                                                       & vlSelf->top__DOT__instr_id)
                                                       ? 
                                                      ((8U 
                                                        & vlSelf->top__DOT__instr_id)
                                                        ? 0x18U
                                                        : 8U)
                                                       : 
                                                      ((8U 
                                                        & vlSelf->top__DOT__instr_id)
                                                        ? 0x10U
                                                        : 0U)))));
                }
            } else {
                vlSelf->top__DOT__aluctr_id = ((4U 
                                                & vlSelf->top__DOT__instr_id)
                                                ? 3U
                                                : (
                                                   (0x4000U 
                                                    & vlSelf->top__DOT__instr_id)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelf->top__DOT__instr_id)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__instr_id)
                                                      ? 7U
                                                      : 6U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__instr_id)
                                                      ? 
                                                     ((0x40000000U 
                                                       & vlSelf->top__DOT__instr_id)
                                                       ? 
                                                      ((8U 
                                                        & vlSelf->top__DOT__instr_id)
                                                        ? 0x1dU
                                                        : 0xdU)
                                                       : 
                                                      ((8U 
                                                        & vlSelf->top__DOT__instr_id)
                                                        ? 0x15U
                                                        : 5U))
                                                      : 4U))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->top__DOT__instr_id)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__instr_id)
                                                      ? 0xaU
                                                      : 2U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__instr_id)
                                                      ? 
                                                     ((8U 
                                                       & vlSelf->top__DOT__instr_id)
                                                       ? 0x11U
                                                       : 1U)
                                                      : 
                                                     ((0x40000000U 
                                                       & vlSelf->top__DOT__instr_id)
                                                       ? 
                                                      ((8U 
                                                        & vlSelf->top__DOT__instr_id)
                                                        ? 0x18U
                                                        : 8U)
                                                       : 
                                                      ((8U 
                                                        & vlSelf->top__DOT__instr_id)
                                                        ? 0x10U
                                                        : 0U))))));
            }
        } else if ((1U & (~ (vlSelf->top__DOT__instr_id 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__instr_id 
                          >> 2U)))) {
                vlSelf->top__DOT__aluctr_id = 0U;
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__instr_id)) {
        if ((8U & vlSelf->top__DOT__instr_id)) {
            if ((1U & (~ (vlSelf->top__DOT__instr_id 
                          >> 2U)))) {
                vlSelf->top__DOT__aluctr_id = ((0x4000U 
                                                & vlSelf->top__DOT__instr_id)
                                                ? (
                                                   (0x2000U 
                                                    & vlSelf->top__DOT__instr_id)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->top__DOT__instr_id)
                                                     ? 7U
                                                     : 6U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->top__DOT__instr_id)
                                                     ? 
                                                    ((0x40000000U 
                                                      & vlSelf->top__DOT__instr_id)
                                                      ? 
                                                     ((8U 
                                                       & vlSelf->top__DOT__instr_id)
                                                       ? 0x1dU
                                                       : 0xdU)
                                                      : 
                                                     ((8U 
                                                       & vlSelf->top__DOT__instr_id)
                                                       ? 0x15U
                                                       : 5U))
                                                     : 4U))
                                                : (
                                                   (0x2000U 
                                                    & vlSelf->top__DOT__instr_id)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->top__DOT__instr_id)
                                                     ? 0xaU
                                                     : 2U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->top__DOT__instr_id)
                                                     ? 
                                                    ((8U 
                                                      & vlSelf->top__DOT__instr_id)
                                                      ? 0x11U
                                                      : 1U)
                                                     : 
                                                    ((8U 
                                                      & vlSelf->top__DOT__instr_id)
                                                      ? 0x10U
                                                      : 0U))));
            }
        } else {
            vlSelf->top__DOT__aluctr_id = ((4U & vlSelf->top__DOT__instr_id)
                                            ? 0U : 
                                           ((0x4000U 
                                             & vlSelf->top__DOT__instr_id)
                                             ? ((0x2000U 
                                                 & vlSelf->top__DOT__instr_id)
                                                 ? 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__instr_id)
                                                  ? 7U
                                                  : 6U)
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__instr_id)
                                                  ? 
                                                 ((0x40000000U 
                                                   & vlSelf->top__DOT__instr_id)
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->top__DOT__instr_id)
                                                    ? 0x1dU
                                                    : 0xdU)
                                                   : 
                                                  ((8U 
                                                    & vlSelf->top__DOT__instr_id)
                                                    ? 0x15U
                                                    : 5U))
                                                  : 4U))
                                             : ((0x2000U 
                                                 & vlSelf->top__DOT__instr_id)
                                                 ? 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__instr_id)
                                                  ? 0xaU
                                                  : 2U)
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__instr_id)
                                                  ? 
                                                 ((8U 
                                                   & vlSelf->top__DOT__instr_id)
                                                   ? 0x11U
                                                   : 1U)
                                                  : 
                                                 ((8U 
                                                   & vlSelf->top__DOT__instr_id)
                                                   ? 0x10U
                                                   : 0U)))));
        }
    } else if ((1U & (~ (vlSelf->top__DOT__instr_id 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top__DOT__instr_id >> 2U)))) {
            vlSelf->top__DOT__aluctr_id = 0U;
        }
    }
    vlSelf->top__DOT__is_jal_id = 0U;
    if ((0x40U & vlSelf->top__DOT__instr_id)) {
        if ((0x20U & vlSelf->top__DOT__instr_id)) {
            if ((1U & (~ (vlSelf->top__DOT__instr_id 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__instr_id)) {
                    if ((4U & vlSelf->top__DOT__instr_id)) {
                        vlSelf->top__DOT__is_jal_id = 1U;
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__is_brc_id = 0U;
    if ((0x40U & vlSelf->top__DOT__instr_id)) {
        if ((0x20U & vlSelf->top__DOT__instr_id)) {
            if ((1U & (~ (vlSelf->top__DOT__instr_id 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__instr_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__instr_id 
                                  >> 2U)))) {
                        vlSelf->top__DOT__is_brc_id = 1U;
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__wben_id = 0U;
    if ((0x40U & vlSelf->top__DOT__instr_id)) {
        if ((0x20U & vlSelf->top__DOT__instr_id)) {
            if ((0x10U & vlSelf->top__DOT__instr_id)) {
                if ((1U & (~ (vlSelf->top__DOT__instr_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__instr_id 
                                  >> 2U)))) {
                        if ((0U == (7U & (vlSelf->top__DOT__instr_id 
                                          >> 0xcU)))) {
                            vlSelf->top__DOT__wben_id = 0U;
                        } else if ((1U == (7U & (vlSelf->top__DOT__instr_id 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__wben_id = 1U;
                        } else if ((2U == (7U & (vlSelf->top__DOT__instr_id 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__wben_id = 1U;
                        }
                    }
                }
            } else if ((8U & vlSelf->top__DOT__instr_id)) {
                if ((4U & vlSelf->top__DOT__instr_id)) {
                    vlSelf->top__DOT__wben_id = 1U;
                }
            } else {
                vlSelf->top__DOT__wben_id = (1U & (vlSelf->top__DOT__instr_id 
                                                   >> 2U));
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__instr_id)) {
        if ((0x10U & vlSelf->top__DOT__instr_id)) {
            if ((8U & vlSelf->top__DOT__instr_id)) {
                if ((1U & (~ (vlSelf->top__DOT__instr_id 
                              >> 2U)))) {
                    vlSelf->top__DOT__wben_id = 1U;
                }
            } else {
                vlSelf->top__DOT__wben_id = 1U;
            }
        } else if ((1U & (~ (vlSelf->top__DOT__instr_id 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__instr_id 
                          >> 2U)))) {
                vlSelf->top__DOT__wben_id = 0U;
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__instr_id)) {
        if ((8U & vlSelf->top__DOT__instr_id)) {
            if ((1U & (~ (vlSelf->top__DOT__instr_id 
                          >> 2U)))) {
                vlSelf->top__DOT__wben_id = 1U;
            }
        } else {
            vlSelf->top__DOT__wben_id = 1U;
        }
    } else if ((1U & (~ (vlSelf->top__DOT__instr_id 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top__DOT__instr_id >> 2U)))) {
            vlSelf->top__DOT__wben_id = 1U;
        }
    }
    vlSelf->top__DOT__rs1_idx_id = 0U;
    if ((0x40U & vlSelf->top__DOT__instr_id)) {
        if ((0x20U & vlSelf->top__DOT__instr_id)) {
            if ((0x10U & vlSelf->top__DOT__instr_id)) {
                if ((1U & (~ (vlSelf->top__DOT__instr_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__instr_id 
                                  >> 2U)))) {
                        vlSelf->top__DOT__rs1_idx_id 
                            = (0x1fU & (vlSelf->top__DOT__instr_id 
                                        >> 0xfU));
                    }
                }
            } else if ((8U & vlSelf->top__DOT__instr_id)) {
                if ((4U & vlSelf->top__DOT__instr_id)) {
                    vlSelf->top__DOT__rs1_idx_id = 0U;
                }
            } else {
                vlSelf->top__DOT__rs1_idx_id = (0x1fU 
                                                & ((4U 
                                                    & vlSelf->top__DOT__instr_id)
                                                    ? 
                                                   (vlSelf->top__DOT__instr_id 
                                                    >> 0xfU)
                                                    : 
                                                   (vlSelf->top__DOT__instr_id 
                                                    >> 0xfU)));
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__instr_id)) {
        if ((0x10U & vlSelf->top__DOT__instr_id)) {
            if ((8U & vlSelf->top__DOT__instr_id)) {
                if ((1U & (~ (vlSelf->top__DOT__instr_id 
                              >> 2U)))) {
                    vlSelf->top__DOT__rs1_idx_id = 
                        (0x1fU & (vlSelf->top__DOT__instr_id 
                                  >> 0xfU));
                }
            } else {
                vlSelf->top__DOT__rs1_idx_id = ((4U 
                                                 & vlSelf->top__DOT__instr_id)
                                                 ? 0U
                                                 : 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__instr_id 
                                                    >> 0xfU)));
            }
        } else if ((1U & (~ (vlSelf->top__DOT__instr_id 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__instr_id 
                          >> 2U)))) {
                vlSelf->top__DOT__rs1_idx_id = (0x1fU 
                                                & (vlSelf->top__DOT__instr_id 
                                                   >> 0xfU));
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__instr_id)) {
        if ((8U & vlSelf->top__DOT__instr_id)) {
            if ((1U & (~ (vlSelf->top__DOT__instr_id 
                          >> 2U)))) {
                vlSelf->top__DOT__rs1_idx_id = (0x1fU 
                                                & (vlSelf->top__DOT__instr_id 
                                                   >> 0xfU));
            }
        } else {
            vlSelf->top__DOT__rs1_idx_id = ((4U & vlSelf->top__DOT__instr_id)
                                             ? 0U : 
                                            (0x1fU 
                                             & (vlSelf->top__DOT__instr_id 
                                                >> 0xfU)));
        }
    } else if ((1U & (~ (vlSelf->top__DOT__instr_id 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top__DOT__instr_id >> 2U)))) {
            vlSelf->top__DOT__rs1_idx_id = (0x1fU & 
                                            (vlSelf->top__DOT__instr_id 
                                             >> 0xfU));
        }
    }
    vlSelf->top__DOT__rs2_idx_id = 0U;
    if ((0x40U & vlSelf->top__DOT__instr_id)) {
        if ((0x20U & vlSelf->top__DOT__instr_id)) {
            if ((0x10U & vlSelf->top__DOT__instr_id)) {
                if ((1U & (~ (vlSelf->top__DOT__instr_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__instr_id 
                                  >> 2U)))) {
                        vlSelf->top__DOT__rs2_idx_id = 0U;
                    }
                }
            } else if ((8U & vlSelf->top__DOT__instr_id)) {
                if ((4U & vlSelf->top__DOT__instr_id)) {
                    vlSelf->top__DOT__rs2_idx_id = 0U;
                }
            } else {
                vlSelf->top__DOT__rs2_idx_id = ((4U 
                                                 & vlSelf->top__DOT__instr_id)
                                                 ? 0U
                                                 : 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__instr_id 
                                                    >> 0x14U)));
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__instr_id)) {
        if ((0x10U & vlSelf->top__DOT__instr_id)) {
            if ((8U & vlSelf->top__DOT__instr_id)) {
                if ((1U & (~ (vlSelf->top__DOT__instr_id 
                              >> 2U)))) {
                    vlSelf->top__DOT__rs2_idx_id = 
                        (0x1fU & (vlSelf->top__DOT__instr_id 
                                  >> 0x14U));
                }
            } else {
                vlSelf->top__DOT__rs2_idx_id = ((4U 
                                                 & vlSelf->top__DOT__instr_id)
                                                 ? 0U
                                                 : 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__instr_id 
                                                    >> 0x14U)));
            }
        } else if ((1U & (~ (vlSelf->top__DOT__instr_id 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__instr_id 
                          >> 2U)))) {
                vlSelf->top__DOT__rs2_idx_id = (0x1fU 
                                                & (vlSelf->top__DOT__instr_id 
                                                   >> 0x14U));
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__instr_id)) {
        if ((8U & vlSelf->top__DOT__instr_id)) {
            if ((1U & (~ (vlSelf->top__DOT__instr_id 
                          >> 2U)))) {
                vlSelf->top__DOT__rs2_idx_id = 0U;
            }
        } else {
            vlSelf->top__DOT__rs2_idx_id = 0U;
        }
    } else if ((1U & (~ (vlSelf->top__DOT__instr_id 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top__DOT__instr_id >> 2U)))) {
            vlSelf->top__DOT__rs2_idx_id = 0U;
        }
    }
    vlSelf->top__DOT__trap_id = 0U;
    if ((0x40U & vlSelf->top__DOT__instr_id)) {
        if ((0x20U & vlSelf->top__DOT__instr_id)) {
            if ((0x10U & vlSelf->top__DOT__instr_id)) {
                if ((1U & (~ (vlSelf->top__DOT__instr_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__instr_id 
                                  >> 2U)))) {
                        if ((0U == (7U & (vlSelf->top__DOT__instr_id 
                                          >> 0xcU)))) {
                            vlSelf->top__DOT__trap_id = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__hazard_detect_u__DOT__hazard 
        = ((((3U == (0x7fU & vlSelf->top__DOT__instr_ex)) 
             & ((((((0x19U == (0x1fU & (vlSelf->top__DOT__instr_id 
                                        >> 2U))) | 
                    (0x18U == (0x1fU & (vlSelf->top__DOT__instr_id 
                                        >> 2U)))) | 
                   (4U == (0x1fU & (vlSelf->top__DOT__instr_id 
                                    >> 2U)))) | (6U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__instr_id 
                                                     >> 2U)))) 
                 | (0xcU == (0x1fU & (vlSelf->top__DOT__instr_id 
                                      >> 2U)))) | (0xeU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__instr_id 
                                                       >> 2U))))) 
            & (((0x1fU & (vlSelf->top__DOT__instr_ex 
                          >> 7U)) == (0x1fU & (vlSelf->top__DOT__instr_id 
                                               >> 0xfU))) 
               | ((0x1fU & (vlSelf->top__DOT__instr_ex 
                            >> 7U)) == (0x1fU & (vlSelf->top__DOT__instr_id 
                                                 >> 0x14U))))) 
           | (((3U == (0x7fU & vlSelf->top__DOT__instr_ex)) 
               & ((3U == (0x7fU & vlSelf->top__DOT__instr_id)) 
                  | (8U == (0x1fU & (vlSelf->top__DOT__instr_id 
                                     >> 2U))))) & (
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__instr_ex 
                                                       >> 7U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__instr_id 
                                                       >> 0xfU)))));
    Vtop___024root____Vdpiimwrap_top__DOT__IF_u__DOT__vmemread_TOP(vlSelf->top__DOT__pc_new, 4U, vlSelf->__Vtask_top__DOT__IF_u__DOT__vmemread__1__rdata, vlSelf->top__DOT__pc_new);
    vlSelf->top__DOT__IF_u__DOT__rdata = vlSelf->__Vtask_top__DOT__IF_u__DOT__vmemread__1__rdata;
    vlSelf->top__DOT__ID_u__DOT__ext_op = 0U;
    if ((0x40U & vlSelf->top__DOT__instr_id)) {
        if ((0x20U & vlSelf->top__DOT__instr_id)) {
            if ((1U & (~ (vlSelf->top__DOT__instr_id 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__instr_id)) {
                    if ((4U & vlSelf->top__DOT__instr_id)) {
                        vlSelf->top__DOT__ID_u__DOT__ext_op = 8U;
                    }
                } else {
                    vlSelf->top__DOT__ID_u__DOT__ext_op 
                        = ((4U & vlSelf->top__DOT__instr_id)
                            ? 1U : 0x10U);
                }
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__instr_id)) {
        if ((0x10U & vlSelf->top__DOT__instr_id)) {
            if ((1U & (~ (vlSelf->top__DOT__instr_id 
                          >> 3U)))) {
                if ((4U & vlSelf->top__DOT__instr_id)) {
                    vlSelf->top__DOT__ID_u__DOT__ext_op = 2U;
                }
            }
        } else if ((1U & (~ (vlSelf->top__DOT__instr_id 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__instr_id 
                          >> 2U)))) {
                vlSelf->top__DOT__ID_u__DOT__ext_op = 4U;
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__instr_id)) {
        if ((8U & vlSelf->top__DOT__instr_id)) {
            if ((1U & (~ (vlSelf->top__DOT__instr_id 
                          >> 2U)))) {
                vlSelf->top__DOT__ID_u__DOT__ext_op = 1U;
            }
        } else {
            vlSelf->top__DOT__ID_u__DOT__ext_op = (
                                                   (4U 
                                                    & vlSelf->top__DOT__instr_id)
                                                    ? 2U
                                                    : 1U);
        }
    } else if ((1U & (~ (vlSelf->top__DOT__instr_id 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top__DOT__instr_id >> 2U)))) {
            vlSelf->top__DOT__ID_u__DOT__ext_op = 1U;
        }
    }
    vlSelf->top__DOT__out_trap_id = 0U;
    if ((0x40U & vlSelf->top__DOT__instr_id)) {
        if ((0x20U & vlSelf->top__DOT__instr_id)) {
            if ((0x10U & vlSelf->top__DOT__instr_id)) {
                if ((1U & (~ (vlSelf->top__DOT__instr_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__instr_id 
                                  >> 2U)))) {
                        if ((0U == (7U & (vlSelf->top__DOT__instr_id 
                                          >> 0xcU)))) {
                            if ((1U & (~ (vlSelf->top__DOT__instr_id 
                                          >> 0x14U)))) {
                                if ((0x200000U & vlSelf->top__DOT__instr_id)) {
                                    vlSelf->top__DOT__out_trap_id = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__in_trap_id = 0U;
    if ((0x40U & vlSelf->top__DOT__instr_id)) {
        if ((0x20U & vlSelf->top__DOT__instr_id)) {
            if ((0x10U & vlSelf->top__DOT__instr_id)) {
                if ((1U & (~ (vlSelf->top__DOT__instr_id 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__instr_id 
                                  >> 2U)))) {
                        if ((0U == (7U & (vlSelf->top__DOT__instr_id 
                                          >> 0xcU)))) {
                            if ((0x100000U & vlSelf->top__DOT__instr_id)) {
                                vlSelf->top__DOT__in_trap_id = 1U;
                            } else if ((1U & (~ (vlSelf->top__DOT__instr_id 
                                                 >> 0x15U)))) {
                                vlSelf->top__DOT__in_trap_id = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_b 
        = ((1U & (IData)((vlSelf->top__DOT__alures_ls 
                          >> 2U))) ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__alures_ls 
                                                     >> 1U)))
                                       ? ((1U & (IData)(vlSelf->top__DOT__alures_ls))
                                           ? (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->top__DOT__ls_u__DOT__wr_data)))) 
                                               << 0x38U) 
                                              | (0xffffffffffffffULL 
                                                 & vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))
                                           : (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                                                           >> 0x38U))))) 
                                               << 0x38U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->top__DOT__ls_u__DOT__wr_data)))) 
                                                  << 0x30U) 
                                                 | (0xffffffffffffULL 
                                                    & vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))))
                                       : ((1U & (IData)(vlSelf->top__DOT__alures_ls))
                                           ? (((QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                                                           >> 0x30U))))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->top__DOT__ls_u__DOT__wr_data)))) 
                                                  << 0x28U) 
                                                 | (0xffffffffffULL 
                                                    & vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base)))
                                           : (((QData)((IData)(
                                                               (((IData)(
                                                                         (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                                                          >> 0x28U)) 
                                                                 << 8U) 
                                                                | (0xffU 
                                                                   & (IData)(vlSelf->top__DOT__ls_u__DOT__wr_data))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base)))))
            : ((1U & (IData)((vlSelf->top__DOT__alures_ls 
                              >> 1U))) ? ((1U & (IData)(vlSelf->top__DOT__alures_ls))
                                           ? (((QData)((IData)(
                                                               (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                                                >> 0x20U))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->top__DOT__ls_u__DOT__wr_data) 
                                                                  << 0x18U) 
                                                                 | (0xffffffU 
                                                                    & (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))))))
                                           : ((0xffffffffff000000ULL 
                                               & vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base) 
                                              | (QData)((IData)(
                                                                ((0xff0000U 
                                                                  & ((IData)(vlSelf->top__DOT__ls_u__DOT__wr_data) 
                                                                     << 0x10U)) 
                                                                 | (0xffffU 
                                                                    & (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base)))))))
                : ((1U & (IData)(vlSelf->top__DOT__alures_ls))
                    ? ((0xffffffffffff0000ULL & vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base) 
                       | (QData)((IData)(((0xff00U 
                                           & ((IData)(vlSelf->top__DOT__ls_u__DOT__wr_data) 
                                              << 8U)) 
                                          | (0xffU 
                                             & (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))))))
                    : ((0xffffffffffffff00ULL & vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base) 
                       | (QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__ls_u__DOT__wr_data))))))));
    if ((1U & (IData)((vlSelf->top__DOT__alures_ls 
                       >> 2U)))) {
        if ((1U & (IData)((vlSelf->top__DOT__alures_ls 
                           >> 2U)))) {
            vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_w 
                = (((QData)((IData)(vlSelf->top__DOT__ls_u__DOT__wr_data)) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base)));
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_w 
            = (((QData)((IData)((vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                 >> 0x20U))) << 0x20U) 
               | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__wr_data)));
    }
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc 
        = ((0x341U == (vlSelf->top__DOT__instr_ls >> 0x14U)) 
           & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec 
        = ((0x305U == (vlSelf->top__DOT__instr_ls >> 0x14U)) 
           & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus 
        = ((0x300U == (vlSelf->top__DOT__instr_ls >> 0x14U)) 
           & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause 
        = ((0x342U == (vlSelf->top__DOT__instr_ls >> 0x14U)) 
           & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
    vlSelf->top__DOT__ex_stage_u__DOT__rs2 = ((2U & (IData)(vlSelf->top__DOT__rs2_sel))
                                               ? ((1U 
                                                   & (IData)(vlSelf->top__DOT__rs2_sel))
                                                   ? vlSelf->top__DOT__forwarding_u__DOT__rd_wb
                                                   : vlSelf->top__DOT__wb_data)
                                               : ((1U 
                                                   & (IData)(vlSelf->top__DOT__rs2_sel))
                                                   ? vlSelf->top__DOT__alures_ls
                                                   : vlSelf->top__DOT__rs2_ex));
    vlSelf->top__DOT__ex_stage_u__DOT__rs1 = ((2U & (IData)(vlSelf->top__DOT__rs1_sel))
                                               ? ((1U 
                                                   & (IData)(vlSelf->top__DOT__rs1_sel))
                                                   ? vlSelf->top__DOT__forwarding_u__DOT__rd_wb
                                                   : vlSelf->top__DOT__wb_data)
                                               : ((1U 
                                                   & (IData)(vlSelf->top__DOT__rs1_sel))
                                                   ? vlSelf->top__DOT__alures_ls
                                                   : vlSelf->top__DOT__rs1_ex));
    vlSelf->top__DOT__ID_u__DOT__imm = ((0x10U & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                         ? ((8U & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                             ? 0ULL
                                             : ((4U 
                                                 & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                                 ? 0ULL
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                                  ? 0ULL
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                                   ? 0ULL
                                                   : 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->top__DOT__instr_id 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0x800U 
                                                                       & (vlSelf->top__DOT__instr_id 
                                                                          << 4U)) 
                                                                      | ((0x7e0U 
                                                                          & (vlSelf->top__DOT__instr_id 
                                                                             >> 0x14U)) 
                                                                         | (0x1eU 
                                                                            & (vlSelf->top__DOT__instr_id 
                                                                               >> 7U)))))))))))
                                         : ((8U & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                             ? ((4U 
                                                 & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                                 ? 0ULL
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                                  ? 0ULL
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                                   ? 0ULL
                                                   : 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->top__DOT__instr_id 
                                                                        >> 0x1fU)))) 
                                                    << 0x14U) 
                                                   | (QData)((IData)(
                                                                     ((0xff000U 
                                                                       & vlSelf->top__DOT__instr_id) 
                                                                      | ((0x800U 
                                                                          & (vlSelf->top__DOT__instr_id 
                                                                             >> 9U)) 
                                                                         | (0x7feU 
                                                                            & (vlSelf->top__DOT__instr_id 
                                                                               >> 0x14U))))))))))
                                             : ((4U 
                                                 & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                                  ? 0ULL
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                                   ? 0ULL
                                                   : 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->top__DOT__instr_id 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0xfe0U 
                                                                       & (vlSelf->top__DOT__instr_id 
                                                                          >> 0x14U)) 
                                                                      | (0x1fU 
                                                                         & (vlSelf->top__DOT__instr_id 
                                                                            >> 7U))))))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                                   ? 0ULL
                                                   : 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->top__DOT__instr_id 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (0xfffff000U 
                                                                      & vlSelf->top__DOT__instr_id)))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->top__DOT__instr_id 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->top__DOT__instr_id 
                                                                      >> 0x14U))))
                                                   : 0ULL)))));
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data 
        = (((((- (QData)((IData)((0x20U == (0x707cU 
                                            & vlSelf->top__DOT__instr_ls))))) 
              & vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_b) 
             | ((- (QData)((IData)((0x1020U == (0x707cU 
                                                & vlSelf->top__DOT__instr_ls))))) 
                & ((1U & (IData)((vlSelf->top__DOT__alures_ls 
                                  >> 2U))) ? ((1U & (IData)(
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
                    : ((1U & (IData)((vlSelf->top__DOT__alures_ls 
                                      >> 1U))) ? (((QData)((IData)(
                                                                   (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
                                                                    >> 0x20U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->top__DOT__ls_u__DOT__wr_data) 
                                                                      << 0x10U) 
                                                                     | (0xffffU 
                                                                        & (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base))))))
                        : ((0xffffffffffff0000ULL & vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base) 
                           | (QData)((IData)((0xffffU 
                                              & (IData)(vlSelf->top__DOT__ls_u__DOT__wr_data))))))))) 
            | ((- (QData)((IData)((0x2020U == (0x707cU 
                                               & vlSelf->top__DOT__instr_ls))))) 
               & vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_w)) 
           | ((- (QData)((IData)((0x3020U == (0x707cU 
                                              & vlSelf->top__DOT__instr_ls))))) 
              & vlSelf->top__DOT__ls_u__DOT__wr_data));
    vlSelf->top__DOT__csrdata_ls = (((((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc))) 
                                       & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc) 
                                      | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec))) 
                                         & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec)) 
                                     | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus))) 
                                        & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus)) 
                                    | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause))) 
                                       & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause));
    vlSelf->top__DOT__ex_stage_u__DOT__src2 = ((2U 
                                                & (IData)(vlSelf->top__DOT__src2sel_ex))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__src2sel_ex))
                                                    ? 4ULL
                                                    : 0ULL)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__src2sel_ex))
                                                    ? vlSelf->top__DOT__imm_ex
                                                    : vlSelf->top__DOT__ex_stage_u__DOT__rs2));
    __Vtemp3[0U] = 1U;
    __Vtemp3[1U] = 0U;
    __Vtemp3[2U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp4, vlSelf->top__DOT__ex_stage_u__DOT__rs1);
    VL_EXTEND_WQ(65,64, __Vtemp5, (~ vlSelf->top__DOT__ex_stage_u__DOT__rs2));
    VL_ADD_W(3, __Vtemp6, __Vtemp4, __Vtemp5);
    VL_ADD_W(3, __Vtemp7, __Vtemp3, __Vtemp6);
    vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry 
        = (1U & __Vtemp7[2U]);
    vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres 
        = (1ULL + (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                   + (~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)));
    vlSelf->top__DOT__ex_stage_u__DOT__src1 = ((IData)(vlSelf->top__DOT__src1sel_ex)
                                                ? vlSelf->top__DOT__pc_ex
                                                : vlSelf->top__DOT__ex_stage_u__DOT__rs1);
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data 
        = ((((- (QData)((IData)((1U == (7U & (vlSelf->top__DOT__instr_ls 
                                              >> 0xcU)))))) 
             & vlSelf->top__DOT__alures_ls) | ((- (QData)((IData)(
                                                                  (2U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlSelf->top__DOT__instr_ls 
                                                                       >> 0xcU)))))) 
                                               & (vlSelf->top__DOT__alures_ls 
                                                  | vlSelf->top__DOT__csrdata_ls))) 
           | ((- (QData)((IData)((3U == (7U & (vlSelf->top__DOT__instr_ls 
                                               >> 0xcU)))))) 
              & ((~ vlSelf->top__DOT__alures_ls) & vlSelf->top__DOT__csrdata_ls)));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin 
        = (vlSelf->top__DOT__ex_stage_u__DOT__src2 
           ^ (- (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))));
    vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow 
        = (((1U & (IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                           >> 0x3fU))) == (1U & (~ (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                            >> 0x3fU))))) 
           & ((1U & (IData)((vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres 
                             >> 0x3fU))) != (1U & (IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                                           >> 0x3fU)))));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src 
        = ((4U & (IData)(vlSelf->top__DOT__aluctr_ex))
            ? vlSelf->top__DOT__ex_stage_u__DOT__src1
            : (((QData)((IData)((((IData)(vlSelf->top__DOT__ex_stage_u__DOT__src1) 
                                  << 0x1fU) | ((0x40000000U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                            >> 1U)) 
                                                   << 0x1eU)) 
                                               | ((0x20000000U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                               >> 2U)) 
                                                      << 0x1dU)) 
                                                  | ((0x10000000U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                  >> 3U)) 
                                                         << 0x1cU)) 
                                                     | ((0x8000000U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                     >> 4U)) 
                                                            << 0x1bU)) 
                                                        | ((0x4000000U 
                                                            & ((IData)(
                                                                       (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                        >> 5U)) 
                                                               << 0x1aU)) 
                                                           | ((0x2000000U 
                                                               & ((IData)(
                                                                          (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                           >> 6U)) 
                                                                  << 0x19U)) 
                                                              | ((0x1000000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                              >> 7U)) 
                                                                     << 0x18U)) 
                                                                 | ((0x800000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 8U)) 
                                                                        << 0x17U)) 
                                                                    | ((0x400000U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 9U)) 
                                                                           << 0x16U)) 
                                                                       | ((0x200000U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0xaU)) 
                                                                              << 0x15U)) 
                                                                          | ((0x100000U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0xbU)) 
                                                                                << 0x14U)) 
                                                                             | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0xcU)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0xdU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0xeU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0xfU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x10U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x11U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x12U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x13U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x15U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x16U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x17U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x18U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x19U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x1aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x1fU)))))))))))))))))))))))))))))))))))) 
                << 0x20U) | (QData)((IData)((((IData)(
                                                      (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                       >> 0x20U)) 
                                              << 0x1fU) 
                                             | ((0x40000000U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                             >> 0x21U)) 
                                                    << 0x1eU)) 
                                                | ((0x20000000U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                >> 0x22U)) 
                                                       << 0x1dU)) 
                                                   | ((0x10000000U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                   >> 0x23U)) 
                                                          << 0x1cU)) 
                                                      | ((0x8000000U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                      >> 0x24U)) 
                                                             << 0x1bU)) 
                                                         | ((0x4000000U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                         >> 0x25U)) 
                                                                << 0x1aU)) 
                                                            | ((0x2000000U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                            >> 0x26U)) 
                                                                   << 0x19U)) 
                                                               | ((0x1000000U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                               >> 0x27U)) 
                                                                      << 0x18U)) 
                                                                  | ((0x800000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x28U)) 
                                                                         << 0x17U)) 
                                                                     | ((0x400000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x29U)) 
                                                                            << 0x16U)) 
                                                                        | ((0x200000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x2aU)) 
                                                                               << 0x15U)) 
                                                                           | ((0x100000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x2bU)) 
                                                                                << 0x14U)) 
                                                                              | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x2cU)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x2dU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x2eU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x2fU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x30U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x31U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x32U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x33U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x34U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x35U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x36U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x37U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x38U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x39U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x3aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x3bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x3cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x3dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x3eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                                                >> 0x3fU))))))))))))))))))))))))))))))))))))));
    VL_EXTEND_WI(65,1, __Vtemp9, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
        = ((vlSelf->top__DOT__ex_stage_u__DOT__src1 
            + vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin) 
           + (((QData)((IData)(__Vtemp9[1U])) << 0x20U) 
              | (QData)((IData)(__Vtemp9[0U]))));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow 
        = (((1U & (IData)((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                           >> 0x3fU))) == (1U & (IData)(
                                                        (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin 
                                                         >> 0x3fU)))) 
           & ((1U & (IData)((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                             >> 0x3fU))) != (1U & (IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                           >> 0x3fU)))));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero 
        = (1U & (~ (IData)((0U != vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o))));
    vlSelf->top__DOT__is_jump = (((IData)(vlSelf->top__DOT__is_jal_ex) 
                                  | (IData)(vlSelf->top__DOT__is_jalr_ex)) 
                                 | ((IData)(vlSelf->top__DOT__is_brc_ex) 
                                    & ((0x4000U & vlSelf->top__DOT__instr_ex)
                                        ? ((0x2000U 
                                            & vlSelf->top__DOT__instr_ex)
                                            ? ((0x1000U 
                                                & vlSelf->top__DOT__instr_ex)
                                                ? (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)
                                                : (~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)))
                                            : ((0x1000U 
                                                & vlSelf->top__DOT__instr_ex)
                                                ? (~ 
                                                   ((IData)(
                                                            (vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres 
                                                             >> 0x3fU)) 
                                                    ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow)))
                                                : ((IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres 
                                                            >> 0x3fU)) 
                                                   ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow))))
                                        : ((~ (vlSelf->top__DOT__instr_ex 
                                               >> 0xdU)) 
                                           & ((0x1000U 
                                               & vlSelf->top__DOT__instr_ex)
                                               ? (0U 
                                                  != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres)
                                               : (~ (IData)(
                                                            (0U 
                                                             != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))))));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
        = (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src 
           >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)));
    vlSelf->top__DOT__pc_next = ((IData)(vlSelf->top__DOT__is_jump)
                                  ? ((IData)(vlSelf->top__DOT__is_jalr_ex)
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                         + vlSelf->top__DOT__imm_ex)
                                      : (vlSelf->top__DOT__pc_ex 
                                         + vlSelf->top__DOT__imm_ex))
                                  : ((IData)(vlSelf->top__DOT__in_trap_id)
                                      ? vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec
                                      : ((IData)(vlSelf->top__DOT__out_trap_id)
                                          ? vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc
                                          : (4ULL + vlSelf->top__DOT__pc_new))));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res 
        = (((QData)((IData)((((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res) 
                              << 0x1fU) | ((0x40000000U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                        >> 1U)) 
                                               << 0x1eU)) 
                                           | ((0x20000000U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                           >> 2U)) 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                              >> 3U)) 
                                                     << 0x1cU)) 
                                                 | ((0x8000000U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                 >> 4U)) 
                                                        << 0x1bU)) 
                                                    | ((0x4000000U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                    >> 5U)) 
                                                           << 0x1aU)) 
                                                       | ((0x2000000U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                       >> 6U)) 
                                                              << 0x19U)) 
                                                          | ((0x1000000U 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                          >> 7U)) 
                                                                 << 0x18U)) 
                                                             | ((0x800000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                             >> 8U)) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 9U)) 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0xaU)) 
                                                                          << 0x15U)) 
                                                                      | ((0x100000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0xbU)) 
                                                                             << 0x14U)) 
                                                                         | ((0x80000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0xcU)) 
                                                                                << 0x13U)) 
                                                                            | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0xdU)) 
                                                                                << 0x12U)) 
                                                                               | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0xeU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0xfU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x10U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x11U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x12U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x13U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x15U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x16U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x17U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x18U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x19U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x1aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x1fU)))))))))))))))))))))))))))))))))))) 
            << 0x20U) | (QData)((IData)((((IData)((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                   >> 0x20U)) 
                                          << 0x1fU) 
                                         | ((0x40000000U 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                         >> 0x21U)) 
                                                << 0x1eU)) 
                                            | ((0x20000000U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                            >> 0x22U)) 
                                                   << 0x1dU)) 
                                               | ((0x10000000U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                               >> 0x23U)) 
                                                      << 0x1cU)) 
                                                  | ((0x8000000U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                  >> 0x24U)) 
                                                         << 0x1bU)) 
                                                     | ((0x4000000U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                     >> 0x25U)) 
                                                            << 0x1aU)) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                        >> 0x26U)) 
                                                               << 0x19U)) 
                                                           | ((0x1000000U 
                                                               & ((IData)(
                                                                          (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                           >> 0x27U)) 
                                                                  << 0x18U)) 
                                                              | ((0x800000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                              >> 0x28U)) 
                                                                     << 0x17U)) 
                                                                 | ((0x400000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x29U)) 
                                                                        << 0x16U)) 
                                                                    | ((0x200000U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x2aU)) 
                                                                           << 0x15U)) 
                                                                       | ((0x100000U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x2bU)) 
                                                                              << 0x14U)) 
                                                                          | ((0x80000U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x2cU)) 
                                                                                << 0x13U)) 
                                                                             | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x2dU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x2eU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x2fU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x30U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x31U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x32U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x33U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x34U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x35U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x36U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x37U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x38U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x39U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x3aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x3bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x3cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x3dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x3eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x3fU)))))))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift 
        = ((4U & (IData)(vlSelf->top__DOT__aluctr_ex))
            ? ((8U & (IData)(vlSelf->top__DOT__aluctr_ex))
                ? ((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
                    ? ((1U & (IData)((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                      >> 0x1fU))) ? 
                       (0x100000000ULL | (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                          | (QData)((IData)(
                                                            (~ (IData)(
                                                                       ((0xffffffffffffffffULL 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                                        >> 0x20U)))))))
                        : (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                           & (QData)((IData)(((0xffffffffffffffffULL 
                                               >> (0x3fU 
                                                   & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                              >> 0x20U)))))
                    : (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                       | ((- (QData)((IData)((1U & (IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                            >> 0x3fU)))))) 
                          & (~ (0xffffffffffffffffULL 
                                >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))))))
                : ((0x10U & (IData)(vlSelf->top__DOT__aluctr_ex))
                    ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                       & (QData)((IData)(((0xffffffffffffffffULL 
                                           >> (0x3fU 
                                               & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                          >> 0x20U))))
                    : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res))
            : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res);
    VL_EXTEND_WQ(65,64, __Vtemp11, vlSelf->top__DOT__ex_stage_u__DOT__src1);
    VL_EXTEND_WQ(65,64, __Vtemp12, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
    VL_ADD_W(3, __Vtemp13, __Vtemp11, __Vtemp12);
    VL_EXTEND_WI(65,1, __Vtemp14, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
    VL_ADD_W(3, __Vtemp15, __Vtemp13, __Vtemp14);
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
        = ((IData)(vlSelf->top__DOT__DivEn_ex) ? ((4U 
                                                   & (IData)(vlSelf->top__DOT__DivSel_ex))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__DivSel_ex))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__DivSel_ex))
                                                     ? 
                                                    VL_MODDIV_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                                     : 
                                                    VL_MODDIVS_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__DivSel_ex))
                                                     ? 
                                                    VL_DIV_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                                     : 
                                                    VL_DIVS_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__DivSel_ex))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__DivSel_ex))
                                                     ? 
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                     * vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                                     : 
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                     * vlSelf->top__DOT__ex_stage_u__DOT__src2))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__DivSel_ex))
                                                     ? 
                                                    VL_MULS_QQQ(64,64,64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                                     : 
                                                    (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                     * vlSelf->top__DOT__ex_stage_u__DOT__src2))))
            : ((4U & (IData)(vlSelf->top__DOT__aluctr_ex))
                ? ((2U & (IData)(vlSelf->top__DOT__aluctr_ex))
                    ? ((1U & (IData)(vlSelf->top__DOT__aluctr_ex))
                        ? (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                           & vlSelf->top__DOT__ex_stage_u__DOT__src2)
                        : (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                           | vlSelf->top__DOT__ex_stage_u__DOT__src2))
                    : ((1U & (IData)(vlSelf->top__DOT__aluctr_ex))
                        ? vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift
                        : (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                           ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)))
                : ((2U & (IData)(vlSelf->top__DOT__aluctr_ex))
                    ? ((1U & (IData)(vlSelf->top__DOT__aluctr_ex))
                        ? vlSelf->top__DOT__ex_stage_u__DOT__src2
                        : (QData)((IData)((1U & ((8U 
                                                  & (IData)(vlSelf->top__DOT__aluctr_ex))
                                                  ? 
                                                 ((1U 
                                                   & __Vtemp15[2U]) 
                                                  ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                                  : 
                                                 ((IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                           >> 0x3fU)) 
                                                  ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow)))))))
                    : ((1U & (IData)(vlSelf->top__DOT__aluctr_ex))
                        ? vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift
                        : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o))));
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
    Vtop___024root___initial__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__5(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst_n = 0;
    vlSelf->pc_diff = 0;
    vlSelf->pc_decoding = 0;
    vlSelf->instr_diff = 0;
    vlSelf->regA0 = 0;
    vlSelf->top__DOT__pc_next = 0;
    vlSelf->top__DOT__pc_new = 0;
    vlSelf->top__DOT__is_jump = 0;
    vlSelf->top__DOT__pc_id = 0;
    vlSelf->top__DOT__instr_id = 0;
    vlSelf->top__DOT__src1sel_id = 0;
    vlSelf->top__DOT__src2sel_id = 0;
    vlSelf->top__DOT__aluctr_id = 0;
    vlSelf->top__DOT__is_brc_id = 0;
    vlSelf->top__DOT__is_jal_id = 0;
    vlSelf->top__DOT__is_jalr_id = 0;
    vlSelf->top__DOT__wben_id = 0;
    vlSelf->top__DOT__rs1_idx_id = 0;
    vlSelf->top__DOT__rs2_idx_id = 0;
    vlSelf->top__DOT__DivEn_id = 0;
    vlSelf->top__DOT__DivSel_id = 0;
    vlSelf->top__DOT__in_trap_id = 0;
    vlSelf->top__DOT__out_trap_id = 0;
    vlSelf->top__DOT__trap_id = 0;
    vlSelf->top__DOT__pc_ex = 0;
    vlSelf->top__DOT__instr_ex = 0;
    vlSelf->top__DOT__src1sel_ex = 0;
    vlSelf->top__DOT__src2sel_ex = 0;
    vlSelf->top__DOT__rs2_ex = 0;
    vlSelf->top__DOT__rs1_ex = 0;
    vlSelf->top__DOT__imm_ex = 0;
    vlSelf->top__DOT__aluctr_ex = 0;
    vlSelf->top__DOT__is_brc_ex = 0;
    vlSelf->top__DOT__is_jal_ex = 0;
    vlSelf->top__DOT__is_jalr_ex = 0;
    vlSelf->top__DOT__wben_ex = 0;
    vlSelf->top__DOT__DivEn_ex = 0;
    vlSelf->top__DOT__DivSel_ex = 0;
    vlSelf->top__DOT__trap_ex = 0;
    vlSelf->top__DOT__rs1_sel = 0;
    vlSelf->top__DOT__rs2_sel = 0;
    vlSelf->top__DOT__rs1_idx_ex = 0;
    vlSelf->top__DOT__rs2_idx_ex = 0;
    vlSelf->top__DOT__pc_ls = 0;
    vlSelf->top__DOT__rs2_ls = 0;
    vlSelf->top__DOT__alures_ls = 0;
    vlSelf->top__DOT__instr_ls = 0;
    vlSelf->top__DOT__wben_ls = 0;
    vlSelf->top__DOT__csrdata_ls = 0;
    vlSelf->top__DOT__trap_ls = 0;
    vlSelf->top__DOT__pc_wb = 0;
    vlSelf->top__DOT__alures_wb = 0;
    vlSelf->top__DOT__lsres_wb = 0;
    vlSelf->top__DOT__instr_wb = 0;
    vlSelf->top__DOT__wb_data = 0;
    vlSelf->top__DOT__wben_wb = 0;
    vlSelf->top__DOT__csrdata_wb = 0;
    vlSelf->top__DOT__IF_u__DOT__rdata = 0;
    vlSelf->top__DOT__ID_u__DOT__ext_op = 0;
    vlSelf->top__DOT__ID_u__DOT__imm = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[__Vi0] = 0;
    }
    vlSelf->top__DOT__hazard_detect_u__DOT__hazard = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__src1 = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__src2 = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__rs1 = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__rs2 = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres = 0;
    vlSelf->top__DOT__forwarding_u__DOT__rd_wb = 0;
    vlSelf->top__DOT__forwarding_u__DOT__reg_wben = 0;
    vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx = 0;
    vlSelf->top__DOT__ls_u__DOT__wr_data = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_b = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_w = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_data_buf = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause = 0;
    vlSelf->__Vtask_top__DOT__IF_u__DOT__vmemread__1__rdata = 0;
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
