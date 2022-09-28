// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void vmemread(long long raddr, int len, long long* rdata, long long pc);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__IF_u__DOT__vmemread_TOP(QData/*63:0*/ raddr, IData/*31:0*/ len, QData/*63:0*/ &rdata, QData/*63:0*/ pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__IF_u__DOT__vmemread_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    long long rdata__Vcvt;
    long long pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    vmemread(raddr__Vcvt, len__Vcvt, &rdata__Vcvt, pc__Vcvt);
    rdata = rdata__Vcvt;
}

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

extern "C" void vmemwrite(long long raddr, long long wdata, char wr_mask, long long pc);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__ls_u__DOT__lsu_u__DOT__vmemwrite_TOP(QData/*63:0*/ raddr, QData/*63:0*/ wdata, CData/*7:0*/ wr_mask, QData/*63:0*/ pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__ls_u__DOT__lsu_u__DOT__vmemwrite_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wr_mask__Vcvt;
    for (size_t wr_mask__Vidx = 0; wr_mask__Vidx < 1; ++wr_mask__Vidx) wr_mask__Vcvt = wr_mask;
    long long pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    vmemwrite(raddr__Vcvt, wdata__Vcvt, wr_mask__Vcvt, pc__Vcvt);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Variables
    QData/*63:0*/ __Vtemp1;
    // Body
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec) {
            vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec 
                = ((3ULL & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec) 
                   | (0xfffffffffffffffcULL & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data));
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec = 0ULL;
    }
    if (vlSelf->rst_n) {
        vlSelf->top__DOT__csrdata_wb = vlSelf->top__DOT__csrdata_ls;
        vlSelf->top__DOT__pc_wb = vlSelf->top__DOT__pc_ls;
        vlSelf->top__DOT__alures_wb = vlSelf->top__DOT__alures_ls;
    } else {
        vlSelf->top__DOT__csrdata_wb = 0ULL;
        vlSelf->top__DOT__pc_wb = 0ULL;
        vlSelf->top__DOT__alures_wb = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc) 
             | (IData)(vlSelf->top__DOT__trap_ls))) {
            vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc 
                = ((3ULL & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc) 
                   | (((IData)(vlSelf->top__DOT__trap_ls)
                        ? (vlSelf->top__DOT__pc_ls 
                           >> 2U) : (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data 
                                     >> 2U)) << 2U));
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__wben_wb) {
            vlSelf->top__DOT__forwarding_u__DOT__rd_wb 
                = vlSelf->top__DOT__wb_data;
        }
    } else {
        vlSelf->top__DOT__forwarding_u__DOT__rd_wb = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause) 
             | (IData)(vlSelf->top__DOT__trap_ls))) {
            vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause 
                = ((IData)(vlSelf->top__DOT__trap_ls)
                    ? ((0x1cU == (0x1fU & (vlSelf->top__DOT__instr_ls 
                                           >> 2U)))
                        ? 0xbULL : 0ULL) : vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data);
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus) 
             | (IData)(vlSelf->top__DOT__trap_ls))) {
            __Vtemp1 = ((IData)(vlSelf->top__DOT__trap_ls)
                         ? ((IData)((0x70U == (0x20707cU 
                                               & vlSelf->top__DOT__instr_ls)))
                             ? ((0xffffffffffffe000ULL 
                                 & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus) 
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
                             : ((0xffffffffffffff00ULL 
                                 & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus) 
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
            vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                = __Vtemp1;
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus = 0xa00001800ULL;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__wben_wb) {
            vlSelf->top__DOT__forwarding_u__DOT__reg_wben 
                = vlSelf->top__DOT__wben_wb;
        }
    } else {
        vlSelf->top__DOT__forwarding_u__DOT__reg_wben = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__wben_wb) {
            vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx 
                = (0x1fU & (vlSelf->top__DOT__instr_wb 
                            >> 7U));
        }
    } else {
        vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx = 0U;
    }
    vlSelf->pc_diff = vlSelf->top__DOT__pc_wb;
    vlSelf->top__DOT__trap_ls = ((IData)(vlSelf->rst_n) 
                                 & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U]);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Variables
    QData/*63:0*/ __Vtask_top__DOT__ls_u__DOT__lsu_u__DOT__vmemread__4__rdata;
    // Body
    if ((3U == (0x7fU & vlSelf->top__DOT__instr_ls))) {
        Vtop___024root____Vdpiimwrap_top__DOT__IF_u__DOT__vmemread_TOP(
                                                                       (0xfffffffffffffff8ULL 
                                                                        & vlSelf->top__DOT__alures_ls), 8U, __Vtask_top__DOT__ls_u__DOT__lsu_u__DOT__vmemread__4__rdata, vlSelf->top__DOT__pc_ls);
        vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base 
            = __Vtask_top__DOT__ls_u__DOT__lsu_u__DOT__vmemread__4__rdata;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->__Vdlyvset__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0 = 0U;
    if ((0x100073U == vlSelf->top__DOT__instr_wb)) {
        Vtop___024root____Vdpiimwrap_top__DOT__ID_u__DOT__regfile_u__DOT__ebreak_TOP();
    }
    if ((8U == (0x1fU & (vlSelf->top__DOT__instr_ls 
                         >> 2U)))) {
        Vtop___024root____Vdpiimwrap_top__DOT__ls_u__DOT__lsu_u__DOT__vmemwrite_TOP(vlSelf->top__DOT__alures_ls, 
                                                                                (((0U 
                                                                                == 
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
                                                                                 : vlSelf->top__DOT__rs2_ls), (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask), vlSelf->top__DOT__pc_ls);
    }
    if (vlSelf->top__DOT__wben_wb) {
        vlSelf->__Vdlyvval__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0 
            = ((0U == (0x1fU & (vlSelf->top__DOT__instr_wb 
                                >> 7U))) ? 0ULL : vlSelf->top__DOT__wb_data);
        vlSelf->__Vdlyvset__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0 = 1U;
        vlSelf->__Vdlyvdim0__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0 
            = (0x1fU & (vlSelf->top__DOT__instr_wb 
                        >> 7U));
    }
}

extern const VlUnpacked<CData/*7:0*/, 16> Vtop__ConstPool__TABLE_989dfc00_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__6\n"); );
    // Variables
    CData/*3:0*/ __Vtableidx1;
    VlWide<10>/*319:0*/ __Vtemp21;
    VlWide<10>/*319:0*/ __Vtemp22;
    VlWide<3>/*95:0*/ __Vtemp25;
    VlWide<3>/*95:0*/ __Vtemp26;
    VlWide<3>/*95:0*/ __Vtemp27;
    VlWide<3>/*95:0*/ __Vtemp28;
    VlWide<3>/*95:0*/ __Vtemp29;
    VlWide<3>/*95:0*/ __Vtemp31;
    VlWide<3>/*95:0*/ __Vtemp33;
    VlWide<3>/*95:0*/ __Vtemp34;
    VlWide<3>/*95:0*/ __Vtemp35;
    VlWide<3>/*95:0*/ __Vtemp36;
    VlWide<3>/*95:0*/ __Vtemp37;
    // Body
    if (vlSelf->rst_n) {
        vlSelf->top__DOT__rs2_ls = vlSelf->top__DOT__ex_stage_u__DOT__rs2;
        vlSelf->top__DOT__lsres_wb = ((((((((- (QData)((IData)(
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
                                         & vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_base));
        vlSelf->top__DOT__pc_ls = (((QData)((IData)(
                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[9U])) 
                                    << 0x25U) | (((QData)((IData)(
                                                                  vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[8U])) 
                                                  << 5U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])) 
                                                    >> 0x1bU)));
        vlSelf->top__DOT__alures_ls = ((0x4000000U 
                                        & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                        ? (((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                                        : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout);
        vlSelf->top__DOT__wben_wb = ((IData)(vlSelf->top__DOT__wben_ls) 
                                     & 1U);
        vlSelf->top__DOT__instr_wb = vlSelf->top__DOT__instr_ls;
        vlSelf->top__DOT__wben_ls = ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                      >> 0xfU) & 1U);
    } else {
        vlSelf->top__DOT__rs2_ls = 0ULL;
        vlSelf->top__DOT__lsres_wb = 0ULL;
        vlSelf->top__DOT__pc_ls = 0ULL;
        vlSelf->top__DOT__alures_ls = 0ULL;
        vlSelf->top__DOT__wben_wb = 0U;
        vlSelf->top__DOT__instr_wb = 0U;
        vlSelf->top__DOT__wben_ls = 0U;
    }
    vlSelf->instr_diff = vlSelf->top__DOT__instr_wb;
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
    vlSelf->top__DOT__instr_ls = ((IData)(vlSelf->rst_n)
                                   ? ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                       << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                                 >> 0x1bU))
                                   : 0U);
    __Vtableidx1 = (((IData)((0x3020U == (0x707cU & vlSelf->top__DOT__instr_ls))) 
                     << 3U) | (((IData)((0x2020U == 
                                         (0x707cU & vlSelf->top__DOT__instr_ls))) 
                                << 2U) | (((IData)(
                                                   (0x1020U 
                                                    == 
                                                    (0x707cU 
                                                     & vlSelf->top__DOT__instr_ls))) 
                                           << 1U) | (IData)(
                                                            (0x20U 
                                                             == 
                                                             (0x707cU 
                                                              & vlSelf->top__DOT__instr_ls))))));
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask 
        = Vtop__ConstPool__TABLE_989dfc00_0[__Vtableidx1];
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
    if (vlSelf->rst_n) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__hazard_detect_u__DOT__hazard)))) {
            __Vtemp21[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                              << 0x1bU) | (((IData)(vlSelf->top__DOT__aluctr_id) 
                                            << 0x16U) 
                                           | ((((~ (IData)(vlSelf->top__DOT__is_jump)) 
                                                & (IData)(vlSelf->top__DOT__is_jalr_id)) 
                                               << 0x15U) 
                                              | ((((~ (IData)(vlSelf->top__DOT__is_jump)) 
                                                   & (IData)(vlSelf->top__DOT__is_jal_id)) 
                                                  << 0x14U) 
                                                 | ((((~ (IData)(vlSelf->top__DOT__is_jump)) 
                                                      & (IData)(vlSelf->top__DOT__is_brc_id)) 
                                                     << 0x13U) 
                                                    | (((IData)(vlSelf->top__DOT__src1sel_id) 
                                                        << 0x12U) 
                                                       | (((IData)(vlSelf->top__DOT__src2sel_id) 
                                                           << 0x10U) 
                                                          | ((((~ (IData)(vlSelf->top__DOT__is_jump)) 
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
                                                                         | ((~ (IData)(vlSelf->top__DOT__is_jump)) 
                                                                            & (IData)(vlSelf->top__DOT__trap_id))))))))))))));
            __Vtemp21[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                              >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                                 >> 0x20U)) 
                                        << 0x1bU));
            __Vtemp21[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                       >> 0x20U)) >> 5U) 
                             | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                          ? 0ULL : 
                                         vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                         [vlSelf->top__DOT__rs1_idx_id])) 
                                << 0x1bU));
            __Vtemp21[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                        ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                       [vlSelf->top__DOT__rs1_idx_id])) 
                              >> 5U) | ((IData)((((0U 
                                                   == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                                  [vlSelf->top__DOT__rs1_idx_id]) 
                                                 >> 0x20U)) 
                                        << 0x1bU));
            __Vtemp21[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs1_idx_id]) 
                                       >> 0x20U)) >> 5U) 
                             | ((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                          ? 0ULL : 
                                         vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                         [vlSelf->top__DOT__rs2_idx_id])) 
                                << 0x1bU));
            __Vtemp21[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                        ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                       [vlSelf->top__DOT__rs2_idx_id])) 
                              >> 5U) | ((IData)((((0U 
                                                   == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                                  [vlSelf->top__DOT__rs2_idx_id]) 
                                                 >> 0x20U)) 
                                        << 0x1bU));
            __Vtemp21[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs2_idx_id]) 
                                       >> 0x20U)) >> 5U) 
                             | (((IData)(vlSelf->top__DOT__is_jump)
                                  ? 0x20U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                                << 0x1bU));
            __Vtemp21[7U] = ((((IData)(vlSelf->top__DOT__is_jump)
                                ? 0x20U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                              >> 5U) | ((IData)(((IData)(vlSelf->top__DOT__is_jump)
                                                  ? 0ULL
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                        << 0x1bU));
            __Vtemp21[8U] = (((IData)(((IData)(vlSelf->top__DOT__is_jump)
                                        ? 0ULL : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                              >> 5U) | ((IData)((((IData)(vlSelf->top__DOT__is_jump)
                                                   ? 0ULL
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                                 >> 0x20U)) 
                                        << 0x1bU));
            __Vtemp21[9U] = ((IData)((((IData)(vlSelf->top__DOT__is_jump)
                                        ? 0ULL : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                      >> 0x20U)) >> 5U);
            VL_EXTEND_WW(317,315, __Vtemp22, __Vtemp21);
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                = __Vtemp22[0U];
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[1U] 
                = __Vtemp22[1U];
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U] 
                = __Vtemp22[2U];
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[3U] 
                = __Vtemp22[3U];
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[4U] 
                = __Vtemp22[4U];
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[5U] 
                = __Vtemp22[5U];
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[6U] 
                = __Vtemp22[6U];
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                = __Vtemp22[7U];
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[8U] 
                = __Vtemp22[8U];
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[9U] 
                = __Vtemp22[9U];
        }
    } else {
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] = 0U;
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[1U] = 0U;
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U] = 0U;
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[3U] = 0U;
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[4U] = 0U;
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[5U] = 0U;
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[6U] = 0U;
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] = 0U;
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[8U] = 0U;
        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[9U] = 0U;
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
    vlSelf->top__DOT__csrdata_ls = (((((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc))) 
                                       & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc) 
                                      | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec))) 
                                         & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec)) 
                                     | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus))) 
                                        & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus)) 
                                    | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause))) 
                                       & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause));
    if (vlSelf->rst_n) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__hazard_detect_u__DOT__hazard)))) {
            vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                = ((((IData)(vlSelf->top__DOT__is_jump) 
                     | (IData)(vlSelf->top__DOT__in_trap_id)) 
                    | (IData)(vlSelf->top__DOT__out_trap_id))
                    ? 0U : (IData)(vlSelf->top__DOT__IF_u__DOT__rdata));
            vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U] 
                = (IData)(((((IData)(vlSelf->top__DOT__is_jump) 
                             | (IData)(vlSelf->top__DOT__in_trap_id)) 
                            | (IData)(vlSelf->top__DOT__out_trap_id))
                            ? 0ULL : vlSelf->top__DOT__pc_new));
            vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U] 
                = (IData)((((((IData)(vlSelf->top__DOT__is_jump) 
                              | (IData)(vlSelf->top__DOT__in_trap_id)) 
                             | (IData)(vlSelf->top__DOT__out_trap_id))
                             ? 0ULL : vlSelf->top__DOT__pc_new) 
                           >> 0x20U));
        }
    } else {
        vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] = 0U;
        vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U] = 0U;
        vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U] = 0U;
    }
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin 
        = (1U & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                  >> 0x17U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                               >> 0x19U)));
    vlSelf->top__DOT__rs2_sel = ((((IData)(vlSelf->top__DOT__wben_ls) 
                                   & ((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                >> 7U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                   >> 5U)))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__instr_ls 
                                             >> 7U))))
                                  ? 1U : ((((IData)(vlSelf->top__DOT__wben_wb) 
                                            & ((0x1fU 
                                                & (vlSelf->top__DOT__instr_wb 
                                                   >> 7U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                      >> 5U)))) 
                                           & (0U != 
                                              (0x1fU 
                                               & (vlSelf->top__DOT__instr_wb 
                                                  >> 7U))))
                                           ? 2U : (
                                                   (((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                                     & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                            >> 5U)))) 
                                                    & (0U 
                                                       != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))
                                                    ? 3U
                                                    : 0U)));
    vlSelf->top__DOT__rs1_sel = ((((IData)(vlSelf->top__DOT__wben_ls) 
                                   & ((0x1fU & (vlSelf->top__DOT__instr_ls 
                                                >> 7U)) 
                                      == (0x1fU & (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                   >> 0xaU)))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__instr_ls 
                                             >> 7U))))
                                  ? 1U : ((((IData)(vlSelf->top__DOT__wben_wb) 
                                            & ((0x1fU 
                                                & (vlSelf->top__DOT__instr_wb 
                                                   >> 7U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
                                           & (0U != 
                                              (0x1fU 
                                               & (vlSelf->top__DOT__instr_wb 
                                                  >> 7U))))
                                           ? 2U : (
                                                   (((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                                     & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                            >> 0xaU)))) 
                                                    & (0U 
                                                       != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))
                                                    ? 3U
                                                    : 0U)));
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
    vlSelf->top__DOT__ex_stage_u__DOT__rs2 = ((2U & (IData)(vlSelf->top__DOT__rs2_sel))
                                               ? ((1U 
                                                   & (IData)(vlSelf->top__DOT__rs2_sel))
                                                   ? vlSelf->top__DOT__forwarding_u__DOT__rd_wb
                                                   : vlSelf->top__DOT__wb_data)
                                               : ((1U 
                                                   & (IData)(vlSelf->top__DOT__rs2_sel))
                                                   ? vlSelf->top__DOT__alures_ls
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[6U])) 
                                                    << 0x25U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[5U])) 
                                                       << 5U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[4U])) 
                                                         >> 0x1bU)))));
    vlSelf->top__DOT__ex_stage_u__DOT__rs1 = ((2U & (IData)(vlSelf->top__DOT__rs1_sel))
                                               ? ((1U 
                                                   & (IData)(vlSelf->top__DOT__rs1_sel))
                                                   ? vlSelf->top__DOT__forwarding_u__DOT__rd_wb
                                                   : vlSelf->top__DOT__wb_data)
                                               : ((1U 
                                                   & (IData)(vlSelf->top__DOT__rs1_sel))
                                                   ? vlSelf->top__DOT__alures_ls
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[4U])) 
                                                    << 0x25U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[3U])) 
                                                       << 5U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                         >> 0x1bU)))));
    if (vlSelf->rst_n) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__hazard_detect_u__DOT__hazard)))) {
            vlSelf->top__DOT__pc_new = vlSelf->top__DOT__pc_next;
        }
    } else {
        vlSelf->top__DOT__pc_new = 0x80000000ULL;
    }
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
                        if ((0U == (7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                          >> 0xcU)))) {
                            vlSelf->top__DOT__wben_id = 0U;
                        } else if ((1U == (7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__wben_id = 1U;
                        } else if ((2U == (7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__wben_id = 1U;
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
            vlSelf->top__DOT__wben_id = 1U;
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
                        if ((0U == (7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                          >> 0xcU)))) {
                            vlSelf->top__DOT__trap_id = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__ID_u__DOT__ext_op = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                    if ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                        vlSelf->top__DOT__ID_u__DOT__ext_op = 8U;
                    }
                } else {
                    vlSelf->top__DOT__ID_u__DOT__ext_op 
                        = ((4U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                            ? 1U : 0x10U);
                }
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
    vlSelf->top__DOT__out_trap_id = 0U;
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                  >> 2U)))) {
                        if ((0U == (7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                          >> 0xcU)))) {
                            if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                          >> 0x14U)))) {
                                if ((0x200000U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
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
    if ((0x40U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
        if ((0x20U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
            if ((0x10U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                  >> 2U)))) {
                        if ((0U == (7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                          >> 0xcU)))) {
                            if ((0x100000U & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) {
                                vlSelf->top__DOT__in_trap_id = 1U;
                            } else if ((1U & (~ (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                 >> 0x15U)))) {
                                vlSelf->top__DOT__in_trap_id = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__ex_stage_u__DOT__src2 = ((0x20000U 
                                                & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                ? (
                                                   (0x10000U 
                                                    & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                    ? 4ULL
                                                    : 0ULL)
                                                : (
                                                   (0x10000U 
                                                    & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                     << 0x25U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                                        << 5U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                                          >> 0x1bU)))
                                                    : vlSelf->top__DOT__ex_stage_u__DOT__rs2));
    __Vtemp25[0U] = 1U;
    __Vtemp25[1U] = 0U;
    __Vtemp25[2U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp26, vlSelf->top__DOT__ex_stage_u__DOT__rs1);
    VL_EXTEND_WQ(65,64, __Vtemp27, (~ vlSelf->top__DOT__ex_stage_u__DOT__rs2));
    VL_ADD_W(3, __Vtemp28, __Vtemp26, __Vtemp27);
    VL_ADD_W(3, __Vtemp29, __Vtemp25, __Vtemp28);
    vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry 
        = (1U & __Vtemp29[2U]);
    vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres 
        = (1ULL + (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                   + (~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)));
    vlSelf->top__DOT__ex_stage_u__DOT__src1 = ((0x40000U 
                                                & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[9U])) 
                                                    << 0x25U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[8U])) 
                                                       << 5U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])) 
                                                         >> 0x1bU)))
                                                : vlSelf->top__DOT__ex_stage_u__DOT__rs1);
    vlSelf->top__DOT__hazard_detect_u__DOT__hazard 
        = ((((3U == (0x7fU & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                               << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                         >> 0x1bU)))) 
             & ((((((0x19U == (0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 2U))) | 
                    (0x18U == (0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 2U)))) | 
                   (4U == (0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                    >> 2U)))) | (6U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                     >> 2U)))) 
                 | (0xcU == (0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                      >> 2U)))) | (0xeU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                       >> 2U))))) 
            & (((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                          >> 2U)) == (0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                               >> 0xfU))) 
               | ((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                            >> 2U)) == (0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                 >> 0x14U))))) 
           | (((3U == (0x7fU & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                 << 5U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[6U] 
                                           >> 0x1bU)))) 
               & ((3U == (0x7fU & vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                  | (8U == (0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                     >> 2U))))) & (
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                                       >> 2U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                       >> 0xfU)))));
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
        = ((0x1000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
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
    Vtop___024root____Vdpiimwrap_top__DOT__IF_u__DOT__vmemread_TOP(vlSelf->top__DOT__pc_new, 4U, vlSelf->__Vtask_top__DOT__IF_u__DOT__vmemread__1__rdata, vlSelf->top__DOT__pc_new);
    vlSelf->top__DOT__IF_u__DOT__rdata = vlSelf->__Vtask_top__DOT__IF_u__DOT__vmemread__1__rdata;
    VL_EXTEND_WI(65,1, __Vtemp31, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
        = ((vlSelf->top__DOT__ex_stage_u__DOT__src1 
            + vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin) 
           + (((QData)((IData)(__Vtemp31[1U])) << 0x20U) 
              | (QData)((IData)(__Vtemp31[0U]))));
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
    vlSelf->top__DOT__is_jump = (1U & (((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                         >> 0x14U) 
                                        | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0x15U)) 
                                       | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                           >> 0x13U) 
                                          & ((0x200U 
                                              & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])
                                              ? ((0x100U 
                                                  & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])
                                                  ? 
                                                 ((0x80U 
                                                   & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])
                                                   ? (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)
                                                   : 
                                                  (~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry)))
                                                  : 
                                                 ((0x80U 
                                                   & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])
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
                                                  (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U] 
                                                   >> 8U)) 
                                                 & ((0x80U 
                                                     & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])
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
    vlSelf->top__DOT__pc_next = ((IData)(vlSelf->top__DOT__is_jump)
                                  ? ((0x200000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                      ? (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                         + (((QData)((IData)(
                                                             vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                             << 0x25U) 
                                            | (((QData)((IData)(
                                                                vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                                << 5U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                                  >> 0x1bU))))
                                      : ((((QData)((IData)(
                                                           vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[9U])) 
                                           << 0x25U) 
                                          | (((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[8U])) 
                                              << 5U) 
                                             | ((QData)((IData)(
                                                                vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[7U])) 
                                                >> 0x1bU))) 
                                         + (((QData)((IData)(
                                                             vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                             << 0x25U) 
                                            | (((QData)((IData)(
                                                                vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[1U])) 
                                                << 5U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])) 
                                                  >> 0x1bU)))))
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
        = ((0x1000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
            ? ((0x2000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                ? ((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
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
                : ((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                    ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                       & (QData)((IData)(((0xffffffffffffffffULL 
                                           >> (0x3fU 
                                               & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                          >> 0x20U))))
                    : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res))
            : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res);
    VL_EXTEND_WQ(65,64, __Vtemp33, vlSelf->top__DOT__ex_stage_u__DOT__src1);
    VL_EXTEND_WQ(65,64, __Vtemp34, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
    VL_ADD_W(3, __Vtemp35, __Vtemp33, __Vtemp34);
    VL_EXTEND_WI(65,1, __Vtemp36, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
    VL_ADD_W(3, __Vtemp37, __Vtemp35, __Vtemp36);
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
        = ((0x10U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
            ? ((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                ? ((4U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                    ? ((2U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                        ? VL_MODDIV_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                        : VL_MODDIVS_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2))
                    : ((2U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                        ? VL_DIV_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                        : VL_DIVS_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)))
                : ((4U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                    ? ((2U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                        ? (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                           * vlSelf->top__DOT__ex_stage_u__DOT__src2)
                        : (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                           * vlSelf->top__DOT__ex_stage_u__DOT__src2))
                    : ((2U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                        ? VL_MULS_QQQ(64,64,64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                        : (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                           * vlSelf->top__DOT__ex_stage_u__DOT__src2))))
            : ((0x1000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                ? ((0x800000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                    ? ((0x400000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                        ? (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                           & vlSelf->top__DOT__ex_stage_u__DOT__src2)
                        : (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                           | vlSelf->top__DOT__ex_stage_u__DOT__src2))
                    : ((0x400000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                        ? vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift
                        : (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                           ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)))
                : ((0x800000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                    ? ((0x400000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                        ? vlSelf->top__DOT__ex_stage_u__DOT__src2
                        : (QData)((IData)((1U & ((0x2000000U 
                                                  & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                                                  ? 
                                                 ((1U 
                                                   & __Vtemp37[2U]) 
                                                  ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                                  : 
                                                 ((IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                           >> 0x3fU)) 
                                                  ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow)))))))
                    : ((0x400000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__id_reg__o_dout[0U])
                        ? vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift
                        : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o))));
}

VL_INLINE_OPT void Vtop___024root___multiclk__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___multiclk__TOP__7\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__8(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__8\n"); );
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
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__3(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        Vtop___024root___sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->clk) ^ (IData)(vlSelf->__Vclklast__TOP__clk)) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        Vtop___024root___multiclk__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
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
}
#endif  // VL_DEBUG
