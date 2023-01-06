// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024unit.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void axiSlaveRead(long long raddr, char size, long long* rdata);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_axiSlaveRead_TOP____024unit(QData/*63:0*/ raddr, CData/*7:0*/ size, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_axiSlaveRead_TOP____024unit\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    char size__Vcvt;
    for (size_t size__Vidx = 0; size__Vidx < 1; ++size__Vidx) size__Vcvt = size;
    long long rdata__Vcvt;
    axiSlaveRead(raddr__Vcvt, size__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void axiSlaveWrite(long long waddr, char size, long long wdata, char wmask);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_axiSlaveWrite_TOP____024unit(QData/*63:0*/ waddr, CData/*7:0*/ size, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_axiSlaveWrite_TOP____024unit\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    char size__Vcvt;
    for (size_t size__Vidx = 0; size__Vidx < 1; ++size__Vidx) size__Vcvt = size;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    axiSlaveWrite(waddr__Vcvt, size__Vcvt, wdata__Vcvt, wmask__Vcvt);
}
