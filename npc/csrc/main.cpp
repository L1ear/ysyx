#include "verilated.h"
#include "../obj_dir/Vtop.h"
#include <cstdio>
#include <verilated_vcd_c.h>

//TODO
/*
*1: 外置存储器
*2: 实现HIT GOOD/BAD TRAP
*3: 实现RV64IM
*4: 
*/

#define nvboard 0

extern  uint8_t imem;
extern  uint8_t* guest_to_host;
  uint32_t imemread(uint64_t pc);
extern  long load_img();
/* for vcd */
#if nvboard == 0
static VerilatedVcdC* fp;
static Vtop* top = new Vtop;
int i=0;
// #define top.    top->    

/* for nvboard */
#else
#include <nvboard.h>
static TOP_NAME dut;
void nvboard_bind_all_pins(Vtop* top);
#endif


// int t = 0;

void single_cycle(int i) {
  top->clk = 1; 
  top->eval();
  top->instr = imemread(top->instrAddr);
  top->eval();
  fp ->dump(i);
  top->clk = 0;
  // printf("%08lx\n",top->instrAddr);
  // printf("%08x\n",imemread(top->instrAddr));
  // assert(t);
  // t++;
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
