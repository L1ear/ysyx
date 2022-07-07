#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  if (direction == DIFFTEST_TO_REF) {
    uint8_t *mem = buf;
    int i;
    for(i = n;i>0;i--){
      paddr_write(addr+(n-i),1,mem[n-i]);
    }
    for(;i<n;i++){
      printf("%08lx\n",paddr_read(addr + i*4,4));
    }
  } 
  else {
    assert(0);
  }
}

void difftest_regcpy(void *dut, bool direction) {
  assert(0);
}

void difftest_exec(uint64_t n) {
  assert(0);
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}

void difftest_init() {
  /* Perform ISA dependent initialization. */
  init_isa();
}

