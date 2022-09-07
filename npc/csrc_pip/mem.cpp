// #include <isa.h>
// #include <memory/paddr.h>
#include <stddef.h>
#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include "include/common.h"
#include <getopt.h>

uint8_t imem[0x8000000] __attribute((aligned(4096)));
uint8_t* guest_to_host(uint64_t paddr) { return imem + paddr - 0x80000000; }

//for diff-test
static char *diff_so_file = NULL;
static int difftest_port = 1234;

// char img[] = "/home/qw/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv64-npc.bin";
static const uint32_t img [] = {
0x07000093,//addi x1,x0,0x00000070        1    addi x1,x0,0x70
0x07100113,//addi x2,x0,0x00000071        2    addi x2,x0,0x71
0x0f000193,//addi x3,x0,0x000000f0        3    addi x3,x0,0xf0
0x0f100213,//addi x4,x0,0x000000f1        4    addi x4,x0,0xf1
0x00100023,//sb x1,0(x0)                  5    sb x1,0(x0)
0x01809093,//slli x1,x1,24                6    slli x1,x1,24
0x002000a3,//sb x2,1(x0)                  7    sb x2,1(x0)
0x00300123,//sb x3,2(x0)                  8    sb x3,2(x0)
0x004001a3,//sb x4,3(x0)                  9    sb x4,3(x0)
0x004082b3,//add x5,x1,x4                 10   add x5,x1,x4
0x00000303,//lb x6,0(x0)                  11   lb x6,0(x0)
0x00100383,//lb x7,1(x0)                  12   lb x7,1(x0)
0x00200403,//lb x8,2(x0)                  13   lb x8,2(x0)
0x00300483,//lb x9,3(x0)                  14   lb x9,3(x0)
0x00502223,//sw x5,4(x0)                  15   sw x5,4(x0)
0x00501423,//sh x5,8(x0)                  16   sh x5,8(x0)
0x00004583,//lbu x11,0(x0)                17   lbu x11,0(x0)
0x00104603,//lbu x12,1(x0)                18   lbu x12,1(x0)
0x00204683,//lbu x13,2(x0)                19   lbu x13,2(x0)
0x00304703,//lbu x14,3(x0)                20   lbu x14,3(x0)
0x00001803,//lh x16,0(x0)                 21   lh x16,0(x0)
0x00101883,//lh x17,1(x0)                 22   lh x17,1(x0)
0x00201903,//lh x18,2(x0)                 23   lh x18,2(x0)
0x00301983,//lh x19,3(x0)                 24   lh x19,3(x0)
0x00801a03,//lh x20,8(x0)                 25   lh x20,8(x0)
0x00005a83,//lhu x21,0(x0)                26   lhu x21,0(x0)
0x00105b03,//lhu x22,1(x0)                27   lhu x22,1(x0)
0x00205b83,//lhu x23,2(x0)                28   lhu x23,2(x0)
0x00305c03,//lhu x24,3(x0)                29   lhu x24,3(x0)
0x00402c83,//lw x25,4(x0)                 30   lw x25,4(x0)
0x00100073,  // ebreak (used as nemu_trap)
};

static char *img_file = NULL;


long load_img() {
  if (img_file == NULL) {
    printf("No image is given. Use the default build-in image.\n");
    memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));
    // img_file = img;
    return sizeof(img); // built-in image size
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


uint64_t memread(uint64_t addr, uint8_t len,uint64_t instrAddr){
  // printf("imem:");
  // for(int i = 0;i<4;i++){
  //   printf("%02x",imem[i]);
  // }
  // printf("\n");
  printf("*****************************memread: %llx\n",addr);
  // if(addr == 0xa0000048){
  //   printf("%ld\n",get_time());
  //   difftest_skip_ref();
  //   printf("**************************%08x\n",instrAddr);
  //   return get_time();
  // }
   if(addr>0x88000000||addr<0x80000000){
    printf("read %016lx out of boundary!\nPC: %08lx\n",addr,instrAddr);
    return 0;
    }
  else
    switch (len){
    case 1:
      if(addr==0) addr+= 0x80000000;
      return *(uint8_t  *)(imem + addr - 0x80000000);
      break;
    case 2:
      return *(uint16_t  *)(imem + addr - 0x80000000);
      break;
    case 4:
      printf("instr read!!!! %lx\n",*(uint32_t  *)(imem + addr - 0x80000000));
      return *(uint32_t  *)(imem + addr - 0x80000000);
      break;
    case 8:
      return *(uint64_t  *)(imem + addr - 0x80000000);
      break;
    default:
    return 0;
      break;
  }
}


void memwrite(uint64_t addr, uint8_t len, uint64_t data, uint64_t instrAddr){
  if(addr == 0xa00003f8){
    difftest_skip_ref();

    printf("%c",(uint8_t)data);
  }
  else if(addr>0x88000000||addr<0x80000000){
      printf("%08lx: write out of boundary!\nPC: %08lx\n",addr, instrAddr);
      // assert(0);
      } 
  else 
    switch (len) {
    case 1:
      *(uint8_t  *)(imem + addr - 0x80000000) = data; 
      return;
    case 2: 
      *(uint16_t *)(imem + addr - 0x80000000) = data; 
      return;
    case 4: 
      *(uint32_t *)(imem + addr - 0x80000000) = data; 
      return;
    case 8: 
      printf("sw:%016llx\n",data);
      *(uint64_t *)(imem + addr - 0x80000000) = data; 
      printf("after:%016llx\n",*(uint64_t *)(imem + addr - 0x80000000));
      return;
    default: break;
  }
}

int is_batch_mode = false;
void sdb_set_batch_mode() {
  is_batch_mode = true;
}

int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {"img"      , required_argument, NULL, 'i'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:i:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'd': diff_so_file = optarg; printf("***************************************DIFF-TEST.SO:%s\n",optarg);break;
      case 'i': printf("***************************************IMG:%s\n",optarg);img_file = optarg; break;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\n");
    }
  }
  return 0;
}

void init_monitor(int argc, char *argv[]) {

  parse_args(argc, argv);

  long img_size = load_img();
#ifdef  difftest
  init_difftest(diff_so_file, img_size, difftest_port);
#endif
}
