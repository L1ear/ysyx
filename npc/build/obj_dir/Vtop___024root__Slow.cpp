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

void Vtop___024root____Vdpiimwrap_top__DOT__u_IDU__DOT__ebreak_TOP();
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_b1951f9b_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_4f660885_0;

void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__1\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx1;
    VlWide<3>/*95:0*/ __Vtemp1;
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp4;
    VlWide<3>/*95:0*/ __Vtemp5;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<3>/*95:0*/ __Vtemp7;
    // Body
    vlSelf->DmemAddr = 0ULL;
    vlSelf->OPcode = (0x7fU & vlSelf->instr);
    vlSelf->top__DOT__branch = 0U;
    vlSelf->top__DOT__RegWrSel = 0U;
    vlSelf->MemWr = 0U;
    vlSelf->top__DOT__RegWrEn = 0U;
    vlSelf->top__DOT__ExtOp = 0U;
    vlSelf->top__DOT__ALUctr = 0U;
    vlSelf->top__DOT__Src1Sel = 0U;
    vlSelf->top__DOT__Src2Sel = 0U;
    vlSelf->MemOp = 0U;
    vlSelf->top__DOT__csrWrEn = 0U;
    vlSelf->top__DOT__csr_op = 0U;
    vlSelf->top__DOT__IntSync = 0U;
    vlSelf->top__DOT__mret = 0U;
    vlSelf->top__DOT__DivEn = 0U;
    vlSelf->top__DOT__DivSel = 0U;
    if ((0x40U & vlSelf->instr)) {
        if ((0x20U & vlSelf->instr)) {
            if ((0x10U & vlSelf->instr)) {
                if ((1U & (~ (vlSelf->instr >> 3U)))) {
                    if ((1U & (~ (vlSelf->instr >> 2U)))) {
                        vlSelf->top__DOT__Src1Sel = 0U;
                        vlSelf->top__DOT__Src2Sel = 2U;
                        vlSelf->top__DOT__RegWrEn = 1U;
                        vlSelf->top__DOT__branch = 0U;
                        vlSelf->top__DOT__RegWrSel = 0U;
                        vlSelf->top__DOT__csrWrEn = 1U;
                        if ((0U == (7U & (vlSelf->instr 
                                          >> 0xcU)))) {
                            if ((0x100000U & vlSelf->instr)) {
                                Vtop___024root____Vdpiimwrap_top__DOT__u_IDU__DOT__ebreak_TOP();
                            } else if ((0x200000U & vlSelf->instr)) {
                                vlSelf->top__DOT__mret = 1U;
                            } else {
                                vlSelf->top__DOT__IntSync = 1U;
                            }
                        } else if ((1U == (7U & (vlSelf->instr 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__ALUctr = 3U;
                            vlSelf->top__DOT__csr_op = 2U;
                        } else if ((2U == (7U & (vlSelf->instr 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__ALUctr = 3U;
                            vlSelf->top__DOT__csr_op = 3U;
                        }
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
                    vlSelf->top__DOT__DivEn = (1U & 
                                               (vlSelf->instr 
                                                >> 0x19U));
                    vlSelf->top__DOT__DivSel = (7U 
                                                & (vlSelf->instr 
                                                   >> 0xcU));
                    vlSelf->top__DOT__ALUctr = ((0x4000U 
                                                 & vlSelf->instr)
                                                 ? 
                                                ((0x2000U 
                                                  & vlSelf->instr)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSelf->instr)
                                                   ? 7U
                                                   : 6U)
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->instr)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelf->instr)
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->instr)
                                                     ? 0x1dU
                                                     : 0xdU)
                                                    : 
                                                   ((8U 
                                                     & vlSelf->instr)
                                                     ? 0x15U
                                                     : 5U))
                                                   : 4U))
                                                 : 
                                                ((0x2000U 
                                                  & vlSelf->instr)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSelf->instr)
                                                   ? 0xaU
                                                   : 2U)
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->instr)
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->instr)
                                                    ? 0x11U
                                                    : 1U)
                                                   : 
                                                  ((0x40000000U 
                                                    & vlSelf->instr)
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->instr)
                                                     ? 0x18U
                                                     : 8U)
                                                    : 
                                                   ((8U 
                                                     & vlSelf->instr)
                                                     ? 0x10U
                                                     : 0U)))));
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
                vlSelf->top__DOT__DivEn = (1U & (vlSelf->instr 
                                                 >> 0x19U));
                vlSelf->top__DOT__DivSel = (7U & (vlSelf->instr 
                                                  >> 0xcU));
                vlSelf->top__DOT__ALUctr = ((0x4000U 
                                             & vlSelf->instr)
                                             ? ((0x2000U 
                                                 & vlSelf->instr)
                                                 ? 
                                                ((0x1000U 
                                                  & vlSelf->instr)
                                                  ? 7U
                                                  : 6U)
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->instr)
                                                  ? 
                                                 ((0x40000000U 
                                                   & vlSelf->instr)
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->instr)
                                                    ? 0x1dU
                                                    : 0xdU)
                                                   : 
                                                  ((8U 
                                                    & vlSelf->instr)
                                                    ? 0x15U
                                                    : 5U))
                                                  : 4U))
                                             : ((0x2000U 
                                                 & vlSelf->instr)
                                                 ? 
                                                ((0x1000U 
                                                  & vlSelf->instr)
                                                  ? 0xaU
                                                  : 2U)
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->instr)
                                                  ? 
                                                 ((8U 
                                                   & vlSelf->instr)
                                                   ? 0x11U
                                                   : 1U)
                                                  : 
                                                 ((0x40000000U 
                                                   & vlSelf->instr)
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->instr)
                                                    ? 0x18U
                                                    : 8U)
                                                   : 
                                                  ((8U 
                                                    & vlSelf->instr)
                                                    ? 0x10U
                                                    : 0U)))));
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
                vlSelf->top__DOT__ALUctr = ((0x4000U 
                                             & vlSelf->instr)
                                             ? ((0x2000U 
                                                 & vlSelf->instr)
                                                 ? 
                                                ((0x1000U 
                                                  & vlSelf->instr)
                                                  ? 7U
                                                  : 6U)
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->instr)
                                                  ? 
                                                 ((0x40000000U 
                                                   & vlSelf->instr)
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->instr)
                                                    ? 0x1dU
                                                    : 0xdU)
                                                   : 
                                                  ((8U 
                                                    & vlSelf->instr)
                                                    ? 0x15U
                                                    : 5U))
                                                  : 4U))
                                             : ((0x2000U 
                                                 & vlSelf->instr)
                                                 ? 
                                                ((0x1000U 
                                                  & vlSelf->instr)
                                                  ? 0xaU
                                                  : 2U)
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->instr)
                                                  ? 
                                                 ((8U 
                                                   & vlSelf->instr)
                                                   ? 0x11U
                                                   : 1U)
                                                  : 
                                                 ((8U 
                                                   & vlSelf->instr)
                                                   ? 0x10U
                                                   : 0U))));
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
            vlSelf->top__DOT__ALUctr = ((0x4000U & vlSelf->instr)
                                         ? ((0x2000U 
                                             & vlSelf->instr)
                                             ? ((0x1000U 
                                                 & vlSelf->instr)
                                                 ? 7U
                                                 : 6U)
                                             : ((0x1000U 
                                                 & vlSelf->instr)
                                                 ? 
                                                ((0x40000000U 
                                                  & vlSelf->instr)
                                                  ? 
                                                 ((8U 
                                                   & vlSelf->instr)
                                                   ? 0x1dU
                                                   : 0xdU)
                                                  : 
                                                 ((8U 
                                                   & vlSelf->instr)
                                                   ? 0x15U
                                                   : 5U))
                                                 : 4U))
                                         : ((0x2000U 
                                             & vlSelf->instr)
                                             ? ((0x1000U 
                                                 & vlSelf->instr)
                                                 ? 0xaU
                                                 : 2U)
                                             : ((0x1000U 
                                                 & vlSelf->instr)
                                                 ? 
                                                ((8U 
                                                  & vlSelf->instr)
                                                  ? 0x11U
                                                  : 1U)
                                                 : 
                                                ((8U 
                                                  & vlSelf->instr)
                                                  ? 0x10U
                                                  : 0U))));
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
    vlSelf->instrAddr = vlSelf->top__DOT__CurPc;
    vlSelf->regA0 = vlSelf->top__DOT__u_regfiles__DOT__regfiles
        [0xaU];
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
    vlSelf->top__DOT__csrRdData = (((((- (QData)((IData)(
                                                         (0x341U 
                                                          == 
                                                          (vlSelf->instr 
                                                           >> 0x14U))))) 
                                      & vlSelf->top__DOT__u_csr_reg__DOT__mepc) 
                                     | ((- (QData)((IData)(
                                                           (0x305U 
                                                            == 
                                                            (vlSelf->instr 
                                                             >> 0x14U))))) 
                                        & vlSelf->top__DOT__u_csr_reg__DOT__mtvec)) 
                                    | ((- (QData)((IData)(
                                                          (0x300U 
                                                           == 
                                                           (vlSelf->instr 
                                                            >> 0x14U))))) 
                                       & vlSelf->top__DOT__u_csr_reg__DOT__mstatus)) 
                                   | ((- (QData)((IData)(
                                                         (0x342U 
                                                          == 
                                                          (vlSelf->instr 
                                                           >> 0x14U))))) 
                                      & vlSelf->top__DOT__u_csr_reg__DOT__mcause));
    vlSelf->top__DOT__mstatus_n = vlSelf->top__DOT__IntSync;
    if (vlSelf->top__DOT__IntSync) {
        vlSelf->top__DOT__mcause_n = 0xbULL;
        vlSelf->top__DOT__mepc_n = vlSelf->top__DOT__CurPc;
    } else {
        vlSelf->top__DOT__mcause_n = 0ULL;
        vlSelf->top__DOT__mepc_n = 0ULL;
    }
    vlSelf->top__DOT__csrUpdata = ((IData)(vlSelf->top__DOT__IntSync) 
                                   | (IData)(vlSelf->top__DOT__mret));
    vlSelf->top__DOT__iotrap = ((IData)(vlSelf->top__DOT__IntSync)
                                 ? 2U : ((IData)(vlSelf->top__DOT__mret)
                                          ? 3U : 0U));
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
    vlSelf->top__DOT__u_csr_reg__DOT__csrWrData = (
                                                   (2U 
                                                    & (IData)(vlSelf->top__DOT__csr_op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__csr_op))
                                                     ? 
                                                    (vlSelf->top__DOT__csrRdData 
                                                     | vlSelf->top__DOT__rs1_data)
                                                     : vlSelf->top__DOT__rs1_data)
                                                    : 0ULL);
    vlSelf->top__DOT__ALUsrc2 = ((2U & (IData)(vlSelf->top__DOT__Src2Sel))
                                  ? ((1U & (IData)(vlSelf->top__DOT__Src2Sel))
                                      ? 4ULL : vlSelf->top__DOT__csrRdData)
                                  : ((1U & (IData)(vlSelf->top__DOT__Src2Sel))
                                      ? vlSelf->top__DOT__imm
                                      : vlSelf->top__DOT__rs2_data));
    vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_src 
        = ((4U & (IData)(vlSelf->top__DOT__ALUctr))
            ? vlSelf->top__DOT__ALUsrc1 : (((QData)((IData)(
                                                            (((IData)(vlSelf->top__DOT__ALUsrc1) 
                                                              << 0x1fU) 
                                                             | ((0x40000000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT__ALUsrc1 
                                                                             >> 1U)) 
                                                                    << 0x1eU)) 
                                                                | ((0x20000000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 2U)) 
                                                                       << 0x1dU)) 
                                                                   | ((0x10000000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 3U)) 
                                                                          << 0x1cU)) 
                                                                      | ((0x8000000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 4U)) 
                                                                             << 0x1bU)) 
                                                                         | ((0x4000000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 5U)) 
                                                                                << 0x1aU)) 
                                                                            | ((0x2000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 6U)) 
                                                                                << 0x19U)) 
                                                                               | ((0x1000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 7U)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 8U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 9U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0xaU)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0xbU)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0xcU)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0xdU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0xeU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0xfU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x10U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x11U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x12U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x13U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x15U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x16U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x17U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x18U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x19U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x1aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x1fU)))))))))))))))))))))))))))))))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             (((IData)(
                                                                       (vlSelf->top__DOT__ALUsrc1 
                                                                        >> 0x20U)) 
                                                               << 0x1fU) 
                                                              | ((0x40000000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT__ALUsrc1 
                                                                              >> 0x21U)) 
                                                                     << 0x1eU)) 
                                                                 | ((0x20000000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x22U)) 
                                                                        << 0x1dU)) 
                                                                    | ((0x10000000U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x23U)) 
                                                                           << 0x1cU)) 
                                                                       | ((0x8000000U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x24U)) 
                                                                              << 0x1bU)) 
                                                                          | ((0x4000000U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x25U)) 
                                                                                << 0x1aU)) 
                                                                             | ((0x2000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x26U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x27U)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x28U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x29U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x2aU)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x2bU)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x2cU)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x2dU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x2eU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x2fU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x30U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x31U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x32U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x33U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x34U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x35U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x36U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x37U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x38U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x39U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x3aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x3bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x3cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x3dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x3eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x3fU))))))))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__u_ALU__DOT__src2_cin = (vlSelf->top__DOT__ALUsrc2 
                                              ^ (- (QData)((IData)(vlSelf->top__DOT__u_ALU__DOT__cin))));
    vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
        = (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_src 
           >> (0x3fU & (IData)(vlSelf->top__DOT__ALUsrc2)));
    VL_EXTEND_WI(65,1, __Vtemp1, (IData)(vlSelf->top__DOT__u_ALU__DOT__cin));
    vlSelf->top__DOT__u_ALU__DOT__Adder_o = ((vlSelf->top__DOT__ALUsrc1 
                                              + vlSelf->top__DOT__u_ALU__DOT__src2_cin) 
                                             + (((QData)((IData)(
                                                                 __Vtemp1[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  __Vtemp1[0U]))));
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
    vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__sll_res 
        = (((QData)((IData)((((IData)(vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res) 
                              << 0x1fU) | ((0x40000000U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                        >> 1U)) 
                                               << 0x1eU)) 
                                           | ((0x20000000U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                           >> 2U)) 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                              >> 3U)) 
                                                     << 0x1cU)) 
                                                 | ((0x8000000U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                 >> 4U)) 
                                                        << 0x1bU)) 
                                                    | ((0x4000000U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                    >> 5U)) 
                                                           << 0x1aU)) 
                                                       | ((0x2000000U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                       >> 6U)) 
                                                              << 0x19U)) 
                                                          | ((0x1000000U 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                          >> 7U)) 
                                                                 << 0x18U)) 
                                                             | ((0x800000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                             >> 8U)) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 9U)) 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0xaU)) 
                                                                          << 0x15U)) 
                                                                      | ((0x100000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0xbU)) 
                                                                             << 0x14U)) 
                                                                         | ((0x80000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0xcU)) 
                                                                                << 0x13U)) 
                                                                            | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0xdU)) 
                                                                                << 0x12U)) 
                                                                               | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0xeU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0xfU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x10U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x11U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x12U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x13U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x15U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x16U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x17U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x18U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x19U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x1aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x1fU)))))))))))))))))))))))))))))))))))) 
            << 0x20U) | (QData)((IData)((((IData)((vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                   >> 0x20U)) 
                                          << 0x1fU) 
                                         | ((0x40000000U 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                         >> 0x21U)) 
                                                << 0x1eU)) 
                                            | ((0x20000000U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                            >> 0x22U)) 
                                                   << 0x1dU)) 
                                               | ((0x10000000U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                               >> 0x23U)) 
                                                      << 0x1cU)) 
                                                  | ((0x8000000U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                  >> 0x24U)) 
                                                         << 0x1bU)) 
                                                     | ((0x4000000U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                     >> 0x25U)) 
                                                            << 0x1aU)) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                        >> 0x26U)) 
                                                               << 0x19U)) 
                                                           | ((0x1000000U 
                                                               & ((IData)(
                                                                          (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                           >> 0x27U)) 
                                                                  << 0x18U)) 
                                                              | ((0x800000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                              >> 0x28U)) 
                                                                     << 0x17U)) 
                                                                 | ((0x400000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x29U)) 
                                                                        << 0x16U)) 
                                                                    | ((0x200000U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x2aU)) 
                                                                           << 0x15U)) 
                                                                       | ((0x100000U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x2bU)) 
                                                                              << 0x14U)) 
                                                                          | ((0x80000U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x2cU)) 
                                                                                << 0x13U)) 
                                                                             | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x2dU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x2eU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x2fU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x30U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x31U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x32U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x33U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x34U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x35U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x36U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x37U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x38U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x39U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x3aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x3bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x3cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x3dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x3eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                                                >> 0x3fU)))))))))))))))))))))))))))))))))))));
    VL_EXTEND_WQ(65,64, __Vtemp3, vlSelf->top__DOT__ALUsrc1);
    VL_EXTEND_WQ(65,64, __Vtemp4, vlSelf->top__DOT__u_ALU__DOT__src2_cin);
    VL_ADD_W(3, __Vtemp5, __Vtemp3, __Vtemp4);
    VL_EXTEND_WI(65,1, __Vtemp6, (IData)(vlSelf->top__DOT__u_ALU__DOT__cin));
    VL_ADD_W(3, __Vtemp7, __Vtemp5, __Vtemp6);
    vlSelf->top__DOT__less = (1U & ((8U & (IData)(vlSelf->top__DOT__ALUctr))
                                     ? ((1U & __Vtemp7[2U]) 
                                        ^ (IData)(vlSelf->top__DOT__u_ALU__DOT__cin))
                                     : ((IData)((vlSelf->top__DOT__u_ALU__DOT__Adder_o 
                                                 >> 0x3fU)) 
                                        ^ (IData)(vlSelf->top__DOT__u_ALU__DOT__overflow))));
    vlSelf->top__DOT__u_ALU__DOT__shift = ((4U & (IData)(vlSelf->top__DOT__ALUctr))
                                            ? ((8U 
                                                & (IData)(vlSelf->top__DOT__ALUctr))
                                                ? (
                                                   (0x10U 
                                                    & (IData)(vlSelf->top__DOT__ALUctr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__ALUsrc1 
                                                                >> 0x1fU)))
                                                     ? 
                                                    (0x100000000ULL 
                                                     | (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                        | (QData)((IData)(
                                                                          (~ (IData)(
                                                                                ((0xffffffffffffffffULL 
                                                                                >> 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->top__DOT__ALUsrc2))) 
                                                                                >> 0x20U)))))))
                                                     : 
                                                    (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                     & (QData)((IData)(
                                                                       ((0xffffffffffffffffULL 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & (IData)(vlSelf->top__DOT__ALUsrc2))) 
                                                                        >> 0x20U)))))
                                                    : 
                                                   (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                    | ((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT__ALUsrc1 
                                                                                >> 0x3fU)))))) 
                                                       & (~ 
                                                          (0xffffffffffffffffULL 
                                                           >> 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->top__DOT__ALUsrc2)))))))
                                                : (
                                                   (0x10U 
                                                    & (IData)(vlSelf->top__DOT__ALUctr))
                                                    ? 
                                                   (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                    & (QData)((IData)(
                                                                      ((0xffffffffffffffffULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & (IData)(vlSelf->top__DOT__ALUsrc2))) 
                                                                       >> 0x20U))))
                                                    : vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res))
                                            : vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__sll_res);
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__zero) 
                     << 4U) | (((IData)(vlSelf->top__DOT__less) 
                                << 3U) | (IData)(vlSelf->top__DOT__branch)));
    vlSelf->top__DOT__PCAsrc = Vtop__ConstPool__TABLE_b1951f9b_0
        [__Vtableidx1];
    vlSelf->top__DOT__PCBsrc = Vtop__ConstPool__TABLE_4f660885_0
        [__Vtableidx1];
    vlSelf->top__DOT__u_ALU__DOT__ALUout = ((IData)(vlSelf->top__DOT__DivEn)
                                             ? ((4U 
                                                 & (IData)(vlSelf->top__DOT__DivSel))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__DivSel))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__DivSel))
                                                   ? 
                                                  VL_MODDIV_QQQ(64, vlSelf->top__DOT__ALUsrc1, vlSelf->top__DOT__ALUsrc2)
                                                   : 
                                                  VL_MODDIVS_QQQ(64, vlSelf->top__DOT__ALUsrc1, vlSelf->top__DOT__ALUsrc2))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__DivSel))
                                                   ? 
                                                  VL_DIV_QQQ(64, vlSelf->top__DOT__ALUsrc1, vlSelf->top__DOT__ALUsrc2)
                                                   : 
                                                  VL_DIVS_QQQ(64, vlSelf->top__DOT__ALUsrc1, vlSelf->top__DOT__ALUsrc2)))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__DivSel))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__DivSel))
                                                   ? 
                                                  (vlSelf->top__DOT__ALUsrc1 
                                                   * vlSelf->top__DOT__ALUsrc2)
                                                   : 
                                                  (vlSelf->top__DOT__ALUsrc1 
                                                   * vlSelf->top__DOT__ALUsrc2))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__DivSel))
                                                   ? 
                                                  VL_MULS_QQQ(64,64,64, vlSelf->top__DOT__ALUsrc1, vlSelf->top__DOT__ALUsrc2)
                                                   : 
                                                  (vlSelf->top__DOT__ALUsrc1 
                                                   * vlSelf->top__DOT__ALUsrc2))))
                                             : ((4U 
                                                 & (IData)(vlSelf->top__DOT__ALUctr))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__ALUctr))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__ALUctr))
                                                   ? 
                                                  (vlSelf->top__DOT__ALUsrc1 
                                                   & vlSelf->top__DOT__ALUsrc2)
                                                   : 
                                                  (vlSelf->top__DOT__ALUsrc1 
                                                   | vlSelf->top__DOT__ALUsrc2))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__ALUctr))
                                                   ? vlSelf->top__DOT__u_ALU__DOT__shift
                                                   : 
                                                  (vlSelf->top__DOT__ALUsrc1 
                                                   ^ vlSelf->top__DOT__ALUsrc2)))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__ALUctr))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__ALUctr))
                                                   ? vlSelf->top__DOT__ALUsrc2
                                                   : (QData)((IData)(vlSelf->top__DOT__less)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__ALUctr))
                                                   ? vlSelf->top__DOT__u_ALU__DOT__shift
                                                   : vlSelf->top__DOT__u_ALU__DOT__Adder_o))));
    vlSelf->top__DOT__NextPc = ((IData)(vlSelf->rst_n)
                                 ? ((2U & (IData)(vlSelf->top__DOT__iotrap))
                                     ? ((1U & (IData)(vlSelf->top__DOT__iotrap))
                                         ? vlSelf->top__DOT__u_csr_reg__DOT__mepc
                                         : vlSelf->top__DOT__u_csr_reg__DOT__mtvec)
                                     : (((IData)(vlSelf->top__DOT__PCAsrc)
                                          ? vlSelf->top__DOT__imm
                                          : 4ULL) + 
                                        ((IData)(vlSelf->top__DOT__PCBsrc)
                                          ? vlSelf->top__DOT__rs1_data
                                          : vlSelf->top__DOT__CurPc)))
                                 : 0x80000000ULL);
    vlSelf->dnpc = vlSelf->top__DOT__NextPc;
}

void Vtop___024root____Vdpiimwrap_top__DOT__u_regfiles__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vtop___024root___initial__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__4\n"); );
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__u_regfiles__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__u_regfiles__DOT__regfiles);
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vtop___024root___initial__TOP__4(vlSelf);
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__1(vlSelf);
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
    vlSelf->DmemDataO = 0;
    vlSelf->instr = 0;
    vlSelf->instrAddr = 0;
    vlSelf->DmemAddr = 0;
    vlSelf->DmemDataI = 0;
    vlSelf->MemWr = 0;
    vlSelf->MemOp = 0;
    vlSelf->OPcode = 0;
    vlSelf->regA0 = 0;
    vlSelf->dnpc = 0;
    vlSelf->top__DOT__PCAsrc = 0;
    vlSelf->top__DOT__PCBsrc = 0;
    vlSelf->top__DOT__NextPc = 0;
    vlSelf->top__DOT__CurPc = 0;
    vlSelf->top__DOT__rs1_data = 0;
    vlSelf->top__DOT__rs2_data = 0;
    vlSelf->top__DOT__imm = 0;
    vlSelf->top__DOT__RegWrEn = 0;
    vlSelf->top__DOT__ExtOp = 0;
    vlSelf->top__DOT__ALUctr = 0;
    vlSelf->top__DOT__Src2Sel = 0;
    vlSelf->top__DOT__Src1Sel = 0;
    vlSelf->top__DOT__RegWrSel = 0;
    vlSelf->top__DOT__branch = 0;
    vlSelf->top__DOT__dwsel = 0;
    vlSelf->top__DOT__DivEn = 0;
    vlSelf->top__DOT__DivSel = 0;
    vlSelf->top__DOT__Div32 = 0;
    vlSelf->top__DOT__sft32 = 0;
    vlSelf->top__DOT__csrWrEn = 0;
    vlSelf->top__DOT__IntSync = 0;
    vlSelf->top__DOT__mret = 0;
    vlSelf->top__DOT__csr_op = 0;
    vlSelf->top__DOT__less = 0;
    vlSelf->top__DOT__zero = 0;
    vlSelf->top__DOT__csrRdData = 0;
    vlSelf->top__DOT__csrUpdata = 0;
    vlSelf->top__DOT__mcause_n = 0;
    vlSelf->top__DOT__mepc_n = 0;
    vlSelf->top__DOT__mstatus_n = 0;
    vlSelf->top__DOT__iotrap = 0;
    vlSelf->top__DOT__ALUsrc1 = 0;
    vlSelf->top__DOT__ALUsrc2 = 0;
    vlSelf->top__DOT__u_ALU__DOT__ALUout = 0;
    vlSelf->top__DOT__u_ALU__DOT__cin = 0;
    vlSelf->top__DOT__u_ALU__DOT__src2_cin = 0;
    vlSelf->top__DOT__u_ALU__DOT__Adder_o = 0;
    vlSelf->top__DOT__u_ALU__DOT__shift = 0;
    vlSelf->top__DOT__u_ALU__DOT__overflow = 0;
    vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_src = 0;
    vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res = 0;
    vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__sll_res = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__u_regfiles__DOT__regfiles[__Vi0] = 0;
    }
    vlSelf->top__DOT__u_csr_reg__DOT__csrWrData = 0;
    vlSelf->top__DOT__u_csr_reg__DOT__mepc = 0;
    vlSelf->top__DOT__u_csr_reg__DOT__mtvec = 0;
    vlSelf->top__DOT__u_csr_reg__DOT__mstatus = 0;
    vlSelf->top__DOT__u_csr_reg__DOT__mcause = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
