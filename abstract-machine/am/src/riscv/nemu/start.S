.section entry, "ax"
.globl _start
.type _start, @function

_start:
  mv s0, zero
  la sp, _stack_pointer
  li s11,1
  csrw mstatus,s11
  jal _trm_init
