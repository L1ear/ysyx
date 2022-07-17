#include <isa.h>

#include <decode.h>

void isa_raise_intr(word_t NO, vaddr_t epc, Decode *s) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  cpu.mepc = epc;
  cpu.mcause = NO;
  Log("ecall has been called,mcause: %016lx\n",NO);
  s->dnpc = cpu.mtvec;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
