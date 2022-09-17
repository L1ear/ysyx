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
0x00007117,//auipc x2,7                   1    auipc x2,7
0x00213023,//sd x2,0(x2)                  2    sd x2,0(x2)
0xff813183,//ld x3,-8(x2)                  3    ld x3,0(x2)
0x00318233,//add x4,x3,x3                 4    add x4,x3,x3
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
    return 0;
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
