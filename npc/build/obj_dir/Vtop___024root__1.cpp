// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__763__PROF__dff__l12(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__763__PROF__dff__l12\n"); );
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

VL_INLINE_OPT void Vtop___024root___sequent__TOP__793__PROF__IF_stage__l67(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__793__PROF__IF_stage__l67\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__if_stall_n) {
            vlSelf->top__DOT__pc_new = vlSelf->top__DOT__IF_u__DOT__pc_next_o;
        }
    } else {
        vlSelf->top__DOT__pc_new = 0x7ffffffcULL;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__872__PROF__regfile__l33(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__872__PROF__regfile__l33\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0) {
        vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[vlSelf->__Vdlyvdim0__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0] 
            = vlSelf->__Vdlyvval__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0;
    }
}

void Vtop___024root___sequent__TOP__281__PROF__divTop__l85(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__282__PROF__clint__l279(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__283__PROF__clint__l260(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__287__PROF__Icache__l286(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__289__PROF__axi_dcache__l161(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__293__PROF__Dcache__l357(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__297__PROF__Icache__l186(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__298__PROF__Icache__l185(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__308__PROF__divTop__l61(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__313__PROF__Dcache__l258(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__314__PROF__Dcache__l257(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__319__PROF__CSR__l102(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__323__PROF__Dcache__l693(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__324__PROF__Dcache__l648(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__325__PROF__clint__l250(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__326__PROF__clint__l269(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__327__PROF__clint__l228(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__328__PROF__Dcache__l568(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__329__PROF__CSR__l84(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__330__PROF__divTop__l80(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__331__PROF__clint__l269(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__332__PROF__clint__l250(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__333__PROF__Dcache__l433(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__334__PROF__Dcache__l433(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__335__PROF__Icache__l252(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__336__PROF__Icache__l277(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__337__PROF__Icache__l233(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__338__PROF__axi_dcache__l156(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__339__PROF__dff__l12(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__340__PROF__Icache__l159(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__341__PROF__Icache__l159(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__342__PROF__Dcache__l352(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__343__PROF__Dcache__l539(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__344__PROF__Dcache__l334(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__345__PROF__Dcache__l286(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__346__PROF__Icache__l183(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__347__PROF__Icache__l183(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__348__PROF__Dcache__l606(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__349__PROF__axi_dcache__l232(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__350__PROF__axi_icache__l94(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__351__PROF__divTop__l21(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__352__PROF__divTop__l69(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__353__PROF__divTop__l44(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__354__PROF__divTop__l69(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__355__PROF__divTop__l44(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__356__PROF__ALU__l80(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__357__PROF__divTop__l55(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__358__PROF__ALU__l80(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__359__PROF__CSR__l27(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__360__PROF__Dcache__l452(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__361__PROF__Dcache__l612(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__362__PROF__Dcache__l255(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__363__PROF__Dcache__l255(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__364__PROF__forwarding__l20(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__365__PROF__forwarding__l20(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__366__PROF__forwarding__l20(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__367__PROF__CSR__l116(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__368__PROF__CSR__l97(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__369__PROF__CSR__l72(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__370__PROF__CSR__l144(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__371__PROF__Dcache__l555(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__372__PROF__Dcache__l688(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__373__PROF__Dcache__l643(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__376__PROF__clint__l279(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__377__PROF__clint__l260(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__382__PROF__axi_dcache__l161(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__389__PROF__Icache__l186(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__390__PROF__Icache__l185(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__403__PROF__divTop__l61(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__409__PROF__Dcache__l258(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__410__PROF__Dcache__l257(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__417__PROF__CSR__l102(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__421__PROF__Dcache__l693(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__21__PROF__clint__l302(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__19__PROF__mul64__l96(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__428__PROF__axi_dcache__l203(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__429__PROF__Icache__l131(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__430__PROF__axi_icache__l65(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__14__PROF__divTop__l130(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__20__PROF__divTop__l141(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__433__PROF__divTop__l95(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__434__PROF__CSR__l131(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__13__PROF__Dcache__l571(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__436__PROF__Dcache__l624(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__437__PROF__Dcache__l517(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__438__PROF__Dcache__l505(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__439__PROF__Dcache__l231(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__440__PROF__Dcache__l231(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__444__PROF__divTop__l85(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__28__PROF__Icache__l194(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__29__PROF__Icache__l195(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__25__PROF__axi_crossbar__l284(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__456__PROF__dff__l12(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__99__PROF__CSR__l159(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__43__PROF__lsu__l67(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__44__PROF__lsu__l68(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__45__PROF__lsu__l69(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__46__PROF__lsu__l70(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__47__PROF__lsu__l71(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__49__PROF__CSR__l36(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__50__PROF__CSR__l37(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__51__PROF__CSR__l38(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__115__PROF__CSR__l43(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__139__PROF__CSR__l47(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__140__PROF__CSR__l48(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__141__PROF__CSR__l49(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__142__PROF__CSR__l50(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__164__PROF__CSR__l54(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__527__PROF__axi_slave_ram__l150(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__528__PROF__clint__l75(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__529__PROF__axi_slave_ram__l149(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__530__PROF__clint__l74(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__532__PROF__axi_slave_ram__l292(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__533__PROF__axi_slave_ram__l203(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__534__PROF__clint__l165(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__538__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__539__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__540__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__541__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__544__PROF__clint__l192(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__545__PROF__Dcache__l374(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__550__PROF__axi_slave_ram__l357(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__551__PROF__clint__l215(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__556__PROF__regfile__l33(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__557__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__558__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__559__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__560__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__562__PROF__axi_slave_ram__l385(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__563__PROF__regfile__l40(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__564__PROF__axi_slave_ram__l280(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__565__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__566__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__567__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__568__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__569__PROF__axi_slave_ram__l134(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__570__PROF__clint__l60(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__571__PROF__clint__l153(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__572__PROF__axi_slave_ram__l280(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__573__PROF__axi_slave_ram__l189(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__574__PROF__clint__l153(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__575__PROF__clint__l105(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__576__PROF__Icache__l301(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__577__PROF__clint__l89(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__578__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__579__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__580__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__581__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__582__PROF__clint__l180(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__583__PROF__Dcache__l372(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__584__PROF__axi_dcache__l145(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__585__PROF__axi_dcache__l145(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__586__PROF__axi_slave_ram__l345(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__587__PROF__clint__l203(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__588__PROF__axi_slave_ram__l221(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__589__PROF__regfile__l31(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__590__PROF__axi_dcache__l145(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__598__PROF__axi_slave_ram__l292(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__599__PROF__clint__l165(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__602__PROF__clint__l75(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__604__PROF__clint__l74(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__605__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__606__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__607__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__608__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__613__PROF__axi_slave_ram__l357(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__615__PROF__clint__l215(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__616__PROF__clint__l192(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__621__PROF__axi_slave_ram__l203(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__625__PROF__Dcache__l374(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__630__PROF__axi_slave_ram__l314(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__18__PROF__Icache__l205(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__17__PROF__Icache__l204(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__16__PROF__axi_dcache__l296(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__634__PROF__axi_slave_ram__l168(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__635__PROF__axi_dcache__l145(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__636__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__637__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__638__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__639__PROF__S011HD1P_X32Y2D128_BW__l22(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__642__PROF__axi_slave_ram__l150(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__644__PROF__axi_slave_ram__l149(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__647__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__649__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__651__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__653__PROF__S011HD1P_X32Y2D128_BW__l24(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__655__PROF__axi_dcache__l145(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__27__PROF__Dcache__l299(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__26__PROF__Dcache__l298(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__32__PROF__axi_crossbar__l316(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__33__PROF__axi_crossbar__l318(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__34__PROF__axi_crossbar__l322(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__35__PROF__axi_crossbar__l324(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__38__PROF__axi_crossbar__l321(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__97__PROF__axi_crossbar__l330(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__98__PROF__axi_crossbar__l409(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__669__PROF__dff__l12(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__24__PROF__axi_crossbar__l296(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__674__PROF__Dcache__l648(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__15__PROF__axi_dcache__l295(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__30__PROF__axi_crossbar__l285(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__48__PROF__lsu__l216(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__682__PROF__Icache__l291(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__683__PROF__dff__l12(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__684__PROF__Dcache__l452(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__95__PROF__axi_crossbar__l329(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__96__PROF__axi_crossbar__l408(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__100__PROF__axi_crossbar__l340(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__101__PROF__axi_crossbar__l346(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__102__PROF__axi_crossbar__l348(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__103__PROF__axi_crossbar__l339(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__104__PROF__axi_crossbar__l342(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__105__PROF__axi_crossbar__l351(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__106__PROF__axi_crossbar__l377(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__107__PROF__axi_crossbar__l398(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__108__PROF__axi_crossbar__l350(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__696__PROF__Dcache__l361(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__697__PROF__axi_dcache__l95(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__698__PROF__mulTop__l17(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__699__PROF__Icache__l286(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__705__PROF__Dcache__l357(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__710__PROF__Icache__l58(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__22__PROF__top__l297(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__23__PROF__top__l299(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__31__PROF__WB_stage__l15(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__40__PROF__L_S_stage__l113(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__715__PROF__Dcache__l203(Vtop___024root* vlSelf);
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
void Vtop___024root___sequent__TOP__726__PROF__mul64__l71(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__173__PROF__CSR__l65(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__52__PROF__top__l922(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__118__PROF__axi_crossbar__l331(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__119__PROF__clint__l128(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__41__PROF__Icache__l265(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__36__PROF__Dcache__l471(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__37__PROF__Dcache__l472(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__39__PROF__Dcache__l477(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__53__PROF__Dcache__l269(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__54__PROF__Dcache__l268(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__114__PROF__Dcache__l479(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__743__PROF__Dcache__l92(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__744__PROF__dff__l12(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__145__PROF__clint__l130(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__146__PROF__clint__l130(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__117__PROF__Dcache__l270(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__135__PROF__Dcache__l482(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__136__PROF__Dcache__l484(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__137__PROF__Dcache__l486(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__138__PROF__Dcache__l488(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__56__PROF__top__l943(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__58__PROF__axi_crossbar__l320(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__66__PROF__top__l944(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__143__PROF__Dcache__l404(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__144__PROF__Dcache__l404(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__68__PROF__Dcache__l347(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__116__PROF__Dcache__l74(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__73__PROF__Dcache__l657(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__67__PROF__mulTop__l59(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__71__PROF__top__l921(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__72__PROF__ALU__l223(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__74__PROF__forwarding__l52(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__75__PROF__forwarding__l41(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__120__PROF__Dcache__l651(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__121__PROF__Dcache__l572(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__122__PROF__EX_stage__l61(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__123__PROF__EX_stage__l44(Vtop___024root* vlSelf);
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
void Vtop___024root___settle__TOP__148__PROF__EX_stage__l80(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__149__PROF__bcu__l28(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__150__PROF__bcu__l28(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__151__PROF__EX_stage__l79(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__124__PROF__imm_ext__l13(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__165__PROF__mul64__l59(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__166__PROF__ALU__l34(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__167__PROF__ALU__l248(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__168__PROF__bcu__l29(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__169__PROF__mul64__l57(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__170__PROF__ALU__l79(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__171__PROF__ALU__l249(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__94__PROF__Icache__l56(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__174__PROF__ALU__l186(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__175__PROF__bcu__l59(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__176__PROF__ALU__l91(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__177__PROF__ALU__l112(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__178__PROF__ALU__l250(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__125__PROF__axi_crossbar__l344(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__126__PROF__axi_crossbar__l290(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__127__PROF__Icache__l333(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__128__PROF__Icache__l333(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__129__PROF__Icache__l196(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__179__PROF__pipline_ctrl__l36(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__180__PROF__pipline_ctrl__l35(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__181__PROF__IF_stage__l51(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__184__PROF__ALU__l261(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__152__PROF__axi_crossbar__l345(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__153__PROF__Icache__l366(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__154__PROF__Icache__l386(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__155__PROF__Icache__l229(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__156__PROF__IF_stage__l32(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__185__PROF__mul64__l67(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__186__PROF__Icache__l67(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__189__PROF__ALU__l269(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__190__PROF__mul64__l69(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__198__PROF__ALU__l279(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__202__PROF__ALU__l142(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__204__PROF__ALU__l171(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__205__PROF__top__l920(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__42__PROF__axi_crossbar__l327(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__109__PROF__axi_crossbar__l352(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__110__PROF__axi_crossbar__l338(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__112__PROF__axi_crossbar__l355(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__111__PROF__axi_crossbar__l354(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__113__PROF__axi_crossbar__l356(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__182__PROF__mulTop__l37(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__147__PROF__axi_dcache__l104(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__130__PROF__axi_icache__l105(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__131__PROF__axi_dcache__l243(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__132__PROF__axi_crossbar__l307(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__133__PROF__axi_crossbar__l306(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__134__PROF__axi_crossbar__l308(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__157__PROF__axi_icache__l73(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__191__PROF__Icache__l69(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__158__PROF__Dcache__l377(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__159__PROF__Dcache__l377(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__160__PROF__Dcache__l377(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__161__PROF__Dcache__l377(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__162__PROF__axi_dcache__l211(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__163__PROF__Dcache__l598(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__172__PROF__Dcache__l283(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__183__PROF__EX_stage__l116(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__187__PROF__pipline_ctrl__l29(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__188__PROF__pipline_ctrl__l32(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__192__PROF__Icache__l369(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__193__PROF__Icache__l389(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__194__PROF__top__l300(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__195__PROF__L_S_stage__l115(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__196__PROF__Dcache__l101(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__197__PROF__Dcache__l325(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__206__PROF__Dcache__l722(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__207__PROF__Dcache__l742(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__199__PROF__lsu__l88(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__200__PROF__lsu__l117(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__201__PROF__lsu__l133(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__203__PROF__WB_reg__l27(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__55__PROF__regfile__l29(Vtop___024root* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vtop___024root___sequent__TOP__281__PROF__divTop__l85(vlSelf);
        Vtop___024root___sequent__TOP__282__PROF__clint__l279(vlSelf);
        Vtop___024root___sequent__TOP__283__PROF__clint__l260(vlSelf);
        Vtop___024root___sequent__TOP__287__PROF__Icache__l286(vlSelf);
        Vtop___024root___sequent__TOP__289__PROF__axi_dcache__l161(vlSelf);
        Vtop___024root___sequent__TOP__293__PROF__Dcache__l357(vlSelf);
        Vtop___024root___sequent__TOP__297__PROF__Icache__l186(vlSelf);
        Vtop___024root___sequent__TOP__298__PROF__Icache__l185(vlSelf);
        Vtop___024root___sequent__TOP__308__PROF__divTop__l61(vlSelf);
        Vtop___024root___sequent__TOP__313__PROF__Dcache__l258(vlSelf);
        Vtop___024root___sequent__TOP__314__PROF__Dcache__l257(vlSelf);
        Vtop___024root___sequent__TOP__319__PROF__CSR__l102(vlSelf);
        Vtop___024root___sequent__TOP__323__PROF__Dcache__l693(vlSelf);
        Vtop___024root___sequent__TOP__324__PROF__Dcache__l648(vlSelf);
        Vtop___024root___sequent__TOP__325__PROF__clint__l250(vlSelf);
        Vtop___024root___sequent__TOP__326__PROF__clint__l269(vlSelf);
        Vtop___024root___sequent__TOP__327__PROF__clint__l228(vlSelf);
        Vtop___024root___sequent__TOP__328__PROF__Dcache__l568(vlSelf);
        Vtop___024root___sequent__TOP__329__PROF__CSR__l84(vlSelf);
        Vtop___024root___sequent__TOP__330__PROF__divTop__l80(vlSelf);
        Vtop___024root___sequent__TOP__331__PROF__clint__l269(vlSelf);
        Vtop___024root___sequent__TOP__332__PROF__clint__l250(vlSelf);
        Vtop___024root___sequent__TOP__333__PROF__Dcache__l433(vlSelf);
        Vtop___024root___sequent__TOP__334__PROF__Dcache__l433(vlSelf);
        Vtop___024root___sequent__TOP__335__PROF__Icache__l252(vlSelf);
        Vtop___024root___sequent__TOP__336__PROF__Icache__l277(vlSelf);
        Vtop___024root___sequent__TOP__337__PROF__Icache__l233(vlSelf);
        Vtop___024root___sequent__TOP__338__PROF__axi_dcache__l156(vlSelf);
        Vtop___024root___sequent__TOP__339__PROF__dff__l12(vlSelf);
        Vtop___024root___sequent__TOP__340__PROF__Icache__l159(vlSelf);
        Vtop___024root___sequent__TOP__341__PROF__Icache__l159(vlSelf);
        Vtop___024root___sequent__TOP__342__PROF__Dcache__l352(vlSelf);
        Vtop___024root___sequent__TOP__343__PROF__Dcache__l539(vlSelf);
        Vtop___024root___sequent__TOP__344__PROF__Dcache__l334(vlSelf);
        Vtop___024root___sequent__TOP__345__PROF__Dcache__l286(vlSelf);
        Vtop___024root___sequent__TOP__346__PROF__Icache__l183(vlSelf);
        Vtop___024root___sequent__TOP__347__PROF__Icache__l183(vlSelf);
        Vtop___024root___sequent__TOP__348__PROF__Dcache__l606(vlSelf);
        Vtop___024root___sequent__TOP__349__PROF__axi_dcache__l232(vlSelf);
        Vtop___024root___sequent__TOP__350__PROF__axi_icache__l94(vlSelf);
        Vtop___024root___sequent__TOP__351__PROF__divTop__l21(vlSelf);
        Vtop___024root___sequent__TOP__352__PROF__divTop__l69(vlSelf);
        Vtop___024root___sequent__TOP__353__PROF__divTop__l44(vlSelf);
        Vtop___024root___sequent__TOP__354__PROF__divTop__l69(vlSelf);
        Vtop___024root___sequent__TOP__355__PROF__divTop__l44(vlSelf);
        Vtop___024root___sequent__TOP__356__PROF__ALU__l80(vlSelf);
        Vtop___024root___sequent__TOP__357__PROF__divTop__l55(vlSelf);
        Vtop___024root___sequent__TOP__358__PROF__ALU__l80(vlSelf);
        Vtop___024root___sequent__TOP__359__PROF__CSR__l27(vlSelf);
        Vtop___024root___sequent__TOP__360__PROF__Dcache__l452(vlSelf);
        Vtop___024root___sequent__TOP__361__PROF__Dcache__l612(vlSelf);
        Vtop___024root___sequent__TOP__362__PROF__Dcache__l255(vlSelf);
        Vtop___024root___sequent__TOP__363__PROF__Dcache__l255(vlSelf);
        Vtop___024root___sequent__TOP__364__PROF__forwarding__l20(vlSelf);
        Vtop___024root___sequent__TOP__365__PROF__forwarding__l20(vlSelf);
        Vtop___024root___sequent__TOP__366__PROF__forwarding__l20(vlSelf);
        Vtop___024root___sequent__TOP__367__PROF__CSR__l116(vlSelf);
        Vtop___024root___sequent__TOP__368__PROF__CSR__l97(vlSelf);
        Vtop___024root___sequent__TOP__369__PROF__CSR__l72(vlSelf);
        Vtop___024root___sequent__TOP__370__PROF__CSR__l144(vlSelf);
        Vtop___024root___sequent__TOP__371__PROF__Dcache__l555(vlSelf);
        Vtop___024root___sequent__TOP__372__PROF__Dcache__l688(vlSelf);
        Vtop___024root___sequent__TOP__373__PROF__Dcache__l643(vlSelf);
        Vtop___024root___sequent__TOP__376__PROF__clint__l279(vlSelf);
        Vtop___024root___sequent__TOP__377__PROF__clint__l260(vlSelf);
        Vtop___024root___sequent__TOP__382__PROF__axi_dcache__l161(vlSelf);
        Vtop___024root___sequent__TOP__389__PROF__Icache__l186(vlSelf);
        Vtop___024root___sequent__TOP__390__PROF__Icache__l185(vlSelf);
        Vtop___024root___sequent__TOP__403__PROF__divTop__l61(vlSelf);
        Vtop___024root___sequent__TOP__409__PROF__Dcache__l258(vlSelf);
        Vtop___024root___sequent__TOP__410__PROF__Dcache__l257(vlSelf);
        Vtop___024root___sequent__TOP__417__PROF__CSR__l102(vlSelf);
        Vtop___024root___sequent__TOP__421__PROF__Dcache__l693(vlSelf);
        Vtop___024root___settle__TOP__21__PROF__clint__l302(vlSelf);
        Vtop___024root___settle__TOP__19__PROF__mul64__l96(vlSelf);
        Vtop___024root___sequent__TOP__428__PROF__axi_dcache__l203(vlSelf);
        Vtop___024root___sequent__TOP__429__PROF__Icache__l131(vlSelf);
        Vtop___024root___sequent__TOP__430__PROF__axi_icache__l65(vlSelf);
        Vtop___024root___settle__TOP__14__PROF__divTop__l130(vlSelf);
        Vtop___024root___settle__TOP__20__PROF__divTop__l141(vlSelf);
        Vtop___024root___sequent__TOP__433__PROF__divTop__l95(vlSelf);
        Vtop___024root___sequent__TOP__434__PROF__CSR__l131(vlSelf);
        Vtop___024root___settle__TOP__13__PROF__Dcache__l571(vlSelf);
        Vtop___024root___sequent__TOP__436__PROF__Dcache__l624(vlSelf);
        Vtop___024root___sequent__TOP__437__PROF__Dcache__l517(vlSelf);
        Vtop___024root___sequent__TOP__438__PROF__Dcache__l505(vlSelf);
        Vtop___024root___sequent__TOP__439__PROF__Dcache__l231(vlSelf);
        Vtop___024root___sequent__TOP__440__PROF__Dcache__l231(vlSelf);
        Vtop___024root___sequent__TOP__444__PROF__divTop__l85(vlSelf);
        Vtop___024root___settle__TOP__28__PROF__Icache__l194(vlSelf);
        Vtop___024root___settle__TOP__29__PROF__Icache__l195(vlSelf);
        Vtop___024root___settle__TOP__25__PROF__axi_crossbar__l284(vlSelf);
        Vtop___024root___sequent__TOP__456__PROF__dff__l12(vlSelf);
        Vtop___024root___settle__TOP__99__PROF__CSR__l159(vlSelf);
        Vtop___024root___settle__TOP__43__PROF__lsu__l67(vlSelf);
        Vtop___024root___settle__TOP__44__PROF__lsu__l68(vlSelf);
        Vtop___024root___settle__TOP__45__PROF__lsu__l69(vlSelf);
        Vtop___024root___settle__TOP__46__PROF__lsu__l70(vlSelf);
        Vtop___024root___settle__TOP__47__PROF__lsu__l71(vlSelf);
        Vtop___024root___settle__TOP__49__PROF__CSR__l36(vlSelf);
        Vtop___024root___settle__TOP__50__PROF__CSR__l37(vlSelf);
        Vtop___024root___settle__TOP__51__PROF__CSR__l38(vlSelf);
        Vtop___024root___settle__TOP__115__PROF__CSR__l43(vlSelf);
        Vtop___024root___settle__TOP__139__PROF__CSR__l47(vlSelf);
        Vtop___024root___settle__TOP__140__PROF__CSR__l48(vlSelf);
        Vtop___024root___settle__TOP__141__PROF__CSR__l49(vlSelf);
        Vtop___024root___settle__TOP__142__PROF__CSR__l50(vlSelf);
        Vtop___024root___settle__TOP__164__PROF__CSR__l54(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vtop___024root___sequent__TOP__527__PROF__axi_slave_ram__l150(vlSelf);
        Vtop___024root___sequent__TOP__528__PROF__clint__l75(vlSelf);
        Vtop___024root___sequent__TOP__529__PROF__axi_slave_ram__l149(vlSelf);
        Vtop___024root___sequent__TOP__530__PROF__clint__l74(vlSelf);
        Vtop___024root___sequent__TOP__532__PROF__axi_slave_ram__l292(vlSelf);
        Vtop___024root___sequent__TOP__533__PROF__axi_slave_ram__l203(vlSelf);
        Vtop___024root___sequent__TOP__534__PROF__clint__l165(vlSelf);
        Vtop___024root___sequent__TOP__538__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__539__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__540__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__541__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__544__PROF__clint__l192(vlSelf);
        Vtop___024root___sequent__TOP__545__PROF__Dcache__l374(vlSelf);
        Vtop___024root___sequent__TOP__550__PROF__axi_slave_ram__l357(vlSelf);
        Vtop___024root___sequent__TOP__551__PROF__clint__l215(vlSelf);
        Vtop___024root___sequent__TOP__556__PROF__regfile__l33(vlSelf);
        Vtop___024root___sequent__TOP__557__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__558__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__559__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__560__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__562__PROF__axi_slave_ram__l385(vlSelf);
        Vtop___024root___sequent__TOP__563__PROF__regfile__l40(vlSelf);
        Vtop___024root___sequent__TOP__564__PROF__axi_slave_ram__l280(vlSelf);
        Vtop___024root___sequent__TOP__565__PROF__S011HD1P_X32Y2D128_BW__l22(vlSelf);
        Vtop___024root___sequent__TOP__566__PROF__S011HD1P_X32Y2D128_BW__l22(vlSelf);
        Vtop___024root___sequent__TOP__567__PROF__S011HD1P_X32Y2D128_BW__l22(vlSelf);
        Vtop___024root___sequent__TOP__568__PROF__S011HD1P_X32Y2D128_BW__l22(vlSelf);
        Vtop___024root___sequent__TOP__569__PROF__axi_slave_ram__l134(vlSelf);
        Vtop___024root___sequent__TOP__570__PROF__clint__l60(vlSelf);
        Vtop___024root___sequent__TOP__571__PROF__clint__l153(vlSelf);
        Vtop___024root___sequent__TOP__572__PROF__axi_slave_ram__l280(vlSelf);
        Vtop___024root___sequent__TOP__573__PROF__axi_slave_ram__l189(vlSelf);
        Vtop___024root___sequent__TOP__574__PROF__clint__l153(vlSelf);
        Vtop___024root___sequent__TOP__575__PROF__clint__l105(vlSelf);
        Vtop___024root___sequent__TOP__576__PROF__Icache__l301(vlSelf);
        Vtop___024root___sequent__TOP__577__PROF__clint__l89(vlSelf);
        Vtop___024root___sequent__TOP__578__PROF__S011HD1P_X32Y2D128_BW__l22(vlSelf);
        Vtop___024root___sequent__TOP__579__PROF__S011HD1P_X32Y2D128_BW__l22(vlSelf);
        Vtop___024root___sequent__TOP__580__PROF__S011HD1P_X32Y2D128_BW__l22(vlSelf);
        Vtop___024root___sequent__TOP__581__PROF__S011HD1P_X32Y2D128_BW__l22(vlSelf);
        Vtop___024root___sequent__TOP__582__PROF__clint__l180(vlSelf);
        Vtop___024root___sequent__TOP__583__PROF__Dcache__l372(vlSelf);
        Vtop___024root___sequent__TOP__584__PROF__axi_dcache__l145(vlSelf);
        Vtop___024root___sequent__TOP__585__PROF__axi_dcache__l145(vlSelf);
        Vtop___024root___sequent__TOP__586__PROF__axi_slave_ram__l345(vlSelf);
        Vtop___024root___sequent__TOP__587__PROF__clint__l203(vlSelf);
        Vtop___024root___sequent__TOP__588__PROF__axi_slave_ram__l221(vlSelf);
        Vtop___024root___sequent__TOP__589__PROF__regfile__l31(vlSelf);
        Vtop___024root___sequent__TOP__590__PROF__axi_dcache__l145(vlSelf);
        Vtop___024root___sequent__TOP__598__PROF__axi_slave_ram__l292(vlSelf);
        Vtop___024root___sequent__TOP__599__PROF__clint__l165(vlSelf);
        Vtop___024root___sequent__TOP__602__PROF__clint__l75(vlSelf);
        Vtop___024root___sequent__TOP__604__PROF__clint__l74(vlSelf);
        Vtop___024root___sequent__TOP__605__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__606__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__607__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__608__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__613__PROF__axi_slave_ram__l357(vlSelf);
        Vtop___024root___sequent__TOP__615__PROF__clint__l215(vlSelf);
        Vtop___024root___sequent__TOP__616__PROF__clint__l192(vlSelf);
        Vtop___024root___sequent__TOP__621__PROF__axi_slave_ram__l203(vlSelf);
        Vtop___024root___sequent__TOP__625__PROF__Dcache__l374(vlSelf);
        Vtop___024root___sequent__TOP__630__PROF__axi_slave_ram__l314(vlSelf);
        Vtop___024root___settle__TOP__18__PROF__Icache__l205(vlSelf);
        Vtop___024root___settle__TOP__17__PROF__Icache__l204(vlSelf);
        Vtop___024root___settle__TOP__16__PROF__axi_dcache__l296(vlSelf);
        Vtop___024root___sequent__TOP__634__PROF__axi_slave_ram__l168(vlSelf);
        Vtop___024root___sequent__TOP__635__PROF__axi_dcache__l145(vlSelf);
        Vtop___024root___sequent__TOP__636__PROF__S011HD1P_X32Y2D128_BW__l22(vlSelf);
        Vtop___024root___sequent__TOP__637__PROF__S011HD1P_X32Y2D128_BW__l22(vlSelf);
        Vtop___024root___sequent__TOP__638__PROF__S011HD1P_X32Y2D128_BW__l22(vlSelf);
        Vtop___024root___sequent__TOP__639__PROF__S011HD1P_X32Y2D128_BW__l22(vlSelf);
        Vtop___024root___sequent__TOP__642__PROF__axi_slave_ram__l150(vlSelf);
        Vtop___024root___sequent__TOP__644__PROF__axi_slave_ram__l149(vlSelf);
        Vtop___024root___sequent__TOP__647__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__649__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__651__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__653__PROF__S011HD1P_X32Y2D128_BW__l24(vlSelf);
        Vtop___024root___sequent__TOP__655__PROF__axi_dcache__l145(vlSelf);
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
        Vtop___024root___sequent__TOP__669__PROF__dff__l12(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vtop___024root___settle__TOP__24__PROF__axi_crossbar__l296(vlSelf);
        Vtop___024root___sequent__TOP__674__PROF__Dcache__l648(vlSelf);
        Vtop___024root___settle__TOP__15__PROF__axi_dcache__l295(vlSelf);
        Vtop___024root___settle__TOP__30__PROF__axi_crossbar__l285(vlSelf);
        Vtop___024root___settle__TOP__48__PROF__lsu__l216(vlSelf);
        Vtop___024root___sequent__TOP__682__PROF__Icache__l291(vlSelf);
        Vtop___024root___sequent__TOP__683__PROF__dff__l12(vlSelf);
        Vtop___024root___sequent__TOP__684__PROF__Dcache__l452(vlSelf);
        Vtop___024root___settle__TOP__95__PROF__axi_crossbar__l329(vlSelf);
        Vtop___024root___settle__TOP__96__PROF__axi_crossbar__l408(vlSelf);
        Vtop___024root___settle__TOP__100__PROF__axi_crossbar__l340(vlSelf);
        Vtop___024root___settle__TOP__101__PROF__axi_crossbar__l346(vlSelf);
        Vtop___024root___settle__TOP__102__PROF__axi_crossbar__l348(vlSelf);
        Vtop___024root___settle__TOP__103__PROF__axi_crossbar__l339(vlSelf);
        Vtop___024root___settle__TOP__104__PROF__axi_crossbar__l342(vlSelf);
        Vtop___024root___settle__TOP__105__PROF__axi_crossbar__l351(vlSelf);
        Vtop___024root___settle__TOP__106__PROF__axi_crossbar__l377(vlSelf);
        Vtop___024root___settle__TOP__107__PROF__axi_crossbar__l398(vlSelf);
        Vtop___024root___settle__TOP__108__PROF__axi_crossbar__l350(vlSelf);
        Vtop___024root___sequent__TOP__696__PROF__Dcache__l361(vlSelf);
        Vtop___024root___sequent__TOP__697__PROF__axi_dcache__l95(vlSelf);
        Vtop___024root___sequent__TOP__698__PROF__mulTop__l17(vlSelf);
        Vtop___024root___sequent__TOP__699__PROF__Icache__l286(vlSelf);
        Vtop___024root___sequent__TOP__705__PROF__Dcache__l357(vlSelf);
        Vtop___024root___sequent__TOP__710__PROF__Icache__l58(vlSelf);
        Vtop___024root___settle__TOP__22__PROF__top__l297(vlSelf);
        Vtop___024root___settle__TOP__23__PROF__top__l299(vlSelf);
        Vtop___024root___settle__TOP__31__PROF__WB_stage__l15(vlSelf);
        Vtop___024root___settle__TOP__40__PROF__L_S_stage__l113(vlSelf);
        Vtop___024root___sequent__TOP__715__PROF__Dcache__l203(vlSelf);
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
        Vtop___024root___sequent__TOP__726__PROF__mul64__l71(vlSelf);
        Vtop___024root___settle__TOP__173__PROF__CSR__l65(vlSelf);
        Vtop___024root___settle__TOP__52__PROF__top__l922(vlSelf);
        Vtop___024root___settle__TOP__118__PROF__axi_crossbar__l331(vlSelf);
        Vtop___024root___settle__TOP__119__PROF__clint__l128(vlSelf);
        Vtop___024root___settle__TOP__41__PROF__Icache__l265(vlSelf);
        Vtop___024root___settle__TOP__36__PROF__Dcache__l471(vlSelf);
        Vtop___024root___settle__TOP__37__PROF__Dcache__l472(vlSelf);
        Vtop___024root___settle__TOP__39__PROF__Dcache__l477(vlSelf);
        Vtop___024root___settle__TOP__53__PROF__Dcache__l269(vlSelf);
        Vtop___024root___settle__TOP__54__PROF__Dcache__l268(vlSelf);
        Vtop___024root___settle__TOP__114__PROF__Dcache__l479(vlSelf);
        Vtop___024root___sequent__TOP__743__PROF__Dcache__l92(vlSelf);
        Vtop___024root___sequent__TOP__744__PROF__dff__l12(vlSelf);
        Vtop___024root___settle__TOP__145__PROF__clint__l130(vlSelf);
        Vtop___024root___settle__TOP__146__PROF__clint__l130(vlSelf);
        Vtop___024root___settle__TOP__117__PROF__Dcache__l270(vlSelf);
        Vtop___024root___settle__TOP__135__PROF__Dcache__l482(vlSelf);
        Vtop___024root___settle__TOP__136__PROF__Dcache__l484(vlSelf);
        Vtop___024root___settle__TOP__137__PROF__Dcache__l486(vlSelf);
        Vtop___024root___settle__TOP__138__PROF__Dcache__l488(vlSelf);
        Vtop___024root___settle__TOP__56__PROF__top__l943(vlSelf);
        Vtop___024root___settle__TOP__58__PROF__axi_crossbar__l320(vlSelf);
        Vtop___024root___settle__TOP__66__PROF__top__l944(vlSelf);
        Vtop___024root___settle__TOP__143__PROF__Dcache__l404(vlSelf);
        Vtop___024root___settle__TOP__144__PROF__Dcache__l404(vlSelf);
        Vtop___024root___settle__TOP__68__PROF__Dcache__l347(vlSelf);
        Vtop___024root___settle__TOP__116__PROF__Dcache__l74(vlSelf);
        Vtop___024root___settle__TOP__73__PROF__Dcache__l657(vlSelf);
        Vtop___024root___sequent__TOP__763__PROF__dff__l12(vlSelf);
        Vtop___024root___settle__TOP__67__PROF__mulTop__l59(vlSelf);
        Vtop___024root___settle__TOP__71__PROF__top__l921(vlSelf);
        Vtop___024root___settle__TOP__72__PROF__ALU__l223(vlSelf);
        Vtop___024root___settle__TOP__74__PROF__forwarding__l52(vlSelf);
        Vtop___024root___settle__TOP__75__PROF__forwarding__l41(vlSelf);
        Vtop___024root___settle__TOP__120__PROF__Dcache__l651(vlSelf);
        Vtop___024root___settle__TOP__121__PROF__Dcache__l572(vlSelf);
        Vtop___024root___settle__TOP__122__PROF__EX_stage__l61(vlSelf);
        Vtop___024root___settle__TOP__123__PROF__EX_stage__l44(vlSelf);
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
        Vtop___024root___sequent__TOP__793__PROF__IF_stage__l67(vlSelf);
        Vtop___024root___settle__TOP__148__PROF__EX_stage__l80(vlSelf);
        Vtop___024root___settle__TOP__149__PROF__bcu__l28(vlSelf);
        Vtop___024root___settle__TOP__150__PROF__bcu__l28(vlSelf);
        Vtop___024root___settle__TOP__151__PROF__EX_stage__l79(vlSelf);
        Vtop___024root___settle__TOP__124__PROF__imm_ext__l13(vlSelf);
        Vtop___024root___settle__TOP__165__PROF__mul64__l59(vlSelf);
        Vtop___024root___settle__TOP__166__PROF__ALU__l34(vlSelf);
        Vtop___024root___settle__TOP__167__PROF__ALU__l248(vlSelf);
        Vtop___024root___settle__TOP__168__PROF__bcu__l29(vlSelf);
        Vtop___024root___settle__TOP__169__PROF__mul64__l57(vlSelf);
        Vtop___024root___settle__TOP__170__PROF__ALU__l79(vlSelf);
        Vtop___024root___settle__TOP__171__PROF__ALU__l249(vlSelf);
        Vtop___024root___settle__TOP__94__PROF__Icache__l56(vlSelf);
        Vtop___024root___settle__TOP__174__PROF__ALU__l186(vlSelf);
        Vtop___024root___settle__TOP__175__PROF__bcu__l59(vlSelf);
        Vtop___024root___settle__TOP__176__PROF__ALU__l91(vlSelf);
        Vtop___024root___settle__TOP__177__PROF__ALU__l112(vlSelf);
        Vtop___024root___settle__TOP__178__PROF__ALU__l250(vlSelf);
        Vtop___024root___settle__TOP__125__PROF__axi_crossbar__l344(vlSelf);
        Vtop___024root___settle__TOP__126__PROF__axi_crossbar__l290(vlSelf);
        Vtop___024root___settle__TOP__127__PROF__Icache__l333(vlSelf);
        Vtop___024root___settle__TOP__128__PROF__Icache__l333(vlSelf);
        Vtop___024root___settle__TOP__129__PROF__Icache__l196(vlSelf);
        Vtop___024root___settle__TOP__179__PROF__pipline_ctrl__l36(vlSelf);
        Vtop___024root___settle__TOP__180__PROF__pipline_ctrl__l35(vlSelf);
        Vtop___024root___settle__TOP__181__PROF__IF_stage__l51(vlSelf);
        Vtop___024root___settle__TOP__184__PROF__ALU__l261(vlSelf);
        Vtop___024root___settle__TOP__152__PROF__axi_crossbar__l345(vlSelf);
        Vtop___024root___settle__TOP__153__PROF__Icache__l366(vlSelf);
        Vtop___024root___settle__TOP__154__PROF__Icache__l386(vlSelf);
        Vtop___024root___settle__TOP__155__PROF__Icache__l229(vlSelf);
        Vtop___024root___settle__TOP__156__PROF__IF_stage__l32(vlSelf);
        Vtop___024root___settle__TOP__185__PROF__mul64__l67(vlSelf);
        Vtop___024root___settle__TOP__186__PROF__Icache__l67(vlSelf);
        Vtop___024root___settle__TOP__189__PROF__ALU__l269(vlSelf);
        Vtop___024root___settle__TOP__190__PROF__mul64__l69(vlSelf);
        Vtop___024root___settle__TOP__198__PROF__ALU__l279(vlSelf);
        Vtop___024root___settle__TOP__202__PROF__ALU__l142(vlSelf);
        Vtop___024root___settle__TOP__204__PROF__ALU__l171(vlSelf);
        Vtop___024root___settle__TOP__205__PROF__top__l920(vlSelf);
    }
    Vtop___024root___settle__TOP__42__PROF__axi_crossbar__l327(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    Vtop___024root___settle__TOP__109__PROF__axi_crossbar__l352(vlSelf);
    Vtop___024root___settle__TOP__110__PROF__axi_crossbar__l338(vlSelf);
    Vtop___024root___settle__TOP__112__PROF__axi_crossbar__l355(vlSelf);
    Vtop___024root___settle__TOP__111__PROF__axi_crossbar__l354(vlSelf);
    Vtop___024root___settle__TOP__113__PROF__axi_crossbar__l356(vlSelf);
    Vtop___024root___settle__TOP__182__PROF__mulTop__l37(vlSelf);
    Vtop___024root___settle__TOP__147__PROF__axi_dcache__l104(vlSelf);
    Vtop___024root___settle__TOP__130__PROF__axi_icache__l105(vlSelf);
    Vtop___024root___settle__TOP__131__PROF__axi_dcache__l243(vlSelf);
    Vtop___024root___settle__TOP__132__PROF__axi_crossbar__l307(vlSelf);
    Vtop___024root___settle__TOP__133__PROF__axi_crossbar__l306(vlSelf);
    Vtop___024root___settle__TOP__134__PROF__axi_crossbar__l308(vlSelf);
    Vtop___024root___settle__TOP__157__PROF__axi_icache__l73(vlSelf);
    Vtop___024root___settle__TOP__191__PROF__Icache__l69(vlSelf);
    Vtop___024root___settle__TOP__158__PROF__Dcache__l377(vlSelf);
    Vtop___024root___settle__TOP__159__PROF__Dcache__l377(vlSelf);
    Vtop___024root___settle__TOP__160__PROF__Dcache__l377(vlSelf);
    Vtop___024root___settle__TOP__161__PROF__Dcache__l377(vlSelf);
    Vtop___024root___settle__TOP__162__PROF__axi_dcache__l211(vlSelf);
    Vtop___024root___settle__TOP__163__PROF__Dcache__l598(vlSelf);
    Vtop___024root___settle__TOP__172__PROF__Dcache__l283(vlSelf);
    Vtop___024root___settle__TOP__183__PROF__EX_stage__l116(vlSelf);
    Vtop___024root___settle__TOP__187__PROF__pipline_ctrl__l29(vlSelf);
    Vtop___024root___settle__TOP__188__PROF__pipline_ctrl__l32(vlSelf);
    Vtop___024root___settle__TOP__192__PROF__Icache__l369(vlSelf);
    Vtop___024root___settle__TOP__193__PROF__Icache__l389(vlSelf);
    Vtop___024root___settle__TOP__194__PROF__top__l300(vlSelf);
    Vtop___024root___settle__TOP__195__PROF__L_S_stage__l115(vlSelf);
    Vtop___024root___settle__TOP__196__PROF__Dcache__l101(vlSelf);
    Vtop___024root___settle__TOP__197__PROF__Dcache__l325(vlSelf);
    Vtop___024root___settle__TOP__206__PROF__Dcache__l722(vlSelf);
    Vtop___024root___settle__TOP__207__PROF__Dcache__l742(vlSelf);
    Vtop___024root___settle__TOP__199__PROF__lsu__l88(vlSelf);
    Vtop___024root___settle__TOP__200__PROF__lsu__l117(vlSelf);
    Vtop___024root___settle__TOP__201__PROF__lsu__l133(vlSelf);
    Vtop___024root___settle__TOP__203__PROF__WB_reg__l27(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__872__PROF__regfile__l33(vlSelf);
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
