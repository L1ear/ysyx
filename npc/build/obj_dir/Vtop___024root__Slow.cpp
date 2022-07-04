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
    VlWide<3>/*95:0*/ __Vtemp16;
    VlWide<3>/*95:0*/ __Vtemp18;
    VlWide<3>/*95:0*/ __Vtemp19;
    VlWide<3>/*95:0*/ __Vtemp20;
    VlWide<3>/*95:0*/ __Vtemp21;
    VlWide<3>/*95:0*/ __Vtemp22;
    // Body
    vlSelf->MemOp = 0U;
    vlSelf->top__DOT__branch = 0U;
    vlSelf->top__DOT__RegWrSel = 0U;
    vlSelf->MemWr = 0U;
    vlSelf->top__DOT__RegWrEn = 0U;
    vlSelf->top__DOT__ExtOp = 0U;
    vlSelf->top__DOT__ALUctr = 0U;
    vlSelf->top__DOT__Src1Sel = 0U;
    vlSelf->top__DOT__Src2Sel = 0U;
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
            } else {
                vlSelf->top__DOT__Src1Sel = 0U;
                vlSelf->top__DOT__Src2Sel = 0U;
                vlSelf->top__DOT__ExtOp = 0x10U;
                vlSelf->top__DOT__RegWrEn = 0U;
                vlSelf->MemWr = 0U;
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
            if ((1U & (~ (vlSelf->instr >> 3U)))) {
                if ((4U & vlSelf->instr)) {
                    vlSelf->top__DOT__Src1Sel = 0U;
                    vlSelf->top__DOT__Src2Sel = 1U;
                    vlSelf->top__DOT__ExtOp = 2U;
                    vlSelf->top__DOT__RegWrEn = 1U;
                    vlSelf->top__DOT__branch = 0U;
                    vlSelf->top__DOT__RegWrSel = 0U;
                    vlSelf->MemWr = 0U;
                    vlSelf->top__DOT__ALUctr = 3U;
                } else {
                    vlSelf->top__DOT__Src1Sel = 0U;
                    vlSelf->top__DOT__Src2Sel = 0U;
                    if ((1U & (~ (vlSelf->instr >> 0xeU)))) {
                        if ((1U & (~ (vlSelf->instr 
                                      >> 0xdU)))) {
                            if ((1U & (~ (vlSelf->instr 
                                          >> 0xcU)))) {
                                vlSelf->top__DOT__branch = 0U;
                                vlSelf->top__DOT__RegWrSel = 0U;
                                vlSelf->MemWr = 0U;
                                vlSelf->top__DOT__RegWrEn = 1U;
                                vlSelf->top__DOT__ALUctr 
                                    = ((0x40000000U 
                                        & vlSelf->instr)
                                        ? 8U : 0U);
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->instr)) {
        if ((1U & (~ (vlSelf->instr >> 3U)))) {
            if ((4U & vlSelf->instr)) {
                vlSelf->top__DOT__Src1Sel = 1U;
                vlSelf->top__DOT__Src2Sel = 1U;
                vlSelf->top__DOT__ExtOp = 2U;
                vlSelf->top__DOT__RegWrEn = 1U;
                vlSelf->top__DOT__branch = 0U;
                vlSelf->top__DOT__RegWrSel = 0U;
                vlSelf->MemWr = 0U;
                vlSelf->top__DOT__ALUctr = 0U;
            } else {
                vlSelf->top__DOT__Src1Sel = 0U;
                vlSelf->top__DOT__Src2Sel = 1U;
                vlSelf->top__DOT__ExtOp = 1U;
                vlSelf->top__DOT__RegWrEn = 1U;
                vlSelf->top__DOT__branch = 0U;
                vlSelf->top__DOT__RegWrSel = 0U;
                vlSelf->MemWr = 0U;
                if ((1U & (~ (vlSelf->instr >> 0xeU)))) {
                    if ((1U & (~ (vlSelf->instr >> 0xdU)))) {
                        vlSelf->top__DOT__ALUctr = 
                            ((0x1000U & vlSelf->instr)
                              ? 1U : 0U);
                    }
                }
            }
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
    vlSelf->top__DOT__u_ALU__DOT__src2_cin = (vlSelf->top__DOT__ALUsrc2 
                                              ^ (- (QData)((IData)(vlSelf->top__DOT__u_ALU__DOT__cin))));
    VL_EXTEND_WI(65,1, __Vtemp16, (IData)(vlSelf->top__DOT__u_ALU__DOT__cin));
    vlSelf->top__DOT__u_ALU__DOT__Adder_o = ((vlSelf->top__DOT__ALUsrc1 
                                              + vlSelf->top__DOT__u_ALU__DOT__src2_cin) 
                                             + (((QData)((IData)(
                                                                 __Vtemp16[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  __Vtemp16[0U]))));
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
    VL_EXTEND_WQ(65,64, __Vtemp18, vlSelf->top__DOT__ALUsrc1);
    VL_EXTEND_WQ(65,64, __Vtemp19, vlSelf->top__DOT__u_ALU__DOT__src2_cin);
    VL_ADD_W(3, __Vtemp20, __Vtemp18, __Vtemp19);
    VL_EXTEND_WI(65,1, __Vtemp21, (IData)(vlSelf->top__DOT__u_ALU__DOT__cin));
    VL_ADD_W(3, __Vtemp22, __Vtemp20, __Vtemp21);
    vlSelf->top__DOT__less = (1U & ((8U & (IData)(vlSelf->top__DOT__ALUctr))
                                     ? ((1U & __Vtemp22[2U]) 
                                        ^ (IData)(vlSelf->top__DOT__u_ALU__DOT__cin))
                                     : ((IData)((vlSelf->top__DOT__u_ALU__DOT__Adder_o 
                                                 >> 0x3fU)) 
                                        ^ (IData)(vlSelf->top__DOT__u_ALU__DOT__overflow))));
    vlSelf->top__DOT__ALUout = ((4U & (IData)(vlSelf->top__DOT__ALUctr))
                                 ? ((2U & (IData)(vlSelf->top__DOT__ALUctr))
                                     ? ((1U & (IData)(vlSelf->top__DOT__ALUctr))
                                         ? (vlSelf->top__DOT__ALUsrc1 
                                            & vlSelf->top__DOT__ALUsrc2)
                                         : (vlSelf->top__DOT__ALUsrc1 
                                            | vlSelf->top__DOT__ALUsrc2))
                                     : ((1U & (IData)(vlSelf->top__DOT__ALUctr))
                                         ? vlSelf->top__DOT__u_ALU__DOT__shift
                                         : (vlSelf->top__DOT__ALUsrc1 
                                            ^ vlSelf->top__DOT__ALUsrc2)))
                                 : ((2U & (IData)(vlSelf->top__DOT__ALUctr))
                                     ? ((1U & (IData)(vlSelf->top__DOT__ALUctr))
                                         ? vlSelf->top__DOT__ALUsrc2
                                         : (QData)((IData)(vlSelf->top__DOT__less)))
                                     : ((1U & (IData)(vlSelf->top__DOT__ALUctr))
                                         ? vlSelf->top__DOT__u_ALU__DOT__shift
                                         : vlSelf->top__DOT__u_ALU__DOT__Adder_o)));
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

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
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
    vlSelf->top__DOT__ALUout = 0;
    vlSelf->top__DOT__less = 0;
    vlSelf->top__DOT__zero = 0;
    vlSelf->top__DOT__ALUsrc1 = 0;
    vlSelf->top__DOT__ALUsrc2 = 0;
    vlSelf->top__DOT__u_ALU__DOT__cin = 0;
    vlSelf->top__DOT__u_ALU__DOT__src2_cin = 0;
    vlSelf->top__DOT__u_ALU__DOT__Adder_o = 0;
    vlSelf->top__DOT__u_ALU__DOT__shift = 0;
    vlSelf->top__DOT__u_ALU__DOT__overflow = 0;
    vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__u_regfiles__DOT__regfiles[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
