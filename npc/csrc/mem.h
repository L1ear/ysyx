#ifndef __MEM_H__
#define __MEM_H__

#include <stddef.h>
#include <stdio.h>
#include <stdint.h>
#include <assert.h>

// #define RESET_VECTOR (CONFIG_MBASE + CONFIG_PC_RESET_OFFSET)

#define paddr_t uint64_t
//待修改
#define word_t  uint64_t

/* convert the guest physical address in the guest program to host virtual address in NEMU */
uint8_t* guest_to_host(paddr_t paddr);
/* convert the host virtual address in NEMU to guest physical address in the guest program */
// paddr_t host_to_guest(uint8_t *haddr);



word_t paddr_read(paddr_t addr, int len);
void paddr_write(paddr_t addr, int len, word_t data);

#endif
