// #include <isa.h>
// #include <memory/paddr.h>
#include <stddef.h>
#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include "include/common.h"
#include <getopt.h>

axi4_mem<64,64,4> mem(4096l*1024*1024);
axi4_ptr<64,64,4> mem_ptr;

uint8_t imem[0x8000000] __attribute((aligned(4096)));
uint8_t* guest_to_host(uint64_t paddr) { return imem + paddr - 0x80000000; }
uint32_t i8042_data_io_handler(uint32_t offset, int len, bool is_write);
extern void *vmem[400*300*32];
extern int vgactl_sync;

//for diff-test
static char *diff_so_file = NULL;
static int difftest_port = 1234;

// char img[] = "/home/qw/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv64-npc.bin";
static const uint32_t img [] = {
0x00200fb3,//add x31,x0,x2                1    mv  x31,sp
0x00001097,//auipc x1,1                   2    auipc x1,0x1
0x00002117,//auipc x2,2                   3    auipc x2,0x2
0x00003197,//auipc x3,3                   4    auipc x3,0x3
0x0f100213,//addi x4,x0,0x000000f1        5    addi x4,x0,0xf1
0x001fa023,//sw x1,0(x31)                 6    sw x1,0(x31)
0x01809093,//slli x1,x1,24                7    slli x1,x1,24
0x002fa223,//sw x2,4(x31)                 8    sw x2,4(x31)
0x003fa423,//sw x3,8(x31)                 9    sw x3,8(x31)
0x004fa823,//sw x4,16(x31)                10   sw x4,16(x31)
0x004082b3,//add x5,x1,x4                 11   add x5,x1,x4
0x000fa303,//lw x6,0(x31)                 12   lw x6,0(x31)
0x004fa383,//lw x7,4(x31)                 13   lw x7,4(x31)
0x008fa403,//lw x8,8(x31)                 14   lw x8,8(x31)
0x010fa483,//lw x9,16(x31)                15   lw x9,16(x31)
0x005fa223,//sw x5,4(x31)                 16   sw x5,4(x31)
0x005f9423,//sh x5,8(x31)                 17   sh x5,8(x31)
0x000fc583,//lbu x11,0(x31)               18   lbu x11,0(x31)
0x001fc603,//lbu x12,1(x31)               19   lbu x12,1(x31)
0x002fc683,//lbu x13,2(x31)               20   lbu x13,2(x31)
0x003fc703,//lbu x14,3(x31)               21   lbu x14,3(x31)
0x000f9803,//lh x16,0(x31)                22   lh x16,0(x31)
0x002f9903,//lh x18,2(x31)                23   lh x18,2(x31)
0x008f9a03,//lh x20,8(x31)                24   lh x20,8(x31)
0x000fda83,//lhu x21,0(x31)               25   lhu x21,0(x31)
0x002fdb83,//lhu x23,2(x31)               26   lhu x23,2(x31)
0x004fac83,//lw x25,4(x31)                27   lw x25,4(x31)
0x00100073,// ebreak (used as npctrap)
};

static char *img_file = NULL;


long load_img() {
  if (img_file == NULL) {
    printf("No image is given. Use the default build-in image.\n");
    memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));
    mem.write(0x80000000, sizeof(img), guest_to_host(RESET_VECTOR));
    // img_file = img;
    return sizeof(img); // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");


  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("The image is %s, size = %ld\n", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(0x80000000), size, 1, fp);
  mem.load_binary(img_file, 0x80000000);
  // uint64_t buf=0xdeadbeef;
  // // mem.write(0x8009df20+24,8,(uint8_t *)&buf);
  // // buf = 0;
  // printf("0x8009df20+24:%lx\n", buf);
  // mem.read(0x81bf2f48,8,(uint8_t *)&buf);
  // printf("0x8009df20+24:%lx\n", buf);
  // assert(0);
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
  if(addr == 0xa0000048){
    // Log("%ld\n",get_time());
    // difftest_skip_ref();
    // Log("get time: %08x\n",instrAddr);
    return get_time();
  }
  if(addr == 0xa0000060){
    // printf("read key:%x\n",i8042_data_io_handler(0,0,0));
    // if(i8042_data_io_handler(0,0,0) != 0) assert(0);
    // printf("npc:%x\n",(uint64_t)i8042_data_io_handler(0,0,0));
    return (uint64_t)i8042_data_io_handler(0,0,0);
    
    // assert(0);
  }
  // if(addr == 0xa00003f8){
  //   // difftest_skip_ref();
  //   return 0;
  // }
  if(addr == 0xa0000100){
    printf("get vga_cfg");
    assert(0);
    return (400 << 16) | 300;
  }
  else if(addr>0x88000000||addr<0x80000000){
    printf("read %016lx out of boundary!\nPC: %08lx\n",addr,instrAddr);
    // assert(0);
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
    uint64_t buf;
    buf = data;
  if(addr == 0xa00003f8){
    // difftest_skip_ref();

    printf("%c",(uint8_t)data);
    // assert(0);
  }
  else if(addr == 0xa0000104){
    vgactl_sync = data;
  }
  else if(addr>=0xa1000000&&addr<0xa13A9800){
    // printf("write%x to \nvmem:%016llx\nplus:%016llx\nvmem:%016llx\n\n",data,(uint64_t)vmem+addr-0xa1000000,addr,vmem);
    *(uint32_t*)((uint64_t)vmem + addr-0xa1000000) = (uint32_t)data;
  }
  else if(addr>0x88000000||addr<0x80000000){
      printf("\n%08lx: write %d bytes out of boundary!\nPC: %08d\n",addr, len, sim_time);
      assert(0);
      } 
  else 
    switch (len) {
    case 1:
      *(uint8_t  *)(imem + addr - 0x80000000) = data; 
      mem.write(addr,1,(uint8_t *)(&buf));
      return;
    case 2: 
      *(uint16_t *)(imem + addr - 0x80000000) = data; 
      mem.write(addr,2,(uint8_t *)(&buf));
      return;
    case 4: 
      *(uint32_t *)(imem + addr - 0x80000000) = data; 
      mem.write(addr,4,(uint8_t *)(&buf));
      return;
    case 8: 
      // printf("sw:%016llx\n",data);
      *(uint64_t *)(imem + addr - 0x80000000) = data; 
      mem.write(addr,8,(uint8_t *)(&buf));
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
