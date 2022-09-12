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



int reset(int i,int n) {
  top->rst_n = 0; top->eval();
  while (n -- > 0) 
  {
      single_cycle(i);
      i = i+2;
  }
  top->rst_n = 1; //top->eval();
  return i;
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

    
    
    sim_time = reset(sim_time,5);  
    init_monitor(argc, argv);

    en = 1;
    sdb_mainloop();
    while(en)
    {
      single_cycle(sim_time);
        // nvboard_update();
      sim_time = sim_time+2;
        //if(i>=1000) en = 0;
    }
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
      // if(top->DmemAddr % 8 != 0)  {printf("%016llx\n",top->DmemAddr);assert(0);}
      memwrite(top->DmemAddr, 8, top->DmemDataI,top->instrAddr);
      // printf("test:have writen %016llx to %08x, read out:%016llx,PC:%08lx\n",top->DmemDataI,top->DmemAddr,memread(top->DmemAddr,8,top->instrAddr),top->instrAddr);
      break;
    default:
      break;
    }
  }
  top->eval();
#ifdef vcd
  fp ->dump(i);
#endif
#ifdef  difftest
    cpu.pc = top->instrAddr;
    int r;
    for (r = 0; r < 32; r++) {
      cpu.gpr[r] = cpu_gpr[r];
    }
    if(start == 0 && en == 1){ 
      // assert(0); 
      difftest_step(pc);
    }
#endif
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
    top->DmemDataO = SEXT(memread(top->DmemAddr,4,top->instrAddr),32);
    
    break;
  case 3:
    //memwrite(top->DmemAddr, 4, 0xffffffff,top->instrAddr);
    top->DmemDataO = memread(top->DmemAddr,8,top->instrAddr);
    // printf("%08lx read out: %016llx\n*******************",top->DmemAddr,memread(top->DmemAddr,8,top->instrAddr));
    // assert(0);
    break;
  case 4:
    top->DmemDataO = memread(top->DmemAddr,1,top->instrAddr);
    break;
  case 5:
    top->DmemDataO = memread(top->DmemAddr,2,top->instrAddr);
    break;
  case 6:
    top->DmemDataO = memread(top->DmemAddr,4,top->instrAddr);
    break;
  default:
    break;
  }
  top->eval();
#ifdef vcd
  fp ->dump(i+1);
#endif

#ifdef  difftest
  pc = top->instrAddr;
  if(en == 1){
        start = 0;

  }
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
  if(top->regA0 == 0)
    printf("npc: \33[1;32mHIT GOOD TRAP\33[0m at pc = %08lx\n",top->instrAddr);
  else
  {
    printf("npc: \33[1;31mHIT BAD TRAP\33[0m at pc = %08lx\n",top->instrAddr);
    err = 1;
  }
}
