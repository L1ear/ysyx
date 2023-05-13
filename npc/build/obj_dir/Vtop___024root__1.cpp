// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_0260afd5_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vtop__ConstPool__TABLE_b1b41ba9_0;
extern const VlUnpacked<CData/*2:0*/, 1024> Vtop__ConstPool__TABLE_b22aa1bc_0;

VL_INLINE_OPT void Vtop___024root___combo__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__7\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx2;
    CData/*6:0*/ __Vtableidx4;
    CData/*4:0*/ __Vtableidx5;
    SData/*9:0*/ __Vtableidx1;
    VlWide<7>/*223:0*/ __Vtemp347;
    // Body
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready 
        = ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                     >> 0x1cU)))) ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready)
            : ((2U == (0xfU & (IData)((vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
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
            = ((2U == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                       >> 0x18U))))
                ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid)
                : (IData)(vlSelf->axi_r_valid_i));
        vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready 
            = ((2U == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                       >> 0x18U))))
                ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready)
                : (IData)(vlSelf->axi_ar_ready_i));
        vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last 
            = ((2U == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                       >> 0x18U))))
                ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid)
                : (IData)(vlSelf->axi_r_last_i));
        vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data 
            = ((2U == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                       >> 0x18U))))
                ? vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__reg_data_out
                : vlSelf->axi_r_data_i);
        vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id 
            = ((2U == (0xfU & (IData)((vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                       >> 0x18U))))
                ? 1U : (0xfU & (IData)(vlSelf->axi_r_id_i)));
    }
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n 
        = ((IData)(vlSelf->rst_n) & (~ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__mul_valid)));
    __Vtableidx4 = (((IData)(vlSelf->top__DOT__DcacheWrValid) 
                     << 6U) | ((((0xaU == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x1cU))))
                                  ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)
                                  : ((2U == (0xfU & (IData)(
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
                                                 (0xfU 
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
    vlSelf->top__DOT__ex_not_ok = (1U & ((~ (((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                              | ((1U 
                                                  == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                 & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit) 
                                                    | (~ (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i))))) 
                                             | ((6U 
                                                 == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk)))) 
                                         | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                             >> 5U) 
                                            & ((~ ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__resultValidReg_q) 
                                                   | (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q))) 
                                               | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_busy) 
                                                  | (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__div_valid))))));
    vlSelf->top__DOT__if_stall_n = (1U & (~ (((((((IData)(vlSelf->top__DOT__fence_id) 
                                                  | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
                                                 & (~ (IData)(vlSelf->top__DOT__is_jump))) 
                                                | (IData)(vlSelf->top__DOT__ld_use_hazard)) 
                                               | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                              | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                             | (IData)(vlSelf->top__DOT__ex_not_ok))));
    vlSelf->top__DOT__ls_stall_n = (1U & (~ (((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                              | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                             | (IData)(vlSelf->top__DOT__ex_not_ok))));
    vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A 
        = (0x3fU & ((IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)
                     ? (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                >> 5U)) : ((IData)(vlSelf->top__DOT__if_stall_n)
                                            ? (IData)(
                                                      (vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                       >> 5U))
                                            : (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 5U)))));
    vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A 
        = (0x3fU & ((IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)
                     ? (IData)((vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                >> 5U)) : ((IData)(vlSelf->top__DOT__if_stall_n)
                                            ? (IData)(
                                                      (vlSelf->top__DOT__IF_u__DOT__pc_next_o 
                                                       >> 5U))
                                            : (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 5U)))));
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
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
                                                     ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
                                                     ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
                                                     ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
                                                     ((IData)(vlSelf->top__DOT__Dcache_u__DOT__missFlag)
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
    __Vtemp347[0U] = (IData)(((((((((- (QData)((IData)(
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
    __Vtemp347[1U] = (IData)((((((((((- (QData)((IData)(
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
        = ((__Vtemp347[0U] << 1U) | (1U & (vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout[0U] 
                                           >> 2U)));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[3U] 
        = ((__Vtemp347[0U] >> 0x1fU) | (__Vtemp347[1U] 
                                        << 1U));
    vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din[4U] 
        = ((__Vtemp347[1U] >> 0x1fU) | ((IData)((((QData)((IData)(
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

void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__5(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__6(Vtop___024root* vlSelf);

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
         | ((~ (IData)(vlSelf->__VinpClk__TOP__top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n)))) {
        Vtop___024root___sequent__TOP__5(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        Vtop___024root___sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    Vtop___024root___combo__TOP__7(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
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
