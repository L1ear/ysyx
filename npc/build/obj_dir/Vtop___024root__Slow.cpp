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

void Vtop___024root___initial__TOP__1__PROF__axi_crossbar__l343(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1__PROF__axi_crossbar__l343\n"); );
    // Body
    vlSelf->axi_ar_user_o = 0U;
}

void Vtop___024root___initial__TOP__2__PROF__axi_dcache__l294(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__2__PROF__axi_dcache__l294\n"); );
    // Body
    vlSelf->top__DOT__ls_axi_w_strb_o = 0xffU;
}

void Vtop___024root____Vdpiimwrap_top__DOT__ID_u__DOT__regfile_u__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vtop___024root___initial__TOP__3__PROF__regfile__l24(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__3__PROF__regfile__l24\n"); );
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__ID_u__DOT__regfile_u__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles);
}

void Vtop___024root___settle__TOP__4__PROF__axi_crossbar__l317(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__4__PROF__axi_crossbar__l317\n"); );
    // Body
    vlSelf->axi_aw_prot_o = 0U;
}

void Vtop___024root___settle__TOP__5__PROF__axi_crossbar__l319(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__5__PROF__axi_crossbar__l319\n"); );
    // Body
    vlSelf->axi_aw_user_o = 0U;
}

void Vtop___024root___settle__TOP__6__PROF__axi_crossbar__l323(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__6__PROF__axi_crossbar__l323\n"); );
    // Body
    vlSelf->axi_aw_lock_o = 0U;
}

void Vtop___024root___settle__TOP__7__PROF__axi_crossbar__l325(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__7__PROF__axi_crossbar__l325\n"); );
    // Body
    vlSelf->axi_aw_qos_o = 0U;
}

void Vtop___024root___settle__TOP__8__PROF__axi_crossbar__l326(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__8__PROF__axi_crossbar__l326\n"); );
    // Body
    vlSelf->axi_aw_region_o = 0U;
}

void Vtop___024root___settle__TOP__9__PROF__axi_crossbar__l332(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__9__PROF__axi_crossbar__l332\n"); );
    // Body
    vlSelf->axi_w_user_o = 0U;
}

void Vtop___024root___settle__TOP__10__PROF__axi_crossbar__l341(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__10__PROF__axi_crossbar__l341\n"); );
    // Body
    vlSelf->axi_ar_prot_o = 0U;
}

void Vtop___024root___settle__TOP__11__PROF__axi_crossbar__l347(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__11__PROF__axi_crossbar__l347\n"); );
    // Body
    vlSelf->axi_ar_lock_o = 0U;
}

void Vtop___024root___settle__TOP__12__PROF__axi_crossbar__l349(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__12__PROF__axi_crossbar__l349\n"); );
    // Body
    vlSelf->axi_ar_qos_o = 0U;
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1__PROF__axi_crossbar__l343(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtop___024root___initial__TOP__2__PROF__axi_dcache__l294(vlSelf);
    Vtop___024root___initial__TOP__3__PROF__regfile__l24(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n 
        = vlSelf->__VinpClk__TOP__top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n;
}

void Vtop___024root___settle__TOP__13__PROF__Dcache__l571(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__14__PROF__divTop__l130(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__15__PROF__axi_dcache__l295(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__16__PROF__axi_dcache__l296(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__17__PROF__Icache__l204(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__18__PROF__Icache__l205(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__19__PROF__mul64__l96(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__20__PROF__divTop__l141(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__21__PROF__clint__l302(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__22__PROF__top__l297(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__23__PROF__top__l299(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__24__PROF__axi_crossbar__l296(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__25__PROF__axi_crossbar__l284(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__26__PROF__Dcache__l298(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__27__PROF__Dcache__l299(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__28__PROF__Icache__l194(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__29__PROF__Icache__l195(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__30__PROF__axi_crossbar__l285(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__31__PROF__WB_stage__l15(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__32__PROF__axi_crossbar__l316(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__33__PROF__axi_crossbar__l318(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__34__PROF__axi_crossbar__l322(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__35__PROF__axi_crossbar__l324(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__36__PROF__Dcache__l471(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__37__PROF__Dcache__l472(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__38__PROF__axi_crossbar__l321(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__39__PROF__Dcache__l477(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__40__PROF__L_S_stage__l113(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__41__PROF__Icache__l265(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__42__PROF__axi_crossbar__l327(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__43__PROF__lsu__l67(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__44__PROF__lsu__l68(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__45__PROF__lsu__l69(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__46__PROF__lsu__l70(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__47__PROF__lsu__l71(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__48__PROF__lsu__l216(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__49__PROF__CSR__l36(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__50__PROF__CSR__l37(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__51__PROF__CSR__l38(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__52__PROF__top__l922(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__53__PROF__Dcache__l269(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__54__PROF__Dcache__l268(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__55__PROF__regfile__l29(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__56__PROF__top__l943(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__57__PROF__axi_crossbar__l315(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__58__PROF__axi_crossbar__l320(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__59__PROF__axi_crossbar__l328(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__60__PROF__axi_crossbar__l333(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__61__PROF__axi_crossbar__l359(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__62__PROF__axi_crossbar__l371(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__63__PROF__axi_crossbar__l376(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__64__PROF__axi_crossbar__l406(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__65__PROF__axi_crossbar__l413(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__66__PROF__top__l944(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__67__PROF__mulTop__l59(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__68__PROF__Dcache__l347(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__69__PROF__axi_dcache__l171(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__70__PROF__axi_crossbar__l410(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__71__PROF__top__l921(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__72__PROF__ALU__l223(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__73__PROF__Dcache__l657(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__74__PROF__forwarding__l52(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__75__PROF__forwarding__l41(Vtop___024root* vlSelf);
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
void Vtop___024root___settle__TOP__94__PROF__Icache__l56(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__95__PROF__axi_crossbar__l329(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__96__PROF__axi_crossbar__l408(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__97__PROF__axi_crossbar__l330(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__98__PROF__axi_crossbar__l409(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__99__PROF__CSR__l159(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__100__PROF__axi_crossbar__l340(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__101__PROF__axi_crossbar__l346(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__102__PROF__axi_crossbar__l348(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__103__PROF__axi_crossbar__l339(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__104__PROF__axi_crossbar__l342(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__105__PROF__axi_crossbar__l351(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__106__PROF__axi_crossbar__l377(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__107__PROF__axi_crossbar__l398(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__108__PROF__axi_crossbar__l350(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__109__PROF__axi_crossbar__l352(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__110__PROF__axi_crossbar__l338(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__111__PROF__axi_crossbar__l354(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__112__PROF__axi_crossbar__l355(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__113__PROF__axi_crossbar__l356(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__114__PROF__Dcache__l479(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__115__PROF__CSR__l43(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__116__PROF__Dcache__l74(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__117__PROF__Dcache__l270(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__118__PROF__axi_crossbar__l331(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__119__PROF__clint__l128(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__120__PROF__Dcache__l651(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__121__PROF__Dcache__l572(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__122__PROF__EX_stage__l61(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__123__PROF__EX_stage__l44(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__124__PROF__imm_ext__l13(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__125__PROF__axi_crossbar__l344(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__126__PROF__axi_crossbar__l290(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__127__PROF__Icache__l333(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__128__PROF__Icache__l333(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__129__PROF__Icache__l196(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__130__PROF__axi_icache__l105(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__131__PROF__axi_dcache__l243(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__132__PROF__axi_crossbar__l307(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__133__PROF__axi_crossbar__l306(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__134__PROF__axi_crossbar__l308(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__135__PROF__Dcache__l482(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__136__PROF__Dcache__l484(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__137__PROF__Dcache__l486(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__138__PROF__Dcache__l488(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__139__PROF__CSR__l47(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__140__PROF__CSR__l48(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__141__PROF__CSR__l49(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__142__PROF__CSR__l50(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__143__PROF__Dcache__l404(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__144__PROF__Dcache__l404(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__145__PROF__clint__l130(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__146__PROF__clint__l130(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__147__PROF__axi_dcache__l104(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__148__PROF__EX_stage__l80(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__149__PROF__bcu__l28(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__150__PROF__bcu__l28(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__151__PROF__EX_stage__l79(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__152__PROF__axi_crossbar__l345(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__153__PROF__Icache__l366(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__154__PROF__Icache__l386(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__155__PROF__Icache__l229(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__156__PROF__IF_stage__l32(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__157__PROF__axi_icache__l73(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__158__PROF__Dcache__l377(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__159__PROF__Dcache__l377(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__160__PROF__Dcache__l377(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__161__PROF__Dcache__l377(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__162__PROF__axi_dcache__l211(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__163__PROF__Dcache__l598(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__164__PROF__CSR__l54(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__165__PROF__mul64__l59(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__166__PROF__ALU__l34(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__167__PROF__ALU__l248(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__168__PROF__bcu__l29(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__169__PROF__mul64__l57(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__170__PROF__ALU__l79(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__171__PROF__ALU__l249(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__172__PROF__Dcache__l283(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__173__PROF__CSR__l65(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__174__PROF__ALU__l186(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__175__PROF__bcu__l59(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__176__PROF__ALU__l91(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__177__PROF__ALU__l112(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__178__PROF__ALU__l250(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__179__PROF__pipline_ctrl__l36(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__180__PROF__pipline_ctrl__l35(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__181__PROF__IF_stage__l51(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__182__PROF__mulTop__l37(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__183__PROF__EX_stage__l116(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__184__PROF__ALU__l261(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__185__PROF__mul64__l67(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__186__PROF__Icache__l67(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__187__PROF__pipline_ctrl__l29(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__188__PROF__pipline_ctrl__l32(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__189__PROF__ALU__l269(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__190__PROF__mul64__l69(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__191__PROF__Icache__l69(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__192__PROF__Icache__l369(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__193__PROF__Icache__l389(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__194__PROF__top__l300(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__195__PROF__L_S_stage__l115(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__196__PROF__Dcache__l101(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__197__PROF__Dcache__l325(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__198__PROF__ALU__l279(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__199__PROF__lsu__l88(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__200__PROF__lsu__l117(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__201__PROF__lsu__l133(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__202__PROF__ALU__l142(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__203__PROF__WB_reg__l27(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__204__PROF__ALU__l171(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__205__PROF__top__l920(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__206__PROF__Dcache__l722(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__207__PROF__Dcache__l742(Vtop___024root* vlSelf);

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__4__PROF__axi_crossbar__l317(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtop___024root___settle__TOP__5__PROF__axi_crossbar__l319(vlSelf);
    Vtop___024root___settle__TOP__6__PROF__axi_crossbar__l323(vlSelf);
    Vtop___024root___settle__TOP__7__PROF__axi_crossbar__l325(vlSelf);
    Vtop___024root___settle__TOP__8__PROF__axi_crossbar__l326(vlSelf);
    Vtop___024root___settle__TOP__9__PROF__axi_crossbar__l332(vlSelf);
    Vtop___024root___settle__TOP__10__PROF__axi_crossbar__l341(vlSelf);
    Vtop___024root___settle__TOP__11__PROF__axi_crossbar__l347(vlSelf);
    Vtop___024root___settle__TOP__12__PROF__axi_crossbar__l349(vlSelf);
    Vtop___024root___settle__TOP__13__PROF__Dcache__l571(vlSelf);
    Vtop___024root___settle__TOP__14__PROF__divTop__l130(vlSelf);
    Vtop___024root___settle__TOP__15__PROF__axi_dcache__l295(vlSelf);
    Vtop___024root___settle__TOP__16__PROF__axi_dcache__l296(vlSelf);
    Vtop___024root___settle__TOP__17__PROF__Icache__l204(vlSelf);
    Vtop___024root___settle__TOP__18__PROF__Icache__l205(vlSelf);
    Vtop___024root___settle__TOP__19__PROF__mul64__l96(vlSelf);
    Vtop___024root___settle__TOP__20__PROF__divTop__l141(vlSelf);
    Vtop___024root___settle__TOP__21__PROF__clint__l302(vlSelf);
    Vtop___024root___settle__TOP__22__PROF__top__l297(vlSelf);
    Vtop___024root___settle__TOP__23__PROF__top__l299(vlSelf);
    Vtop___024root___settle__TOP__24__PROF__axi_crossbar__l296(vlSelf);
    Vtop___024root___settle__TOP__25__PROF__axi_crossbar__l284(vlSelf);
    Vtop___024root___settle__TOP__26__PROF__Dcache__l298(vlSelf);
    Vtop___024root___settle__TOP__27__PROF__Dcache__l299(vlSelf);
    Vtop___024root___settle__TOP__28__PROF__Icache__l194(vlSelf);
    Vtop___024root___settle__TOP__29__PROF__Icache__l195(vlSelf);
    Vtop___024root___settle__TOP__30__PROF__axi_crossbar__l285(vlSelf);
    Vtop___024root___settle__TOP__31__PROF__WB_stage__l15(vlSelf);
    Vtop___024root___settle__TOP__32__PROF__axi_crossbar__l316(vlSelf);
    Vtop___024root___settle__TOP__33__PROF__axi_crossbar__l318(vlSelf);
    Vtop___024root___settle__TOP__34__PROF__axi_crossbar__l322(vlSelf);
    Vtop___024root___settle__TOP__35__PROF__axi_crossbar__l324(vlSelf);
    Vtop___024root___settle__TOP__36__PROF__Dcache__l471(vlSelf);
    Vtop___024root___settle__TOP__37__PROF__Dcache__l472(vlSelf);
    Vtop___024root___settle__TOP__38__PROF__axi_crossbar__l321(vlSelf);
    Vtop___024root___settle__TOP__39__PROF__Dcache__l477(vlSelf);
    Vtop___024root___settle__TOP__40__PROF__L_S_stage__l113(vlSelf);
    Vtop___024root___settle__TOP__41__PROF__Icache__l265(vlSelf);
    Vtop___024root___settle__TOP__42__PROF__axi_crossbar__l327(vlSelf);
    Vtop___024root___settle__TOP__43__PROF__lsu__l67(vlSelf);
    Vtop___024root___settle__TOP__44__PROF__lsu__l68(vlSelf);
    Vtop___024root___settle__TOP__45__PROF__lsu__l69(vlSelf);
    Vtop___024root___settle__TOP__46__PROF__lsu__l70(vlSelf);
    Vtop___024root___settle__TOP__47__PROF__lsu__l71(vlSelf);
    Vtop___024root___settle__TOP__48__PROF__lsu__l216(vlSelf);
    Vtop___024root___settle__TOP__49__PROF__CSR__l36(vlSelf);
    Vtop___024root___settle__TOP__50__PROF__CSR__l37(vlSelf);
    Vtop___024root___settle__TOP__51__PROF__CSR__l38(vlSelf);
    Vtop___024root___settle__TOP__52__PROF__top__l922(vlSelf);
    Vtop___024root___settle__TOP__53__PROF__Dcache__l269(vlSelf);
    Vtop___024root___settle__TOP__54__PROF__Dcache__l268(vlSelf);
    Vtop___024root___settle__TOP__55__PROF__regfile__l29(vlSelf);
    Vtop___024root___settle__TOP__56__PROF__top__l943(vlSelf);
    Vtop___024root___settle__TOP__57__PROF__axi_crossbar__l315(vlSelf);
    Vtop___024root___settle__TOP__58__PROF__axi_crossbar__l320(vlSelf);
    Vtop___024root___settle__TOP__59__PROF__axi_crossbar__l328(vlSelf);
    Vtop___024root___settle__TOP__60__PROF__axi_crossbar__l333(vlSelf);
    Vtop___024root___settle__TOP__61__PROF__axi_crossbar__l359(vlSelf);
    Vtop___024root___settle__TOP__62__PROF__axi_crossbar__l371(vlSelf);
    Vtop___024root___settle__TOP__63__PROF__axi_crossbar__l376(vlSelf);
    Vtop___024root___settle__TOP__64__PROF__axi_crossbar__l406(vlSelf);
    Vtop___024root___settle__TOP__65__PROF__axi_crossbar__l413(vlSelf);
    Vtop___024root___settle__TOP__66__PROF__top__l944(vlSelf);
    Vtop___024root___settle__TOP__67__PROF__mulTop__l59(vlSelf);
    Vtop___024root___settle__TOP__68__PROF__Dcache__l347(vlSelf);
    Vtop___024root___settle__TOP__69__PROF__axi_dcache__l171(vlSelf);
    Vtop___024root___settle__TOP__70__PROF__axi_crossbar__l410(vlSelf);
    Vtop___024root___settle__TOP__71__PROF__top__l921(vlSelf);
    Vtop___024root___settle__TOP__72__PROF__ALU__l223(vlSelf);
    Vtop___024root___settle__TOP__73__PROF__Dcache__l657(vlSelf);
    Vtop___024root___settle__TOP__74__PROF__forwarding__l52(vlSelf);
    Vtop___024root___settle__TOP__75__PROF__forwarding__l41(vlSelf);
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
    Vtop___024root___settle__TOP__94__PROF__Icache__l56(vlSelf);
    Vtop___024root___settle__TOP__95__PROF__axi_crossbar__l329(vlSelf);
    Vtop___024root___settle__TOP__96__PROF__axi_crossbar__l408(vlSelf);
    Vtop___024root___settle__TOP__97__PROF__axi_crossbar__l330(vlSelf);
    Vtop___024root___settle__TOP__98__PROF__axi_crossbar__l409(vlSelf);
    Vtop___024root___settle__TOP__99__PROF__CSR__l159(vlSelf);
    Vtop___024root___settle__TOP__100__PROF__axi_crossbar__l340(vlSelf);
    Vtop___024root___settle__TOP__101__PROF__axi_crossbar__l346(vlSelf);
    Vtop___024root___settle__TOP__102__PROF__axi_crossbar__l348(vlSelf);
    Vtop___024root___settle__TOP__103__PROF__axi_crossbar__l339(vlSelf);
    Vtop___024root___settle__TOP__104__PROF__axi_crossbar__l342(vlSelf);
    Vtop___024root___settle__TOP__105__PROF__axi_crossbar__l351(vlSelf);
    Vtop___024root___settle__TOP__106__PROF__axi_crossbar__l377(vlSelf);
    Vtop___024root___settle__TOP__107__PROF__axi_crossbar__l398(vlSelf);
    Vtop___024root___settle__TOP__108__PROF__axi_crossbar__l350(vlSelf);
    Vtop___024root___settle__TOP__109__PROF__axi_crossbar__l352(vlSelf);
    Vtop___024root___settle__TOP__110__PROF__axi_crossbar__l338(vlSelf);
    Vtop___024root___settle__TOP__111__PROF__axi_crossbar__l354(vlSelf);
    Vtop___024root___settle__TOP__112__PROF__axi_crossbar__l355(vlSelf);
    Vtop___024root___settle__TOP__113__PROF__axi_crossbar__l356(vlSelf);
    Vtop___024root___settle__TOP__114__PROF__Dcache__l479(vlSelf);
    Vtop___024root___settle__TOP__115__PROF__CSR__l43(vlSelf);
    Vtop___024root___settle__TOP__116__PROF__Dcache__l74(vlSelf);
    Vtop___024root___settle__TOP__117__PROF__Dcache__l270(vlSelf);
    Vtop___024root___settle__TOP__118__PROF__axi_crossbar__l331(vlSelf);
    Vtop___024root___settle__TOP__119__PROF__clint__l128(vlSelf);
    Vtop___024root___settle__TOP__120__PROF__Dcache__l651(vlSelf);
    Vtop___024root___settle__TOP__121__PROF__Dcache__l572(vlSelf);
    Vtop___024root___settle__TOP__122__PROF__EX_stage__l61(vlSelf);
    Vtop___024root___settle__TOP__123__PROF__EX_stage__l44(vlSelf);
    Vtop___024root___settle__TOP__124__PROF__imm_ext__l13(vlSelf);
    Vtop___024root___settle__TOP__125__PROF__axi_crossbar__l344(vlSelf);
    Vtop___024root___settle__TOP__126__PROF__axi_crossbar__l290(vlSelf);
    Vtop___024root___settle__TOP__127__PROF__Icache__l333(vlSelf);
    Vtop___024root___settle__TOP__128__PROF__Icache__l333(vlSelf);
    Vtop___024root___settle__TOP__129__PROF__Icache__l196(vlSelf);
    Vtop___024root___settle__TOP__130__PROF__axi_icache__l105(vlSelf);
    Vtop___024root___settle__TOP__131__PROF__axi_dcache__l243(vlSelf);
    Vtop___024root___settle__TOP__132__PROF__axi_crossbar__l307(vlSelf);
    Vtop___024root___settle__TOP__133__PROF__axi_crossbar__l306(vlSelf);
    Vtop___024root___settle__TOP__134__PROF__axi_crossbar__l308(vlSelf);
    Vtop___024root___settle__TOP__135__PROF__Dcache__l482(vlSelf);
    Vtop___024root___settle__TOP__136__PROF__Dcache__l484(vlSelf);
    Vtop___024root___settle__TOP__137__PROF__Dcache__l486(vlSelf);
    Vtop___024root___settle__TOP__138__PROF__Dcache__l488(vlSelf);
    Vtop___024root___settle__TOP__139__PROF__CSR__l47(vlSelf);
    Vtop___024root___settle__TOP__140__PROF__CSR__l48(vlSelf);
    Vtop___024root___settle__TOP__141__PROF__CSR__l49(vlSelf);
    Vtop___024root___settle__TOP__142__PROF__CSR__l50(vlSelf);
    Vtop___024root___settle__TOP__143__PROF__Dcache__l404(vlSelf);
    Vtop___024root___settle__TOP__144__PROF__Dcache__l404(vlSelf);
    Vtop___024root___settle__TOP__145__PROF__clint__l130(vlSelf);
    Vtop___024root___settle__TOP__146__PROF__clint__l130(vlSelf);
    Vtop___024root___settle__TOP__147__PROF__axi_dcache__l104(vlSelf);
    Vtop___024root___settle__TOP__148__PROF__EX_stage__l80(vlSelf);
    Vtop___024root___settle__TOP__149__PROF__bcu__l28(vlSelf);
    Vtop___024root___settle__TOP__150__PROF__bcu__l28(vlSelf);
    Vtop___024root___settle__TOP__151__PROF__EX_stage__l79(vlSelf);
    Vtop___024root___settle__TOP__152__PROF__axi_crossbar__l345(vlSelf);
    Vtop___024root___settle__TOP__153__PROF__Icache__l366(vlSelf);
    Vtop___024root___settle__TOP__154__PROF__Icache__l386(vlSelf);
    Vtop___024root___settle__TOP__155__PROF__Icache__l229(vlSelf);
    Vtop___024root___settle__TOP__156__PROF__IF_stage__l32(vlSelf);
    Vtop___024root___settle__TOP__157__PROF__axi_icache__l73(vlSelf);
    Vtop___024root___settle__TOP__158__PROF__Dcache__l377(vlSelf);
    Vtop___024root___settle__TOP__159__PROF__Dcache__l377(vlSelf);
    Vtop___024root___settle__TOP__160__PROF__Dcache__l377(vlSelf);
    Vtop___024root___settle__TOP__161__PROF__Dcache__l377(vlSelf);
    Vtop___024root___settle__TOP__162__PROF__axi_dcache__l211(vlSelf);
    Vtop___024root___settle__TOP__163__PROF__Dcache__l598(vlSelf);
    Vtop___024root___settle__TOP__164__PROF__CSR__l54(vlSelf);
    Vtop___024root___settle__TOP__165__PROF__mul64__l59(vlSelf);
    Vtop___024root___settle__TOP__166__PROF__ALU__l34(vlSelf);
    Vtop___024root___settle__TOP__167__PROF__ALU__l248(vlSelf);
    Vtop___024root___settle__TOP__168__PROF__bcu__l29(vlSelf);
    Vtop___024root___settle__TOP__169__PROF__mul64__l57(vlSelf);
    Vtop___024root___settle__TOP__170__PROF__ALU__l79(vlSelf);
    Vtop___024root___settle__TOP__171__PROF__ALU__l249(vlSelf);
    Vtop___024root___settle__TOP__172__PROF__Dcache__l283(vlSelf);
    Vtop___024root___settle__TOP__173__PROF__CSR__l65(vlSelf);
    Vtop___024root___settle__TOP__174__PROF__ALU__l186(vlSelf);
    Vtop___024root___settle__TOP__175__PROF__bcu__l59(vlSelf);
    Vtop___024root___settle__TOP__176__PROF__ALU__l91(vlSelf);
    Vtop___024root___settle__TOP__177__PROF__ALU__l112(vlSelf);
    Vtop___024root___settle__TOP__178__PROF__ALU__l250(vlSelf);
    Vtop___024root___settle__TOP__179__PROF__pipline_ctrl__l36(vlSelf);
    Vtop___024root___settle__TOP__180__PROF__pipline_ctrl__l35(vlSelf);
    Vtop___024root___settle__TOP__181__PROF__IF_stage__l51(vlSelf);
    Vtop___024root___settle__TOP__182__PROF__mulTop__l37(vlSelf);
    Vtop___024root___settle__TOP__183__PROF__EX_stage__l116(vlSelf);
    Vtop___024root___settle__TOP__184__PROF__ALU__l261(vlSelf);
    Vtop___024root___settle__TOP__185__PROF__mul64__l67(vlSelf);
    Vtop___024root___settle__TOP__186__PROF__Icache__l67(vlSelf);
    Vtop___024root___settle__TOP__187__PROF__pipline_ctrl__l29(vlSelf);
    Vtop___024root___settle__TOP__188__PROF__pipline_ctrl__l32(vlSelf);
    Vtop___024root___settle__TOP__189__PROF__ALU__l269(vlSelf);
    Vtop___024root___settle__TOP__190__PROF__mul64__l69(vlSelf);
    Vtop___024root___settle__TOP__191__PROF__Icache__l69(vlSelf);
    Vtop___024root___settle__TOP__192__PROF__Icache__l369(vlSelf);
    Vtop___024root___settle__TOP__193__PROF__Icache__l389(vlSelf);
    Vtop___024root___settle__TOP__194__PROF__top__l300(vlSelf);
    Vtop___024root___settle__TOP__195__PROF__L_S_stage__l115(vlSelf);
    Vtop___024root___settle__TOP__196__PROF__Dcache__l101(vlSelf);
    Vtop___024root___settle__TOP__197__PROF__Dcache__l325(vlSelf);
    Vtop___024root___settle__TOP__198__PROF__ALU__l279(vlSelf);
    Vtop___024root___settle__TOP__199__PROF__lsu__l88(vlSelf);
    Vtop___024root___settle__TOP__200__PROF__lsu__l117(vlSelf);
    Vtop___024root___settle__TOP__201__PROF__lsu__l133(vlSelf);
    Vtop___024root___settle__TOP__202__PROF__ALU__l142(vlSelf);
    Vtop___024root___settle__TOP__203__PROF__WB_reg__l27(vlSelf);
    Vtop___024root___settle__TOP__204__PROF__ALU__l171(vlSelf);
    Vtop___024root___settle__TOP__205__PROF__top__l920(vlSelf);
    Vtop___024root___settle__TOP__206__PROF__Dcache__l722(vlSelf);
    Vtop___024root___settle__TOP__207__PROF__Dcache__l742(vlSelf);
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
    vlSelf->pc_diff = 0;
    vlSelf->pc_decoding = 0;
    vlSelf->instr_diff = 0;
    vlSelf->regA0 = 0;
    vlSelf->stall_n_diff = 0;
    vlSelf->axi_ar_ready_i = 0;
    vlSelf->axi_ar_valid_o = 0;
    vlSelf->axi_ar_addr_o = 0;
    vlSelf->axi_ar_prot_o = 0;
    vlSelf->axi_ar_id_o = 0;
    vlSelf->axi_ar_user_o = 0;
    vlSelf->axi_ar_len_o = 0;
    vlSelf->axi_ar_size_o = 0;
    vlSelf->axi_ar_burst_o = 0;
    vlSelf->axi_ar_lock_o = 0;
    vlSelf->axi_ar_cache_o = 0;
    vlSelf->axi_ar_qos_o = 0;
    vlSelf->axi_ar_region_o = 0;
    vlSelf->axi_r_ready_o = 0;
    vlSelf->axi_r_valid_i = 0;
    vlSelf->axi_r_resp_i = 0;
    vlSelf->axi_r_data_i = 0;
    vlSelf->axi_r_last_i = 0;
    vlSelf->axi_r_id_i = 0;
    vlSelf->axi_r_user_i = 0;
    vlSelf->axi_aw_ready_i = 0;
    vlSelf->axi_aw_valid_o = 0;
    vlSelf->axi_aw_addr_o = 0;
    vlSelf->axi_aw_prot_o = 0;
    vlSelf->axi_aw_id_o = 0;
    vlSelf->axi_aw_user_o = 0;
    vlSelf->axi_aw_len_o = 0;
    vlSelf->axi_aw_size_o = 0;
    vlSelf->axi_aw_burst_o = 0;
    vlSelf->axi_aw_lock_o = 0;
    vlSelf->axi_aw_cache_o = 0;
    vlSelf->axi_aw_qos_o = 0;
    vlSelf->axi_aw_region_o = 0;
    vlSelf->axi_w_ready_i = 0;
    vlSelf->axi_w_valid_o = 0;
    vlSelf->axi_w_data_o = 0;
    vlSelf->axi_w_strb_o = 0;
    vlSelf->axi_w_last_o = 0;
    vlSelf->axi_w_user_o = 0;
    vlSelf->axi_b_ready_o = 0;
    vlSelf->axi_b_valid_i = 0;
    vlSelf->axi_b_resp_i = 0;
    vlSelf->axi_b_id_i = 0;
    vlSelf->axi_b_user_i = 0;
    vlSelf->top__DOT__axi_mmio_ar_valid_o = 0;
    vlSelf->top__DOT__axi_mmio_r_last_i = 0;
    vlSelf->top__DOT__axi_mmio_r_id_i = 0;
    vlSelf->top__DOT__axi_mmio_r_user_i = 0;
    vlSelf->top__DOT__axi_mmio_aw_valid_o = 0;
    vlSelf->top__DOT__axi_mmio_w_valid_o = 0;
    vlSelf->top__DOT__axi_mmio_b_ready_o = 0;
    vlSelf->top__DOT__axi_mmio_b_id_i = 0;
    vlSelf->top__DOT__axi_mmio_b_user_i = 0;
    vlSelf->top__DOT__if_axi_ar_region_o = 0;
    vlSelf->top__DOT__if_axi_r_last_i = 0;
    vlSelf->top__DOT__if_axi_r_user_i = 0;
    vlSelf->top__DOT__ls_axi_w_data_o = 0;
    vlSelf->top__DOT__ls_axi_w_strb_o = 0;
    vlSelf->top__DOT__ls_axi_ar_region_o = 0;
    vlSelf->top__DOT__ls_axi_r_data_i = 0;
    vlSelf->top__DOT__ls_axi_r_last_i = 0;
    vlSelf->top__DOT__ls_axi_r_user_i = 0;
    vlSelf->top__DOT__pc_next = 0;
    vlSelf->top__DOT__pc_new = 0;
    vlSelf->top__DOT__is_jump = 0;
    vlSelf->top__DOT__if_stall_n = 0;
    vlSelf->top__DOT__if_instr_valid = 0;
    vlSelf->top__DOT__sram_data_valid = 0;
    vlSelf->top__DOT__sram_rdata = 0;
    vlSelf->top__DOT__src1sel_id = 0;
    vlSelf->top__DOT__src2sel_id = 0;
    vlSelf->top__DOT__aluctr_id = 0;
    vlSelf->top__DOT__is_brc_id = 0;
    vlSelf->top__DOT__is_jal_id = 0;
    vlSelf->top__DOT__is_jalr_id = 0;
    vlSelf->top__DOT__wben_id = 0;
    vlSelf->top__DOT__rs1_idx_id = 0;
    vlSelf->top__DOT__rs2_idx_id = 0;
    vlSelf->top__DOT__DivEn_id = 0;
    vlSelf->top__DOT__DivSel_id = 0;
    vlSelf->top__DOT__in_trap_id = 0;
    vlSelf->top__DOT__out_trap_id = 0;
    vlSelf->top__DOT__trap_id = 0;
    vlSelf->top__DOT__ld_use_hazard = 0;
    vlSelf->top__DOT__id_flush = 0;
    vlSelf->top__DOT__alures_ex = 0;
    vlSelf->top__DOT__rs1_sel = 0;
    vlSelf->top__DOT__rs2_sel = 0;
    vlSelf->top__DOT__ex_flush = 0;
    vlSelf->top__DOT__ex_not_ok = 0;
    vlSelf->top__DOT__csrdata_ls = 0;
    vlSelf->top__DOT__ls_stall_n = 0;
    vlSelf->top__DOT__ls_sram_rd_data_valid = 0;
    vlSelf->top__DOT__ls_sram_wr_data_ok = 0;
    vlSelf->top__DOT__ls_sram_rd_data = 0;
    vlSelf->top__DOT__wb_data = 0;
    vlSelf->top__DOT__clint_axi_arvalid = 0;
    vlSelf->top__DOT__clint_axi_awvalid = 0;
    vlSelf->top__DOT__clint_axi_wdata = 0;
    vlSelf->top__DOT__clint_axi_wstrb = 0;
    vlSelf->top__DOT__clint_axi_wvalid = 0;
    vlSelf->top__DOT__clint_axi_bready = 0;
    vlSelf->top__DOT__rw_valid_i = 0;
    vlSelf->top__DOT__dataValid_o = 0;
    vlSelf->top__DOT__fence_id = 0;
    vlSelf->top__DOT__in_intr_ls = 0;
    vlSelf->top__DOT__dataNotOk = 0;
    vlSelf->top__DOT____Vcellinp__Dcache_u__lsValid_i = 0;
    vlSelf->top__DOT____Vcellinp__Dcache_u__exValid_i = 0;
    vlSelf->top__DOT____Vcellinp__Dcache_u__addr_i = 0;
    vlSelf->top__DOT__DcacheRdValid = 0;
    vlSelf->top__DOT__DcacheWrValid = 0;
    vlSelf->top__DOT__DcacheRdAddr = 0;
    vlSelf->top__DOT__DcacheWrAddr = 0;
    vlSelf->top__DOT__lsAxiRdDataVAlid = 0;
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_w_ready = 0;
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_ready = 0;
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_valid = 0;
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_addr = 0;
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_ar_size = 0;
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_ready = 0;
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_valid = 0;
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_data = 0;
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_last = 0;
    vlSelf->top__DOT__axi_crossbar_u__DOT__axi_r_id = 0;
    vlSelf->top__DOT__IF_u__DOT__pc_next_o = 0;
    vlSelf->top__DOT__cache_dut__DOT__cacheCurState = 0;
    vlSelf->top__DOT__cache_dut__DOT__cacheNexState = 0;
    vlSelf->top__DOT__cache_dut__DOT__cacheHit = 0;
    vlSelf->top__DOT__cache_dut__DOT__way1Hit = 0;
    vlSelf->top__DOT__cache_dut__DOT__way2Hit = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__cache_dut__DOT__dataWay1_1);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__cache_dut__DOT__dataWay1_2);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__cache_dut__DOT__dataWay2_1);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__cache_dut__DOT__dataWay2_2);
    vlSelf->top__DOT__cache_dut__DOT__wenWay1 = 0;
    vlSelf->top__DOT__cache_dut__DOT__wenWay2 = 0;
    vlSelf->top__DOT__cache_dut__DOT__uncached = 0;
    vlSelf->top__DOT__cache_dut__DOT__uncachedOk = 0;
    vlSelf->top__DOT__cache_dut__DOT__diffAddr = 0;
    vlSelf->top__DOT__cache_dut__DOT__reqLatch = 0;
    vlSelf->top__DOT__cache_dut__DOT__validArray1 = 0;
    vlSelf->top__DOT__cache_dut__DOT__validArray2 = 0;
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->top__DOT__cache_dut__DOT__tagArray1[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->top__DOT__cache_dut__DOT__tagArray2[__Vi0] = 0;
    }
    vlSelf->top__DOT__cache_dut__DOT__validWay1_q = 0;
    vlSelf->top__DOT__cache_dut__DOT__validWay2_q = 0;
    VL_ZERO_RESET_W(256, vlSelf->top__DOT__cache_dut__DOT__way1Data);
    VL_ZERO_RESET_W(256, vlSelf->top__DOT__cache_dut__DOT__way2Data);
    vlSelf->top__DOT__cache_dut__DOT__randomBit = 0;
    vlSelf->top__DOT__cache_dut__DOT__missFlag = 0;
    vlSelf->top__DOT__cache_dut__DOT__rdCnt = 0;
    VL_ZERO_RESET_W(256, vlSelf->top__DOT__cache_dut__DOT__rdBuffer);
    vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__A = 0;
    vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay1_2__CEN = 0;
    vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__A = 0;
    vlSelf->top__DOT__cache_dut__DOT____Vcellinp__iramWay2_2__CEN = 0;
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram[__Vi0]);
    }
    vlSelf->top__DOT__axi_icache_dut__DOT__r_state = 0;
    vlSelf->top__DOT__axi_icache_dut__DOT__r_state_next = 0;
    vlSelf->top__DOT__axi_icache_dut__DOT__addr_reg = 0;
    VL_ZERO_RESET_W(96, vlSelf->top__DOT__ID_reg_u__DOT____Vcellout__id_reg__o_dout);
    vlSelf->top__DOT__ID_u__DOT__ext_op = 0;
    vlSelf->top__DOT__ID_u__DOT__imm = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__ID_u__DOT__regfile_u__DOT__regfiles[__Vi0] = 0;
    }
    VL_ZERO_RESET_W(316, vlSelf->top__DOT__EX_reg_u__DOT____Vcellout__ex_reg__o_dout);
    vlSelf->top__DOT__ex_stage_u__DOT__src1 = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__src2 = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__rs1 = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__rs2 = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__zero = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__ALUout = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__cin = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2_cin = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Adder_o = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shift = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__overflow = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src1Reg = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__src2Reg = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__diffIn = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__mul_valid = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__div_valid = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_res = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__sll_res = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src2 = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__shifter__DOT__shft_src1 = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__stateReg = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__resultValidReg_q = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul_signed = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_hi_src1 = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_hi_src2 = 0;
    VL_ZERO_RESET_W(130, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_rslt_stg2_ex2);
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_set = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_d = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT__mul_stg1_vld_q = 0;
    VL_ZERO_RESET_W(264, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT__mul64_u__DOT____Vcellout__id_reg__o_dout);
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_type_r = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_N_r = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_P_r = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg);
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_cnt = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_busy = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividend_sign = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__divisor_sign = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__r_64 = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__remainder_s = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__less = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__carry = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__overflow = 0;
    vlSelf->top__DOT__ex_stage_u__DOT__bcu_u__DOT__subres = 0;
    vlSelf->top__DOT__forwarding_u__DOT__rd_wb = 0;
    vlSelf->top__DOT__forwarding_u__DOT__reg_wben = 0;
    vlSelf->top__DOT__forwarding_u__DOT__reg_wb_idx = 0;
    VL_ZERO_RESET_W(227, vlSelf->top__DOT__L_S_reg_u__DOT____Vcellout__ls_reg__o_dout);
    vlSelf->top__DOT__ls_u__DOT__csr_wr_data = 0;
    vlSelf->top__DOT__ls_u__DOT__csr_stall_n = 0;
    vlSelf->top__DOT__ls_u__DOT__timr_int = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lh = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lhu = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lw = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__lwu = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__ld = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_b = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_h = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__rd_data_w = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_size = 0;
    vlSelf->top__DOT__ls_u__DOT__lsu_u__DOT__wr_mask = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__commitPC = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrw = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrs = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csrrc = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__csr_wr_en = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mepc = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mtvec = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mstatus = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__sel_mcause = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__wr_data = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mepc = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mtvec = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mstatus = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mcause = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mie = 0;
    vlSelf->top__DOT__ls_u__DOT__CSR_u__DOT__mip = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awaddr = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_awready = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_wready = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bresp = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_araddr = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_arready = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rresp = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__aw_en = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__reg_data_out = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtime = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimeWrEn = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__mtimecmpWrEn = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__slv_reg_wren = 0;
    vlSelf->top__DOT__ls_u__DOT__clint_u__DOT__byte_index = 0;
    vlSelf->top__DOT__Dcache_u__DOT__cacheCurState = 0;
    vlSelf->top__DOT__Dcache_u__DOT__cacheNexState = 0;
    vlSelf->top__DOT__Dcache_u__DOT__cacheHit = 0;
    vlSelf->top__DOT__Dcache_u__DOT__way1Hit = 0;
    vlSelf->top__DOT__Dcache_u__DOT__way2Hit = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__Dcache_u__DOT__dataWay1_1);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__Dcache_u__DOT__dataWay1_2);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__Dcache_u__DOT__dataWay2_1);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__Dcache_u__DOT__dataWay2_2);
    vlSelf->top__DOT__Dcache_u__DOT__wenWay1 = 0;
    vlSelf->top__DOT__Dcache_u__DOT__wenWay2 = 0;
    vlSelf->top__DOT__Dcache_u__DOT__uncached = 0;
    vlSelf->top__DOT__Dcache_u__DOT__reqLatch = 0;
    vlSelf->top__DOT__Dcache_u__DOT__validArray1 = 0;
    vlSelf->top__DOT__Dcache_u__DOT__validArray2 = 0;
    vlSelf->top__DOT__Dcache_u__DOT__bitValid1_d = 0;
    vlSelf->top__DOT__Dcache_u__DOT__bitValid2_d = 0;
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->top__DOT__Dcache_u__DOT__tagArray1[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->top__DOT__Dcache_u__DOT__tagArray2[__Vi0] = 0;
    }
    vlSelf->top__DOT__Dcache_u__DOT__tagArray1_d = 0;
    vlSelf->top__DOT__Dcache_u__DOT__tagArray2_d = 0;
    vlSelf->top__DOT__Dcache_u__DOT__validWay1_q = 0;
    vlSelf->top__DOT__Dcache_u__DOT__validWay2_q = 0;
    vlSelf->top__DOT__Dcache_u__DOT__replaceEnDelay = 0;
    VL_ZERO_RESET_W(256, vlSelf->top__DOT__Dcache_u__DOT__way1Data);
    VL_ZERO_RESET_W(256, vlSelf->top__DOT__Dcache_u__DOT__way2Data);
    vlSelf->top__DOT__Dcache_u__DOT__randomBit = 0;
    vlSelf->top__DOT__Dcache_u__DOT__missFlag = 0;
    vlSelf->top__DOT__Dcache_u__DOT__rdCnt = 0;
    VL_ZERO_RESET_W(256, vlSelf->top__DOT__Dcache_u__DOT__rdBuffer);
    vlSelf->top__DOT__Dcache_u__DOT__wenDelay1 = 0;
    vlSelf->top__DOT__Dcache_u__DOT__wenDelay2 = 0;
    vlSelf->top__DOT__Dcache_u__DOT__wrDataLatch = 0;
    vlSelf->top__DOT__Dcache_u__DOT__wrMaskLatch = 0;
    vlSelf->top__DOT__Dcache_u__DOT__dirtyArray1 = 0;
    vlSelf->top__DOT__Dcache_u__DOT__dirtyArray2 = 0;
    vlSelf->top__DOT__Dcache_u__DOT__wrLow = 0;
    vlSelf->top__DOT__Dcache_u__DOT__wrHigh = 0;
    vlSelf->top__DOT__Dcache_u__DOT__storeData = 0;
    vlSelf->top__DOT__Dcache_u__DOT__storeMask = 0;
    vlSelf->top__DOT__Dcache_u__DOT__sramMask = 0;
    vlSelf->top__DOT__Dcache_u__DOT__replaceWay = 0;
    vlSelf->top__DOT__Dcache_u__DOT__needWrBk_Reg = 0;
    vlSelf->top__DOT__Dcache_u__DOT__uncache = 0;
    vlSelf->top__DOT__Dcache_u__DOT__axiWrBusy = 0;
    vlSelf->top__DOT__Dcache_u__DOT__uncacheOpOk = 0;
    vlSelf->top__DOT__Dcache_u__DOT__uncacheRdOk = 0;
    vlSelf->top__DOT__Dcache_u__DOT__uncacheWrOk = 0;
    vlSelf->top__DOT__Dcache_u__DOT__temp = 0;
    vlSelf->top__DOT__Dcache_u__DOT__clean_OK = 0;
    vlSelf->top__DOT__Dcache_u__DOT__cleanCnt = 0;
    vlSelf->top__DOT__Dcache_u__DOT__cleanWrValid = 0;
    vlSelf->top__DOT__Dcache_u__DOT__oneCycleDelay = 0;
    vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay1_2__A = 0;
    vlSelf->top__DOT__Dcache_u__DOT____Vcellinp__iramWay2_2__A = 0;
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram[__Vi0]);
    }
    vlSelf->top__DOT__axi_ls_u__DOT__w_state = 0;
    vlSelf->top__DOT__axi_ls_u__DOT__w_state_next = 0;
    vlSelf->top__DOT__axi_ls_u__DOT__trans_ok = 0;
    vlSelf->top__DOT__axi_ls_u__DOT__wrLast = 0;
    vlSelf->top__DOT__axi_ls_u__DOT__wrAddr_reg = 0;
    VL_ZERO_RESET_W(256, vlSelf->top__DOT__axi_ls_u__DOT__wr_data_reg);
    vlSelf->top__DOT__axi_ls_u__DOT__wrMask_reg = 0;
    vlSelf->top__DOT__axi_ls_u__DOT__wrSize_reg = 0;
    vlSelf->top__DOT__axi_ls_u__DOT__storeLenth_reg = 0;
    vlSelf->top__DOT__axi_ls_u__DOT__wrCnt = 0;
    vlSelf->top__DOT__axi_ls_u__DOT__r_state = 0;
    vlSelf->top__DOT__axi_ls_u__DOT__r_state_next = 0;
    vlSelf->top__DOT__axi_ls_u__DOT__rdAddr_reg = 0;
    VL_ZERO_RESET_W(289, vlSelf->top__DOT__wb_reg_u__DOT____Vcellout__wb_reg__o_dout);
    VL_ZERO_RESET_W(289, vlSelf->top__DOT__wb_reg_u__DOT____Vcellinp__wb_reg__i_din);
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awaddr = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_awready = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_wready = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bresp = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_araddr = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_arready = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rdata = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rresp = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg0 = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg1 = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg2 = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__slv_reg3 = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__reg_data_out = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__byte_index = 0;
    vlSelf->top__DOT__lsAxiSlaveRam_u__DOT__aw_en = 0;
    vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__tagArray1__v0 = 0;
    vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__tagArray1__v0 = 0;
    vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__tagArray1__v0 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__tagArray2__v0 = 0;
    vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__tagArray2__v0 = 0;
    vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__tagArray2__v0 = 0;
    vlSelf->__Vdly__top__DOT__cache_dut__DOT__rdCnt = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__dividendReg);
    vlSelf->__Vdly__top__DOT__ex_stage_u__DOT__u_ALU__DOT__divider__DOT__div_cnt = 0;
    vlSelf->__Vdly__top__DOT__ls_u__DOT__CSR_u__DOT__mstatus = 0;
    vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtime = 0;
    vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__mtimecmp = 0;
    vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__tagArray1__v0 = 0;
    vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__tagArray1__v0 = 0;
    vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__tagArray1__v0 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__tagArray2__v0 = 0;
    vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__tagArray2__v0 = 0;
    vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__tagArray2__v0 = 0;
    vlSelf->__Vdly__top__DOT__Dcache_u__DOT__rdCnt = 0;
    vlSelf->__Vdly__top__DOT__Dcache_u__DOT__cleanCnt = 0;
    vlSelf->__Vdly__top__DOT__Dcache_u__DOT__oneCycleDelay = 0;
    vlSelf->__Vdly__top__DOT__axi_ls_u__DOT__wrCnt = 0;
    vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0 = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0);
    vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__iramWay1_1__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0 = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0);
    vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__iramWay1_2__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0 = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0);
    vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__iramWay2_1__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0 = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vdlyvval__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0);
    vlSelf->__Vdlyvset__top__DOT__cache_dut__DOT__iramWay2_2__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0 = 0;
    vlSelf->__Vdlyvval__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0 = 0;
    vlSelf->__Vdlyvset__top__DOT__ID_u__DOT__regfile_u__DOT__regfiles__v0 = 0;
    vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_awready = 0;
    vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__aw_en = 0;
    vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_bvalid = 0;
    vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_arready = 0;
    vlSelf->__Vdly__top__DOT__ls_u__DOT__clint_u__DOT__axi_rvalid = 0;
    vlSelf->__Vdly__top__DOT__Dcache_u__DOT__randomBit = 0;
    vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0 = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0);
    vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__iramWay1_1__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0 = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0);
    vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__iramWay1_2__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0 = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0);
    vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__iramWay2_1__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvdim0__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0 = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vdlyvval__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0);
    vlSelf->__Vdlyvset__top__DOT__Dcache_u__DOT__iramWay2_2__DOT__ram__v0 = 0;
    vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_awready = 0;
    vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__aw_en = 0;
    vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_wready = 0;
    vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_bvalid = 0;
    vlSelf->__Vdly__top__DOT__lsAxiSlaveRam_u__DOT__axi_rvalid = 0;
    vlSelf->__VinpClk__TOP__top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n = 0;
    vlSelf->__Vchglast__TOP__top__DOT__ex_stage_u__DOT__u_ALU__DOT__Multiplier__DOT____Vcellinp__resultValidReg__i_rst_n = 0;
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
