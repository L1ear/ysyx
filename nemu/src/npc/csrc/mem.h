#ifndef __MEM_H__
#define __MEM_H__

#include <stddef.h>
#include <stdio.h>
#include <stdint.h>
#include <assert.h>









// #define RESET_VECTOR (CONFIG_MBASE + CONFIG_PC_RESET_OFFSET)
#define SEXT(x, len) ({ struct { int64_t n : len; } __x = { .n = x }; (int64_t)__x.n; })

#define paddr_t uint64_t
//待修改
#define word_t  uint64_t

/* convert the guest physical address in the guest program to host virtual address in NEMU */
uint8_t* guest_to_host(paddr_t paddr);
/* convert the host virtual address in NEMU to guest physical address in the guest program */
// paddr_t host_to_guest(uint8_t *haddr);


//未使用
word_t paddr_read(paddr_t addr, int len);
void paddr_write(paddr_t addr, int len, word_t data);


int parse_args(int argc, char *argv[]);
uint64_t memread(uint64_t pc,uint8_t len,uint64_t instrAddr);
void memwrite(uint64_t addr, uint8_t len, uint64_t data,uint64_t instrAddr);

long load_img();


// ----------- log -----------

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

#endif
