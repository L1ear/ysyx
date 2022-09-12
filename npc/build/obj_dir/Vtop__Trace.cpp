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
    VlWide<3>/*95:0*/ __Vtemp29;
    VlWide<3>/*95:0*/ __Vtemp30;
    VlWide<3>/*95:0*/ __Vtemp31;
    VlWide<3>/*95:0*/ __Vtemp32;
    VlWide<3>/*95:0*/ __Vtemp33;
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
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__ALUctr),5);
            tracep->chgCData(oldp+13,(vlSelf->top__DOT__Src2Sel),2);
            tracep->chgBit(oldp+14,(vlSelf->top__DOT__Src1Sel));
            tracep->chgBit(oldp+15,(vlSelf->top__DOT__RegWrSel));
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__branch),3);
            tracep->chgBit(oldp+17,(vlSelf->top__DOT__DivEn));
            tracep->chgCData(oldp+18,(vlSelf->top__DOT__DivSel),3);
            tracep->chgBit(oldp+19,(vlSelf->top__DOT__csrWrEn));
            tracep->chgBit(oldp+20,(vlSelf->top__DOT__IntSync));
            tracep->chgBit(oldp+21,(vlSelf->top__DOT__mret));
            tracep->chgCData(oldp+22,(vlSelf->top__DOT__csr_op),2);
            tracep->chgBit(oldp+23,(vlSelf->top__DOT__less));
            tracep->chgBit(oldp+24,(vlSelf->top__DOT__zero));
            tracep->chgQData(oldp+25,(vlSelf->top__DOT__csrRdData),64);
            tracep->chgBit(oldp+27,(vlSelf->top__DOT__csrUpdata));
            tracep->chgQData(oldp+28,(vlSelf->top__DOT__mcause_n),64);
            tracep->chgQData(oldp+30,(vlSelf->top__DOT__mepc_n),64);
            tracep->chgBit(oldp+32,(vlSelf->top__DOT__mstatus_n));
            tracep->chgCData(oldp+33,(vlSelf->top__DOT__iotrap),2);
            tracep->chgQData(oldp+34,(vlSelf->top__DOT__ALUsrc1),64);
            tracep->chgQData(oldp+36,(vlSelf->top__DOT__ALUsrc2),64);
            tracep->chgQData(oldp+38,(vlSelf->top__DOT__u_ALU__DOT__ALUout),64);
            tracep->chgBit(oldp+40,(vlSelf->top__DOT__u_ALU__DOT__cin));
            tracep->chgQData(oldp+41,(vlSelf->top__DOT__u_ALU__DOT__src2_cin),64);
            tracep->chgQData(oldp+43,(vlSelf->top__DOT__u_ALU__DOT__Adder_o),64);
            tracep->chgBit(oldp+45,((1U & ((IData)(vlSelf->top__DOT__ALUctr) 
                                           >> 3U))));
            tracep->chgBit(oldp+46,((1U & ((IData)(vlSelf->top__DOT__ALUctr) 
                                           >> 2U))));
            tracep->chgCData(oldp+47,((7U & (IData)(vlSelf->top__DOT__ALUctr))),3);
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__u_ALU__DOT__shift),64);
            VL_EXTEND_WQ(65,64, __Vtemp29, vlSelf->top__DOT__ALUsrc1);
            VL_EXTEND_WQ(65,64, __Vtemp30, vlSelf->top__DOT__u_ALU__DOT__src2_cin);
            VL_ADD_W(3, __Vtemp31, __Vtemp29, __Vtemp30);
            VL_EXTEND_WI(65,1, __Vtemp32, (IData)(vlSelf->top__DOT__u_ALU__DOT__cin));
            VL_ADD_W(3, __Vtemp33, __Vtemp31, __Vtemp32);
            tracep->chgBit(oldp+50,((1U & __Vtemp33[2U])));
            tracep->chgBit(oldp+51,(vlSelf->top__DOT__u_ALU__DOT__overflow));
            tracep->chgQData(oldp+52,((vlSelf->top__DOT__ALUsrc1 
                                       ^ vlSelf->top__DOT__ALUsrc2)),64);
            tracep->chgQData(oldp+54,((vlSelf->top__DOT__ALUsrc1 
                                       | vlSelf->top__DOT__ALUsrc2)),64);
            tracep->chgQData(oldp+56,((vlSelf->top__DOT__ALUsrc1 
                                       & vlSelf->top__DOT__ALUsrc2)),64);
            tracep->chgQData(oldp+58,(((4U & (IData)(vlSelf->top__DOT__DivSel))
                                        ? ((2U & (IData)(vlSelf->top__DOT__DivSel))
                                            ? ((1U 
                                                & (IData)(vlSelf->top__DOT__DivSel))
                                                ? VL_MODDIV_QQQ(64, vlSelf->top__DOT__ALUsrc1, vlSelf->top__DOT__ALUsrc2)
                                                : VL_MODDIVS_QQQ(64, vlSelf->top__DOT__ALUsrc1, vlSelf->top__DOT__ALUsrc2))
                                            : ((1U 
                                                & (IData)(vlSelf->top__DOT__DivSel))
                                                ? VL_DIV_QQQ(64, vlSelf->top__DOT__ALUsrc1, vlSelf->top__DOT__ALUsrc2)
                                                : VL_DIVS_QQQ(64, vlSelf->top__DOT__ALUsrc1, vlSelf->top__DOT__ALUsrc2)))
                                        : ((2U & (IData)(vlSelf->top__DOT__DivSel))
                                            ? ((1U 
                                                & (IData)(vlSelf->top__DOT__DivSel))
                                                ? (vlSelf->top__DOT__ALUsrc1 
                                                   * vlSelf->top__DOT__ALUsrc2)
                                                : (vlSelf->top__DOT__ALUsrc1 
                                                   * vlSelf->top__DOT__ALUsrc2))
                                            : ((1U 
                                                & (IData)(vlSelf->top__DOT__DivSel))
                                                ? VL_MULS_QQQ(64,64,64, vlSelf->top__DOT__ALUsrc1, vlSelf->top__DOT__ALUsrc2)
                                                : (vlSelf->top__DOT__ALUsrc1 
                                                   * vlSelf->top__DOT__ALUsrc2))))),64);
            tracep->chgCData(oldp+60,((0xfU & (IData)(vlSelf->top__DOT__ALUctr))),4);
            tracep->chgBit(oldp+61,((1U & ((IData)(vlSelf->top__DOT__ALUctr) 
                                           >> 4U))));
            tracep->chgCData(oldp+62,((0x3fU & (IData)(vlSelf->top__DOT__ALUsrc2))),6);
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
            tracep->chgQData(oldp+67,((0xffffffffffffffffULL 
                                       >> (0x3fU & (IData)(vlSelf->top__DOT__ALUsrc2)))),64);
            tracep->chgQData(oldp+69,((~ (0xffffffffffffffffULL 
                                          >> (0x3fU 
                                              & (IData)(vlSelf->top__DOT__ALUsrc2))))),64);
            tracep->chgQData(oldp+71,(((0x10U & (IData)(vlSelf->top__DOT__ALUctr))
                                        ? (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                           & (QData)((IData)(
                                                             ((0xffffffffffffffffULL 
                                                               >> 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->top__DOT__ALUsrc2))) 
                                                              >> 0x20U))))
                                        : vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
            tracep->chgQData(oldp+73,(((0x10U & (IData)(vlSelf->top__DOT__ALUctr))
                                        ? ((1U & (IData)(
                                                         (vlSelf->top__DOT__ALUsrc1 
                                                          >> 0x1fU)))
                                            ? (0x100000000ULL 
                                               | (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                                  | (QData)((IData)(
                                                                    (~ (IData)(
                                                                               ((0xffffffffffffffffULL 
                                                                                >> 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->top__DOT__ALUsrc2))) 
                                                                                >> 0x20U)))))))
                                            : (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                               & (QData)((IData)(
                                                                 ((0xffffffffffffffffULL 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & (IData)(vlSelf->top__DOT__ALUsrc2))) 
                                                                  >> 0x20U)))))
                                        : (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                           | ((- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__ALUsrc1 
                                                                             >> 0x3fU)))))) 
                                              & (~ 
                                                 (0xffffffffffffffffULL 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->top__DOT__ALUsrc2)))))))),64);
            tracep->chgQData(oldp+75,(vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__u_csr_reg__DOT__csrWrData),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__CurPc),64);
            tracep->chgBit(oldp+81,((1U & (IData)((vlSelf->top__DOT__u_csr_reg__DOT__mstatus 
                                                   >> 3U)))));
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__u_csr_reg__DOT__mtvec),64);
            tracep->chgQData(oldp+84,(vlSelf->top__DOT__u_csr_reg__DOT__mepc),64);
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[0]),64);
            tracep->chgQData(oldp+88,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[1]),64);
            tracep->chgQData(oldp+90,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[2]),64);
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[3]),64);
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[4]),64);
            tracep->chgQData(oldp+96,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[5]),64);
            tracep->chgQData(oldp+98,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[6]),64);
            tracep->chgQData(oldp+100,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[7]),64);
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[8]),64);
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[9]),64);
            tracep->chgQData(oldp+106,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[10]),64);
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[11]),64);
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[12]),64);
            tracep->chgQData(oldp+112,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[13]),64);
            tracep->chgQData(oldp+114,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[14]),64);
            tracep->chgQData(oldp+116,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[15]),64);
            tracep->chgQData(oldp+118,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[16]),64);
            tracep->chgQData(oldp+120,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[17]),64);
            tracep->chgQData(oldp+122,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[18]),64);
            tracep->chgQData(oldp+124,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[19]),64);
            tracep->chgQData(oldp+126,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[20]),64);
            tracep->chgQData(oldp+128,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[21]),64);
            tracep->chgQData(oldp+130,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[22]),64);
            tracep->chgQData(oldp+132,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[23]),64);
            tracep->chgQData(oldp+134,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[24]),64);
            tracep->chgQData(oldp+136,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[25]),64);
            tracep->chgQData(oldp+138,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[26]),64);
            tracep->chgQData(oldp+140,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[27]),64);
            tracep->chgQData(oldp+142,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[28]),64);
            tracep->chgQData(oldp+144,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[29]),64);
            tracep->chgQData(oldp+146,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[30]),64);
            tracep->chgQData(oldp+148,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[31]),64);
            tracep->chgQData(oldp+150,(vlSelf->top__DOT__u_csr_reg__DOT__mstatus),64);
            tracep->chgQData(oldp+152,(vlSelf->top__DOT__u_csr_reg__DOT__mcause),64);
        }
        tracep->chgBit(oldp+154,(vlSelf->clk));
        tracep->chgBit(oldp+155,(vlSelf->rst_n));
        tracep->chgQData(oldp+156,(vlSelf->DmemDataO),64);
        tracep->chgIData(oldp+158,(vlSelf->instr),32);
        tracep->chgQData(oldp+159,(vlSelf->instrAddr),64);
        tracep->chgQData(oldp+161,(vlSelf->DmemAddr),64);
        tracep->chgQData(oldp+163,(vlSelf->DmemDataI),64);
        tracep->chgBit(oldp+165,(vlSelf->MemWr));
        tracep->chgCData(oldp+166,(vlSelf->MemOp),3);
        tracep->chgCData(oldp+167,(vlSelf->OPcode),7);
        tracep->chgQData(oldp+168,(vlSelf->regA0),64);
        tracep->chgQData(oldp+170,(vlSelf->dnpc),64);
        tracep->chgCData(oldp+172,((0x1fU & (vlSelf->instr 
                                             >> 7U))),5);
        tracep->chgCData(oldp+173,((0x1fU & (vlSelf->instr 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+174,((0x1fU & (vlSelf->instr 
                                             >> 0x14U))),5);
        tracep->chgSData(oldp+175,((vlSelf->instr >> 0x14U)),12);
        tracep->chgQData(oldp+176,(((IData)(vlSelf->top__DOT__RegWrSel)
                                     ? vlSelf->DmemDataO
                                     : 0ULL)),64);
        tracep->chgCData(oldp+178,((0x1fU & (vlSelf->instr 
                                             >> 2U))),5);
        tracep->chgCData(oldp+179,((7U & (vlSelf->instr 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+180,((vlSelf->instr >> 0x19U)),7);
        tracep->chgIData(oldp+181,((vlSelf->instr >> 7U)),25);
        tracep->chgBit(oldp+182,((0x341U == (vlSelf->instr 
                                             >> 0x14U))));
        tracep->chgBit(oldp+183,(((0x341U == (vlSelf->instr 
                                              >> 0x14U)) 
                                  & (IData)(vlSelf->top__DOT__csrWrEn))));
        tracep->chgBit(oldp+184,((0x305U == (vlSelf->instr 
                                             >> 0x14U))));
        tracep->chgBit(oldp+185,(((0x305U == (vlSelf->instr 
                                              >> 0x14U)) 
                                  & (IData)(vlSelf->top__DOT__csrWrEn))));
        tracep->chgBit(oldp+186,((0x300U == (vlSelf->instr 
                                             >> 0x14U))));
        tracep->chgBit(oldp+187,(((0x300U == (vlSelf->instr 
                                              >> 0x14U)) 
                                  & (IData)(vlSelf->top__DOT__csrWrEn))));
        tracep->chgBit(oldp+188,((0x342U == (vlSelf->instr 
                                             >> 0x14U))));
        tracep->chgBit(oldp+189,(((0x342U == (vlSelf->instr 
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
