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
0x00100093,//addi x1,x0,1                 1    addi x1,x0,1
0x00100113,//addi x2,x0,1                 2    addi x2,x0,1
0x00208663,//beq x1,x2,0x0000000c         3    beq x1,x2,label0
0x00300193,//addi x3,x0,3                 4    addi x3,x0,3
0x00400213,//addi x4,x0,4                 5    addi x4,x0,4
0x00500293,//addi x5,x0,5                 7    addi x5,x0,5
0x00509663,//bne x1,x5,0x0000000c         8    bne x1,x5,label1
0x00600313,//addi x6,x0,6                 9    addi x6,x0,6
0x00700393,//addi x7,x0,7                 10   addi x7,x0,7
0x00800413,//addi x8,x0,8                 12   addi x8,x0,8
0x00c00fef,//jal x31,0x0000000c           13   jal x31,label2
0x00900493,//addi x9,x0,9                 14   addi x9,x0,9
0x00a00513,//addi x10,x0,10               15   addi x10,x0,10
0x00b00593,//addi x11,x0,11               17   addi x11,x0,11
0x00308663,//beq x1,x3,0x0000000c         18   beq x1,x3,label3
0x00c00613,//addi x12,x0,12               19   addi x12,x0,12
0x00d00693,//addi x13,x0,13               20   addi x13,x0,13
0x00e00713,//addi x14,x0,14               22   addi x14,x0,14
0x00000013,//addi x0,x0,0                 32   nop
0x00000013,//addi x0,x0,0                 32   nop
0x00000013,//addi x0,x0,0                 32   nop
0x00000013,//addi x0,x0,0                 32   nop
0x00000013,//addi x0,x0,0                 32   nop
0x00100073,// ebreak (used as npctrap)
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
  // printf("*****************************memread: %llx\n",addr);
  // if(addr == 0xa0000048){
  //   printf("%ld\n",get_time());
  //   difftest_skip_ref();
  //   printf("**************************%08x\n",instrAddr);
  //   return get_time();
  // }
  if(addr == 0xa00003f8){
  }
  else if(addr>0x88000000||addr<0x80000000){
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
      // printf("instr read!!!! %lx\n",*(uint32_t  *)(imem + addr - 0x80000000));
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
      // printf("sw:%016llx\n",data);
      *(uint64_t *)(imem + addr - 0x80000000) = data; 
      // printf("after:%016llx\n",*(uint64_t *)(imem + addr - 0x80000000));
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
