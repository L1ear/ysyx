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
    VlWide<3>/*95:0*/ __Vtemp79;
    VlWide<3>/*95:0*/ __Vtemp80;
    VlWide<3>/*95:0*/ __Vtemp81;
    VlWide<3>/*95:0*/ __Vtemp82;
    VlWide<3>/*95:0*/ __Vtemp83;
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
            tracep->chgBit(oldp+21,(vlSelf->top__DOT__sft32));
            tracep->chgBit(oldp+22,(vlSelf->top__DOT__csrWrEn));
            tracep->chgBit(oldp+23,(vlSelf->top__DOT__IntSync));
            tracep->chgBit(oldp+24,(vlSelf->top__DOT__mret));
            tracep->chgCData(oldp+25,(vlSelf->top__DOT__csr_op),2);
            tracep->chgQData(oldp+26,(vlSelf->top__DOT__ALUout),64);
            tracep->chgBit(oldp+28,(vlSelf->top__DOT__less));
            tracep->chgBit(oldp+29,(vlSelf->top__DOT__zero));
            tracep->chgQData(oldp+30,(vlSelf->top__DOT__csrRdData),64);
            tracep->chgBit(oldp+32,(vlSelf->top__DOT__csrUpdata));
            tracep->chgQData(oldp+33,(vlSelf->top__DOT__mcause_n),64);
            tracep->chgQData(oldp+35,(vlSelf->top__DOT__mepc_n),64);
            tracep->chgBit(oldp+37,(vlSelf->top__DOT__mstatus_n));
            tracep->chgCData(oldp+38,(vlSelf->top__DOT__iotrap),2);
            tracep->chgQData(oldp+39,(vlSelf->top__DOT__ALUsrc1),64);
            tracep->chgQData(oldp+41,(vlSelf->top__DOT__ALUsrc2),64);
            tracep->chgQData(oldp+43,(((IData)(vlSelf->top__DOT__dwsel)
                                        ? (((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->top__DOT__ALUout)))
                                        : vlSelf->top__DOT__ALUout)),64);
            tracep->chgBit(oldp+45,(vlSelf->top__DOT__u_ALU__DOT__cin));
            tracep->chgQData(oldp+46,(vlSelf->top__DOT__u_ALU__DOT__src2_cin),64);
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__u_ALU__DOT__Adder_o),64);
            tracep->chgBit(oldp+50,((1U & ((IData)(vlSelf->top__DOT__ALUctr) 
                                           >> 3U))));
            tracep->chgBit(oldp+51,((1U & ((IData)(vlSelf->top__DOT__ALUctr) 
                                           >> 2U))));
            tracep->chgCData(oldp+52,((7U & (IData)(vlSelf->top__DOT__ALUctr))),3);
            tracep->chgQData(oldp+53,(vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp),64);
            VL_EXTEND_WQ(65,64, __Vtemp79, vlSelf->top__DOT__ALUsrc1);
            VL_EXTEND_WQ(65,64, __Vtemp80, vlSelf->top__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp81, __Vtemp79, __Vtemp80);
            VL_EXTEND_WI(65,1, __Vtemp82, (IData)(vlSelf->top__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp83, __Vtemp81, __Vtemp82);
            tracep->chgBit(oldp+55,((1U & __Vtemp83[2U])));
            tracep->chgBit(oldp+56,(vlSelf->top__DOT__u_ALU__DOT__overflow));
            tracep->chgQData(oldp+57,((vlSelf->top__DOT__ALUsrc1 
                                       ^ vlSelf->top__DOT__ALUsrc2)),64);
            tracep->chgQData(oldp+59,((vlSelf->top__DOT__ALUsrc1 
                                       | vlSelf->top__DOT__ALUsrc2)),64);
            tracep->chgQData(oldp+61,((vlSelf->top__DOT__ALUsrc1 
                                       & vlSelf->top__DOT__ALUsrc2)),64);
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__u_ALU__DOT__DivOut),64);
            tracep->chgCData(oldp+65,((0x3fU & (IData)(vlSelf->top__DOT__ALUsrc2))),6);
            tracep->chgWData(oldp+66,(vlSelf->top__DOT__u_ALU__DOT__divider__DOT__tmp),128);
            tracep->chgQData(oldp+70,(vlSelf->top__DOT__u_csr_reg__DOT__csrWrData),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__CurPc),64);
            tracep->chgBit(oldp+74,((1U & (IData)((vlSelf->top__DOT__u_csr_reg__DOT__mstatus 
                                                   >> 3U)))));
            tracep->chgQData(oldp+75,(vlSelf->top__DOT__u_csr_reg__DOT__mtvec),64);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__u_csr_reg__DOT__mepc),64);
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[0]),64);
            tracep->chgQData(oldp+81,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[1]),64);
            tracep->chgQData(oldp+83,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[2]),64);
            tracep->chgQData(oldp+85,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[3]),64);
            tracep->chgQData(oldp+87,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[4]),64);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[5]),64);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[6]),64);
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[7]),64);
            tracep->chgQData(oldp+95,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[8]),64);
            tracep->chgQData(oldp+97,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[9]),64);
            tracep->chgQData(oldp+99,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[10]),64);
            tracep->chgQData(oldp+101,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[11]),64);
            tracep->chgQData(oldp+103,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[12]),64);
            tracep->chgQData(oldp+105,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[13]),64);
            tracep->chgQData(oldp+107,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[14]),64);
            tracep->chgQData(oldp+109,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[15]),64);
            tracep->chgQData(oldp+111,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[16]),64);
            tracep->chgQData(oldp+113,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[17]),64);
            tracep->chgQData(oldp+115,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[18]),64);
            tracep->chgQData(oldp+117,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[19]),64);
            tracep->chgQData(oldp+119,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[20]),64);
            tracep->chgQData(oldp+121,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[21]),64);
            tracep->chgQData(oldp+123,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[22]),64);
            tracep->chgQData(oldp+125,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[23]),64);
            tracep->chgQData(oldp+127,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[24]),64);
            tracep->chgQData(oldp+129,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[25]),64);
            tracep->chgQData(oldp+131,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[26]),64);
            tracep->chgQData(oldp+133,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[27]),64);
            tracep->chgQData(oldp+135,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[28]),64);
            tracep->chgQData(oldp+137,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[29]),64);
            tracep->chgQData(oldp+139,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[30]),64);
            tracep->chgQData(oldp+141,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[31]),64);
            tracep->chgQData(oldp+143,(vlSelf->top__DOT__u_csr_reg__DOT__mstatus),64);
            tracep->chgQData(oldp+145,(vlSelf->top__DOT__u_csr_reg__DOT__mcause),64);
        }
        tracep->chgBit(oldp+147,(vlSelf->clk));
        tracep->chgBit(oldp+148,(vlSelf->rst_n));
        tracep->chgQData(oldp+149,(vlSelf->DmemDataO),64);
        tracep->chgIData(oldp+151,(vlSelf->instr),32);
        tracep->chgQData(oldp+152,(vlSelf->instrAddr),64);
        tracep->chgQData(oldp+154,(vlSelf->DmemAddr),64);
        tracep->chgQData(oldp+156,(vlSelf->DmemDataI),64);
        tracep->chgBit(oldp+158,(vlSelf->MemWr));
        tracep->chgCData(oldp+159,(vlSelf->MemOp),3);
        tracep->chgCData(oldp+160,(vlSelf->OPcode),7);
        tracep->chgQData(oldp+161,(vlSelf->regA0),64);
        tracep->chgQData(oldp+163,(vlSelf->dnpc),64);
        tracep->chgCData(oldp+165,((0x1fU & (vlSelf->instr 
                                             >> 7U))),5);
        tracep->chgCData(oldp+166,((0x1fU & (vlSelf->instr 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+167,((0x1fU & (vlSelf->instr 
                                             >> 0x14U))),5);
        tracep->chgSData(oldp+168,((vlSelf->instr >> 0x14U)),12);
        tracep->chgQData(oldp+169,(((IData)(vlSelf->top__DOT__RegWrSel)
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
        tracep->chgCData(oldp+171,((0x1fU & (vlSelf->instr 
                                             >> 2U))),5);
        tracep->chgCData(oldp+172,((7U & (vlSelf->instr 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+173,((vlSelf->instr >> 0x19U)),7);
        tracep->chgIData(oldp+174,((vlSelf->instr >> 7U)),25);
        tracep->chgBit(oldp+175,((0x341U == (vlSelf->instr 
                                             >> 0x14U))));
        tracep->chgBit(oldp+176,(((0x341U == (vlSelf->instr 
                                              >> 0x14U)) 
                                  & (IData)(vlSelf->top__DOT__csrWrEn))));
        tracep->chgBit(oldp+177,((0x305U == (vlSelf->instr 
                                             >> 0x14U))));
        tracep->chgBit(oldp+178,(((0x305U == (vlSelf->instr 
                                              >> 0x14U)) 
                                  & (IData)(vlSelf->top__DOT__csrWrEn))));
        tracep->chgBit(oldp+179,((0x300U == (vlSelf->instr 
                                             >> 0x14U))));
        tracep->chgBit(oldp+180,(((0x300U == (vlSelf->instr 
                                              >> 0x14U)) 
                                  & (IData)(vlSelf->top__DOT__csrWrEn))));
        tracep->chgBit(oldp+181,((0x342U == (vlSelf->instr 
                                             >> 0x14U))));
        tracep->chgBit(oldp+182,(((0x342U == (vlSelf->instr 
                                              >> 0x14U)) 
                                  & (IData)(vlSelf->top__DOT__csrWrEn))));
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
