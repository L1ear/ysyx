#include <isa.h>

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  cpu.mepc = epc;
  cpu.mcause = NO;
  //{mstatus[`XLEN-1:13],2'b11,mstatus[10:8],mstatus[3],mstatus[6:4],1'b0,mstatus[2:0]}
  cpu.mcause = BITS(cpu.mcause,63,13)<<13|0b00<<11|BITS(cpu.mcause,10,8)<<8|BITS(cpu.mcause,3,3)<<7|BITS(cpu.mcause,6,4)<<4|BITS(cpu.mcause,2,0);
  // Log("ecall has been called,mcause: %016lx\n",NO);
  return cpu.mtvec;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
