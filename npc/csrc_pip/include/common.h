#ifndef __COMMON_H__
#define __COMMON_H__

#include <cstdio>
#include <stdbool.h>
#include "verilated_dpi.h"
#include "svdpi.h"
#include "Vtop__Dpi.h"
#include "mem.h"
#include "diff_test.h"
#include "sdb.h"
#include "vcd.h"
#include "config.h"
#include "../axi/axi4.hpp"
#include "../axi/axi4_mem.hpp"
#include "../axi/axi4_xbar.hpp"
#include "../axi/mmio_mem.hpp"
#include "../axi/uart8250.hpp"
#include "../axi/uartlite.hpp"

extern axi4_mem<64,64,4> mem;
extern axi4_ptr<64,64,4> mem_ptr;
extern Vtop* top;
extern uint64_t nr_instr;

#define CONFIG_HAS_KEYBOARD 1
#define CONFIG_VGA_SIZE_400x300 1
#define CONFIG_VGA_SHOW_SCREEN 1
#define TIMER_HZ 60

#define BITS(x, hi, lo) (((x) >> (lo)) & BITMASK((hi) - (lo) + 1)) // similar to x[hi:lo] in verilog
#define BITMASK(bits) ((1ull << (bits)) - 1)

#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))

#define RESET_VECTOR 0x80000000

#define paddr_t uint64_t
//待修改
#define word_t  uint64_t

extern int sim_time;
extern int en;
extern uint64_t *cpu_gpr;
extern uint64_t nr_cycle;

static int cmd_help(char *args);
void sdb_mainloop();
void single_cycle(int i);
uint64_t get_time();

static inline const char* reg_name(int idx, int width) {
  extern const char* regs[];
  return regs[idx];
}

typedef struct {
  word_t gpr[32];
  uint64_t pc;
} riscv64_CPU_state;

typedef riscv64_CPU_state CPU_state;


#define ASNI_FG_BLACK   "\33[1;30m"
#define ASNI_FG_RED     "\33[1;31m"
#define ASNI_FG_GREEN   "\33[1;32m"
#define ASNI_FG_YELLOW  "\33[1;33m"
#define ASNI_FG_BLUE    "\33[1;34m"
#define ASNI_FG_MAGENTA "\33[1;35m"
#define ASNI_FG_CYAN    "\33[1;36m"
#define ASNI_FG_WHITE   "\33[1;37m"
#define ASNI_BG_BLACK   "\33[1;40m"
#define ASNI_BG_RED     "\33[1;41m"
#define ASNI_BG_GREEN   "\33[1;42m"
#define ASNI_BG_YELLOW  "\33[1;43m"
#define ASNI_BG_BLUE    "\33[1;44m"
#define ASNI_BG_MAGENTA "\33[1;35m"
#define ASNI_BG_CYAN    "\33[1;46m"
#define ASNI_BG_WHITE   "\33[1;47m"
#define ASNI_NONE       "\33[0m"
#define FMT_WORD        "0x%016lx"


#define ASNI_FMT(str, fmt) fmt str ASNI_NONE

#define Log(format, ...) \
    _Log(ASNI_FMT("[%s:%d %s] " format, ASNI_FG_BLUE) "\n", \
        __FILE__, __LINE__, __func__, ## __VA_ARGS__)

#define _Log(...) \
  do { \
    printf(__VA_ARGS__); \
  } while (0)


// macro concatenation
#define concat_temp(x, y) x ## y
#define concat(x, y) concat_temp(x, y)


#define io_read(reg) \
  ({ reg##_T __io_param; \
    ioe_read(reg, &__io_param); \
    __io_param; })

#define io_write(reg, ...) \
  ({ reg##_T __io_param = (reg##_T) { __VA_ARGS__ }; \
    ioe_write(reg, &__io_param); })


#endif