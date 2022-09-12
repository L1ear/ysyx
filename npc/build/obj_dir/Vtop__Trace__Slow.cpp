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
        tracep->declBit(c+155,"clk", false,-1);
        tracep->declBit(c+156,"rst_n", false,-1);
        tracep->declQuad(c+157,"DmemDataO", false,-1, 63,0);
        tracep->declBus(c+159,"instr", false,-1, 31,0);
        tracep->declQuad(c+160,"instrAddr", false,-1, 63,0);
        tracep->declQuad(c+162,"DmemAddr", false,-1, 63,0);
        tracep->declQuad(c+164,"DmemDataI", false,-1, 63,0);
        tracep->declBit(c+166,"MemWr", false,-1);
        tracep->declBus(c+167,"MemOp", false,-1, 2,0);
        tracep->declBus(c+168,"OPcode", false,-1, 6,0);
        tracep->declQuad(c+169,"regA0", false,-1, 63,0);
        tracep->declQuad(c+171,"dnpc", false,-1, 63,0);
        tracep->declBit(c+155,"top clk", false,-1);
        tracep->declBit(c+156,"top rst_n", false,-1);
        tracep->declQuad(c+157,"top DmemDataO", false,-1, 63,0);
        tracep->declBus(c+159,"top instr", false,-1, 31,0);
        tracep->declQuad(c+160,"top instrAddr", false,-1, 63,0);
        tracep->declQuad(c+162,"top DmemAddr", false,-1, 63,0);
        tracep->declQuad(c+164,"top DmemDataI", false,-1, 63,0);
        tracep->declBit(c+166,"top MemWr", false,-1);
        tracep->declBus(c+167,"top MemOp", false,-1, 2,0);
        tracep->declBus(c+168,"top OPcode", false,-1, 6,0);
        tracep->declQuad(c+169,"top regA0", false,-1, 63,0);
        tracep->declQuad(c+171,"top dnpc", false,-1, 63,0);
        tracep->declBit(c+1,"top PCAsrc", false,-1);
        tracep->declBit(c+2,"top PCBsrc", false,-1);
        tracep->declQuad(c+3,"top NextPc", false,-1, 63,0);
        tracep->declQuad(c+80,"top CurPc", false,-1, 63,0);
        tracep->declQuad(c+5,"top rs1_data", false,-1, 63,0);
        tracep->declQuad(c+7,"top rs2_data", false,-1, 63,0);
        tracep->declQuad(c+9,"top imm", false,-1, 63,0);
        tracep->declBus(c+173,"top RdAddr", false,-1, 4,0);
        tracep->declBus(c+174,"top Rs1Addr", false,-1, 4,0);
        tracep->declBus(c+175,"top Rs2Addr", false,-1, 4,0);
        tracep->declBit(c+11,"top RegWrEn", false,-1);
        tracep->declBus(c+12,"top ExtOp", false,-1, 4,0);
        tracep->declBus(c+13,"top ALUctr", false,-1, 4,0);
        tracep->declBus(c+14,"top Src2Sel", false,-1, 1,0);
        tracep->declBit(c+15,"top Src1Sel", false,-1);
        tracep->declBit(c+16,"top RegWrSel", false,-1);
        tracep->declBus(c+17,"top branch", false,-1, 2,0);
        tracep->declBit(c+191,"top dwsel", false,-1);
        tracep->declBit(c+18,"top DivEn", false,-1);
        tracep->declBus(c+19,"top DivSel", false,-1, 2,0);
        tracep->declBit(c+192,"top Div32", false,-1);
        tracep->declBit(c+193,"top sft32", false,-1);
        tracep->declBus(c+176,"top csrIdx", false,-1, 11,0);
        tracep->declBit(c+20,"top csrWrEn", false,-1);
        tracep->declBit(c+21,"top IntSync", false,-1);
        tracep->declBit(c+22,"top mret", false,-1);
        tracep->declBus(c+23,"top csr_op", false,-1, 1,0);
        tracep->declQuad(c+24,"top ALUout", false,-1, 63,0);
        tracep->declBit(c+26,"top less", false,-1);
        tracep->declBit(c+27,"top zero", false,-1);
        tracep->declBit(c+82,"top gIntEn", false,-1);
        tracep->declQuad(c+83,"top csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+85,"top csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+28,"top csrRdData", false,-1, 63,0);
        tracep->declBit(c+30,"top csrUpdata", false,-1);
        tracep->declQuad(c+31,"top mcause_n", false,-1, 63,0);
        tracep->declQuad(c+33,"top mepc_n", false,-1, 63,0);
        tracep->declBit(c+35,"top mstatus_n", false,-1);
        tracep->declBus(c+36,"top iotrap", false,-1, 1,0);
        tracep->declQuad(c+37,"top ALUsrc1", false,-1, 63,0);
        tracep->declQuad(c+39,"top ALUsrc2", false,-1, 63,0);
        tracep->declQuad(c+177,"top RegWrData", false,-1, 63,0);
        tracep->declBit(c+155,"top u_PC clk", false,-1);
        tracep->declBit(c+156,"top u_PC rst_n", false,-1);
        tracep->declQuad(c+3,"top u_PC NextPc", false,-1, 63,0);
        tracep->declQuad(c+80,"top u_PC CurPc", false,-1, 63,0);
        tracep->declBus(c+17,"top u_bcu bcon", false,-1, 2,0);
        tracep->declBit(c+27,"top u_bcu zero", false,-1);
        tracep->declBit(c+26,"top u_bcu less", false,-1);
        tracep->declBit(c+1,"top u_bcu PCAsrc", false,-1);
        tracep->declBit(c+2,"top u_bcu PCBsrc", false,-1);
        tracep->declBus(c+13,"top u_ALU ALUctr", false,-1, 4,0);
        tracep->declQuad(c+37,"top u_ALU src1", false,-1, 63,0);
        tracep->declQuad(c+39,"top u_ALU src2", false,-1, 63,0);
        tracep->declBit(c+18,"top u_ALU DivEn", false,-1);
        tracep->declBus(c+19,"top u_ALU DivSel", false,-1, 2,0);
        tracep->declQuad(c+24,"top u_ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+26,"top u_ALU less", false,-1);
        tracep->declBit(c+27,"top u_ALU zero", false,-1);
        tracep->declQuad(c+41,"top u_ALU ALUout", false,-1, 63,0);
        tracep->declBit(c+43,"top u_ALU cin", false,-1);
        tracep->declQuad(c+44,"top u_ALU src2_cin", false,-1, 63,0);
        tracep->declQuad(c+46,"top u_ALU Adder_o", false,-1, 63,0);
        tracep->declBit(c+48,"top u_ALU u_s_mux", false,-1);
        tracep->declBit(c+48,"top u_ALU sft_a_l", false,-1);
        tracep->declBit(c+49,"top u_ALU sft_l_r", false,-1);
        tracep->declBus(c+50,"top u_ALU out_mux", false,-1, 2,0);
        tracep->declQuad(c+51,"top u_ALU shift", false,-1, 63,0);
        tracep->declBit(c+53,"top u_ALU carry", false,-1);
        tracep->declBit(c+54,"top u_ALU overflow", false,-1);
        tracep->declQuad(c+55,"top u_ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+57,"top u_ALU OR", false,-1, 63,0);
        tracep->declQuad(c+59,"top u_ALU AND", false,-1, 63,0);
        tracep->declQuad(c+194,"top u_ALU DivOut", false,-1, 63,0);
        tracep->declQuad(c+37,"top u_ALU Adder_main src1", false,-1, 63,0);
        tracep->declQuad(c+44,"top u_ALU Adder_main src2", false,-1, 63,0);
        tracep->declBit(c+43,"top u_ALU Adder_main cin", false,-1);
        tracep->declQuad(c+46,"top u_ALU Adder_main Adder_o", false,-1, 63,0);
        tracep->declBit(c+53,"top u_ALU Adder_main carry", false,-1);
        tracep->declBit(c+27,"top u_ALU Adder_main zero", false,-1);
        tracep->declBit(c+54,"top u_ALU Adder_main overflow", false,-1);
        tracep->declBus(c+61,"top u_ALU ALU_Control ALUctr", false,-1, 3,0);
        tracep->declBus(c+50,"top u_ALU ALU_Control out_mux", false,-1, 2,0);
        tracep->declBit(c+48,"top u_ALU ALU_Control sft_a_l", false,-1);
        tracep->declBit(c+49,"top u_ALU ALU_Control sft_l_r", false,-1);
        tracep->declBit(c+43,"top u_ALU ALU_Control add_sub", false,-1);
        tracep->declBit(c+48,"top u_ALU ALU_Control u_s", false,-1);
        tracep->declBit(c+62,"top u_ALU shifter ALUctr", false,-1);
        tracep->declQuad(c+37,"top u_ALU shifter src1", false,-1, 63,0);
        tracep->declBus(c+63,"top u_ALU shifter src2", false,-1, 5,0);
        tracep->declBit(c+49,"top u_ALU shifter sft_l_r", false,-1);
        tracep->declBit(c+48,"top u_ALU shifter sft_a_l", false,-1);
        tracep->declQuad(c+51,"top u_ALU shifter shift", false,-1, 63,0);
        tracep->declQuad(c+64,"top u_ALU shifter shft_src", false,-1, 63,0);
        tracep->declQuad(c+66,"top u_ALU shifter shft_res", false,-1, 63,0);
        tracep->declQuad(c+68,"top u_ALU shifter sr_mask", false,-1, 63,0);
        tracep->declQuad(c+70,"top u_ALU shifter sr_mask_n", false,-1, 63,0);
        tracep->declQuad(c+72,"top u_ALU shifter srl_res", false,-1, 63,0);
        tracep->declQuad(c+74,"top u_ALU shifter sra_res", false,-1, 63,0);
        tracep->declQuad(c+76,"top u_ALU shifter sll_res", false,-1, 63,0);
        tracep->declQuad(c+37,"top u_ALU divider src1", false,-1, 63,0);
        tracep->declQuad(c+39,"top u_ALU divider src2", false,-1, 63,0);
        tracep->declBus(c+19,"top u_ALU divider DivSel", false,-1, 2,0);
        tracep->declQuad(c+194,"top u_ALU divider DivOut", false,-1, 63,0);
        tracep->declBit(c+155,"top u_regfiles clk", false,-1);
        tracep->declBus(c+174,"top u_regfiles rs1_addr_i", false,-1, 4,0);
        tracep->declQuad(c+5,"top u_regfiles rs1_data_o", false,-1, 63,0);
        tracep->declBus(c+175,"top u_regfiles rs2_addr_i", false,-1, 4,0);
        tracep->declQuad(c+7,"top u_regfiles rs2_data_o", false,-1, 63,0);
        tracep->declBus(c+173,"top u_regfiles wr_addr_i", false,-1, 4,0);
        tracep->declQuad(c+177,"top u_regfiles wr_data_i", false,-1, 63,0);
        tracep->declBit(c+11,"top u_regfiles wr_en", false,-1);
        tracep->declQuad(c+169,"top u_regfiles regA0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+87+i*2,"top u_regfiles regfiles", true,(i+0), 63,0);}}
        tracep->declBit(c+155,"top u_IDU clk", false,-1);
        tracep->declBit(c+156,"top u_IDU rst_n", false,-1);
        tracep->declBus(c+159,"top u_IDU instr_i", false,-1, 31,0);
        tracep->declBus(c+173,"top u_IDU Rd_o", false,-1, 4,0);
        tracep->declBus(c+174,"top u_IDU Rs1_o", false,-1, 4,0);
        tracep->declBus(c+175,"top u_IDU Rs2_o", false,-1, 4,0);
        tracep->declBit(c+11,"top u_IDU RegWrEn", false,-1);
        tracep->declBus(c+12,"top u_IDU ExtOp", false,-1, 4,0);
        tracep->declBus(c+13,"top u_IDU ALUctr", false,-1, 4,0);
        tracep->declBus(c+14,"top u_IDU Src2Sel", false,-1, 1,0);
        tracep->declBit(c+15,"top u_IDU Src1Sel", false,-1);
        tracep->declBit(c+18,"top u_IDU DivEn", false,-1);
        tracep->declBus(c+19,"top u_IDU DivSel", false,-1, 2,0);
        tracep->declBus(c+167,"top u_IDU MemOp", false,-1, 2,0);
        tracep->declBit(c+166,"top u_IDU MemWr", false,-1);
        tracep->declBit(c+16,"top u_IDU RegWrSel", false,-1);
        tracep->declBus(c+17,"top u_IDU branch", false,-1, 2,0);
        tracep->declBit(c+20,"top u_IDU csrWrEn", false,-1);
        tracep->declBus(c+176,"top u_IDU csrIdx", false,-1, 11,0);
        tracep->declBus(c+23,"top u_IDU csr_op", false,-1, 1,0);
        tracep->declBit(c+21,"top u_IDU IntSync", false,-1);
        tracep->declBit(c+22,"top u_IDU mret", false,-1);
        tracep->declBus(c+179,"top u_IDU opcode", false,-1, 4,0);
        tracep->declBus(c+180,"top u_IDU fun_3", false,-1, 2,0);
        tracep->declBus(c+181,"top u_IDU fun_7", false,-1, 6,0);
        tracep->declBus(c+182,"top u_imm_exp instr_imm_i", false,-1, 31,7);
        tracep->declBus(c+12,"top u_imm_exp exp_op_i", false,-1, 4,0);
        tracep->declQuad(c+9,"top u_imm_exp imm_o", false,-1, 63,0);
        tracep->declBit(c+21,"top u_tcu IntSync", false,-1);
        tracep->declBit(c+196,"top u_tcu IntTime", false,-1);
        tracep->declBit(c+196,"top u_tcu IntSoft", false,-1);
        tracep->declBit(c+22,"top u_tcu mret", false,-1);
        tracep->declQuad(c+80,"top u_tcu currPC", false,-1, 63,0);
        tracep->declBit(c+82,"top u_tcu gIntEn", false,-1);
        tracep->declBit(c+30,"top u_tcu csrUpdata", false,-1);
        tracep->declQuad(c+31,"top u_tcu mcause_n", false,-1, 63,0);
        tracep->declQuad(c+33,"top u_tcu mepc_n", false,-1, 63,0);
        tracep->declBit(c+35,"top u_tcu mstatus_n", false,-1);
        tracep->declBus(c+36,"top u_tcu iotrap", false,-1, 1,0);
        tracep->declBit(c+155,"top u_csr_reg clk", false,-1);
        tracep->declBit(c+156,"top u_csr_reg rst_n", false,-1);
        tracep->declBus(c+176,"top u_csr_reg csrIdx", false,-1, 11,0);
        tracep->declBit(c+20,"top u_csr_reg csrWrEn", false,-1);
        tracep->declQuad(c+28,"top u_csr_reg csrRdData", false,-1, 63,0);
        tracep->declQuad(c+5,"top u_csr_reg rs1", false,-1, 63,0);
        tracep->declBus(c+23,"top u_csr_reg csr_op", false,-1, 1,0);
        tracep->declQuad(c+31,"top u_csr_reg mcause_n", false,-1, 63,0);
        tracep->declQuad(c+33,"top u_csr_reg mepc_n", false,-1, 63,0);
        tracep->declBit(c+35,"top u_csr_reg mstatus_n", false,-1);
        tracep->declBit(c+30,"top u_csr_reg csrUpdata", false,-1);
        tracep->declQuad(c+83,"top u_csr_reg csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+85,"top u_csr_reg csr_mepc", false,-1, 63,0);
        tracep->declBit(c+82,"top u_csr_reg gIntEn", false,-1);
        tracep->declQuad(c+78,"top u_csr_reg csrWrData", false,-1, 63,0);
        tracep->declQuad(c+85,"top u_csr_reg mepc", false,-1, 63,0);
        tracep->declBit(c+183,"top u_csr_reg sel_mepc", false,-1);
        tracep->declBit(c+184,"top u_csr_reg wr_mepc", false,-1);
        tracep->declQuad(c+83,"top u_csr_reg mtvec", false,-1, 63,0);
        tracep->declBit(c+185,"top u_csr_reg sel_mtvec", false,-1);
        tracep->declBit(c+186,"top u_csr_reg wr_mtvec", false,-1);
        tracep->declQuad(c+151,"top u_csr_reg mstatus", false,-1, 63,0);
        tracep->declBit(c+187,"top u_csr_reg sel_mstatus", false,-1);
        tracep->declBit(c+188,"top u_csr_reg wr_mstatus", false,-1);
        tracep->declQuad(c+153,"top u_csr_reg mcause", false,-1, 63,0);
        tracep->declBit(c+189,"top u_csr_reg sel_mcause", false,-1);
        tracep->declBit(c+190,"top u_csr_reg wr_mcause", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp22;
    VlWide<3>/*95:0*/ __Vtemp23;
    VlWide<3>/*95:0*/ __Vtemp24;
    VlWide<3>/*95:0*/ __Vtemp25;
    VlWide<3>/*95:0*/ __Vtemp26;
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
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__ALUctr),5);
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__Src2Sel),2);
        tracep->fullBit(oldp+15,(vlSelf->top__DOT__Src1Sel));
        tracep->fullBit(oldp+16,(vlSelf->top__DOT__RegWrSel));
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__branch),3);
        tracep->fullBit(oldp+18,(vlSelf->top__DOT__DivEn));
        tracep->fullCData(oldp+19,(vlSelf->top__DOT__DivSel),3);
        tracep->fullBit(oldp+20,(vlSelf->top__DOT__csrWrEn));
        tracep->fullBit(oldp+21,(vlSelf->top__DOT__IntSync));
        tracep->fullBit(oldp+22,(vlSelf->top__DOT__mret));
        tracep->fullCData(oldp+23,(vlSelf->top__DOT__csr_op),2);
        tracep->fullQData(oldp+24,(vlSelf->top__DOT__ALUout),64);
        tracep->fullBit(oldp+26,(vlSelf->top__DOT__less));
        tracep->fullBit(oldp+27,(vlSelf->top__DOT__zero));
        tracep->fullQData(oldp+28,(vlSelf->top__DOT__csrRdData),64);
        tracep->fullBit(oldp+30,(vlSelf->top__DOT__csrUpdata));
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__mcause_n),64);
        tracep->fullQData(oldp+33,(vlSelf->top__DOT__mepc_n),64);
        tracep->fullBit(oldp+35,(vlSelf->top__DOT__mstatus_n));
        tracep->fullCData(oldp+36,(vlSelf->top__DOT__iotrap),2);
        tracep->fullQData(oldp+37,(vlSelf->top__DOT__ALUsrc1),64);
        tracep->fullQData(oldp+39,(vlSelf->top__DOT__ALUsrc2),64);
        tracep->fullQData(oldp+41,(vlSelf->top__DOT__u_ALU__DOT__ALUout),64);
        tracep->fullBit(oldp+43,(vlSelf->top__DOT__u_ALU__DOT__cin));
        tracep->fullQData(oldp+44,(vlSelf->top__DOT__u_ALU__DOT__src2_cin),64);
        tracep->fullQData(oldp+46,(vlSelf->top__DOT__u_ALU__DOT__Adder_o),64);
        tracep->fullBit(oldp+48,((1U & ((IData)(vlSelf->top__DOT__ALUctr) 
                                        >> 3U))));
        tracep->fullBit(oldp+49,((1U & ((IData)(vlSelf->top__DOT__ALUctr) 
                                        >> 2U))));
        tracep->fullCData(oldp+50,((7U & (IData)(vlSelf->top__DOT__ALUctr))),3);
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__u_ALU__DOT__shift),64);
        VL_EXTEND_WQ(65,64, __Vtemp22, vlSelf->top__DOT__ALUsrc1);
        VL_EXTEND_WQ(65,64, __Vtemp23, vlSelf->top__DOT__u_ALU__DOT__src2_cin);
        VL_ADD_W(3, __Vtemp24, __Vtemp22, __Vtemp23);
        VL_EXTEND_WI(65,1, __Vtemp25, (IData)(vlSelf->top__DOT__u_ALU__DOT__cin));
        VL_ADD_W(3, __Vtemp26, __Vtemp24, __Vtemp25);
        tracep->fullBit(oldp+53,((1U & __Vtemp26[2U])));
        tracep->fullBit(oldp+54,(vlSelf->top__DOT__u_ALU__DOT__overflow));
        tracep->fullQData(oldp+55,((vlSelf->top__DOT__ALUsrc1 
                                    ^ vlSelf->top__DOT__ALUsrc2)),64);
        tracep->fullQData(oldp+57,((vlSelf->top__DOT__ALUsrc1 
                                    | vlSelf->top__DOT__ALUsrc2)),64);
        tracep->fullQData(oldp+59,((vlSelf->top__DOT__ALUsrc1 
                                    & vlSelf->top__DOT__ALUsrc2)),64);
        tracep->fullCData(oldp+61,((0xfU & (IData)(vlSelf->top__DOT__ALUctr))),4);
        tracep->fullBit(oldp+62,((1U & ((IData)(vlSelf->top__DOT__ALUctr) 
                                        >> 4U))));
        tracep->fullCData(oldp+63,((0x3fU & (IData)(vlSelf->top__DOT__ALUsrc2))),6);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_src),64);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res),64);
        tracep->fullQData(oldp+68,((0xffffffffffffffffULL 
                                    >> (0x3fU & (IData)(vlSelf->top__DOT__ALUsrc2)))),64);
        tracep->fullQData(oldp+70,((~ (0xffffffffffffffffULL 
                                       >> (0x3fU & (IData)(vlSelf->top__DOT__ALUsrc2))))),64);
        tracep->fullQData(oldp+72,(((0x10U & (IData)(vlSelf->top__DOT__ALUctr))
                                     ? (vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res 
                                        & (QData)((IData)(
                                                          ((0xffffffffffffffffULL 
                                                            >> 
                                                            (0x3fU 
                                                             & (IData)(vlSelf->top__DOT__ALUsrc2))) 
                                                           >> 0x20U))))
                                     : vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__shft_res)),64);
        tracep->fullQData(oldp+74,(((0x10U & (IData)(vlSelf->top__DOT__ALUctr))
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
                                           & (~ (0xffffffffffffffffULL 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->top__DOT__ALUsrc2)))))))),64);
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__u_ALU__DOT__shifter__DOT__sll_res),64);
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__u_csr_reg__DOT__csrWrData),64);
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__CurPc),64);
        tracep->fullBit(oldp+82,((1U & (IData)((vlSelf->top__DOT__u_csr_reg__DOT__mstatus 
                                                >> 3U)))));
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__u_csr_reg__DOT__mtvec),64);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__u_csr_reg__DOT__mepc),64);
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[0]),64);
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[1]),64);
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[2]),64);
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[3]),64);
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[4]),64);
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[5]),64);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[6]),64);
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[7]),64);
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[8]),64);
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[9]),64);
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[10]),64);
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[11]),64);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[12]),64);
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[13]),64);
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[14]),64);
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[15]),64);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[16]),64);
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[17]),64);
        tracep->fullQData(oldp+123,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[18]),64);
        tracep->fullQData(oldp+125,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[19]),64);
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[20]),64);
        tracep->fullQData(oldp+129,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[21]),64);
        tracep->fullQData(oldp+131,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[22]),64);
        tracep->fullQData(oldp+133,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[23]),64);
        tracep->fullQData(oldp+135,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[24]),64);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[25]),64);
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[26]),64);
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[27]),64);
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[28]),64);
        tracep->fullQData(oldp+145,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[29]),64);
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[30]),64);
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__u_regfiles__DOT__regfiles[31]),64);
        tracep->fullQData(oldp+151,(vlSelf->top__DOT__u_csr_reg__DOT__mstatus),64);
        tracep->fullQData(oldp+153,(vlSelf->top__DOT__u_csr_reg__DOT__mcause),64);
        tracep->fullBit(oldp+155,(vlSelf->clk));
        tracep->fullBit(oldp+156,(vlSelf->rst_n));
        tracep->fullQData(oldp+157,(vlSelf->DmemDataO),64);
        tracep->fullIData(oldp+159,(vlSelf->instr),32);
        tracep->fullQData(oldp+160,(vlSelf->instrAddr),64);
        tracep->fullQData(oldp+162,(vlSelf->DmemAddr),64);
        tracep->fullQData(oldp+164,(vlSelf->DmemDataI),64);
        tracep->fullBit(oldp+166,(vlSelf->MemWr));
        tracep->fullCData(oldp+167,(vlSelf->MemOp),3);
        tracep->fullCData(oldp+168,(vlSelf->OPcode),7);
        tracep->fullQData(oldp+169,(vlSelf->regA0),64);
        tracep->fullQData(oldp+171,(vlSelf->dnpc),64);
        tracep->fullCData(oldp+173,((0x1fU & (vlSelf->instr 
                                              >> 7U))),5);
        tracep->fullCData(oldp+174,((0x1fU & (vlSelf->instr 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+175,((0x1fU & (vlSelf->instr 
                                              >> 0x14U))),5);
        tracep->fullSData(oldp+176,((vlSelf->instr 
                                     >> 0x14U)),12);
        tracep->fullQData(oldp+177,(((IData)(vlSelf->top__DOT__RegWrSel)
                                      ? vlSelf->DmemDataO
                                      : vlSelf->top__DOT__ALUout)),64);
        tracep->fullCData(oldp+179,((0x1fU & (vlSelf->instr 
                                              >> 2U))),5);
        tracep->fullCData(oldp+180,((7U & (vlSelf->instr 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+181,((vlSelf->instr 
                                     >> 0x19U)),7);
        tracep->fullIData(oldp+182,((vlSelf->instr 
                                     >> 7U)),25);
        tracep->fullBit(oldp+183,((0x341U == (vlSelf->instr 
                                              >> 0x14U))));
        tracep->fullBit(oldp+184,(((0x341U == (vlSelf->instr 
                                               >> 0x14U)) 
                                   & (IData)(vlSelf->top__DOT__csrWrEn))));
        tracep->fullBit(oldp+185,((0x305U == (vlSelf->instr 
                                              >> 0x14U))));
        tracep->fullBit(oldp+186,(((0x305U == (vlSelf->instr 
                                               >> 0x14U)) 
                                   & (IData)(vlSelf->top__DOT__csrWrEn))));
        tracep->fullBit(oldp+187,((0x300U == (vlSelf->instr 
                                              >> 0x14U))));
        tracep->fullBit(oldp+188,(((0x300U == (vlSelf->instr 
                                               >> 0x14U)) 
                                   & (IData)(vlSelf->top__DOT__csrWrEn))));
        tracep->fullBit(oldp+189,((0x342U == (vlSelf->instr 
                                              >> 0x14U))));
        tracep->fullBit(oldp+190,(((0x342U == (vlSelf->instr 
                                               >> 0x14U)) 
                                   & (IData)(vlSelf->top__DOT__csrWrEn))));
        tracep->fullBit(oldp+191,(vlSelf->top__DOT__dwsel));
        tracep->fullBit(oldp+192,(vlSelf->top__DOT__Div32));
        tracep->fullBit(oldp+193,(vlSelf->top__DOT__sft32));
        tracep->fullQData(oldp+194,(0ULL),64);
        tracep->fullBit(oldp+196,(0U));
    }
}
