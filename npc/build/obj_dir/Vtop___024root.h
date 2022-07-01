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
    VL_IN64(DmemDataO,63,0);
    VL_OUT64(DmemAddr,63,0);
    VL_OUT64(DmemDataI,63,0);

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
    CData/*0:0*/ top__DOT__less;
    CData/*0:0*/ top__DOT__zero;
    CData/*0:0*/ top__DOT__u_ALU__DOT__cin;
    CData/*0:0*/ top__DOT__u_ALU__DOT__overflow;
    IData/*31:0*/ top__DOT__instr;
    QData/*63:0*/ top__DOT__NextPc;
    QData/*63:0*/ top__DOT__CurPc;
    QData/*63:0*/ top__DOT__rs1_data;
    QData/*63:0*/ top__DOT__rs2_data;
    QData/*63:0*/ top__DOT__imm;
    QData/*63:0*/ top__DOT__ALUout;
    QData/*63:0*/ top__DOT__ALUsrc1;
    QData/*63:0*/ top__DOT__ALUsrc2;
    QData/*63:0*/ top__DOT__u_ALU__DOT__src2_cin;
    QData/*63:0*/ top__DOT__u_ALU__DOT__Adder_o;
    QData/*63:0*/ top__DOT__u_ALU__DOT__shift;
    QData/*63:0*/ top__DOT__u_ALU__DOT__shifter__DOT__temp;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__u_regfiles__DOT__regfiles;
    VlUnpacked<IData/*31:0*/, 65536> top__DOT__u_instr_mem__DOT__instr_mem;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

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
