// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+148,"clk", false,-1);
        tracep->declBit(c+149,"rst_n", false,-1);
        tracep->declQuad(c+150,"DmemDataO", false,-1, 63,0);
        tracep->declBus(c+152,"instr", false,-1, 31,0);
        tracep->declQuad(c+153,"instrAddr", false,-1, 63,0);
        tracep->declQuad(c+155,"DmemAddr", false,-1, 63,0);
        tracep->declQuad(c+157,"DmemDataI", false,-1, 63,0);
        tracep->declBit(c+159,"MemWr", false,-1);
        tracep->declBus(c+160,"MemOp", false,-1, 2,0);
        tracep->declBus(c+161,"OPcode", false,-1, 6,0);
        tracep->declQuad(c+162,"regA0", false,-1, 63,0);
        tracep->declQuad(c+164,"dnpc", false,-1, 63,0);
        tracep->declBit(c+148,"top clk", false,-1);
        tracep->declBit(c+149,"top rst_n", false,-1);
        tracep->declQuad(c+150,"top DmemDataO", false,-1, 63,0);
        tracep->declBus(c+152,"top instr", false,-1, 31,0);
        tracep->declQuad(c+153,"top instrAddr", false,-1, 63,0);
        tracep->declQuad(c+155,"top DmemAddr", false,-1, 63,0);
        tracep->declQuad(c+157,"top DmemDataI", false,-1, 63,0);
        tracep->declBit(c+159,"top MemWr", false,-1);
        tracep->declBus(c+160,"top MemOp", false,-1, 2,0);
        tracep->declBus(c+161,"top OPcode", false,-1, 6,0);
        tracep->declQuad(c+162,"top regA0", false,-1, 63,0);
        tracep->declQuad(c+164,"top dnpc", false,-1, 63,0);
        tracep->declBit(c+1,"top PCAsrc", false,-1);
        tracep->declBit(c+2,"top PCBsrc", false,-1);
        tracep->declQuad(c+3,"top NextPc", false,-1, 63,0);
        tracep->declQuad(c+73,"top CurPc", false,-1, 63,0);
        tracep->declQuad(c+5,"top rs1_data", false,-1, 63,0);
        tracep->declQuad(c+7,"top rs2_data", false,-1, 63,0);
        tracep->declQuad(c+9,"top imm", false,-1, 63,0);
        tracep->declBus(c+166,"top RdAddr", false,-1, 4,0);
        tracep->declBus(c+167,"top Rs1Addr", false,-1, 4,0);
        tracep->declBus(c+168,"top Rs2Addr", false,-1, 4,0);
        tracep->declBit(c+11,"top RegWrEn", false,-1);
        tracep->declBus(c+12,"top ExtOp", false,-1, 4,0);
        tracep->declBus(c+13,"top ALUctr", false,-1, 3,0);
        tracep->declBus(c+14,"top Src2Sel", false,-1, 1,0);
        tracep->declBit(c+15,"top Src1Sel", false,-1);
        tracep->declBit(c+16,"top RegWrSel", false,-1);
        tracep->declBus(c+17,"top branch", false,-1, 2,0);
        tracep->declBit(c+18,"top dwsel", false,-1);
        tracep->declBit(c+19,"top DivEn", false,-1);
        tracep->declBus(c+20,"top DivSel", false,-1, 2,0);
        tracep->declBit(c+21,"top Div32", false,-1);
        tracep->declBit(c+22,"top sft32", false,-1);
        tracep->declBus(c+169,"top csrIdx", false,-1, 11,0);
        tracep->declBit(c+23,"top csrWrEn", false,-1);
        tracep->declBit(c+24,"top IntSync", false,-1);
        tracep->declBit(c+25,"top mret", false,-1);
        tracep->declBus(c+26,"top csr_op", false,-1, 1,0);
        tracep->declQuad(c+27,"top ALUout", false,-1, 63,0);
        tracep->declBit(c+29,"top less", false,-1);
        tracep->declBit(c+30,"top zero", false,-1);
        tracep->declBit(c+75,"top gIntEn", false,-1);
        tracep->declQuad(c+76,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+78,"top csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+31,"top csrRdData", false,-1, 63,0);
        tracep->declBit(c+33,"top csrUpdata", false,-1);
        tracep->declQuad(c+34,"top mcause_n", false,-1, 63,0);
        tracep->declQuad(c+36,"top mepc_n", false,-1, 63,0);
        tracep->declBit(c+38,"top mstatus_n", false,-1);
        tracep->declBus(c+39,"top iotrap", false,-1, 1,0);
        tracep->declQuad(c+40,"top ALUsrc1", false,-1, 63,0);
        tracep->declQuad(c+42,"top ALUsrc2", false,-1, 63,0);
        tracep->declQuad(c+170,"top RegWrData", false,-1, 63,0);
        tracep->declQuad(c+44,"top AluTmp", false,-1, 63,0);
        tracep->declBit(c+148,"top u_PC clk", false,-1);
        tracep->declBit(c+149,"top u_PC rst_n", false,-1);
        tracep->declQuad(c+3,"top u_PC NextPc", false,-1, 63,0);
        tracep->declQuad(c+73,"top u_PC CurPc", false,-1, 63,0);
        tracep->declBus(c+17,"top u_bcu bcon", false,-1, 2,0);
        tracep->declBit(c+30,"top u_bcu zero", false,-1);
        tracep->declBit(c+29,"top u_bcu less", false,-1);
        tracep->declBit(c+1,"top u_bcu PCAsrc", false,-1);
        tracep->declBit(c+2,"top u_bcu PCBsrc", false,-1);
        tracep->declBus(c+13,"top u_ALU ALUctr", false,-1, 3,0);
        tracep->declQuad(c+40,"top u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+42,"top u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+19,"top u_ALU DivEn", false,-1);
        tracep->declBus(c+20,"top u_ALU DivSel", false,-1, 2,0);
        tracep->declBit(c+21,"top u_ALU Div32", false,-1);
        tracep->declBit(c+22,"top u_ALU sft32", false,-1);
        tracep->declQuad(c+27,"top u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+29,"top u_ALU less", false,-1);
        tracep->declBit(c+30,"top u_ALU zero", false,-1);
        tracep->declBit(c+46,"top u_ALU cin", false,-1);
        tracep->declQuad(c+47,"top u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+49,"top u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+51,"top u_ALU u_s_mux", false,-1);
        tracep->declBit(c+51,"top u_ALU sft_a_l", false,-1);
        tracep->declBit(c+52,"top u_ALU sft_l_r", false,-1);
        tracep->declBus(c+53,"top u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+54,"top u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+56,"top u_ALU carry", false,-1);
        tracep->declBit(c+57,"top u_ALU overflow", false,-1);
        tracep->declQuad(c+58,"top u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+60,"top u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+62,"top u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+64,"top u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+40,"top u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+47,"top u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+46,"top u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+49,"top u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+56,"top u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+30,"top u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+57,"top u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+13,"top u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+53,"top u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+51,"top u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+52,"top u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+46,"top u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+51,"top u_ALU ALU_Control u_s", false,-1);
        tracep->declQuad(c+40,"top u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+66,"top u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+52,"top u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+51,"top u_ALU shifter sft_a_l", false,-1);
        tracep->declBit(c+22,"top u_ALU shifter sft32", false,-1);
        tracep->declQuad(c+54,"top u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+54,"top u_ALU shifter temp", false,-1, 63,0);
        tracep->declQuad(c+40,"top u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+42,"top u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+20,"top u_ALU divider DivSel", false,-1, 2,0);
        tracep->declBit(c+21,"top u_ALU divider Div32", false,-1);
        tracep->declQuad(c+64,"top u_ALU divider DivOut", false,-1, 63,0);
        tracep->declArray(c+67,"top u_ALU divider tmp", false,-1, 127,0);
        tracep->declBit(c+148,"top u_regfiles clk", false,-1);
        tracep->declBus(c+167,"top u_regfiles rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+5,"top u_regfiles rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+168,"top u_regfiles rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+7,"top u_regfiles rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+166,"top u_regfiles wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+170,"top u_regfiles wr_data_i", false,-1, 63,0);
        tracep->declBit(c+11,"top u_regfiles wr_en", false,-1);
        tracep->declQuad(c+162,"top u_regfiles regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+80+i*2,"top u_regfiles regfiles", true,(i+0), 63,0);}}
        tracep->declBit(c+148,"top u_IDU clk", false,-1);
        tracep->declBit(c+149,"top u_IDU rst_n", false,-1);
        tracep->declBus(c+152,"top u_IDU instr_i", false,-1, 31,0);
        tracep->declBus(c+166,"top u_IDU Rd_o", false,-1, 4,0);
        tracep->declBus(c+167,"top u_IDU Rs1_o", false,-1, 4,0);
        tracep->declBus(c+168,"top u_IDU Rs2_o", false,-1, 4,0);
        tracep->declBit(c+11,"top u_IDU RegWrEn", false,-1);
        tracep->declBus(c+12,"top u_IDU ExtOp", false,-1, 4,0);
        tracep->declBus(c+13,"top u_IDU ALUctr", false,-1, 3,0);
        tracep->declBus(c+14,"top u_IDU Src2Sel", false,-1, 1,0);
        tracep->declBit(c+15,"top u_IDU Src1Sel", false,-1);
        tracep->declBit(c+18,"top u_IDU dwsel", false,-1);
        tracep->declBit(c+22,"top u_IDU sft32", false,-1);
        tracep->declBit(c+19,"top u_IDU DivEn", false,-1);
        tracep->declBus(c+20,"top u_IDU DivSel", false,-1, 2,0);
        tracep->declBit(c+21,"top u_IDU Div32", false,-1);
        tracep->declBus(c+160,"top u_IDU MemOp", false,-1, 2,0);
        tracep->declBit(c+159,"top u_IDU MemWr", false,-1);
        tracep->declBit(c+16,"top u_IDU RegWrSel", false,-1);
        tracep->declBus(c+17,"top u_IDU branch", false,-1, 2,0);
        tracep->declBit(c+23,"top u_IDU csrWrEn", false,-1);
        tracep->declBus(c+169,"top u_IDU csrIdx", false,-1, 11,0);
        tracep->declBus(c+26,"top u_IDU csr_op", false,-1, 1,0);
        tracep->declBit(c+24,"top u_IDU IntSync", false,-1);
        tracep->declBit(c+25,"top u_IDU mret", false,-1);
        tracep->declBus(c+172,"top u_IDU opcode", false,-1, 4,0);
        tracep->declBus(c+173,"top u_IDU fun_3", false,-1, 2,0);
        tracep->declBus(c+174,"top u_IDU fun_7", false,-1, 6,0);
        tracep->declBus(c+175,"top u_imm_exp instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+12,"top u_imm_exp exp_op_i", false,-1, 4,0);
        tracep->declQuad(c+9,"top u_imm_exp imm_o", false,-1, 63,0);
        tracep->declBit(c+24,"top u_tcu IntSync", false,-1);
        tracep->declBit(c+184,"top u_tcu IntTime", false,-1);
        tracep->declBit(c+184,"top u_tcu IntSoft", false,-1);
        tracep->declBit(c+25,"top u_tcu mret", false,-1);
        tracep->declQuad(c+73,"top u_tcu currPC", false,-1, 63,0);
        tracep->declBit(c+75,"top u_tcu gIntEn", false,-1);
        tracep->declBit(c+33,"top u_tcu csrUpdata", false,-1);
        tracep->declQuad(c+34,"top u_tcu mcause_n", false,-1, 63,0);
        tracep->declQuad(c+36,"top u_tcu mepc_n", false,-1, 63,0);
        tracep->declBit(c+38,"top u_tcu mstatus_n", false,-1);
        tracep->declBus(c+39,"top u_tcu iotrap", false,-1, 1,0);
        tracep->declBit(c+148,"top u_csr_reg clk", false,-1);
        tracep->declBit(c+149,"top u_csr_reg rst_n", false,-1);
        tracep->declBus(c+169,"top u_csr_reg csrIdx", false,-1, 11,0);
        tracep->declBit(c+23,"top u_csr_reg csrWrEn", false,-1);
        tracep->declQuad(c+31,"top u_csr_reg csrRdData", false,-1, 63,0);
        tracep->declQuad(c+5,"top u_csr_reg rs1", false,-1, 63,0);
        tracep->declBus(c+26,"top u_csr_reg csr_op", false,-1, 1,0);
        tracep->declQuad(c+34,"top u_csr_reg mcause_n", false,-1, 63,0);
        tracep->declQuad(c+36,"top u_csr_reg mepc_n", false,-1, 63,0);
        tracep->declBit(c+38,"top u_csr_reg mstatus_n", false,-1);
        tracep->declBit(c+33,"top u_csr_reg csrUpdata", false,-1);
        tracep->declQuad(c+76,"top u_csr_reg csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+78,"top u_csr_reg csr_mepc", false,-1, 63,0);
        tracep->declBit(c+75,"top u_csr_reg gIntEn", false,-1);
        tracep->declQuad(c+71,"top u_csr_reg csrWrData", false,-1, 63,0);
        tracep->declQuad(c+78,"top u_csr_reg mepc", false,-1, 63,0);
        tracep->declBit(c+176,"top u_csr_reg sel_mepc", false,-1);
        tracep->declBit(c+177,"top u_csr_reg wr_mepc", false,-1);
        tracep->declQuad(c+76,"top u_csr_reg mtvec", false,-1, 63,0);
        tracep->declBit(c+178,"top u_csr_reg sel_mtvec", false,-1);
        tracep->declBit(c+179,"top u_csr_reg wr_mtvec", false,-1);
        tracep->declQuad(c+144,"top u_csr_reg mstatus", false,-1, 63,0);
        tracep->declBit(c+180,"top u_csr_reg sel_mstatus", false,-1);
        tracep->declBit(c+181,"top u_csr_reg wr_mstatus", false,-1);
        tracep->declQuad(c+146,"top u_csr_reg mcause", false,-1, 63,0);
        tracep->declBit(c+182,"top u_csr_reg sel_mcause", false,-1);
        tracep->declBit(c+183,"top u_csr_reg wr_mcause", false,-1);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp72;
    VlWide<3>/*95:0*/ __Vtemp73;
    VlWide<3>/*95:0*/ __Vtemp74;
    VlWide<3>/*95:0*/ __Vtemp75;
    VlWide<3>/*95:0*/ __Vtemp76;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->top__DOT__PCAsrc));
        tracep->fullBit(oldp+2,(vlSelf->top__DOT__PCBsrc));
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__NextPc),64);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__rs1_data),64);
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__rs2_data),64);
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__imm),64);
        tracep->fullBit(oldp+11,(vlSelf->top__DOT__RegWrEn));
        tracep->fullCData(oldp+12,(vlSelf->top__DOT__ExtOp),5);
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__ALUctr),4);
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__Src2Sel),2);
        tracep->fullBit(oldp+15,(vlSelf->top__DOT__Src1Sel));
        tracep->fullBit(oldp+16,(vlSelf->top__DOT__RegWrSel));
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__branch),3);
        tracep->fullBit(oldp+18,(vlSelf->top__DOT__dwsel));
        tracep->fullBit(oldp+19,(vlSelf->top__DOT__DivEn));
        tracep->fullCData(oldp+20,(vlSelf->top__DOT__DivSel),3);
        tracep->fullBit(oldp+21,(vlSelf->top__DOT__Div32));
        tracep->fullBit(oldp+22,(vlSelf->top__DOT__sft32));
        tracep->fullBit(oldp+23,(vlSelf->top__DOT__csrWrEn));
        tracep->fullBit(oldp+24,(vlSelf->top__DOT__IntSync));
        tracep->fullBit(oldp+25,(vlSelf->top__DOT__mret));
        tracep->fullCData(oldp+26,(vlSelf->top__DOT__csr_op),2);
        tracep->fullQData(oldp+27,(vlSelf->top__DOT__ALUout),64);
        tracep->fullBit(oldp+29,(vlSelf->top__DOT__less));
        tracep->fullBit(oldp+30,(vlSelf->top__DOT__zero));
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__csrRdData),64);
        tracep->fullBit(oldp+33,(vlSelf->top__DOT__csrUpdata));
        tracep->fullQData(oldp+34,(vlSelf->top__DOT__mcause_n),64);
        tracep->fullQData(oldp+36,(vlSelf->top__DOT__mepc_n),64);
        tracep->fullBit(oldp+38,(vlSelf->top__DOT__mstatus_n));
        tracep->fullCData(oldp+39,(vlSelf->top__DOT__iotrap),2);
        tracep->fullQData(oldp+40,(vlSelf->top__DOT__ALUsrc1),64);
        tracep->fullQData(oldp+42,(vlSelf->top__DOT__ALUsrc2),64);
        tracep->fullQData(oldp+44,(((IData)(vlSelf->top__DOT__dwsel)
                                     ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ALUout 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__ALUout)))
                                     : vlSelf->top__DOT__ALUout)),64);
        tracep->fullBit(oldp+46,(vlSelf->top__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+51,((1U & ((IData)(vlSelf->top__DOT__ALUctr) 
                                        >> 3U))));
        tracep->fullBit(oldp+52,((1U & ((IData)(vlSelf->top__DOT__ALUctr) 
                                        >> 2U))));
        tracep->fullCData(oldp+53,((7U & (IData)(vlSelf->top__DOT__ALUctr))),3);
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__temp),64);
        VL_EXTEND_WQ(65,64, __Vtemp72, vlSelf->top__DOT__ALUsrc1);
        VL_EXTEND_WQ(65,64, __Vtemp73, vlSelf->top__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp74, __Vtemp72, __Vtemp73);
        VL_EXTEND_WI(65,1, __Vtemp75, (IData)(vlSelf->top__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp76, __Vtemp74, __Vtemp75);
        tracep->fullBit(oldp+56,((1U & __Vtemp76[2U])));
        tracep->fullBit(oldp+57,(vlSelf->top__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+58,((vlSelf->top__DOT__ALUsrc1 
                                    ^ vlSelf->top__DOT__ALUsrc2)),64);
        tracep->fullQData(oldp+60,((vlSelf->top__DOT__ALUsrc1 
                                    | vlSelf->top__DOT__ALUsrc2)),64);
        tracep->fullQData(oldp+62,((vlSelf->top__DOT__ALUsrc1 
                                    & vlSelf->top__DOT__ALUsrc2)),64);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__u_ALU__DOT__DivOut),64);
        tracep->fullCData(oldp+66,((0x3fU & (IData)(vlSelf->top__DOT__ALUsrc2))),6);
        tracep->fullWData(oldp+67,(vlSelf->top__DOT__u_ALU__DOT__divider__DOT__tmp),128);
        tracep->fullQData(oldp+71,(vlSelf->top__DOT__u_csr_reg__DOT__csrWrData),64);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__CurPc),64);
        tracep->fullBit(oldp+75,((1U & (IData)((vlSelf->top__DOT__u_csr_reg__DOT__mstatus 
                                                >> 3U)))));
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__u_csr_reg__DOT__mtvec),64);
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__u_csr_reg__DOT__mepc),64);
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+112,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+116,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+120,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+122,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+124,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+126,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+128,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+130,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+132,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+134,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+136,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+138,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+142,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[31]),64);
        tracep->fullQData(oldp+144,(vlSelf->top__DOT__u_csr_reg__DOT__mstatus),64);
        tracep->fullQData(oldp+146,(vlSelf->top__DOT__u_csr_reg__DOT__mcause),64);
        tracep->fullBit(oldp+148,(vlSelf->clk));
        tracep->fullBit(oldp+149,(vlSelf->rst_n));
        tracep->fullQData(oldp+150,(vlSelf->DmemDataO),64);
        tracep->fullIData(oldp+152,(vlSelf->instr),32);
        tracep->fullQData(oldp+153,(vlSelf->instrAddr),64);
        tracep->fullQData(oldp+155,(vlSelf->DmemAddr),64);
        tracep->fullQData(oldp+157,(vlSelf->DmemDataI),64);
        tracep->fullBit(oldp+159,(vlSelf->MemWr));
        tracep->fullCData(oldp+160,(vlSelf->MemOp),3);
        tracep->fullCData(oldp+161,(vlSelf->OPcode),7);
        tracep->fullQData(oldp+162,(vlSelf->regA0),64);
        tracep->fullQData(oldp+164,(vlSelf->dnpc),64);
        tracep->fullCData(oldp+166,((0x1fU & (vlSelf->instr 
                                              >> 7U))),5);
        tracep->fullCData(oldp+167,((0x1fU & (vlSelf->instr 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+168,((0x1fU & (vlSelf->instr 
                                              >> 0x14U))),5);
        tracep->fullSData(oldp+169,((vlSelf->instr 
                                     >> 0x14U)),12);
        tracep->fullQData(oldp+170,(((IData)(vlSelf->top__DOT__RegWrSel)
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
        tracep->fullCData(oldp+172,((0x1fU & (vlSelf->instr 
                                              >> 2U))),5);
        tracep->fullCData(oldp+173,((7U & (vlSelf->instr 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+174,((vlSelf->instr 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+175,((vlSelf->instr 
                                     >> 7U)),25);
        tracep->fullBit(oldp+176,((0x341U == (vlSelf->instr 
                                              >> 0x14U))));
        tracep->fullBit(oldp+177,(((0x341U == (vlSelf->instr 
                                               >> 0x14U)) 
                                   & (IData)(vlSelf->top__DOT__csrWrEn))));
        tracep->fullBit(oldp+178,((0x305U == (vlSelf->instr 
                                              >> 0x14U))));
        tracep->fullBit(oldp+179,(((0x305U == (vlSelf->instr 
                                               >> 0x14U)) 
                                   & (IData)(vlSelf->top__DOT__csrWrEn))));
        tracep->fullBit(oldp+180,((0x300U == (vlSelf->instr 
                                              >> 0x14U))));
        tracep->fullBit(oldp+181,(((0x300U == (vlSelf->instr 
                                               >> 0x14U)) 
                                   & (IData)(vlSelf->top__DOT__csrWrEn))));
        tracep->fullBit(oldp+182,((0x342U == (vlSelf->instr 
                                              >> 0x14U))));
        tracep->fullBit(oldp+183,(((0x342U == (vlSelf->instr 
                                               >> 0x14U)) 
                                   & (IData)(vlSelf->top__DOT__csrWrEn))));
        tracep->fullBit(oldp+184,(0U));
    }
}
