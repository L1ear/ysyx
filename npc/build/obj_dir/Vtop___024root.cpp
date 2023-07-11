// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void ebreak();

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__ID_u__DOT__regfile_u__DOT__ebreak_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__ID_u__DOT__regfile_u__DOT__ebreak_TOP\n"); );
    // Body
    ebreak();
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__ID_u__DOT__regfile_u__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__ID_u__DOT__regfile_u__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {0, 31};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern const VlWide<8>/*255:0*/ Vtop__ConstPool__CONST_d5724acc_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*5:0*/ __Vdlyvdim0__top__DOT__cache_dut__DOT__tagArray1__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cache_dut__DOT__tagArray1__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__cache_dut__DOT__tagArray2__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cache_dut__DOT__tagArray2__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__Dcache_u__DOT__tagArray1__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__Dcache_u__DOT__tagArray1__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__Dcache_u__DOT__tagArray2__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__Dcache_u__DOT__tagArray2__v0;
    CData/*0:0*/ __Vdly__top__DOT__Dcache_u__DOT__oneCycleDelay;
    CData/*1:0*/ __Vdly__top__DOT__axi_ls_u__DOT__wrCnt;
    IData/*20:0*/ __Vdlyvval__top__DOT__cache_dut__DOT__tagArray1__v0;
    IData/*20:0*/ __Vdlyvval__top__DOT__cache_dut__DOT__tagArray2__v0;
    IData/*20:0*/ __Vdlyvval__top__DOT__Dcache_u__DOT__tagArray1__v0;
    IData/*20:0*/ __Vdlyvval__top__DOT__Dcache_u__DOT__tagArray2__v0;
    QData/*63:0*/ __Vdly__top__DOT__ls_u__DOT__CSR_u__DOT__mstatus;
    QData/*63:0*/ __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime;
    QData/*63:0*/ __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp;
    // Body
    __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp 
        = vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp;
    __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime 
        = vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtime;
    vlSelf->__Vdly__top__DOT__cache_dut__DOT__rdCnt 
        = vlSelf->top__DOT__cache_dut__DOT__rdCnt;
    __Vdly__top__DOT__axi_ls_u__DOT__wrCnt = vlSelf->top__DOT__axi_ls_u__DOT__wrCnt;
    vlSelf->__Vdly__top__DOT__Dcache_u__DOT__rdCnt 
        = vlSelf->top__DOT__Dcache_u__DOT__rdCnt;
    __Vdlyvset__top__DOT__cache_dut__DOT__tagArray2__v0 = 0U;
    __Vdlyvset__top__DOT__cache_dut__DOT__tagArray1__v0 = 0U;
    __Vdlyvset__top__DOT__Dcache_u__DOT__tagArray2__v0 = 0U;
    __Vdlyvset__top__DOT__Dcache_u__DOT__tagArray1__v0 = 0U;
    __Vdly__top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
        = vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus;
    __Vdly__top__DOT__Dcache_u__DOT__oneCycleDelay 
        = vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay;
    vlSelf->__Vdly__top__DOT__Dcache_u__DOT__cleanCnt 
        = vlSelf->top__DOT__Dcache_u__DOT__cleanCnt;
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimeWrEn) {
            vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__byte_index = 9U;
        }
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmpWrEn) {
            vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__byte_index = 9U;
        }
    }
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__reg_data_out 
        = ((IData)(vlSelf->rst_n) ? ((((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready) 
                                       & (IData)(vlSelf->top__DOT__clint_axi_arvalid)) 
                                      & (~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid)))
                                      ? ((0x4000U == 
                                          (0xffffU 
                                           & (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_araddr)))
                                          ? vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp
                                          : ((0xbff8U 
                                              == (0xffffU 
                                                  & (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_araddr)))
                                              ? vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtime
                                              : 0ULL))
                                      : 0ULL) : 0ULL);
    vlSelf->top__DOT__Dcache_u__DOT__uncache = vlSelf->top__DOT__Dcache_u__DOT__uncached;
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec) 
             & (IData)(vlSelf->top__DOT__ls_u__DOT__csr_stall_n))) {
            vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec 
                = ((3ULL & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec) 
                   | (0xfffffffffffffffcULL & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data));
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmpWrEn) {
            if ((1U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp 
                    = ((0xffffffffffffff00ULL & __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp) 
                       | (IData)((IData)((0xffU & (IData)(vlSelf->top__DOT__clint_axi_wdata)))));
            }
            if ((2U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp 
                    = ((0xffffffffffff00ffULL & __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp) 
                       | ((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->top__DOT__clint_axi_wdata 
                                                            >> 8U))))) 
                          << 8U));
            }
            if ((4U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp 
                    = ((0xffffffffff00ffffULL & __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp) 
                       | ((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->top__DOT__clint_axi_wdata 
                                                            >> 0x10U))))) 
                          << 0x10U));
            }
            if ((8U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp 
                    = ((0xffffffff00ffffffULL & __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp) 
                       | ((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->top__DOT__clint_axi_wdata 
                                                            >> 0x18U))))) 
                          << 0x18U));
            }
            if ((0x10U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp 
                    = ((0xffffff00ffffffffULL & __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp) 
                       | ((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->top__DOT__clint_axi_wdata 
                                                            >> 0x20U))))) 
                          << 0x20U));
            }
            if ((0x20U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp 
                    = ((0xffff00ffffffffffULL & __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp) 
                       | ((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->top__DOT__clint_axi_wdata 
                                                            >> 0x28U))))) 
                          << 0x28U));
            }
            if ((0x40U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp 
                    = ((0xff00ffffffffffffULL & __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp) 
                       | ((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->top__DOT__clint_axi_wdata 
                                                            >> 0x30U))))) 
                          << 0x30U));
            }
            if ((0x80U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp 
                    = ((0xffffffffffffffULL & __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp) 
                       | ((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->top__DOT__clint_axi_wdata 
                                                            >> 0x38U))))) 
                          << 0x38U));
            }
            if ((1U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp 
                    = ((0xffffffffffffff00ULL & __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp) 
                       | (IData)((IData)((0xffU & (IData)(vlSelf->top__DOT__clint_axi_wdata)))));
            }
        } else {
            __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp 
                = vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp;
        }
    } else {
        __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimeWrEn) {
            if ((1U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime 
                    = ((0xffffffffffffff00ULL & __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime) 
                       | (IData)((IData)((0xffU & (IData)(vlSelf->top__DOT__clint_axi_wdata)))));
            }
            if ((2U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime 
                    = ((0xffffffffffff00ffULL & __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime) 
                       | ((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->top__DOT__clint_axi_wdata 
                                                            >> 8U))))) 
                          << 8U));
            }
            if ((4U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime 
                    = ((0xffffffffff00ffffULL & __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime) 
                       | ((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->top__DOT__clint_axi_wdata 
                                                            >> 0x10U))))) 
                          << 0x10U));
            }
            if ((8U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime 
                    = ((0xffffffff00ffffffULL & __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime) 
                       | ((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->top__DOT__clint_axi_wdata 
                                                            >> 0x18U))))) 
                          << 0x18U));
            }
            if ((0x10U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime 
                    = ((0xffffff00ffffffffULL & __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime) 
                       | ((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->top__DOT__clint_axi_wdata 
                                                            >> 0x20U))))) 
                          << 0x20U));
            }
            if ((0x20U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime 
                    = ((0xffff00ffffffffffULL & __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime) 
                       | ((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->top__DOT__clint_axi_wdata 
                                                            >> 0x28U))))) 
                          << 0x28U));
            }
            if ((0x40U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime 
                    = ((0xff00ffffffffffffULL & __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime) 
                       | ((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->top__DOT__clint_axi_wdata 
                                                            >> 0x30U))))) 
                          << 0x30U));
            }
            if ((0x80U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime 
                    = ((0xffffffffffffffULL & __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime) 
                       | ((QData)((IData)((0xffU & (IData)(
                                                           (vlSelf->top__DOT__clint_axi_wdata 
                                                            >> 0x38U))))) 
                          << 0x38U));
            }
            if ((1U & (IData)(vlSelf->top__DOT__clint_axi_wstrb))) {
                __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime 
                    = ((0xffffffffffffff00ULL & __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime) 
                       | (IData)((IData)((0xffU & (IData)(vlSelf->top__DOT__clint_axi_wdata)))));
            }
        } else {
            __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime 
                = (1ULL + vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtime);
        }
    } else {
        __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime = 0ULL;
    }
    vlSelf->top__DOT__Dcache_u__DOT__wenDelay2 = ((IData)(vlSelf->rst_n) 
                                                  & (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
    vlSelf->top__DOT__Dcache_u__DOT__wenDelay1 = ((IData)(vlSelf->rst_n) 
                                                  & (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
    vlSelf->top__DOT__cache_dut__DOT__missFlag = ((IData)(vlSelf->rst_n) 
                                                  & ((3U 
                                                      == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                                     | (7U 
                                                        == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
    if (vlSelf->rst_n) {
        if (((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
             & (IData)(vlSelf->top__DOT__dataValid_o))) {
            vlSelf->__Vdly__top__DOT__cache_dut__DOT__rdCnt 
                = ((IData)(vlSelf->top__DOT__if_axi_r_last_i)
                    ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__cache_dut__DOT__rdCnt))));
        }
    } else {
        vlSelf->__Vdly__top__DOT__cache_dut__DOT__rdCnt = 0U;
    }
    if (vlSelf->rst_n) {
        if (((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
             & (IData)(vlSelf->top__DOT__if_axi_r_last_i))) {
            vlSelf->top__DOT__cache_dut__DOT__uncachedOk = 1U;
        } else if (vlSelf->top__DOT__if_stall_n) {
            vlSelf->top__DOT__cache_dut__DOT__uncachedOk = 0U;
        }
    } else {
        vlSelf->top__DOT__cache_dut__DOT__uncachedOk = 0U;
    }
    if (vlSelf->rst_n) {
        if (((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
             & (IData)(vlSelf->top__DOT__DcacheWrValid))) {
            __Vdly__top__DOT__axi_ls_u__DOT__wrCnt = 0U;
        } else if ((((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
                     & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready)) 
                    & (~ (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrLast)))) {
            __Vdly__top__DOT__axi_ls_u__DOT__wrCnt 
                = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt)));
        }
    } else {
        __Vdly__top__DOT__axi_ls_u__DOT__wrCnt = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->rst_n)) | (IData)(vlSelf->top__DOT__Dcache_u__DOT__clean_OK)))) {
        vlSelf->top__DOT__cache_dut__DOT__validArray2 = 0ULL;
    } else if (((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)))) {
        vlSelf->top__DOT__cache_dut__DOT__validArray2 
            = (((~ (1ULL << (0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                              >> 5U))))) 
                & vlSelf->top__DOT__cache_dut__DOT__validArray2) 
               | ((QData)((IData)((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit)))) 
                  << (0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                       >> 5U)))));
    }
    if ((1U & ((~ (IData)(vlSelf->rst_n)) | (IData)(vlSelf->top__DOT__Dcache_u__DOT__clean_OK)))) {
        vlSelf->top__DOT__cache_dut__DOT__validArray1 = 0ULL;
    } else if (((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)))) {
        vlSelf->top__DOT__cache_dut__DOT__validArray1 
            = (((~ (1ULL << (0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                              >> 5U))))) 
                & vlSelf->top__DOT__cache_dut__DOT__validArray1) 
               | ((QData)((IData)((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                   & vlSelf->top__DOT__cache_dut__DOT__randomBit))) 
                  << (0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                       >> 5U)))));
    }
    if (vlSelf->rst_n) {
        if (((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
             & (IData)(vlSelf->top__DOT__lsAxiRdDataVAlid))) {
            vlSelf->__Vdly__top__DOT__Dcache_u__DOT__rdCnt 
                = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__Dcache_u__DOT__rdCnt)));
        }
    } else {
        vlSelf->__Vdly__top__DOT__Dcache_u__DOT__rdCnt = 0U;
    }
    if (vlSelf->rst_n) {
        if ((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            vlSelf->top__DOT__Dcache_u__DOT__replaceWay 
                = vlSelf->top__DOT__Dcache_u__DOT__randomBit;
        }
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__replaceWay = 0U;
    }
    vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay 
        = ((IData)(vlSelf->rst_n) & (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)));
    if (((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
         & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)))) {
        __Vdlyvval__top__DOT__cache_dut__DOT__tagArray2__v0 
            = (((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                    ? 0U : (0x1fffffU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                 >> 0xbU))))
                : 0U);
        __Vdlyvset__top__DOT__cache_dut__DOT__tagArray2__v0 = 1U;
        __Vdlyvdim0__top__DOT__cache_dut__DOT__tagArray2__v0 
            = (0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                >> 5U)));
    }
    if (((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
         & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)))) {
        __Vdlyvval__top__DOT__cache_dut__DOT__tagArray1__v0 
            = (((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                    ? (0x1fffffU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                            >> 0xbU)))
                    : 0U) : 0U);
        __Vdlyvset__top__DOT__cache_dut__DOT__tagArray1__v0 = 1U;
        __Vdlyvdim0__top__DOT__cache_dut__DOT__tagArray1__v0 
            = (0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                >> 5U)));
    }
    if (((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
         & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))) {
        vlSelf->top__DOT__Dcache_u__DOT__temp = vlSelf->top__DOT__ls_axi_r_data_i;
    }
    if (vlSelf->rst_n) {
        if (((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state)) 
             & (IData)(vlSelf->top__DOT__DcacheRdValid))) {
            vlSelf->top__DOT__axi_ls_u__DOT__rdAddr_reg 
                = vlSelf->top__DOT__DcacheRdAddr;
        }
    } else {
        vlSelf->top__DOT__axi_ls_u__DOT__rdAddr_reg = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state)) 
             & (IData)(vlSelf->top__DOT__rw_valid_i))) {
            vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg 
                = (QData)((IData)(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                    ? (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch)
                                    : (((IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                 >> 0xbU)) 
                                        << 0xbU) | 
                                       (0x7e0U & ((IData)(
                                                          (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                           >> 5U)) 
                                                  << 5U))))));
        }
    } else {
        vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg = 0ULL;
    }
    if (vlSelf->rst_n) {
        if ((0U != (((QData)((IData)(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                     << 0x3fU) | (((QData)((IData)(
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                   << 0x1fU) | ((QData)((IData)(
                                                                vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                >> 1U))))) {
            vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__commitPC 
                = (((QData)((IData)(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                    << 0x3fU) | (((QData)((IData)(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                  << 0x1fU) | ((QData)((IData)(
                                                               vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                               >> 1U)));
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__commitPC = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
             & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                        >> 0x20U)))) {
            vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch 
                = vlSelf->top__DOT__Dcache_u__DOT__storeMask;
        }
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch = 0U;
    }
    if (vlSelf->rst_n) {
        if ((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
              & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
             & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                           >> 0x20U))))) {
            vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk = 1U;
        } else if ((6U != (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk = 0U;
        }
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk = 0U;
    }
    if (vlSelf->rst_n) {
        if ((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
             & (IData)(vlSelf->top__DOT__ls_stall_n))) {
            vlSelf->top__DOT__forwarding_u__DOT__rd_wb 
                = vlSelf->top__DOT__wb_data;
        }
    } else {
        vlSelf->top__DOT__forwarding_u__DOT__rd_wb = 0ULL;
    }
    if (((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
         & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))) {
        __Vdlyvval__top__DOT__Dcache_u__DOT__tagArray2__v0 
            = vlSelf->top__DOT__Dcache_u__DOT__tagArray2_d;
        __Vdlyvset__top__DOT__Dcache_u__DOT__tagArray2__v0 = 1U;
        __Vdlyvdim0__top__DOT__Dcache_u__DOT__tagArray2__v0 
            = (0x3fU & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                >> 5U)));
    }
    if (((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
         & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))) {
        __Vdlyvval__top__DOT__Dcache_u__DOT__tagArray1__v0 
            = vlSelf->top__DOT__Dcache_u__DOT__tagArray1_d;
        __Vdlyvset__top__DOT__Dcache_u__DOT__tagArray1__v0 = 1U;
        __Vdlyvdim0__top__DOT__Dcache_u__DOT__tagArray1__v0 
            = (0x3fU & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                >> 5U)));
    }
    if (vlSelf->rst_n) {
        if ((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
             & (IData)(vlSelf->top__DOT__ls_stall_n))) {
            vlSelf->top__DOT__forwarding_u__DOT__reg_wben 
                = (1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U]);
        }
    } else {
        vlSelf->top__DOT__forwarding_u__DOT__reg_wben = 0U;
    }
    if (vlSelf->rst_n) {
        if ((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
             & (IData)(vlSelf->top__DOT__ls_stall_n))) {
            vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx 
                = (0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                            >> 8U));
        }
    } else {
        vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx = 0U;
    }
    if (vlSelf->rst_n) {
        if (((((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause) 
               | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                  >> 1U)) | (IData)(vlSelf->top__DOT__in_intr_ls)) 
             & (IData)(vlSelf->top__DOT__ls_u__DOT__csr_stall_n))) {
            vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause 
                = ((1U & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                           >> 1U) | (IData)(vlSelf->top__DOT__in_intr_ls)))
                    ? (((0x1cU == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 5U))) 
                        & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                           >> 1U)) ? 0xbULL : ((IData)(vlSelf->top__DOT__in_intr_ls)
                                                ? 0x8000000000000007ULL
                                                : 0ULL))
                    : vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data);
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus) 
               | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                  >> 1U)) | (IData)(vlSelf->top__DOT__in_intr_ls)) 
             & (IData)(vlSelf->top__DOT__ls_u__DOT__csr_stall_n))) {
            __Vdly__top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                = ((1U & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                           >> 1U) | (IData)(vlSelf->top__DOT__in_intr_ls)))
                    ? (((((0x1cU == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 5U))) 
                          & (~ (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                >> 0x18U))) & (0U == 
                                               (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU)))) 
                        | (IData)(vlSelf->top__DOT__in_intr_ls))
                        ? ((0xffffffffffffe000ULL & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus) 
                           | (QData)((IData)((0x1800U 
                                              | ((0x700U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                              >> 8U)) 
                                                     << 8U)) 
                                                 | ((0x80U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                                 >> 3U)) 
                                                        << 7U)) 
                                                    | ((0x70U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                                    >> 4U)) 
                                                           << 4U)) 
                                                       | (7U 
                                                          & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus)))))))))
                        : ((0xffffffffffffff00ULL & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus) 
                           | (QData)((IData)((0x80U 
                                              | ((0x70U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                              >> 4U)) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                                 >> 7U)) 
                                                        << 3U)) 
                                                    | (7U 
                                                       & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus)))))))))
                    : vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data);
        }
    } else {
        __Vdly__top__DOT__ls_u__DOT__CSR_u__DOT__mstatus = 0xa00001800ULL;
    }
    if (vlSelf->rst_n) {
        if (((((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc) 
               | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                  >> 1U)) | (IData)(vlSelf->top__DOT__in_intr_ls)) 
             & (IData)(vlSelf->top__DOT__ls_u__DOT__csr_stall_n))) {
            vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc 
                = ((3ULL & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc) 
                   | (((2U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                        ? (((QData)((IData)(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                            << 0x3bU) | (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                          << 0x1bU) 
                                         | ((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                            >> 5U)))
                        : ((IData)(vlSelf->top__DOT__in_intr_ls)
                            ? ((0U != (0x3fffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                           << 0x22U) 
                                          | (((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                              << 2U) 
                                             | ((QData)((IData)(
                                                                vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                >> 0x1eU)))))
                                ? (((QData)((IData)(
                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                    << 0x22U) | (((QData)((IData)(
                                                                  vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                    >> 0x1eU)))
                                : ((0U != (0x3fffffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                               << 0x1eU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                                 >> 2U))))
                                    ? (((QData)((IData)(
                                                        vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                           >> 2U)))
                                    : (vlSelf->top__DOT__pc_new 
                                       >> 2U))) : (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data 
                                                   >> 2U))) 
                      << 2U));
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc = 0ULL;
    }
    if (vlSelf->rst_n) {
        if ((((0x344U == (0xfffU & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                     << 9U) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0x17U)))) 
              & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en)) 
             & (IData)(vlSelf->top__DOT__ls_u__DOT__csr_stall_n))) {
            vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip 
                = vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data;
        } else if ((((IData)(vlSelf->top__DOT__ls_u__DOT__timr_int) 
                     & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie 
                                >> 7U))) & (IData)(
                                                   (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                    >> 3U)))) {
            vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip 
                = (0x80ULL | vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip);
        } else if ((1U & (~ (IData)(vlSelf->top__DOT__ls_u__DOT__timr_int)))) {
            vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip 
                = (0xffffffffffffff7fULL & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip);
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip = 0ULL;
    }
    if (vlSelf->rst_n) {
        if ((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
              | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                 & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                            >> 0x20U)))) & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__axiWrBusy)))) {
            vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg 
                = ((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i) 
                   & ((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                        & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                   >> 0x20U))) & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk))) 
                      | ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncached)) 
                         & (((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                               & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                          >> 0x20U))) 
                              & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                             & (((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                 & (IData)((vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                                            >> (0x3fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 5U)))))) 
                                | ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                   & (IData)((vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                                              >> (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))))) 
                            | ((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                 & (~ (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))) 
                                & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                               & (((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                   & (IData)((vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                                              >> (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 5U)))))) 
                                  | ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                     & (IData)((vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 5U))))))))))));
        } else if (((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
                    & (IData)(vlSelf->top__DOT__DcacheWrValid))) {
            vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg = 0U;
        }
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg = 0U;
    }
    if (vlSelf->rst_n) {
        if (((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
             & ((((~ ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt) 
                      >> 6U)) & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                         >> (0x3fU 
                                             & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))))) 
                 & (IData)((vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                            >> (0x3fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))))) 
                | ((((IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt) 
                     >> 6U) & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                       >> (0x3fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))))) 
                   & (IData)((vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                              >> (0x3fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt)))))))) {
            __Vdly__top__DOT__Dcache_u__DOT__oneCycleDelay = 1U;
        }
    } else {
        __Vdly__top__DOT__Dcache_u__DOT__oneCycleDelay = 0U;
    }
    if (((IData)(vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay) 
         & (0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)))) {
        __Vdly__top__DOT__Dcache_u__DOT__oneCycleDelay = 0U;
    }
    if (vlSelf->rst_n) {
        if (((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
             & (((IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanWrValid) 
                 & (0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))) 
                | ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanWrValid)) 
                   & (~ ((((~ ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt) 
                               >> 6U)) & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))))) 
                          & (IData)((vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))))) 
                         | ((((IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt) 
                              >> 6U) & (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))))) 
                            & (IData)((vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                                       >> (0x3fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))))))))))) {
            vlSelf->__Vdly__top__DOT__Dcache_u__DOT__cleanCnt 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt)));
        }
    } else {
        vlSelf->__Vdly__top__DOT__Dcache_u__DOT__cleanCnt = 0U;
    }
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp 
        = __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtime 
        = __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime;
    vlSelf->top__DOT__axi_ls_u__DOT__wrCnt = __Vdly__top__DOT__axi_ls_u__DOT__wrCnt;
    if (__Vdlyvset__top__DOT__cache_dut__DOT__tagArray2__v0) {
        vlSelf->top__DOT__cache_dut__DOT__tagArray2[__Vdlyvdim0__top__DOT__cache_dut__DOT__tagArray2__v0] 
            = __Vdlyvval__top__DOT__cache_dut__DOT__tagArray2__v0;
    }
    if (__Vdlyvset__top__DOT__cache_dut__DOT__tagArray1__v0) {
        vlSelf->top__DOT__cache_dut__DOT__tagArray1[__Vdlyvdim0__top__DOT__cache_dut__DOT__tagArray1__v0] 
            = __Vdlyvval__top__DOT__cache_dut__DOT__tagArray1__v0;
    }
    if (__Vdlyvset__top__DOT__Dcache_u__DOT__tagArray2__v0) {
        vlSelf->top__DOT__Dcache_u__DOT__tagArray2[__Vdlyvdim0__top__DOT__Dcache_u__DOT__tagArray2__v0] 
            = __Vdlyvval__top__DOT__Dcache_u__DOT__tagArray2__v0;
    }
    if (__Vdlyvset__top__DOT__Dcache_u__DOT__tagArray1__v0) {
        vlSelf->top__DOT__Dcache_u__DOT__tagArray1[__Vdlyvdim0__top__DOT__Dcache_u__DOT__tagArray1__v0] 
            = __Vdlyvval__top__DOT__Dcache_u__DOT__tagArray1__v0;
    }
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
        = __Vdly__top__DOT__ls_u__DOT__CSR_u__DOT__mstatus;
    vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay 
        = __Vdly__top__DOT__Dcache_u__DOT__oneCycleDelay;
    vlSelf->top__DOT__ls_u__DOT__timr_int = (vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtime 
                                             >= vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp);
    vlSelf->top__DOT__axi_ls_u__DOT__r_state = ((IData)(vlSelf->rst_n)
                                                 ? (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state_next)
                                                 : 0U);
    if (vlSelf->rst_n) {
        if (((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
               & (0ULL != vlSelf->top__DOT__pc_new)) 
              & (IData)(vlSelf->top__DOT__cache_dut__DOT__diffAddr)) 
             | (((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                   & (0ULL != vlSelf->top__DOT__pc_new)) 
                  & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)) 
                 & (IData)(vlSelf->top__DOT__cache_dut__DOT__diffAddr)) 
                & (IData)(vlSelf->top__DOT__if_stall_n)))) {
            vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                = (QData)((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o));
        }
    } else {
        vlSelf->top__DOT__cache_dut__DOT__reqLatch = 0ULL;
    }
    vlSelf->top__DOT__axi_icache_dut__DOT__r_state 
        = ((IData)(vlSelf->rst_n) ? (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next)
            : 0U);
    if (vlSelf->rst_n) {
        if ((((0x304U == (0xfffU & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                     << 9U) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0x17U)))) 
              & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en)) 
             & (IData)(vlSelf->top__DOT__ls_u__DOT__csr_stall_n))) {
            vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie 
                = vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data;
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie = 0ULL;
    }
    vlSelf->top__DOT__Dcache_u__DOT__axiWrBusy = vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg;
    if (vlSelf->rst_n) {
        if ((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
              & (0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))) 
             & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                        >> 0x20U)))) {
            vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk = 1U;
        } else if ((6U != (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
            vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk = 0U;
        }
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk = 0U;
    }
    if (vlSelf->rst_n) {
        if ((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
              & (IData)(vlSelf->top__DOT__Dcache_u__DOT__way2Hit)) 
             & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                        >> 0x20U)))) {
            vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                = (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                   | ((QData)((IData)(1U)) << (0x3fU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 5U)))));
        } else if ((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                     & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                    & (IData)(vlSelf->top__DOT__Dcache_u__DOT__way2Hit))) {
            vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                = ((~ (1ULL << (0x3fU & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 5U))))) 
                   & vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2);
        }
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 = 0ULL;
    }
    if (vlSelf->rst_n) {
        if ((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
              & (IData)(vlSelf->top__DOT__Dcache_u__DOT__way1Hit)) 
             & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                        >> 0x20U)))) {
            vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                = (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                   | ((QData)((IData)(1U)) << (0x3fU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 5U)))));
        } else if ((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                     & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                    & (IData)(vlSelf->top__DOT__Dcache_u__DOT__way1Hit))) {
            vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                = ((~ (1ULL << (0x3fU & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 5U))))) 
                   & vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1);
        }
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
             & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))) {
            vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                = (((~ (1ULL << (0x3fU & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 5U))))) 
                    & vlSelf->top__DOT__Dcache_u__DOT__validArray2) 
                   | ((QData)((IData)(vlSelf->top__DOT__Dcache_u__DOT__bitValid2_d)) 
                      << (0x3fU & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                           >> 5U)))));
        }
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__validArray2 = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
             & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))) {
            vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                = (((~ (1ULL << (0x3fU & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 5U))))) 
                    & vlSelf->top__DOT__Dcache_u__DOT__validArray1) 
                   | ((QData)((IData)(vlSelf->top__DOT__Dcache_u__DOT__bitValid1_d)) 
                      << (0x3fU & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                           >> 5U)))));
        }
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__validArray1 = 0ULL;
    }
    vlSelf->top__DOT__cache_dut__DOT__way1Hit = ((1U 
                                                  & ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fffffU 
                                                                  & (vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                                                     [
                                                                     (0x3fU 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                                >> 5U)))] 
                                                                     ^ (IData)(
                                                                               (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                                >> 0xbU))))))) 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                                >> 
                                                                (0x3fU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                            >> 5U)))))))
                                                  ? 1U
                                                  : 0U);
    vlSelf->top__DOT__cache_dut__DOT__way2Hit = ((1U 
                                                  & ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fffffU 
                                                                  & (vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                                                     [
                                                                     (0x3fU 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                                >> 5U)))] 
                                                                     ^ (IData)(
                                                                               (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                                >> 0xbU))))))) 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                                >> 
                                                                (0x3fU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                            >> 5U)))))))
                                                  ? 1U
                                                  : 0U);
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid 
        = ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
            ? (1U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
            : (1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state)));
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__ls_stall_n) {
            if (vlSelf->top__DOT__in_intr_ls) {
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                    = Vtop__ConstPool__CONST_d5724acc_0[0U];
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U] 
                    = Vtop__ConstPool__CONST_d5724acc_0[1U];
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U] 
                    = Vtop__ConstPool__CONST_d5724acc_0[2U];
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U] 
                    = Vtop__ConstPool__CONST_d5724acc_0[3U];
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                    = Vtop__ConstPool__CONST_d5724acc_0[4U];
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                    = Vtop__ConstPool__CONST_d5724acc_0[5U];
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U] 
                    = Vtop__ConstPool__CONST_d5724acc_0[6U];
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U] 
                    = Vtop__ConstPool__CONST_d5724acc_0[7U];
            } else {
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                    = (((IData)(vlSelf->top__DOT__alures_ex) 
                        << 3U) | ((4U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0xeU)) 
                                  | (3U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U] 
                    = (((IData)(vlSelf->top__DOT__alures_ex) 
                        >> 0x1dU) | ((IData)((vlSelf->top__DOT__alures_ex 
                                              >> 0x20U)) 
                                     << 3U));
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U] 
                    = (((IData)((vlSelf->top__DOT__alures_ex 
                                 >> 0x20U)) >> 0x1dU) 
                       | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                          << 3U));
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U] 
                    = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                        >> 0x1dU) | ((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                              >> 0x20U)) 
                                     << 3U));
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                    = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                 >> 0x20U)) >> 0x1dU) 
                       | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                           << 7U) | (0x78U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                              >> 0x19U))));
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                    = ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                              >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                             << 7U) 
                                            | (0x78U 
                                               & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                  >> 0x19U))));
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U] 
                    = ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                              >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                             << 7U) 
                                            | (0x78U 
                                               & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                  >> 0x19U))));
                vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U] 
                    = (7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                             >> 0x19U));
            }
        }
    } else {
        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] = 0U;
        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U] = 0U;
        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U] = 0U;
        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U] = 0U;
        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] = 0U;
        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] = 0U;
        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U] = 0U;
        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U] = 0U;
    }
    vlSelf->top__DOT__in_intr_ls = (1U & (((IData)(
                                                   (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip 
                                                    >> 7U)) 
                                           | (IData)(vlSelf->top__DOT__ls_u__DOT__timr_int)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                     >> 3U))));
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh = (
                                                   (3U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                        >> 3U))) 
                                                   & (1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                          >> 0xfU))));
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu = 
        ((3U == (0x7fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                          >> 3U))) & (5U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))));
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw = (
                                                   (3U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                        >> 3U))) 
                                                   & (2U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                          >> 0xfU))));
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu = 
        ((3U == (0x7fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                          >> 3U))) & (6U == (7U & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU))));
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld = (
                                                   (3U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                        >> 3U))) 
                                                   & (3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                          >> 0xfU))));
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrw 
        = ((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                         >> 0xfU))) | (5U == (7U & 
                                              (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xfU))));
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrs 
        = ((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                         >> 0xfU))) | (6U == (7U & 
                                              (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xfU))));
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrc 
        = ((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                         >> 0xfU))) | (7U == (7U & 
                                              (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xfU))));
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en 
        = ((((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrw) 
             | (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrs)) 
            | (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrc)) 
           & (0x1cU == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                 >> 5U))));
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc 
        = ((0x341U == (0xfffU & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                  << 9U) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 0x17U)))) 
           & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec 
        = ((0x305U == (0xfffU & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                  << 9U) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 0x17U)))) 
           & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus 
        = ((0x300U == (0xfffU & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                  << 9U) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 0x17U)))) 
           & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause 
        = ((0x342U == (0xfffU & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                  << 9U) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 0x17U)))) 
           & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
    vlSelf->top__DOT__csrdata_ls = (((((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc))) 
                                       & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc) 
                                      | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec))) 
                                         & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec)) 
                                     | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus))) 
                                        & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus)) 
                                    | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause))) 
                                       & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause));
}

void Vtop___024unit____Vdpiimwrap_axiSlaveRead_TOP____024unit(QData/*63:0*/ raddr, CData/*7:0*/ size, QData/*63:0*/ &rdata);
void Vtop___024unit____Vdpiimwrap_axiSlaveWrite_TOP____024unit(QData/*63:0*/ waddr, CData/*7:0*/ size, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__4\n"); );
    // Variables
    CData/*5:0*/ __Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0;
    CData/*0:0*/ __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_awready;
    CData/*0:0*/ __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__aw_en;
    CData/*0:0*/ __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid;
    CData/*0:0*/ __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_arready;
    CData/*0:0*/ __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid;
    CData/*0:0*/ __Vdly__top__DOT__Dcache_u__DOT__randomBit;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0;
    CData/*0:0*/ __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_awready;
    CData/*0:0*/ __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__aw_en;
    CData/*0:0*/ __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_wready;
    CData/*0:0*/ __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid;
    CData/*0:0*/ __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0;
    VlWide<8>/*255:0*/ __Vtemp56;
    VlWide<4>/*127:0*/ __Vtemp66;
    VlWide<4>/*127:0*/ __Vtemp76;
    VlWide<4>/*127:0*/ __Vtemp90;
    VlWide<4>/*127:0*/ __Vtemp102;
    VlWide<4>/*127:0*/ __Vtemp109;
    VlWide<4>/*127:0*/ __Vtemp119;
    VlWide<4>/*127:0*/ __Vtemp133;
    VlWide<4>/*127:0*/ __Vtemp145;
    VlWide<4>/*127:0*/ __Vtemp152;
    VlWide<4>/*127:0*/ __Vtemp162;
    VlWide<4>/*127:0*/ __Vtemp176;
    VlWide<4>/*127:0*/ __Vtemp188;
    VlWide<4>/*127:0*/ __Vtemp195;
    VlWide<4>/*127:0*/ __Vtemp205;
    VlWide<4>/*127:0*/ __Vtemp219;
    VlWide<4>/*127:0*/ __Vtemp231;
    QData/*63:0*/ __Vtask_axiSlaveRead__3__rdata;
    // Body
    __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__aw_en = vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en;
    __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__aw_en 
        = vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__aw_en;
    __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_awready 
        = vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready;
    __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_awready 
        = vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready;
    __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid 
        = vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid;
    __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_wready 
        = vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready;
    __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid 
        = vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid;
    __Vdlyvset__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0 = 0U;
    __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_arready 
        = vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready;
    __Vdly__top__DOT__Dcache_u__DOT__randomBit = vlSelf->top__DOT__Dcache_u__DOT__randomBit;
    __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid 
        = vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid;
    __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid 
        = vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid;
    vlSelf->__Vdlyvset__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0 = 0U;
    __Vdlyvset__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0 = 0U;
    if (vlSelf->rst_n) {
        if ((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
              & (IData)(vlSelf->top__DOT__axi_mmio_ar_valid_o)) 
             & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))) {
            Vtop___024unit____Vdpiimwrap_axiSlaveRead_TOP____024unit(
                                                                     (0xfffffffffffffff8ULL 
                                                                      & vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr), 
                                                                     (((0xaU 
                                                                        != 
                                                                        (0xfU 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                                                >> 0x1cU)))) 
                                                                       | (2U 
                                                                          == 
                                                                          (0xffU 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                                                >> 0x18U)))))
                                                                       ? 0U
                                                                       : 
                                                                      (7U 
                                                                       & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size))), __Vtask_axiSlaveRead__3__rdata);
            vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata 
                = __Vtask_axiSlaveRead__3__rdata;
        }
    } else {
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata = 0ULL;
    }
    if ((0x100073U == ((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                        << 0x1fU) | (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                     >> 1U)))) {
        Vtop___024root____Vdpiimwrap_top__DOT__ID_u__DOT__regfile_u__DOT__ebreak_TOP();
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
             & (IData)(vlSelf->top__DOT__axi_mmio_w_valid_o))) {
            vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp = 0U;
        }
    } else {
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)) 
               & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2))))) {
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_2[0U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A][0U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_2[1U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A][1U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_2[2U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A][2U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_2[3U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A][3U];
    } else {
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_2[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_2[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_2[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_2[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & ((~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN)) 
               & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2))))) {
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_1[0U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__A][0U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_1[1U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__A][1U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_1[2U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__A][2U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_1[3U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__A][3U];
    } else {
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_1[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_1[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_1[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_1[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & ((~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)) 
               & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1))))) {
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_2[0U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A][0U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_2[1U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A][1U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_2[2U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A][2U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_2[3U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A][3U];
    } else {
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_2[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_2[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_2[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_2[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & ((~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN)) 
               & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1))))) {
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_1[0U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__A][0U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_1[1U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__A][1U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_1[2U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__A][2U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_1[3U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram
            [vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__A][3U];
    } else {
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_1[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_1[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_1[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_1[3U] 
            = VL_RANDOM_I(32);
    }
    if (vlSelf->rst_n) {
        if ((((~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)) 
              & (IData)(vlSelf->top__DOT__axi_mmio_aw_valid_o)) 
             & (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en))) {
            __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_awready = 1U;
            __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__aw_en = 0U;
        } else if (((IData)(vlSelf->top__DOT__axi_mmio_b_ready_o) 
                    & (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid))) {
            __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__aw_en = 1U;
            __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_awready = 0U;
        } else {
            __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_awready = 0U;
        }
    } else {
        __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_awready = 0U;
        __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__aw_en = 1U;
    }
    if (vlSelf->rst_n) {
        if ((((~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready)) 
              & (IData)(vlSelf->top__DOT__clint_axi_awvalid)) 
             & (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__aw_en))) {
            __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_awready = 1U;
            __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__aw_en = 0U;
        } else if (((IData)(vlSelf->top__DOT__clint_axi_bready) 
                    & (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid))) {
            __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__aw_en = 1U;
            __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_awready = 0U;
        } else {
            __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_awready = 0U;
        }
    } else {
        __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_awready = 0U;
        __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__aw_en = 1U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready) 
             & (IData)(vlSelf->top__DOT__clint_axi_wvalid))) {
            vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bresp = 0U;
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bresp = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
             & (IData)(vlSelf->top__DOT__axi_mmio_w_valid_o))) {
            __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid = 1U;
        } else if (((IData)(vlSelf->top__DOT__axi_mmio_b_ready_o) 
                    & (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid))) {
            __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid = 0U;
        }
    } else {
        __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid = 0U;
    }
    __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_wready 
        = ((IData)(vlSelf->rst_n) & ((~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready)) 
                                     & (IData)(vlSelf->top__DOT__axi_mmio_w_valid_o)));
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready) 
             & (IData)(vlSelf->top__DOT__clint_axi_wvalid))) {
            __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid = 1U;
        } else if (((IData)(vlSelf->top__DOT__clint_axi_bready) 
                    & (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid))) {
            __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid = 0U;
        }
    } else {
        __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid = 0U;
    }
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready 
        = ((IData)(vlSelf->rst_n) & ((~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready)) 
                                     & (IData)(vlSelf->top__DOT__clint_axi_wvalid)));
    if ((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) {
        vlSelf->top__DOT__cache_dut__DOT__randomBit 
            = (~ vlSelf->top__DOT__cache_dut__DOT__randomBit);
    }
    if (vlSelf->rst_n) {
        if ((((~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready)) 
              & (IData)(vlSelf->top__DOT__clint_axi_awvalid)) 
             & (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__aw_en))) {
            vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr 
                = ((2U == (0xffU & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                            >> 0x18U))))
                    ? vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg
                    : 0ULL);
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr = 0ULL;
    }
    if (((~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)) 
         & (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2))) {
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0[0U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0[1U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0[2U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0[3U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        __Vdlyvset__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0 
            = vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A;
    }
    if (((~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN)) 
         & (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2))) {
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0[0U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0[1U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0[2U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0[3U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        __Vdlyvset__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0 
            = vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__A;
    }
    if (((~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)) 
         & (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1))) {
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0[0U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0[1U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0[2U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0[3U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
        __Vdlyvset__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0 
            = vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A;
    }
    if (((~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN)) 
         & (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1))) {
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0[0U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0[1U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0[2U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0[3U] 
            = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
        __Vdlyvset__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0 
            = vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__A;
    }
    if (vlSelf->rst_n) {
        if (((~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready)) 
             & (IData)(vlSelf->top__DOT__clint_axi_arvalid))) {
            __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_arready = 1U;
            vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_araddr 
                = ((2U == (0xffU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                            >> 0x18U))))
                    ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr
                    : 0ULL);
        } else {
            __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_arready = 0U;
        }
    } else {
        __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_arready = 0U;
        vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_araddr = 0ULL;
    }
    if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
        __Vdly__top__DOT__Dcache_u__DOT__randomBit 
            = (1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)));
    }
    if (((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
         & (IData)(vlSelf->top__DOT__DcacheWrValid))) {
        vlSelf->top__DOT__axi_ls_u__DOT__storeLenth_reg 
            = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                ? 0U : 3U);
    }
    if (((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
         & (IData)(vlSelf->top__DOT__DcacheWrValid))) {
        vlSelf->top__DOT__axi_ls_u__DOT__wrMask_reg 
            = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                ? (0xffU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask))
                : 0xffU);
    }
    if (vlSelf->rst_n) {
        if ((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
              & (IData)(vlSelf->top__DOT__axi_mmio_ar_valid_o)) 
             & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))) {
            __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid = 1U;
            vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp = 0U;
        } else if (((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid) 
                    & (((0xaU != (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                  >> 0x1cU)))) 
                        | (2U == (0xffU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                   >> 0x18U)))))
                        ? 0U : (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready)))) {
            __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid = 0U;
        }
    } else {
        __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid = 0U;
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp = 0U;
    }
    if (vlSelf->rst_n) {
        if ((((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready) 
              & (IData)(vlSelf->top__DOT__clint_axi_arvalid)) 
             & (~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid)))) {
            __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid = 1U;
            vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp = 0U;
        } else if (((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid) 
                    & ((2U == (0xffU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                >> 0x18U))))
                        ? (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready)
                        : 0U))) {
            __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid = 0U;
        }
    } else {
        __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid = 0U;
        vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp = 0U;
    }
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
                                                                           (0xffU 
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
                                                                           (0xffU 
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
                                                                           (0xffU 
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
    if ((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) {
        vlSelf->__Vdlyvval__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0 
            = ((0U == (0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                >> 8U))) ? 0ULL : vlSelf->top__DOT__wb_data);
        vlSelf->__Vdlyvset__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0 = 1U;
        vlSelf->__Vdlyvdim0__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0 
            = (0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                        >> 8U));
    }
    if (((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
         & (IData)(vlSelf->top__DOT__DcacheWrValid))) {
        VL_EXTEND_WQ(256,64, __Vtemp56, vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch);
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
                    ? __Vtemp56[0U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                        ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U]
                                        : vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U]));
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[1U] 
                = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                    ? __Vtemp56[1U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                        ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U]
                                        : vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U]));
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[2U] 
                = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                    ? __Vtemp56[2U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                        ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U]
                                        : vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U]));
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[3U] 
                = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                    ? __Vtemp56[3U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                        ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U]
                                        : vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U]));
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[4U] 
                = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                    ? __Vtemp56[4U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                        ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U]
                                        : vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U]));
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[5U] 
                = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                    ? __Vtemp56[5U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                        ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U]
                                        : vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U]));
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[6U] 
                = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                    ? __Vtemp56[6U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                        ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U]
                                        : vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U]));
            vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[7U] 
                = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                    ? __Vtemp56[7U] : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                        ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U]
                                        : vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U]));
        }
    }
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid 
        = __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid 
        = __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__aw_en 
        = __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__aw_en;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready 
        = __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_awready;
    if (__Vdlyvset__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0) {
        vlSelf->top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram[__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0[0U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram[__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0[1U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram[__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0[2U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram[__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0) {
        vlSelf->top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram[__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0[0U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram[__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0[1U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram[__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0[2U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram[__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0) {
        vlSelf->top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram[__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0[0U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram[__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0[1U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram[__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0[2U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram[__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0) {
        vlSelf->top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram[__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0[0U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram[__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0[1U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram[__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0[2U];
        vlSelf->top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram[__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0[3U];
    }
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid 
        = __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid 
        = __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready 
        = __Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_arready;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready 
        = __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_wready;
    vlSelf->top__DOT__Dcache_u__DOT__randomBit = __Vdly__top__DOT__Dcache_u__DOT__randomBit;
    if (vlSelf->rst_n) {
        if (((~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready)) 
             & (IData)(vlSelf->top__DOT__axi_mmio_ar_valid_o))) {
            vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready = 1U;
            vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr 
                = (((0xaU != (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                              >> 0x1cU)))) 
                    | (2U == (0xffU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                               >> 0x18U)))))
                    ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr);
        } else {
            vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready = 0U;
        }
    } else {
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready = 0U;
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr = 0ULL;
    }
    vlSelf->top__DOT__cache_dut__DOT__way2Data[0U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay2_1[0U];
    vlSelf->top__DOT__cache_dut__DOT__way2Data[1U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay2_1[1U];
    vlSelf->top__DOT__cache_dut__DOT__way2Data[2U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay2_1[2U];
    vlSelf->top__DOT__cache_dut__DOT__way2Data[3U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay2_1[3U];
    vlSelf->top__DOT__cache_dut__DOT__way2Data[4U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay2_2[0U];
    vlSelf->top__DOT__cache_dut__DOT__way2Data[5U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay2_2[1U];
    vlSelf->top__DOT__cache_dut__DOT__way2Data[6U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay2_2[2U];
    vlSelf->top__DOT__cache_dut__DOT__way2Data[7U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay2_2[3U];
    vlSelf->top__DOT__cache_dut__DOT__way1Data[0U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay1_1[0U];
    vlSelf->top__DOT__cache_dut__DOT__way1Data[1U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay1_1[1U];
    vlSelf->top__DOT__cache_dut__DOT__way1Data[2U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay1_1[2U];
    vlSelf->top__DOT__cache_dut__DOT__way1Data[3U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay1_1[3U];
    vlSelf->top__DOT__cache_dut__DOT__way1Data[4U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay1_2[0U];
    vlSelf->top__DOT__cache_dut__DOT__way1Data[5U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay1_2[1U];
    vlSelf->top__DOT__cache_dut__DOT__way1Data[6U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay1_2[2U];
    vlSelf->top__DOT__cache_dut__DOT__way1Data[7U] 
        = vlSelf->top__DOT__cache_dut__DOT__dataWay1_2[3U];
    vlSelf->top__DOT__ls_axi_w_strb_o = vlSelf->top__DOT__axi_ls_u__DOT__wrMask_reg;
    if (vlSelf->rst_n) {
        if ((((~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)) 
              & (IData)(vlSelf->top__DOT__axi_mmio_aw_valid_o)) 
             & (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en))) {
            vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr 
                = (((0xaU != (0xfU & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                              >> 0x1cU)))) 
                    | (2U == (0xffU & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                               >> 0x18U)))))
                    ? 0ULL : vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg);
        }
    } else {
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr = 0ULL;
    }
    if (((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
         & (IData)(vlSelf->top__DOT__DcacheWrValid))) {
        vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg 
            = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                ? (7U & (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size))
                : 3U);
    }
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
        VL_EXTEND_WQ(128,64, __Vtemp66, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        VL_EXTEND_WQ(128,64, __Vtemp76, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        VL_EXTEND_WQ(128,64, __Vtemp90, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp102[0U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? 0U : __Vtemp66[0U])
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
                                                    __Vtemp76[0U])
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
                                            __Vtemp90[0U])
                                         : 0U) : 0U)))));
        __Vtemp102[1U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? 0U : __Vtemp66[1U])
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
                                                    __Vtemp76[1U])
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
                                            __Vtemp90[1U])
                                         : 0U) : 0U)))));
        __Vtemp102[2U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                     : __Vtemp66[2U])
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
                                                    __Vtemp76[2U])
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
                                             : __Vtemp90[2U])
                                         : 0U) : 0U)))));
        __Vtemp102[3U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                                >> 0x20U))
                                     : __Vtemp66[3U])
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
                                                    __Vtemp76[3U])
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
                                             : __Vtemp90[3U])
                                         : 0U) : 0U)))));
        __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0[0U] 
            = __Vtemp102[0U];
        __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0[1U] 
            = __Vtemp102[1U];
        __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0[2U] 
            = __Vtemp102[2U];
        __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0[3U] 
            = __Vtemp102[3U];
        __Vdlyvset__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0 
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
        VL_EXTEND_WQ(128,64, __Vtemp109, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        VL_EXTEND_WQ(128,64, __Vtemp119, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        VL_EXTEND_WQ(128,64, __Vtemp133, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp145[0U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? 0U : __Vtemp109[0U])
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
                                                    __Vtemp119[0U])
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
                                            __Vtemp133[0U])
                                         : 0U) : 0U)))));
        __Vtemp145[1U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? 0U : __Vtemp109[1U])
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
                                                    __Vtemp119[1U])
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
                                            __Vtemp133[1U])
                                         : 0U) : 0U)))));
        __Vtemp145[2U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                     : __Vtemp109[2U])
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
                                                    __Vtemp119[2U])
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
                                             : __Vtemp133[2U])
                                         : 0U) : 0U)))));
        __Vtemp145[3U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                                >> 0x20U))
                                     : __Vtemp109[3U])
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
                                                    __Vtemp119[3U])
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
                                             : __Vtemp133[3U])
                                         : 0U) : 0U)))));
        __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0[0U] 
            = __Vtemp145[0U];
        __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0[1U] 
            = __Vtemp145[1U];
        __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0[2U] 
            = __Vtemp145[2U];
        __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0[3U] 
            = __Vtemp145[3U];
        __Vdlyvset__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0 
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
        VL_EXTEND_WQ(128,64, __Vtemp152, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        VL_EXTEND_WQ(128,64, __Vtemp162, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        VL_EXTEND_WQ(128,64, __Vtemp176, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp188[0U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? 0U : __Vtemp152[0U])
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
                                                    __Vtemp162[0U])
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
                                            __Vtemp176[0U])
                                         : 0U) : 0U)))));
        __Vtemp188[1U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? 0U : __Vtemp152[1U])
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
                                                    __Vtemp162[1U])
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
                                            __Vtemp176[1U])
                                         : 0U) : 0U)))));
        __Vtemp188[2U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                     : __Vtemp152[2U])
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
                                                    __Vtemp162[2U])
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
                                             : __Vtemp176[2U])
                                         : 0U) : 0U)))));
        __Vtemp188[3U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                                >> 0x20U))
                                     : __Vtemp152[3U])
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
                                                    __Vtemp162[3U])
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
                                             : __Vtemp176[3U])
                                         : 0U) : 0U)))));
        __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0[0U] 
            = __Vtemp188[0U];
        __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0[1U] 
            = __Vtemp188[1U];
        __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0[2U] 
            = __Vtemp188[2U];
        __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0[3U] 
            = __Vtemp188[3U];
        __Vdlyvset__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0 
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
        VL_EXTEND_WQ(128,64, __Vtemp195, vlSelf->top__DOT__Dcache_u__DOT__storeData);
        VL_EXTEND_WQ(128,64, __Vtemp205, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        VL_EXTEND_WQ(128,64, __Vtemp219, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
        __Vtemp231[0U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? 0U : __Vtemp195[0U])
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
                                                    __Vtemp205[0U])
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
                                            __Vtemp219[0U])
                                         : 0U) : 0U)))));
        __Vtemp231[1U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? 0U : __Vtemp195[1U])
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
                                                    __Vtemp205[1U])
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
                                            __Vtemp219[1U])
                                         : 0U) : 0U)))));
        __Vtemp231[2U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                     : __Vtemp195[2U])
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
                                                    __Vtemp205[2U])
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
                                             : __Vtemp219[2U])
                                         : 0U) : 0U)))));
        __Vtemp231[3U] = ((((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                             ? vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U]
                             : ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 0x20U)))
                                 ? ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                   >> 3U)))
                                     ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                                >> 0x20U))
                                     : __Vtemp195[3U])
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
                                                    __Vtemp205[3U])
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
                                             : __Vtemp219[3U])
                                         : 0U) : 0U)))));
        __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0[0U] 
            = __Vtemp231[0U];
        __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0[1U] 
            = __Vtemp231[1U];
        __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0[2U] 
            = __Vtemp231[2U];
        __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0[3U] 
            = __Vtemp231[3U];
        __Vdlyvset__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0 
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
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en = __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__aw_en;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready 
        = __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_awready;
    if (__Vdlyvset__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0) {
        vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram[__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0[0U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram[__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0[1U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram[__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0[2U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram[__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0) {
        vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram[__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0[0U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram[__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0[1U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram[__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0[2U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram[__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0) {
        vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram[__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0[0U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram[__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0[1U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram[__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0[2U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram[__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0) {
        vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram[__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0[0U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram[__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0[1U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram[__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0[2U];
        vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram[__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0[3U];
    }
    if (((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
         & (IData)(vlSelf->top__DOT__DcacheWrValid))) {
        vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
            = vlSelf->top__DOT__DcacheWrAddr;
    }
    vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U];
    vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U];
    vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U];
    vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U];
    vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U];
    vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U];
    vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U];
    vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U];
    vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U];
    vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U];
    vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U];
    vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U];
    vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U];
    vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U];
    vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U];
    vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U] = 
        vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U];
    if (((0xaU == (0xfU & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                   >> 0x1cU)))) | (2U 
                                                   == 
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                               >> 0x18U)))))) {
        vlSelf->axi_aw_addr_o = 0ULL;
        vlSelf->axi_aw_id_o = 0U;
        vlSelf->axi_aw_burst_o = 0U;
        vlSelf->axi_aw_cache_o = 0U;
        vlSelf->axi_aw_size_o = 0U;
        vlSelf->axi_w_strb_o = 0U;
    } else {
        vlSelf->axi_aw_addr_o = vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg;
        vlSelf->axi_aw_id_o = 1U;
        vlSelf->axi_aw_burst_o = 1U;
        vlSelf->axi_aw_cache_o = 0xfU;
        vlSelf->axi_aw_size_o = (7U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg));
        vlSelf->axi_w_strb_o = (0xffU & (IData)(vlSelf->top__DOT__ls_axi_w_strb_o));
    }
    vlSelf->top__DOT__clint_axi_wstrb = ((2U == (0xffU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x18U))))
                                          ? (0xffU 
                                             & (IData)(vlSelf->top__DOT__ls_axi_w_strb_o))
                                          : 0U);
}

extern const VlUnpacked<CData/*7:0*/, 16> Vtop__ConstPool__TABLE_b95eb736_0;
extern const VlUnpacked<CData/*2:0*/, 16> Vtop__ConstPool__TABLE_0ca066a7_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__5\n"); );
    // Variables
    CData/*3:0*/ __Vtableidx3;
    VlWide<10>/*319:0*/ __Vtemp242;
    VlWide<3>/*95:0*/ __Vtemp245;
    VlWide<3>/*95:0*/ __Vtemp246;
    VlWide<3>/*95:0*/ __Vtemp247;
    VlWide<3>/*95:0*/ __Vtemp248;
    VlWide<3>/*95:0*/ __Vtemp249;
    VlWide<3>/*95:0*/ __Vtemp251;
    VlWide<3>/*95:0*/ __Vtemp253;
    VlWide<3>/*95:0*/ __Vtemp254;
    VlWide<3>/*95:0*/ __Vtemp255;
    VlWide<3>/*95:0*/ __Vtemp256;
    VlWide<3>/*95:0*/ __Vtemp257;
    // Body
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready 
        = ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
            ? (3U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
            : (3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state)));
    vlSelf->top__DOT__Dcache_u__DOT__cleanCnt = vlSelf->__Vdly__top__DOT__Dcache_u__DOT__cleanCnt;
    vlSelf->top__DOT__ls_axi_w_data_o = (((QData)((IData)(
                                                          vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[
                                                          (((IData)(0x3fU) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt) 
                                                                << 6U))) 
                                                           >> 5U)])) 
                                          << ((0U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt) 
                                                   << 6U)))
                                               ? 0x20U
                                               : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt) 
                                                      << 6U))))) 
                                         | (((0U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt) 
                                                  << 6U)))
                                              ? 0ULL
                                              : ((QData)((IData)(
                                                                 vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt) 
                                                                       << 6U))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt) 
                                                      << 6U))))) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg[
                                                               (6U 
                                                                & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt) 
                                                                   << 1U))])) 
                                               >> (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt) 
                                                      << 6U)))));
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
        = ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
            ? vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg
            : vlSelf->top__DOT__axi_ls_u__DOT__rdAddr_reg);
    __Vtableidx3 = ((((8U == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                       >> 5U))) & (3U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                       >> 0xfU)))) 
                     << 3U) | ((((8U == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 5U))) 
                                 & (2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 0xfU)))) 
                                << 2U) | ((((8U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 5U))) 
                                            & (1U == 
                                               (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xfU)))) 
                                           << 1U) | 
                                          ((8U == (0x1fU 
                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                      >> 5U))) 
                                           & (0U == 
                                              (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xfU)))))));
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask 
        = Vtop__ConstPool__TABLE_b95eb736_0[__Vtableidx3];
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size 
        = Vtop__ConstPool__TABLE_0ca066a7_0[__Vtableidx3];
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
    vlSelf->axi_w_data_o = (((0xaU == (0xfU & (IData)(
                                                      (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                       >> 0x1cU)))) 
                             | (2U == (0xffU & (IData)(
                                                       (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                        >> 0x18U)))))
                             ? 0ULL : vlSelf->top__DOT__ls_axi_w_data_o);
    vlSelf->top__DOT__clint_axi_wdata = ((2U == (0xffU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x18U))))
                                          ? vlSelf->top__DOT__ls_axi_w_data_o
                                          : 0ULL);
    if (((0xaU == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                   >> 0x1cU)))) | (2U 
                                                   == 
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                               >> 0x18U)))))) {
        vlSelf->axi_ar_addr_o = 0ULL;
        vlSelf->axi_ar_burst_o = 0U;
        vlSelf->axi_ar_cache_o = 0U;
        vlSelf->axi_ar_valid_o = 0U;
        vlSelf->axi_ar_id_o = 0U;
        vlSelf->axi_r_ready_o = 0U;
    } else {
        vlSelf->axi_ar_addr_o = vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr;
        vlSelf->axi_ar_burst_o = 1U;
        vlSelf->axi_ar_cache_o = 2U;
        vlSelf->axi_ar_valid_o = (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
        vlSelf->axi_ar_id_o = ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                ? 0U : 1U);
        vlSelf->axi_r_ready_o = (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
    }
    vlSelf->top__DOT__axi_mmio_ar_valid_o = (((0xaU 
                                               != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x1cU)))) 
                                              | (2U 
                                                 == 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x18U)))))
                                              ? 0U : 
                                             (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid)));
    vlSelf->top__DOT__clint_axi_arvalid = ((2U == (0xffU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x18U))))
                                            ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid))
                                            : 0U);
    vlSelf->axi_ar_region_o = (((0xaU == (0xfU & (IData)(
                                                         (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                          >> 0x1cU)))) 
                                | (2U == (0xffU & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U)))))
                                ? 0U : (0xfU & ((0U 
                                                 != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                                 ? (IData)(vlSelf->top__DOT__if_axi_ar_region_o)
                                                 : (IData)(vlSelf->top__DOT__ls_axi_ar_region_o))));
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
    vlSelf->top__DOT__axi_ls_u__DOT__w_state = ((IData)(vlSelf->rst_n)
                                                 ? (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state_next)
                                                 : 0U);
    vlSelf->top__DOT__cache_dut__DOT__rdCnt = vlSelf->__Vdly__top__DOT__cache_dut__DOT__rdCnt;
    vlSelf->top__DOT__Dcache_u__DOT__rdCnt = vlSelf->__Vdly__top__DOT__Dcache_u__DOT__rdCnt;
    vlSelf->top__DOT__cache_dut__DOT__cacheCurState 
        = ((IData)(vlSelf->rst_n) ? (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheNexState)
            : 0U);
    vlSelf->pc_diff = (((QData)((IData)(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                        << 0x3fU) | (((QData)((IData)(
                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                      << 0x1fU) | ((QData)((IData)(
                                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                                   >> 1U)));
    vlSelf->instr_diff = ((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                           << 0x1fU) | (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                        >> 1U));
    vlSelf->top__DOT__wb_data = ((0x80U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                  ? ((0x40U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                      ? ((0x20U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                          ? ((0x10U 
                                              & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                              ? 0ULL
                                              : ((8U 
                                                  & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                                  ? 0ULL
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))))
                                          : ((0x10U 
                                              & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                              ? ((8U 
                                                  & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                                   << 0x3fU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                      << 0x1fU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                        >> 1U)))
                                                  : 0ULL)
                                              : (((QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                                  << 0x3fU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                     << 0x1fU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                       >> 1U)))))
                                      : 0ULL) : ((0x40U 
                                                  & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                                  ? 
                                                 ((0x20U 
                                                   & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                                   ? 
                                                  ((0x10U 
                                                    & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                                     ? 0ULL
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                                      << 0x3fU) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                         << 0x1fU) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                           >> 1U))))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                                     << 0x3fU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                        << 0x1fU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                          >> 1U))))
                                                   : 
                                                  ((0x10U 
                                                    & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                                    ? 0ULL
                                                    : 
                                                   ((8U 
                                                     & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                                     ? 0ULL
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      << 0x3fU) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                         << 0x1fU) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                           >> 1U))))))
                                                  : 
                                                 ((0x20U 
                                                   & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                                   ? 
                                                  ((0x10U 
                                                    & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                                     ? 0ULL
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                                      << 0x3fU) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                         << 0x1fU) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                           >> 1U))))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                                     << 0x3fU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                                        << 0x1fU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                          >> 1U))))
                                                   : 
                                                  ((0x10U 
                                                    & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                                    ? 0ULL
                                                    : 
                                                   ((8U 
                                                     & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])
                                                     ? 0ULL
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                      << 0x3fU) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                         << 0x1fU) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                           >> 1U))))))));
    vlSelf->top__DOT__ls_u__DOT__csr_wr_data = ((((3U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                       >> 1U))) 
                                                  & ((0x73U 
                                                      == 
                                                      (0x7fU 
                                                       & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                          >> 3U))) 
                                                     & (((1U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                              >> 0xfU))) 
                                                         | (3U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                >> 0xfU)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                               >> 0xfU)))))) 
                                                 & ((0x1fU 
                                                     & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                        >> 8U)) 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                        >> 0x12U))))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                  << 0x3fU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                     << 0x1fU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                       >> 1U)))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                  << 0x3dU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                     << 0x1dU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                       >> 3U))));
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
    if (((0xaU == (0xfU & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                   >> 0x1cU)))) | (2U 
                                                   == 
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                               >> 0x18U)))))) {
        vlSelf->axi_aw_valid_o = 0U;
        vlSelf->axi_w_valid_o = 0U;
        vlSelf->axi_b_ready_o = 0U;
    } else {
        vlSelf->axi_aw_valid_o = (IData)((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)));
        vlSelf->axi_w_valid_o = (IData)((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)));
        vlSelf->axi_b_ready_o = (IData)((2U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)));
    }
    if (((0xaU != (0xfU & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                   >> 0x1cU)))) | (2U 
                                                   == 
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                               >> 0x18U)))))) {
        vlSelf->top__DOT__axi_mmio_aw_valid_o = 0U;
        vlSelf->top__DOT__axi_mmio_w_valid_o = 0U;
        vlSelf->top__DOT__axi_mmio_b_ready_o = 0U;
    } else {
        vlSelf->top__DOT__axi_mmio_aw_valid_o = (IData)(
                                                        (1U 
                                                         == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)));
        vlSelf->top__DOT__axi_mmio_w_valid_o = (IData)(
                                                       (3U 
                                                        == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)));
        vlSelf->top__DOT__axi_mmio_b_ready_o = (IData)(
                                                       (2U 
                                                        == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)));
    }
    if ((2U == (0xffU & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                 >> 0x18U))))) {
        vlSelf->top__DOT__clint_axi_awvalid = (IData)(
                                                      (1U 
                                                       == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)));
        vlSelf->top__DOT__clint_axi_bready = (IData)(
                                                     (2U 
                                                      == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)));
    } else {
        vlSelf->top__DOT__clint_axi_awvalid = 0U;
        vlSelf->top__DOT__clint_axi_bready = 0U;
    }
    vlSelf->top__DOT__axi_ls_u__DOT__wrLast = ((3U 
                                                == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
                                               & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt) 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__storeLenth_reg))));
    vlSelf->top__DOT__clint_axi_wvalid = ((2U == (0xffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x18U))))
                                           ? (IData)(
                                                     (3U 
                                                      == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)))
                                           : 0U);
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data 
        = ((((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrw))) 
             & vlSelf->top__DOT__ls_u__DOT__csr_wr_data) 
            | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrs))) 
               & (vlSelf->top__DOT__ls_u__DOT__csr_wr_data 
                  | vlSelf->top__DOT__csrdata_ls))) 
           | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrc))) 
              & ((~ vlSelf->top__DOT__ls_u__DOT__csr_wr_data) 
                 & vlSelf->top__DOT__csrdata_ls)));
    vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i 
        = ((8U == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                            >> 5U))) | (3U == (0x7fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 3U))));
    vlSelf->axi_w_last_o = (((0xaU == (0xfU & (IData)(
                                                      (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                       >> 0x1cU)))) 
                             | (2U == (0xffU & (IData)(
                                                       (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                        >> 0x18U)))))
                             ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrLast)));
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__slv_reg_wren 
        = ((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready) 
           & (IData)(vlSelf->top__DOT__clint_axi_wvalid));
    vlSelf->top__DOT__rw_valid_i = ((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                    & (0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state)));
    vlSelf->top__DOT__Dcache_u__DOT__wrLow = (IData)(
                                                     (0x100000000ULL 
                                                      == 
                                                      (0x100000010ULL 
                                                       & vlSelf->top__DOT__Dcache_u__DOT__reqLatch)));
    vlSelf->top__DOT__Dcache_u__DOT__wrHigh = (IData)(
                                                      (0x100000010ULL 
                                                       == 
                                                       (0x100000010ULL 
                                                        & vlSelf->top__DOT__Dcache_u__DOT__reqLatch)));
    vlSelf->top__DOT__Dcache_u__DOT__storeData = ((
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                         >> 3U))) 
                                                    & ((0x1fU 
                                                        & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                           >> 0x17U)) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                           >> 8U))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                     << 0x3fU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                        << 0x1fU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                          >> 1U)))
                                                    : 
                                                   ((((0x73U 
                                                       == 
                                                       (0x7fU 
                                                        & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                           >> 1U))) 
                                                      & (((1U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                               >> 0xdU))) 
                                                          | (3U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                                 >> 0xdU)))) 
                                                         | (2U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                                >> 0xdU))))) 
                                                     & ((0x1fU 
                                                         & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                            >> 0x17U)) 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                            >> 8U))))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                                      << 0x3dU) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                         << 0x1dU) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                           >> 3U))))) 
                                                  << 
                                                  (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch) 
                                                      << 3U)));
    vlSelf->top__DOT__Dcache_u__DOT__way2Hit = ((1U 
                                                 & ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fffffU 
                                                                 & (vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                                                    [
                                                                    (0x3fU 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                                >> 5U)))] 
                                                                    ^ (IData)(
                                                                              (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                               >> 0xbU))))))) 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                               >> 
                                                               (0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                           >> 5U)))))))
                                                 ? 1U
                                                 : 0U);
    vlSelf->top__DOT__Dcache_u__DOT__way1Hit = ((1U 
                                                 & ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fffffU 
                                                                 & (vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                                                    [
                                                                    (0x3fU 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                                >> 5U)))] 
                                                                    ^ (IData)(
                                                                              (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                               >> 0xbU))))))) 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                               >> 
                                                               (0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                           >> 5U)))))))
                                                 ? 1U
                                                 : 0U);
    vlSelf->top__DOT__Dcache_u__DOT__storeMask = (0xffU 
                                                  & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))));
    vlSelf->top__DOT__Dcache_u__DOT__cacheCurState 
        = ((IData)(vlSelf->rst_n) ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheNexState)
            : 0U);
    if (vlSelf->rst_n) {
        if ((1U & (~ (((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                       | (IData)(vlSelf->top__DOT__dataNotOk)) 
                      | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))))) {
            __Vtemp242[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
                = __Vtemp242[0U];
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
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimeWrEn 
        = ((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__slv_reg_wren) 
           & ((0x4000U != (0xffffU & (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr))) 
              & (0xbff8U == (0xffffU & (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr)))));
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmpWrEn 
        = ((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__slv_reg_wren) 
           & (0x4000U == (0xffffU & (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr))));
    vlSelf->top__DOT__Dcache_u__DOT__cacheHit = ((IData)(vlSelf->top__DOT__Dcache_u__DOT__way1Hit) 
                                                 | (IData)(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
    vlSelf->top__DOT__Dcache_u__DOT__sramMask = ((0xffffffffffff0000ULL 
                                                  & vlSelf->top__DOT__Dcache_u__DOT__sramMask) 
                                                 | (IData)((IData)(
                                                                   ((0xff00U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask) 
                                                                                >> 1U)))) 
                                                                        << 8U)) 
                                                                    | (0xffU 
                                                                       & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask)))))))));
    vlSelf->top__DOT__Dcache_u__DOT__sramMask = ((0xffffffff0000ffffULL 
                                                  & vlSelf->top__DOT__Dcache_u__DOT__sramMask) 
                                                 | ((QData)((IData)(
                                                                    ((0xff00U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask) 
                                                                                >> 3U)))) 
                                                                         << 8U)) 
                                                                     | (0xffU 
                                                                        & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask) 
                                                                                >> 2U)))))))) 
                                                    << 0x10U));
    vlSelf->top__DOT__Dcache_u__DOT__sramMask = ((0xffff0000ffffffffULL 
                                                  & vlSelf->top__DOT__Dcache_u__DOT__sramMask) 
                                                 | ((QData)((IData)(
                                                                    ((0xff00U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask) 
                                                                                >> 5U)))) 
                                                                         << 8U)) 
                                                                     | (0xffU 
                                                                        & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask) 
                                                                                >> 4U)))))))) 
                                                    << 0x20U));
    vlSelf->top__DOT__Dcache_u__DOT__sramMask = ((0xffffffffffffULL 
                                                  & vlSelf->top__DOT__Dcache_u__DOT__sramMask) 
                                                 | ((QData)((IData)(
                                                                    ((0xff00U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask) 
                                                                                >> 7U)))) 
                                                                         << 8U)) 
                                                                     | (0xffU 
                                                                        & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask) 
                                                                                >> 6U)))))))) 
                                                    << 0x30U));
    vlSelf->top__DOT__DcacheRdAddr = ((0xffffffff00000000ULL 
                                       & vlSelf->top__DOT__DcacheRdAddr) 
                                      | (IData)((IData)(
                                                        ((6U 
                                                          == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                          ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)
                                                          : 
                                                         (((IData)(
                                                                   (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                    >> 0xbU)) 
                                                           << 0xbU) 
                                                          | (0x7e0U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                         >> 5U)) 
                                                                << 5U)))))));
    vlSelf->axi_aw_len_o = (((0xaU == (0xfU & (IData)(
                                                      (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                       >> 0x1cU)))) 
                             | (2U == (0xffU & (IData)(
                                                       (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                        >> 0x18U)))))
                             ? 0U : ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                      ? 0U : 3U));
    vlSelf->top__DOT__DcacheWrAddr = ((0xffffffff00000000ULL 
                                       & vlSelf->top__DOT__DcacheWrAddr) 
                                      | (IData)((IData)(
                                                        ((4U 
                                                          == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                          ? 
                                                         ((4U 
                                                           == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                           ? 
                                                          ((0x40U 
                                                            & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                                                            ? 
                                                           ((((IData)(
                                                                      (vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                                       >> 
                                                                       (0x3fU 
                                                                        & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt)))) 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))))) 
                                                             & (IData)(vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay))
                                                             ? 
                                                            ((vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                                              [
                                                              (0x3fU 
                                                               & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))] 
                                                              << 0xbU) 
                                                             | (0x7e0U 
                                                                & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt) 
                                                                   << 5U)))
                                                             : 0U)
                                                            : 
                                                           ((((IData)(
                                                                      (vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                                       >> 
                                                                       (0x3fU 
                                                                        & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt)))) 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))))) 
                                                             & (IData)(vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay))
                                                             ? 
                                                            ((vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                                              [
                                                              (0x3fU 
                                                               & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))] 
                                                              << 0xbU) 
                                                             | (0x7e0U 
                                                                & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt) 
                                                                   << 5U)))
                                                             : 0U))
                                                           : 0U)
                                                          : 
                                                         ((6U 
                                                           == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                           ? 
                                                          ((IData)(
                                                                   (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                    >> 3U)) 
                                                           << 3U)
                                                           : 
                                                          ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                                            ? 
                                                           ((vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                                             [
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                         >> 5U)))] 
                                                             << 0xbU) 
                                                            | (0x7e0U 
                                                               & ((IData)(
                                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                           >> 5U)) 
                                                                  << 5U)))
                                                            : 
                                                           ((vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                                             [
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                         >> 5U)))] 
                                                             << 0xbU) 
                                                            | (0x7e0U 
                                                               & ((IData)(
                                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                           >> 5U)) 
                                                                  << 5U)))))))));
    if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
        vlSelf->top__DOT__Dcache_u__DOT__wenWay2 = vlSelf->top__DOT__Dcache_u__DOT__randomBit;
        vlSelf->top__DOT__Dcache_u__DOT__wenWay1 = 
            (1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)));
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__wenWay2 = 
            ((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
               & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)) 
              & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                         >> 0x20U))) & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__way1Hit)));
        vlSelf->top__DOT__Dcache_u__DOT__wenWay1 = 
            (1U & ((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                     & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)) 
                    & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                               >> 0x20U))) & (IData)(vlSelf->top__DOT__Dcache_u__DOT__way1Hit)));
    }
    vlSelf->top__DOT__DcacheRdValid = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                        ? (((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                            & (~ (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 0x20U)))) 
                                           & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk)))
                                        : ((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                           & (0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
    vlSelf->top__DOT__Dcache_u__DOT__uncached = (((1U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                  & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i)) 
                                                 & (8U 
                                                    != 
                                                    (0xfU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 0x1cU)))));
    vlSelf->top__DOT__Dcache_u__DOT__cleanWrValid = 
        ((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
         & ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
             ? (((IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                          >> (0x3fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt)))) 
                 & (IData)((vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                            >> (0x3fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))))) 
                & (IData)(vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay))
             : (((IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                          >> (0x3fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt)))) 
                 & (IData)((vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                            >> (0x3fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))))) 
                & (IData)(vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay))));
    if (vlSelf->rst_n) {
        if ((1U & (~ ((((IData)(vlSelf->top__DOT__ld_use_hazard) 
                        | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                       | (IData)(vlSelf->top__DOT__dataNotOk)) 
                      | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))))) {
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
    vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i 
        = ((3U == (0x7fU & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                             << 4U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                       >> 0x1cU)))) 
           | (8U == (0x1fU & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                               << 2U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                         >> 0x1eU)))));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin 
        = (1U & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                  >> 0x18U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                               >> 0x1aU)));
    vlSelf->top__DOT__rs2_sel = ((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                    >> 2U) & ((0x1fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xaU)) 
                                              == (0x1fU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                     >> 6U)))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 0xaU))))
                                  ? 1U : (((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                            & ((0x1fU 
                                                & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 6U)))) 
                                           & (0U != 
                                              (0x1fU 
                                               & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                  >> 8U))))
                                           ? 2U : (
                                                   (((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                                     & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                            >> 6U)))) 
                                                    & (0U 
                                                       != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))
                                                    ? 3U
                                                    : 0U)));
    vlSelf->top__DOT__rs1_sel = ((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                    >> 2U) & ((0x1fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 0xaU)) 
                                              == (0x1fU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                     >> 0xbU)))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 0xaU))))
                                  ? 1U : (((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                            & ((0x1fU 
                                                & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xbU)))) 
                                           & (0U != 
                                              (0x1fU 
                                               & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                  >> 8U))))
                                           ? 2U : (
                                                   (((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                                     & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                            >> 0xbU)))) 
                                                    & (0U 
                                                       != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))
                                                    ? 3U
                                                    : 0U)));
    vlSelf->top__DOT__Dcache_u__DOT__clean_OK = ((0x7fU 
                                                  == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt)) 
                                                 & (((IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanWrValid) 
                                                     & (0U 
                                                        == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))) 
                                                    | (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanWrValid))));
    vlSelf->top__DOT__DcacheWrValid = ((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                        ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanWrValid)
                                        : (IData)(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
    vlSelf->top__DOT__ex_stage_u__DOT__rs2 = ((2U & (IData)(vlSelf->top__DOT__rs2_sel))
                                               ? ((1U 
                                                   & (IData)(vlSelf->top__DOT__rs2_sel))
                                                   ? vlSelf->top__DOT__forwarding_u__DOT__rd_wb
                                                   : vlSelf->top__DOT__wb_data)
                                               : ((1U 
                                                   & (IData)(vlSelf->top__DOT__rs2_sel))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                    << 0x3dU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                       << 0x1dU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                         >> 3U)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                       << 4U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                         >> 0x1cU)))));
    vlSelf->top__DOT__ex_stage_u__DOT__rs1 = ((2U & (IData)(vlSelf->top__DOT__rs1_sel))
                                               ? ((1U 
                                                   & (IData)(vlSelf->top__DOT__rs1_sel))
                                                   ? vlSelf->top__DOT__forwarding_u__DOT__rd_wb
                                                   : vlSelf->top__DOT__wb_data)
                                               : ((1U 
                                                   & (IData)(vlSelf->top__DOT__rs1_sel))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                    << 0x3dU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                       << 0x1dU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                         >> 3U)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                       << 4U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                         >> 0x1cU)))));
    vlSelf->pc_decoding = (((QData)((IData)(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])));
    vlSelf->top__DOT__DivSel_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                    if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                        vlSelf->top__DOT__DivSel_id = 0U;
                    }
                } else {
                    vlSelf->top__DOT__DivSel_id = 0U;
                }
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 2U)))) {
                    vlSelf->top__DOT__DivSel_id = (7U 
                                                   & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                      >> 0xcU));
                }
            } else {
                vlSelf->top__DOT__DivSel_id = ((4U 
                                                & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                ? 0U
                                                : (7U 
                                                   & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                      >> 0xcU)));
            }
        } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__DivSel_id = 0U;
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__DivSel_id = 0U;
            }
        } else {
            vlSelf->top__DOT__DivSel_id = 0U;
        }
    } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                      >> 2U)))) {
            vlSelf->top__DOT__DivSel_id = 0U;
        }
    }
    vlSelf->top__DOT__DivEn_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                    if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                        vlSelf->top__DOT__DivEn_id = 0U;
                    }
                } else {
                    vlSelf->top__DOT__DivEn_id = 0U;
                }
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 2U)))) {
                    vlSelf->top__DOT__DivEn_id = (1U 
                                                  & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                     >> 0x19U));
                }
            } else {
                vlSelf->top__DOT__DivEn_id = (1U & 
                                              ((~ (
                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                   >> 2U)) 
                                               & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                  >> 0x19U)));
            }
        } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__DivEn_id = 0U;
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__DivEn_id = 0U;
            }
        } else {
            vlSelf->top__DOT__DivEn_id = 0U;
        }
    } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                      >> 2U)))) {
            vlSelf->top__DOT__DivEn_id = 0U;
        }
    }
    vlSelf->top__DOT__is_jalr_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 3U)))) {
                    if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                        vlSelf->top__DOT__is_jalr_id = 1U;
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__src2sel_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                  >> 2U)))) {
                        vlSelf->top__DOT__src2sel_id = 2U;
                        if ((0x4000U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                            if ((0x2000U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                                vlSelf->top__DOT__src2sel_id = 1U;
                            } else if ((0x1000U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                                vlSelf->top__DOT__src2sel_id = 1U;
                            }
                        }
                    }
                }
            } else if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                    vlSelf->top__DOT__src2sel_id = 3U;
                }
            } else {
                vlSelf->top__DOT__src2sel_id = ((4U 
                                                 & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                 ? 3U
                                                 : 0U);
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 2U)))) {
                    vlSelf->top__DOT__src2sel_id = 0U;
                }
            } else {
                vlSelf->top__DOT__src2sel_id = ((4U 
                                                 & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                 ? 1U
                                                 : 0U);
            }
        } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__src2sel_id = 1U;
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__src2sel_id = 1U;
            }
        } else {
            vlSelf->top__DOT__src2sel_id = 1U;
        }
    } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                      >> 2U)))) {
            vlSelf->top__DOT__src2sel_id = 1U;
        }
    }
    vlSelf->top__DOT__src1sel_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                  >> 2U)))) {
                        vlSelf->top__DOT__src1sel_id = 0U;
                    }
                }
            } else if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                    vlSelf->top__DOT__src1sel_id = 1U;
                }
            } else {
                vlSelf->top__DOT__src1sel_id = (1U 
                                                & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                   >> 2U));
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 2U)))) {
                    vlSelf->top__DOT__src1sel_id = 0U;
                }
            } else {
                vlSelf->top__DOT__src1sel_id = 0U;
            }
        } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__src1sel_id = 0U;
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__src1sel_id = 0U;
            }
        } else {
            vlSelf->top__DOT__src1sel_id = (1U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                  >> 2U));
        }
    } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                      >> 2U)))) {
            vlSelf->top__DOT__src1sel_id = 0U;
        }
    }
    vlSelf->top__DOT__aluctr_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                  >> 2U)))) {
                        vlSelf->top__DOT__aluctr_id = 0U;
                        if ((0x4000U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                            if ((0x2000U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                                vlSelf->top__DOT__aluctr_id = 3U;
                            } else if ((0x1000U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                                vlSelf->top__DOT__aluctr_id = 3U;
                            }
                        }
                    }
                }
            } else if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                    vlSelf->top__DOT__aluctr_id = 0U;
                }
            } else if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                vlSelf->top__DOT__aluctr_id = 0U;
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 2U)))) {
                    vlSelf->top__DOT__aluctr_id = (
                                                   (0x4000U 
                                                    & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                      ? 7U
                                                      : 6U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                      ? 
                                                     ((0x40000000U 
                                                       & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                       ? 
                                                      ((8U 
                                                        & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                        ? 0x1dU
                                                        : 0xdU)
                                                       : 
                                                      ((8U 
                                                        & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                        ? 0x15U
                                                        : 5U))
                                                      : 4U))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                      ? 0xaU
                                                      : 2U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                      ? 
                                                     ((8U 
                                                       & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                       ? 0x11U
                                                       : 1U)
                                                      : 
                                                     ((0x40000000U 
                                                       & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                       ? 
                                                      ((8U 
                                                        & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                        ? 0x18U
                                                        : 8U)
                                                       : 
                                                      ((8U 
                                                        & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                        ? 0x10U
                                                        : 0U)))));
                }
            } else {
                vlSelf->top__DOT__aluctr_id = ((4U 
                                                & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                ? 3U
                                                : (
                                                   (0x4000U 
                                                    & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                      ? 7U
                                                      : 6U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                      ? 
                                                     ((0x40000000U 
                                                       & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                       ? 
                                                      ((8U 
                                                        & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                        ? 0x1dU
                                                        : 0xdU)
                                                       : 
                                                      ((8U 
                                                        & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                        ? 0x15U
                                                        : 5U))
                                                      : 4U))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                      ? 0xaU
                                                      : 2U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                      ? 
                                                     ((8U 
                                                       & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                       ? 0x11U
                                                       : 1U)
                                                      : 
                                                     ((0x40000000U 
                                                       & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                       ? 
                                                      ((8U 
                                                        & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                        ? 0x18U
                                                        : 8U)
                                                       : 
                                                      ((8U 
                                                        & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                        ? 0x10U
                                                        : 0U))))));
            }
        } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__aluctr_id = 0U;
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__aluctr_id = ((0x4000U 
                                                & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                ? (
                                                   (0x2000U 
                                                    & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                     ? 7U
                                                     : 6U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                     ? 
                                                    ((0x40000000U 
                                                      & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                      ? 
                                                     ((8U 
                                                       & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                       ? 0x1dU
                                                       : 0xdU)
                                                      : 
                                                     ((8U 
                                                       & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                       ? 0x15U
                                                       : 5U))
                                                     : 4U))
                                                : (
                                                   (0x2000U 
                                                    & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                     ? 0xaU
                                                     : 2U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                     ? 
                                                    ((8U 
                                                      & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                      ? 0x11U
                                                      : 1U)
                                                     : 
                                                    ((8U 
                                                      & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                      ? 0x10U
                                                      : 0U))));
            }
        } else {
            vlSelf->top__DOT__aluctr_id = ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                            ? 0U : 
                                           ((0x4000U 
                                             & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                             ? ((0x2000U 
                                                 & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                 ? 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                  ? 7U
                                                  : 6U)
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                  ? 
                                                 ((0x40000000U 
                                                   & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                    ? 0x1dU
                                                    : 0xdU)
                                                   : 
                                                  ((8U 
                                                    & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                    ? 0x15U
                                                    : 5U))
                                                  : 4U))
                                             : ((0x2000U 
                                                 & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                 ? 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                  ? 0xaU
                                                  : 2U)
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                  ? 
                                                 ((8U 
                                                   & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                   ? 0x11U
                                                   : 1U)
                                                  : 
                                                 ((8U 
                                                   & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                   ? 0x10U
                                                   : 0U)))));
        }
    } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                      >> 2U)))) {
            vlSelf->top__DOT__aluctr_id = 0U;
        }
    }
    vlSelf->top__DOT__is_jal_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                    if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                        vlSelf->top__DOT__is_jal_id = 1U;
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__is_brc_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                  >> 2U)))) {
                        vlSelf->top__DOT__is_brc_id = 1U;
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__wben_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                  >> 2U)))) {
                        if ((0x4000U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                            if ((0x2000U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                                vlSelf->top__DOT__wben_id = 1U;
                            } else if ((0x1000U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                                vlSelf->top__DOT__wben_id = 1U;
                            }
                        } else {
                            vlSelf->top__DOT__wben_id 
                                = (1U & ((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                          >> 0xdU) 
                                         | (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                            >> 0xcU)));
                        }
                    }
                }
            } else if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                    vlSelf->top__DOT__wben_id = 1U;
                }
            } else {
                vlSelf->top__DOT__wben_id = (1U & (
                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                   >> 2U));
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 2U)))) {
                    vlSelf->top__DOT__wben_id = 1U;
                }
            } else {
                vlSelf->top__DOT__wben_id = 1U;
            }
        } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__wben_id = 0U;
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__wben_id = 1U;
            }
        } else {
            vlSelf->top__DOT__wben_id = 1U;
        }
    } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                      >> 2U)))) {
            vlSelf->top__DOT__wben_id = (0U != (3U 
                                                & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]));
        }
    }
    vlSelf->top__DOT__rs1_idx_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                  >> 2U)))) {
                        vlSelf->top__DOT__rs1_idx_id 
                            = (0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 0xfU));
                    }
                }
            } else if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                    vlSelf->top__DOT__rs1_idx_id = 0U;
                }
            } else {
                vlSelf->top__DOT__rs1_idx_id = (0x1fU 
                                                & ((4U 
                                                    & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                    ? 
                                                   ((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                     << 0x11U) 
                                                    | (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                       >> 0xfU))
                                                    : 
                                                   ((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                     << 0x11U) 
                                                    | (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                       >> 0xfU))));
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 2U)))) {
                    vlSelf->top__DOT__rs1_idx_id = 
                        (0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                  >> 0xfU));
                }
            } else {
                vlSelf->top__DOT__rs1_idx_id = ((4U 
                                                 & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                 ? 0U
                                                 : 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                    >> 0xfU)));
            }
        } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__rs1_idx_id = (0x1fU 
                                                & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                   >> 0xfU));
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__rs1_idx_id = (0x1fU 
                                                & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                   >> 0xfU));
            }
        } else {
            vlSelf->top__DOT__rs1_idx_id = ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                             ? 0U : 
                                            (0x1fU 
                                             & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                >> 0xfU)));
        }
    } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                      >> 2U)))) {
            vlSelf->top__DOT__rs1_idx_id = (0x1fU & 
                                            (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                             >> 0xfU));
        }
    }
    vlSelf->top__DOT__rs2_idx_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                  >> 2U)))) {
                        vlSelf->top__DOT__rs2_idx_id = 0U;
                    }
                }
            } else if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                    vlSelf->top__DOT__rs2_idx_id = 0U;
                }
            } else {
                vlSelf->top__DOT__rs2_idx_id = ((4U 
                                                 & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                 ? 0U
                                                 : 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                    >> 0x14U)));
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 2U)))) {
                    vlSelf->top__DOT__rs2_idx_id = 
                        (0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                  >> 0x14U));
                }
            } else {
                vlSelf->top__DOT__rs2_idx_id = ((4U 
                                                 & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                 ? 0U
                                                 : 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                    >> 0x14U)));
            }
        } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__rs2_idx_id = (0x1fU 
                                                & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                   >> 0x14U));
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__rs2_idx_id = 0U;
            }
        } else {
            vlSelf->top__DOT__rs2_idx_id = 0U;
        }
    } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                      >> 2U)))) {
            vlSelf->top__DOT__rs2_idx_id = 0U;
        }
    }
    vlSelf->top__DOT__trap_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                  >> 2U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                      >> 0xeU)))) {
                            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                          >> 0xdU)))) {
                                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 0xcU)))) {
                                    vlSelf->top__DOT__trap_id = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__ID_u__DOT__ext_op = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                  >> 2U)))) {
                        if ((0x4000U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                            if ((0x2000U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                                vlSelf->top__DOT__ID_u__DOT__ext_op = 0x11U;
                            } else if ((0x1000U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                                vlSelf->top__DOT__ID_u__DOT__ext_op = 0x11U;
                            }
                        }
                    }
                }
            } else if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                    vlSelf->top__DOT__ID_u__DOT__ext_op = 8U;
                }
            } else {
                vlSelf->top__DOT__ID_u__DOT__ext_op 
                    = ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                        ? 1U : 0x10U);
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 3U)))) {
                if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                    vlSelf->top__DOT__ID_u__DOT__ext_op = 2U;
                }
            }
        } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__ID_u__DOT__ext_op = 4U;
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 2U)))) {
                vlSelf->top__DOT__ID_u__DOT__ext_op = 1U;
            }
        } else {
            vlSelf->top__DOT__ID_u__DOT__ext_op = (
                                                   (4U 
                                                    & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                    ? 2U
                                                    : 1U);
        }
    } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                      >> 2U)))) {
            vlSelf->top__DOT__ID_u__DOT__ext_op = 1U;
        }
    }
    vlSelf->top__DOT__ld_use_hazard = ((((3U == (0x7fU 
                                                 & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                     << 4U) 
                                                    | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                       >> 0x1cU)))) 
                                         & ((((((0x19U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                     >> 2U))) 
                                                | (0x18U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                       >> 2U)))) 
                                               | (4U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                      >> 2U)))) 
                                              | (6U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                     >> 2U)))) 
                                             | (0xcU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                    >> 2U)))) 
                                            | (0xeU 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                      >> 2U))))) 
                                        & (((0x1fU 
                                             & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                >> 3U)) 
                                            == (0x1fU 
                                                & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                   >> 0xfU))) 
                                           | ((0x1fU 
                                               & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                  >> 3U)) 
                                              == (0x1fU 
                                                  & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                     >> 0x14U))))) 
                                       | (((3U == (0x7fU 
                                                   & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                       << 4U) 
                                                      | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                         >> 0x1cU)))) 
                                           & ((3U == 
                                               (0x7fU 
                                                & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                              | (8U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                     >> 2U))))) 
                                          & ((0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 >> 3U)) 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                    >> 0xfU)))));
    vlSelf->top__DOT__fence_id = 0U;
    if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                  >> 6U)))) {
        if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                      >> 5U)))) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                    if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                        vlSelf->top__DOT__fence_id 
                            = (1U == (7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                            >> 0xcU)));
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__out_trap_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                  >> 2U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                      >> 0xeU)))) {
                            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                          >> 0xdU)))) {
                                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 0xcU)))) {
                                    if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                  >> 0x14U)))) {
                                        if ((0x200000U 
                                             & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                                            vlSelf->top__DOT__out_trap_id = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__in_trap_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                  >> 2U)))) {
                        if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                      >> 0xeU)))) {
                            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                          >> 0xdU)))) {
                                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 0xcU)))) {
                                    if ((0x100000U 
                                         & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                                        vlSelf->top__DOT__in_trap_id = 0U;
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                    >> 0x15U)))) {
                                        vlSelf->top__DOT__in_trap_id = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__if_stall_n) {
            vlSelf->top__DOT__pc_new = vlSelf->top__DOT__IF_u__DOT__pc_next_o;
        }
    } else {
        vlSelf->top__DOT__pc_new = 0x7ffffffcULL;
    }
    vlSelf->top__DOT__ex_stage_u__DOT__src2 = ((0x40000U 
                                                & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                                ? (
                                                   (0x20000U 
                                                    & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                                    ? 4ULL
                                                    : 0ULL)
                                                : (
                                                   (0x20000U 
                                                    & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                          >> 0x1cU)))
                                                    : vlSelf->top__DOT__ex_stage_u__DOT__rs2));
    __Vtemp245[0U] = 1U;
    __Vtemp245[1U] = 0U;
    __Vtemp245[2U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp246, vlSelf->top__DOT__ex_stage_u__DOT__rs1);
    VL_EXTEND_WQ(65,64, __Vtemp247, (~ vlSelf->top__DOT__ex_stage_u__DOT__rs2));
    VL_ADD_W(3, __Vtemp248, __Vtemp246, __Vtemp247);
    VL_ADD_W(3, __Vtemp249, __Vtemp245, __Vtemp248);
    vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry 
        = (1U & __Vtemp249[2U]);
    vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres 
        = (1ULL + (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                   + (~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)));
    vlSelf->top__DOT__ex_stage_u__DOT__src1 = ((0x80000U 
                                                & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                       << 4U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                         >> 0x1cU)))
                                                : vlSelf->top__DOT__ex_stage_u__DOT__rs1);
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
                                                   ? (QData)((IData)(
                                                                     (0x1fU 
                                                                      & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                                         >> 0xfU))))
                                                   : 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0x800U 
                                                                       & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                                          << 4U)) 
                                                                      | ((0x7e0U 
                                                                          & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                                             >> 0x14U)) 
                                                                         | (0x1eU 
                                                                            & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
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
                                                                       (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                                        >> 0x1fU)))) 
                                                    << 0x14U) 
                                                   | (QData)((IData)(
                                                                     ((0xff000U 
                                                                       & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                                                                      | ((0x800U 
                                                                          & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                                             >> 9U)) 
                                                                         | (0x7feU 
                                                                            & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
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
                                                                       (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0xfe0U 
                                                                       & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                                          >> 0x14U)) 
                                                                      | (0x1fU 
                                                                         & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
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
                                                                               (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (0xfffff000U 
                                                                      & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__ID_u__DOT__ext_op))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                                      >> 0x14U))))
                                                   : 0ULL)))));
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
        = ((0x2000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
    vlSelf->top__DOT__cache_dut__DOT__uncached = ((0ULL 
                                                   != vlSelf->top__DOT__pc_new) 
                                                  & (3U 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                 >> 0x1cU)))));
    VL_EXTEND_WI(65,1, __Vtemp251, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
        = ((vlSelf->top__DOT__ex_stage_u__DOT__src1 
            + vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin) 
           + (((QData)((IData)(__Vtemp251[1U])) << 0x20U) 
              | (QData)((IData)(__Vtemp251[0U]))));
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
    vlSelf->top__DOT__is_jump = (1U & (((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                         >> 0x15U) 
                                        | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x16U)) 
                                       | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x14U) 
                                          & ((0x400U 
                                              & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                              ? ((0x200U 
                                                  & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                                  ? 
                                                 ((0x100U 
                                                   & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                                   ? (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)
                                                   : 
                                                  (~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)))
                                                  : 
                                                 ((0x100U 
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
                                                   >> 9U)) 
                                                 & ((0x100U 
                                                     & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])
                                                     ? 
                                                    (0U 
                                                     != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres)
                                                     : 
                                                    (~ (IData)(
                                                               (0U 
                                                                != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres)))))))));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
        = (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src 
           >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)));
    vlSelf->axi_ar_len_o = (((0xaU == (0xfU & (IData)(
                                                      (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                       >> 0x1cU)))) 
                             | (2U == (0xffU & (IData)(
                                                       (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                        >> 0x18U)))))
                             ? 0U : (0xffU & ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                               ? ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                                   ? 0U
                                                   : 3U)
                                               : ((6U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                   ? 0U
                                                   : 3U))));
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size 
        = (7U & ((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                  ? ((0U == ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                              ? 0U : 3U)) ? 2U : 3U)
                  : ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                      ? ((((1U & ((- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh))) 
                                  | (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu))))) 
                           | (2U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw))))) 
                          | (2U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu))))) 
                         | (3U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld)))))
                      : 3U)));
    vlSelf->top__DOT__cache_dut__DOT__wenWay1 = (((7U 
                                                   == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                                  & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__uncached))) 
                                                 & vlSelf->top__DOT__cache_dut__DOT__randomBit);
    vlSelf->top__DOT__cache_dut__DOT__wenWay2 = (((7U 
                                                   == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                                  & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__uncached))) 
                                                 & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit));
    vlSelf->top__DOT__cache_dut__DOT__cacheHit = ((
                                                   ((IData)(vlSelf->top__DOT__cache_dut__DOT__way1Hit) 
                                                    | (IData)(vlSelf->top__DOT__cache_dut__DOT__way2Hit)) 
                                                   & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__uncached))) 
                                                  | (IData)(vlSelf->top__DOT__cache_dut__DOT__uncachedOk));
    vlSelf->top__DOT__ex_flush = (1U & (((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                          | (IData)(vlSelf->top__DOT__in_intr_ls)) 
                                         | (IData)(vlSelf->top__DOT__ld_use_hazard)) 
                                        | (IData)(vlSelf->top__DOT__is_jump)));
    vlSelf->top__DOT__id_flush = (1U & (((((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            | (IData)(vlSelf->top__DOT__fence_id)) 
                                           | (IData)(vlSelf->top__DOT__in_intr_ls)) 
                                          | (IData)(vlSelf->top__DOT__is_jump)) 
                                         | (IData)(vlSelf->top__DOT__in_trap_id)) 
                                        | (IData)(vlSelf->top__DOT__out_trap_id)));
    vlSelf->top__DOT__IF_u__DOT__pc_next_o = ((IData)(vlSelf->top__DOT__in_intr_ls)
                                               ? vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec
                                               : ((IData)(vlSelf->top__DOT__is_jump)
                                                   ? 
                                                  ((0x400000U 
                                                    & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                                    ? 
                                                   (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                                    + 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                         << 4U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                           >> 0x1cU))))
                                                    : 
                                                   ((((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                         << 4U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                           >> 0x1cU))) 
                                                    + 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                         << 4U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                           >> 0x1cU)))))
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__in_trap_id)
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__out_trap_id)
                                                     ? 
                                                    (4ULL 
                                                     + vlSelf->top__DOT__pc_new)
                                                     : vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec)
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__out_trap_id)
                                                     ? vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc
                                                     : 
                                                    (4ULL 
                                                     + vlSelf->top__DOT__pc_new)))));
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
    vlSelf->axi_ar_size_o = (((0xaU == (0xfU & (IData)(
                                                       (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                        >> 0x1cU)))) 
                              | (2U == (0xffU & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x18U)))))
                              ? 0U : (7U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size)));
    vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN 
        = (1U & (~ ((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                      & (0ULL != vlSelf->top__DOT__pc_new)) 
                     | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                         & (0ULL != vlSelf->top__DOT__pc_new)) 
                        & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                    | (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1))));
    vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN 
        = (1U & (~ ((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                      & (0ULL != vlSelf->top__DOT__pc_new)) 
                     | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                         & (0ULL != vlSelf->top__DOT__pc_new)) 
                        & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                    | (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1))));
    vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN 
        = (1U & (~ ((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                      & (0ULL != vlSelf->top__DOT__pc_new)) 
                     | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                         & (0ULL != vlSelf->top__DOT__pc_new)) 
                        & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                    | (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2))));
    vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN 
        = (1U & (~ ((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                      & (0ULL != vlSelf->top__DOT__pc_new)) 
                     | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                         & (0ULL != vlSelf->top__DOT__pc_new)) 
                        & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                    | (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2))));
    vlSelf->top__DOT__sram_rdata = ((((- (QData)((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached))) 
                                      & (((QData)((IData)(
                                                          vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U])))) 
                                     | ((- (QData)((IData)(vlSelf->top__DOT__cache_dut__DOT__way1Hit))) 
                                        & ((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                             & (0ULL 
                                                != vlSelf->top__DOT__pc_new)) 
                                            | (((1U 
                                                 == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                                & (0ULL 
                                                   != vlSelf->top__DOT__pc_new)) 
                                               & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                           >> 4U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                               >> 3U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U])))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__way1Data[7U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__cache_dut__DOT__way1Data[6U]))))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U])))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__way1Data[5U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__cache_dut__DOT__way1Data[4U])))))
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                               >> 3U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U])))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__way1Data[3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__cache_dut__DOT__way1Data[2U]))))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U])))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__way1Data[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__cache_dut__DOT__way1Data[0U]))))))
                                            : 0ULL))) 
                                    | ((- (QData)((IData)(vlSelf->top__DOT__cache_dut__DOT__way2Hit))) 
                                       & ((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                            & (0ULL 
                                               != vlSelf->top__DOT__pc_new)) 
                                           | (((1U 
                                                == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                               & (0ULL 
                                                  != vlSelf->top__DOT__pc_new)) 
                                              & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))
                                           ? ((1U & (IData)(
                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                             >> 4U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                              >> 3U)))
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__cache_dut__DOT__way2Data[7U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__way2Data[6U]))))
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__cache_dut__DOT__way2Data[5U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__way2Data[4U])))))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                              >> 3U)))
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__cache_dut__DOT__way2Data[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__way2Data[2U]))))
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__cache_dut__DOT__way2Data[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__cache_dut__DOT__way2Data[0U]))))))
                                           : 0ULL)));
    vlSelf->top__DOT__if_instr_valid = (((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                         | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                            & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                        & (~ (((((1U 
                                                  == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                                 & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                                | (3U 
                                                   == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                               | (2U 
                                                  == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                              | (7U 
                                                 == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
    vlSelf->top__DOT__cache_dut__DOT__diffAddr = ((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o) 
                                                  != (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift 
        = ((0x2000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
            ? ((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                ? ((0x8000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
                : ((0x8000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                    ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                       & (QData)((IData)(((0xffffffffffffffffULL 
                                           >> (0x3fU 
                                               & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                          >> 0x20U))))
                    : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res))
            : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res);
    VL_EXTEND_WQ(65,64, __Vtemp253, vlSelf->top__DOT__ex_stage_u__DOT__src1);
    VL_EXTEND_WQ(65,64, __Vtemp254, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
    VL_ADD_W(3, __Vtemp255, __Vtemp253, __Vtemp254);
    VL_EXTEND_WI(65,1, __Vtemp256, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
    VL_ADD_W(3, __Vtemp257, __Vtemp255, __Vtemp256);
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
        = ((0x20U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
            ? ((0x10U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                ? ((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                    ? ((4U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                        ? VL_MODDIV_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                        : VL_MODDIVS_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2))
                    : ((4U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                        ? VL_DIV_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                        : VL_DIVS_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)))
                : ((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                    ? 0ULL : ((4U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                               ? 0ULL : (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                         * vlSelf->top__DOT__ex_stage_u__DOT__src2))))
            : ((0x2000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                ? ((0x1000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                    ? ((0x800000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                        ? (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                           & vlSelf->top__DOT__ex_stage_u__DOT__src2)
                        : (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                           | vlSelf->top__DOT__ex_stage_u__DOT__src2))
                    : ((0x800000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                        ? vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift
                        : (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                           ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)))
                : ((0x1000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                    ? ((0x800000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                        ? vlSelf->top__DOT__ex_stage_u__DOT__src2
                        : (QData)((IData)((1U & ((0x4000000U 
                                                  & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                                  ? 
                                                 ((1U 
                                                   & __Vtemp257[2U]) 
                                                  ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                                  : 
                                                 ((IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                           >> 0x3fU)) 
                                                  ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow)))))))
                    : ((0x800000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                        ? vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift
                        : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o))));
    vlSelf->top__DOT__alures_ex = ((0x8000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                    ? (((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                    : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout);
    vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i 
        = (((3U == (0x7fU & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                              << 4U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                        >> 0x1cU)))) 
            | (8U == (0x1fU & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                << 2U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                          >> 0x1eU)))))
            ? (IData)(vlSelf->top__DOT__alures_ex) : 0U);
}

extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_0260afd5_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vtop__ConstPool__TABLE_b1b41ba9_0;
extern const VlUnpacked<CData/*2:0*/, 1024> Vtop__ConstPool__TABLE_b22aa1bc_0;

VL_INLINE_OPT void Vtop___024root___combo__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__6\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx2;
    CData/*6:0*/ __Vtableidx4;
    CData/*4:0*/ __Vtableidx5;
    SData/*9:0*/ __Vtableidx1;
    VlWide<7>/*223:0*/ __Vtemp261;
    // Body
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready 
        = ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                     >> 0x1cU)))) ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready)
            : ((2U == (0xffU & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                        >> 0x18U))))
                ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready)
                : (IData)(vlSelf->axi_w_ready_i)));
    if ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                  >> 0x1cU))))) {
        vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid 
            = vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid;
        vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready 
            = vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready;
        vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last 
            = vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid;
        vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data 
            = vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata;
        vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id = 1U;
    } else {
        vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid 
            = ((2U == (0xffU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                        >> 0x18U))))
                ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid)
                : (IData)(vlSelf->axi_r_valid_i));
        vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready 
            = ((2U == (0xffU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                        >> 0x18U))))
                ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready)
                : (IData)(vlSelf->axi_ar_ready_i));
        vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last 
            = ((2U == (0xffU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                        >> 0x18U))))
                ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid)
                : (IData)(vlSelf->axi_r_last_i));
        vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data 
            = ((2U == (0xffU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                        >> 0x18U))))
                ? vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__reg_data_out
                : vlSelf->axi_r_data_i);
        vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id 
            = ((2U == (0xffU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                        >> 0x18U))))
                ? 1U : (0xfU & (IData)(vlSelf->axi_r_id_i)));
    }
    __Vtableidx4 = (((IData)(vlSelf->top__DOT__DcacheWrValid) 
                     << 6U) | ((((0xaU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU))))
                                  ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)
                                  : ((2U == (0xffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                        >> 0x18U))))
                                      ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready)
                                      : (IData)(vlSelf->axi_aw_ready_i))) 
                                << 5U) | ((((0xaU == 
                                             (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x1cU))))
                                             ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid)
                                             : ((2U 
                                                 == 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x18U))))
                                                 ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid)
                                                 : (IData)(vlSelf->axi_b_valid_i))) 
                                           << 4U) | 
                                          (((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrLast) 
                                            << 3U) 
                                           | (((IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready) 
                                               << 2U) 
                                              | (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))))));
    vlSelf->top__DOT__axi_ls_u__DOT__w_state_next = 
        Vtop__ConstPool__TABLE_0260afd5_0[__Vtableidx4];
    vlSelf->top__DOT__dataValid_o = (((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? 0U : (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)) 
                                     & (3U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state)));
    vlSelf->top__DOT__lsAxiRdDataVAlid = (((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                            ? (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)
                                            : 0U) & 
                                          (3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state)));
    if ((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))) {
        vlSelf->top__DOT__if_axi_r_last_i = 0U;
        vlSelf->top__DOT__ls_axi_r_data_i = vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data;
        vlSelf->top__DOT__ls_axi_r_last_i = (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
    } else {
        vlSelf->top__DOT__if_axi_r_last_i = (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
        vlSelf->top__DOT__ls_axi_r_data_i = 0ULL;
        vlSelf->top__DOT__ls_axi_r_last_i = 0U;
    }
    __Vtableidx2 = (((IData)(vlSelf->top__DOT__if_axi_r_last_i) 
                     << 4U) | (((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                   ? 0U : 1U) ? 0U : 
                                 (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))) 
                                << 3U) | (((IData)(vlSelf->top__DOT__rw_valid_i) 
                                           << 2U) | (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
    vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next 
        = Vtop__ConstPool__TABLE_b1b41ba9_0[__Vtableidx2];
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__cache_dut__DOT__diffAddr) 
                     << 9U) | (((0ULL != vlSelf->top__DOT__pc_new) 
                                << 8U) | (((IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit) 
                                           << 7U) | 
                                          (((IData)(vlSelf->top__DOT__cache_dut__DOT__uncachedOk) 
                                            << 6U) 
                                           | (((0U 
                                                == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state)) 
                                               << 5U) 
                                              | (((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->top__DOT__if_axi_r_last_i) 
                                                     << 3U) 
                                                    | (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))))))));
    vlSelf->top__DOT__cache_dut__DOT__cacheNexState 
        = Vtop__ConstPool__TABLE_b22aa1bc_0[__Vtableidx1];
    if (((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
         & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))) {
        vlSelf->top__DOT__Dcache_u__DOT__tagArray1_d 
            = (0x1fffffU & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                             ? vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                            [(0x3fU & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 5U)))]
                             : (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                        >> 0xbU))));
        vlSelf->top__DOT__Dcache_u__DOT__bitValid2_d 
            = (((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                           >> (0x3fU & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                >> 5U)))))) 
               & 1U);
        vlSelf->top__DOT__Dcache_u__DOT__bitValid1_d 
            = (((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                           >> (0x3fU & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                >> 5U)))))) 
               & 1U);
        vlSelf->top__DOT__Dcache_u__DOT__tagArray2_d 
            = (0x1fffffU & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                             ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                        >> 0xbU)) : 
                            vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                            [(0x3fU & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                               >> 5U)))]));
    } else {
        vlSelf->top__DOT__Dcache_u__DOT__tagArray1_d = 0U;
        vlSelf->top__DOT__Dcache_u__DOT__bitValid2_d = 0U;
        vlSelf->top__DOT__Dcache_u__DOT__bitValid1_d = 0U;
        vlSelf->top__DOT__Dcache_u__DOT__tagArray2_d = 0U;
    }
    __Vtableidx5 = (((IData)(vlSelf->top__DOT__ls_axi_r_last_i) 
                     << 4U) | (((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                   ? 0U : 1U) ? (1U 
                                                 & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                  : 0U) << 3U) | (((IData)(vlSelf->top__DOT__DcacheRdValid) 
                                                   << 2U) 
                                                  | (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
    vlSelf->top__DOT__axi_ls_u__DOT__r_state_next = 
        Vtop__ConstPool__TABLE_b1b41ba9_0[__Vtableidx5];
    vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk = 
        (((((IData)(vlSelf->top__DOT__DcacheWrValid) 
            & (0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))) 
           | (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk)) 
          | (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
         | (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk));
    vlSelf->top__DOT__ls_addr_ok_i = (((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       | ((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                          & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit) 
                                             | (~ (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i))))) 
                                      | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                         & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk)));
    vlSelf->top__DOT__dataNotOk = (((((((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                        | ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                           & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk)))) 
                                       | (((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                           & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                          & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i))) 
                                      | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                     | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                    | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                   | ((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                        & (~ (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 0x20U)))) 
                                       & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay))) 
                                      & (((IData)(vlSelf->top__DOT__Dcache_u__DOT__way1Hit) 
                                          & (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenDelay1)) 
                                         | ((IData)(vlSelf->top__DOT__Dcache_u__DOT__way2Hit) 
                                            & (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenDelay2)))));
    vlSelf->top__DOT__if_stall_n = (1U & (~ (((((((IData)(vlSelf->top__DOT__fence_id) 
                                                  | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
                                                 & (~ (IData)(vlSelf->top__DOT__is_jump))) 
                                                | (IData)(vlSelf->top__DOT__ld_use_hazard)) 
                                               | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                              | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                             | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))));
    vlSelf->top__DOT__ls_stall_n = (1U & (~ (((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                              | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                             | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))));
    if (vlSelf->top__DOT__cache_dut__DOT__wenWay1) {
        vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__A 
            = (0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                >> 5U)));
        vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A 
            = (0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                >> 5U)));
    } else {
        vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__A 
            = (0x3fU & ((IData)(vlSelf->top__DOT__if_stall_n)
                         ? (IData)((vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                    >> 5U)) : (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 5U))));
        vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A 
            = (0x3fU & ((IData)(vlSelf->top__DOT__if_stall_n)
                         ? (IData)((vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                    >> 5U)) : (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 5U))));
    }
    if (vlSelf->top__DOT__cache_dut__DOT__wenWay2) {
        vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__A 
            = (0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                >> 5U)));
        vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A 
            = (0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                >> 5U)));
    } else {
        vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__A 
            = (0x3fU & ((IData)(vlSelf->top__DOT__if_stall_n)
                         ? (IData)((vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                    >> 5U)) : (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 5U))));
        vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A 
            = (0x3fU & ((IData)(vlSelf->top__DOT__if_stall_n)
                         ? (IData)((vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                    >> 5U)) : (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 5U))));
    }
    vlSelf->stall_n_diff = vlSelf->top__DOT__ls_stall_n;
    vlSelf->top__DOT__ls_u__DOT__csr_stall_n = ((IData)(vlSelf->top__DOT__in_intr_ls)
                                                 ? (IData)(vlSelf->top__DOT__if_stall_n)
                                                 : (IData)(vlSelf->top__DOT__ls_stall_n));
    vlSelf->top__DOT__Dcache_u__DOT__cacheNexState 
        = ((4U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
            ? ((2U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                ? ((1U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                    ? 1U : (((IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk) 
                             & (IData)(vlSelf->top__DOT__ls_stall_n))
                             ? 1U : 6U)) : ((1U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                             ? 0U : 
                                            ((IData)(vlSelf->top__DOT__Dcache_u__DOT__clean_OK)
                                              ? 0U : 4U)))
            : ((2U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                ? ((1U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                    ? ((IData)(vlSelf->top__DOT__ls_axi_r_last_i)
                        ? 7U : 3U) : ((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
                                       ? 3U : 2U)) : 
               ((1U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                 ? ((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                     ? 4U : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__uncached)
                              ? 6U : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)
                                       ? ((((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i) 
                                            & (IData)(vlSelf->top__DOT__ls_stall_n)) 
                                           | (((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i) 
                                               & (~ (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 0x20U)))) 
                                              & (~ (IData)(vlSelf->top__DOT__ls_stall_n))))
                                           ? 1U : 0U)
                                       : ((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i)
                                           ? (((IData)(
                                                       (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                        >> 0x20U)) 
                                               & (IData)(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg))
                                               ? 1U
                                               : 2U)
                                           : ((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)
                                               ? 1U
                                               : 0U)))))
                 : ((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                     ? 4U : (((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i) 
                              & (IData)(vlSelf->top__DOT__ls_stall_n))
                              ? 1U : 0U)))));
    vlSelf->top__DOT__ls_sram_rd_data = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                          ? vlSelf->top__DOT__ls_axi_r_data_i
                                          : (((- (QData)((IData)(vlSelf->top__DOT__Dcache_u__DOT__way1Hit))) 
                                              & ((((((0U 
                                                      == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                     & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                                    & (IData)(vlSelf->top__DOT__ls_stall_n)) 
                                                   | (((1U 
                                                        == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                       & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                                      & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                                  | (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                              >> 4U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                               >> 3U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U])))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U]))))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U])))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U])))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                               >> 3U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U])))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U]))))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U])))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U]))))))
                                                  : 0ULL)) 
                                             | ((- (QData)((IData)(vlSelf->top__DOT__Dcache_u__DOT__way2Hit))) 
                                                & ((((((0U 
                                                        == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                       & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                                      & (IData)(vlSelf->top__DOT__ls_stall_n)) 
                                                     | (((1U 
                                                          == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                         & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                                        & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                                    | (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 4U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                 >> 3U)))
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U])))
                                                       : 
                                                      (((QData)((IData)(
                                                                        vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U]))))
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U])))
                                                       : 
                                                      (((QData)((IData)(
                                                                        vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U])))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                 >> 3U)))
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U])))
                                                       : 
                                                      (((QData)((IData)(
                                                                        vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U]))))
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U])))
                                                       : 
                                                      (((QData)((IData)(
                                                                        vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U]))))))
                                                    : 0ULL))));
    if ((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
        vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A 
            = (0x3fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt));
        vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A 
            = (0x3fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt));
    } else {
        vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A 
            = (0x3fU & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)
                         ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                    >> 5U)) : ((IData)(vlSelf->top__DOT__ls_stall_n)
                                                ? (vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i 
                                                   >> 5U)
                                                : (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 5U)))));
        vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A 
            = (0x3fU & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)
                         ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                    >> 5U)) : ((IData)(vlSelf->top__DOT__ls_stall_n)
                                                ? (vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i 
                                                   >> 5U)
                                                : (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 5U)))));
    }
    if ((0x20U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) {
        vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b 
            = (0xffU & ((0x10U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                         ? ((8U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                             ? (IData)((vlSelf->top__DOT__ls_sram_rd_data 
                                        >> 0x38U)) : (IData)(
                                                             (vlSelf->top__DOT__ls_sram_rd_data 
                                                              >> 0x30U)))
                         : ((8U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                             ? (IData)((vlSelf->top__DOT__ls_sram_rd_data 
                                        >> 0x28U)) : (IData)(
                                                             (vlSelf->top__DOT__ls_sram_rd_data 
                                                              >> 0x20U)))));
        vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h 
            = (0xffffU & ((0x10U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                           ? (IData)((vlSelf->top__DOT__ls_sram_rd_data 
                                      >> 0x30U)) : (IData)(
                                                           (vlSelf->top__DOT__ls_sram_rd_data 
                                                            >> 0x20U))));
    } else {
        vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b 
            = (0xffU & ((0x10U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                         ? ((8U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                             ? (IData)((vlSelf->top__DOT__ls_sram_rd_data 
                                        >> 0x18U)) : (IData)(
                                                             (vlSelf->top__DOT__ls_sram_rd_data 
                                                              >> 0x10U)))
                         : ((8U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                             ? (IData)((vlSelf->top__DOT__ls_sram_rd_data 
                                        >> 8U)) : (IData)(vlSelf->top__DOT__ls_sram_rd_data))));
        vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h 
            = (0xffffU & ((0x10U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                           ? (IData)((vlSelf->top__DOT__ls_sram_rd_data 
                                      >> 0x10U)) : (IData)(vlSelf->top__DOT__ls_sram_rd_data)));
    }
    if ((0x20U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) {
            vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w 
                = (IData)((vlSelf->top__DOT__ls_sram_rd_data 
                           >> 0x20U));
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w 
            = (IData)(vlSelf->top__DOT__ls_sram_rd_data);
    }
    __Vtemp261[0U] = (IData)(((((((((- (QData)((IData)(
                                                       ((3U 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                             >> 3U))) 
                                                        & (0U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                               >> 0xfU))))))) 
                                    & (((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b) 
                                                               >> 7U))))) 
                                        << 8U) | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b)))) 
                                   | ((- (QData)((IData)(
                                                         ((3U 
                                                           == 
                                                           (0x7fU 
                                                            & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                               >> 3U))) 
                                                          & (4U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                 >> 0xfU))))))) 
                                      & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b)))) 
                                  | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh))) 
                                     & (((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h) 
                                                                >> 0xfU))))) 
                                         << 0x10U) 
                                        | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h))))) 
                                 | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu))) 
                                    & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h)))) 
                                | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw))) 
                                   & (((QData)((IData)(
                                                       (- (IData)(
                                                                  (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w 
                                                                   >> 0x1fU))))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w))))) 
                               | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu))) 
                                  & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w)))) 
                              | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld))) 
                                 & vlSelf->top__DOT__ls_sram_rd_data)));
    __Vtemp261[1U] = (IData)((((((((((- (QData)((IData)(
                                                        ((3U 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                              >> 3U))) 
                                                         & (0U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                >> 0xfU))))))) 
                                     & (((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b) 
                                                                >> 7U))))) 
                                         << 8U) | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b)))) 
                                    | ((- (QData)((IData)(
                                                          ((3U 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                >> 3U))) 
                                                           & (4U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                                  >> 0xfU))))))) 
                                       & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b)))) 
                                   | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh))) 
                                      & (((- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h) 
                                                                 >> 0xfU))))) 
                                          << 0x10U) 
                                         | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h))))) 
                                  | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu))) 
                                     & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h)))) 
                                 | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw))) 
                                    & (((QData)((IData)(
                                                        (- (IData)(
                                                                   (vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w 
                                                                    >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w))))) 
                                | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu))) 
                                   & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w)))) 
                               | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld))) 
                                  & vlSelf->top__DOT__ls_sram_rd_data)) 
                              >> 0x20U));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[0U] 
        = (IData)(vlSelf->top__DOT__csrdata_ls);
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[1U] 
        = (IData)((vlSelf->top__DOT__csrdata_ls >> 0x20U));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[2U] 
        = ((__Vtemp261[0U] << 1U) | (1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                           >> 2U)));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[3U] 
        = ((__Vtemp261[0U] >> 0x1fU) | (__Vtemp261[1U] 
                                        << 1U));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[4U] 
        = ((__Vtemp261[1U] >> 0x1fU) | ((IData)((((QData)((IData)(
                                                                  vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                  << 0x3dU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                     << 0x1dU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                       >> 3U)))) 
                                        << 1U));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[5U] 
        = (((IData)((((QData)((IData)(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                      << 0x3dU) | (((QData)((IData)(
                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                    << 0x1dU) | ((QData)((IData)(
                                                                 vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                 >> 3U)))) 
            >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                    << 0x3dU) | (((QData)((IData)(
                                                                  vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                  << 0x1dU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                    >> 3U))) 
                                  >> 0x20U)) << 1U));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[6U] 
        = (((IData)(((((QData)((IData)(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                       << 0x3dU) | (((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                     << 0x1dU) | ((QData)((IData)(
                                                                  vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                  >> 3U))) 
                     >> 0x20U)) >> 0x1fU) | ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                              << 0x1eU) 
                                             | (0x3ffffffeU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 2U))));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[7U] 
        = ((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                  >> 2U)) | ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U] 
                              << 0x1eU) | (0x3ffffffeU 
                                           & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                              >> 2U))));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[8U] 
        = ((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U] 
                  >> 2U)) | ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U] 
                              << 0x1eU) | (0x3ffffffeU 
                                           & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U] 
                                              >> 2U))));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[9U] 
        = (1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U] 
                 >> 2U));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__7\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0) {
        vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[vlSelf->__Vdlyvdim0__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0] 
            = vlSelf->__Vdlyvval__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0;
    }
    vlSelf->regA0 = vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
        [0xaU];
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        Vtop___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        Vtop___024root___sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    Vtop___024root___combo__TOP__6(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
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
