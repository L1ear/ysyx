.section entry, "ax"
.globl _start
.type _start, @function

_start:
  mv s0, zero
  la sp, _stack_pointer
  li s11,0xa00001800;
  csrw mstatus,s11;
  auipc s11,0;
  addi s11,s11,0x10;
  csrw mepc,s11;
  mret;
  addi s11,s11,0xc;
  csrw mepc,s11;
  mret;
  li s11,0;
  jal _trm_init
