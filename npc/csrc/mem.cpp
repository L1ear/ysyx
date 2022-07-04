// #include <isa.h>
// #include <memory/paddr.h>
#include <stddef.h>
#include <stdio.h>
#include <stdint.h>
#include <assert.h>

uint8_t imem[0x8000000] __attribute((aligned(4096)));
uint8_t* guest_to_host(uint64_t paddr) { return imem + paddr - 0x80000000; }

#define paddr_t uint64_t
//待修改
#define word_t  uint64_t

char img[] = "/home/qw/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv64-npc.bin";

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

uint32_t imemread(uint64_t pc){
  // printf("imem:");
  // for(int i = 0;i<4;i++){
  //   printf("%02x",imem[i]);
  // }
  // printf("\n");
  return *(uint32_t *)(imem + pc - 0x80000000);
}
