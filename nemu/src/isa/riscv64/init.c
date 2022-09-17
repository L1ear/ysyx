#include <isa.h>
#include <memory/paddr.h>

// this is not consistent with uint8_t
// but it is ok since we do not access the array directly
static const uint32_t img [] = {
0x30571073,//csrw	mtvec,a4
0x342022f3,//csrr	t0,mcause
0x30002373,//csrr	t1,mstatus
0x341023f3,//csrr	t2,mepc
0x30031073,//csrw	mstatus,t1
0x34139073,//csrw	mepc,t2
0x00000013,//addi x0,x0,0                 32   nop
0x00000013,//addi x0,x0,0                 32   nop
0x00000013,//addi x0,x0,0                 32   nop
0x00000013,//addi x0,x0,0                 32   nop
0x00000013,//addi x0,x0,0                 32   nop
0x00100073,// ebreak (used as npctrap)
};

static void restart() {
  /* Set the initial program counter. */
  cpu.pc = RESET_VECTOR;

  /* The zero register is always 0. */
  cpu.gpr[0] = 0;
}

void init_isa() {
  /* Load built-in image. */
  memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));

  /* Initialize this virtual computer system. */
  restart();
}
