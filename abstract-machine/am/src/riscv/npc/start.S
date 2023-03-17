.section entry, "ax"
.globl _start
.type _start, @function

_start:
  mv s0, zero
  la sp, _stack_pointer
  li t0,128
  csrw mip,t0
  jal _trm_init
