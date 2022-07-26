#include <common.h>
#include "syscall.h"


void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;   //a7
  a[1] = c->GPR2;   //a0
  a[2] = c->GPR3;   //a1
  a[3] = c->GPR4;   //a2
    int fd = a[1];
    void *buf = (void*) a[2];
    size_t len = a[3];
  switch (a[0]) {
    case SYS_yield: yield(); break;
    case SYS_exit:  halt(a[1]);break;

    case SYS_write: 
      if(fd == 1||fd == 2)
        {
          for(int i = 0; i < len;i ++) {
            putch(((char*)buf)[i]);
          }
          //putch('\n');
          c->GPRx = len;
        }
      else if(fd == 0) c->GPRx = -1;
      break;
    case SYS_brk:  c->GPRx = 0; break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
