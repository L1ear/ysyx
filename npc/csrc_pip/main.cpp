#include "include/common.h"

extern CPU_state cpu;

/* for vcd */
#if nvboard == 0
static VerilatedVcdC* fp;
Vtop* top = new Vtop;
int sim_time=0;
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


int err = false;



int reset(int i) {
  top->rst_n = 0; top->eval();

      top->clk = 1;
      top->eval();
      #ifdef vcd
      fp ->dump(i);
      #endif
      top->clk = 0;
      top->rst_n = 1; top->eval();
      top->eval();
      #ifdef vcd
      fp ->dump(i+1);
      #endif  
  return i+2;
}



int main(int argc, char *argv[])
{
    // nvboard_bind_all_pins(&top);
    // nvboard_init();
#ifdef vcd
    Verilated::traceEverOn(true);
    fp = new VerilatedVcdC;
    top->trace(fp, 99); 
    fp ->open("vlt.vcd");
    fp ->dump(0);
#endif 

    
    init_monitor(argc, argv);
    sim_time = reset(sim_time);
  
    
    // int ff=40;
    // while(ff-->0){
    //   single_cycle(sim_time);
    //   sim_time = sim_time+2;
    // }
    

    en = 1;
    sdb_mainloop();
    // while(en)
    // {
    //   single_cycle(sim_time);
    //     // nvboard_update();
    //   sim_time = sim_time+2;
    //     //if(i>=1000) en = 0;
    // }
    // reset(i,10);

#ifdef vcd
    delete fp;
#endif
    delete top;
    // nvboard_quit();
    if(err){
      return 1;
    }
    else
      return 0;
}

int start = 1;
uint64_t pc = 0;
void single_cycle(int i) {
  top->clk = 1; 
  top->eval();
#ifdef vcd
  fp ->dump(i);
#endif
#ifdef  difftest
    // cpu.pc = top->pc_diff;
    int r;
    for (r = 0; r < 32; r++) {
      cpu.gpr[r] = cpu_gpr[r];
    }
    if(top->pc_diff != 0){ 
      // assert(0); 
      if(start == 0)
        difftest_step(top->pc_diff);
      start = (start == 0)? 0: start--;
    }
#endif
  top->clk = 0;
  top->eval();
#ifdef vcd
  fp ->dump(i+1);
#endif

#ifdef  difftest
  pc = top->pc_decoding;
  // if(en == 1){
  //       start = 0;

  // }
#endif
}

//for DPI-C
uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

int en = 0;
void ebreak(){
  en = 0;
  if(0 == 0)
    printf("npc: \33[1;32mHIT GOOD TRAP\33[0m at pc = %08x\n",pc);
  else
    printf("npc: \33[1;31mHIT BAD TRAP\33[0m at pc = %08x\n",pc);
}

void vmemread(long long raddr,int len, long long *rdata, long long pc){
  //printf("ren = %d, raddr = 0x%08lx,rdata = 0x%016lx\n",ren,raddr,*rdata);
  //raddr = raddr & ~0x7ull;  //clear low 3bit for 8byte align.
  // printf("%llx\n",raddr);
  if(raddr!=0)
    *rdata = memread(raddr, len, pc);
}


void vmemwrite(long long waddr, long long wdata, long long pc){
  //printf("waddr = 0x%lx,wdata = 0x%lx,wmask = 0x%x\n",waddr,wdata,wmask);
  //waddr = waddr & ~0x7ull;  //clear low 3bit for 8byte align.
    // printf("write: %llx\n",waddr);
    memwrite(waddr, 8, wdata, pc);
}

