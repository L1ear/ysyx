#include "verilated.h"
#include "../obj_dir/Vtop.h"
#include <cstdio>
#include <verilated_vcd_c.h>
#include </home/qw/ysyx-workbench/npc/csrc/mem.h>

/* for vcd */
#if nvboard == 0
static VerilatedVcdC* fp;
Vtop* top = new Vtop;
int i=0;
// #define top.    top->    

/* for nvboard */
#else
#include <nvboard.h>
static TOP_NAME dut;
void nvboard_bind_all_pins(Vtop* top);
#endif

//TODO
/*
*1: 外置存储器 下降沿读，上升沿写
*2: 实现HIT GOOD/BAD TRAP
*3: 实现RV64IM
*4: 
*/

#define nvboard 0

// extern  uint8_t imem;
// extern  uint8_t* guest_to_host;
//   uint32_t imemread(uint64_t pc);
// extern  long load_img();



// int t = 0;

void single_cycle(int i) {
  top->clk = 1; 
  top->eval();
//上升沿读指令并写内存
  top->instr = memread(top->instrAddr,4,top->instrAddr);
  if(top->MemWr==1){
    switch (top->MemOp)
    {
    case 0:
      memwrite(top->DmemAddr, 1, top->DmemDataI,top->instrAddr);
      break;
    case 1:
      memwrite(top->DmemAddr, 2, top->DmemDataI,top->instrAddr);
      break;
    case 2:
      memwrite(top->DmemAddr, 4, top->DmemDataI,top->instrAddr);
      break;
    case 3:
      memwrite(top->DmemAddr, 8, top->DmemDataI,top->instrAddr);
      //printf("test:have writen %08x to %08x, read out:%08x",top->DmemDataI,top->DmemAddr,memread(top->DmemAddr,8));
      break;
    default:
      break;
    }
  }
  top->eval();
  fp ->dump(i);

  top->clk = 0;
//读mem，无论是否写使能，都在下降沿输出数据
if(top->OPcode==3)
  switch (top->MemOp)
  {
  case 0:
    top->DmemDataO = SEXT(memread(top->DmemAddr,1,top->instrAddr),8);
    break;
  case 1:
    top->DmemDataO = SEXT(memread(top->DmemAddr,2,top->instrAddr),16);
    break;
  case 2:
    top->DmemDataO = SEXT(memread(top->DmemAddr,3,top->instrAddr),32);
    break;
  case 3:
    top->DmemDataO = memread(top->DmemAddr,8,top->instrAddr);
    break;
  case 4:
    top->DmemDataO = memread(top->DmemAddr,1,top->instrAddr);
    break;
  case 5:
    top->DmemDataO = memread(top->DmemAddr,2,top->instrAddr);
    break;
  case 6:
    top->DmemDataO = memread(top->DmemAddr,3,top->instrAddr);
    break;
  default:
    break;
  }
  top->eval();
  fp ->dump(i+1);
}

int reset(int i,int n) {
  top->rst_n = 0; top->eval();
  while (n -- > 0) 
  {
      single_cycle(i);
      i = i+2;
  }
  top->rst_n = 1; top->eval();
  return i;
}

//for DPI-C
#include "svdpi.h"
#include "Vtop__Dpi.h"

int en = 1;
void ebreak(){
  en = 0;
  printf("\n`````````````````````````````````````finished!```````````````````````````````````````````\n");
}


int main()
{

    // nvboard_bind_all_pins(&top);
    // nvboard_init();

    Verilated::traceEverOn(true);
    fp = new VerilatedVcdC;
    top->trace(fp, 99); 
    fp ->open("vlt.vcd");
    fp ->dump(0);
    load_img();
    int i = 0;
    i = reset(i,5);
    while(en)
    {
      single_cycle(i);
      top->eval();
        // nvboard_update();
        i = i+2;
        //if(i>=1000) en = 0;
    }
    reset(i,10);


    delete fp;
    delete top;
    // nvboard_quit();
    return 0;
}
