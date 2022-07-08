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

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp55;
    VlWide<3>/*95:0*/ __Vtemp56;
    VlWide<3>/*95:0*/ __Vtemp57;
    VlWide<3>/*95:0*/ __Vtemp58;
    VlWide<3>/*95:0*/ __Vtemp59;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->top__DOT__PCAsrc));
            tracep->chgBit(oldp+1,(vlSelf->top__DOT__PCBsrc));
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__NextPc),64);
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__rs1_data),64);
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__rs2_data),64);
            tracep->chgQData(oldp+8,(vlSelf->top__DOT__imm),64);
            tracep->chgBit(oldp+10,(vlSelf->top__DOT__RegWrEn));
            tracep->chgCData(oldp+11,(vlSelf->top__DOT__ExtOp),5);
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__ALUctr),4);
            tracep->chgCData(oldp+13,(vlSelf->top__DOT__Src2Sel),2);
            tracep->chgBit(oldp+14,(vlSelf->top__DOT__Src1Sel));
            tracep->chgBit(oldp+15,(vlSelf->top__DOT__RegWrSel));
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__branch),3);
            tracep->chgBit(oldp+17,(vlSelf->top__DOT__dwsel));
            tracep->chgBit(oldp+18,(vlSelf->top__DOT__DivEn));
            tracep->chgCData(oldp+19,(vlSelf->top__DOT__DivSel),3);
            tracep->chgBit(oldp+20,(vlSelf->top__DOT__Div32));
            tracep->chgQData(oldp+21,(vlSelf->top__DOT__ALUout),64);
            tracep->chgBit(oldp+23,(vlSelf->top__DOT__less));
            tracep->chgBit(oldp+24,(vlSelf->top__DOT__zero));
            tracep->chgQData(oldp+25,(vlSelf->top__DOT__ALUsrc1),64);
            tracep->chgQData(oldp+27,(vlSelf->top__DOT__ALUsrc2),64);
            tracep->chgQData(oldp+29,(((IData)(vlSelf->top__DOT__dwsel)
                                        ? (((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->top__DOT__ALUout)))
                                        : vlSelf->top__DOT__ALUout)),64);
            tracep->chgBit(oldp+31,(vlSelf->top__DOT__u_ALU__DOT__cin));
            tracep->chgQData(oldp+32,(vlSelf->top__DOT__u_ALU__DOT__src2_cin),64);
            tracep->chgQData(oldp+34,(vlSelf->top__DOT__u_ALU__DOT__Adder_o),64);
            tracep->chgBit(oldp+36,((1U & ((IData)(vlSelf->top__DOT__ALUctr) 
                                           >> 3U))));
            tracep->chgBit(oldp+37,((1U & ((IData)(vlSelf->top__DOT__ALUctr) 
                                           >> 2U))));
            tracep->chgCData(oldp+38,((7U & (IData)(vlSelf->top__DOT__ALUctr))),3);
            VL_EXTEND_WQ(65,64, __Vtemp55, vlSelf->top__DOT__ALUsrc1);
            VL_EXTEND_WQ(65,64, __Vtemp56, vlSelf->top__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp57, __Vtemp55, __Vtemp56);
            VL_EXTEND_WI(65,1, __Vtemp58, (IData)(vlSelf->top__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp59, __Vtemp57, __Vtemp58);
            tracep->chgBit(oldp+39,((1U & __Vtemp59[2U])));
            tracep->chgBit(oldp+40,(vlSelf->top__DOT__u_ALU__DOT__overflow));
            tracep->chgQData(oldp+41,((vlSelf->top__DOT__ALUsrc1 
                                       ^ vlSelf->top__DOT__ALUsrc2)),64);
            tracep->chgQData(oldp+43,((vlSelf->top__DOT__ALUsrc1 
                                       | vlSelf->top__DOT__ALUsrc2)),64);
            tracep->chgQData(oldp+45,((vlSelf->top__DOT__ALUsrc1 
                                       & vlSelf->top__DOT__ALUsrc2)),64);
            tracep->chgQData(oldp+47,(vlSelf->top__DOT__u_ALU__DOT__DivOut),64);
            tracep->chgCData(oldp+49,((0x3fU & (IData)(vlSelf->top__DOT__ALUsrc2))),6);
            tracep->chgQData(oldp+50,(vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp),64);
            tracep->chgWData(oldp+52,(vlSelf->top__DOT__u_ALU__DOT__divider__DOT__tmp),128);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__CurPc),64);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[0]),64);
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[1]),64);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[2]),64);
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[3]),64);
            tracep->chgQData(oldp+66,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[4]),64);
            tracep->chgQData(oldp+68,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[5]),64);
            tracep->chgQData(oldp+70,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[6]),64);
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[7]),64);
            tracep->chgQData(oldp+74,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[8]),64);
            tracep->chgQData(oldp+76,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[9]),64);
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[10]),64);
            tracep->chgQData(oldp+80,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[11]),64);
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[12]),64);
            tracep->chgQData(oldp+84,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[13]),64);
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[14]),64);
            tracep->chgQData(oldp+88,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[15]),64);
            tracep->chgQData(oldp+90,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[16]),64);
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[17]),64);
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[18]),64);
            tracep->chgQData(oldp+96,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[19]),64);
            tracep->chgQData(oldp+98,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[20]),64);
            tracep->chgQData(oldp+100,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[21]),64);
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[22]),64);
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[23]),64);
            tracep->chgQData(oldp+106,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[24]),64);
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[25]),64);
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[26]),64);
            tracep->chgQData(oldp+112,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[27]),64);
            tracep->chgQData(oldp+114,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[28]),64);
            tracep->chgQData(oldp+116,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[29]),64);
            tracep->chgQData(oldp+118,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[30]),64);
            tracep->chgQData(oldp+120,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[31]),64);
        }
        tracep->chgBit(oldp+122,(vlSelf->clk));
        tracep->chgBit(oldp+123,(vlSelf->rst_n));
        tracep->chgQData(oldp+124,(vlSelf->DmemDataO),64);
        tracep->chgIData(oldp+126,(vlSelf->instr),32);
        tracep->chgQData(oldp+127,(vlSelf->instrAddr),64);
        tracep->chgQData(oldp+129,(vlSelf->DmemAddr),64);
        tracep->chgQData(oldp+131,(vlSelf->DmemDataI),64);
        tracep->chgBit(oldp+133,(vlSelf->MemWr));
        tracep->chgCData(oldp+134,(vlSelf->MemOp),3);
        tracep->chgCData(oldp+135,(vlSelf->OPcode),7);
        tracep->chgQData(oldp+136,(vlSelf->regA0),64);
        tracep->chgCData(oldp+138,((0x1fU & (vlSelf->instr 
                                             >> 7U))),5);
        tracep->chgCData(oldp+139,((0x1fU & (vlSelf->instr 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+140,((0x1fU & (vlSelf->instr 
                                             >> 0x14U))),5);
        tracep->chgQData(oldp+141,(((IData)(vlSelf->top__DOT__RegWrSel)
                                     ? vlSelf->DmemDataO
                                     : ((IData)(vlSelf->top__DOT__dwsel)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__ALUout)))
                                         : vlSelf->top__DOT__ALUout))),64);
        tracep->chgCData(oldp+143,((0x1fU & (vlSelf->instr 
                                             >> 2U))),5);
        tracep->chgCData(oldp+144,((7U & (vlSelf->instr 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+145,((vlSelf->instr >> 0x19U)),7);
        tracep->chgIData(oldp+146,((vlSelf->instr >> 7U)),25);
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
    }
}
