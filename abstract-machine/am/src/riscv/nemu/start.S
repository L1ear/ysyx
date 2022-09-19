.section entry, "ax"
.globl _start
.type _start, @function

_start:
  mv s0, zero
  la sp, _stack_pointer
  li s11,8
  csrrs s11,mstatus,s11
  csrr s11,mstatus
  jal _trm_init
