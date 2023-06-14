.section entry, "ax"
.globl _start
.type _start, @function

_start:
  mv s0, zero
  la sp, _stack_pointer
  li s11,0xa00001800;
  csrw mstatus,s11;
  li s11,0;
  jal _trm_init
