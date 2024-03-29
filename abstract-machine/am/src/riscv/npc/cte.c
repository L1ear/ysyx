#include <am.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  // printf("%x\n",*(((uint32_t *)(c)+2*32+1)));
  if (user_handler) {
    Event ev = {0};
    
    switch (c->mcause) {
      case 0x8000000000000007:
        printf("fixme!");
        asm volatile("csrw mip, %0" : : "r"(0));
        break;
      case 11: 
        c -> mepc += 4;
        if(c->GPR1 == -1){
          ev.event = EVENT_YIELD; 
          break;
        }    
        else {
          ev.event = EVENT_SYSCALL; 
          break;
        }
      default: printf("%x\n",c->GPR1);ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry

  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
  asm volatile("li a7, -1; ecall");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
