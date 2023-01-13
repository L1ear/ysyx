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

void Vtop___024unit____Vdpiimwrap_axiSlaveRead_TOP____024unit(QData/*63:0*/ raddr, CData/*7:0*/ size, QData/*63:0*/ &rdata);
void Vtop___024unit____Vdpiimwrap_axiSlaveWrite_TOP____024unit(QData/*63:0*/ waddr, CData/*7:0*/ size, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*5:0*/ __Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0;
    CData/*0:0*/ __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__axi_awready;
    CData/*0:0*/ __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__aw_en;
    CData/*0:0*/ __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__axi_wready;
    CData/*0:0*/ __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__axi_bvalid;
    CData/*0:0*/ __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid;
    CData/*0:0*/ __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_awready;
    CData/*0:0*/ __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__aw_en;
    CData/*0:0*/ __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_wready;
    CData/*0:0*/ __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid;
    CData/*0:0*/ __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0;
    QData/*63:0*/ __Vtask_axiSlaveRead__11__rdata;
    QData/*63:0*/ __Vtask_axiSlaveRead__13__rdata;
    // Body
    __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__axi_wready 
        = vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_wready;
    __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__axi_bvalid 
        = vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_bvalid;
    __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__aw_en = vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__aw_en;
    __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__axi_awready 
        = vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_awready;
    __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__aw_en = vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en;
    __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid 
        = vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid;
    __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_wready 
        = vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready;
    __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_awready 
        = vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready;
    __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid 
        = vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid;
    __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid 
        = vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid;
    __Vdlyvset__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0 = 0U;
    if (vlSelf->rst_n) {
        if ((((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_arready) 
              & (IData)(vlSelf->top__DOT__axi_if_u__DOT__ar_valid)) 
             & (~ (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid)))) {
            Vtop___024unit____Vdpiimwrap_axiSlaveRead_TOP____024unit(
                                                                     (0xfffffffffffffff8ULL 
                                                                      & vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_araddr), 3U, __Vtask_axiSlaveRead__11__rdata);
            vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rdata 
                = __Vtask_axiSlaveRead__11__rdata;
        }
    } else {
        vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rdata = 0ULL;
    }
    if ((0x100073U == ((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                        << 0x1fU) | (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                     >> 1U)))) {
        Vtop___024root____Vdpiimwrap_top__DOT__ID_u__DOT__regfile_u__DOT__ebreak_TOP();
    }
    if (vlSelf->rst_n) {
        if ((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
              & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid)) 
             & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))) {
            Vtop___024unit____Vdpiimwrap_axiSlaveRead_TOP____024unit(
                                                                     (0xfffffffffffffff8ULL 
                                                                      & vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr), 3U, __Vtask_axiSlaveRead__13__rdata);
            vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata 
                = __Vtask_axiSlaveRead__13__rdata;
        }
    } else {
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata = 0ULL;
    }
    __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__axi_wready 
        = ((IData)(vlSelf->rst_n) & ((~ (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_wready)) 
                                     & (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WVALID)));
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_wready) 
             & (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WVALID))) {
            vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_bresp = 0U;
        }
    } else {
        vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_bresp = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_wready) 
             & (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WVALID))) {
            __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__axi_bvalid = 1U;
        } else if (((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_BREADY) 
                    & (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_bvalid))) {
            __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__axi_bvalid = 0U;
        }
    } else {
        __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__axi_bvalid = 0U;
    }
    if (vlSelf->rst_n) {
        if ((((~ (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_awready)) 
              & (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWVALID)) 
             & (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__aw_en))) {
            __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__axi_awready = 1U;
            __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__aw_en = 0U;
        } else if (((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_BREADY) 
                    & (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_bvalid))) {
            __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__aw_en = 1U;
            __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__axi_awready = 0U;
        } else {
            __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__axi_awready = 0U;
        }
    } else {
        __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__axi_awready = 0U;
        __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__aw_en = 1U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
             & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_valid))) {
            vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp = 0U;
        }
    } else {
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
             & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_valid))) {
            __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid = 1U;
        } else if (((IData)(vlSelf->top__DOT__axi_ls_u__DOT__b_ready) 
                    & (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid))) {
            __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid = 0U;
        }
    } else {
        __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid = 0U;
    }
    __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_wready 
        = ((IData)(vlSelf->rst_n) & ((~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready)) 
                                     & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_valid)));
    if (vlSelf->rst_n) {
        if ((((~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)) 
              & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__aw_valid)) 
             & (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en))) {
            __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_awready = 1U;
            __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__aw_en = 0U;
        } else if (((IData)(vlSelf->top__DOT__axi_ls_u__DOT__b_ready) 
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
        if ((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
              & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid)) 
             & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))) {
            __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid = 1U;
            vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp = 0U;
        } else if (((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid) 
                    & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_ready))) {
            __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid = 0U;
        }
    } else {
        __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid = 0U;
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp = 0U;
    }
    if (vlSelf->rst_n) {
        if ((((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_arready) 
              & (IData)(vlSelf->top__DOT__axi_if_u__DOT__ar_valid)) 
             & (~ (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid)))) {
            __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid = 1U;
            vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rresp = 0U;
        } else if (((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid) 
                    & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_ready))) {
            __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid = 0U;
        }
    } else {
        __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid = 0U;
        vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rresp = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_wready) 
             & (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WVALID))) {
            Vtop___024unit____Vdpiimwrap_axiSlaveWrite_TOP____024unit(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_awaddr, (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWSIZE), vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WDATA, (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_WSTRB));
        }
    } else {
        vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg0 = 0ULL;
        vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg1 = 0ULL;
        vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg2 = 0ULL;
        vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__slv_reg3 = 0ULL;
    }
    if (((3U == (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state)) 
         & (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid))) {
        vlSelf->top__DOT__axi_if_u__DOT__instr_valid_reg = 1U;
    } else if ((2U != (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))) {
        vlSelf->top__DOT__axi_if_u__DOT__instr_valid_reg = 0U;
    }
    if (((3U == (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state)) 
         & (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid))) {
        vlSelf->top__DOT__axi_if_u__DOT__rd_data_reg 
            = vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rdata;
    }
    vlSelf->top__DOT__axi_if_u__DOT__addr_reg = ((1U 
                                                  == (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
                                                  ? vlSelf->top__DOT__IF_u__DOT__pc_next_o
                                                  : vlSelf->top__DOT__axi_if_u__DOT__addr_reg);
    if (((2U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
         & (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid))) {
        vlSelf->top__DOT__axi_ls_u__DOT__trans_ok = 1U;
    } else if ((2U != (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))) {
        vlSelf->top__DOT__axi_ls_u__DOT__trans_ok = 0U;
    }
    if (((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state)) 
         & (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid))) {
        vlSelf->top__DOT__axi_ls_u__DOT__instr_valid_reg = 1U;
    } else if ((2U != (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))) {
        vlSelf->top__DOT__axi_ls_u__DOT__instr_valid_reg = 0U;
    }
    if (((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state)) 
         | (1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)))) {
        vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg 
            = vlSelf->top__DOT__ls_u__DOT__wr_data;
    }
    if (((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state)) 
         & (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid))) {
        vlSelf->top__DOT__axi_ls_u__DOT__rd_data_reg 
            = vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata;
    }
    if ((1U & ((~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)) 
               & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2_2))))) {
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_2[0U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                               >> 5U)))][0U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_2[1U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                               >> 5U)))][1U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_2[2U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                               >> 5U)))][2U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_2[3U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                               >> 5U)))][3U];
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
               & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2_1))))) {
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_1[0U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                               >> 5U)))][0U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_1[1U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                               >> 5U)))][1U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_1[2U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                               >> 5U)))][2U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay2_1[3U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                               >> 5U)))][3U];
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
               & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1_2))))) {
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_2[0U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                               >> 5U)))][0U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_2[1U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                               >> 5U)))][1U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_2[2U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                               >> 5U)))][2U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_2[3U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                               >> 5U)))][3U];
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
               & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1_1))))) {
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_1[0U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                               >> 5U)))][0U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_1[1U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                               >> 5U)))][1U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_1[2U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                               >> 5U)))][2U];
        vlSelf->top__DOT__cache_dut__DOT__dataWay1_1[3U] 
            = vlSelf->top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                               >> 5U)))][3U];
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
    if (((~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)) 
         & (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2_2))) {
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0[0U] 
            = vlSelf->top__DOT__cache_dut__DOT__inDataWay2_2[0U];
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0[1U] 
            = vlSelf->top__DOT__cache_dut__DOT__inDataWay2_2[1U];
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0[2U] 
            = vlSelf->top__DOT__cache_dut__DOT__inDataWay2_2[2U];
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0[3U] 
            = vlSelf->top__DOT__cache_dut__DOT__inDataWay2_2[3U];
        __Vdlyvset__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                >> 5U)));
    }
    if (((~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN)) 
         & (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2_1))) {
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0[0U] 
            = vlSelf->top__DOT__cache_dut__DOT__inDataWay2_1[0U];
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0[1U] 
            = vlSelf->top__DOT__cache_dut__DOT__inDataWay2_1[1U];
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0[2U] 
            = vlSelf->top__DOT__cache_dut__DOT__inDataWay2_1[2U];
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0[3U] 
            = vlSelf->top__DOT__cache_dut__DOT__inDataWay2_1[3U];
        __Vdlyvset__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                >> 5U)));
    }
    if (((~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)) 
         & (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1_2))) {
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0[0U] 
            = vlSelf->top__DOT__cache_dut__DOT__inDataWay1_2[0U];
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0[1U] 
            = vlSelf->top__DOT__cache_dut__DOT__inDataWay1_2[1U];
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0[2U] 
            = vlSelf->top__DOT__cache_dut__DOT__inDataWay1_2[2U];
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0[3U] 
            = vlSelf->top__DOT__cache_dut__DOT__inDataWay1_2[3U];
        __Vdlyvset__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                >> 5U)));
    }
    if (((~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN)) 
         & (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1_1))) {
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0[0U] 
            = vlSelf->top__DOT__cache_dut__DOT__inDataWay1_1[0U];
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0[1U] 
            = vlSelf->top__DOT__cache_dut__DOT__inDataWay1_1[1U];
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0[2U] 
            = vlSelf->top__DOT__cache_dut__DOT__inDataWay1_1[2U];
        __Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0[3U] 
            = vlSelf->top__DOT__cache_dut__DOT__inDataWay1_1[3U];
        __Vdlyvset__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                >> 5U)));
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
    vlSelf->top__DOT__axi_ls_u__DOT__addr_reg = (((1U 
                                                   == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state)) 
                                                  | (1U 
                                                     == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                   << 0x3eU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                      << 0x1eU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                        >> 2U)))
                                                  : vlSelf->top__DOT__axi_ls_u__DOT__addr_reg);
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
             & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_valid))) {
            Vtop___024unit____Vdpiimwrap_axiSlaveWrite_TOP____024unit(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr, (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size), 
                                                                      (vlSelf->top__DOT__ls_u__DOT__wr_data 
                                                                       << 
                                                                       (0x38U 
                                                                        & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                                           << 1U))), 
                                                                      (0xffU 
                                                                       & ((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask) 
                                                                          << 
                                                                          (7U 
                                                                           & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                                                              >> 2U)))));
        }
    } else {
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0 = 0ULL;
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1 = 0ULL;
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2 = 0ULL;
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3 = 0ULL;
    }
    vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_bvalid 
        = __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__axi_bvalid;
    vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_wready 
        = __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__axi_wready;
    vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid 
        = __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid 
        = __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid 
        = __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid;
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
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready 
        = __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_wready;
    if (vlSelf->rst_n) {
        if (((~ (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_arready)) 
             & (IData)(vlSelf->top__DOT__axi_if_u__DOT__ar_valid))) {
            vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_arready = 1U;
            vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_araddr 
                = vlSelf->top__DOT__IF_u__DOT__pc_next_o;
        } else {
            vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_arready = 0U;
        }
    } else {
        vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_arready = 0U;
        vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_araddr = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready)) 
             & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__ar_valid))) {
            vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready = 1U;
            vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr 
                = (((QData)((IData)(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                    << 0x3eU) | (((QData)((IData)(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                  << 0x1eU) | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U)));
        } else {
            vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready = 0U;
        }
    } else {
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready = 0U;
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr = 0ULL;
    }
    if (vlSelf->rst_n) {
        if ((((~ (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_awready)) 
              & (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWVALID)) 
             & (IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__aw_en))) {
            vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_awaddr 
                = vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__S_AXI_AWADDR;
        }
    } else {
        vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_awaddr = 0ULL;
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
    if (vlSelf->rst_n) {
        if ((((~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)) 
              & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__aw_valid)) 
             & (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en))) {
            vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr 
                = (((QData)((IData)(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                    << 0x3eU) | (((QData)((IData)(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                  << 0x1eU) | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U)));
        }
    } else {
        vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr = 0ULL;
    }
    vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_awready 
        = __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__axi_awready;
    vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__aw_en = __Vdly__top__DOT__ifAxiSlaveRam_u__DOT__aw_en;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en = __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__aw_en;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready 
        = __Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_awready;
}

extern const VlUnpacked<CData/*0:0*/, 4> Vtop__ConstPool__TABLE_f41eaeaa_0;
extern const VlUnpacked<CData/*0:0*/, 4> Vtop__ConstPool__TABLE_bc203658_0;
extern const VlUnpacked<CData/*7:0*/, 16> Vtop__ConstPool__TABLE_b95eb736_0;
extern const VlUnpacked<CData/*2:0*/, 16> Vtop__ConstPool__TABLE_0ca066a7_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vtop__ConstPool__TABLE_c892b8d4_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx1;
    CData/*1:0*/ __Vtableidx2;
    CData/*3:0*/ __Vtableidx3;
    CData/*1:0*/ __Vtableidx4;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__cache_dut__DOT__tagArray1__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cache_dut__DOT__tagArray1__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__cache_dut__DOT__tagArray2__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cache_dut__DOT__tagArray2__v0;
    IData/*20:0*/ __Vdlyvval__top__DOT__cache_dut__DOT__tagArray1__v0;
    IData/*20:0*/ __Vdlyvval__top__DOT__cache_dut__DOT__tagArray2__v0;
    VlWide<10>/*319:0*/ __Vtemp30;
    VlWide<7>/*223:0*/ __Vtemp34;
    VlWide<3>/*95:0*/ __Vtemp54;
    VlWide<3>/*95:0*/ __Vtemp55;
    VlWide<3>/*95:0*/ __Vtemp56;
    VlWide<3>/*95:0*/ __Vtemp57;
    VlWide<3>/*95:0*/ __Vtemp58;
    VlWide<3>/*95:0*/ __Vtemp60;
    VlWide<3>/*95:0*/ __Vtemp62;
    VlWide<3>/*95:0*/ __Vtemp63;
    VlWide<3>/*95:0*/ __Vtemp64;
    VlWide<3>/*95:0*/ __Vtemp65;
    VlWide<3>/*95:0*/ __Vtemp66;
    QData/*63:0*/ __Vtemp21;
    // Body
    __Vdlyvset__top__DOT__cache_dut__DOT__tagArray2__v0 = 0U;
    __Vdlyvset__top__DOT__cache_dut__DOT__tagArray1__v0 = 0U;
    if (vlSelf->rst_n) {
        vlSelf->top__DOT__axi_if_u__DOT__r_state = vlSelf->top__DOT__axi_if_u__DOT__r_state_next;
        vlSelf->top__DOT__axi_ls_u__DOT__w_state = vlSelf->top__DOT__axi_ls_u__DOT__w_state_next;
    } else {
        vlSelf->top__DOT__axi_if_u__DOT__r_state = 0U;
        vlSelf->top__DOT__axi_ls_u__DOT__w_state = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec) {
            vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec 
                = ((3ULL & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec) 
                   | (0xfffffffffffffffcULL & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data));
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec = 0ULL;
    }
    vlSelf->top__DOT__axi_ls_u__DOT__r_state = ((IData)(vlSelf->rst_n)
                                                 ? (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state_next)
                                                 : 0U);
    if (vlSelf->rst_n) {
        if ((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
              & (0ULL != vlSelf->top__DOT__pc_new)) 
             | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                 & (0ULL != vlSelf->top__DOT__pc_new)) 
                & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))) {
            vlSelf->top__DOT__cache_dut__DOT__tagWay1_q 
                = vlSelf->top__DOT__cache_dut__DOT__tagArray1
                [(0x3fU & (IData)((vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                   >> 5U)))];
        }
    } else {
        vlSelf->top__DOT__cache_dut__DOT__tagWay1_q = 0U;
    }
    if (vlSelf->rst_n) {
        if ((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
              & (0ULL != vlSelf->top__DOT__pc_new)) 
             | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                 & (0ULL != vlSelf->top__DOT__pc_new)) 
                & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))) {
            vlSelf->top__DOT__cache_dut__DOT__tagWay2_q 
                = vlSelf->top__DOT__cache_dut__DOT__tagArray2
                [(0x3fU & (IData)((vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                   >> 5U)))];
        }
    } else {
        vlSelf->top__DOT__cache_dut__DOT__tagWay2_q = 0U;
    }
    if ((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) {
        __Vdlyvval__top__DOT__cache_dut__DOT__tagArray2__v0 
            = vlSelf->top__DOT__cache_dut__DOT__tagArray2_d;
        __Vdlyvset__top__DOT__cache_dut__DOT__tagArray2__v0 = 1U;
        __Vdlyvdim0__top__DOT__cache_dut__DOT__tagArray2__v0 
            = (0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                >> 5U)));
    }
    if ((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) {
        __Vdlyvval__top__DOT__cache_dut__DOT__tagArray1__v0 
            = vlSelf->top__DOT__cache_dut__DOT__tagArray1_d;
        __Vdlyvset__top__DOT__cache_dut__DOT__tagArray1__v0 = 1U;
        __Vdlyvdim0__top__DOT__cache_dut__DOT__tagArray1__v0 
            = (0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                >> 5U)));
    }
    if (vlSelf->rst_n) {
        if ((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
              & (0ULL != vlSelf->top__DOT__pc_new)) 
             | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                 & (0ULL != vlSelf->top__DOT__pc_new)) 
                & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))) {
            vlSelf->top__DOT__cache_dut__DOT__validWay2_q 
                = (1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                 >> (0x3fU & (IData)(
                                                     (vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                      >> 5U))))));
        }
    } else {
        vlSelf->top__DOT__cache_dut__DOT__validWay2_q = 0U;
    }
    if (vlSelf->rst_n) {
        if ((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
              & (0ULL != vlSelf->top__DOT__pc_new)) 
             | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                 & (0ULL != vlSelf->top__DOT__pc_new)) 
                & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))) {
            vlSelf->top__DOT__cache_dut__DOT__validWay1_q 
                = (1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                 >> (0x3fU & (IData)(
                                                     (vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                      >> 5U))))));
        }
    } else {
        vlSelf->top__DOT__cache_dut__DOT__validWay1_q = 0U;
    }
    if (vlSelf->rst_n) {
        if ((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
              & (0ULL != vlSelf->top__DOT__pc_new)) 
             | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                 & (0ULL != vlSelf->top__DOT__pc_new)) 
                & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))) {
            vlSelf->top__DOT__cache_dut__DOT__bitValid2 
                = (1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                 >> (0x3fU & (IData)(
                                                     (vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                      >> 5U))))));
        }
    } else {
        vlSelf->top__DOT__cache_dut__DOT__bitValid2 = 0U;
    }
    if (vlSelf->rst_n) {
        if ((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
              & (0ULL != vlSelf->top__DOT__pc_new)) 
             | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                 & (0ULL != vlSelf->top__DOT__pc_new)) 
                & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))) {
            vlSelf->top__DOT__cache_dut__DOT__bitValid1 
                = (1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                 >> (0x3fU & (IData)(
                                                     (vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                      >> 5U))))));
        }
    } else {
        vlSelf->top__DOT__cache_dut__DOT__bitValid1 = 0U;
    }
    if (vlSelf->rst_n) {
        if ((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
             & (IData)(vlSelf->top__DOT__wb_stall_n))) {
            vlSelf->top__DOT__forwarding_u__DOT__rd_wb 
                = vlSelf->top__DOT__wb_data;
        }
    } else {
        vlSelf->top__DOT__forwarding_u__DOT__rd_wb = 0ULL;
    }
    if (vlSelf->rst_n) {
        if ((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
             & (IData)(vlSelf->top__DOT__wb_stall_n))) {
            vlSelf->top__DOT__forwarding_u__DOT__reg_wben 
                = (1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U]);
        }
    } else {
        vlSelf->top__DOT__forwarding_u__DOT__reg_wben = 0U;
    }
    if (vlSelf->rst_n) {
        if ((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
             & (IData)(vlSelf->top__DOT__wb_stall_n))) {
            vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx 
                = (0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                            >> 8U));
        }
    } else {
        vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx = 0U;
    }
    if (vlSelf->rst_n) {
        if ((1U & ((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause) 
                   | vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U]))) {
            vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause 
                = ((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                    ? ((0x1cU == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                           >> 4U)))
                        ? 0xbULL : 0ULL) : vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data);
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause = 0ULL;
    }
    if (vlSelf->rst_n) {
        if ((1U & ((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus) 
                   | vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U]))) {
            __Vtemp21 = ((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                          ? ((((0x1cU == (0x1fU & (
                                                   vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 4U))) 
                               & (~ (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                     >> 0x17U))) & 
                              (0U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                            >> 0xeU))))
                              ? ((0xffffffffffffe000ULL 
                                  & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus) 
                                 | (QData)((IData)(
                                                   (0x1800U 
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
                                 | (QData)((IData)(
                                                   (0x80U 
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
                = __Vtemp21;
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus = 0xa00001800ULL;
    }
    if (vlSelf->rst_n) {
        if ((1U & ((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc) 
                   | vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U]))) {
            vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc 
                = ((3ULL & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc) 
                   | (((1U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                        ? (((QData)((IData)(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U])) 
                            << 0x3cU) | (((QData)((IData)(
                                                          vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U])) 
                                          << 0x1cU) 
                                         | ((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U])) 
                                            >> 4U)))
                        : (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data 
                           >> 2U)) << 2U));
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc = 0ULL;
    }
    if (__Vdlyvset__top__DOT__cache_dut__DOT__tagArray2__v0) {
        vlSelf->top__DOT__cache_dut__DOT__tagArray2[__Vdlyvdim0__top__DOT__cache_dut__DOT__tagArray2__v0] 
            = __Vdlyvval__top__DOT__cache_dut__DOT__tagArray2__v0;
    }
    if (__Vdlyvset__top__DOT__cache_dut__DOT__tagArray1__v0) {
        vlSelf->top__DOT__cache_dut__DOT__tagArray1[__Vdlyvdim0__top__DOT__cache_dut__DOT__tagArray1__v0] 
            = __Vdlyvval__top__DOT__cache_dut__DOT__tagArray1__v0;
    }
    __Vtableidx2 = vlSelf->top__DOT__axi_if_u__DOT__r_state;
    vlSelf->top__DOT__axi_if_u__DOT__ar_valid = Vtop__ConstPool__TABLE_f41eaeaa_0
        [__Vtableidx2];
    vlSelf->top__DOT__axi_if_u__DOT__r_ready = Vtop__ConstPool__TABLE_bc203658_0
        [__Vtableidx2];
    vlSelf->top__DOT__axi_ls_u__DOT__aw_valid = (IData)(
                                                        (1U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
    vlSelf->top__DOT__axi_ls_u__DOT__w_valid = (IData)(
                                                       (3U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
    vlSelf->top__DOT__axi_ls_u__DOT__b_ready = (((IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state) 
                                                 >> 1U) 
                                                & ((~ (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
                                                   & (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid)));
    __Vtableidx4 = vlSelf->top__DOT__axi_ls_u__DOT__r_state;
    vlSelf->top__DOT__axi_ls_u__DOT__ar_valid = Vtop__ConstPool__TABLE_f41eaeaa_0
        [__Vtableidx4];
    vlSelf->top__DOT__axi_ls_u__DOT__r_ready = Vtop__ConstPool__TABLE_bc203658_0
        [__Vtableidx4];
    if ((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) {
        vlSelf->top__DOT__cache_dut__DOT__validArray2 
            = (((~ (1ULL << (0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                              >> 5U))))) 
                & vlSelf->top__DOT__cache_dut__DOT__validArray2) 
               | ((QData)((IData)(vlSelf->top__DOT__cache_dut__DOT__bitValid2_d)) 
                  << (0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                       >> 5U)))));
    }
    if ((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) {
        vlSelf->top__DOT__cache_dut__DOT__validArray1 
            = (((~ (1ULL << (0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                              >> 5U))))) 
                & vlSelf->top__DOT__cache_dut__DOT__validArray1) 
               | ((QData)((IData)(vlSelf->top__DOT__cache_dut__DOT__bitValid1_d)) 
                  << (0x3fU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                       >> 5U)))));
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__wb_stall_n) {
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
        if ((1U & (~ ((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                      | (IData)(vlSelf->top__DOT__ls_not_ok))))) {
            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                = (((IData)(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                              ? (((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                              : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)) 
                    << 2U) | ((2U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                     >> 0xeU)) | (1U 
                                                  & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U] 
                = (((IData)(((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                              ? (((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                              : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)) 
                    >> 0x1eU) | ((IData)((((0x4000000U 
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
                                          >> 0x20U)) 
                                 << 2U));
            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U] 
                = (((IData)((((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                               ? (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout)))
                               : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout) 
                             >> 0x20U)) >> 0x1eU) | 
                   ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                    << 2U));
            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U] 
                = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                    >> 0x1eU) | ((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                          >> 0x20U)) 
                                 << 2U));
            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                             >> 0x20U)) >> 0x1eU) | 
                   ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                     << 7U) | (0x7cU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                        >> 0x19U))));
            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                          >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                         << 7U) | (0x7cU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                      >> 0x19U))));
            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U] 
                = ((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                          >> 0x19U)) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                         << 7U) | (0x7cU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                      >> 0x19U))));
            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U] 
                = (3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                         >> 0x19U));
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
    if (vlSelf->rst_n) {
        if ((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
              & (0ULL != vlSelf->top__DOT__pc_new)) 
             | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                 & (0ULL != vlSelf->top__DOT__pc_new)) 
                & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))) {
            vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                = (QData)((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o));
        }
    } else {
        vlSelf->top__DOT__cache_dut__DOT__reqLatch = 0ULL;
    }
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
    vlSelf->top__DOT__axi_ls_u__DOT__r_state_next = 
        ((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
          ? ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
              ? ((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)
                  ? 2U : 3U) : ((3U == (0x7fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U)))
                                 ? (((((QData)((IData)(
                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                        >> 2U))) != vlSelf->top__DOT__axi_ls_u__DOT__addr_reg)
                                     ? 1U : 2U) : 0U))
          : ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
              ? ((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready)
                  ? 3U : 1U) : ((3U == (0x7fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 2U)))
                                 ? 1U : 0U)));
    __Vtableidx3 = ((((8U == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                       >> 4U))) & (3U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                       >> 0xeU)))) 
                     << 3U) | ((((8U == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 4U))) 
                                 & (2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 0xeU)))) 
                                << 2U) | ((((8U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 4U))) 
                                            & (1U == 
                                               (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU)))) 
                                           << 1U) | 
                                          ((8U == (0x1fU 
                                                   & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                      >> 4U))) 
                                           & (0U == 
                                              (7U & 
                                               (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))))));
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask 
        = Vtop__ConstPool__TABLE_b95eb736_0[__Vtableidx3];
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size 
        = Vtop__ConstPool__TABLE_0ca066a7_0[__Vtableidx3];
    vlSelf->top__DOT__ls_u__DOT__wr_data = (((0U == 
                                              (0x1fU 
                                               & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                  >> 3U))) 
                                             & ((0x1fU 
                                                 & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                    >> 0x16U)) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                    >> 8U))))
                                             ? (((QData)((IData)(
                                                                 vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                                 << 0x3fU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                                      >> 1U)))
                                             : (((QData)((IData)(
                                                                 vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U])) 
                                                 << 0x3eU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[3U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                      >> 2U))));
    vlSelf->top__DOT__ls_sram_rd_data = ((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
                                          ? ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))
                                              ? 0ULL
                                              : (((
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                    << 0x3eU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                       << 0x1eU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                         >> 2U))) 
                                                  != vlSelf->top__DOT__axi_ls_u__DOT__addr_reg)
                                                  ? 0ULL
                                                  : vlSelf->top__DOT__axi_ls_u__DOT__rd_data_reg))
                                          : 0ULL);
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en 
        = ((((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                           >> 0xeU))) | (2U == (7U 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 0xeU)))) 
            | (3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                            >> 0xeU)))) & (0x1cU == 
                                           (0x1fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 4U))));
    if (vlSelf->rst_n) {
        if ((1U & (~ ((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                      | (IData)(vlSelf->top__DOT__ls_not_ok))))) {
            __Vtemp30[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                = __Vtemp30[0U];
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U] 
                = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                    >> 5U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                       >> 0x20U)) << 0x1bU));
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U] 
                = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                             >> 0x20U)) >> 5U) | ((IData)(
                                                          ((0U 
                                                            == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                            ? 0ULL
                                                            : 
                                                           vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                                           [vlSelf->top__DOT__rs1_idx_id])) 
                                                  << 0x1bU));
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U] 
                = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                              ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                             [vlSelf->top__DOT__rs1_idx_id])) 
                    >> 5U) | ((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs1_idx_id]) 
                                       >> 0x20U)) << 0x1bU));
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U] 
                = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                               ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                              [vlSelf->top__DOT__rs1_idx_id]) 
                             >> 0x20U)) >> 5U) | ((IData)(
                                                          ((0U 
                                                            == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                            ? 0ULL
                                                            : 
                                                           vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                                           [vlSelf->top__DOT__rs2_idx_id])) 
                                                  << 0x1bU));
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U] 
                = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                              ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                             [vlSelf->top__DOT__rs2_idx_id])) 
                    >> 5U) | ((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs2_idx_id]) 
                                       >> 0x20U)) << 0x1bU));
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                               ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                              [vlSelf->top__DOT__rs2_idx_id]) 
                             >> 0x20U)) >> 5U) | (((IData)(vlSelf->top__DOT__ex_flush)
                                                    ? 0U
                                                    : 
                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                                                  << 0x1bU));
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                = ((((IData)(vlSelf->top__DOT__ex_flush)
                      ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                    >> 5U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                        ? 0ULL : (((QData)((IData)(
                                                                   vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                              << 0x1bU));
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                              ? 0ULL : (((QData)((IData)(
                                                         vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                    >> 5U) | ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                       >> 0x20U)) << 0x1bU));
            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                              ? 0ULL : (((QData)((IData)(
                                                         vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                            >> 0x20U)) >> 5U);
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
    vlSelf->top__DOT__axi_ls_u__DOT__w_state_next = 
        ((2U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
          ? ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
              ? ((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready)
                  ? 2U : 3U) : ((8U == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 4U)))
                                 ? (((((((QData)((IData)(
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
                                     ? 1U : 2U) : 0U))
          : ((1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))
              ? ((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)
                  ? 3U : 1U) : ((8U == (0x1fU & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 4U)))
                                 ? 1U : 0U)));
    if ((0x10U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) {
        vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b 
            = (0xffU & ((8U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                         ? ((4U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                             ? (IData)((vlSelf->top__DOT__ls_sram_rd_data 
                                        >> 0x38U)) : (IData)(
                                                             (vlSelf->top__DOT__ls_sram_rd_data 
                                                              >> 0x30U)))
                         : ((4U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                             ? (IData)((vlSelf->top__DOT__ls_sram_rd_data 
                                        >> 0x28U)) : (IData)(
                                                             (vlSelf->top__DOT__ls_sram_rd_data 
                                                              >> 0x20U)))));
        vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h 
            = (0xffffU & ((8U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                           ? (IData)((vlSelf->top__DOT__ls_sram_rd_data 
                                      >> 0x30U)) : (IData)(
                                                           (vlSelf->top__DOT__ls_sram_rd_data 
                                                            >> 0x20U))));
    } else {
        vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b 
            = (0xffU & ((8U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                         ? ((4U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                             ? (IData)((vlSelf->top__DOT__ls_sram_rd_data 
                                        >> 0x18U)) : (IData)(
                                                             (vlSelf->top__DOT__ls_sram_rd_data 
                                                              >> 0x10U)))
                         : ((4U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                             ? (IData)((vlSelf->top__DOT__ls_sram_rd_data 
                                        >> 8U)) : (IData)(vlSelf->top__DOT__ls_sram_rd_data))));
        vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h 
            = (0xffffU & ((8U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])
                           ? (IData)((vlSelf->top__DOT__ls_sram_rd_data 
                                      >> 0x10U)) : (IData)(vlSelf->top__DOT__ls_sram_rd_data)));
    }
    if ((0x10U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) {
        if ((0x10U & vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) {
            vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w 
                = (IData)((vlSelf->top__DOT__ls_sram_rd_data 
                           >> 0x20U));
        }
    } else {
        vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w 
            = (IData)(vlSelf->top__DOT__ls_sram_rd_data);
    }
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc 
        = ((0x341U == (0xfffU & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                  << 0xaU) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 0x16U)))) 
           & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec 
        = ((0x305U == (0xfffU & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                  << 0xaU) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 0x16U)))) 
           & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus 
        = ((0x300U == (0xfffU & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                  << 0xaU) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 0x16U)))) 
           & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause 
        = ((0x342U == (0xfffU & ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                  << 0xaU) | (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 0x16U)))) 
           & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
    vlSelf->top__DOT__cache_dut__DOT__cacheCurState 
        = ((IData)(vlSelf->rst_n) ? (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheNexState)
            : 0U);
    vlSelf->top__DOT__cache_dut__DOT__way1Hit = (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fffffU 
                                                               & (vlSelf->top__DOT__cache_dut__DOT__tagWay1_q 
                                                                  ^ (IData)(
                                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                             >> 0xbU))))))) 
                                                  & (IData)(vlSelf->top__DOT__cache_dut__DOT__bitValid1))
                                                  ? 1U
                                                  : 0U);
    vlSelf->top__DOT__cache_dut__DOT__way2Hit = (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fffffU 
                                                               & (vlSelf->top__DOT__cache_dut__DOT__tagWay2_q 
                                                                  ^ (IData)(
                                                                            (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                             >> 0xbU))))))) 
                                                  & (IData)(vlSelf->top__DOT__cache_dut__DOT__bitValid2))
                                                  ? 1U
                                                  : 0U);
    vlSelf->top__DOT__csrdata_ls = (((((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc))) 
                                       & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc) 
                                      | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec))) 
                                         & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec)) 
                                     | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus))) 
                                        & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus)) 
                                    | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause))) 
                                       & vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause));
    if (vlSelf->rst_n) {
        if ((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                       | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                      | (IData)(vlSelf->top__DOT__ls_not_ok))))) {
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
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin 
        = (1U & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                  >> 0x17U) | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                               >> 0x19U)));
    vlSelf->top__DOT__rs2_sel = ((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                    >> 1U) & ((0x1fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 9U)) 
                                              == (0x1fU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                     >> 5U)))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 9U))))
                                  ? 1U : (((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                            & ((0x1fU 
                                                & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 5U)))) 
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
                                                            >> 5U)))) 
                                                    & (0U 
                                                       != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))
                                                    ? 3U
                                                    : 0U)));
    vlSelf->top__DOT__rs1_sel = ((((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                    >> 1U) & ((0x1fU 
                                               & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                  >> 9U)) 
                                              == (0x1fU 
                                                  & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                     >> 0xaU)))) 
                                  & (0U != (0x1fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 9U))))
                                  ? 1U : (((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                            & ((0x1fU 
                                                & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U)) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xaU)))) 
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
                                                            >> 0xaU)))) 
                                                    & (0U 
                                                       != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))
                                                    ? 3U
                                                    : 0U)));
    vlSelf->top__DOT__cache_dut__DOT__cacheHit = ((IData)(vlSelf->top__DOT__cache_dut__DOT__way1Hit) 
                                                  | (IData)(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data 
        = ((((- (QData)((IData)((1U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                              >> 0xeU)))))) 
             & (((QData)((IData)(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                 << 0x3eU) | (((QData)((IData)(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                               << 0x1eU) | ((QData)((IData)(
                                                            vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                            >> 2U)))) 
            | ((- (QData)((IData)((2U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                >> 0xeU)))))) 
               & ((((QData)((IData)(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                    << 0x3eU) | (((QData)((IData)(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                  << 0x1eU) | ((QData)((IData)(
                                                               vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                               >> 2U))) 
                  | vlSelf->top__DOT__csrdata_ls))) 
           | ((- (QData)((IData)((3U == (7U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                               >> 0xeU)))))) 
              & ((~ (((QData)((IData)(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                      << 0x3eU) | (((QData)((IData)(
                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                    << 0x1eU) | ((QData)((IData)(
                                                                 vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                 >> 2U)))) 
                 & vlSelf->top__DOT__csrdata_ls)));
    __Vtemp34[0U] = (IData)(((((((((- (QData)((IData)(
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
                                       << 8U) | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b)))) 
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
                                        << 0x10U) | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h))))) 
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
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w))))) 
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
                                & vlSelf->top__DOT__ls_sram_rd_data)));
    __Vtemp34[1U] = (IData)((((((((((- (QData)((IData)(
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
                                        << 8U) | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b)))) 
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
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w))))) 
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
                                 & vlSelf->top__DOT__ls_sram_rd_data)) 
                             >> 0x20U));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[0U] 
        = (IData)(vlSelf->top__DOT__csrdata_ls);
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[1U] 
        = (IData)((vlSelf->top__DOT__csrdata_ls >> 0x20U));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[2U] 
        = ((__Vtemp34[0U] << 1U) | (1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                          >> 1U)));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[3U] 
        = ((__Vtemp34[0U] >> 0x1fU) | (__Vtemp34[1U] 
                                       << 1U));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[4U] 
        = ((__Vtemp34[1U] >> 0x1fU) | ((IData)((((QData)((IData)(
                                                                 vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                                 << 0x3eU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                      >> 2U)))) 
                                       << 1U));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[5U] 
        = (((IData)((((QData)((IData)(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                      << 0x3eU) | (((QData)((IData)(
                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                    << 0x1eU) | ((QData)((IData)(
                                                                 vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                 >> 2U)))) 
            >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                                    << 0x3eU) | (((QData)((IData)(
                                                                  vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                    >> 2U))) 
                                  >> 0x20U)) << 1U));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[6U] 
        = (((IData)(((((QData)((IData)(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[2U])) 
                       << 0x3eU) | (((QData)((IData)(
                                                     vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                     << 0x1eU) | ((QData)((IData)(
                                                                  vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                  >> 2U))) 
                     >> 0x20U)) >> 0x1fU) | ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                              << 0x1fU) 
                                             | (0x7ffffffeU 
                                                & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                   >> 1U))));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[7U] 
        = ((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                  >> 1U)) | ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U] 
                              << 0x1fU) | (0x7ffffffeU 
                                           & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[5U] 
                                              >> 1U))));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[8U] 
        = ((1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U] 
                  >> 1U)) | ((vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U] 
                              << 0x1fU) | (0x7ffffffeU 
                                           & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[6U] 
                                              >> 1U))));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[9U] 
        = (1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[7U] 
                 >> 1U));
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
                                                    << 0x3eU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                       << 0x1eU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                         >> 2U)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                                    << 0x25U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                                       << 5U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                         >> 0x1bU)))));
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
                                                    << 0x3eU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[1U])) 
                                                       << 0x1eU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U])) 
                                                         >> 2U)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                                    << 0x25U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                                       << 5U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                         >> 0x1bU)))));
    vlSelf->top__DOT__cache_dut__DOT__randomBit = VL_RANDOM_I(32);
    if ((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) {
        if ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)) {
            Vtop___024unit____Vdpiimwrap_axiSlaveRead_TOP____024unit(
                                                                     ((QData)((IData)(
                                                                                (0x1fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                                >> 0xbU))))) 
                                                                      << 0xbU), 3U, vlSelf->__Vtask_axiSlaveRead__0__rdata);
            vlSelf->top__DOT__cache_dut__DOT__inDataWay1_1[0U] 
                = (IData)(vlSelf->__Vtask_axiSlaveRead__0__rdata);
            vlSelf->top__DOT__cache_dut__DOT__inDataWay1_1[1U] 
                = (IData)((vlSelf->__Vtask_axiSlaveRead__0__rdata 
                           >> 0x20U));
            vlSelf->top__DOT__cache_dut__DOT__inDataWay2_1[0U] 
                = VL_RANDOM_I(32);
            vlSelf->top__DOT__cache_dut__DOT__inDataWay2_1[1U] 
                = VL_RANDOM_I(32);
            vlSelf->top__DOT__cache_dut__DOT__inDataWay2_1[2U] 
                = (IData)((((QData)((IData)(VL_RANDOM_I(32))) 
                            << 0x20U) | (QData)((IData)(
                                                        VL_RANDOM_I(32)))));
            vlSelf->top__DOT__cache_dut__DOT__inDataWay2_1[3U] 
                = (IData)(((((QData)((IData)(VL_RANDOM_I(32))) 
                             << 0x20U) | (QData)((IData)(
                                                         VL_RANDOM_I(32)))) 
                           >> 0x20U));
            vlSelf->top__DOT__cache_dut__DOT__inDataWay2_2[0U] 
                = VL_RANDOM_I(32);
            vlSelf->top__DOT__cache_dut__DOT__inDataWay2_2[1U] 
                = VL_RANDOM_I(32);
            vlSelf->top__DOT__cache_dut__DOT__inDataWay2_2[2U] 
                = (IData)((((QData)((IData)(VL_RANDOM_I(32))) 
                            << 0x20U) | (QData)((IData)(
                                                        VL_RANDOM_I(32)))));
            vlSelf->top__DOT__cache_dut__DOT__inDataWay2_2[3U] 
                = (IData)(((((QData)((IData)(VL_RANDOM_I(32))) 
                             << 0x20U) | (QData)((IData)(
                                                         VL_RANDOM_I(32)))) 
                           >> 0x20U));
            vlSelf->top__DOT__cache_dut__DOT__wenWay1_1 = 1U;
            vlSelf->top__DOT__cache_dut__DOT__wenWay1_2 = 1U;
            vlSelf->top__DOT__cache_dut__DOT__wenWay2_1 = 0U;
            vlSelf->top__DOT__cache_dut__DOT__wenWay2_2 = 0U;
            vlSelf->top__DOT__cache_dut__DOT__bitValid1_d = 1U;
            vlSelf->top__DOT__cache_dut__DOT__bitValid2_d = 0U;
            vlSelf->top__DOT__cache_dut__DOT__tagArray1_d 
                = (0x1fffffU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                        >> 0xbU)));
            vlSelf->top__DOT__cache_dut__DOT__tagArray2_d = 0U;
            Vtop___024unit____Vdpiimwrap_axiSlaveRead_TOP____024unit(
                                                                     (8ULL 
                                                                      + 
                                                                      ((QData)((IData)(
                                                                                (0x1fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                                >> 0xbU))))) 
                                                                       << 0xbU)), 3U, vlSelf->__Vtask_axiSlaveRead__1__rdata);
            vlSelf->top__DOT__cache_dut__DOT__inDataWay1_1[2U] 
                = (IData)(vlSelf->__Vtask_axiSlaveRead__1__rdata);
            vlSelf->top__DOT__cache_dut__DOT__inDataWay1_1[3U] 
                = (IData)((vlSelf->__Vtask_axiSlaveRead__1__rdata 
                           >> 0x20U));
            Vtop___024unit____Vdpiimwrap_axiSlaveRead_TOP____024unit(
                                                                     (0x10ULL 
                                                                      + 
                                                                      ((QData)((IData)(
                                                                                (0x1fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                                >> 0xbU))))) 
                                                                       << 0xbU)), 3U, vlSelf->__Vtask_axiSlaveRead__2__rdata);
            vlSelf->top__DOT__cache_dut__DOT__inDataWay1_2[0U] 
                = (IData)(vlSelf->__Vtask_axiSlaveRead__2__rdata);
            vlSelf->top__DOT__cache_dut__DOT__inDataWay1_2[1U] 
                = (IData)((vlSelf->__Vtask_axiSlaveRead__2__rdata 
                           >> 0x20U));
            Vtop___024unit____Vdpiimwrap_axiSlaveRead_TOP____024unit(
                                                                     (0x18ULL 
                                                                      + 
                                                                      ((QData)((IData)(
                                                                                (0x1fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                                >> 0xbU))))) 
                                                                       << 0xbU)), 3U, vlSelf->__Vtask_axiSlaveRead__3__rdata);
            vlSelf->top__DOT__cache_dut__DOT__inDataWay1_2[2U] 
                = (IData)(vlSelf->__Vtask_axiSlaveRead__3__rdata);
            vlSelf->top__DOT__cache_dut__DOT__inDataWay1_2[3U] 
                = (IData)((vlSelf->__Vtask_axiSlaveRead__3__rdata 
                           >> 0x20U));
        } else {
            Vtop___024unit____Vdpiimwrap_axiSlaveRead_TOP____024unit(
                                                                     ((QData)((IData)(
                                                                                (0x1fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                                >> 0xbU))))) 
                                                                      << 0xbU), 3U, vlSelf->__Vtask_axiSlaveRead__4__rdata);
            vlSelf->top__DOT__cache_dut__DOT__inDataWay1_1[0U] 
                = VL_RANDOM_I(32);
            vlSelf->top__DOT__cache_dut__DOT__inDataWay1_1[1U] 
                = VL_RANDOM_I(32);
            vlSelf->top__DOT__cache_dut__DOT__inDataWay1_1[2U] 
                = (IData)((((QData)((IData)(VL_RANDOM_I(32))) 
                            << 0x20U) | (QData)((IData)(
                                                        VL_RANDOM_I(32)))));
            vlSelf->top__DOT__cache_dut__DOT__inDataWay1_1[3U] 
                = (IData)(((((QData)((IData)(VL_RANDOM_I(32))) 
                             << 0x20U) | (QData)((IData)(
                                                         VL_RANDOM_I(32)))) 
                           >> 0x20U));
            vlSelf->top__DOT__cache_dut__DOT__inDataWay1_2[0U] 
                = VL_RANDOM_I(32);
            vlSelf->top__DOT__cache_dut__DOT__inDataWay1_2[1U] 
                = VL_RANDOM_I(32);
            vlSelf->top__DOT__cache_dut__DOT__inDataWay1_2[2U] 
                = (IData)((((QData)((IData)(VL_RANDOM_I(32))) 
                            << 0x20U) | (QData)((IData)(
                                                        VL_RANDOM_I(32)))));
            vlSelf->top__DOT__cache_dut__DOT__inDataWay1_2[3U] 
                = (IData)(((((QData)((IData)(VL_RANDOM_I(32))) 
                             << 0x20U) | (QData)((IData)(
                                                         VL_RANDOM_I(32)))) 
                           >> 0x20U));
            vlSelf->top__DOT__cache_dut__DOT__wenWay2_1 = 1U;
            vlSelf->top__DOT__cache_dut__DOT__wenWay2_2 = 1U;
            vlSelf->top__DOT__cache_dut__DOT__wenWay1_1 = 0U;
            vlSelf->top__DOT__cache_dut__DOT__wenWay1_2 = 0U;
            vlSelf->top__DOT__cache_dut__DOT__bitValid1_d = 0U;
            vlSelf->top__DOT__cache_dut__DOT__bitValid2_d = 1U;
            vlSelf->top__DOT__cache_dut__DOT__tagArray1_d = 0U;
            vlSelf->top__DOT__cache_dut__DOT__tagArray2_d 
                = (0x1fffffU & (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                        >> 0xbU)));
            vlSelf->top__DOT__cache_dut__DOT__inDataWay2_1[0U] 
                = (IData)(vlSelf->__Vtask_axiSlaveRead__4__rdata);
            vlSelf->top__DOT__cache_dut__DOT__inDataWay2_1[1U] 
                = (IData)((vlSelf->__Vtask_axiSlaveRead__4__rdata 
                           >> 0x20U));
            Vtop___024unit____Vdpiimwrap_axiSlaveRead_TOP____024unit(
                                                                     (8ULL 
                                                                      + 
                                                                      ((QData)((IData)(
                                                                                (0x1fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                                >> 0xbU))))) 
                                                                       << 0xbU)), 3U, vlSelf->__Vtask_axiSlaveRead__5__rdata);
            vlSelf->top__DOT__cache_dut__DOT__inDataWay2_1[2U] 
                = (IData)(vlSelf->__Vtask_axiSlaveRead__5__rdata);
            vlSelf->top__DOT__cache_dut__DOT__inDataWay2_1[3U] 
                = (IData)((vlSelf->__Vtask_axiSlaveRead__5__rdata 
                           >> 0x20U));
            Vtop___024unit____Vdpiimwrap_axiSlaveRead_TOP____024unit(
                                                                     (0x10ULL 
                                                                      + 
                                                                      ((QData)((IData)(
                                                                                (0x1fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                                >> 0xbU))))) 
                                                                       << 0xbU)), 3U, vlSelf->__Vtask_axiSlaveRead__6__rdata);
            vlSelf->top__DOT__cache_dut__DOT__inDataWay2_2[0U] 
                = (IData)(vlSelf->__Vtask_axiSlaveRead__6__rdata);
            vlSelf->top__DOT__cache_dut__DOT__inDataWay2_2[1U] 
                = (IData)((vlSelf->__Vtask_axiSlaveRead__6__rdata 
                           >> 0x20U));
            Vtop___024unit____Vdpiimwrap_axiSlaveRead_TOP____024unit(
                                                                     (0x18ULL 
                                                                      + 
                                                                      ((QData)((IData)(
                                                                                (0x1fffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                                >> 0xbU))))) 
                                                                       << 0xbU)), 3U, vlSelf->__Vtask_axiSlaveRead__7__rdata);
            vlSelf->top__DOT__cache_dut__DOT__inDataWay2_2[2U] 
                = (IData)(vlSelf->__Vtask_axiSlaveRead__7__rdata);
            vlSelf->top__DOT__cache_dut__DOT__inDataWay2_2[3U] 
                = (IData)((vlSelf->__Vtask_axiSlaveRead__7__rdata 
                           >> 0x20U));
        }
    } else {
        vlSelf->top__DOT__cache_dut__DOT__inDataWay1_1[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__inDataWay1_1[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__inDataWay1_1[2U] 
            = (IData)((((QData)((IData)(VL_RANDOM_I(32))) 
                        << 0x20U) | (QData)((IData)(
                                                    VL_RANDOM_I(32)))));
        vlSelf->top__DOT__cache_dut__DOT__inDataWay1_1[3U] 
            = (IData)(((((QData)((IData)(VL_RANDOM_I(32))) 
                         << 0x20U) | (QData)((IData)(
                                                     VL_RANDOM_I(32)))) 
                       >> 0x20U));
        vlSelf->top__DOT__cache_dut__DOT__inDataWay1_2[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__inDataWay1_2[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__inDataWay1_2[2U] 
            = (IData)((((QData)((IData)(VL_RANDOM_I(32))) 
                        << 0x20U) | (QData)((IData)(
                                                    VL_RANDOM_I(32)))));
        vlSelf->top__DOT__cache_dut__DOT__inDataWay1_2[3U] 
            = (IData)(((((QData)((IData)(VL_RANDOM_I(32))) 
                         << 0x20U) | (QData)((IData)(
                                                     VL_RANDOM_I(32)))) 
                       >> 0x20U));
        vlSelf->top__DOT__cache_dut__DOT__inDataWay2_1[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__inDataWay2_1[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__inDataWay2_1[2U] 
            = (IData)((((QData)((IData)(VL_RANDOM_I(32))) 
                        << 0x20U) | (QData)((IData)(
                                                    VL_RANDOM_I(32)))));
        vlSelf->top__DOT__cache_dut__DOT__inDataWay2_1[3U] 
            = (IData)(((((QData)((IData)(VL_RANDOM_I(32))) 
                         << 0x20U) | (QData)((IData)(
                                                     VL_RANDOM_I(32)))) 
                       >> 0x20U));
        vlSelf->top__DOT__cache_dut__DOT__inDataWay2_2[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__inDataWay2_2[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__cache_dut__DOT__inDataWay2_2[2U] 
            = (IData)((((QData)((IData)(VL_RANDOM_I(32))) 
                        << 0x20U) | (QData)((IData)(
                                                    VL_RANDOM_I(32)))));
        vlSelf->top__DOT__cache_dut__DOT__inDataWay2_2[3U] 
            = (IData)(((((QData)((IData)(VL_RANDOM_I(32))) 
                         << 0x20U) | (QData)((IData)(
                                                     VL_RANDOM_I(32)))) 
                       >> 0x20U));
        vlSelf->top__DOT__cache_dut__DOT__wenWay1_1 = 0U;
        vlSelf->top__DOT__cache_dut__DOT__wenWay1_2 = 0U;
        vlSelf->top__DOT__cache_dut__DOT__wenWay2_1 = 0U;
        vlSelf->top__DOT__cache_dut__DOT__wenWay2_2 = 0U;
        vlSelf->top__DOT__cache_dut__DOT__bitValid1_d = 0U;
        vlSelf->top__DOT__cache_dut__DOT__bitValid2_d = 0U;
        vlSelf->top__DOT__cache_dut__DOT__tagArray1_d = 0U;
        vlSelf->top__DOT__cache_dut__DOT__tagArray2_d = 0U;
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
                                vlSelf->top__DOT__in_trap_id = 0U;
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
    if (vlSelf->rst_n) {
        if ((1U & (~ (((IData)(vlSelf->top__DOT__ld_use_hazard) 
                       | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                      | (IData)(vlSelf->top__DOT__ls_not_ok))))) {
            vlSelf->top__DOT__pc_new = vlSelf->top__DOT__IF_u__DOT__pc_next_o;
        }
    } else {
        vlSelf->top__DOT__pc_new = 0x7ffffffcULL;
    }
    vlSelf->top__DOT__ex_stage_u__DOT__src2 = ((0x20000U 
                                                & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                                ? (
                                                   (0x10000U 
                                                    & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                                    ? 4ULL
                                                    : 0ULL)
                                                : (
                                                   (0x10000U 
                                                    & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                     << 0x25U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                        << 5U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                          >> 0x1bU)))
                                                    : vlSelf->top__DOT__ex_stage_u__DOT__rs2));
    __Vtemp54[0U] = 1U;
    __Vtemp54[1U] = 0U;
    __Vtemp54[2U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp55, vlSelf->top__DOT__ex_stage_u__DOT__rs1);
    VL_EXTEND_WQ(65,64, __Vtemp56, (~ vlSelf->top__DOT__ex_stage_u__DOT__rs2));
    VL_ADD_W(3, __Vtemp57, __Vtemp55, __Vtemp56);
    VL_ADD_W(3, __Vtemp58, __Vtemp54, __Vtemp57);
    vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry 
        = (1U & __Vtemp58[2U]);
    vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres 
        = (1ULL + (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                   + (~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)));
    vlSelf->top__DOT__ex_stage_u__DOT__src1 = ((0x40000U 
                                                & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                                    << 0x25U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                       << 5U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                         >> 0x1bU)))
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
    vlSelf->top__DOT__ld_use_hazard = ((((3U == (0x7fU 
                                                 & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                     << 5U) 
                                                    | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                       >> 0x1bU)))) 
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
                                                >> 2U)) 
                                            == (0x1fU 
                                                & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                   >> 0xfU))) 
                                           | ((0x1fU 
                                               & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                  >> 2U)) 
                                              == (0x1fU 
                                                  & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                     >> 0x14U))))) 
                                       | (((3U == (0x7fU 
                                                   & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                       << 5U) 
                                                      | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                         >> 0x1bU)))) 
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
                                                 >> 2U)) 
                                             == (0x1fU 
                                                 & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                    >> 0xfU)))));
    vlSelf->top__DOT__if_instr_valid = (((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                         | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                            & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                        & (~ ((((1U 
                                                 == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                                & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                               | (3U 
                                                  == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                              | (2U 
                                                 == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
    vlSelf->top__DOT__ls_not_ok = (((3U == (0x7fU & 
                                            (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                             >> 2U))) 
                                    & (~ (((IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state) 
                                           >> 1U) & 
                                          ((~ (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state)) 
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
                                              & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__instr_valid_reg)))))) 
                                   | ((8U == (0x1fU 
                                              & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[4U] 
                                                 >> 4U))) 
                                      & (~ (((IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state) 
                                             >> 1U) 
                                            & ((~ (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state)) 
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
                                                  & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__trans_ok)))))));
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
        = ((0x1000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
    vlSelf->top__DOT__wb_stall_n = (1U & (~ ((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                             | (IData)(vlSelf->top__DOT__ls_not_ok))));
    vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN 
        = (1U & (~ ((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                      & (0ULL != vlSelf->top__DOT__pc_new)) 
                     | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                         & (0ULL != vlSelf->top__DOT__pc_new)) 
                        & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                    | (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1_1))));
    vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN 
        = (1U & (~ ((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                      & (0ULL != vlSelf->top__DOT__pc_new)) 
                     | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                         & (0ULL != vlSelf->top__DOT__pc_new)) 
                        & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                    | (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1_2))));
    vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN 
        = (1U & (~ ((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                      & (0ULL != vlSelf->top__DOT__pc_new)) 
                     | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                         & (0ULL != vlSelf->top__DOT__pc_new)) 
                        & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                    | (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2_1))));
    vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN 
        = (1U & (~ ((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                      & (0ULL != vlSelf->top__DOT__pc_new)) 
                     | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                         & (0ULL != vlSelf->top__DOT__pc_new)) 
                        & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                    | (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2_2))));
    __Vtableidx1 = (((0ULL != vlSelf->top__DOT__pc_new) 
                     << 4U) | (((IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit) 
                                << 3U) | (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)));
    vlSelf->top__DOT__cache_dut__DOT__cacheNexState 
        = Vtop__ConstPool__TABLE_c892b8d4_0[__Vtableidx1];
    vlSelf->top__DOT__sram_rdata = (((- (QData)((IData)(vlSelf->top__DOT__cache_dut__DOT__way1Hit))) 
                                     & ((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                          & (0ULL != vlSelf->top__DOT__pc_new)) 
                                         | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
                                                (((QData)((IData)(
                                                                  vlSelf->top__DOT__cache_dut__DOT__way1Data[7U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way1Data[6U])))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlSelf->top__DOT__cache_dut__DOT__way1Data[5U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way1Data[4U]))))
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 3U)))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->top__DOT__cache_dut__DOT__way1Data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way1Data[2U])))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlSelf->top__DOT__cache_dut__DOT__way1Data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way1Data[0U])))))
                                         : 0ULL)) | 
                                    ((- (QData)((IData)(vlSelf->top__DOT__cache_dut__DOT__way2Hit))) 
                                     & ((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                          & (0ULL != vlSelf->top__DOT__pc_new)) 
                                         | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
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
                                                (((QData)((IData)(
                                                                  vlSelf->top__DOT__cache_dut__DOT__way2Data[7U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way2Data[6U])))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlSelf->top__DOT__cache_dut__DOT__way2Data[5U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way2Data[4U]))))
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 3U)))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->top__DOT__cache_dut__DOT__way2Data[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way2Data[2U])))
                                                 : 
                                                (((QData)((IData)(
                                                                  vlSelf->top__DOT__cache_dut__DOT__way2Data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__cache_dut__DOT__way2Data[0U])))))
                                         : 0ULL)));
    VL_EXTEND_WI(65,1, __Vtemp60, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
        = ((vlSelf->top__DOT__ex_stage_u__DOT__src1 
            + vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin) 
           + (((QData)((IData)(__Vtemp60[1U])) << 0x20U) 
              | (QData)((IData)(__Vtemp60[0U]))));
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
                                         >> 0x14U) 
                                        | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x15U)) 
                                       | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                           >> 0x13U) 
                                          & ((0x200U 
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
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
        = (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src 
           >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)));
    vlSelf->stall_n_diff = vlSelf->top__DOT__wb_stall_n;
    vlSelf->top__DOT__ex_flush = ((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                  | (IData)(vlSelf->top__DOT__is_jump));
    vlSelf->top__DOT__id_flush = (((IData)(vlSelf->top__DOT__is_jump) 
                                   | (IData)(vlSelf->top__DOT__in_trap_id)) 
                                  | (IData)(vlSelf->top__DOT__out_trap_id));
    vlSelf->top__DOT__IF_u__DOT__pc_next_o = ((IData)(vlSelf->top__DOT__is_jump)
                                               ? ((0x200000U 
                                                   & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                                   ? 
                                                  (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                                   + 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                     << 0x25U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                        << 5U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                          >> 0x1bU))))
                                                   : 
                                                  ((((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                                     << 0x25U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                        << 5U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                          >> 0x1bU))) 
                                                   + 
                                                   (((QData)((IData)(
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
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__out_trap_id)
                                                    ? vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc
                                                    : 
                                                   (4ULL 
                                                    + vlSelf->top__DOT__pc_new))));
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
    vlSelf->top__DOT__axi_if_u__DOT__r_state_next = 
        ((2U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
          ? ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
              ? ((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_rvalid)
                  ? 2U : 3U) : ((0ULL != vlSelf->top__DOT__pc_new)
                                 ? ((vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                     != vlSelf->top__DOT__axi_if_u__DOT__addr_reg)
                                     ? 1U : 2U) : 0U))
          : ((1U & (IData)(vlSelf->top__DOT__axi_if_u__DOT__r_state))
              ? ((IData)(vlSelf->top__DOT__ifAxiSlaveRam_u__DOT__axi_arready)
                  ? 3U : 1U) : ((0ULL != vlSelf->top__DOT__pc_new)
                                 ? 1U : 0U)));
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift 
        = ((0x1000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
            ? ((0x2000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                ? ((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
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
                : ((0x4000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                    ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                       & (QData)((IData)(((0xffffffffffffffffULL 
                                           >> (0x3fU 
                                               & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                          >> 0x20U))))
                    : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res))
            : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res);
    VL_EXTEND_WQ(65,64, __Vtemp62, vlSelf->top__DOT__ex_stage_u__DOT__src1);
    VL_EXTEND_WQ(65,64, __Vtemp63, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
    VL_ADD_W(3, __Vtemp64, __Vtemp62, __Vtemp63);
    VL_EXTEND_WI(65,1, __Vtemp65, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
    VL_ADD_W(3, __Vtemp66, __Vtemp64, __Vtemp65);
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout 
        = ((0x10U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
            ? ((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                ? ((4U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                    ? ((2U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                        ? VL_MODDIV_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                        : VL_MODDIVS_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2))
                    : ((2U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                        ? VL_DIV_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                        : VL_DIVS_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)))
                : ((4U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                    ? ((2U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                        ? (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                           * vlSelf->top__DOT__ex_stage_u__DOT__src2)
                        : (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                           * vlSelf->top__DOT__ex_stage_u__DOT__src2))
                    : ((2U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                        ? VL_MULS_QQQ(64,64,64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                        : (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                           * vlSelf->top__DOT__ex_stage_u__DOT__src2))))
            : ((0x1000000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                ? ((0x800000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                    ? ((0x400000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                        ? (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                           & vlSelf->top__DOT__ex_stage_u__DOT__src2)
                        : (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                           | vlSelf->top__DOT__ex_stage_u__DOT__src2))
                    : ((0x400000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                        ? vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift
                        : (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                           ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)))
                : ((0x800000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                    ? ((0x400000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                        ? vlSelf->top__DOT__ex_stage_u__DOT__src2
                        : (QData)((IData)((1U & ((0x2000000U 
                                                  & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                                  ? 
                                                 ((1U 
                                                   & __Vtemp66[2U]) 
                                                  ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                                  : 
                                                 ((IData)(
                                                          (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                           >> 0x3fU)) 
                                                  ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow)))))))
                    : ((0x400000U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                        ? vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift
                        : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o))));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__5\n"); );
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
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
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
