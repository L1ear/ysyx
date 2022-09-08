// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024unit.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void vmemread(long long raddr, int len, long long* rdata, long long pc);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_vmemread_TOP____024unit(QData/*63:0*/ raddr, IData/*31:0*/ len, QData/*63:0*/ &rdata, QData/*63:0*/ pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_vmemread_TOP____024unit\n"); );
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

extern "C" void vmemwrite(long long raddr, long long wdata, long long pc);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_vmemwrite_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ wdata, QData/*63:0*/ pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_vmemwrite_TOP____024unit\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    long long pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    vmemwrite(raddr__Vcvt, wdata__Vcvt, pc__Vcvt);
}

extern "C" void ebreak();

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit\n"); );
    // Body
    ebreak();
}

extern "C" void difftest_step(long long pc);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_difftest_step_TOP____024unit(QData/*63:0*/ pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_difftest_step_TOP____024unit\n"); );
    // Body
    long long pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    difftest_step(pc__Vcvt);
}
