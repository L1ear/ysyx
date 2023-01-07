#include <am.h>

static inline uint32_t inl(uintptr_t addr) { return *(volatile uint32_t *)addr; }

#define KEYDOWN_MASK 0x8000
# define DEVICE_BASE 0xa0000000
#define KBD_ADDR        (0xa0000000 + 0x0000060)

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  int code = inl(KBD_ADDR);
  kbd->keydown = (code & KEYDOWN_MASK ? true : false);
  kbd->keycode = code & ~KEYDOWN_MASK;
}
