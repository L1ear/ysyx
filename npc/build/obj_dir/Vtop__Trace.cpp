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

extern const VlWide<8>/*255:0*/ Vtop__ConstPool__CONST_d5724acc_0;
extern const VlWide<8>/*255:0*/ Vtop__ConstPool__CONST_5b979003_0;

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<8>/*255:0*/ __Vtemp588;
    VlWide<8>/*255:0*/ __Vtemp589;
    VlWide<8>/*255:0*/ __Vtemp590;
    VlWide<8>/*255:0*/ __Vtemp591;
    VlWide<8>/*255:0*/ __Vtemp592;
    VlWide<8>/*255:0*/ __Vtemp593;
    VlWide<8>/*255:0*/ __Vtemp594;
    VlWide<8>/*255:0*/ __Vtemp595;
    VlWide<8>/*255:0*/ __Vtemp596;
    VlWide<8>/*255:0*/ __Vtemp597;
    VlWide<8>/*255:0*/ __Vtemp598;
    VlWide<8>/*255:0*/ __Vtemp599;
    VlWide<8>/*255:0*/ __Vtemp600;
    VlWide<8>/*255:0*/ __Vtemp601;
    VlWide<8>/*255:0*/ __Vtemp602;
    VlWide<8>/*255:0*/ __Vtemp603;
    VlWide<8>/*255:0*/ __Vtemp604;
    VlWide<8>/*255:0*/ __Vtemp605;
    VlWide<8>/*255:0*/ __Vtemp606;
    VlWide<8>/*255:0*/ __Vtemp607;
    VlWide<8>/*255:0*/ __Vtemp608;
    VlWide<8>/*255:0*/ __Vtemp609;
    VlWide<8>/*255:0*/ __Vtemp610;
    VlWide<8>/*255:0*/ __Vtemp611;
    VlWide<8>/*255:0*/ __Vtemp612;
    VlWide<8>/*255:0*/ __Vtemp613;
    VlWide<8>/*255:0*/ __Vtemp614;
    VlWide<8>/*255:0*/ __Vtemp615;
    VlWide<8>/*255:0*/ __Vtemp616;
    VlWide<8>/*255:0*/ __Vtemp617;
    VlWide<8>/*255:0*/ __Vtemp618;
    VlWide<8>/*255:0*/ __Vtemp619;
    VlWide<8>/*255:0*/ __Vtemp620;
    VlWide<8>/*255:0*/ __Vtemp621;
    VlWide<8>/*255:0*/ __Vtemp622;
    VlWide<8>/*255:0*/ __Vtemp623;
    VlWide<8>/*255:0*/ __Vtemp624;
    VlWide<8>/*255:0*/ __Vtemp625;
    VlWide<8>/*255:0*/ __Vtemp626;
    VlWide<8>/*255:0*/ __Vtemp627;
    VlWide<8>/*255:0*/ __Vtemp628;
    VlWide<8>/*255:0*/ __Vtemp629;
    VlWide<8>/*255:0*/ __Vtemp630;
    VlWide<8>/*255:0*/ __Vtemp631;
    VlWide<8>/*255:0*/ __Vtemp632;
    VlWide<8>/*255:0*/ __Vtemp637;
    VlWide<8>/*255:0*/ __Vtemp644;
    VlWide<8>/*255:0*/ __Vtemp645;
    VlWide<8>/*255:0*/ __Vtemp646;
    VlWide<8>/*255:0*/ __Vtemp651;
    VlWide<8>/*255:0*/ __Vtemp656;
    VlWide<8>/*255:0*/ __Vtemp660;
    VlWide<4>/*127:0*/ __Vtemp661;
    VlWide<4>/*127:0*/ __Vtemp662;
    VlWide<3>/*95:0*/ __Vtemp663;
    VlWide<3>/*95:0*/ __Vtemp665;
    VlWide<3>/*95:0*/ __Vtemp666;
    VlWide<3>/*95:0*/ __Vtemp667;
    VlWide<3>/*95:0*/ __Vtemp668;
    VlWide<3>/*95:0*/ __Vtemp669;
    VlWide<3>/*95:0*/ __Vtemp672;
    VlWide<3>/*95:0*/ __Vtemp673;
    VlWide<3>/*95:0*/ __Vtemp674;
    VlWide<3>/*95:0*/ __Vtemp675;
    VlWide<3>/*95:0*/ __Vtemp676;
    VlWide<4>/*127:0*/ __Vtemp680;
    VlWide<4>/*127:0*/ __Vtemp687;
    VlWide<4>/*127:0*/ __Vtemp690;
    VlWide<4>/*127:0*/ __Vtemp697;
    VlWide<4>/*127:0*/ __Vtemp700;
    VlWide<4>/*127:0*/ __Vtemp709;
    VlWide<4>/*127:0*/ __Vtemp712;
    VlWide<4>/*127:0*/ __Vtemp721;
    VlWide<4>/*127:0*/ __Vtemp724;
    VlWide<4>/*127:0*/ __Vtemp734;
    VlWide<4>/*127:0*/ __Vtemp737;
    VlWide<4>/*127:0*/ __Vtemp747;
    VlWide<10>/*319:0*/ __Vtemp752;
    VlWide<8>/*255:0*/ __Vtemp753;
    VlWide<8>/*255:0*/ __Vtemp754;
    VlWide<8>/*255:0*/ __Vtemp755;
    VlWide<8>/*255:0*/ __Vtemp756;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
            tracep->chgBit(oldp+1,((1U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg),64);
            tracep->chgBit(oldp+4,((3U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
            tracep->chgBit(oldp+5,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__axi_ls_u__DOT__rdAddr_reg),64);
            tracep->chgBit(oldp+8,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
            tracep->chgQData(oldp+9,(vlSelf->top__DOT__forwarding_u__DOT__rd_wb),64);
            VL_EXTEND_WW(227,226, __Vtemp588, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            tracep->chgQData(oldp+11,((((QData)((IData)(
                                                        __Vtemp588[7U])) 
                                        << 0x3dU) | 
                                       (((QData)((IData)(
                                                         __Vtemp588[6U])) 
                                         << 0x1dU) 
                                        | ((QData)((IData)(
                                                           __Vtemp588[5U])) 
                                           >> 3U)))),64);
            VL_EXTEND_WW(227,226, __Vtemp589, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            tracep->chgQData(oldp+13,((((QData)((IData)(
                                                        __Vtemp589[4U])) 
                                        << 0x3dU) | 
                                       (((QData)((IData)(
                                                         __Vtemp589[3U])) 
                                         << 0x1dU) 
                                        | ((QData)((IData)(
                                                           __Vtemp589[2U])) 
                                           >> 3U)))),64);
            VL_EXTEND_WW(227,226, __Vtemp590, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            tracep->chgQData(oldp+15,((((QData)((IData)(
                                                        __Vtemp590[2U])) 
                                        << 0x3dU) | 
                                       (((QData)((IData)(
                                                         __Vtemp590[1U])) 
                                         << 0x1dU) 
                                        | ((QData)((IData)(
                                                           __Vtemp590[0U])) 
                                           >> 3U)))),64);
            VL_EXTEND_WW(227,226, __Vtemp591, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            tracep->chgIData(oldp+17,(((__Vtemp591[5U] 
                                        << 0x1dU) | 
                                       (__Vtemp591[4U] 
                                        >> 3U))),32);
            VL_EXTEND_WW(227,226, __Vtemp592, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            tracep->chgBit(oldp+18,((1U & (__Vtemp592[0U] 
                                           >> 2U))));
            tracep->chgQData(oldp+19,(vlSelf->top__DOT__csrdata_ls),64);
            tracep->chgQData(oldp+21,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec),64);
            tracep->chgQData(oldp+23,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc),64);
            VL_EXTEND_WW(227,226, __Vtemp593, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            tracep->chgBit(oldp+25,((1U & (__Vtemp593[0U] 
                                           >> 1U))));
            VL_EXTEND_WW(227,226, __Vtemp594, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            tracep->chgBit(oldp+26,((3U == (0x7fU & 
                                            (__Vtemp594[4U] 
                                             >> 3U)))));
            VL_EXTEND_WW(227,226, __Vtemp595, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            tracep->chgBit(oldp+27,((8U == (0x1fU & 
                                            (__Vtemp595[4U] 
                                             >> 5U)))));
            tracep->chgCData(oldp+28,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask),8);
            tracep->chgCData(oldp+29,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size),3);
            tracep->chgQData(oldp+30,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__reg_data_out),64);
            tracep->chgBit(oldp+32,((0U == (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))));
            tracep->chgBit(oldp+33,(vlSelf->top__DOT__in_intr_ls));
            VL_EXTEND_WW(227,226, __Vtemp596, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            tracep->chgBit(oldp+34,((1U & __Vtemp596[0U])));
            tracep->chgBit(oldp+35,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__r_state))));
            tracep->chgBit(oldp+36,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid));
            tracep->chgCData(oldp+37,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                        ? 0U : 1U)),4);
            tracep->chgCData(oldp+38,(((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                        ? (IData)(vlSelf->top__DOT__if_axi_ar_region_o)
                                        : (IData)(vlSelf->top__DOT__ls_axi_ar_region_o))),4);
            tracep->chgBit(oldp+39,(vlSelf->top__DOT__cache_dut__DOT__way1Hit));
            tracep->chgBit(oldp+40,(vlSelf->top__DOT__cache_dut__DOT__way2Hit));
            tracep->chgBit(oldp+41,(vlSelf->top__DOT__cache_dut__DOT__uncachedOk));
            tracep->chgQData(oldp+42,(vlSelf->top__DOT__cache_dut__DOT__reqLatch),33);
            tracep->chgCData(oldp+44,((0x1fU & (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch))),5);
            tracep->chgCData(oldp+45,((0x3fU & (IData)(
                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                        >> 5U)))),6);
            tracep->chgIData(oldp+46,((0x1fffffU & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 0xbU)))),21);
            tracep->chgQData(oldp+47,(vlSelf->top__DOT__cache_dut__DOT__validArray1),64);
            tracep->chgQData(oldp+49,(vlSelf->top__DOT__cache_dut__DOT__validArray2),64);
            tracep->chgBit(oldp+51,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray1 
                                                   >> 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                               >> 5U))))))));
            tracep->chgBit(oldp+52,((1U & (IData)((vlSelf->top__DOT__cache_dut__DOT__validArray2 
                                                   >> 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                               >> 5U))))))));
            tracep->chgIData(oldp+53,(vlSelf->top__DOT__cache_dut__DOT__tagArray1
                                      [(0x3fU & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 5U)))]),21);
            tracep->chgIData(oldp+54,(vlSelf->top__DOT__cache_dut__DOT__tagArray2
                                      [(0x3fU & (IData)(
                                                        (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                         >> 5U)))]),21);
            tracep->chgQData(oldp+55,((((QData)((IData)(
                                                        (0x1fffffU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                    >> 0xbU))))) 
                                        << 0xbU) | (QData)((IData)(
                                                                   (0x7e0U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                                >> 5U)) 
                                                                       << 5U)))))),64);
            tracep->chgBit(oldp+57,(vlSelf->top__DOT__cache_dut__DOT__missFlag));
            tracep->chgCData(oldp+58,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state),2);
            VL_EXTEND_WW(227,226, __Vtemp597, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            VL_EXTEND_WW(227,226, __Vtemp598, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            VL_EXTEND_WW(227,226, __Vtemp599, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            VL_EXTEND_WW(227,226, __Vtemp600, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            tracep->chgBit(oldp+59,(((0x73U == (0x7fU 
                                                & (__Vtemp597[4U] 
                                                   >> 3U))) 
                                     & (((1U == (7U 
                                                 & (__Vtemp598[4U] 
                                                    >> 0xfU))) 
                                         | (3U == (7U 
                                                   & (__Vtemp599[4U] 
                                                      >> 0xfU)))) 
                                        | (2U == (7U 
                                                  & (__Vtemp600[4U] 
                                                     >> 0xfU)))))));
            VL_EXTEND_WW(227,226, __Vtemp601, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            tracep->chgCData(oldp+60,((0x1fU & (__Vtemp601[4U] 
                                                >> 0xaU))),5);
            tracep->chgBit(oldp+61,(vlSelf->top__DOT__forwarding_u__DOT__reg_wben));
            tracep->chgCData(oldp+62,(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx),5);
            tracep->chgWData(oldp+63,(vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout),226);
            VL_EXTEND_WW(227,226, __Vtemp602, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            tracep->chgCData(oldp+71,((7U & (__Vtemp602[4U] 
                                             >> 0xfU))),3);
            tracep->chgBit(oldp+72,(vlSelf->top__DOT__ls_u__DOT__timr_int));
            VL_EXTEND_WW(227,226, __Vtemp603, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            VL_EXTEND_WW(227,226, __Vtemp604, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            tracep->chgBit(oldp+73,(((3U == (0x7fU 
                                             & (__Vtemp603[4U] 
                                                >> 3U))) 
                                     & (0U == (7U & 
                                               (__Vtemp604[4U] 
                                                >> 0xfU))))));
            VL_EXTEND_WW(227,226, __Vtemp605, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            VL_EXTEND_WW(227,226, __Vtemp606, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            tracep->chgBit(oldp+74,(((3U == (0x7fU 
                                             & (__Vtemp605[4U] 
                                                >> 3U))) 
                                     & (4U == (7U & 
                                               (__Vtemp606[4U] 
                                                >> 0xfU))))));
            VL_EXTEND_WW(227,226, __Vtemp607, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            VL_EXTEND_WW(227,226, __Vtemp608, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            tracep->chgBit(oldp+75,(((8U == (0x1fU 
                                             & (__Vtemp607[4U] 
                                                >> 5U))) 
                                     & (0U == (7U & 
                                               (__Vtemp608[4U] 
                                                >> 0xfU))))));
            VL_EXTEND_WW(227,226, __Vtemp609, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            VL_EXTEND_WW(227,226, __Vtemp610, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            tracep->chgBit(oldp+76,(((8U == (0x1fU 
                                             & (__Vtemp609[4U] 
                                                >> 5U))) 
                                     & (1U == (7U & 
                                               (__Vtemp610[4U] 
                                                >> 0xfU))))));
            VL_EXTEND_WW(227,226, __Vtemp611, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            VL_EXTEND_WW(227,226, __Vtemp612, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            tracep->chgBit(oldp+77,(((8U == (0x1fU 
                                             & (__Vtemp611[4U] 
                                                >> 5U))) 
                                     & (2U == (7U & 
                                               (__Vtemp612[4U] 
                                                >> 0xfU))))));
            VL_EXTEND_WW(227,226, __Vtemp613, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            VL_EXTEND_WW(227,226, __Vtemp614, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            tracep->chgBit(oldp+78,(((8U == (0x1fU 
                                             & (__Vtemp613[4U] 
                                                >> 5U))) 
                                     & (3U == (7U & 
                                               (__Vtemp614[4U] 
                                                >> 0xfU))))));
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__commitPC),64);
            tracep->chgBit(oldp+81,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrw));
            tracep->chgBit(oldp+82,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrs));
            tracep->chgBit(oldp+83,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrc));
            VL_EXTEND_WW(227,226, __Vtemp615, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            tracep->chgBit(oldp+84,((0x1cU == (0x1fU 
                                               & (__Vtemp615[4U] 
                                                  >> 5U)))));
            tracep->chgBit(oldp+85,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en));
            tracep->chgBit(oldp+86,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc));
            tracep->chgBit(oldp+87,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec));
            tracep->chgBit(oldp+88,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus));
            tracep->chgBit(oldp+89,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause));
            VL_EXTEND_WW(227,226, __Vtemp616, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            tracep->chgBit(oldp+90,(((0x304U == (0xfffU 
                                                 & ((__Vtemp616[5U] 
                                                     << 9U) 
                                                    | (__Vtemp616[4U] 
                                                       >> 0x17U)))) 
                                     & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en))));
            VL_EXTEND_WW(227,226, __Vtemp617, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            tracep->chgBit(oldp+91,(((0x344U == (0xfffU 
                                                 & ((__Vtemp617[5U] 
                                                     << 9U) 
                                                    | (__Vtemp617[4U] 
                                                       >> 0x17U)))) 
                                     & (IData)(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en))));
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus),64);
            tracep->chgBit(oldp+94,((1U & (IData)((vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus 
                                                   >> 3U)))));
            VL_EXTEND_WW(227,226, __Vtemp618, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            tracep->chgQData(oldp+95,(((0x1cU == (0x1fU 
                                                  & (__Vtemp618[4U] 
                                                     >> 5U)))
                                        ? 0xbULL : 
                                       ((IData)(vlSelf->top__DOT__in_intr_ls)
                                         ? 0x8000000000000007ULL
                                         : 0ULL))),64);
            tracep->chgQData(oldp+97,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause),64);
            tracep->chgQData(oldp+99,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie),64);
            tracep->chgBit(oldp+101,((1U & (IData)(
                                                   (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie 
                                                    >> 7U)))));
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip),64);
            tracep->chgBit(oldp+104,((1U & (IData)(
                                                   (vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip 
                                                    >> 7U)))));
            tracep->chgQData(oldp+105,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtime),64);
            tracep->chgQData(oldp+107,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp),64);
            tracep->chgIData(oldp+109,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__byte_index),32);
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__Dcache_u__DOT__validArray1),64);
            tracep->chgQData(oldp+112,(vlSelf->top__DOT__Dcache_u__DOT__validArray2),64);
            tracep->chgIData(oldp+114,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                       [0x3cU]),21);
            tracep->chgIData(oldp+115,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                       [0x23U]),21);
            tracep->chgBit(oldp+116,(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay));
            tracep->chgBit(oldp+117,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay1));
            tracep->chgBit(oldp+118,(vlSelf->top__DOT__Dcache_u__DOT__wenDelay2));
            tracep->chgCData(oldp+119,(vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch),8);
            tracep->chgQData(oldp+120,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1),64);
            tracep->chgQData(oldp+122,(vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2),64);
            tracep->chgBit(oldp+124,(vlSelf->top__DOT__Dcache_u__DOT__replaceWay));
            tracep->chgBit(oldp+125,(vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg));
            tracep->chgBit(oldp+126,(vlSelf->top__DOT__Dcache_u__DOT__uncache));
            tracep->chgBit(oldp+127,(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk));
            tracep->chgBit(oldp+128,(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk));
            tracep->chgQData(oldp+129,(vlSelf->top__DOT__Dcache_u__DOT__temp),64);
            tracep->chgBit(oldp+131,(vlSelf->top__DOT__Dcache_u__DOT__cleanWrValid));
            tracep->chgQData(oldp+132,(vlSelf->top__DOT__Dcache_u__DOT__cleanWrAddr),33);
            tracep->chgCData(oldp+134,(vlSelf->top__DOT__axi_ls_u__DOT__wrCnt),2);
            tracep->chgCData(oldp+135,(vlSelf->top__DOT__axi_ls_u__DOT__r_state),2);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [3U]))) {
            tracep->chgCData(oldp+136,((((0xaU != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x1cU)))) 
                                         | (2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x18U)))))
                                         ? 0U : ((0U 
                                                  != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                                  ? 0U
                                                  : 1U))),4);
            tracep->chgCData(oldp+137,((((0xaU != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x1cU)))) 
                                         | (2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x18U)))))
                                         ? 0U : (0xffU 
                                                 & ((0U 
                                                     != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                                      ? 0U
                                                      : 3U)
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                      ? 0U
                                                      : 3U))))),8);
            tracep->chgCData(oldp+138,((((0xaU != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x1cU)))) 
                                         | (2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x18U)))))
                                         ? 0U : (0xfU 
                                                 & ((0U 
                                                     != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                                     ? (IData)(vlSelf->top__DOT__if_axi_ar_region_o)
                                                     : (IData)(vlSelf->top__DOT__ls_axi_ar_region_o))))),4);
            tracep->chgCData(oldp+139,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                         ? (7U & (IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size))
                                         : 3U)),3);
            VL_EXTEND_WW(227,226, __Vtemp619, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            VL_EXTEND_WW(227,226, __Vtemp620, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            VL_EXTEND_WW(227,226, __Vtemp621, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            tracep->chgQData(oldp+140,((((0U == (0x1fU 
                                                 & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                    >> 3U))) 
                                         & ((0x1fU 
                                             & (__Vtemp619[4U] 
                                                >> 0x17U)) 
                                            == (0x1fU 
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
                                         : ((((0x73U 
                                               == (0x7fU 
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
                                                 & (__Vtemp620[4U] 
                                                    >> 0x17U)) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                    >> 8U))))
                                             ? (((QData)((IData)(
                                                                 vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))
                                             : (((QData)((IData)(
                                                                 __Vtemp621[4U])) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(
                                                                    __Vtemp621[3U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      __Vtemp621[2U])) 
                                                      >> 3U)))))),64);
            tracep->chgIData(oldp+142,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                         ? (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch)
                                         : (((IData)(
                                                     (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                      >> 0xbU)) 
                                             << 0xbU) 
                                            | (0x7e0U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                           >> 5U)) 
                                                  << 5U))))),32);
            VL_EXTEND_WW(227,226, __Vtemp622, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            VL_EXTEND_WW(227,226, __Vtemp623, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            VL_EXTEND_WW(227,226, __Vtemp624, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            VL_EXTEND_WW(227,226, __Vtemp625, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            VL_EXTEND_WW(227,226, __Vtemp626, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            tracep->chgBit(oldp+143,((((3U == (0x7fU 
                                               & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                  >> 1U))) 
                                       & ((0x73U == 
                                           (0x7fU & 
                                            (__Vtemp622[4U] 
                                             >> 3U))) 
                                          & (((1U == 
                                               (7U 
                                                & (__Vtemp623[4U] 
                                                   >> 0xfU))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (__Vtemp624[4U] 
                                                     >> 0xfU)))) 
                                             | (2U 
                                                == 
                                                (7U 
                                                 & (__Vtemp625[4U] 
                                                    >> 0xfU)))))) 
                                      & ((0x1fU & (
                                                   vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U)) 
                                         == (0x1fU 
                                             & (__Vtemp626[4U] 
                                                >> 0x12U))))));
            tracep->chgCData(oldp+144,((0xffU & ((0U 
                                                  != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                                   ? 0U
                                                   : 3U)
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                   ? 0U
                                                   : 3U)))),8);
            tracep->chgQData(oldp+145,((QData)((IData)(
                                                       ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                                         ? (IData)(vlSelf->top__DOT__cache_dut__DOT__reqLatch)
                                                         : 
                                                        (((IData)(
                                                                  (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                   >> 0xbU)) 
                                                          << 0xbU) 
                                                         | (0x7e0U 
                                                            & ((IData)(
                                                                       (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                                        >> 5U)) 
                                                               << 5U))))))),64);
            VL_EXTEND_WW(227,226, __Vtemp627, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            VL_EXTEND_WW(227,226, __Vtemp628, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            VL_EXTEND_WW(227,226, __Vtemp629, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            tracep->chgBit(oldp+147,((((__Vtemp627[0U] 
                                        >> 2U) & ((0x1fU 
                                                   & (__Vtemp628[4U] 
                                                      >> 0xaU)) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 0xbU)))) 
                                      & (0U != (0x1fU 
                                                & (__Vtemp629[4U] 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+148,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                       & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0xbU)))) 
                                      & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
            VL_EXTEND_WW(227,226, __Vtemp630, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            VL_EXTEND_WW(227,226, __Vtemp631, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            VL_EXTEND_WW(227,226, __Vtemp632, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            tracep->chgBit(oldp+149,((((__Vtemp630[0U] 
                                        >> 2U) & ((0x1fU 
                                                   & (__Vtemp631[4U] 
                                                      >> 0xaU)) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                      >> 6U)))) 
                                      & (0U != (0x1fU 
                                                & (__Vtemp632[4U] 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+150,((((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wben) 
                                       & ((IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 6U)))) 
                                      & (0U != (IData)(vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx)))));
            if (vlSelf->top__DOT__in_intr_ls) {
                __Vtemp637[0U] = Vtop__ConstPool__CONST_d5724acc_0[0U];
                __Vtemp637[1U] = Vtop__ConstPool__CONST_d5724acc_0[1U];
                __Vtemp637[2U] = Vtop__ConstPool__CONST_d5724acc_0[2U];
                __Vtemp637[3U] = Vtop__ConstPool__CONST_d5724acc_0[3U];
                __Vtemp637[4U] = Vtop__ConstPool__CONST_d5724acc_0[4U];
                __Vtemp637[5U] = Vtop__ConstPool__CONST_d5724acc_0[5U];
                __Vtemp637[6U] = Vtop__ConstPool__CONST_d5724acc_0[6U];
                __Vtemp637[7U] = Vtop__ConstPool__CONST_d5724acc_0[7U];
            } else {
                __Vtemp637[0U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                                   << 3U) | ((4U & 
                                              (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                               >> 0xeU)) 
                                             | (3U 
                                                & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
                __Vtemp637[1U] = (((IData)(vlSelf->top__DOT__alures_ex) 
                                   >> 0x1dU) | ((IData)(
                                                        (vlSelf->top__DOT__alures_ex 
                                                         >> 0x20U)) 
                                                << 3U));
                __Vtemp637[2U] = (((IData)((vlSelf->top__DOT__alures_ex 
                                            >> 0x20U)) 
                                   >> 0x1dU) | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                                                << 3U));
                __Vtemp637[3U] = (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                                   >> 0x1dU) | ((IData)(
                                                        (vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                         >> 0x20U)) 
                                                << 3U));
                __Vtemp637[4U] = (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                            >> 0x20U)) 
                                   >> 0x1dU) | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 7U) 
                                                | (0x78U 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x19U))));
                __Vtemp637[5U] = ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                         >> 0x19U)) 
                                  | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                      << 7U) | (0x78U 
                                                & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                   >> 0x19U))));
                __Vtemp637[6U] = ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                         >> 0x19U)) 
                                  | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                      << 7U) | (0x78U 
                                                & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                   >> 0x19U))));
                __Vtemp637[7U] = (7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                        >> 0x19U));
            }
            tracep->chgWData(oldp+151,(__Vtemp637),227);
            __Vtemp644[0U] = (Vtop__ConstPool__CONST_5b979003_0[0U] 
                              & ((IData)(vlSelf->top__DOT__in_intr_ls)
                                  ? Vtop__ConstPool__CONST_d5724acc_0[0U]
                                  : (((IData)(vlSelf->top__DOT__alures_ex) 
                                      << 3U) | ((4U 
                                                 & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                    >> 0xeU)) 
                                                | (3U 
                                                   & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])))));
            __Vtemp644[1U] = (Vtop__ConstPool__CONST_5b979003_0[1U] 
                              & ((IData)(vlSelf->top__DOT__in_intr_ls)
                                  ? Vtop__ConstPool__CONST_d5724acc_0[1U]
                                  : (((IData)(vlSelf->top__DOT__alures_ex) 
                                      >> 0x1dU) | ((IData)(
                                                           (vlSelf->top__DOT__alures_ex 
                                                            >> 0x20U)) 
                                                   << 3U))));
            __Vtemp644[2U] = (Vtop__ConstPool__CONST_5b979003_0[2U] 
                              & ((IData)(vlSelf->top__DOT__in_intr_ls)
                                  ? Vtop__ConstPool__CONST_d5724acc_0[2U]
                                  : (((IData)((vlSelf->top__DOT__alures_ex 
                                               >> 0x20U)) 
                                      >> 0x1dU) | ((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                                                   << 3U))));
            __Vtemp644[3U] = (Vtop__ConstPool__CONST_5b979003_0[3U] 
                              & ((IData)(vlSelf->top__DOT__in_intr_ls)
                                  ? Vtop__ConstPool__CONST_d5724acc_0[3U]
                                  : (((IData)(vlSelf->top__DOT__ex_stage_u__DOT__rs2) 
                                      >> 0x1dU) | ((IData)(
                                                           (vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                                            >> 0x20U)) 
                                                   << 3U))));
            __Vtemp644[4U] = (Vtop__ConstPool__CONST_5b979003_0[4U] 
                              & ((IData)(vlSelf->top__DOT__in_intr_ls)
                                  ? Vtop__ConstPool__CONST_d5724acc_0[4U]
                                  : (((IData)((vlSelf->top__DOT__ex_stage_u__DOT__rs2 
                                               >> 0x20U)) 
                                      >> 0x1dU) | (
                                                   (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 7U) 
                                                   | (0x78U 
                                                      & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                         >> 0x19U))))));
            __Vtemp644[5U] = (Vtop__ConstPool__CONST_5b979003_0[5U] 
                              & ((IData)(vlSelf->top__DOT__in_intr_ls)
                                  ? Vtop__ConstPool__CONST_d5724acc_0[5U]
                                  : ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                            >> 0x19U)) 
                                     | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                         << 7U) | (0x78U 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                      >> 0x19U))))));
            __Vtemp644[6U] = (Vtop__ConstPool__CONST_5b979003_0[6U] 
                              & ((IData)(vlSelf->top__DOT__in_intr_ls)
                                  ? Vtop__ConstPool__CONST_d5724acc_0[6U]
                                  : ((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                            >> 0x19U)) 
                                     | ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                         << 7U) | (0x78U 
                                                   & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U] 
                                                      >> 0x19U))))));
            __Vtemp644[7U] = (Vtop__ConstPool__CONST_5b979003_0[7U] 
                              & ((IData)(vlSelf->top__DOT__in_intr_ls)
                                  ? Vtop__ConstPool__CONST_d5724acc_0[7U]
                                  : (7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U] 
                                           >> 0x19U))));
            tracep->chgWData(oldp+159,(__Vtemp644),226);
            VL_EXTEND_WW(227,226, __Vtemp645, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            tracep->chgBit(oldp+167,(((0U == (0x1fU 
                                              & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 3U))) 
                                      & ((0x1fU & (
                                                   __Vtemp645[4U] 
                                                   >> 0x17U)) 
                                         == (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
            VL_EXTEND_WW(227,226, __Vtemp646, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
            tracep->chgBit(oldp+168,((((0x73U == (0x7fU 
                                                  & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                     >> 1U))) 
                                       & (((1U == (7U 
                                                   & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                      >> 0xdU))) 
                                           | (3U == 
                                              (7U & 
                                               (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 0xdU)))) 
                                          | (2U == 
                                             (7U & 
                                              (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                               >> 0xdU))))) 
                                      & ((0x1fU & (
                                                   __Vtemp646[4U] 
                                                   >> 0x17U)) 
                                         == (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 8U))))));
            tracep->chgQData(oldp+169,((vlSelf->top__DOT__ls_u__DOT__csr_wr_data 
                                        | vlSelf->top__DOT__csrdata_ls)),64);
            tracep->chgQData(oldp+171,(((~ vlSelf->top__DOT__ls_u__DOT__csr_wr_data) 
                                        & vlSelf->top__DOT__csrdata_ls)),64);
            tracep->chgBit(oldp+173,((1U & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                    >> 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 5U))))))));
            tracep->chgBit(oldp+174,((1U & (IData)(
                                                   (vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                    >> 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                >> 5U))))))));
            tracep->chgIData(oldp+175,(vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                       [(0x3fU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 5U)))]),21);
            tracep->chgIData(oldp+176,(vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                       [(0x3fU & (IData)(
                                                         (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                          >> 5U)))]),21);
            tracep->chgBit(oldp+177,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U))) 
                                      & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk)))));
            tracep->chgBit(oldp+178,((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & (~ (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 0x20U)))) 
                                      & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk)))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+179,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready));
            tracep->chgBit(oldp+180,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid));
            tracep->chgCData(oldp+181,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp),2);
            tracep->chgQData(oldp+182,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata),64);
            tracep->chgBit(oldp+184,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready));
            tracep->chgQData(oldp+185,((((0xaU != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x1cU)))) 
                                         | (2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x18U)))))
                                         ? 0ULL : vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg)),64);
            tracep->chgCData(oldp+187,((((0xaU != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x1cU)))) 
                                         | (2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x18U)))))
                                         ? 0U : 1U)),4);
            tracep->chgCData(oldp+188,((((0xaU != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x1cU)))) 
                                         | (2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x18U)))))
                                         ? 0U : (7U 
                                                 & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg)))),3);
            tracep->chgCData(oldp+189,((((0xaU != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x1cU)))) 
                                         | (2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x18U)))))
                                         ? 0U : 1U)),2);
            tracep->chgCData(oldp+190,((((0xaU != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x1cU)))) 
                                         | (2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x18U)))))
                                         ? 0U : 0xfU)),4);
            tracep->chgBit(oldp+191,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready));
            tracep->chgCData(oldp+192,((((0xaU != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x1cU)))) 
                                         | (2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x18U)))))
                                         ? 0U : (0xffU 
                                                 & (IData)(vlSelf->top__DOT__ls_axi_w_strb_o)))),8);
            tracep->chgBit(oldp+193,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid));
            tracep->chgCData(oldp+194,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp),2);
            tracep->chgQData(oldp+195,(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg),64);
            tracep->chgCData(oldp+197,(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg),3);
            tracep->chgCData(oldp+198,(vlSelf->top__DOT__ls_axi_w_strb_o),8);
            tracep->chgBit(oldp+199,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready));
            tracep->chgCData(oldp+200,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp),2);
            tracep->chgBit(oldp+201,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid));
            tracep->chgCData(oldp+202,(((2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U))))
                                         ? (7U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg))
                                         : 0U)),3);
            tracep->chgQData(oldp+203,(((2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U))))
                                         ? vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg
                                         : 0ULL)),64);
            tracep->chgBit(oldp+205,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready));
            tracep->chgCData(oldp+206,(vlSelf->top__DOT__clint_axi_wstrb),8);
            tracep->chgBit(oldp+207,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready));
            tracep->chgBit(oldp+208,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid));
            tracep->chgBit(oldp+209,((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x18U))))));
            tracep->chgBit(oldp+210,((0xaU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x1cU))))));
            tracep->chgWData(oldp+211,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_1),128);
            tracep->chgWData(oldp+215,(vlSelf->top__DOT__cache_dut__DOT__dataWay1_2),128);
            tracep->chgWData(oldp+219,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_1),128);
            tracep->chgWData(oldp+223,(vlSelf->top__DOT__cache_dut__DOT__dataWay2_2),128);
            tracep->chgWData(oldp+227,(vlSelf->top__DOT__cache_dut__DOT__way1Data),256);
            tracep->chgWData(oldp+235,(vlSelf->top__DOT__cache_dut__DOT__way2Data),256);
            tracep->chgIData(oldp+243,(vlSelf->top__DOT__cache_dut__DOT__randomBit),32);
            tracep->chgQData(oldp+244,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr),64);
            tracep->chgCData(oldp+246,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bresp),2);
            tracep->chgQData(oldp+247,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_araddr),64);
            tracep->chgBit(oldp+249,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__aw_en));
            tracep->chgWData(oldp+250,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1),128);
            tracep->chgWData(oldp+254,(vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2),128);
            tracep->chgWData(oldp+258,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1),128);
            tracep->chgWData(oldp+262,(vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2),128);
            tracep->chgWData(oldp+266,(vlSelf->top__DOT__Dcache_u__DOT__way1Data),256);
            tracep->chgWData(oldp+274,(vlSelf->top__DOT__Dcache_u__DOT__way2Data),256);
            tracep->chgBit(oldp+282,(vlSelf->top__DOT__Dcache_u__DOT__randomBit));
            tracep->chgWData(oldp+283,(vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg),256);
            tracep->chgCData(oldp+291,(vlSelf->top__DOT__axi_ls_u__DOT__wrMask_reg),8);
            tracep->chgCData(oldp+292,(vlSelf->top__DOT__axi_ls_u__DOT__storeLenth_reg),8);
            tracep->chgCData(oldp+293,((0x38U & ((IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg) 
                                                 << 3U))),6);
            tracep->chgQData(oldp+294,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr),64);
            tracep->chgQData(oldp+296,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr),64);
            tracep->chgQData(oldp+298,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0),64);
            tracep->chgQData(oldp+300,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1),64);
            tracep->chgQData(oldp+302,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2),64);
            tracep->chgQData(oldp+304,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3),64);
            tracep->chgBit(oldp+306,(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [2U] | vlSelf->__Vm_traceActivity
                         [3U]))) {
            tracep->chgCData(oldp+307,((((0xaU != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x1cU)))) 
                                         | (2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x18U)))))
                                         ? 0U : ((6U 
                                                  == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                                  ? 0U
                                                  : 3U))),8);
            tracep->chgQData(oldp+308,((((0xaU != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x1cU)))) 
                                         | (2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                              >> 0x18U)))))
                                         ? 0ULL : vlSelf->top__DOT__ls_axi_w_data_o)),64);
            tracep->chgBit(oldp+310,((((0xaU != (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x1cU)))) 
                                       | (2U == (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x18U)))))
                                       ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_ls_u__DOT__wrLast)))));
            VL_EXTEND_WQ(256,64, __Vtemp651, vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch);
            if ((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
                __Vtemp656[0U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                                   ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U]
                                   : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U]);
                __Vtemp656[1U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                                   ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U]
                                   : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U]);
                __Vtemp656[2U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                                   ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U]
                                   : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U]);
                __Vtemp656[3U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                                   ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U]
                                   : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U]);
                __Vtemp656[4U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                                   ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U]
                                   : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U]);
                __Vtemp656[5U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                                   ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U]
                                   : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U]);
                __Vtemp656[6U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                                   ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U]
                                   : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U]);
                __Vtemp656[7U] = ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))
                                   ? vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U]
                                   : vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U]);
            } else {
                __Vtemp656[0U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                   ? __Vtemp651[0U]
                                   : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                       ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[0U]
                                       : vlSelf->top__DOT__Dcache_u__DOT__way1Data[0U]));
                __Vtemp656[1U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                   ? __Vtemp651[1U]
                                   : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                       ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[1U]
                                       : vlSelf->top__DOT__Dcache_u__DOT__way1Data[1U]));
                __Vtemp656[2U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                   ? __Vtemp651[2U]
                                   : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                       ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[2U]
                                       : vlSelf->top__DOT__Dcache_u__DOT__way1Data[2U]));
                __Vtemp656[3U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                   ? __Vtemp651[3U]
                                   : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                       ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[3U]
                                       : vlSelf->top__DOT__Dcache_u__DOT__way1Data[3U]));
                __Vtemp656[4U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                   ? __Vtemp651[4U]
                                   : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                       ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[4U]
                                       : vlSelf->top__DOT__Dcache_u__DOT__way1Data[4U]));
                __Vtemp656[5U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                   ? __Vtemp651[5U]
                                   : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                       ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[5U]
                                       : vlSelf->top__DOT__Dcache_u__DOT__way1Data[5U]));
                __Vtemp656[6U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                   ? __Vtemp651[6U]
                                   : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                       ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[6U]
                                       : vlSelf->top__DOT__Dcache_u__DOT__way1Data[6U]));
                __Vtemp656[7U] = ((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                   ? __Vtemp651[7U]
                                   : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                       ? vlSelf->top__DOT__Dcache_u__DOT__way2Data[7U]
                                       : vlSelf->top__DOT__Dcache_u__DOT__way1Data[7U]));
            }
            tracep->chgWData(oldp+311,(__Vtemp656),256);
            tracep->chgBit(oldp+319,((((IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready) 
                                       & (IData)(vlSelf->top__DOT__clint_axi_arvalid)) 
                                      & (~ (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid)))));
            if ((0x40U & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt))) {
                __Vtemp660[0U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[0U];
                __Vtemp660[1U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[1U];
                __Vtemp660[2U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[2U];
                __Vtemp660[3U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2[3U];
                __Vtemp660[4U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[0U];
                __Vtemp660[5U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[1U];
                __Vtemp660[6U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[2U];
                __Vtemp660[7U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1[3U];
            } else {
                __Vtemp660[0U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[0U];
                __Vtemp660[1U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[1U];
                __Vtemp660[2U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[2U];
                __Vtemp660[3U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2[3U];
                __Vtemp660[4U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[0U];
                __Vtemp660[5U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[1U];
                __Vtemp660[6U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[2U];
                __Vtemp660[7U] = vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1[3U];
            }
            tracep->chgWData(oldp+320,(__Vtemp660),256);
            tracep->chgBit(oldp+328,((((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready) 
                                       & (IData)(vlSelf->top__DOT__axi_mmio_ar_valid_o)) 
                                      & (~ (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid)))));
            tracep->chgBit(oldp+329,(((IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready) 
                                      & (IData)(vlSelf->top__DOT__axi_mmio_w_valid_o))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+330,(vlSelf->top__DOT__axi_mmio_ar_valid_o));
            tracep->chgQData(oldp+331,((((0xaU != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x1cU)))) 
                                         | (2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x18U)))))
                                         ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr)),64);
            tracep->chgCData(oldp+333,((((0xaU != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x1cU)))) 
                                         | (2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x18U)))))
                                         ? 0U : (7U 
                                                 & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size)))),3);
            tracep->chgCData(oldp+334,((((0xaU != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x1cU)))) 
                                         | (2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x18U)))))
                                         ? 0U : 1U)),2);
            tracep->chgCData(oldp+335,((((0xaU != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x1cU)))) 
                                         | (2U == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x18U)))))
                                         ? 0U : 2U)),4);
            tracep->chgBit(oldp+336,((((0xaU != (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                            >> 0x1cU)))) 
                                       | (2U == (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                            >> 0x18U)))))
                                       ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready)))));
            tracep->chgBit(oldp+337,(vlSelf->top__DOT__axi_mmio_aw_valid_o));
            tracep->chgBit(oldp+338,(vlSelf->top__DOT__axi_mmio_w_valid_o));
            tracep->chgBit(oldp+339,(vlSelf->top__DOT__axi_mmio_b_ready_o));
            tracep->chgCData(oldp+340,(((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                         ? 0U : 3U)),8);
            tracep->chgCData(oldp+341,(((0U == ((IData)(vlSelf->top__DOT__cache_dut__DOT__uncached)
                                                 ? 0U
                                                 : 3U))
                                         ? 2U : 3U)),3);
            tracep->chgBit(oldp+342,((1U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
            tracep->chgCData(oldp+343,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                         ? 0U : 3U)),8);
            tracep->chgBit(oldp+344,((3U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
            tracep->chgQData(oldp+345,(vlSelf->top__DOT__ls_axi_w_data_o),64);
            tracep->chgBit(oldp+347,(vlSelf->top__DOT__axi_ls_u__DOT__wrLast));
            tracep->chgBit(oldp+348,((2U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
            tracep->chgQData(oldp+349,(vlSelf->top__DOT__pc_new),64);
            tracep->chgBit(oldp+351,(vlSelf->top__DOT__is_jump));
            tracep->chgQData(oldp+352,(((0x400000U 
                                         & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                         ? (vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                            + (((QData)((IData)(
                                                                vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                << 0x24U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                     >> 0x1cU))))
                                         : ((((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                                 << 4U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                                   >> 0x1cU))) 
                                            + (((QData)((IData)(
                                                                vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                                << 0x24U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                     >> 0x1cU)))))),64);
            tracep->chgBit(oldp+354,(vlSelf->top__DOT__if_instr_valid));
            tracep->chgQData(oldp+355,(vlSelf->top__DOT__sram_rdata),64);
            tracep->chgQData(oldp+357,(vlSelf->top__DOT__IF_u__DOT__pc_next_o),64);
            tracep->chgBit(oldp+359,((0ULL != vlSelf->top__DOT__pc_new)));
            tracep->chgBit(oldp+360,(((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      | ((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                         & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))));
            tracep->chgBit(oldp+361,((((((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                         & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))) 
                                        | (3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                       | (2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))) 
                                      | (7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)))));
            tracep->chgIData(oldp+362,(((1U & (IData)(
                                                      (vlSelf->top__DOT__pc_new 
                                                       >> 2U)))
                                         ? (IData)(
                                                   (vlSelf->top__DOT__sram_rdata 
                                                    >> 0x20U))
                                         : (IData)(vlSelf->top__DOT__sram_rdata))),32);
            tracep->chgQData(oldp+363,((((QData)((IData)(
                                                         vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))),64);
            tracep->chgIData(oldp+365,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]),32);
            tracep->chgQData(oldp+366,(vlSelf->top__DOT__ID_u__DOT__imm),64);
            tracep->chgBit(oldp+368,(vlSelf->top__DOT__src1sel_id));
            tracep->chgCData(oldp+369,(vlSelf->top__DOT__src2sel_id),2);
            tracep->chgCData(oldp+370,(vlSelf->top__DOT__aluctr_id),5);
            tracep->chgBit(oldp+371,(vlSelf->top__DOT__is_brc_id));
            tracep->chgBit(oldp+372,(vlSelf->top__DOT__is_jal_id));
            tracep->chgBit(oldp+373,(vlSelf->top__DOT__is_jalr_id));
            tracep->chgBit(oldp+374,(vlSelf->top__DOT__wben_id));
            tracep->chgCData(oldp+375,(vlSelf->top__DOT__rs1_idx_id),5);
            tracep->chgCData(oldp+376,(vlSelf->top__DOT__rs2_idx_id),5);
            tracep->chgBit(oldp+377,(vlSelf->top__DOT__DivEn_id));
            tracep->chgCData(oldp+378,(vlSelf->top__DOT__DivSel_id),3);
            tracep->chgBit(oldp+379,(vlSelf->top__DOT__in_trap_id));
            tracep->chgBit(oldp+380,(vlSelf->top__DOT__out_trap_id));
            tracep->chgBit(oldp+381,(vlSelf->top__DOT__trap_id));
            tracep->chgBit(oldp+382,(vlSelf->top__DOT__ld_use_hazard));
            tracep->chgBit(oldp+383,(vlSelf->top__DOT__id_flush));
            tracep->chgQData(oldp+384,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                              >> 0x1cU)))),64);
            tracep->chgIData(oldp+386,(((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                         << 4U) | (
                                                   vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1cU))),32);
            tracep->chgQData(oldp+387,(vlSelf->top__DOT__alures_ex),64);
            tracep->chgBit(oldp+389,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+390,((3U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x11U))),2);
            tracep->chgQData(oldp+391,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[5U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                              >> 0x1cU)))),64);
            tracep->chgQData(oldp+393,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[4U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[3U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                              >> 0x1cU)))),64);
            tracep->chgQData(oldp+395,((((QData)((IData)(
                                                         vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                              >> 0x1cU)))),64);
            tracep->chgQData(oldp+397,(vlSelf->top__DOT__ex_stage_u__DOT__rs2),64);
            tracep->chgCData(oldp+399,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0x17U))),5);
            tracep->chgBit(oldp+400,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+401,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+402,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+403,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+404,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 5U))));
            tracep->chgCData(oldp+405,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 2U))),3);
            tracep->chgBit(oldp+406,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 1U))));
            tracep->chgCData(oldp+407,(vlSelf->top__DOT__rs1_sel),2);
            tracep->chgCData(oldp+408,(vlSelf->top__DOT__rs2_sel),2);
            tracep->chgCData(oldp+409,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0xbU))),5);
            tracep->chgCData(oldp+410,((0x1fU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 6U))),5);
            tracep->chgBit(oldp+411,(vlSelf->top__DOT__ex_flush));
            tracep->chgBit(oldp+412,((3U == (0x7fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 4U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1cU))))));
            tracep->chgBit(oldp+413,((8U == (0x1fU 
                                             & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                 << 2U) 
                                                | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                   >> 0x1eU))))));
            tracep->chgCData(oldp+414,(((((1U & ((- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh))) 
                                                 | (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu))))) 
                                          | (2U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw))))) 
                                         | (2U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu))))) 
                                        | (3U & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld)))))),3);
            tracep->chgQData(oldp+415,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[9U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[8U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U])) 
                                              >> 1U)))),64);
            tracep->chgQData(oldp+417,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[5U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                              >> 1U)))),64);
            tracep->chgQData(oldp+419,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[4U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[3U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])) 
                                              >> 1U)))),64);
            tracep->chgIData(oldp+421,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[7U] 
                                         << 0x1fU) 
                                        | (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                           >> 1U))),32);
            tracep->chgQData(oldp+422,(vlSelf->top__DOT__wb_data),64);
            tracep->chgCData(oldp+424,((0x1fU & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                 >> 8U))),5);
            tracep->chgBit(oldp+425,((1U & vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U])));
            tracep->chgQData(oldp+426,((((QData)((IData)(
                                                         vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[0U])))),64);
            tracep->chgQData(oldp+428,(((2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U))))
                                         ? vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr
                                         : 0ULL)),64);
            tracep->chgBit(oldp+430,(vlSelf->top__DOT__clint_axi_arvalid));
            tracep->chgCData(oldp+431,(((2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U))))
                                         ? (7U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size))
                                         : 0U)),3);
            tracep->chgBit(oldp+432,(((2U == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x18U))))
                                       ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready))
                                       : 0U)));
            tracep->chgBit(oldp+433,(vlSelf->top__DOT__clint_axi_awvalid));
            tracep->chgQData(oldp+434,(vlSelf->top__DOT__clint_axi_wdata),64);
            tracep->chgBit(oldp+436,(vlSelf->top__DOT__clint_axi_wvalid));
            tracep->chgBit(oldp+437,(vlSelf->top__DOT__clint_axi_bready));
            tracep->chgBit(oldp+438,(vlSelf->top__DOT__rw_valid_i));
            tracep->chgBit(oldp+439,(vlSelf->top__DOT__fence_id));
            tracep->chgBit(oldp+440,((1U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])));
            tracep->chgBit(oldp+441,(vlSelf->top__DOT__Dcache_u__DOT__clean_OK));
            tracep->chgBit(oldp+442,(vlSelf->top__DOT__DcacheRdValid));
            tracep->chgBit(oldp+443,(vlSelf->top__DOT__DcacheWrValid));
            tracep->chgQData(oldp+444,(vlSelf->top__DOT__DcacheRdAddr),64);
            tracep->chgQData(oldp+446,(vlSelf->top__DOT__DcacheWrAddr),64);
            tracep->chgBit(oldp+448,((0U == (IData)(vlSelf->top__DOT__axi_ls_u__DOT__w_state))));
            tracep->chgCData(oldp+449,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                         ? (0xffU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeMask))
                                         : 0xffU)),8);
            tracep->chgCData(oldp+450,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                         ? (7U & ((
                                                   ((1U 
                                                     & ((- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh))) 
                                                        | (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu))))) 
                                                    | (2U 
                                                       & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw))))) 
                                                   | (2U 
                                                      & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu))))) 
                                                  | (3U 
                                                     & (- (IData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld))))))
                                         : 3U)),3);
            tracep->chgQData(oldp+451,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr),64);
            tracep->chgCData(oldp+453,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size),3);
            tracep->chgBit(oldp+454,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready));
            tracep->chgBit(oldp+455,((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x18U))))));
            tracep->chgBit(oldp+456,((0xaU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                          >> 0x1cU))))));
            tracep->chgIData(oldp+457,((IData)(vlSelf->top__DOT__IF_u__DOT__pc_next_o)),32);
            tracep->chgBit(oldp+458,(((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit))));
            tracep->chgCData(oldp+459,(vlSelf->top__DOT__cache_dut__DOT__cacheCurState),3);
            tracep->chgBit(oldp+460,(vlSelf->top__DOT__cache_dut__DOT__cacheHit));
            __Vtemp661[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[0U];
            __Vtemp661[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[1U];
            __Vtemp661[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[2U];
            __Vtemp661[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[3U];
            tracep->chgWData(oldp+461,(__Vtemp661),128);
            __Vtemp662[0U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[4U];
            __Vtemp662[1U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[5U];
            __Vtemp662[2U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[6U];
            __Vtemp662[3U] = vlSelf->top__DOT__cache_dut__DOT__rdBuffer[7U];
            tracep->chgWData(oldp+465,(__Vtemp662),128);
            tracep->chgBit(oldp+469,(vlSelf->top__DOT__cache_dut__DOT__wenWay1));
            tracep->chgBit(oldp+470,(vlSelf->top__DOT__cache_dut__DOT__wenWay2));
            tracep->chgBit(oldp+471,(vlSelf->top__DOT__cache_dut__DOT__uncached));
            tracep->chgBit(oldp+472,(vlSelf->top__DOT__cache_dut__DOT__diffAddr));
            tracep->chgBit(oldp+473,((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgBit(oldp+474,((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgBit(oldp+475,((2U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgBit(oldp+476,((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgCData(oldp+477,(vlSelf->top__DOT__cache_dut__DOT__rdCnt),2);
            tracep->chgWData(oldp+478,(vlSelf->top__DOT__cache_dut__DOT__rdBuffer),256);
            tracep->chgBit(oldp+486,((7U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState))));
            tracep->chgBit(oldp+487,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN));
            tracep->chgBit(oldp+488,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay1)))));
            tracep->chgBit(oldp+489,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__CEN)))));
            tracep->chgBit(oldp+490,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN));
            tracep->chgBit(oldp+491,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN)))));
            tracep->chgBit(oldp+492,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN));
            tracep->chgBit(oldp+493,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT__wenWay2)))));
            tracep->chgBit(oldp+494,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__CEN)))));
            tracep->chgBit(oldp+495,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN));
            tracep->chgBit(oldp+496,((1U & (~ (IData)(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN)))));
            tracep->chgQData(oldp+497,(((IData)(vlSelf->top__DOT__id_flush)
                                         ? 0ULL : vlSelf->top__DOT__pc_new)),64);
            tracep->chgIData(oldp+499,(((IData)(vlSelf->top__DOT__id_flush)
                                         ? 0U : ((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__pc_new 
                                                             >> 2U)))
                                                  ? (IData)(
                                                            (vlSelf->top__DOT__sram_rdata 
                                                             >> 0x20U))
                                                  : (IData)(vlSelf->top__DOT__sram_rdata)))),32);
            __Vtemp663[0U] = ((IData)(vlSelf->top__DOT__id_flush)
                               ? 0U : ((1U & (IData)(
                                                     (vlSelf->top__DOT__pc_new 
                                                      >> 2U)))
                                        ? (IData)((vlSelf->top__DOT__sram_rdata 
                                                   >> 0x20U))
                                        : (IData)(vlSelf->top__DOT__sram_rdata)));
            __Vtemp663[1U] = (IData)(((IData)(vlSelf->top__DOT__id_flush)
                                       ? 0ULL : vlSelf->top__DOT__pc_new));
            __Vtemp663[2U] = (IData)((((IData)(vlSelf->top__DOT__id_flush)
                                        ? 0ULL : vlSelf->top__DOT__pc_new) 
                                      >> 0x20U));
            tracep->chgWData(oldp+500,(__Vtemp663),96);
            tracep->chgWData(oldp+503,(vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout),96);
            tracep->chgCData(oldp+506,(vlSelf->top__DOT__ID_u__DOT__ext_op),5);
            tracep->chgCData(oldp+507,((0x1fU & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                                 >> 2U))),5);
            tracep->chgCData(oldp+508,((7U & (vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+509,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 0x19U)),7);
            tracep->chgIData(oldp+510,((vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U] 
                                        >> 7U)),25);
            tracep->chgBit(oldp+511,((3U == (0x7fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 1U)))));
            tracep->chgQData(oldp+512,(((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))),64);
            tracep->chgIData(oldp+514,(((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U])),32);
            tracep->chgBit(oldp+515,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__is_jalr_id))));
            tracep->chgBit(oldp+516,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__is_jal_id))));
            tracep->chgBit(oldp+517,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__is_brc_id))));
            tracep->chgBit(oldp+518,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__wben_id))));
            tracep->chgBit(oldp+519,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__trap_id))));
            tracep->chgBit(oldp+520,(((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                      & (IData)(vlSelf->top__DOT__fence_id))));
            tracep->chgWData(oldp+521,(vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout),316);
            tracep->chgQData(oldp+531,(vlSelf->top__DOT__ex_stage_u__DOT__src1),64);
            tracep->chgQData(oldp+533,(vlSelf->top__DOT__ex_stage_u__DOT__src2),64);
            tracep->chgQData(oldp+535,(vlSelf->top__DOT__ex_stage_u__DOT__rs1),64);
            VL_EXTEND_WQ(65,64, __Vtemp665, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp666, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp667, __Vtemp665, __Vtemp666);
            VL_EXTEND_WI(65,1, __Vtemp668, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp669, __Vtemp667, __Vtemp668);
            tracep->chgBit(oldp+537,((1U & ((0x4000000U 
                                             & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                             ? ((1U 
                                                 & __Vtemp669[2U]) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin))
                                             : ((IData)(
                                                        (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o 
                                                         >> 0x3fU)) 
                                                ^ (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow))))));
            tracep->chgBit(oldp+538,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero));
            tracep->chgQData(oldp+539,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout),64);
            tracep->chgBit(oldp+541,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            tracep->chgQData(oldp+542,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin),64);
            tracep->chgQData(oldp+544,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o),64);
            tracep->chgBit(oldp+546,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+547,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+548,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                              >> 0x17U))),3);
            tracep->chgQData(oldp+549,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift),64);
            VL_EXTEND_WQ(65,64, __Vtemp672, vlSelf->top__DOT__ex_stage_u__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp673, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp674, __Vtemp672, __Vtemp673);
            VL_EXTEND_WI(65,1, __Vtemp675, (IData)(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp676, __Vtemp674, __Vtemp675);
            tracep->chgBit(oldp+551,((1U & __Vtemp676[2U])));
            tracep->chgBit(oldp+552,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow));
            tracep->chgQData(oldp+553,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        ^ vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+555,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        | vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+557,((vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                        & vlSelf->top__DOT__ex_stage_u__DOT__src2)),64);
            tracep->chgQData(oldp+559,(((0x10U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                         ? ((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                             ? ((4U 
                                                 & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                                 ? 
                                                VL_MODDIV_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                                 : 
                                                VL_MODDIVS_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2))
                                             : ((4U 
                                                 & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                                 ? 
                                                VL_DIV_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                                 : 
                                                VL_DIVS_QQQ(64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)))
                                         : ((8U & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                             ? ((4U 
                                                 & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                                 ? 
                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                 * vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                                 : 
                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                 * vlSelf->top__DOT__ex_stage_u__DOT__src2))
                                             : ((4U 
                                                 & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                                 ? 
                                                VL_MULS_QQQ(64,64,64, vlSelf->top__DOT__ex_stage_u__DOT__src1, vlSelf->top__DOT__ex_stage_u__DOT__src2)
                                                 : 
                                                (vlSelf->top__DOT__ex_stage_u__DOT__src1 
                                                 * vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
            tracep->chgCData(oldp+561,((0xfU & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                >> 0x17U))),4);
            tracep->chgBit(oldp+562,((1U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+563,((0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))),6);
            tracep->chgQData(oldp+564,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
            tracep->chgQData(oldp+566,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
            tracep->chgQData(oldp+568,((0xffffffffffffffffULL 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2)))),64);
            tracep->chgQData(oldp+570,((~ (0xffffffffffffffffULL 
                                           >> (0x3fU 
                                               & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))))),64);
            tracep->chgQData(oldp+572,(((0x8000000U 
                                         & vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])
                                         ? (vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                            & (QData)((IData)(
                                                              ((0xffffffffffffffffULL 
                                                                >> 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->top__DOT__ex_stage_u__DOT__src2))) 
                                                               >> 0x20U))))
                                         : vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
            tracep->chgQData(oldp+574,(((0x8000000U 
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
            tracep->chgQData(oldp+576,(vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
            tracep->chgCData(oldp+578,((7U & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                              >> 8U))),3);
            tracep->chgQData(oldp+579,(((((QData)((IData)(
                                                          vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[9U])) 
                                          << 0x24U) 
                                         | (((QData)((IData)(
                                                             vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[8U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U])) 
                                               >> 0x1cU))) 
                                        + (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                            << 0x24U) 
                                           | (((QData)((IData)(
                                                               vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                 >> 0x1cU))))),64);
            tracep->chgQData(oldp+581,((vlSelf->top__DOT__ex_stage_u__DOT__rs1 
                                        + (((QData)((IData)(
                                                            vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[2U])) 
                                            << 0x24U) 
                                           | (((QData)((IData)(
                                                               vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[1U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U])) 
                                                 >> 0x1cU))))),64);
            tracep->chgBit(oldp+583,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres))))));
            tracep->chgBit(oldp+584,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry));
            tracep->chgBit(oldp+585,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow));
            tracep->chgQData(oldp+586,(vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres),64);
            tracep->chgQData(oldp+588,((~ vlSelf->top__DOT__ex_stage_u__DOT__rs2)),64);
            tracep->chgBit(oldp+590,((1U & ((0x400U 
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
            tracep->chgBit(oldp+591,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                       & ((0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 8U)) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 0xbU)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+592,(((vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[2U] 
                                       & ((0x1fU & 
                                           (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                            >> 8U)) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U] 
                                                 >> 6U)))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                   >> 8U))))));
            tracep->chgBit(oldp+593,((8U == (0x1fU 
                                             & (vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout[6U] 
                                                >> 3U)))));
            tracep->chgQData(oldp+594,(vlSelf->top__DOT__ls_u__DOT__csr_wr_data),64);
            tracep->chgBit(oldp+596,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh));
            tracep->chgBit(oldp+597,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu));
            tracep->chgBit(oldp+598,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw));
            tracep->chgBit(oldp+599,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu));
            tracep->chgBit(oldp+600,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld));
            tracep->chgQData(oldp+601,(vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data),64);
            tracep->chgBit(oldp+603,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimeWrEn));
            tracep->chgBit(oldp+604,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmpWrEn));
            tracep->chgBit(oldp+605,(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__slv_reg_wren));
            tracep->chgIData(oldp+606,(vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i),32);
            tracep->chgBit(oldp+607,(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i));
            tracep->chgBit(oldp+608,(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i));
            tracep->chgBit(oldp+609,(((3U != (0x7fU 
                                              & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                  << 4U) 
                                                 | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                    >> 0x1cU)))) 
                                      | (8U == (0x1fU 
                                                & ((vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[7U] 
                                                    << 2U) 
                                                   | (vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[6U] 
                                                      >> 0x1eU)))))));
            tracep->chgIData(oldp+610,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                         ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)
                                         : (((IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                      >> 0xbU)) 
                                             << 0xbU) 
                                            | (0x7e0U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 5U)) 
                                                  << 5U))))),32);
            tracep->chgCData(oldp+611,(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState),3);
            tracep->chgBit(oldp+612,(vlSelf->top__DOT__Dcache_u__DOT__cacheHit));
            tracep->chgBit(oldp+613,(vlSelf->top__DOT__Dcache_u__DOT__way1Hit));
            tracep->chgBit(oldp+614,(vlSelf->top__DOT__Dcache_u__DOT__way2Hit));
            VL_EXTEND_WQ(128,64, __Vtemp680, vlSelf->top__DOT__Dcache_u__DOT__storeData);
            if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
                __Vtemp687[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[0U];
                __Vtemp687[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[1U];
                __Vtemp687[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[2U];
                __Vtemp687[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[3U];
            } else {
                __Vtemp687[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp680[0U])
                                   : 0U);
                __Vtemp687[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp680[1U])
                                   : 0U);
                __Vtemp687[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                       : __Vtemp680[2U])
                                   : 0U);
                __Vtemp687[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                                  >> 0x20U))
                                       : __Vtemp680[3U])
                                   : 0U);
            }
            tracep->chgWData(oldp+615,(__Vtemp687),128);
            VL_EXTEND_WQ(128,64, __Vtemp690, vlSelf->top__DOT__Dcache_u__DOT__storeData);
            if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
                __Vtemp697[0U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[4U];
                __Vtemp697[1U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[5U];
                __Vtemp697[2U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[6U];
                __Vtemp697[3U] = vlSelf->top__DOT__Dcache_u__DOT__rdBuffer[7U];
            } else {
                __Vtemp697[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp690[0U])
                                   : 0U);
                __Vtemp697[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? 0U : __Vtemp690[1U])
                                   : 0U);
                __Vtemp697[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__storeData)
                                       : __Vtemp690[2U])
                                   : 0U);
                __Vtemp697[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 3U)))
                                       ? (IData)((vlSelf->top__DOT__Dcache_u__DOT__storeData 
                                                  >> 0x20U))
                                       : __Vtemp690[3U])
                                   : 0U);
            }
            tracep->chgWData(oldp+619,(__Vtemp697),128);
            tracep->chgBit(oldp+623,(vlSelf->top__DOT__Dcache_u__DOT__wenWay1));
            tracep->chgBit(oldp+624,(vlSelf->top__DOT__Dcache_u__DOT__wenWay2));
            tracep->chgBit(oldp+625,(vlSelf->top__DOT__Dcache_u__DOT__uncached));
            tracep->chgBit(oldp+626,((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgQData(oldp+627,(vlSelf->top__DOT__Dcache_u__DOT__reqLatch),33);
            tracep->chgCData(oldp+629,((0x1fU & (IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch))),5);
            tracep->chgCData(oldp+630,((0x3fU & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 5U)))),6);
            tracep->chgIData(oldp+631,((0x1fffffU & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                             >> 0xbU)))),21);
            tracep->chgBit(oldp+632,((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgBit(oldp+633,((2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgBit(oldp+634,((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgQData(oldp+635,((((QData)((IData)(
                                                         (0x1fffffU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                     >> 0xbU))))) 
                                         << 0xbU) | (QData)((IData)(
                                                                    (0x7e0U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                                >> 5U)) 
                                                                        << 5U)))))),64);
            tracep->chgCData(oldp+637,(vlSelf->top__DOT__Dcache_u__DOT__rdCnt),2);
            tracep->chgWData(oldp+638,(vlSelf->top__DOT__Dcache_u__DOT__rdBuffer),256);
            tracep->chgBit(oldp+646,((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgQData(oldp+647,(vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch),64);
            tracep->chgBit(oldp+649,(vlSelf->top__DOT__Dcache_u__DOT__wrLow));
            tracep->chgBit(oldp+650,(vlSelf->top__DOT__Dcache_u__DOT__wrHigh));
            tracep->chgQData(oldp+651,(vlSelf->top__DOT__Dcache_u__DOT__storeData),64);
            tracep->chgCData(oldp+653,(vlSelf->top__DOT__Dcache_u__DOT__storeMask),8);
            tracep->chgQData(oldp+654,(vlSelf->top__DOT__Dcache_u__DOT__sramMask),64);
            VL_EXTEND_WQ(128,64, __Vtemp700, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
            if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
                __Vtemp709[0U] = 0xffffffffU;
                __Vtemp709[1U] = 0xffffffffU;
                __Vtemp709[2U] = 0xffffffffU;
                __Vtemp709[3U] = 0xffffffffU;
            } else {
                __Vtemp709[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? 0U : __Vtemp700[0U])
                                       : 0U) : 0U);
                __Vtemp709[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? 0U : __Vtemp700[1U])
                                       : 0U) : 0U);
                __Vtemp709[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                           : __Vtemp700[2U])
                                       : 0U) : 0U);
                __Vtemp709[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                      >> 0x20U))
                                           : __Vtemp700[3U])
                                       : 0U) : 0U);
            }
            tracep->chgWData(oldp+656,(__Vtemp709),128);
            VL_EXTEND_WQ(128,64, __Vtemp712, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
            if ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) {
                __Vtemp721[0U] = 0xffffffffU;
                __Vtemp721[1U] = 0xffffffffU;
                __Vtemp721[2U] = 0xffffffffU;
                __Vtemp721[3U] = 0xffffffffU;
            } else {
                __Vtemp721[0U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? 0U : __Vtemp712[0U])
                                       : 0U) : 0U);
                __Vtemp721[1U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? 0U : __Vtemp712[1U])
                                       : 0U) : 0U);
                __Vtemp721[2U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                           : __Vtemp712[2U])
                                       : 0U) : 0U);
                __Vtemp721[3U] = ((1U & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 0x20U)))
                                   ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                       ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 3U)))
                                           ? (IData)(
                                                     (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                      >> 0x20U))
                                           : __Vtemp712[3U])
                                       : 0U) : 0U);
            }
            tracep->chgWData(oldp+660,(__Vtemp721),128);
            tracep->chgBit(oldp+664,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U))) 
                                      & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
            tracep->chgBit(oldp+665,((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & (~ (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 0x20U)))) 
                                      & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit)))));
            tracep->chgBit(oldp+666,((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgIData(oldp+667,((IData)(vlSelf->top__DOT__Dcache_u__DOT__reqLatch)),32);
            tracep->chgBit(oldp+668,((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))));
            tracep->chgCData(oldp+669,(vlSelf->top__DOT__Dcache_u__DOT__cleanCnt),7);
            tracep->chgBit(oldp+670,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)))));
            VL_EXTEND_WQ(128,64, __Vtemp724, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
            __Vtemp734[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                  ? 0xffffffffU : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                 >> 3U)))
                                                      ? 0U
                                                      : 
                                                     __Vtemp724[0U])
                                                     : 0U)
                                                    : 0U)));
            __Vtemp734[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                  ? 0xffffffffU : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                 >> 3U)))
                                                      ? 0U
                                                      : 
                                                     __Vtemp724[1U])
                                                     : 0U)
                                                    : 0U)));
            __Vtemp734[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                  ? 0xffffffffU : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                 >> 3U)))
                                                      ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                                      : 
                                                     __Vtemp724[2U])
                                                     : 0U)
                                                    : 0U)));
            __Vtemp734[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                  ? 0xffffffffU : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrLow)
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                 >> 3U)))
                                                      ? (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                                 >> 0x20U))
                                                      : 
                                                     __Vtemp724[3U])
                                                     : 0U)
                                                    : 0U)));
            tracep->chgWData(oldp+671,(__Vtemp734),128);
            VL_EXTEND_WQ(128,64, __Vtemp737, vlSelf->top__DOT__Dcache_u__DOT__sramMask);
            __Vtemp747[0U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                  ? 0xffffffffU : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                 >> 3U)))
                                                      ? 0U
                                                      : 
                                                     __Vtemp737[0U])
                                                     : 0U)
                                                    : 0U)));
            __Vtemp747[1U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                  ? 0xffffffffU : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                 >> 3U)))
                                                      ? 0U
                                                      : 
                                                     __Vtemp737[1U])
                                                     : 0U)
                                                    : 0U)));
            __Vtemp747[2U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                  ? 0xffffffffU : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                 >> 3U)))
                                                      ? (IData)(vlSelf->top__DOT__Dcache_u__DOT__sramMask)
                                                      : 
                                                     __Vtemp737[2U])
                                                     : 0U)
                                                    : 0U)));
            __Vtemp747[3U] = (~ ((7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                  ? 0xffffffffU : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                               >> 0x20U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__Dcache_u__DOT__wrHigh)
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                 >> 3U)))
                                                      ? (IData)(
                                                                (vlSelf->top__DOT__Dcache_u__DOT__sramMask 
                                                                 >> 0x20U))
                                                      : 
                                                     __Vtemp737[3U])
                                                     : 0U)
                                                    : 0U)));
            tracep->chgWData(oldp+675,(__Vtemp747),128);
            tracep->chgBit(oldp+679,((1U & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)))));
            tracep->chgCData(oldp+680,(vlSelf->top__DOT__axi_ls_u__DOT__w_state),2);
            tracep->chgWData(oldp+681,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout),289);
            tracep->chgBit(oldp+691,((1U & ((IData)(vlSelf->top__DOT__fence_id) 
                                            | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]))));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [3U] | vlSelf->__Vm_traceActivity
                         [4U]))) {
            tracep->chgBit(oldp+692,((1U & (~ (((((
                                                   ((IData)(vlSelf->top__DOT__fence_id) 
                                                    | vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout[0U]) 
                                                   & (~ (IData)(vlSelf->top__DOT__is_jump))) 
                                                  | (IData)(vlSelf->top__DOT__ld_use_hazard)) 
                                                 | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                                | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                               | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))))));
            tracep->chgBit(oldp+693,((1U & (~ ((((IData)(vlSelf->top__DOT__ld_use_hazard) 
                                                 | (~ (IData)(vlSelf->top__DOT__if_instr_valid))) 
                                                | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                               | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))))));
            tracep->chgBit(oldp+694,((1U & (~ (((~ (IData)(vlSelf->top__DOT__if_instr_valid)) 
                                                | (IData)(vlSelf->top__DOT__dataNotOk)) 
                                               | (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))))));
            tracep->chgBit(oldp+695,((1U & (~ (((((
                                                   ((((0U 
                                                       == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                      | ((6U 
                                                          == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                         & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                                     & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                                    | (1U 
                                                       == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                                   | (2U 
                                                      == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                                  | (7U 
                                                     == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                                 | (3U 
                                                    == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                                | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)) 
                                               | (4U 
                                                  == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)))))));
            tracep->chgBit(oldp+696,((((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                             | ((6U 
                                                 == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                            & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                           | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                          | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                         | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                        | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                       | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay1)) 
                                      | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)))));
            tracep->chgBit(oldp+697,((1U & (~ (((((
                                                   ((((0U 
                                                       == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                      | ((6U 
                                                          == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                         & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                                     & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                                    | (1U 
                                                       == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                                   | (2U 
                                                      == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                                  | (7U 
                                                     == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                                 | (3U 
                                                    == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                                | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)) 
                                               | (4U 
                                                  == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)))))));
            tracep->chgBit(oldp+698,((((((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                             | ((6U 
                                                 == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                & (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk))) 
                                            & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                           | (1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                          | (2U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                         | (7U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                        | (3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))) 
                                       | (IData)(vlSelf->top__DOT__Dcache_u__DOT__wenWay2)) 
                                      | (4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)))));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [3U] | vlSelf->__Vm_traceActivity
                         [5U]))) {
            tracep->chgQData(oldp+699,(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs2_idx_id])),64);
            tracep->chgQData(oldp+701,(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs1_idx_id])),64);
            __Vtemp752[0U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
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
                                                                    | (((IData)(vlSelf->top__DOT__DivEn_id) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->top__DOT__DivSel_id) 
                                                                           << 2U) 
                                                                          | ((((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                                               & (IData)(vlSelf->top__DOT__trap_id)) 
                                                                              << 1U) 
                                                                             | ((~ (IData)(vlSelf->top__DOT__ex_flush)) 
                                                                                & (IData)(vlSelf->top__DOT__fence_id)))))))))))))));
            __Vtemp752[1U] = (((IData)(vlSelf->top__DOT__ID_u__DOT__imm) 
                               >> 4U) | ((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                                  >> 0x20U)) 
                                         << 0x1cU));
            __Vtemp752[2U] = (((IData)((vlSelf->top__DOT__ID_u__DOT__imm 
                                        >> 0x20U)) 
                               >> 4U) | ((IData)(((0U 
                                                   == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                                  [vlSelf->top__DOT__rs1_idx_id])) 
                                         << 0x1cU));
            __Vtemp752[3U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs1_idx_id])) 
                               >> 4U) | ((IData)(((
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                                    ? 0ULL
                                                    : 
                                                   vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                                   [vlSelf->top__DOT__rs1_idx_id]) 
                                                  >> 0x20U)) 
                                         << 0x1cU));
            __Vtemp752[4U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs1_idx_id))
                                          ? 0ULL : 
                                         vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                         [vlSelf->top__DOT__rs1_idx_id]) 
                                        >> 0x20U)) 
                               >> 4U) | ((IData)(((0U 
                                                   == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                                  [vlSelf->top__DOT__rs2_idx_id])) 
                                         << 0x1cU));
            __Vtemp752[5U] = (((IData)(((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                         ? 0ULL : vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                        [vlSelf->top__DOT__rs2_idx_id])) 
                               >> 4U) | ((IData)(((
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                                    ? 0ULL
                                                    : 
                                                   vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                                   [vlSelf->top__DOT__rs2_idx_id]) 
                                                  >> 0x20U)) 
                                         << 0x1cU));
            __Vtemp752[6U] = (((IData)((((0U == (IData)(vlSelf->top__DOT__rs2_idx_id))
                                          ? 0ULL : 
                                         vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles
                                         [vlSelf->top__DOT__rs2_idx_id]) 
                                        >> 0x20U)) 
                               >> 4U) | (((IData)(vlSelf->top__DOT__ex_flush)
                                           ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                                         << 0x1cU));
            __Vtemp752[7U] = ((((IData)(vlSelf->top__DOT__ex_flush)
                                 ? 0U : vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[0U]) 
                               >> 4U) | ((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                                   ? 0ULL
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                                         << 0x1cU));
            __Vtemp752[8U] = (((IData)(((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U]))))) 
                               >> 4U) | ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                                    ? 0ULL
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                                  >> 0x20U)) 
                                         << 0x1cU));
            __Vtemp752[9U] = ((IData)((((IData)(vlSelf->top__DOT__ex_flush)
                                         ? 0ULL : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout[1U])))) 
                                       >> 0x20U)) >> 4U);
            tracep->chgWData(oldp+703,(__Vtemp752),316);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+713,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? 0U : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid)))));
            tracep->chgQData(oldp+714,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                         ? 0ULL : vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data)),64);
            tracep->chgBit(oldp+716,(vlSelf->top__DOT__if_axi_r_last_i));
            tracep->chgCData(oldp+717,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id),4);
            tracep->chgBit(oldp+718,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready));
            tracep->chgBit(oldp+719,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                       ? (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid))
                                       : 0U)));
            tracep->chgQData(oldp+720,(vlSelf->top__DOT__ls_axi_r_data_i),64);
            tracep->chgBit(oldp+722,(vlSelf->top__DOT__ls_axi_r_last_i));
            tracep->chgBit(oldp+723,(vlSelf->top__DOT__if_stall_n));
            tracep->chgBit(oldp+724,(vlSelf->top__DOT__ls_addr_ok_i));
            tracep->chgBit(oldp+725,((1U & (~ (IData)(vlSelf->top__DOT__ls_addr_ok_i)))));
            tracep->chgBit(oldp+726,(vlSelf->top__DOT__ls_stall_n));
            tracep->chgBit(oldp+727,(vlSelf->top__DOT__dataNotOk));
            tracep->chgQData(oldp+728,(vlSelf->top__DOT__ls_sram_rd_data),64);
            tracep->chgBit(oldp+730,(vlSelf->top__DOT__dataValid_o));
            tracep->chgBit(oldp+731,(vlSelf->top__DOT__lsAxiRdDataVAlid));
            tracep->chgBit(oldp+732,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready));
            tracep->chgBit(oldp+733,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid));
            tracep->chgQData(oldp+734,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data),64);
            tracep->chgBit(oldp+736,(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last));
            tracep->chgCData(oldp+737,(vlSelf->top__DOT__cache_dut__DOT__cacheNexState),3);
            tracep->chgCData(oldp+738,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_1__A),6);
            tracep->chgCData(oldp+739,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A),6);
            tracep->chgCData(oldp+740,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_1__A),6);
            tracep->chgCData(oldp+741,(vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A),6);
            tracep->chgCData(oldp+742,(vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next),2);
            tracep->chgBit(oldp+743,(vlSelf->top__DOT__ls_u__DOT__csr_stall_n));
            tracep->chgCData(oldp+744,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b),8);
            tracep->chgSData(oldp+745,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h),16);
            tracep->chgIData(oldp+746,(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w),32);
            tracep->chgCData(oldp+747,(vlSelf->top__DOT__Dcache_u__DOT__cacheNexState),3);
            tracep->chgBit(oldp+748,(vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk));
            tracep->chgCData(oldp+749,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A),6);
            tracep->chgCData(oldp+750,(vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A),6);
            tracep->chgCData(oldp+751,(vlSelf->top__DOT__axi_ls_u__DOT__w_state_next),2);
            tracep->chgCData(oldp+752,(vlSelf->top__DOT__axi_ls_u__DOT__r_state_next),2);
            tracep->chgWData(oldp+753,(vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din),289);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
            tracep->chgQData(oldp+763,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[0]),64);
            tracep->chgQData(oldp+765,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[1]),64);
            tracep->chgQData(oldp+767,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[2]),64);
            tracep->chgQData(oldp+769,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[3]),64);
            tracep->chgQData(oldp+771,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[4]),64);
            tracep->chgQData(oldp+773,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[5]),64);
            tracep->chgQData(oldp+775,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[6]),64);
            tracep->chgQData(oldp+777,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[7]),64);
            tracep->chgQData(oldp+779,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[8]),64);
            tracep->chgQData(oldp+781,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[9]),64);
            tracep->chgQData(oldp+783,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[10]),64);
            tracep->chgQData(oldp+785,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[11]),64);
            tracep->chgQData(oldp+787,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[12]),64);
            tracep->chgQData(oldp+789,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[13]),64);
            tracep->chgQData(oldp+791,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[14]),64);
            tracep->chgQData(oldp+793,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[15]),64);
            tracep->chgQData(oldp+795,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[16]),64);
            tracep->chgQData(oldp+797,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[17]),64);
            tracep->chgQData(oldp+799,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[18]),64);
            tracep->chgQData(oldp+801,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[19]),64);
            tracep->chgQData(oldp+803,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[20]),64);
            tracep->chgQData(oldp+805,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[21]),64);
            tracep->chgQData(oldp+807,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[22]),64);
            tracep->chgQData(oldp+809,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[23]),64);
            tracep->chgQData(oldp+811,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[24]),64);
            tracep->chgQData(oldp+813,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[25]),64);
            tracep->chgQData(oldp+815,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[26]),64);
            tracep->chgQData(oldp+817,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[27]),64);
            tracep->chgQData(oldp+819,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[28]),64);
            tracep->chgQData(oldp+821,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[29]),64);
            tracep->chgQData(oldp+823,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[30]),64);
            tracep->chgQData(oldp+825,(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[31]),64);
        }
        tracep->chgBit(oldp+827,(vlSelf->clk));
        tracep->chgBit(oldp+828,(vlSelf->rst_n));
        tracep->chgQData(oldp+829,(vlSelf->pc_diff),64);
        tracep->chgQData(oldp+831,(vlSelf->pc_decoding),64);
        tracep->chgIData(oldp+833,(vlSelf->instr_diff),32);
        tracep->chgQData(oldp+834,(vlSelf->regA0),64);
        tracep->chgBit(oldp+836,(vlSelf->stall_n_diff));
        tracep->chgBit(oldp+837,(vlSelf->axi_ar_ready_i));
        tracep->chgBit(oldp+838,(vlSelf->axi_ar_valid_o));
        tracep->chgQData(oldp+839,(vlSelf->axi_ar_addr_o),64);
        tracep->chgCData(oldp+841,(vlSelf->axi_ar_prot_o),3);
        tracep->chgCData(oldp+842,(vlSelf->axi_ar_id_o),4);
        tracep->chgBit(oldp+843,(vlSelf->axi_ar_user_o));
        tracep->chgCData(oldp+844,(vlSelf->axi_ar_len_o),8);
        tracep->chgCData(oldp+845,(vlSelf->axi_ar_size_o),3);
        tracep->chgCData(oldp+846,(vlSelf->axi_ar_burst_o),2);
        tracep->chgBit(oldp+847,(vlSelf->axi_ar_lock_o));
        tracep->chgCData(oldp+848,(vlSelf->axi_ar_cache_o),4);
        tracep->chgCData(oldp+849,(vlSelf->axi_ar_qos_o),4);
        tracep->chgCData(oldp+850,(vlSelf->axi_ar_region_o),4);
        tracep->chgBit(oldp+851,(vlSelf->axi_r_ready_o));
        tracep->chgBit(oldp+852,(vlSelf->axi_r_valid_i));
        tracep->chgCData(oldp+853,(vlSelf->axi_r_resp_i),2);
        tracep->chgQData(oldp+854,(vlSelf->axi_r_data_i),64);
        tracep->chgBit(oldp+856,(vlSelf->axi_r_last_i));
        tracep->chgCData(oldp+857,(vlSelf->axi_r_id_i),4);
        tracep->chgBit(oldp+858,(vlSelf->axi_r_user_i));
        tracep->chgBit(oldp+859,(vlSelf->axi_aw_ready_i));
        tracep->chgBit(oldp+860,(vlSelf->axi_aw_valid_o));
        tracep->chgQData(oldp+861,(vlSelf->axi_aw_addr_o),64);
        tracep->chgCData(oldp+863,(vlSelf->axi_aw_prot_o),3);
        tracep->chgCData(oldp+864,(vlSelf->axi_aw_id_o),4);
        tracep->chgBit(oldp+865,(vlSelf->axi_aw_user_o));
        tracep->chgCData(oldp+866,(vlSelf->axi_aw_len_o),8);
        tracep->chgCData(oldp+867,(vlSelf->axi_aw_size_o),3);
        tracep->chgCData(oldp+868,(vlSelf->axi_aw_burst_o),2);
        tracep->chgBit(oldp+869,(vlSelf->axi_aw_lock_o));
        tracep->chgCData(oldp+870,(vlSelf->axi_aw_cache_o),4);
        tracep->chgCData(oldp+871,(vlSelf->axi_aw_qos_o),4);
        tracep->chgCData(oldp+872,(vlSelf->axi_aw_region_o),4);
        tracep->chgBit(oldp+873,(vlSelf->axi_w_ready_i));
        tracep->chgBit(oldp+874,(vlSelf->axi_w_valid_o));
        tracep->chgQData(oldp+875,(vlSelf->axi_w_data_o),64);
        tracep->chgCData(oldp+877,(vlSelf->axi_w_strb_o),8);
        tracep->chgBit(oldp+878,(vlSelf->axi_w_last_o));
        tracep->chgBit(oldp+879,(vlSelf->axi_w_user_o));
        tracep->chgBit(oldp+880,(vlSelf->axi_b_ready_o));
        tracep->chgBit(oldp+881,(vlSelf->axi_b_valid_i));
        tracep->chgCData(oldp+882,(vlSelf->axi_b_resp_i),2);
        tracep->chgCData(oldp+883,(vlSelf->axi_b_id_i),4);
        tracep->chgBit(oldp+884,(vlSelf->axi_b_user_i));
        tracep->chgBit(oldp+885,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                    ? 0U : 1U) ? 0U
                                   : (1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready)))));
        tracep->chgCData(oldp+886,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                     ? 0U : (3U & (
                                                   (0xaU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                                >> 0x1cU))))
                                                    ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                                 >> 0x18U))))
                                                     ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp)
                                                     : (IData)(vlSelf->axi_r_resp_i)))))),2);
        tracep->chgBit(oldp+887,(((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x1cU))))
                                   ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready)
                                   : ((2U == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x18U))))
                                       ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready)
                                       : (IData)(vlSelf->axi_aw_ready_i)))));
        tracep->chgBit(oldp+888,(((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                            >> 0x1cU))))
                                   ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid)
                                   : ((2U == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x18U))))
                                       ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid)
                                       : (IData)(vlSelf->axi_b_valid_i)))));
        tracep->chgCData(oldp+889,(((0xaU == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x1cU))))
                                     ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp)
                                     : ((2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                           >> 0x18U))))
                                         ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp)
                                         : (IData)(vlSelf->axi_b_resp_i)))),2);
        tracep->chgCData(oldp+890,(((0xaU == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x1cU))))
                                     ? 1U : ((2U == 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                          >> 0x18U))))
                                              ? 1U : 
                                             (0xfU 
                                              & (IData)(vlSelf->axi_b_id_i))))),4);
        tracep->chgBit(oldp+891,((1U & ((0xaU == (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                             >> 0x1cU))))
                                         ? (IData)(vlSelf->top__DOT__axi_mmio_b_user_i)
                                         : ((2U == 
                                             (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg 
                                                         >> 0x18U))))
                                             ? 0U : (IData)(vlSelf->axi_b_user_i))))));
        tracep->chgBit(oldp+892,((((0U != (IData)(vlSelf->top__DOT__axi_icache_dut__DOT__r_state))
                                    ? 0U : 1U) ? (1U 
                                                  & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready))
                                   : 0U)));
        tracep->chgCData(oldp+893,(((1U & (IData)(vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id))
                                     ? (3U & ((0xaU 
                                               == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                              >> 0x1cU))))
                                               ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                               : ((2U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                               >> 0x18U))))
                                                   ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp)
                                                   : (IData)(vlSelf->axi_r_resp_i))))
                                     : 0U)),2);
        VL_EXTEND_WW(227,226, __Vtemp753, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        VL_EXTEND_WW(227,226, __Vtemp754, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        VL_EXTEND_WW(227,226, __Vtemp755, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        VL_EXTEND_WW(227,226, __Vtemp756, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
        tracep->chgQData(oldp+894,(((((((((- (QData)((IData)(
                                                             ((3U 
                                                               == 
                                                               (0x7fU 
                                                                & (__Vtemp753[4U] 
                                                                   >> 3U))) 
                                                              & (0U 
                                                                 == 
                                                                 (7U 
                                                                  & (__Vtemp754[4U] 
                                                                     >> 0xfU))))))) 
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
                                                                  & (__Vtemp755[4U] 
                                                                     >> 3U))) 
                                                                & (4U 
                                                                   == 
                                                                   (7U 
                                                                    & (__Vtemp756[4U] 
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
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w))))) 
                                     | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu))) 
                                        & (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w)))) 
                                    | ((- (QData)((IData)(vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld))) 
                                       & vlSelf->top__DOT__ls_sram_rd_data))),64);
        tracep->chgCData(oldp+896,(((0xaU == (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x1cU))))
                                     ? (IData)(vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp)
                                     : ((2U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                           >> 0x18U))))
                                         ? (IData)(vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp)
                                         : (IData)(vlSelf->axi_r_resp_i)))),2);
        tracep->chgBit(oldp+897,((1U & ((0xaU == (0xfU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                             >> 0x1cU))))
                                         ? (IData)(vlSelf->top__DOT__axi_mmio_r_user_i)
                                         : ((2U == 
                                             (0xfU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr 
                                                         >> 0x18U))))
                                             ? 0U : (IData)(vlSelf->axi_r_user_i))))));
        tracep->chgBit(oldp+898,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                  & vlSelf->top__DOT__cache_dut__DOT__randomBit)));
        tracep->chgBit(oldp+899,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__if_axi_r_last_i)) 
                                  & (~ vlSelf->top__DOT__cache_dut__DOT__randomBit))));
        tracep->chgIData(oldp+900,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                     ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                         ? (0x1fffffU 
                                            & (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 0xbU)))
                                         : 0U) : 0U)),21);
        tracep->chgIData(oldp+901,((((3U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__if_axi_r_last_i))
                                     ? ((1U & vlSelf->top__DOT__cache_dut__DOT__randomBit)
                                         ? 0U : (0x1fffffU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                            >> 0xbU))))
                                     : 0U)),21);
        tracep->chgQData(oldp+902,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (0ULL != vlSelf->top__DOT__pc_new)) 
                                     | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                         & (0ULL != vlSelf->top__DOT__pc_new)) 
                                        & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))
                                     ? ((1U & (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 4U)))
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                           >> 3U)))
                                             ? ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
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
                                             : ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
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
                                         : ((1U & (IData)(
                                                          (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                           >> 3U)))
                                             ? ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
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
                                             : ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
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
                                     : 0ULL)),64);
        tracep->chgQData(oldp+904,(((((0U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                      & (0ULL != vlSelf->top__DOT__pc_new)) 
                                     | (((1U == (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheCurState)) 
                                         & (0ULL != vlSelf->top__DOT__pc_new)) 
                                        & (IData)(vlSelf->top__DOT__cache_dut__DOT__cacheHit)))
                                     ? ((1U & (IData)(
                                                      (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                       >> 4U)))
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                           >> 3U)))
                                             ? ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
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
                                             : ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
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
                                         : ((1U & (IData)(
                                                          (vlSelf->top__DOT__cache_dut__DOT__reqLatch 
                                                           >> 3U)))
                                             ? ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
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
                                             : ((IData)(vlSelf->top__DOT__cache_dut__DOT__missFlag)
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
                                     : 0ULL)),64);
        tracep->chgIData(oldp+906,((IData)(((4U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                             ? vlSelf->top__DOT__Dcache_u__DOT__cleanWrAddr
                                             : (QData)((IData)(
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
                                                                        << 5U)))))))))),32);
        tracep->chgBit(oldp+907,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                  & ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                     | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray1 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 5U)))))))));
        tracep->chgBit(oldp+908,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                   & (IData)(vlSelf->top__DOT__ls_axi_r_last_i)) 
                                  & ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                     | (IData)((vlSelf->top__DOT__Dcache_u__DOT__validArray2 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 5U)))))))));
        tracep->chgIData(oldp+909,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))
                                     ? (0x1fffffU & 
                                        ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                          ? vlSelf->top__DOT__Dcache_u__DOT__tagArray1
                                         [(0x3fU & (IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 5U)))]
                                          : (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 0xbU))))
                                     : 0U)),21);
        tracep->chgIData(oldp+910,((((3U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                     & (IData)(vlSelf->top__DOT__ls_axi_r_last_i))
                                     ? (0x1fffffU & 
                                        ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
                                          ? (IData)(
                                                    (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                     >> 0xbU))
                                          : vlSelf->top__DOT__Dcache_u__DOT__tagArray2
                                         [(0x3fU & (IData)(
                                                           (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                            >> 5U)))]))
                                     : 0U)),21);
        tracep->chgQData(oldp+911,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                        & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                       & (IData)(vlSelf->top__DOT__ls_stall_n)) 
                                      | (((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                          & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                         & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                     | (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i))
                                     ? ((1U & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 4U)))
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
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
                                             : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
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
                                         : ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
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
                                             : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
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
                                     : 0ULL)),64);
        tracep->chgQData(oldp+913,(((((((0U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                        & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                       & (IData)(vlSelf->top__DOT__ls_stall_n)) 
                                      | (((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                          & (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i)) 
                                         & (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                     | (IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i))
                                     ? ((1U & (IData)(
                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                       >> 4U)))
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
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
                                             : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
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
                                         : ((1U & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                           >> 3U)))
                                             ? ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
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
                                             : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay)
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
                                     : 0ULL)),64);
        tracep->chgBit(oldp+915,(((IData)(vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i) 
                                  & ((((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                       & (IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                  >> 0x20U))) 
                                      & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk))) 
                                     | ((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__uncached)) 
                                        & (((((1U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                              & (IData)(
                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                         >> 0x20U))) 
                                             & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                            & (((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                                                           >> 
                                                           (0x3fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                       >> 5U)))))) 
                                               | ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                         >> 5U)))))))) 
                                           | ((((1U 
                                                 == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState)) 
                                                & (~ (IData)(
                                                             (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                              >> 0x20U)))) 
                                               & (~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheHit))) 
                                              & (((~ (IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)) 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 
                                                             >> 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                         >> 5U)))))) 
                                                 | ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit) 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 
                                                               >> 
                                                               (0x3fU 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                                           >> 5U))))))))))))));
        tracep->chgIData(oldp+916,(((6U == (IData)(vlSelf->top__DOT__Dcache_u__DOT__cacheCurState))
                                     ? ((IData)((vlSelf->top__DOT__Dcache_u__DOT__reqLatch 
                                                 >> 3U)) 
                                        << 3U) : ((IData)(vlSelf->top__DOT__Dcache_u__DOT__randomBit)
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
                                                         << 5U)))))),32);
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
        vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    }
}
