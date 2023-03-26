.section entry, "ax"
.globl _start
.type _start, @function

_start:
  mv s0, zero
  la sp, _stack_pointer
  # li t0,8
  # csrrs t0,mstatus,t0
  # li t0,128
  # csrw mie,t0
  # li t0,0x2004000
  # li t1,3
  # sd t1,0(t0)
  # li t0,0x20004000
  # li t1,0x1000
  # sw t1,0(t0)
  # la t0,__am_asm_trap
  # csrw mtvec,t0
  jal _trm_init
