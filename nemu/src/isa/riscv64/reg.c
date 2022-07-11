#include <isa.h>
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
  Log("PC: %lx\n",cpu.pc);
	int i;
	for(i = 0; i<32; i++) {
    printf("%s is: %08lx    ",reg_name(i,64), gpr(i));
    if (i % 3 == 0)   printf("\n");
  }
	printf("\n");

}

word_t isa_reg_str2val(const char *s, bool *success) {
  int i;
  for (i = 0; i<32; i++){
    if (strcmp(s, regs[i])==0) {
      printf("matched :%s\n", regs[i]);
      break;
    }
  }
  if(i>=32) {
    *success = false;
    return 0;
  }
  else 
  return gpr(i);
}
