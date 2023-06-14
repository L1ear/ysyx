#include <isa.h>

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  cpu.mepc = epc;
  cpu.mcause = NO;
  Log("exception,mcause: %016lx, epc %016lx\n",NO, epc);
  return cpu.mtvec;
}
// core   0: exception trap_illegal_instruction, epc 0x00000000800002e4
// core   0:           tval 0x0000000030002673

word_t isa_query_intr() {
  return INTR_EMPTY;
}
