.section entry, "ax"
.globl _start
.type _start, @function

_start:
  mv s0, zero
  la sp, _stack_pointer
  li t0,128
  csrw mie,t0
  li t0,0x2000bff8
  li t1,0x100
  sw t1,0(t0)
  la t0,__am_asm_trap
  csrw mtvec,t0
  jal _trm_init
