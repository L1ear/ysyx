// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_OUT8(MemWr,0,0);
    VL_OUT8(MemOp,2,0);
    VL_OUT8(OPcode,6,0);
    VL_IN(instr,31,0);
    VL_IN64(DmemDataO,63,0);
    VL_OUT64(instrAddr,63,0);
    VL_OUT64(DmemAddr,63,0);
    VL_OUT64(DmemDataI,63,0);
    VL_OUT64(regA0,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ top__DOT__PCAsrc;
    CData/*0:0*/ top__DOT__PCBsrc;
    CData/*0:0*/ top__DOT__RegWrEn;
    CData/*4:0*/ top__DOT__ExtOp;
    CData/*3:0*/ top__DOT__ALUctr;
    CData/*1:0*/ top__DOT__Src2Sel;
    CData/*0:0*/ top__DOT__Src1Sel;
    CData/*0:0*/ top__DOT__RegWrSel;
    CData/*2:0*/ top__DOT__branch;
    CData/*0:0*/ top__DOT__dwsel;
    CData/*0:0*/ top__DOT__DivEn;
    CData/*2:0*/ top__DOT__DivSel;
    CData/*0:0*/ top__DOT__Div32;
    CData/*0:0*/ top__DOT__sft32;
    CData/*0:0*/ top__DOT__csrWrEn;
    CData/*0:0*/ top__DOT__IntSync;
    CData/*0:0*/ top__DOT__mret;
    CData/*0:0*/ top__DOT__less;
    CData/*0:0*/ top__DOT__zero;
    CData/*0:0*/ top__DOT__csrUpdata;
    CData/*0:0*/ top__DOT__mstatus_n;
    CData/*1:0*/ top__DOT__iotrap;
    CData/*0:0*/ top__DOT__u_ALU__DOT__cin;
    CData/*0:0*/ top__DOT__u_ALU__DOT__overflow;
    VlWide<4>/*127:0*/ top__DOT__u_ALU__DOT__divider__DOT__tmp;
    QData/*63:0*/ top__DOT__NextPc;
    QData/*63:0*/ top__DOT__CurPc;
    QData/*63:0*/ top__DOT__rs1_data;
    QData/*63:0*/ top__DOT__rs2_data;
    QData/*63:0*/ top__DOT__imm;
    QData/*63:0*/ top__DOT__ALUout;
    QData/*63:0*/ top__DOT__mepc_n;
    QData/*63:0*/ top__DOT__ALUsrc1;
    QData/*63:0*/ top__DOT__ALUsrc2;
    QData/*63:0*/ top__DOT__RegWrData;
    QData/*63:0*/ top__DOT__u_ALU__DOT__src2_cin;
    QData/*63:0*/ top__DOT__u_ALU__DOT__Adder_o;
    QData/*63:0*/ top__DOT__u_ALU__DOT__DivOut;
    QData/*63:0*/ top__DOT__u_ALU__DOT__shifter__DOT__temp;
    QData/*63:0*/ top__DOT__u_csr_reg__DOT__mepc;
    QData/*63:0*/ top__DOT__u_csr_reg__DOT__mtvec;
    QData/*63:0*/ top__DOT__u_csr_reg__DOT__mstatus;
    QData/*63:0*/ top__DOT__u_csr_reg__DOT__mcause;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__u_regfiles__DOT__regfiles;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
