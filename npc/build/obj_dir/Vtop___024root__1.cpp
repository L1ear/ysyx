// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__866__PROF__axi_slave_ram__l280(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__866__PROF__axi_slave_ram__l280\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
             & (IData)(vlSelf->top__DOT__axi_mmio_w_valid_o))) {
            vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid = 1U;
        } else if (((IData)(vlSelf->top__DOT__axi_mmio_b_ready_o) 
                    & (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid))) {
            vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid = 0U;
        }
    } else {
        vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__867__PROF__axi_slave_ram__l189(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__867__PROF__axi_slave_ram__l189\n"); );
    // Body
    vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_wready 
        = ((IData)(vlSelf->rst_n) & ((~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready)) 
                                     & (IData)(vlSelf->top__DOT__axi_mmio_w_valid_o)));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__868__PROF__clint__l153(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__868__PROF__clint__l153\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready) 
             & (IData)(vlSelf->top__DOT__clint_axi_wvalid))) {
            vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid = 1U;
        } else if (((IData)(vlSelf->top__DOT__clint_axi_bready) 
                    & (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid))) {
            vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid = 0U;
        }
    } else {
        vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__869__PROF__clint__l105(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__869__PROF__clint__l105\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready 
        = ((IData)(vlSelf->rst_n) & ((~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready)) 
                                     & (IData)(vlSelf->top__DOT__clint_axi_wvalid)));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__870__PROF__Icache__l301(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__870__PROF__Icache__l301\n"); );
    // Body
    if ((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) {
        vlSelf->top__DOT__cache_dut__DOT__randomBit 
            = (~ vlSelf->top__DOT__cache_dut__DOT__randomBit);
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__871__PROF__clint__l89(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__871__PROF__clint__l89\n"); );
    // Body
    if (vlSelf->rst_n) {
        if ((((~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready)) 
              & (IData)(vlSelf->top__DOT__clint_axi_awvalid)) 
             & (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__aw_en))) {
            vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr 
                = ((2U == (0xfU & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                           >> 0x18U))))
                    ? vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg
                    : 0ULL);
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__872__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__872__PROF__S011HD1P_X32Y2D128_BW__l22\n"); );
    // Body
    if (((~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)) 
         & (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2))) {
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0[0U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0[1U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0[2U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0[3U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0 
            = vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__873__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__873__PROF__S011HD1P_X32Y2D128_BW__l22\n"); );
    // Body
    if (((~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)) 
         & (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2))) {
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0[0U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0[1U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0[2U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0[3U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0 
            = vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__874__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__874__PROF__S011HD1P_X32Y2D128_BW__l22\n"); );
    // Body
    if (((~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)) 
         & (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1))) {
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0[0U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0[1U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0[2U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0[3U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0 
            = vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__875__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__875__PROF__S011HD1P_X32Y2D128_BW__l22\n"); );
    // Body
    if (((~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)) 
         & (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1))) {
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0[0U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0[1U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0[2U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0[3U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0 
            = vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__876__PROF__clint__l180(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__876__PROF__clint__l180\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready)) 
             & (IData)(vlSelf->top__DOT__clint_axi_arvalid))) {
            vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_arready = 1U;
            vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_araddr 
                = ((2U == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                           >> 0x18U))))
                    ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr
                    : 0ULL);
        } else {
            vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_arready = 0U;
        }
    } else {
        vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_arready = 0U;
        vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_araddr = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__877__PROF__Dcache__l372(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__877__PROF__Dcache__l372\n"); );
    // Body
    if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
        vlSelf->__Vdly__top__DOT__Dcache_u__DOT__randomBit 
            = (1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)));
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__878__PROF__axi_dcache__l145(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__878__PROF__axi_dcache__l145\n"); );
    // Body
    if (((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
         & (IData)(vlSelf->top__DOT__DcacheWrValid))) {
        vlSelf->top__DOT__axi_ls_u__DOT__storeLenth_reg 
            = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                ? 0U : 3U);
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__879__PROF__axi_dcache__l145(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__879__PROF__axi_dcache__l145\n"); );
    // Body
    if (((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
         & (IData)(vlSelf->top__DOT__DcacheWrValid))) {
        vlSelf->top__DOT__axi_ls_u__DOT__wrMask_reg 
            = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                ? (0xffU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask))
                : 0xffU);
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__880__PROF__axi_slave_ram__l345(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__880__PROF__axi_slave_ram__l345\n"); );
    // Body
    if (vlSelf->rst_n) {
        if ((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
              & (IData)(vlSelf->top__DOT__axi_mmio_ar_valid_o)) 
             & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))) {
            vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid = 1U;
            vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp = 0U;
        } else if (((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid) 
                    & (((0xaU != (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1cU)))) 
                        | (2U == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x18U)))))
                        ? 0U : (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready)))) {
            vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid = 0U;
        }
    } else {
        vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid = 0U;
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__881__PROF__clint__l203(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__881__PROF__clint__l203\n"); );
    // Body
    if (vlSelf->rst_n) {
        if ((((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready) 
              & (IData)(vlSelf->top__DOT__clint_axi_arvalid)) 
             & (~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid)))) {
            vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid = 1U;
            vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp = 0U;
        } else if (((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid) 
                    & ((2U == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                               >> 0x18U))))
                        ? (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready)
                        : 0U))) {
            vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid = 0U;
        }
    } else {
        vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid = 0U;
        vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp = 0U;
    }
}

void Vtop___024unit____Vdpiimwrap_axiSlaveWrite_TOP____024unit(QData/*63:0*/ waddr, CData/*7:0*/ size, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vtop___024root___sequent__TOP__882__PROF__axi_slave_ram__l221(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__882__PROF__axi_slave_ram__l221\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
             & (IData)(vlSelf->top__DOT__axi_mmio_w_valid_o))) {
            Vtop___024unit____Vdpiimwrap_axiSlaveWrite_TOP____024unit(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr, 
                                                                      (((0xaU 
                                                                         != 
                                                                         (0xfU 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                                                >> 0x1cU)))) 
                                                                        | (2U 
                                                                           == 
                                                                           (0xfU 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                                                >> 0x18U)))))
                                                                        ? 0U
                                                                        : 
                                                                       (7U 
                                                                        & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg))), 
                                                                      (((0xaU 
                                                                         != 
                                                                         (0xfU 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                                                >> 0x1cU)))) 
                                                                        | (2U 
                                                                           == 
                                                                           (0xfU 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                                                >> 0x18U)))))
                                                                        ? 0ULL
                                                                        : vlSelf->top__DOT__ls_axi_w_data_o), 
                                                                      (((0xaU 
                                                                         != 
                                                                         (0xfU 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                                                >> 0x1cU)))) 
                                                                        | (2U 
                                                                           == 
                                                                           (0xfU 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                                                >> 0x18U)))))
                                                                        ? 0U
                                                                        : 
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->top__DOT__ls_axi_w_strb_o))));
        }
    } else {
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0 = 0ULL;
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1 = 0ULL;
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2 = 0ULL;
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3 = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__883__PROF__regfile__l31(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__883__PROF__regfile__l31\n"); );
    // Body
    if ((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) {
        vlSelf->__Vdlyvval__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0 
            = ((0U == (0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                >> 8U))) ? 0ULL : vlSelf->top__DOT__wb_data);
        vlSelf->__Vdlyvset__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0 = 1U;
        vlSelf->__Vdlyvdim0__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0 
            = (0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                        >> 8U));
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__884__PROF__axi_dcache__l145(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__884__PROF__axi_dcache__l145\n"); );
    // Variables
    VlWide<8>/*255:0*/ __Vtemp119;
    // Body
    if (((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
         & (IData)(vlSelf->top__DOT__DcacheWrValid))) {
        VL_EXTEND_WQ(256,64, __Vtemp119, vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch);
        if ((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[0U] 
                = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                    ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U]
                    : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U]);
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[1U] 
                = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                    ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U]
                    : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U]);
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[2U] 
                = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                    ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U]
                    : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U]);
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[3U] 
                = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                    ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U]
                    : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U]);
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[4U] 
                = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                    ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U]
                    : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U]);
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[5U] 
                = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                    ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U]
                    : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U]);
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[6U] 
                = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                    ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U]
                    : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U]);
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[7U] 
                = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                    ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U]
                    : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U]);
        } else {
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[0U] 
                = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                    ? __Vtemp119[0U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                         ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U]
                                         : vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U]));
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[1U] 
                = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                    ? __Vtemp119[1U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                         ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U]
                                         : vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U]));
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[2U] 
                = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                    ? __Vtemp119[2U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                         ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U]
                                         : vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U]));
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[3U] 
                = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                    ? __Vtemp119[3U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                         ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U]
                                         : vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U]));
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[4U] 
                = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                    ? __Vtemp119[4U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                         ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U]
                                         : vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U]));
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[5U] 
                = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                    ? __Vtemp119[5U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                         ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U]
                                         : vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U]));
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[6U] 
                = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                    ? __Vtemp119[6U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                         ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U]
                                         : vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U]));
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[7U] 
                = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                    ? __Vtemp119[7U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                         ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U]
                                         : vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U]));
        }
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__892__PROF__axi_slave_ram__l292(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__892__PROF__axi_slave_ram__l292\n"); );
    // Body
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid 
        = vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__893__PROF__clint__l165(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__893__PROF__clint__l165\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid 
        = vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__896__PROF__clint__l75(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__896__PROF__clint__l75\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__aw_en 
        = vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__aw_en;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__898__PROF__clint__l74(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__898__PROF__clint__l74\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready 
        = vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_awready;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__899__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__899__PROF__S011HD1P_X32Y2D128_BW__l24\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0) {
        vlSelf->top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0[0U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0[1U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0[2U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0[3U];
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__900__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__900__PROF__S011HD1P_X32Y2D128_BW__l24\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0) {
        vlSelf->top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0[0U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0[1U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0[2U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0[3U];
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__901__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__901__PROF__S011HD1P_X32Y2D128_BW__l24\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0) {
        vlSelf->top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0[0U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0[1U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0[2U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0[3U];
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__902__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__902__PROF__S011HD1P_X32Y2D128_BW__l24\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0) {
        vlSelf->top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0[0U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0[1U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0[2U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0[3U];
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__907__PROF__axi_slave_ram__l357(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__907__PROF__axi_slave_ram__l357\n"); );
    // Body
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid 
        = vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__909__PROF__clint__l215(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__909__PROF__clint__l215\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid 
        = vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__910__PROF__clint__l192(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__910__PROF__clint__l192\n"); );
    // Body
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready 
        = vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_arready;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__915__PROF__axi_slave_ram__l203(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__915__PROF__axi_slave_ram__l203\n"); );
    // Body
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready 
        = vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_wready;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__919__PROF__Dcache__l374(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__919__PROF__Dcache__l374\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT__randomBit = vlSelf->__Vdly__top__DOT__Dcache_u__DOT__randomBit;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__924__PROF__axi_slave_ram__l314(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__924__PROF__axi_slave_ram__l314\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready)) 
             & (IData)(vlSelf->top__DOT__axi_mmio_ar_valid_o))) {
            vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready = 1U;
            vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr 
                = (((0xaU != (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                              >> 0x1cU)))) 
                    | (2U == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                              >> 0x18U)))))
                    ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr);
        } else {
            vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready = 0U;
        }
    } else {
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready = 0U;
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__928__PROF__axi_slave_ram__l168(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__928__PROF__axi_slave_ram__l168\n"); );
    // Body
    if (vlSelf->rst_n) {
        if ((((~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)) 
              & (IData)(vlSelf->top__DOT__axi_mmio_aw_valid_o)) 
             & (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en))) {
            vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr 
                = (((0xaU != (0xfU & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                              >> 0x1cU)))) 
                    | (2U == (0xfU & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                              >> 0x18U)))))
                    ? 0ULL : vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg);
        }
    } else {
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__929__PROF__axi_dcache__l145(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__929__PROF__axi_dcache__l145\n"); );
    // Body
    if (((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
         & (IData)(vlSelf->top__DOT__DcacheWrValid))) {
        vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg 
            = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                ? (7U & (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size))
                : 3U);
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__930__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__930__PROF__S011HD1P_X32Y2D128_BW__l22\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp127;
    VlWide<4>/*127:0*/ __Vtemp137;
    VlWide<4>/*127:0*/ __Vtemp151;
    VlWide<4>/*127:0*/ __Vtemp163;
    // Body
    if ((((((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                  | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                     & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                 & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
               | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
              | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
             | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)) 
           | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
          | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
         & (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))) {
        VL_EXTEND_WQ(128,64, __Vtemp127, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        VL_EXTEND_WQ(128,64, __Vtemp137, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        VL_EXTEND_WQ(128,64, __Vtemp151, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp163[0U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? 0U : __Vtemp127[0U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? 0U
                                                     : 
                                                    __Vtemp137[0U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][0U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? 0U : 
                                            __Vtemp151[0U])
                                         : 0U) : 0U)))));
        __Vtemp163[1U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? 0U : __Vtemp127[1U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? 0U
                                                     : 
                                                    __Vtemp137[1U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][1U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? 0U : 
                                            __Vtemp151[1U])
                                         : 0U) : 0U)))));
        __Vtemp163[2U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                     : __Vtemp127[2U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                                     : 
                                                    __Vtemp137[2U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][2U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                             : __Vtemp151[2U])
                                         : 0U) : 0U)))));
        __Vtemp163[3U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                                >> 0x20U))
                                     : __Vtemp127[3U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                                >> 0x20U))
                                                     : 
                                                    __Vtemp137[3U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][3U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                        >> 0x20U))
                                             : __Vtemp151[3U])
                                         : 0U) : 0U)))));
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0[0U] 
            = __Vtemp163[0U];
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0[1U] 
            = __Vtemp163[1U];
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0[2U] 
            = __Vtemp163[2U];
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0[3U] 
            = __Vtemp163[3U];
        vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0 
            = vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A;
    }
    if ((1U & (((((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                        | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                           & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                       & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                      | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                     | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                    | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                   | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                  | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)) 
                 | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
               & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))))) {
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][0U];
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][1U];
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][2U];
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][3U];
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U] 
            = VL_RANDOM_I(32);
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__931__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__931__PROF__S011HD1P_X32Y2D128_BW__l22\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp170;
    VlWide<4>/*127:0*/ __Vtemp180;
    VlWide<4>/*127:0*/ __Vtemp194;
    VlWide<4>/*127:0*/ __Vtemp206;
    // Body
    if ((((((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                  | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                     & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                 & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
               | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
              | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
             | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)) 
           | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
          | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
         & (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))) {
        VL_EXTEND_WQ(128,64, __Vtemp170, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        VL_EXTEND_WQ(128,64, __Vtemp180, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        VL_EXTEND_WQ(128,64, __Vtemp194, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp206[0U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? 0U : __Vtemp170[0U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? 0U
                                                     : 
                                                    __Vtemp180[0U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][0U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? 0U : 
                                            __Vtemp194[0U])
                                         : 0U) : 0U)))));
        __Vtemp206[1U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? 0U : __Vtemp170[1U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? 0U
                                                     : 
                                                    __Vtemp180[1U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][1U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? 0U : 
                                            __Vtemp194[1U])
                                         : 0U) : 0U)))));
        __Vtemp206[2U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                     : __Vtemp170[2U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                                     : 
                                                    __Vtemp180[2U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][2U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                             : __Vtemp194[2U])
                                         : 0U) : 0U)))));
        __Vtemp206[3U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                                >> 0x20U))
                                     : __Vtemp170[3U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                                >> 0x20U))
                                                     : 
                                                    __Vtemp180[3U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][3U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                        >> 0x20U))
                                             : __Vtemp194[3U])
                                         : 0U) : 0U)))));
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0[0U] 
            = __Vtemp206[0U];
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0[1U] 
            = __Vtemp206[1U];
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0[2U] 
            = __Vtemp206[2U];
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0[3U] 
            = __Vtemp206[3U];
        vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0 
            = vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A;
    }
    if ((1U & (((((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                        | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                           & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                       & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                      | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                     | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                    | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                   | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                  | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)) 
                 | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
               & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2))))) {
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][0U];
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][1U];
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][2U];
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A][3U];
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U] 
            = VL_RANDOM_I(32);
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__932__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__932__PROF__S011HD1P_X32Y2D128_BW__l22\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp213;
    VlWide<4>/*127:0*/ __Vtemp223;
    VlWide<4>/*127:0*/ __Vtemp237;
    VlWide<4>/*127:0*/ __Vtemp249;
    // Body
    if ((((((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                  | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                     & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                 & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
               | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
              | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
             | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)) 
           | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
          | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
         & (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))) {
        VL_EXTEND_WQ(128,64, __Vtemp213, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        VL_EXTEND_WQ(128,64, __Vtemp223, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        VL_EXTEND_WQ(128,64, __Vtemp237, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp249[0U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? 0U : __Vtemp213[0U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? 0U
                                                     : 
                                                    __Vtemp223[0U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][0U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? 0U : 
                                            __Vtemp237[0U])
                                         : 0U) : 0U)))));
        __Vtemp249[1U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? 0U : __Vtemp213[1U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? 0U
                                                     : 
                                                    __Vtemp223[1U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][1U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? 0U : 
                                            __Vtemp237[1U])
                                         : 0U) : 0U)))));
        __Vtemp249[2U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                     : __Vtemp213[2U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                                     : 
                                                    __Vtemp223[2U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][2U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                             : __Vtemp237[2U])
                                         : 0U) : 0U)))));
        __Vtemp249[3U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                                >> 0x20U))
                                     : __Vtemp213[3U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                                >> 0x20U))
                                                     : 
                                                    __Vtemp223[3U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][3U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                        >> 0x20U))
                                             : __Vtemp237[3U])
                                         : 0U) : 0U)))));
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0[0U] 
            = __Vtemp249[0U];
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0[1U] 
            = __Vtemp249[1U];
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0[2U] 
            = __Vtemp249[2U];
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0[3U] 
            = __Vtemp249[3U];
        vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0 
            = vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A;
    }
    if ((1U & (((((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                        | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                           & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                       & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                      | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                     | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                    | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                   | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                  | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)) 
                 | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
               & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))))) {
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][0U];
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][1U];
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][2U];
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][3U];
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U] 
            = VL_RANDOM_I(32);
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__933__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__933__PROF__S011HD1P_X32Y2D128_BW__l22\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp256;
    VlWide<4>/*127:0*/ __Vtemp266;
    VlWide<4>/*127:0*/ __Vtemp280;
    VlWide<4>/*127:0*/ __Vtemp292;
    // Body
    if ((((((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                  | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                     & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                 & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
               | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
              | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
             | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
            | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)) 
           | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
          | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
         & (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))) {
        VL_EXTEND_WQ(128,64, __Vtemp256, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        VL_EXTEND_WQ(128,64, __Vtemp266, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        VL_EXTEND_WQ(128,64, __Vtemp280, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp292[0U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? 0U : __Vtemp256[0U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? 0U
                                                     : 
                                                    __Vtemp266[0U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][0U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? 0U : 
                                            __Vtemp280[0U])
                                         : 0U) : 0U)))));
        __Vtemp292[1U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? 0U : __Vtemp256[1U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? 0U
                                                     : 
                                                    __Vtemp266[1U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][1U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? 0U : 
                                            __Vtemp280[1U])
                                         : 0U) : 0U)))));
        __Vtemp292[2U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                     : __Vtemp256[2U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                                     : 
                                                    __Vtemp266[2U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][2U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                             : __Vtemp280[2U])
                                         : 0U) : 0U)))));
        __Vtemp292[3U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                                >> 0x20U))
                                     : __Vtemp256[3U])
                                 : 0U)) & ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                            ? 0xffffffffU
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 0x20U)))
                                                ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 3U)))
                                                     ? (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                                >> 0x20U))
                                                     : 
                                                    __Vtemp266[3U])
                                                    : 0U)
                                                : 0U))) 
                          | (vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram
                             [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][3U] 
                             & (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                    ? 0xffffffffU : 
                                   ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 0x20U)))
                                     ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? (IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                        >> 0x20U))
                                             : __Vtemp280[3U])
                                         : 0U) : 0U)))));
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0[0U] 
            = __Vtemp292[0U];
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0[1U] 
            = __Vtemp292[1U];
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0[2U] 
            = __Vtemp292[2U];
        vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0[3U] 
            = __Vtemp292[3U];
        vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0 
            = vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A;
    }
    if ((1U & (((((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                        | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                           & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                       & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                      | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                     | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                    | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                   | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                  | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)) 
                 | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
               & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1))))) {
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][0U];
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][1U];
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][2U];
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U] 
            = vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram
            [vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A][3U];
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U] 
            = VL_RANDOM_I(32);
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__936__PROF__axi_slave_ram__l150(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__936__PROF__axi_slave_ram__l150\n"); );
    // Body
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en = vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__aw_en;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__938__PROF__axi_slave_ram__l149(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__938__PROF__axi_slave_ram__l149\n"); );
    // Body
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready 
        = vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_awready;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__941__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__941__PROF__S011HD1P_X32Y2D128_BW__l24\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0) {
        vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0[0U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0[1U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0[2U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0[3U];
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__943__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__943__PROF__S011HD1P_X32Y2D128_BW__l24\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0) {
        vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0[0U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0[1U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0[2U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0[3U];
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__945__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__945__PROF__S011HD1P_X32Y2D128_BW__l24\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0) {
        vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0[0U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0[1U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0[2U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0[3U];
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__947__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__947__PROF__S011HD1P_X32Y2D128_BW__l24\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0) {
        vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0[0U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0[1U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0[2U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram[vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0[3U];
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__949__PROF__axi_dcache__l145(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__949__PROF__axi_dcache__l145\n"); );
    // Body
    if (((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
         & (IData)(vlSelf->top__DOT__DcacheWrValid))) {
        vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
            = vlSelf->top__DOT__DcacheWrAddr;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__963__PROF__dff__l12(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__963__PROF__dff__l12\n"); );
    // Body
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__resultValidReg_q 
        = ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n) 
           & ((~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__stateReg)) 
              | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__stateReg) 
                 & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q))));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__968__PROF__Dcache__l648(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__968__PROF__Dcache__l648\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT__cleanCnt = vlSelf->__Vdly__top__DOT__Dcache_u__DOT__cleanCnt;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__976__PROF__Icache__l291(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__976__PROF__Icache__l291\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
             & (IData)(vlSelf->top__DOT__dataValid_o))) {
            VL_ASSIGNSEL_WIIQ(256,64,(0xffU & ((IData)(vlSelf->top__DOT__cache_dut__DOT__rdCnt) 
                                               << 6U)), vlSelf->top__DOT__cache_dut__DOT__rdBuffer, 
                              ((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data));
        }
    } else {
        vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U] = 0U;
        vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U] = 0U;
        vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U] = 0U;
        vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U] = 0U;
        vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U] = 0U;
        vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U] = 0U;
        vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U] = 0U;
        vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U] = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__977__PROF__dff__l12(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__977__PROF__dff__l12\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__ls_stall_n) {
            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U] 
                = vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[0U];
            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U] 
                = vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[1U];
            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                = vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[2U];
            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U] 
                = vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[3U];
            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U] 
                = vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[4U];
            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U] 
                = vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[5U];
            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                = vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[6U];
            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                = vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[7U];
            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U] 
                = vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[8U];
            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U] 
                = vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[9U];
        }
    } else {
        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U] = 0U;
        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U] = 0U;
        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] = 0U;
        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U] = 0U;
        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U] = 0U;
        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U] = 0U;
        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] = 0U;
        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] = 0U;
        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U] = 0U;
        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U] = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__978__PROF__Dcache__l452(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__978__PROF__Dcache__l452\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
             & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                        >> 0x20U)))) {
            vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch 
                = vlSelf->top__DOT__Dcache_u__DOT__storeData;
        }
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__990__PROF__Dcache__l361(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__990__PROF__Dcache__l361\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
             & (IData)(vlSelf->top__DOT__lsAxiRdDataVAlid))) {
            VL_ASSIGNSEL_WIIQ(256,64,(0xffU & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__rdCnt) 
                                               << 6U)), vlSelf->top__DOT__Dcache_u__DOT__rdBuffer, vlSelf->top__DOT__ls_axi_r_data_i);
        }
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U] = 0U;
        vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U] = 0U;
        vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U] = 0U;
        vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U] = 0U;
        vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U] = 0U;
        vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U] = 0U;
        vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U] = 0U;
        vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U] = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__991__PROF__axi_dcache__l95(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__991__PROF__axi_dcache__l95\n"); );
    // Body
    vlSelf->top__DOT__axi_ls_u__DOT__w_state = ((IData)(vlSelf->rst_n)
                                                 ? (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state_next)
                                                 : 0U);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__992__PROF__mulTop__l17(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__992__PROF__mulTop__l17\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__mul_valid) {
            vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__stateReg = 1U;
        } else if (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q) {
            vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__stateReg = 0U;
        }
    } else {
        vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__stateReg = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__993__PROF__Icache__l286(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__993__PROF__Icache__l286\n"); );
    // Body
    vlSelf->top__DOT__cache_dut__DOT__rdCnt = vlSelf->__Vdly__top__DOT__cache_dut__DOT__rdCnt;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__999__PROF__Dcache__l357(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__999__PROF__Dcache__l357\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT__rdCnt = vlSelf->__Vdly__top__DOT__Dcache_u__DOT__rdCnt;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1004__PROF__Icache__l58(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1004__PROF__Icache__l58\n"); );
    // Body
    vlSelf->top__DOT__cache_dut__DOT__cacheCurState 
        = ((IData)(vlSelf->rst_n) ? (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheNexState)
            : 0U);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1009__PROF__Dcache__l203(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1009__PROF__Dcache__l203\n"); );
    // Body
    if (vlSelf->rst_n) {
        if ((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
               | ((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                  & ((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i) 
                     & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit) 
                        | (~ (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i)))))) 
              | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                 & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i))) 
             & (IData)(vlSelf->top__DOT__ls_stall_n))) {
            vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                = (((QData)((IData)(((3U != (0x7fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 4U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1cU)))) 
                                     | (8U == (0x1fU 
                                               & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                   << 2U) 
                                                  | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                     >> 0x1eU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i)));
        }
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__reqLatch = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1020__PROF__mul64__l71(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1020__PROF__mul64__l71\n"); );
    // Body
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q 
        = ((IData)(vlSelf->rst_n) & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_d));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1037__PROF__Dcache__l92(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1037__PROF__Dcache__l92\n"); );
    // Body
    vlSelf->top__DOT__Dcache_u__DOT__cacheCurState 
        = ((IData)(vlSelf->rst_n) ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheNexState)
            : 0U);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1038__PROF__dff__l12(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1038__PROF__dff__l12\n"); );
    // Variables
    VlWide<10>/*319:0*/ __Vtemp301;
    // Body
    if (vlSelf->rst_n) {
        if ((1U & (~ (((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                       | (IData)(vlSelf->top__DOT__dataNotOk)) 
                      | (IData)(vlSelf->top__DOT__ex_not_ok))))) {
            __Vtemp301[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                               << 0x1cU) | (((IData)(vlSelf->top__DOT__aluctr_id) 
                                             << 0x17U) 
                                            | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                 & (IData)(vlSelf->top__DOT__is_jalr_id)) 
                                                << 0x16U) 
                                               | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                    & (IData)(vlSelf->top__DOT__is_jal_id)) 
                                                   << 0x15U) 
                                                  | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                       & (IData)(vlSelf->top__DOT__is_brc_id)) 
                                                      << 0x14U) 
                                                     | (((IData)(vlSelf->top__DOT__src1sel_id) 
                                                         << 0x13U) 
                                                        | (((IData)(vlSelf->top__DOT__src2sel_id) 
                                                            << 0x11U) 
                                                           | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                                & (IData)(vlSelf->top__DOT__wben_id)) 
                                                               << 0x10U) 
                                                              | (((IData)(vlSelf->top__DOT__rs1_idx_id) 
                                                                  << 0xbU) 
                                                                 | (((IData)(vlSelf->top__DOT__rs2_idx_id) 
                                                                     << 6U) 
                                                                    | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                                         & (IData)(vlSelf->top__DOT__DivEn_id)) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->top__DOT__DivSel_id) 
                                                                           << 2U) 
                                                                          | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                                               & (IData)(vlSelf->top__DOT__trap_id)) 
                                                                              << 1U) 
                                                                             | ((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                                                & (IData)(vlSelf->top__DOT__fence_id)))))))))))))));
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                = __Vtemp301[0U];
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U] 
                = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                    >> 4U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                       >> 0x20U)) << 0x1cU));
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U] 
                = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                             >> 0x20U)) >> 4U) | ((IData)(
                                                          ((0U 
                                                            == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                            ? 0ULL
                                                            : 
                                                           vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                                           [vlSelf->top__DOT__rs1_idx_id])) 
                                                  << 0x1cU));
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U] 
                = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                              ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                             [vlSelf->top__DOT__rs1_idx_id])) 
                    >> 4U) | ((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs1_idx_id]) 
                                       >> 0x20U)) << 0x1cU));
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U] 
                = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                               ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                              [vlSelf->top__DOT__rs1_idx_id]) 
                             >> 0x20U)) >> 4U) | ((IData)(
                                                          ((0U 
                                                            == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                            ? 0ULL
                                                            : 
                                                           vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                                           [vlSelf->top__DOT__rs2_idx_id])) 
                                                  << 0x1cU));
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U] 
                = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                              ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                             [vlSelf->top__DOT__rs2_idx_id])) 
                    >> 4U) | ((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs2_idx_id]) 
                                       >> 0x20U)) << 0x1cU));
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                               ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                              [vlSelf->top__DOT__rs2_idx_id]) 
                             >> 0x20U)) >> 4U) | (((IData)(vlSelf->top__DOT__ex_flush)
                                                    ? 0U
                                                    : 
                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                                                  << 0x1cU));
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                = ((((IData)(vlSelf->top__DOT__ex_flush)
                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                    >> 4U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                        ? 0ULL : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                              << 0x1cU));
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                              ? 0ULL : (((QData)((IData)(
                                                         vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                    >> 4U) | ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                       >> 0x20U)) << 0x1cU));
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                              ? 0ULL : (((QData)((IData)(
                                                         vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                            >> 0x20U)) >> 4U);
        }
    } else {
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] = 0U;
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U] = 0U;
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U] = 0U;
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U] = 0U;
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U] = 0U;
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U] = 0U;
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] = 0U;
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] = 0U;
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] = 0U;
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1057__PROF__dff__l12(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1057__PROF__dff__l12\n"); );
    // Body
    if (vlSelf->rst_n) {
        if ((1U & (~ ((((IData)(vlSelf->top__DOT__ld_use_hazard) 
                        | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                       | (IData)(vlSelf->top__DOT__dataNotOk)) 
                      | (IData)(vlSelf->top__DOT__ex_not_ok))))) {
            vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                = ((IData)(vlSelf->top__DOT__id_flush)
                    ? 0U : ((1U & (IData)((vlSelf->top__DOT__pc_new 
                                           >> 2U)))
                             ? (IData)((vlSelf->top__DOT__sram_rdata 
                                        >> 0x20U)) : (IData)(vlSelf->top__DOT__sram_rdata)));
            vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U] 
                = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                            ? 0ULL : vlSelf->top__DOT__pc_new));
            vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U] 
                = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                             ? 0ULL : vlSelf->top__DOT__pc_new) 
                           >> 0x20U));
        }
    } else {
        vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] = 0U;
        vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U] = 0U;
        vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U] = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1087__PROF__IF_stage__l67(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1087__PROF__IF_stage__l67\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__if_stall_n) {
            vlSelf->top__DOT__pc_new = vlSelf->top__DOT__IF_u__DOT__pc_next_o;
        }
    } else {
        vlSelf->top__DOT__pc_new = 0x7ffffffcULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1166__PROF__regfile__l33(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1166__PROF__regfile__l33\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0) {
        vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[vlSelf->__Vdlyvdim0__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0] 
            = vlSelf->__Vdlyvval__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0;
    }
}

void Vtop___024root___sequent__TOP__428__PROF__divTop__l85(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__429__PROF__clint__l279(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__430__PROF__clint__l260(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__434__PROF__Icache__l286(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__436__PROF__axi_dcache__l161(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__440__PROF__Dcache__l357(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__444__PROF__Icache__l186(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__445__PROF__Icache__l185(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__457__PROF__Dcache__l258(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__458__PROF__Dcache__l257(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__463__PROF__CSR__l102(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__467__PROF__Dcache__l693(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__468__PROF__Dcache__l648(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__471__PROF__divTop__l61(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__472__PROF__clint__l250(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__473__PROF__clint__l269(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__474__PROF__clint__l228(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__475__PROF__Dcache__l568(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__476__PROF__CSR__l84(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__477__PROF__divTop__l80(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__478__PROF__clint__l269(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__479__PROF__clint__l250(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__480__PROF__Dcache__l433(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__481__PROF__Dcache__l433(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__482__PROF__Icache__l252(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__483__PROF__Icache__l277(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__484__PROF__Icache__l233(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__485__PROF__axi_dcache__l156(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__486__PROF__dff__l12(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__487__PROF__Icache__l159(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__488__PROF__Icache__l159(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__489__PROF__Dcache__l352(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__490__PROF__Dcache__l539(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__491__PROF__Dcache__l334(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__492__PROF__Dcache__l286(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__493__PROF__Icache__l183(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__494__PROF__Icache__l183(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__495__PROF__Dcache__l606(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__496__PROF__axi_dcache__l232(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__497__PROF__axi_icache__l94(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__498__PROF__divTop__l21(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__499__PROF__divTop__l44(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__500__PROF__divTop__l44(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__501__PROF__ALU__l80(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__502__PROF__ALU__l80(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__503__PROF__CSR__l27(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__504__PROF__Dcache__l452(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__505__PROF__Dcache__l612(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__506__PROF__Dcache__l255(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__507__PROF__Dcache__l255(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__508__PROF__forwarding__l20(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__509__PROF__forwarding__l20(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__510__PROF__forwarding__l20(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__511__PROF__CSR__l116(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__512__PROF__CSR__l97(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__513__PROF__CSR__l72(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__514__PROF__CSR__l144(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__515__PROF__Dcache__l555(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__516__PROF__Dcache__l688(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__517__PROF__Dcache__l643(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__518__PROF__divTop__l69(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__519__PROF__divTop__l69(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__520__PROF__divTop__l55(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__523__PROF__clint__l279(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__524__PROF__clint__l260(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__529__PROF__axi_dcache__l161(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__536__PROF__Icache__l186(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__537__PROF__Icache__l185(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__552__PROF__Dcache__l258(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__553__PROF__Dcache__l257(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__560__PROF__CSR__l102(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__564__PROF__Dcache__l693(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__572__PROF__divTop__l61(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__20__PROF__clint__l302(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__18__PROF__mul64__l96(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__575__PROF__axi_dcache__l203(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__576__PROF__Icache__l131(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__577__PROF__axi_icache__l65(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__578__PROF__CSR__l131(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__13__PROF__Dcache__l571(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__580__PROF__Dcache__l624(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__581__PROF__Dcache__l517(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__582__PROF__Dcache__l505(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__583__PROF__Dcache__l231(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__584__PROF__Dcache__l231(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__585__PROF__divTop__l95(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__19__PROF__divTop__l139(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__21__PROF__divTop__l113(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__598__PROF__divTop__l85(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__100__PROF__cla_4__l17(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__101__PROF__divTop__l123(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__102__PROF__divTop__l122(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__28__PROF__Icache__l194(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__29__PROF__Icache__l195(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__25__PROF__axi_crossbar__l284(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__606__PROF__dff__l12(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__133__PROF__cla_4__l12(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__134__PROF__cla_4__l13(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__135__PROF__cla_4__l14(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__136__PROF__cla_4__l23(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__137__PROF__cla_4__l23(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__138__PROF__cla_16__l64(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__139__PROF__cla_4__l23(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__140__PROF__cla_4__l23(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__141__PROF__cla_4__l23(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__142__PROF__cla_16__l64(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__143__PROF__cla_4__l23(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__144__PROF__cla_4__l23(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__145__PROF__cla_4__l23(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__146__PROF__cla_4__l23(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__147__PROF__cla_4__l23(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__148__PROF__cla_4__l23(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__99__PROF__CSR__l159(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__176__PROF__cla_4__l18(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__177__PROF__cla_4__l19(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__178__PROF__cla_4__l20(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__179__PROF__cla_16__l65(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__180__PROF__cla_4__l17(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__181__PROF__cla_4__l12(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__182__PROF__cla_4__l13(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__183__PROF__cla_4__l14(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__184__PROF__cla_16__l61(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__185__PROF__cla_16__l62(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__186__PROF__cla_16__l65(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__43__PROF__lsu__l67(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__44__PROF__lsu__l68(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__45__PROF__lsu__l69(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__46__PROF__lsu__l70(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__47__PROF__lsu__l71(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__49__PROF__CSR__l36(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__50__PROF__CSR__l37(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__51__PROF__CSR__l38(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__202__PROF__cla_4__l18(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__203__PROF__cla_4__l19(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__204__PROF__cla_4__l20(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__205__PROF__cla_4__l17(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__206__PROF__cla_4__l12(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__207__PROF__cla_4__l13(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__208__PROF__cla_4__l14(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__209__PROF__cla_4__l17(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__210__PROF__cla_4__l12(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__211__PROF__cla_4__l13(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__212__PROF__cla_4__l14(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__213__PROF__cla_4__l17(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__214__PROF__cla_4__l12(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__215__PROF__cla_4__l13(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__216__PROF__cla_4__l14(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__217__PROF__cla_16__l60(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__218__PROF__cla_16__l61(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__219__PROF__cla_16__l62(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__220__PROF__cla_64__l61(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__221__PROF__cla_64__l62(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__118__PROF__CSR__l43(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__229__PROF__cla_4__l18(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__230__PROF__cla_4__l19(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__231__PROF__cla_4__l20(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__232__PROF__cla_4__l18(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__233__PROF__cla_4__l19(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__234__PROF__cla_4__l20(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__235__PROF__cla_4__l18(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__236__PROF__cla_4__l19(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__237__PROF__cla_4__l20(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__238__PROF__cla_4__l17(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__239__PROF__cla_4__l12(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__240__PROF__cla_4__l13(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__241__PROF__cla_4__l14(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__242__PROF__cla_4__l17(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__243__PROF__cla_4__l12(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__244__PROF__cla_4__l13(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__245__PROF__cla_4__l14(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__246__PROF__cla_4__l17(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__247__PROF__cla_4__l12(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__248__PROF__cla_4__l13(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__249__PROF__cla_4__l14(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__250__PROF__cla_4__l17(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__251__PROF__cla_4__l12(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__252__PROF__cla_4__l13(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__253__PROF__cla_4__l14(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__254__PROF__cla_16__l60(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__255__PROF__cla_16__l61(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__256__PROF__cla_16__l62(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__257__PROF__cla_4__l17(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__258__PROF__cla_4__l12(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__259__PROF__cla_4__l13(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__260__PROF__cla_4__l14(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__261__PROF__cla_16__l60(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__262__PROF__cla_16__l61(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__263__PROF__cla_16__l62(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__158__PROF__CSR__l47(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__159__PROF__CSR__l48(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__160__PROF__CSR__l49(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__161__PROF__CSR__l50(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__270__PROF__cla_16__l20(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__271__PROF__cla_4__l18(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__272__PROF__cla_4__l19(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__273__PROF__cla_4__l20(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__274__PROF__cla_4__l18(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__275__PROF__cla_4__l19(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__276__PROF__cla_4__l20(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__277__PROF__cla_4__l18(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__278__PROF__cla_4__l19(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__279__PROF__cla_4__l20(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__280__PROF__cla_4__l18(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__281__PROF__cla_4__l19(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__282__PROF__cla_4__l20(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__283__PROF__cla_4__l17(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__284__PROF__cla_4__l12(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__285__PROF__cla_4__l13(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__286__PROF__cla_4__l14(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__287__PROF__cla_4__l17(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__288__PROF__cla_4__l12(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__289__PROF__cla_4__l13(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__290__PROF__cla_4__l14(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__291__PROF__cla_4__l17(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__292__PROF__cla_4__l12(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__293__PROF__cla_4__l13(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__294__PROF__cla_4__l14(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__295__PROF__cla_4__l18(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__296__PROF__cla_4__l19(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__297__PROF__cla_4__l20(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__298__PROF__cla_4__l17(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__299__PROF__cla_4__l12(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__300__PROF__cla_4__l13(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__301__PROF__cla_4__l14(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__302__PROF__cla_4__l17(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__303__PROF__cla_4__l12(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__304__PROF__cla_4__l13(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__305__PROF__cla_4__l14(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__306__PROF__cla_4__l17(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__307__PROF__cla_4__l12(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__308__PROF__cla_4__l13(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__309__PROF__cla_4__l14(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__194__PROF__CSR__l54(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__315__PROF__cla_16__l20(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__316__PROF__cla_4__l18(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__317__PROF__cla_4__l19(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__318__PROF__cla_4__l20(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__319__PROF__cla_4__l18(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__320__PROF__cla_4__l19(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__321__PROF__cla_4__l20(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__322__PROF__cla_4__l18(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__323__PROF__cla_4__l19(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__324__PROF__cla_4__l20(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__325__PROF__cla_4__l18(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__326__PROF__cla_4__l19(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__327__PROF__cla_4__l20(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__328__PROF__cla_4__l18(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__329__PROF__cla_4__l19(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__330__PROF__cla_4__l20(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__331__PROF__cla_4__l18(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__332__PROF__cla_4__l19(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__333__PROF__cla_4__l20(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__343__PROF__cla_16__l20(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__344__PROF__cla_16__l20(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__349__PROF__cla_64__l20(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__821__PROF__axi_slave_ram__l150(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__822__PROF__clint__l75(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__823__PROF__axi_slave_ram__l149(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__824__PROF__clint__l74(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__826__PROF__axi_slave_ram__l292(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__827__PROF__axi_slave_ram__l203(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__828__PROF__clint__l165(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__832__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__833__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__834__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__835__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__838__PROF__clint__l192(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__839__PROF__Dcache__l374(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__844__PROF__axi_slave_ram__l357(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__845__PROF__clint__l215(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__850__PROF__regfile__l33(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__851__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__852__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__853__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__854__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__856__PROF__axi_slave_ram__l385(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__857__PROF__regfile__l40(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__858__PROF__axi_slave_ram__l280(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__859__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__860__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__861__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__862__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__863__PROF__axi_slave_ram__l134(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__864__PROF__clint__l60(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__865__PROF__clint__l153(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__17__PROF__Icache__l205(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__16__PROF__Icache__l204(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__15__PROF__axi_dcache__l296(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__27__PROF__Dcache__l299(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__26__PROF__Dcache__l298(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__32__PROF__axi_crossbar__l316(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__33__PROF__axi_crossbar__l318(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__34__PROF__axi_crossbar__l322(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__35__PROF__axi_crossbar__l324(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__38__PROF__axi_crossbar__l321(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__97__PROF__axi_crossbar__l330(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__98__PROF__axi_crossbar__l409(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__24__PROF__axi_crossbar__l296(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__14__PROF__axi_dcache__l295(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__30__PROF__axi_crossbar__l285(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__48__PROF__lsu__l216(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__95__PROF__axi_crossbar__l329(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__96__PROF__axi_crossbar__l408(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__103__PROF__axi_crossbar__l340(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__104__PROF__axi_crossbar__l346(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__105__PROF__axi_crossbar__l348(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__106__PROF__axi_crossbar__l339(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__107__PROF__axi_crossbar__l342(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__108__PROF__axi_crossbar__l351(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__109__PROF__axi_crossbar__l377(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__110__PROF__axi_crossbar__l398(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__111__PROF__axi_crossbar__l350(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__22__PROF__top__l297(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__23__PROF__top__l299(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__31__PROF__WB_stage__l15(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__40__PROF__L_S_stage__l113(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__57__PROF__axi_crossbar__l315(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__59__PROF__axi_crossbar__l328(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__60__PROF__axi_crossbar__l333(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__61__PROF__axi_crossbar__l359(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__62__PROF__axi_crossbar__l371(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__63__PROF__axi_crossbar__l376(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__64__PROF__axi_crossbar__l406(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__65__PROF__axi_crossbar__l413(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__69__PROF__axi_dcache__l171(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__70__PROF__axi_crossbar__l410(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__223__PROF__CSR__l65(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__52__PROF__top__l922(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__121__PROF__axi_crossbar__l331(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__122__PROF__clint__l128(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__41__PROF__Icache__l265(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__36__PROF__Dcache__l471(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__37__PROF__Dcache__l472(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__39__PROF__Dcache__l477(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__53__PROF__Dcache__l269(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__54__PROF__Dcache__l268(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__117__PROF__Dcache__l479(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__164__PROF__clint__l130(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__165__PROF__clint__l130(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__120__PROF__Dcache__l270(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__154__PROF__Dcache__l482(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__155__PROF__Dcache__l484(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__156__PROF__Dcache__l486(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__157__PROF__Dcache__l488(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__56__PROF__top__l943(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__58__PROF__axi_crossbar__l320(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__66__PROF__top__l944(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__162__PROF__Dcache__l404(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__163__PROF__Dcache__l404(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__68__PROF__Dcache__l347(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__119__PROF__Dcache__l74(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__73__PROF__Dcache__l657(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__67__PROF__mulTop__l59(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__71__PROF__top__l921(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__72__PROF__ALU__l223(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__74__PROF__forwarding__l52(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__75__PROF__forwarding__l41(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__123__PROF__Dcache__l651(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__124__PROF__Dcache__l572(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__125__PROF__EX_stage__l61(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__126__PROF__EX_stage__l44(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__76__PROF__top__l298(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__77__PROF__decoder__l32(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__78__PROF__decoder__l32(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__79__PROF__decoder__l32(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__80__PROF__decoder__l32(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__81__PROF__decoder__l32(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__82__PROF__decoder__l32(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__83__PROF__decoder__l32(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__84__PROF__decoder__l32(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__85__PROF__decoder__l32(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__86__PROF__decoder__l32(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__87__PROF__decoder__l32(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__88__PROF__decoder__l32(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__89__PROF__decoder__l32(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__90__PROF__decoder__l32(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__91__PROF__hazard_detect__l13(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__92__PROF__decoder__l32(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__93__PROF__decoder__l32(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__167__PROF__EX_stage__l80(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__168__PROF__bcu__l28(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__169__PROF__bcu__l28(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__170__PROF__EX_stage__l79(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__127__PROF__imm_ext__l13(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__195__PROF__mul64__l59(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__196__PROF__ALU__l34(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__197__PROF__ALU__l248(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__198__PROF__bcu__l29(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__199__PROF__mul64__l57(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__200__PROF__ALU__l79(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__201__PROF__ALU__l249(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__94__PROF__Icache__l56(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__224__PROF__ALU__l186(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__225__PROF__bcu__l59(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__226__PROF__ALU__l91(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__227__PROF__ALU__l112(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__228__PROF__ALU__l250(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__128__PROF__axi_crossbar__l344(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__129__PROF__axi_crossbar__l290(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__130__PROF__Icache__l333(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__131__PROF__Icache__l333(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__132__PROF__Icache__l196(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__264__PROF__pipline_ctrl__l36(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__265__PROF__pipline_ctrl__l35(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__266__PROF__IF_stage__l51(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__269__PROF__ALU__l261(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__171__PROF__axi_crossbar__l345(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__172__PROF__Icache__l366(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__173__PROF__Icache__l386(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__174__PROF__Icache__l229(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__175__PROF__IF_stage__l32(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__310__PROF__mul64__l67(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__311__PROF__Icache__l67(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__314__PROF__ALU__l269(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__334__PROF__mul64__l69(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__342__PROF__ALU__l279(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__348__PROF__ALU__l142(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__351__PROF__ALU__l171(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__352__PROF__top__l920(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__42__PROF__axi_crossbar__l327(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__112__PROF__axi_crossbar__l352(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__113__PROF__axi_crossbar__l338(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__115__PROF__axi_crossbar__l355(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__114__PROF__axi_crossbar__l354(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__116__PROF__axi_crossbar__l356(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__267__PROF__mulTop__l37(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__166__PROF__axi_dcache__l104(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__149__PROF__axi_icache__l105(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__150__PROF__axi_dcache__l243(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__151__PROF__axi_crossbar__l307(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__152__PROF__axi_crossbar__l306(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__153__PROF__axi_crossbar__l308(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__187__PROF__axi_icache__l73(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__335__PROF__Icache__l69(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__188__PROF__Dcache__l377(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__189__PROF__Dcache__l377(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__190__PROF__Dcache__l377(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__191__PROF__Dcache__l377(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__192__PROF__axi_dcache__l211(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__193__PROF__Dcache__l598(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__222__PROF__Dcache__l283(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__268__PROF__EX_stage__l116(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__312__PROF__pipline_ctrl__l29(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__313__PROF__pipline_ctrl__l32(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__336__PROF__Icache__l369(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__337__PROF__Icache__l389(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__338__PROF__top__l300(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__339__PROF__L_S_stage__l115(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__340__PROF__Dcache__l101(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__341__PROF__Dcache__l325(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__353__PROF__Dcache__l722(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__354__PROF__Dcache__l742(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__345__PROF__lsu__l88(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__346__PROF__lsu__l117(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__347__PROF__lsu__l133(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__350__PROF__WB_reg__l27(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__55__PROF__regfile__l29(Vtop___024root* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vtop___024root___sequent__TOP__428__PROF__divTop__l85(vlSelf);
        Vtop___024root___sequent__TOP__429__PROF__clint__l279(vlSelf);
        Vtop___024root___sequent__TOP__430__PROF__clint__l260(vlSelf);
        Vtop___024root___sequent__TOP__434__PROF__Icache__l286(vlSelf);
        Vtop___024root___sequent__TOP__436__PROF__axi_dcache__l161(vlSelf);
        Vtop___024root___sequent__TOP__440__PROF__Dcache__l357(vlSelf);
        Vtop___024root___sequent__TOP__444__PROF__Icache__l186(vlSelf);
        Vtop___024root___sequent__TOP__445__PROF__Icache__l185(vlSelf);
        Vtop___024root___sequent__TOP__457__PROF__Dcache__l258(vlSelf);
        Vtop___024root___sequent__TOP__458__PROF__Dcache__l257(vlSelf);
        Vtop___024root___sequent__TOP__463__PROF__CSR__l102(vlSelf);
        Vtop___024root___sequent__TOP__467__PROF__Dcache__l693(vlSelf);
        Vtop___024root___sequent__TOP__468__PROF__Dcache__l648(vlSelf);
        Vtop___024root___sequent__TOP__471__PROF__divTop__l61(vlSelf);
        Vtop___024root___sequent__TOP__472__PROF__clint__l250(vlSelf);
        Vtop___024root___sequent__TOP__473__PROF__clint__l269(vlSelf);
        Vtop___024root___sequent__TOP__474__PROF__clint__l228(vlSelf);
        Vtop___024root___sequent__TOP__475__PROF__Dcache__l568(vlSelf);
        Vtop___024root___sequent__TOP__476__PROF__CSR__l84(vlSelf);
        Vtop___024root___sequent__TOP__477__PROF__divTop__l80(vlSelf);
        Vtop___024root___sequent__TOP__478__PROF__clint__l269(vlSelf);
        Vtop___024root___sequent__TOP__479__PROF__clint__l250(vlSelf);
        Vtop___024root___sequent__TOP__480__PROF__Dcache__l433(vlSelf);
        Vtop___024root___sequent__TOP__481__PROF__Dcache__l433(vlSelf);
        Vtop___024root___sequent__TOP__482__PROF__Icache__l252(vlSelf);
        Vtop___024root___sequent__TOP__483__PROF__Icache__l277(vlSelf);
        Vtop___024root___sequent__TOP__484__PROF__Icache__l233(vlSelf);
        Vtop___024root___sequent__TOP__485__PROF__axi_dcache__l156(vlSelf);
        Vtop___024root___sequent__TOP__486__PROF__dff__l12(vlSelf);
        Vtop___024root___sequent__TOP__487__PROF__Icache__l159(vlSelf);
        Vtop___024root___sequent__TOP__488__PROF__Icache__l159(vlSelf);
        Vtop___024root___sequent__TOP__489__PROF__Dcache__l352(vlSelf);
        Vtop___024root___sequent__TOP__490__PROF__Dcache__l539(vlSelf);
        Vtop___024root___sequent__TOP__491__PROF__Dcache__l334(vlSelf);
        Vtop___024root___sequent__TOP__492__PROF__Dcache__l286(vlSelf);
        Vtop___024root___sequent__TOP__493__PROF__Icache__l183(vlSelf);
        Vtop___024root___sequent__TOP__494__PROF__Icache__l183(vlSelf);
        Vtop___024root___sequent__TOP__495__PROF__Dcache__l606(vlSelf);
        Vtop___024root___sequent__TOP__496__PROF__axi_dcache__l232(vlSelf);
        Vtop___024root___sequent__TOP__497__PROF__axi_icache__l94(vlSelf);
        Vtop___024root___sequent__TOP__498__PROF__divTop__l21(vlSelf);
        Vtop___024root___sequent__TOP__499__PROF__divTop__l44(vlSelf);
        Vtop___024root___sequent__TOP__500__PROF__divTop__l44(vlSelf);
        Vtop___024root___sequent__TOP__501__PROF__ALU__l80(vlSelf);
        Vtop___024root___sequent__TOP__502__PROF__ALU__l80(vlSelf);
        Vtop___024root___sequent__TOP__503__PROF__CSR__l27(vlSelf);
        Vtop___024root___sequent__TOP__504__PROF__Dcache__l452(vlSelf);
        Vtop___024root___sequent__TOP__505__PROF__Dcache__l612(vlSelf);
        Vtop___024root___sequent__TOP__506__PROF__Dcache__l255(vlSelf);
        Vtop___024root___sequent__TOP__507__PROF__Dcache__l255(vlSelf);
        Vtop___024root___sequent__TOP__508__PROF__forwarding__l20(vlSelf);
        Vtop___024root___sequent__TOP__509__PROF__forwarding__l20(vlSelf);
        Vtop___024root___sequent__TOP__510__PROF__forwarding__l20(vlSelf);
        Vtop___024root___sequent__TOP__511__PROF__CSR__l116(vlSelf);
        Vtop___024root___sequent__TOP__512__PROF__CSR__l97(vlSelf);
        Vtop___024root___sequent__TOP__513__PROF__CSR__l72(vlSelf);
        Vtop___024root___sequent__TOP__514__PROF__CSR__l144(vlSelf);
        Vtop___024root___sequent__TOP__515__PROF__Dcache__l555(vlSelf);
        Vtop___024root___sequent__TOP__516__PROF__Dcache__l688(vlSelf);
        Vtop___024root___sequent__TOP__517__PROF__Dcache__l643(vlSelf);
        Vtop___024root___sequent__TOP__518__PROF__divTop__l69(vlSelf);
        Vtop___024root___sequent__TOP__519__PROF__divTop__l69(vlSelf);
        Vtop___024root___sequent__TOP__520__PROF__divTop__l55(vlSelf);
        Vtop___024root___sequent__TOP__523__PROF__clint__l279(vlSelf);
        Vtop___024root___sequent__TOP__524__PROF__clint__l260(vlSelf);
        Vtop___024root___sequent__TOP__529__PROF__axi_dcache__l161(vlSelf);
        Vtop___024root___sequent__TOP__536__PROF__Icache__l186(vlSelf);
        Vtop___024root___sequent__TOP__537__PROF__Icache__l185(vlSelf);
        Vtop___024root___sequent__TOP__552__PROF__Dcache__l258(vlSelf);
        Vtop___024root___sequent__TOP__553__PROF__Dcache__l257(vlSelf);
        Vtop___024root___sequent__TOP__560__PROF__CSR__l102(vlSelf);
        Vtop___024root___sequent__TOP__564__PROF__Dcache__l693(vlSelf);
        Vtop___024root___sequent__TOP__572__PROF__divTop__l61(vlSelf);
        Vtop___024root___settle__TOP__20__PROF__clint__l302(vlSelf);
        Vtop___024root___settle__TOP__18__PROF__mul64__l96(vlSelf);
        Vtop___024root___sequent__TOP__575__PROF__axi_dcache__l203(vlSelf);
        Vtop___024root___sequent__TOP__576__PROF__Icache__l131(vlSelf);
        Vtop___024root___sequent__TOP__577__PROF__axi_icache__l65(vlSelf);
        Vtop___024root___sequent__TOP__578__PROF__CSR__l131(vlSelf);
        Vtop___024root___settle__TOP__13__PROF__Dcache__l571(vlSelf);
        Vtop___024root___sequent__TOP__580__PROF__Dcache__l624(vlSelf);
        Vtop___024root___sequent__TOP__581__PROF__Dcache__l517(vlSelf);
        Vtop___024root___sequent__TOP__582__PROF__Dcache__l505(vlSelf);
        Vtop___024root___sequent__TOP__583__PROF__Dcache__l231(vlSelf);
        Vtop___024root___sequent__TOP__584__PROF__Dcache__l231(vlSelf);
        Vtop___024root___sequent__TOP__585__PROF__divTop__l95(vlSelf);
        Vtop___024root___settle__TOP__19__PROF__divTop__l139(vlSelf);
        Vtop___024root___settle__TOP__21__PROF__divTop__l113(vlSelf);
        Vtop___024root___sequent__TOP__598__PROF__divTop__l85(vlSelf);
        Vtop___024root___settle__TOP__100__PROF__cla_4__l17(vlSelf);
        Vtop___024root___settle__TOP__101__PROF__divTop__l123(vlSelf);
        Vtop___024root___settle__TOP__102__PROF__divTop__l122(vlSelf);
        Vtop___024root___settle__TOP__28__PROF__Icache__l194(vlSelf);
        Vtop___024root___settle__TOP__29__PROF__Icache__l195(vlSelf);
        Vtop___024root___settle__TOP__25__PROF__axi_crossbar__l284(vlSelf);
        Vtop___024root___sequent__TOP__606__PROF__dff__l12(vlSelf);
        Vtop___024root___settle__TOP__133__PROF__cla_4__l12(vlSelf);
        Vtop___024root___settle__TOP__134__PROF__cla_4__l13(vlSelf);
        Vtop___024root___settle__TOP__135__PROF__cla_4__l14(vlSelf);
        Vtop___024root___settle__TOP__136__PROF__cla_4__l23(vlSelf);
        Vtop___024root___settle__TOP__137__PROF__cla_4__l23(vlSelf);
        Vtop___024root___settle__TOP__138__PROF__cla_16__l64(vlSelf);
        Vtop___024root___settle__TOP__139__PROF__cla_4__l23(vlSelf);
        Vtop___024root___settle__TOP__140__PROF__cla_4__l23(vlSelf);
        Vtop___024root___settle__TOP__141__PROF__cla_4__l23(vlSelf);
        Vtop___024root___settle__TOP__142__PROF__cla_16__l64(vlSelf);
        Vtop___024root___settle__TOP__143__PROF__cla_4__l23(vlSelf);
        Vtop___024root___settle__TOP__144__PROF__cla_4__l23(vlSelf);
        Vtop___024root___settle__TOP__145__PROF__cla_4__l23(vlSelf);
        Vtop___024root___settle__TOP__146__PROF__cla_4__l23(vlSelf);
        Vtop___024root___settle__TOP__147__PROF__cla_4__l23(vlSelf);
        Vtop___024root___settle__TOP__148__PROF__cla_4__l23(vlSelf);
        Vtop___024root___settle__TOP__99__PROF__CSR__l159(vlSelf);
        Vtop___024root___settle__TOP__176__PROF__cla_4__l18(vlSelf);
        Vtop___024root___settle__TOP__177__PROF__cla_4__l19(vlSelf);
        Vtop___024root___settle__TOP__178__PROF__cla_4__l20(vlSelf);
        Vtop___024root___settle__TOP__179__PROF__cla_16__l65(vlSelf);
        Vtop___024root___settle__TOP__180__PROF__cla_4__l17(vlSelf);
        Vtop___024root___settle__TOP__181__PROF__cla_4__l12(vlSelf);
        Vtop___024root___settle__TOP__182__PROF__cla_4__l13(vlSelf);
        Vtop___024root___settle__TOP__183__PROF__cla_4__l14(vlSelf);
        Vtop___024root___settle__TOP__184__PROF__cla_16__l61(vlSelf);
        Vtop___024root___settle__TOP__185__PROF__cla_16__l62(vlSelf);
        Vtop___024root___settle__TOP__186__PROF__cla_16__l65(vlSelf);
        Vtop___024root___settle__TOP__43__PROF__lsu__l67(vlSelf);
        Vtop___024root___settle__TOP__44__PROF__lsu__l68(vlSelf);
        Vtop___024root___settle__TOP__45__PROF__lsu__l69(vlSelf);
        Vtop___024root___settle__TOP__46__PROF__lsu__l70(vlSelf);
        Vtop___024root___settle__TOP__47__PROF__lsu__l71(vlSelf);
        Vtop___024root___settle__TOP__49__PROF__CSR__l36(vlSelf);
        Vtop___024root___settle__TOP__50__PROF__CSR__l37(vlSelf);
        Vtop___024root___settle__TOP__51__PROF__CSR__l38(vlSelf);
        Vtop___024root___settle__TOP__202__PROF__cla_4__l18(vlSelf);
        Vtop___024root___settle__TOP__203__PROF__cla_4__l19(vlSelf);
        Vtop___024root___settle__TOP__204__PROF__cla_4__l20(vlSelf);
        Vtop___024root___settle__TOP__205__PROF__cla_4__l17(vlSelf);
        Vtop___024root___settle__TOP__206__PROF__cla_4__l12(vlSelf);
        Vtop___024root___settle__TOP__207__PROF__cla_4__l13(vlSelf);
        Vtop___024root___settle__TOP__208__PROF__cla_4__l14(vlSelf);
        Vtop___024root___settle__TOP__209__PROF__cla_4__l17(vlSelf);
        Vtop___024root___settle__TOP__210__PROF__cla_4__l12(vlSelf);
        Vtop___024root___settle__TOP__211__PROF__cla_4__l13(vlSelf);
        Vtop___024root___settle__TOP__212__PROF__cla_4__l14(vlSelf);
        Vtop___024root___settle__TOP__213__PROF__cla_4__l17(vlSelf);
        Vtop___024root___settle__TOP__214__PROF__cla_4__l12(vlSelf);
        Vtop___024root___settle__TOP__215__PROF__cla_4__l13(vlSelf);
        Vtop___024root___settle__TOP__216__PROF__cla_4__l14(vlSelf);
        Vtop___024root___settle__TOP__217__PROF__cla_16__l60(vlSelf);
        Vtop___024root___settle__TOP__218__PROF__cla_16__l61(vlSelf);
        Vtop___024root___settle__TOP__219__PROF__cla_16__l62(vlSelf);
        Vtop___024root___settle__TOP__220__PROF__cla_64__l61(vlSelf);
        Vtop___024root___settle__TOP__221__PROF__cla_64__l62(vlSelf);
        Vtop___024root___settle__TOP__118__PROF__CSR__l43(vlSelf);
        Vtop___024root___settle__TOP__229__PROF__cla_4__l18(vlSelf);
        Vtop___024root___settle__TOP__230__PROF__cla_4__l19(vlSelf);
        Vtop___024root___settle__TOP__231__PROF__cla_4__l20(vlSelf);
        Vtop___024root___settle__TOP__232__PROF__cla_4__l18(vlSelf);
        Vtop___024root___settle__TOP__233__PROF__cla_4__l19(vlSelf);
        Vtop___024root___settle__TOP__234__PROF__cla_4__l20(vlSelf);
        Vtop___024root___settle__TOP__235__PROF__cla_4__l18(vlSelf);
        Vtop___024root___settle__TOP__236__PROF__cla_4__l19(vlSelf);
        Vtop___024root___settle__TOP__237__PROF__cla_4__l20(vlSelf);
        Vtop___024root___settle__TOP__238__PROF__cla_4__l17(vlSelf);
        Vtop___024root___settle__TOP__239__PROF__cla_4__l12(vlSelf);
        Vtop___024root___settle__TOP__240__PROF__cla_4__l13(vlSelf);
        Vtop___024root___settle__TOP__241__PROF__cla_4__l14(vlSelf);
        Vtop___024root___settle__TOP__242__PROF__cla_4__l17(vlSelf);
        Vtop___024root___settle__TOP__243__PROF__cla_4__l12(vlSelf);
        Vtop___024root___settle__TOP__244__PROF__cla_4__l13(vlSelf);
        Vtop___024root___settle__TOP__245__PROF__cla_4__l14(vlSelf);
        Vtop___024root___settle__TOP__246__PROF__cla_4__l17(vlSelf);
        Vtop___024root___settle__TOP__247__PROF__cla_4__l12(vlSelf);
        Vtop___024root___settle__TOP__248__PROF__cla_4__l13(vlSelf);
        Vtop___024root___settle__TOP__249__PROF__cla_4__l14(vlSelf);
        Vtop___024root___settle__TOP__250__PROF__cla_4__l17(vlSelf);
        Vtop___024root___settle__TOP__251__PROF__cla_4__l12(vlSelf);
        Vtop___024root___settle__TOP__252__PROF__cla_4__l13(vlSelf);
        Vtop___024root___settle__TOP__253__PROF__cla_4__l14(vlSelf);
        Vtop___024root___settle__TOP__254__PROF__cla_16__l60(vlSelf);
        Vtop___024root___settle__TOP__255__PROF__cla_16__l61(vlSelf);
        Vtop___024root___settle__TOP__256__PROF__cla_16__l62(vlSelf);
        Vtop___024root___settle__TOP__257__PROF__cla_4__l17(vlSelf);
        Vtop___024root___settle__TOP__258__PROF__cla_4__l12(vlSelf);
        Vtop___024root___settle__TOP__259__PROF__cla_4__l13(vlSelf);
        Vtop___024root___settle__TOP__260__PROF__cla_4__l14(vlSelf);
        Vtop___024root___settle__TOP__261__PROF__cla_16__l60(vlSelf);
        Vtop___024root___settle__TOP__262__PROF__cla_16__l61(vlSelf);
        Vtop___024root___settle__TOP__263__PROF__cla_16__l62(vlSelf);
        Vtop___024root___settle__TOP__158__PROF__CSR__l47(vlSelf);
        Vtop___024root___settle__TOP__159__PROF__CSR__l48(vlSelf);
        Vtop___024root___settle__TOP__160__PROF__CSR__l49(vlSelf);
        Vtop___024root___settle__TOP__161__PROF__CSR__l50(vlSelf);
        Vtop___024root___settle__TOP__270__PROF__cla_16__l20(vlSelf);
        Vtop___024root___settle__TOP__271__PROF__cla_4__l18(vlSelf);
        Vtop___024root___settle__TOP__272__PROF__cla_4__l19(vlSelf);
        Vtop___024root___settle__TOP__273__PROF__cla_4__l20(vlSelf);
        Vtop___024root___settle__TOP__274__PROF__cla_4__l18(vlSelf);
        Vtop___024root___settle__TOP__275__PROF__cla_4__l19(vlSelf);
        Vtop___024root___settle__TOP__276__PROF__cla_4__l20(vlSelf);
        Vtop___024root___settle__TOP__277__PROF__cla_4__l18(vlSelf);
        Vtop___024root___settle__TOP__278__PROF__cla_4__l19(vlSelf);
        Vtop___024root___settle__TOP__279__PROF__cla_4__l20(vlSelf);
        Vtop___024root___settle__TOP__280__PROF__cla_4__l18(vlSelf);
        Vtop___024root___settle__TOP__281__PROF__cla_4__l19(vlSelf);
        Vtop___024root___settle__TOP__282__PROF__cla_4__l20(vlSelf);
        Vtop___024root___settle__TOP__283__PROF__cla_4__l17(vlSelf);
        Vtop___024root___settle__TOP__284__PROF__cla_4__l12(vlSelf);
        Vtop___024root___settle__TOP__285__PROF__cla_4__l13(vlSelf);
        Vtop___024root___settle__TOP__286__PROF__cla_4__l14(vlSelf);
        Vtop___024root___settle__TOP__287__PROF__cla_4__l17(vlSelf);
        Vtop___024root___settle__TOP__288__PROF__cla_4__l12(vlSelf);
        Vtop___024root___settle__TOP__289__PROF__cla_4__l13(vlSelf);
        Vtop___024root___settle__TOP__290__PROF__cla_4__l14(vlSelf);
        Vtop___024root___settle__TOP__291__PROF__cla_4__l17(vlSelf);
        Vtop___024root___settle__TOP__292__PROF__cla_4__l12(vlSelf);
        Vtop___024root___settle__TOP__293__PROF__cla_4__l13(vlSelf);
        Vtop___024root___settle__TOP__294__PROF__cla_4__l14(vlSelf);
        Vtop___024root___settle__TOP__295__PROF__cla_4__l18(vlSelf);
        Vtop___024root___settle__TOP__296__PROF__cla_4__l19(vlSelf);
        Vtop___024root___settle__TOP__297__PROF__cla_4__l20(vlSelf);
        Vtop___024root___settle__TOP__298__PROF__cla_4__l17(vlSelf);
        Vtop___024root___settle__TOP__299__PROF__cla_4__l12(vlSelf);
        Vtop___024root___settle__TOP__300__PROF__cla_4__l13(vlSelf);
        Vtop___024root___settle__TOP__301__PROF__cla_4__l14(vlSelf);
        Vtop___024root___settle__TOP__302__PROF__cla_4__l17(vlSelf);
        Vtop___024root___settle__TOP__303__PROF__cla_4__l12(vlSelf);
        Vtop___024root___settle__TOP__304__PROF__cla_4__l13(vlSelf);
        Vtop___024root___settle__TOP__305__PROF__cla_4__l14(vlSelf);
        Vtop___024root___settle__TOP__306__PROF__cla_4__l17(vlSelf);
        Vtop___024root___settle__TOP__307__PROF__cla_4__l12(vlSelf);
        Vtop___024root___settle__TOP__308__PROF__cla_4__l13(vlSelf);
        Vtop___024root___settle__TOP__309__PROF__cla_4__l14(vlSelf);
        Vtop___024root___settle__TOP__194__PROF__CSR__l54(vlSelf);
        Vtop___024root___settle__TOP__315__PROF__cla_16__l20(vlSelf);
        Vtop___024root___settle__TOP__316__PROF__cla_4__l18(vlSelf);
        Vtop___024root___settle__TOP__317__PROF__cla_4__l19(vlSelf);
        Vtop___024root___settle__TOP__318__PROF__cla_4__l20(vlSelf);
        Vtop___024root___settle__TOP__319__PROF__cla_4__l18(vlSelf);
        Vtop___024root___settle__TOP__320__PROF__cla_4__l19(vlSelf);
        Vtop___024root___settle__TOP__321__PROF__cla_4__l20(vlSelf);
        Vtop___024root___settle__TOP__322__PROF__cla_4__l18(vlSelf);
        Vtop___024root___settle__TOP__323__PROF__cla_4__l19(vlSelf);
        Vtop___024root___settle__TOP__324__PROF__cla_4__l20(vlSelf);
        Vtop___024root___settle__TOP__325__PROF__cla_4__l18(vlSelf);
        Vtop___024root___settle__TOP__326__PROF__cla_4__l19(vlSelf);
        Vtop___024root___settle__TOP__327__PROF__cla_4__l20(vlSelf);
        Vtop___024root___settle__TOP__328__PROF__cla_4__l18(vlSelf);
        Vtop___024root___settle__TOP__329__PROF__cla_4__l19(vlSelf);
        Vtop___024root___settle__TOP__330__PROF__cla_4__l20(vlSelf);
        Vtop___024root___settle__TOP__331__PROF__cla_4__l18(vlSelf);
        Vtop___024root___settle__TOP__332__PROF__cla_4__l19(vlSelf);
        Vtop___024root___settle__TOP__333__PROF__cla_4__l20(vlSelf);
        Vtop___024root___settle__TOP__343__PROF__cla_16__l20(vlSelf);
        Vtop___024root___settle__TOP__344__PROF__cla_16__l20(vlSelf);
        Vtop___024root___settle__TOP__349__PROF__cla_64__l20(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vtop___024root___sequent__TOP__821__PROF__axi_slave_ram__l150(vlSelf);
        Vtop___024root___sequent__TOP__822__PROF__clint__l75(vlSelf);
        Vtop___024root___sequent__TOP__823__PROF__axi_slave_ram__l149(vlSelf);
        Vtop___024root___sequent__TOP__824__PROF__clint__l74(vlSelf);
        Vtop___024root___sequent__TOP__826__PROF__axi_slave_ram__l292(vlSelf);
        Vtop___024root___sequent__TOP__827__PROF__axi_slave_ram__l203(vlSelf);
        Vtop___024root___sequent__TOP__828__PROF__clint__l165(vlSelf);
        Vtop___024root___sequent__TOP__832__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__833__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__834__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__835__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__838__PROF__clint__l192(vlSelf);
        Vtop___024root___sequent__TOP__839__PROF__Dcache__l374(vlSelf);
        Vtop___024root___sequent__TOP__844__PROF__axi_slave_ram__l357(vlSelf);
        Vtop___024root___sequent__TOP__845__PROF__clint__l215(vlSelf);
        Vtop___024root___sequent__TOP__850__PROF__regfile__l33(vlSelf);
        Vtop___024root___sequent__TOP__851__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__852__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__853__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__854__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__856__PROF__axi_slave_ram__l385(vlSelf);
        Vtop___024root___sequent__TOP__857__PROF__regfile__l40(vlSelf);
        Vtop___024root___sequent__TOP__858__PROF__axi_slave_ram__l280(vlSelf);
        Vtop___024root___sequent__TOP__859__PROF__S011HD1P_X32Y2D128_BW__l22(vlSelf);
        Vtop___024root___sequent__TOP__860__PROF__S011HD1P_X32Y2D128_BW__l22(vlSelf);
        Vtop___024root___sequent__TOP__861__PROF__S011HD1P_X32Y2D128_BW__l22(vlSelf);
        Vtop___024root___sequent__TOP__862__PROF__S011HD1P_X32Y2D128_BW__l22(vlSelf);
        Vtop___024root___sequent__TOP__863__PROF__axi_slave_ram__l134(vlSelf);
        Vtop___024root___sequent__TOP__864__PROF__clint__l60(vlSelf);
        Vtop___024root___sequent__TOP__865__PROF__clint__l153(vlSelf);
        Vtop___024root___sequent__TOP__866__PROF__axi_slave_ram__l280(vlSelf);
        Vtop___024root___sequent__TOP__867__PROF__axi_slave_ram__l189(vlSelf);
        Vtop___024root___sequent__TOP__868__PROF__clint__l153(vlSelf);
        Vtop___024root___sequent__TOP__869__PROF__clint__l105(vlSelf);
        Vtop___024root___sequent__TOP__870__PROF__Icache__l301(vlSelf);
        Vtop___024root___sequent__TOP__871__PROF__clint__l89(vlSelf);
        Vtop___024root___sequent__TOP__872__PROF__S011HD1P_X32Y2D128_BW__l22(vlSelf);
        Vtop___024root___sequent__TOP__873__PROF__S011HD1P_X32Y2D128_BW__l22(vlSelf);
        Vtop___024root___sequent__TOP__874__PROF__S011HD1P_X32Y2D128_BW__l22(vlSelf);
        Vtop___024root___sequent__TOP__875__PROF__S011HD1P_X32Y2D128_BW__l22(vlSelf);
        Vtop___024root___sequent__TOP__876__PROF__clint__l180(vlSelf);
        Vtop___024root___sequent__TOP__877__PROF__Dcache__l372(vlSelf);
        Vtop___024root___sequent__TOP__878__PROF__axi_dcache__l145(vlSelf);
        Vtop___024root___sequent__TOP__879__PROF__axi_dcache__l145(vlSelf);
        Vtop___024root___sequent__TOP__880__PROF__axi_slave_ram__l345(vlSelf);
        Vtop___024root___sequent__TOP__881__PROF__clint__l203(vlSelf);
        Vtop___024root___sequent__TOP__882__PROF__axi_slave_ram__l221(vlSelf);
        Vtop___024root___sequent__TOP__883__PROF__regfile__l31(vlSelf);
        Vtop___024root___sequent__TOP__884__PROF__axi_dcache__l145(vlSelf);
        Vtop___024root___sequent__TOP__892__PROF__axi_slave_ram__l292(vlSelf);
        Vtop___024root___sequent__TOP__893__PROF__clint__l165(vlSelf);
        Vtop___024root___sequent__TOP__896__PROF__clint__l75(vlSelf);
        Vtop___024root___sequent__TOP__898__PROF__clint__l74(vlSelf);
        Vtop___024root___sequent__TOP__899__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__900__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__901__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__902__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__907__PROF__axi_slave_ram__l357(vlSelf);
        Vtop___024root___sequent__TOP__909__PROF__clint__l215(vlSelf);
        Vtop___024root___sequent__TOP__910__PROF__clint__l192(vlSelf);
        Vtop___024root___sequent__TOP__915__PROF__axi_slave_ram__l203(vlSelf);
        Vtop___024root___sequent__TOP__919__PROF__Dcache__l374(vlSelf);
        Vtop___024root___sequent__TOP__924__PROF__axi_slave_ram__l314(vlSelf);
        Vtop___024root___settle__TOP__17__PROF__Icache__l205(vlSelf);
        Vtop___024root___settle__TOP__16__PROF__Icache__l204(vlSelf);
        Vtop___024root___settle__TOP__15__PROF__axi_dcache__l296(vlSelf);
        Vtop___024root___sequent__TOP__928__PROF__axi_slave_ram__l168(vlSelf);
        Vtop___024root___sequent__TOP__929__PROF__axi_dcache__l145(vlSelf);
        Vtop___024root___sequent__TOP__930__PROF__S011HD1P_X32Y2D128_BW__l22(vlSelf);
        Vtop___024root___sequent__TOP__931__PROF__S011HD1P_X32Y2D128_BW__l22(vlSelf);
        Vtop___024root___sequent__TOP__932__PROF__S011HD1P_X32Y2D128_BW__l22(vlSelf);
        Vtop___024root___sequent__TOP__933__PROF__S011HD1P_X32Y2D128_BW__l22(vlSelf);
        Vtop___024root___sequent__TOP__936__PROF__axi_slave_ram__l150(vlSelf);
        Vtop___024root___sequent__TOP__938__PROF__axi_slave_ram__l149(vlSelf);
        Vtop___024root___sequent__TOP__941__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__943__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__945__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__947__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__949__PROF__axi_dcache__l145(vlSelf);
        Vtop___024root___settle__TOP__27__PROF__Dcache__l299(vlSelf);
        Vtop___024root___settle__TOP__26__PROF__Dcache__l298(vlSelf);
        Vtop___024root___settle__TOP__32__PROF__axi_crossbar__l316(vlSelf);
        Vtop___024root___settle__TOP__33__PROF__axi_crossbar__l318(vlSelf);
        Vtop___024root___settle__TOP__34__PROF__axi_crossbar__l322(vlSelf);
        Vtop___024root___settle__TOP__35__PROF__axi_crossbar__l324(vlSelf);
        Vtop___024root___settle__TOP__38__PROF__axi_crossbar__l321(vlSelf);
        Vtop___024root___settle__TOP__97__PROF__axi_crossbar__l330(vlSelf);
        Vtop___024root___settle__TOP__98__PROF__axi_crossbar__l409(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n)))) {
        Vtop___024root___sequent__TOP__963__PROF__dff__l12(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vtop___024root___settle__TOP__24__PROF__axi_crossbar__l296(vlSelf);
        Vtop___024root___sequent__TOP__968__PROF__Dcache__l648(vlSelf);
        Vtop___024root___settle__TOP__14__PROF__axi_dcache__l295(vlSelf);
        Vtop___024root___settle__TOP__30__PROF__axi_crossbar__l285(vlSelf);
        Vtop___024root___settle__TOP__48__PROF__lsu__l216(vlSelf);
        Vtop___024root___sequent__TOP__976__PROF__Icache__l291(vlSelf);
        Vtop___024root___sequent__TOP__977__PROF__dff__l12(vlSelf);
        Vtop___024root___sequent__TOP__978__PROF__Dcache__l452(vlSelf);
        Vtop___024root___settle__TOP__95__PROF__axi_crossbar__l329(vlSelf);
        Vtop___024root___settle__TOP__96__PROF__axi_crossbar__l408(vlSelf);
        Vtop___024root___settle__TOP__103__PROF__axi_crossbar__l340(vlSelf);
        Vtop___024root___settle__TOP__104__PROF__axi_crossbar__l346(vlSelf);
        Vtop___024root___settle__TOP__105__PROF__axi_crossbar__l348(vlSelf);
        Vtop___024root___settle__TOP__106__PROF__axi_crossbar__l339(vlSelf);
        Vtop___024root___settle__TOP__107__PROF__axi_crossbar__l342(vlSelf);
        Vtop___024root___settle__TOP__108__PROF__axi_crossbar__l351(vlSelf);
        Vtop___024root___settle__TOP__109__PROF__axi_crossbar__l377(vlSelf);
        Vtop___024root___settle__TOP__110__PROF__axi_crossbar__l398(vlSelf);
        Vtop___024root___settle__TOP__111__PROF__axi_crossbar__l350(vlSelf);
        Vtop___024root___sequent__TOP__990__PROF__Dcache__l361(vlSelf);
        Vtop___024root___sequent__TOP__991__PROF__axi_dcache__l95(vlSelf);
        Vtop___024root___sequent__TOP__992__PROF__mulTop__l17(vlSelf);
        Vtop___024root___sequent__TOP__993__PROF__Icache__l286(vlSelf);
        Vtop___024root___sequent__TOP__999__PROF__Dcache__l357(vlSelf);
        Vtop___024root___sequent__TOP__1004__PROF__Icache__l58(vlSelf);
        Vtop___024root___settle__TOP__22__PROF__top__l297(vlSelf);
        Vtop___024root___settle__TOP__23__PROF__top__l299(vlSelf);
        Vtop___024root___settle__TOP__31__PROF__WB_stage__l15(vlSelf);
        Vtop___024root___settle__TOP__40__PROF__L_S_stage__l113(vlSelf);
        Vtop___024root___sequent__TOP__1009__PROF__Dcache__l203(vlSelf);
        Vtop___024root___settle__TOP__57__PROF__axi_crossbar__l315(vlSelf);
        Vtop___024root___settle__TOP__59__PROF__axi_crossbar__l328(vlSelf);
        Vtop___024root___settle__TOP__60__PROF__axi_crossbar__l333(vlSelf);
        Vtop___024root___settle__TOP__61__PROF__axi_crossbar__l359(vlSelf);
        Vtop___024root___settle__TOP__62__PROF__axi_crossbar__l371(vlSelf);
        Vtop___024root___settle__TOP__63__PROF__axi_crossbar__l376(vlSelf);
        Vtop___024root___settle__TOP__64__PROF__axi_crossbar__l406(vlSelf);
        Vtop___024root___settle__TOP__65__PROF__axi_crossbar__l413(vlSelf);
        Vtop___024root___settle__TOP__69__PROF__axi_dcache__l171(vlSelf);
        Vtop___024root___settle__TOP__70__PROF__axi_crossbar__l410(vlSelf);
        Vtop___024root___sequent__TOP__1020__PROF__mul64__l71(vlSelf);
        Vtop___024root___settle__TOP__223__PROF__CSR__l65(vlSelf);
        Vtop___024root___settle__TOP__52__PROF__top__l922(vlSelf);
        Vtop___024root___settle__TOP__121__PROF__axi_crossbar__l331(vlSelf);
        Vtop___024root___settle__TOP__122__PROF__clint__l128(vlSelf);
        Vtop___024root___settle__TOP__41__PROF__Icache__l265(vlSelf);
        Vtop___024root___settle__TOP__36__PROF__Dcache__l471(vlSelf);
        Vtop___024root___settle__TOP__37__PROF__Dcache__l472(vlSelf);
        Vtop___024root___settle__TOP__39__PROF__Dcache__l477(vlSelf);
        Vtop___024root___settle__TOP__53__PROF__Dcache__l269(vlSelf);
        Vtop___024root___settle__TOP__54__PROF__Dcache__l268(vlSelf);
        Vtop___024root___settle__TOP__117__PROF__Dcache__l479(vlSelf);
        Vtop___024root___sequent__TOP__1037__PROF__Dcache__l92(vlSelf);
        Vtop___024root___sequent__TOP__1038__PROF__dff__l12(vlSelf);
        Vtop___024root___settle__TOP__164__PROF__clint__l130(vlSelf);
        Vtop___024root___settle__TOP__165__PROF__clint__l130(vlSelf);
        Vtop___024root___settle__TOP__120__PROF__Dcache__l270(vlSelf);
        Vtop___024root___settle__TOP__154__PROF__Dcache__l482(vlSelf);
        Vtop___024root___settle__TOP__155__PROF__Dcache__l484(vlSelf);
        Vtop___024root___settle__TOP__156__PROF__Dcache__l486(vlSelf);
        Vtop___024root___settle__TOP__157__PROF__Dcache__l488(vlSelf);
        Vtop___024root___settle__TOP__56__PROF__top__l943(vlSelf);
        Vtop___024root___settle__TOP__58__PROF__axi_crossbar__l320(vlSelf);
        Vtop___024root___settle__TOP__66__PROF__top__l944(vlSelf);
        Vtop___024root___settle__TOP__162__PROF__Dcache__l404(vlSelf);
        Vtop___024root___settle__TOP__163__PROF__Dcache__l404(vlSelf);
        Vtop___024root___settle__TOP__68__PROF__Dcache__l347(vlSelf);
        Vtop___024root___settle__TOP__119__PROF__Dcache__l74(vlSelf);
        Vtop___024root___settle__TOP__73__PROF__Dcache__l657(vlSelf);
        Vtop___024root___sequent__TOP__1057__PROF__dff__l12(vlSelf);
        Vtop___024root___settle__TOP__67__PROF__mulTop__l59(vlSelf);
        Vtop___024root___settle__TOP__71__PROF__top__l921(vlSelf);
        Vtop___024root___settle__TOP__72__PROF__ALU__l223(vlSelf);
        Vtop___024root___settle__TOP__74__PROF__forwarding__l52(vlSelf);
        Vtop___024root___settle__TOP__75__PROF__forwarding__l41(vlSelf);
        Vtop___024root___settle__TOP__123__PROF__Dcache__l651(vlSelf);
        Vtop___024root___settle__TOP__124__PROF__Dcache__l572(vlSelf);
        Vtop___024root___settle__TOP__125__PROF__EX_stage__l61(vlSelf);
        Vtop___024root___settle__TOP__126__PROF__EX_stage__l44(vlSelf);
        Vtop___024root___settle__TOP__76__PROF__top__l298(vlSelf);
        Vtop___024root___settle__TOP__77__PROF__decoder__l32(vlSelf);
        Vtop___024root___settle__TOP__78__PROF__decoder__l32(vlSelf);
        Vtop___024root___settle__TOP__79__PROF__decoder__l32(vlSelf);
        Vtop___024root___settle__TOP__80__PROF__decoder__l32(vlSelf);
        Vtop___024root___settle__TOP__81__PROF__decoder__l32(vlSelf);
        Vtop___024root___settle__TOP__82__PROF__decoder__l32(vlSelf);
        Vtop___024root___settle__TOP__83__PROF__decoder__l32(vlSelf);
        Vtop___024root___settle__TOP__84__PROF__decoder__l32(vlSelf);
        Vtop___024root___settle__TOP__85__PROF__decoder__l32(vlSelf);
        Vtop___024root___settle__TOP__86__PROF__decoder__l32(vlSelf);
        Vtop___024root___settle__TOP__87__PROF__decoder__l32(vlSelf);
        Vtop___024root___settle__TOP__88__PROF__decoder__l32(vlSelf);
        Vtop___024root___settle__TOP__89__PROF__decoder__l32(vlSelf);
        Vtop___024root___settle__TOP__90__PROF__decoder__l32(vlSelf);
        Vtop___024root___settle__TOP__91__PROF__hazard_detect__l13(vlSelf);
        Vtop___024root___settle__TOP__92__PROF__decoder__l32(vlSelf);
        Vtop___024root___settle__TOP__93__PROF__decoder__l32(vlSelf);
        Vtop___024root___sequent__TOP__1087__PROF__IF_stage__l67(vlSelf);
        Vtop___024root___settle__TOP__167__PROF__EX_stage__l80(vlSelf);
        Vtop___024root___settle__TOP__168__PROF__bcu__l28(vlSelf);
        Vtop___024root___settle__TOP__169__PROF__bcu__l28(vlSelf);
        Vtop___024root___settle__TOP__170__PROF__EX_stage__l79(vlSelf);
        Vtop___024root___settle__TOP__127__PROF__imm_ext__l13(vlSelf);
        Vtop___024root___settle__TOP__195__PROF__mul64__l59(vlSelf);
        Vtop___024root___settle__TOP__196__PROF__ALU__l34(vlSelf);
        Vtop___024root___settle__TOP__197__PROF__ALU__l248(vlSelf);
        Vtop___024root___settle__TOP__198__PROF__bcu__l29(vlSelf);
        Vtop___024root___settle__TOP__199__PROF__mul64__l57(vlSelf);
        Vtop___024root___settle__TOP__200__PROF__ALU__l79(vlSelf);
        Vtop___024root___settle__TOP__201__PROF__ALU__l249(vlSelf);
        Vtop___024root___settle__TOP__94__PROF__Icache__l56(vlSelf);
        Vtop___024root___settle__TOP__224__PROF__ALU__l186(vlSelf);
        Vtop___024root___settle__TOP__225__PROF__bcu__l59(vlSelf);
        Vtop___024root___settle__TOP__226__PROF__ALU__l91(vlSelf);
        Vtop___024root___settle__TOP__227__PROF__ALU__l112(vlSelf);
        Vtop___024root___settle__TOP__228__PROF__ALU__l250(vlSelf);
        Vtop___024root___settle__TOP__128__PROF__axi_crossbar__l344(vlSelf);
        Vtop___024root___settle__TOP__129__PROF__axi_crossbar__l290(vlSelf);
        Vtop___024root___settle__TOP__130__PROF__Icache__l333(vlSelf);
        Vtop___024root___settle__TOP__131__PROF__Icache__l333(vlSelf);
        Vtop___024root___settle__TOP__132__PROF__Icache__l196(vlSelf);
        Vtop___024root___settle__TOP__264__PROF__pipline_ctrl__l36(vlSelf);
        Vtop___024root___settle__TOP__265__PROF__pipline_ctrl__l35(vlSelf);
        Vtop___024root___settle__TOP__266__PROF__IF_stage__l51(vlSelf);
        Vtop___024root___settle__TOP__269__PROF__ALU__l261(vlSelf);
        Vtop___024root___settle__TOP__171__PROF__axi_crossbar__l345(vlSelf);
        Vtop___024root___settle__TOP__172__PROF__Icache__l366(vlSelf);
        Vtop___024root___settle__TOP__173__PROF__Icache__l386(vlSelf);
        Vtop___024root___settle__TOP__174__PROF__Icache__l229(vlSelf);
        Vtop___024root___settle__TOP__175__PROF__IF_stage__l32(vlSelf);
        Vtop___024root___settle__TOP__310__PROF__mul64__l67(vlSelf);
        Vtop___024root___settle__TOP__311__PROF__Icache__l67(vlSelf);
        Vtop___024root___settle__TOP__314__PROF__ALU__l269(vlSelf);
        Vtop___024root___settle__TOP__334__PROF__mul64__l69(vlSelf);
        Vtop___024root___settle__TOP__342__PROF__ALU__l279(vlSelf);
        Vtop___024root___settle__TOP__348__PROF__ALU__l142(vlSelf);
        Vtop___024root___settle__TOP__351__PROF__ALU__l171(vlSelf);
        Vtop___024root___settle__TOP__352__PROF__top__l920(vlSelf);
    }
    Vtop___024root___settle__TOP__42__PROF__axi_crossbar__l327(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    Vtop___024root___settle__TOP__112__PROF__axi_crossbar__l352(vlSelf);
    Vtop___024root___settle__TOP__113__PROF__axi_crossbar__l338(vlSelf);
    Vtop___024root___settle__TOP__115__PROF__axi_crossbar__l355(vlSelf);
    Vtop___024root___settle__TOP__114__PROF__axi_crossbar__l354(vlSelf);
    Vtop___024root___settle__TOP__116__PROF__axi_crossbar__l356(vlSelf);
    Vtop___024root___settle__TOP__267__PROF__mulTop__l37(vlSelf);
    Vtop___024root___settle__TOP__166__PROF__axi_dcache__l104(vlSelf);
    Vtop___024root___settle__TOP__149__PROF__axi_icache__l105(vlSelf);
    Vtop___024root___settle__TOP__150__PROF__axi_dcache__l243(vlSelf);
    Vtop___024root___settle__TOP__151__PROF__axi_crossbar__l307(vlSelf);
    Vtop___024root___settle__TOP__152__PROF__axi_crossbar__l306(vlSelf);
    Vtop___024root___settle__TOP__153__PROF__axi_crossbar__l308(vlSelf);
    Vtop___024root___settle__TOP__187__PROF__axi_icache__l73(vlSelf);
    Vtop___024root___settle__TOP__335__PROF__Icache__l69(vlSelf);
    Vtop___024root___settle__TOP__188__PROF__Dcache__l377(vlSelf);
    Vtop___024root___settle__TOP__189__PROF__Dcache__l377(vlSelf);
    Vtop___024root___settle__TOP__190__PROF__Dcache__l377(vlSelf);
    Vtop___024root___settle__TOP__191__PROF__Dcache__l377(vlSelf);
    Vtop___024root___settle__TOP__192__PROF__axi_dcache__l211(vlSelf);
    Vtop___024root___settle__TOP__193__PROF__Dcache__l598(vlSelf);
    Vtop___024root___settle__TOP__222__PROF__Dcache__l283(vlSelf);
    Vtop___024root___settle__TOP__268__PROF__EX_stage__l116(vlSelf);
    Vtop___024root___settle__TOP__312__PROF__pipline_ctrl__l29(vlSelf);
    Vtop___024root___settle__TOP__313__PROF__pipline_ctrl__l32(vlSelf);
    Vtop___024root___settle__TOP__336__PROF__Icache__l369(vlSelf);
    Vtop___024root___settle__TOP__337__PROF__Icache__l389(vlSelf);
    Vtop___024root___settle__TOP__338__PROF__top__l300(vlSelf);
    Vtop___024root___settle__TOP__339__PROF__L_S_stage__l115(vlSelf);
    Vtop___024root___settle__TOP__340__PROF__Dcache__l101(vlSelf);
    Vtop___024root___settle__TOP__341__PROF__Dcache__l325(vlSelf);
    Vtop___024root___settle__TOP__353__PROF__Dcache__l722(vlSelf);
    Vtop___024root___settle__TOP__354__PROF__Dcache__l742(vlSelf);
    Vtop___024root___settle__TOP__345__PROF__lsu__l88(vlSelf);
    Vtop___024root___settle__TOP__346__PROF__lsu__l117(vlSelf);
    Vtop___024root___settle__TOP__347__PROF__lsu__l133(vlSelf);
    Vtop___024root___settle__TOP__350__PROF__WB_reg__l27(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__1166__PROF__regfile__l33(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        Vtop___024root___settle__TOP__55__PROF__regfile__l29(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n 
        = vlSelf->__VinpClk__TOP__top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n;
    vlSelf->__VinpClk__TOP__top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n 
        = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n;
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
    __req |= ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n ^ vlSelf->__Vchglast__TOP__top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n));
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n ^ vlSelf->__Vchglast__TOP__top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n))) VL_DBG_MSGF("        CHANGE: /home/qw/ysyx-workbench/npc/vsrc_pip/std_lib/dff.v:6: top.ex_stage_u.u_ALU.Multiplier.__Vcellinp__resultValidReg__i_rst_n\n"); );
    // Final
    vlSelf->__Vchglast__TOP__top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n 
        = vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n;
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
    if (VL_UNLIKELY((vlSelf->axi_ar_ready_i & 0xfeU))) {
        Verilated::overWidthError("axi_ar_ready_i");}
    if (VL_UNLIKELY((vlSelf->axi_r_valid_i & 0xfeU))) {
        Verilated::overWidthError("axi_r_valid_i");}
    if (VL_UNLIKELY((vlSelf->axi_r_resp_i & 0xfcU))) {
        Verilated::overWidthError("axi_r_resp_i");}
    if (VL_UNLIKELY((vlSelf->axi_r_last_i & 0xfeU))) {
        Verilated::overWidthError("axi_r_last_i");}
    if (VL_UNLIKELY((vlSelf->axi_r_id_i & 0xf0U))) {
        Verilated::overWidthError("axi_r_id_i");}
    if (VL_UNLIKELY((vlSelf->axi_r_user_i & 0xfeU))) {
        Verilated::overWidthError("axi_r_user_i");}
    if (VL_UNLIKELY((vlSelf->axi_aw_ready_i & 0xfeU))) {
        Verilated::overWidthError("axi_aw_ready_i");}
    if (VL_UNLIKELY((vlSelf->axi_w_ready_i & 0xfeU))) {
        Verilated::overWidthError("axi_w_ready_i");}
    if (VL_UNLIKELY((vlSelf->axi_b_valid_i & 0xfeU))) {
        Verilated::overWidthError("axi_b_valid_i");}
    if (VL_UNLIKELY((vlSelf->axi_b_resp_i & 0xfcU))) {
        Verilated::overWidthError("axi_b_resp_i");}
    if (VL_UNLIKELY((vlSelf->axi_b_id_i & 0xf0U))) {
        Verilated::overWidthError("axi_b_id_i");}
    if (VL_UNLIKELY((vlSelf->axi_b_user_i & 0xfeU))) {
        Verilated::overWidthError("axi_b_user_i");}
}
#endif  // VL_DEBUG
