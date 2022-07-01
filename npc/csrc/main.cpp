#include "verilated.h"
#include "../obj_dir/Vtop.h"
#include <cstdio>
#include <verilated_vcd_c.h>

#define nvboard 0


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



void single_cycle(int i) {
  top->clk = 0; top->eval();
  fp ->dump(i);
  top->clk = 1; top->eval();
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





int main()
{

    // nvboard_bind_all_pins(&top);
    // nvboard_init();

    Verilated::traceEverOn(true);
    fp = new VerilatedVcdC;
    top->trace(fp, 99); 
    fp ->open("vlt.vcd");
    fp ->dump(0);
    int i = 0;
    i = reset(i,5);
    for(i;i<=2000;i = i+2)
    {
      single_cycle(i);
      top->eval();
        // nvboard_update();
    }
    reset(i,10);


    delete fp;
    delete top;
    // nvboard_quit();
    return 0;
}
