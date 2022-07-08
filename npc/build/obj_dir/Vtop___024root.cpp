// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_regfiles__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_regfiles__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {0, 31};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void ebreak();

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_IDU__DOT__ebreak_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_IDU__DOT__ebreak_TOP\n"); );
    // Body
    ebreak();
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->OPcode = (0x7fU & vlSelf->instr);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__u_regfiles__DOT__regfiles__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__u_regfiles__DOT__regfiles__v0;
    // Body
    vlSelf->instrAddr = vlSelf->top__DOT__NextPc;
    vlSelf->top__DOT__CurPc = ((IData)(vlSelf->rst_n)
                                ? vlSelf->top__DOT__NextPc
                                : 0x80000000ULL);
    __Vdlyvval__top__DOT__u_regfiles__DOT__regfiles__v0 
        = ((IData)(vlSelf->top__DOT__RegWrEn) ? ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->instr 
                                                      >> 7U)))
                                                  ? 0ULL
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__RegWrSel)
                                                   ? vlSelf->DmemDataO
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__dwsel)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->top__DOT__ALUout)))
                                                    : vlSelf->top__DOT__ALUout)))
            : vlSelf->top__DOT__u_regfiles__DOT__regfiles
           [(0x1fU & (vlSelf->instr >> 7U))]);
    __Vdlyvdim0__top__DOT__u_regfiles__DOT__regfiles__v0 
        = (0x1fU & (vlSelf->instr >> 7U));
    vlSelf->top__DOT__u_regfiles__DOT__regfiles[__Vdlyvdim0__top__DOT__u_regfiles__DOT__regfiles__v0] 
        = __Vdlyvval__top__DOT__u_regfiles__DOT__regfiles__v0;
    vlSelf->regA0 = vlSelf->top__DOT__u_regfiles__DOT__regfiles
        [0xaU];
}

extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_b1951f9b_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_4f660885_0;

VL_INLINE_OPT void Vtop___024root___combo__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__5\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx1;
    VlWide<3>/*95:0*/ __Vtemp59;
    VlWide<3>/*95:0*/ __Vtemp61;
    VlWide<3>/*95:0*/ __Vtemp62;
    VlWide<3>/*95:0*/ __Vtemp63;
    VlWide<3>/*95:0*/ __Vtemp64;
    VlWide<3>/*95:0*/ __Vtemp65;
    // Body
    vlSelf->top__DOT__branch = 0U;
    vlSelf->top__DOT__RegWrSel = 0U;
    vlSelf->MemWr = 0U;
    vlSelf->top__DOT__RegWrEn = 0U;
    vlSelf->top__DOT__ExtOp = 0U;
    vlSelf->top__DOT__ALUctr = 0U;
    vlSelf->top__DOT__Src1Sel = 0U;
    vlSelf->top__DOT__Src2Sel = 0U;
    vlSelf->MemOp = 0U;
    vlSelf->top__DOT__dwsel = 0U;
    vlSelf->top__DOT__DivEn = 0U;
    vlSelf->top__DOT__DivSel = 0U;
    vlSelf->top__DOT__Div32 = 0U;
    vlSelf->top__DOT__sft32 = 0U;
    if ((0x40U & vlSelf->instr)) {
        if ((0x20U & vlSelf->instr)) {
            if ((0x10U & vlSelf->instr)) {
                if ((1U & (~ (vlSelf->instr >> 3U)))) {
                    if ((1U & (~ (vlSelf->instr >> 2U)))) {
                        Vtop___024root____Vdpiimwrap_top__DOT__u_IDU__DOT__ebreak_TOP();
                    }
                }
            } else if ((8U & vlSelf->instr)) {
                if ((4U & vlSelf->instr)) {
                    vlSelf->top__DOT__Src1Sel = 1U;
                    vlSelf->top__DOT__Src2Sel = 3U;
                    vlSelf->top__DOT__ExtOp = 8U;
                    vlSelf->top__DOT__RegWrEn = 1U;
                    vlSelf->top__DOT__branch = 1U;
                    vlSelf->top__DOT__RegWrSel = 0U;
                    vlSelf->MemWr = 0U;
                    vlSelf->top__DOT__ALUctr = 0U;
                    vlSelf->top__DOT__DivEn = 0U;
                    vlSelf->top__DOT__DivSel = 0U;
                }
            } else if ((4U & vlSelf->instr)) {
                vlSelf->top__DOT__Src1Sel = 1U;
                vlSelf->top__DOT__Src2Sel = 3U;
                vlSelf->top__DOT__ExtOp = 1U;
                vlSelf->top__DOT__RegWrEn = 1U;
                vlSelf->top__DOT__branch = 2U;
                vlSelf->top__DOT__RegWrSel = 0U;
                vlSelf->MemWr = 0U;
                vlSelf->top__DOT__ALUctr = 0U;
                vlSelf->top__DOT__DivEn = 0U;
                vlSelf->top__DOT__DivSel = 0U;
            } else {
                vlSelf->top__DOT__Src1Sel = 0U;
                vlSelf->top__DOT__Src2Sel = 0U;
                vlSelf->top__DOT__ExtOp = 0x10U;
                vlSelf->top__DOT__RegWrEn = 0U;
                vlSelf->MemWr = 0U;
                vlSelf->top__DOT__DivEn = 0U;
                vlSelf->top__DOT__DivSel = 0U;
                if ((0x4000U & vlSelf->instr)) {
                    if ((0x2000U & vlSelf->instr)) {
                        if ((0x1000U & vlSelf->instr)) {
                            vlSelf->top__DOT__ALUctr = 0xaU;
                            vlSelf->top__DOT__branch = 7U;
                        } else {
                            vlSelf->top__DOT__ALUctr = 0xaU;
                            vlSelf->top__DOT__branch = 6U;
                        }
                    } else if ((0x1000U & vlSelf->instr)) {
                        vlSelf->top__DOT__ALUctr = 2U;
                        vlSelf->top__DOT__branch = 7U;
                    } else {
                        vlSelf->top__DOT__ALUctr = 2U;
                        vlSelf->top__DOT__branch = 6U;
                    }
                } else if ((0x2000U & vlSelf->instr)) {
                    vlSelf->top__DOT__ALUctr = 2U;
                    vlSelf->top__DOT__branch = 0U;
                } else if ((0x1000U & vlSelf->instr)) {
                    vlSelf->top__DOT__ALUctr = 2U;
                    vlSelf->top__DOT__branch = 5U;
                } else {
                    vlSelf->top__DOT__ALUctr = 2U;
                    vlSelf->top__DOT__branch = 4U;
                }
            }
        }
    } else if ((0x20U & vlSelf->instr)) {
        if ((0x10U & vlSelf->instr)) {
            if ((8U & vlSelf->instr)) {
                if ((1U & (~ (vlSelf->instr >> 2U)))) {
                    vlSelf->top__DOT__Src1Sel = 0U;
                    vlSelf->top__DOT__Src2Sel = 0U;
                    vlSelf->MemWr = 0U;
                    vlSelf->top__DOT__RegWrEn = 1U;
                    vlSelf->top__DOT__RegWrSel = 0U;
                    vlSelf->top__DOT__branch = 0U;
                    vlSelf->top__DOT__dwsel = 0U;
                    vlSelf->top__DOT__DivEn = (1U & 
                                               (vlSelf->instr 
                                                >> 0x19U));
                    vlSelf->top__DOT__DivSel = (7U 
                                                & (vlSelf->instr 
                                                   >> 0xcU));
                    vlSelf->top__DOT__Div32 = (1U & 
                                               (vlSelf->instr 
                                                >> 3U));
                    if ((0x4000U & vlSelf->instr)) {
                        if ((0x2000U & vlSelf->instr)) {
                            vlSelf->top__DOT__ALUctr 
                                = ((0x1000U & vlSelf->instr)
                                    ? 7U : 6U);
                        } else if ((0x1000U & vlSelf->instr)) {
                            vlSelf->top__DOT__sft32 
                                = (1U & (vlSelf->instr 
                                         >> 3U));
                            vlSelf->top__DOT__ALUctr 
                                = ((0x40000000U & vlSelf->instr)
                                    ? 0xdU : 5U);
                        } else {
                            vlSelf->top__DOT__ALUctr = 4U;
                        }
                    } else if ((0x2000U & vlSelf->instr)) {
                        vlSelf->top__DOT__ALUctr = 
                            ((0x1000U & vlSelf->instr)
                              ? 0xaU : 2U);
                    } else if ((0x1000U & vlSelf->instr)) {
                        vlSelf->top__DOT__dwsel = (1U 
                                                   & (vlSelf->instr 
                                                      >> 3U));
                        vlSelf->top__DOT__ALUctr = 1U;
                    } else {
                        vlSelf->top__DOT__dwsel = (1U 
                                                   & (vlSelf->instr 
                                                      >> 3U));
                        vlSelf->top__DOT__ALUctr = 
                            ((0x40000000U & vlSelf->instr)
                              ? 8U : 0U);
                    }
                }
            } else if ((4U & vlSelf->instr)) {
                vlSelf->top__DOT__Src1Sel = 0U;
                vlSelf->top__DOT__Src2Sel = 1U;
                vlSelf->top__DOT__ExtOp = 2U;
                vlSelf->top__DOT__RegWrEn = 1U;
                vlSelf->top__DOT__branch = 0U;
                vlSelf->top__DOT__RegWrSel = 0U;
                vlSelf->MemWr = 0U;
                vlSelf->top__DOT__ALUctr = 3U;
                vlSelf->top__DOT__DivEn = 0U;
                vlSelf->top__DOT__DivSel = 0U;
            } else {
                vlSelf->top__DOT__Src1Sel = 0U;
                vlSelf->top__DOT__Src2Sel = 0U;
                vlSelf->MemWr = 0U;
                vlSelf->top__DOT__RegWrEn = 1U;
                vlSelf->top__DOT__RegWrSel = 0U;
                vlSelf->top__DOT__branch = 0U;
                vlSelf->top__DOT__dwsel = 0U;
                vlSelf->top__DOT__DivEn = (1U & (vlSelf->instr 
                                                 >> 0x19U));
                vlSelf->top__DOT__DivSel = (7U & (vlSelf->instr 
                                                  >> 0xcU));
                vlSelf->top__DOT__Div32 = (1U & (vlSelf->instr 
                                                 >> 3U));
                if ((0x4000U & vlSelf->instr)) {
                    if ((0x2000U & vlSelf->instr)) {
                        vlSelf->top__DOT__ALUctr = 
                            ((0x1000U & vlSelf->instr)
                              ? 7U : 6U);
                    } else if ((0x1000U & vlSelf->instr)) {
                        vlSelf->top__DOT__sft32 = (1U 
                                                   & (vlSelf->instr 
                                                      >> 3U));
                        vlSelf->top__DOT__ALUctr = 
                            ((0x40000000U & vlSelf->instr)
                              ? 0xdU : 5U);
                    } else {
                        vlSelf->top__DOT__ALUctr = 4U;
                    }
                } else if ((0x2000U & vlSelf->instr)) {
                    vlSelf->top__DOT__ALUctr = ((0x1000U 
                                                 & vlSelf->instr)
                                                 ? 0xaU
                                                 : 2U);
                } else if ((0x1000U & vlSelf->instr)) {
                    vlSelf->top__DOT__dwsel = (1U & 
                                               (vlSelf->instr 
                                                >> 3U));
                    vlSelf->top__DOT__ALUctr = 1U;
                } else {
                    vlSelf->top__DOT__dwsel = (1U & 
                                               (vlSelf->instr 
                                                >> 3U));
                    vlSelf->top__DOT__ALUctr = ((0x40000000U 
                                                 & vlSelf->instr)
                                                 ? 8U
                                                 : 0U);
                }
            }
        } else if ((1U & (~ (vlSelf->instr >> 3U)))) {
            if ((1U & (~ (vlSelf->instr >> 2U)))) {
                vlSelf->top__DOT__branch = 0U;
                vlSelf->top__DOT__RegWrSel = 1U;
                vlSelf->MemWr = 1U;
                vlSelf->top__DOT__RegWrEn = 0U;
                vlSelf->top__DOT__ExtOp = 4U;
                vlSelf->top__DOT__ALUctr = 0U;
                vlSelf->top__DOT__Src1Sel = 0U;
                vlSelf->top__DOT__Src2Sel = 1U;
                vlSelf->MemOp = (7U & (vlSelf->instr 
                                       >> 0xcU));
                vlSelf->top__DOT__DivEn = 0U;
                vlSelf->top__DOT__DivSel = 0U;
            }
        }
    } else if ((0x10U & vlSelf->instr)) {
        if ((8U & vlSelf->instr)) {
            if ((1U & (~ (vlSelf->instr >> 2U)))) {
                vlSelf->top__DOT__Src1Sel = 0U;
                vlSelf->top__DOT__Src2Sel = 1U;
                vlSelf->top__DOT__ExtOp = 1U;
                vlSelf->top__DOT__RegWrEn = 1U;
                vlSelf->top__DOT__branch = 0U;
                vlSelf->top__DOT__RegWrSel = 0U;
                vlSelf->MemWr = 0U;
                vlSelf->top__DOT__DivEn = 0U;
                vlSelf->top__DOT__DivSel = 0U;
                if ((0x4000U & vlSelf->instr)) {
                    if ((0x2000U & vlSelf->instr)) {
                        vlSelf->top__DOT__ALUctr = 
                            ((0x1000U & vlSelf->instr)
                              ? 7U : 6U);
                    } else if ((0x1000U & vlSelf->instr)) {
                        vlSelf->top__DOT__sft32 = (1U 
                                                   & (vlSelf->instr 
                                                      >> 3U));
                        vlSelf->top__DOT__ALUctr = 
                            ((0x40000000U & vlSelf->instr)
                              ? 0xdU : 5U);
                    } else {
                        vlSelf->top__DOT__ALUctr = 4U;
                    }
                } else if ((0x2000U & vlSelf->instr)) {
                    vlSelf->top__DOT__ALUctr = ((0x1000U 
                                                 & vlSelf->instr)
                                                 ? 0xaU
                                                 : 2U);
                } else if ((0x1000U & vlSelf->instr)) {
                    vlSelf->top__DOT__dwsel = (1U & 
                                               (vlSelf->instr 
                                                >> 3U));
                    vlSelf->top__DOT__ALUctr = 1U;
                } else {
                    vlSelf->top__DOT__dwsel = (1U & 
                                               (vlSelf->instr 
                                                >> 3U));
                    vlSelf->top__DOT__ALUctr = 0U;
                }
            }
        } else if ((4U & vlSelf->instr)) {
            vlSelf->top__DOT__Src1Sel = 1U;
            vlSelf->top__DOT__Src2Sel = 1U;
            vlSelf->top__DOT__ExtOp = 2U;
            vlSelf->top__DOT__RegWrEn = 1U;
            vlSelf->top__DOT__branch = 0U;
            vlSelf->top__DOT__RegWrSel = 0U;
            vlSelf->MemWr = 0U;
            vlSelf->top__DOT__ALUctr = 0U;
            vlSelf->top__DOT__DivEn = 0U;
            vlSelf->top__DOT__DivSel = 0U;
        } else {
            vlSelf->top__DOT__Src1Sel = 0U;
            vlSelf->top__DOT__Src2Sel = 1U;
            vlSelf->top__DOT__ExtOp = 1U;
            vlSelf->top__DOT__RegWrEn = 1U;
            vlSelf->top__DOT__branch = 0U;
            vlSelf->top__DOT__RegWrSel = 0U;
            vlSelf->MemWr = 0U;
            vlSelf->top__DOT__DivEn = 0U;
            vlSelf->top__DOT__DivSel = 0U;
            if ((0x4000U & vlSelf->instr)) {
                if ((0x2000U & vlSelf->instr)) {
                    vlSelf->top__DOT__ALUctr = ((0x1000U 
                                                 & vlSelf->instr)
                                                 ? 7U
                                                 : 6U);
                } else if ((0x1000U & vlSelf->instr)) {
                    vlSelf->top__DOT__sft32 = (1U & 
                                               (vlSelf->instr 
                                                >> 3U));
                    vlSelf->top__DOT__ALUctr = ((0x40000000U 
                                                 & vlSelf->instr)
                                                 ? 0xdU
                                                 : 5U);
                } else {
                    vlSelf->top__DOT__ALUctr = 4U;
                }
            } else if ((0x2000U & vlSelf->instr)) {
                vlSelf->top__DOT__ALUctr = ((0x1000U 
                                             & vlSelf->instr)
                                             ? 0xaU
                                             : 2U);
            } else if ((0x1000U & vlSelf->instr)) {
                vlSelf->top__DOT__dwsel = (1U & (vlSelf->instr 
                                                 >> 3U));
                vlSelf->top__DOT__ALUctr = 1U;
            } else {
                vlSelf->top__DOT__dwsel = (1U & (vlSelf->instr 
                                                 >> 3U));
                vlSelf->top__DOT__ALUctr = 0U;
            }
        }
    } else if ((1U & (~ (vlSelf->instr >> 3U)))) {
        if ((1U & (~ (vlSelf->instr >> 2U)))) {
            vlSelf->top__DOT__branch = 0U;
            vlSelf->top__DOT__RegWrSel = 1U;
            vlSelf->MemWr = 0U;
            vlSelf->top__DOT__RegWrEn = 1U;
            vlSelf->top__DOT__ExtOp = 1U;
            vlSelf->top__DOT__ALUctr = 0U;
            vlSelf->top__DOT__Src1Sel = 0U;
            vlSelf->top__DOT__Src2Sel = 1U;
            vlSelf->MemOp = (7U & (vlSelf->instr >> 0xcU));
            vlSelf->top__DOT__DivEn = 0U;
            vlSelf->top__DOT__DivSel = 0U;
        }
    }
    vlSelf->top__DOT__rs1_data = ((0U == (0x1fU & (vlSelf->instr 
                                                   >> 0xfU)))
                                   ? 0ULL : vlSelf->top__DOT__u_regfiles__DOT__regfiles
                                  [(0x1fU & (vlSelf->instr 
                                             >> 0xfU))]);
    vlSelf->top__DOT__rs2_data = ((0U == (0x1fU & (vlSelf->instr 
                                                   >> 0x14U)))
                                   ? 0ULL : vlSelf->top__DOT__u_regfiles__DOT__regfiles
                                  [(0x1fU & (vlSelf->instr 
                                             >> 0x14U))]);
    vlSelf->top__DOT__u_ALU__DOT__cin = (IData)((0U 
                                                 != 
                                                 (0xaU 
                                                  & (IData)(vlSelf->top__DOT__ALUctr))));
    vlSelf->top__DOT__imm = ((0x10U & (IData)(vlSelf->top__DOT__ExtOp))
                              ? ((8U & (IData)(vlSelf->top__DOT__ExtOp))
                                  ? 0ULL : ((4U & (IData)(vlSelf->top__DOT__ExtOp))
                                             ? 0ULL
                                             : ((2U 
                                                 & (IData)(vlSelf->top__DOT__ExtOp))
                                                 ? 0ULL
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__ExtOp))
                                                  ? 0ULL
                                                  : 
                                                 (((- (QData)((IData)(
                                                                      (vlSelf->instr 
                                                                       >> 0x1fU)))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0x800U 
                                                                      & (vlSelf->instr 
                                                                         << 4U)) 
                                                                     | ((0x7e0U 
                                                                         & (vlSelf->instr 
                                                                            >> 0x14U)) 
                                                                        | (0x1eU 
                                                                           & (vlSelf->instr 
                                                                              >> 7U)))))))))))
                              : ((8U & (IData)(vlSelf->top__DOT__ExtOp))
                                  ? ((4U & (IData)(vlSelf->top__DOT__ExtOp))
                                      ? 0ULL : ((2U 
                                                 & (IData)(vlSelf->top__DOT__ExtOp))
                                                 ? 0ULL
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__ExtOp))
                                                  ? 0ULL
                                                  : 
                                                 (((- (QData)((IData)(
                                                                      (vlSelf->instr 
                                                                       >> 0x1fU)))) 
                                                   << 0x14U) 
                                                  | (QData)((IData)(
                                                                    ((0xff000U 
                                                                      & vlSelf->instr) 
                                                                     | ((0x800U 
                                                                         & (vlSelf->instr 
                                                                            >> 9U)) 
                                                                        | (0x7feU 
                                                                           & (vlSelf->instr 
                                                                              >> 0x14U))))))))))
                                  : ((4U & (IData)(vlSelf->top__DOT__ExtOp))
                                      ? ((2U & (IData)(vlSelf->top__DOT__ExtOp))
                                          ? 0ULL : 
                                         ((1U & (IData)(vlSelf->top__DOT__ExtOp))
                                           ? 0ULL : 
                                          (((- (QData)((IData)(
                                                               (vlSelf->instr 
                                                                >> 0x1fU)))) 
                                            << 0xcU) 
                                           | (QData)((IData)(
                                                             ((0xfe0U 
                                                               & (vlSelf->instr 
                                                                  >> 0x14U)) 
                                                              | (0x1fU 
                                                                 & (vlSelf->instr 
                                                                    >> 7U))))))))
                                      : ((2U & (IData)(vlSelf->top__DOT__ExtOp))
                                          ? ((1U & (IData)(vlSelf->top__DOT__ExtOp))
                                              ? 0ULL
                                              : (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (vlSelf->instr 
                                                                              >> 0x1fU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (0xfffff000U 
                                                                    & vlSelf->instr)))))
                                          : ((1U & (IData)(vlSelf->top__DOT__ExtOp))
                                              ? (((- (QData)((IData)(
                                                                     (vlSelf->instr 
                                                                      >> 0x1fU)))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->instr 
                                                                    >> 0x14U))))
                                              : 0ULL)))));
    vlSelf->top__DOT__ALUsrc1 = ((IData)(vlSelf->top__DOT__Src1Sel)
                                  ? vlSelf->top__DOT__CurPc
                                  : vlSelf->top__DOT__rs1_data);
    vlSelf->DmemDataI = vlSelf->top__DOT__rs2_data;
    vlSelf->top__DOT__ALUsrc2 = ((2U & (IData)(vlSelf->top__DOT__Src2Sel))
                                  ? 4ULL : ((1U & (IData)(vlSelf->top__DOT__Src2Sel))
                                             ? vlSelf->top__DOT__imm
                                             : vlSelf->top__DOT__rs2_data));
    if ((4U & (IData)(vlSelf->top__DOT__ALUctr))) {
        if ((8U & (IData)(vlSelf->top__DOT__ALUctr))) {
            if (vlSelf->top__DOT__sft32) {
                vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                    = ((0xffffffff00000000ULL & vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp) 
                       | (IData)((IData)(((1U & (IData)(vlSelf->top__DOT__ALUsrc2))
                                           ? (((IData)(
                                                       (vlSelf->top__DOT__ALUsrc1 
                                                        >> 0x1fU)) 
                                               << 0x1fU) 
                                              | (0x7fffffffU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ALUsrc1 
                                                            >> 1U))))
                                           : (IData)(vlSelf->top__DOT__ALUsrc1)))));
                vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                    = ((0xffffffff00000000ULL & vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp) 
                       | (IData)((IData)(((1U & (IData)(
                                                        (vlSelf->top__DOT__ALUsrc2 
                                                         >> 1U)))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                                                      >> 0x1fU))))) 
                                               << 0x1eU) 
                                              | (0x3fffffffU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                                            >> 2U))))
                                           : (IData)(vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp)))));
                vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                    = ((0xffffffff00000000ULL & vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp) 
                       | (IData)((IData)(((1U & (IData)(
                                                        (vlSelf->top__DOT__ALUsrc2 
                                                         >> 2U)))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                                                      >> 0x1fU))))) 
                                               << 0x1cU) 
                                              | (0xfffffffU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                                            >> 4U))))
                                           : (IData)(vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp)))));
                vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                    = ((0xffffffff00000000ULL & vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp) 
                       | (IData)((IData)(((1U & (IData)(
                                                        (vlSelf->top__DOT__ALUsrc2 
                                                         >> 3U)))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                                                      >> 0x1fU))))) 
                                               << 0x18U) 
                                              | (0xffffffU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                                            >> 8U))))
                                           : (IData)(vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp)))));
                vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                    = ((0xffffffff00000000ULL & vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp) 
                       | (IData)((IData)(((1U & (IData)(
                                                        (vlSelf->top__DOT__ALUsrc2 
                                                         >> 4U)))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                                                      >> 0x1fU))))) 
                                               << 0x10U) 
                                              | (0xffffU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                                            >> 0x10U))))
                                           : (IData)(vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp)))));
                vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                    = ((0xffffffffULL & vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp) 
                       | ((QData)((IData)((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                                                 >> 0x1fU))))))) 
                          << 0x20U));
            } else {
                vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                    = ((1U & (IData)(vlSelf->top__DOT__ALUsrc2))
                        ? (((QData)((IData)((1U & (IData)(
                                                          (vlSelf->top__DOT__ALUsrc1 
                                                           >> 0x3fU))))) 
                            << 0x3fU) | (vlSelf->top__DOT__ALUsrc1 
                                         >> 1U)) : vlSelf->top__DOT__ALUsrc1);
                vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                    = ((1U & (IData)((vlSelf->top__DOT__ALUsrc2 
                                      >> 1U))) ? (((QData)((IData)(
                                                                   (3U 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                                                                >> 0x3fU)))))))) 
                                                   << 0x3eU) 
                                                  | (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                                     >> 2U))
                        : vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp);
                vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                    = ((1U & (IData)((vlSelf->top__DOT__ALUsrc2 
                                      >> 2U))) ? (((QData)((IData)(
                                                                   (0xfU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                                                                >> 0x3fU)))))))) 
                                                   << 0x3cU) 
                                                  | (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                                     >> 4U))
                        : vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp);
                vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                    = ((1U & (IData)((vlSelf->top__DOT__ALUsrc2 
                                      >> 3U))) ? (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                                                                >> 0x3fU)))))))) 
                                                   << 0x38U) 
                                                  | (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                                     >> 8U))
                        : vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp);
                vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                    = ((1U & (IData)((vlSelf->top__DOT__ALUsrc2 
                                      >> 4U))) ? (((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                                                                >> 0x3fU)))))))) 
                                                   << 0x30U) 
                                                  | (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                                     >> 0x10U))
                        : vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp);
                vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                    = ((1U & (IData)((vlSelf->top__DOT__ALUsrc2 
                                      >> 5U))) ? (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                                                                >> 0x3fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                                                     >> 0x20U))))
                        : vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp);
            }
        } else if (vlSelf->top__DOT__sft32) {
            vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                = ((0xffffffff00000000ULL & vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp) 
                   | (IData)((IData)(((1U & (IData)(vlSelf->top__DOT__ALUsrc2))
                                       ? (0x7fffffffU 
                                          & (IData)(
                                                    (vlSelf->top__DOT__ALUsrc1 
                                                     >> 1U)))
                                       : (IData)(vlSelf->top__DOT__ALUsrc1)))));
            vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                = ((0xffffffff00000000ULL & vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp) 
                   | (IData)((IData)(((1U & (IData)(
                                                    (vlSelf->top__DOT__ALUsrc2 
                                                     >> 1U)))
                                       ? (0x3fffffffU 
                                          & (IData)(
                                                    (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                                     >> 2U)))
                                       : (IData)(vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp)))));
            vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                = ((0xffffffff00000000ULL & vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp) 
                   | (IData)((IData)(((1U & (IData)(
                                                    (vlSelf->top__DOT__ALUsrc2 
                                                     >> 2U)))
                                       ? (0xfffffffU 
                                          & (IData)(
                                                    (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                                     >> 4U)))
                                       : (IData)(vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp)))));
            vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                = ((0xffffffff00000000ULL & vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp) 
                   | (IData)((IData)(((1U & (IData)(
                                                    (vlSelf->top__DOT__ALUsrc2 
                                                     >> 3U)))
                                       ? (0xffffffU 
                                          & (IData)(
                                                    (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                                     >> 8U)))
                                       : (IData)(vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp)))));
            vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                = ((0xffffffff00000000ULL & vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp) 
                   | (IData)((IData)(((1U & (IData)(
                                                    (vlSelf->top__DOT__ALUsrc2 
                                                     >> 4U)))
                                       ? (0xffffU & (IData)(
                                                            (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                                             >> 0x10U)))
                                       : (IData)(vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp)))));
            vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                = ((0xffffffffULL & vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp) 
                   | ((QData)((IData)((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                                             >> 0x1fU))))))) 
                      << 0x20U));
        } else {
            vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                = ((1U & (IData)(vlSelf->top__DOT__ALUsrc2))
                    ? (vlSelf->top__DOT__ALUsrc1 >> 1U)
                    : vlSelf->top__DOT__ALUsrc1);
            vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                = ((1U & (IData)((vlSelf->top__DOT__ALUsrc2 
                                  >> 1U))) ? (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                              >> 2U)
                    : vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp);
            vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                = ((1U & (IData)((vlSelf->top__DOT__ALUsrc2 
                                  >> 2U))) ? (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                              >> 4U)
                    : vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp);
            vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                = ((1U & (IData)((vlSelf->top__DOT__ALUsrc2 
                                  >> 3U))) ? (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                              >> 8U)
                    : vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp);
            vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                = ((1U & (IData)((vlSelf->top__DOT__ALUsrc2 
                                  >> 4U))) ? (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                              >> 0x10U)
                    : vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp);
            vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                = ((1U & (IData)((vlSelf->top__DOT__ALUsrc2 
                                  >> 5U))) ? (QData)((IData)(
                                                             (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                                              >> 0x20U)))
                    : vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp);
        }
    } else {
        vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
            = ((1U & (IData)(vlSelf->top__DOT__ALUsrc2))
                ? (vlSelf->top__DOT__ALUsrc1 << 1U)
                : vlSelf->top__DOT__ALUsrc1);
        vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
            = ((1U & (IData)((vlSelf->top__DOT__ALUsrc2 
                              >> 1U))) ? (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                          << 2U) : vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp);
        vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
            = ((1U & (IData)((vlSelf->top__DOT__ALUsrc2 
                              >> 2U))) ? (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                          << 4U) : vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp);
        vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
            = ((1U & (IData)((vlSelf->top__DOT__ALUsrc2 
                              >> 3U))) ? (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                          << 8U) : vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp);
        vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
            = ((1U & (IData)((vlSelf->top__DOT__ALUsrc2 
                              >> 4U))) ? (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
                                          << 0x10U)
                : vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp);
        vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp 
            = ((1U & (IData)((vlSelf->top__DOT__ALUsrc2 
                              >> 5U))) ? ((QData)((IData)(vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp)) 
                                          << 0x20U)
                : vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp);
    }
    vlSelf->top__DOT__u_ALU__DOT__divider__DOT__tmp[0U] = 0U;
    vlSelf->top__DOT__u_ALU__DOT__divider__DOT__tmp[1U] = 0U;
    vlSelf->top__DOT__u_ALU__DOT__divider__DOT__tmp[2U] = 0U;
    vlSelf->top__DOT__u_ALU__DOT__divider__DOT__tmp[3U] = 0U;
    if ((4U & (IData)(vlSelf->top__DOT__DivSel))) {
        if ((2U & (IData)(vlSelf->top__DOT__DivSel))) {
            if ((1U & (IData)(vlSelf->top__DOT__DivSel))) {
                if (vlSelf->top__DOT__Div32) {
                    vlSelf->top__DOT__u_ALU__DOT__divider__DOT__tmp[0U] 
                        = VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__ALUsrc1), (IData)(vlSelf->top__DOT__ALUsrc2));
                    vlSelf->top__DOT__u_ALU__DOT__DivOut 
                        = (((QData)((IData)((- (IData)(
                                                       (vlSelf->top__DOT__u_ALU__DOT__divider__DOT__tmp[0U] 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->top__DOT__u_ALU__DOT__divider__DOT__tmp[0U])));
                } else {
                    vlSelf->top__DOT__u_ALU__DOT__DivOut 
                        = VL_MODDIV_QQQ(64, vlSelf->top__DOT__ALUsrc1, vlSelf->top__DOT__ALUsrc2);
                }
            } else if (vlSelf->top__DOT__Div32) {
                vlSelf->top__DOT__u_ALU__DOT__divider__DOT__tmp[0U] 
                    = VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__ALUsrc1), (IData)(vlSelf->top__DOT__ALUsrc2));
                vlSelf->top__DOT__u_ALU__DOT__DivOut 
                    = (((QData)((IData)((- (IData)(
                                                   (vlSelf->top__DOT__u_ALU__DOT__divider__DOT__tmp[0U] 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->top__DOT__u_ALU__DOT__divider__DOT__tmp[0U])));
            } else {
                vlSelf->top__DOT__u_ALU__DOT__DivOut 
                    = VL_MODDIVS_QQQ(64, vlSelf->top__DOT__ALUsrc1, vlSelf->top__DOT__ALUsrc2);
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__DivSel))) {
            if (vlSelf->top__DOT__Div32) {
                vlSelf->top__DOT__u_ALU__DOT__divider__DOT__tmp[0U] 
                    = VL_DIV_III(32, (IData)(vlSelf->top__DOT__ALUsrc1), (IData)(vlSelf->top__DOT__ALUsrc2));
                vlSelf->top__DOT__u_ALU__DOT__DivOut 
                    = (((QData)((IData)((- (IData)(
                                                   (vlSelf->top__DOT__u_ALU__DOT__divider__DOT__tmp[0U] 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->top__DOT__u_ALU__DOT__divider__DOT__tmp[0U])));
            } else {
                vlSelf->top__DOT__u_ALU__DOT__DivOut 
                    = VL_DIV_QQQ(64, vlSelf->top__DOT__ALUsrc1, vlSelf->top__DOT__ALUsrc2);
            }
        } else if (vlSelf->top__DOT__Div32) {
            vlSelf->top__DOT__u_ALU__DOT__divider__DOT__tmp[0U] 
                = VL_DIVS_III(32, (IData)(vlSelf->top__DOT__ALUsrc1), (IData)(vlSelf->top__DOT__ALUsrc2));
            vlSelf->top__DOT__u_ALU__DOT__DivOut = 
                (((QData)((IData)((- (IData)((vlSelf->top__DOT__u_ALU__DOT__divider__DOT__tmp[0U] 
                                              >> 0x1fU))))) 
                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_ALU__DOT__divider__DOT__tmp[0U])));
        } else {
            vlSelf->top__DOT__u_ALU__DOT__DivOut = 
                VL_DIVS_QQQ(64, vlSelf->top__DOT__ALUsrc1, vlSelf->top__DOT__ALUsrc2);
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__DivSel))) {
        vlSelf->top__DOT__u_ALU__DOT__DivOut = ((1U 
                                                 & (IData)(vlSelf->top__DOT__DivSel))
                                                 ? 
                                                (vlSelf->top__DOT__ALUsrc1 
                                                 * vlSelf->top__DOT__ALUsrc2)
                                                 : 
                                                (vlSelf->top__DOT__ALUsrc1 
                                                 * vlSelf->top__DOT__ALUsrc2));
    } else if ((1U & (IData)(vlSelf->top__DOT__DivSel))) {
        vlSelf->top__DOT__u_ALU__DOT__DivOut = VL_MULS_QQQ(64,64,64, vlSelf->top__DOT__ALUsrc1, vlSelf->top__DOT__ALUsrc2);
    } else if (vlSelf->top__DOT__Div32) {
        vlSelf->top__DOT__u_ALU__DOT__divider__DOT__tmp[0U] 
            = (IData)(((QData)((IData)(vlSelf->top__DOT__ALUsrc1)) 
                       * (QData)((IData)(vlSelf->top__DOT__ALUsrc2))));
        vlSelf->top__DOT__u_ALU__DOT__divider__DOT__tmp[1U] 
            = (IData)((((QData)((IData)(vlSelf->top__DOT__ALUsrc1)) 
                        * (QData)((IData)(vlSelf->top__DOT__ALUsrc2))) 
                       >> 0x20U));
        vlSelf->top__DOT__u_ALU__DOT__DivOut = (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->top__DOT__u_ALU__DOT__divider__DOT__tmp[0U] 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__u_ALU__DOT__divider__DOT__tmp[0U])));
    } else {
        vlSelf->top__DOT__u_ALU__DOT__DivOut = (vlSelf->top__DOT__ALUsrc1 
                                                * vlSelf->top__DOT__ALUsrc2);
    }
    vlSelf->top__DOT__u_ALU__DOT__src2_cin = (vlSelf->top__DOT__ALUsrc2 
                                              ^ (- (QData)((IData)(vlSelf->top__DOT__u_ALU__DOT__cin))));
    VL_EXTEND_WI(65,1, __Vtemp59, (IData)(vlSelf->top__DOT__u_ALU__DOT__cin));
    vlSelf->top__DOT__u_ALU__DOT__Adder_o = ((vlSelf->top__DOT__ALUsrc1 
                                              + vlSelf->top__DOT__u_ALU__DOT__src2_cin) 
                                             + (((QData)((IData)(
                                                                 __Vtemp59[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  __Vtemp59[0U]))));
    vlSelf->top__DOT__u_ALU__DOT__overflow = (((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__ALUsrc1 
                                                           >> 0x3fU))) 
                                               == (1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__u_ALU__DOT__src2_cin 
                                                              >> 0x3fU)))) 
                                              & ((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__u_ALU__DOT__Adder_o 
                                                             >> 0x3fU))) 
                                                 != 
                                                 (1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__ALUsrc1 
                                                             >> 0x3fU)))));
    vlSelf->top__DOT__zero = (1U & (~ (IData)((0U != vlSelf->top__DOT__u_ALU__DOT__Adder_o))));
    VL_EXTEND_WQ(65,64, __Vtemp61, vlSelf->top__DOT__ALUsrc1);
    VL_EXTEND_WQ(65,64, __Vtemp62, vlSelf->top__DOT__u_ALU__DOT__src2_cin);
    VL_ADD_W(3, __Vtemp63, __Vtemp61, __Vtemp62);
    VL_EXTEND_WI(65,1, __Vtemp64, (IData)(vlSelf->top__DOT__u_ALU__DOT__cin));
    VL_ADD_W(3, __Vtemp65, __Vtemp63, __Vtemp64);
    vlSelf->top__DOT__less = (1U & ((8U & (IData)(vlSelf->top__DOT__ALUctr))
                                     ? ((1U & __Vtemp65[2U]) 
                                        ^ (IData)(vlSelf->top__DOT__u_ALU__DOT__cin))
                                     : ((IData)((vlSelf->top__DOT__u_ALU__DOT__Adder_o 
                                                 >> 0x3fU)) 
                                        ^ (IData)(vlSelf->top__DOT__u_ALU__DOT__overflow))));
    vlSelf->top__DOT__ALUout = ((IData)(vlSelf->top__DOT__DivEn)
                                 ? vlSelf->top__DOT__u_ALU__DOT__DivOut
                                 : ((4U & (IData)(vlSelf->top__DOT__ALUctr))
                                     ? ((2U & (IData)(vlSelf->top__DOT__ALUctr))
                                         ? ((1U & (IData)(vlSelf->top__DOT__ALUctr))
                                             ? (vlSelf->top__DOT__ALUsrc1 
                                                & vlSelf->top__DOT__ALUsrc2)
                                             : (vlSelf->top__DOT__ALUsrc1 
                                                | vlSelf->top__DOT__ALUsrc2))
                                         : ((1U & (IData)(vlSelf->top__DOT__ALUctr))
                                             ? vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp
                                             : (vlSelf->top__DOT__ALUsrc1 
                                                ^ vlSelf->top__DOT__ALUsrc2)))
                                     : ((2U & (IData)(vlSelf->top__DOT__ALUctr))
                                         ? ((1U & (IData)(vlSelf->top__DOT__ALUctr))
                                             ? vlSelf->top__DOT__ALUsrc2
                                             : (QData)((IData)(vlSelf->top__DOT__less)))
                                         : ((1U & (IData)(vlSelf->top__DOT__ALUctr))
                                             ? vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp
                                             : vlSelf->top__DOT__u_ALU__DOT__Adder_o))));
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__zero) 
                     << 4U) | (((IData)(vlSelf->top__DOT__less) 
                                << 3U) | (IData)(vlSelf->top__DOT__branch)));
    vlSelf->top__DOT__PCAsrc = Vtop__ConstPool__TABLE_b1951f9b_0
        [__Vtableidx1];
    vlSelf->top__DOT__PCBsrc = Vtop__ConstPool__TABLE_4f660885_0
        [__Vtableidx1];
    vlSelf->DmemAddr = vlSelf->top__DOT__ALUout;
    vlSelf->top__DOT__NextPc = ((IData)(vlSelf->rst_n)
                                 ? (((IData)(vlSelf->top__DOT__PCAsrc)
                                      ? vlSelf->top__DOT__imm
                                      : 4ULL) + ((IData)(vlSelf->top__DOT__PCBsrc)
                                                  ? vlSelf->top__DOT__rs1_data
                                                  : vlSelf->top__DOT__CurPc))
                                 : 0x80000000ULL);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vtop___024root___combo__TOP__5(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
