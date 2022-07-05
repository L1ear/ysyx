// #include <isa.h>
// #include <memory/paddr.h>
#include <stddef.h>
#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include </home/qw/ysyx-workbench/npc/csrc/mem.h>

uint8_t imem[0x8000000] __attribute((aligned(4096)));
uint8_t* guest_to_host(uint64_t paddr) { return imem + paddr - 0x80000000; }



char img[] = "/home/qw/ysyx-workbench/am-kernels/tests/cpu-tests/build/add-riscv64-npc.bin";

static char *img_file = img;


long load_img() {
  if (img_file == NULL) {
    printf("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");


  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("The image is %s, size = %ld\n", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(0x80000000), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}


uint32_t memread(uint64_t addr, uint8_t len,uint64_t instrAddr){
  // printf("imem:");
  // for(int i = 0;i<4;i++){
  //   printf("%02x",imem[i]);
  // }
  // printf("\n");
    switch (len){
    case 1:
      if(addr==0) addr+= 0x80000000;
      if(addr>0x88000000||addr<0x80000000){
        printf("read out of boundary!\nPC: %08lx\n",instrAddr);
        return 0;break;
        }
      else
        return *(uint8_t  *)(imem + addr - 0x80000000);
      break;
    case 2:
      if(addr>0x88000000||addr<0x80000000){
        printf("read out of boundary!\nPC: %08lx\n",instrAddr);
        return 0;break;
      } 
      else
        return *(uint16_t  *)(imem + addr - 0x80000000);
      break;
    case 4:
      if(addr>0x88000000||addr<0x80000000){
        printf("read out of boundary!\nPC: %08lx\n",instrAddr);
        return 0;break;
      } 
      else
        return *(uint32_t  *)(imem + addr - 0x80000000);
      break;
    case 8:
      if(addr>0x88000000||addr<0x80000000){
        printf("read out of boundary!\nPC: %08lx\n",instrAddr);
        return 0;break;
      } 
      else
        return *(uint64_t  *)(imem + addr - 0x80000000);
        break;
    default:
    return 0;
      break;
  }
}


void memwrite(uint64_t addr, uint8_t len, uint64_t data, uint64_t instrAddr){
    switch (len) {
    case 1:
      if(addr>0x88000000||addr<0x80000000){
      printf("write out of boundary!\nPC: %08lx\n",instrAddr);
      assert(0);
      } 
      else 
        *(uint8_t  *)(imem + addr - 0x80000000) = data; 
      return;
    case 2: 
      if(addr>0x88000000||addr<0x80000000){
      printf("write out of boundary!\nPC: %08lx\n",instrAddr);
      assert(0);
      } 
      else
        *(uint16_t *)(imem + addr - 0x80000000) = data; 
      return;
    case 4: 
      if(addr>0x88000000||addr<0x80000000){
        printf("write out of boundary!\nPC: %08lx\n",instrAddr);
        assert(0);
      } 
      else
        *(uint32_t *)(imem + addr - 0x80000000) = data; 
      return;
    case 8: 
      if(addr>0x88000000||addr<0x80000000){
        printf("write out of boundary!\nPC: %08lx\n",instrAddr);
        assert(0);
      } 
      else
        *(uint64_t *)(imem + addr - 0x80000000) = data; 
      return;
    default: break;
  }
}
