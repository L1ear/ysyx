#include "include/common.h"

extern CPU_state cpu;
extern axi4_mem<64,64,4> mem;
int nr_instr = 0;
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
uint64_t instr_last;
char  stall;
void single_cycle(int i) {
//上升沿
  top->clk = 1; 
  top->eval();
  //读指令
  if(top->sram_ren){
    if(top->sram_addr!=0 && top->sram_addr_valid){
      // uint32_t buf;
      // mem.read(top->sram_addr, 4, (uint8_t *)(&buf));
      // top->sram_rdata = buf;
      top->sram_rdata = memread(top->sram_addr & ~0x7ull, 8, pc);
      int x = rand();
      top->sram_data_valid = 1;
    }
    else {
      top->sram_rdata = 0;
      top->sram_data_valid = 0;
    }
  }
  //读数据
  if(top->ls_sram_rd_en){
    // uint64_t buf;
    // mem.read(top->sram_addr, 8, (uint8_t *)(&buf));
    // top->ls_sram_rd_data = buf;
    top->ls_sram_rd_data = memread(top->ls_sram_addr, 8, pc);
    top->ls_sram_rd_data_valid = 1;
  }
  //写数据
  if(top->ls_sram_wr_en){
     uint64_t buf;
    buf = top->ls_sram_wr_data;
    // mem.write(top->ls_sram_addr, (uint8_t)top->ls_sram_wr_mask, (uint8_t *)(&buf));
    memwrite(top->ls_sram_addr, (uint8_t)top->ls_sram_wr_mask, buf, pc);
    top->ls_sram_wr_data_ok = 1;
  }
  top->eval();
#ifdef vcd
  fp ->dump(i);
#endif

#ifdef  difftest    
    int r;
    for (r = 0; r < 32; r++) {
      cpu.gpr[r] = cpu_gpr[r];
    }
    if((cpu.pc != 0x7ffffffc) && (cpu.pc != 0) && (instr_last != 0)&& (instr_last != 0x100073) && (stall == 1)){ 
      // assert(0); 
      if(en == 1 )
        {

          if(instr_last == 0x3ea78c23 ||instr_last == 0x0487b783){
            difftest_skip_ref();
          }
          Log("%lx\n",instr_last);
          difftest_step(cpu.pc);
          
          
          // nr_instr++;
        }
      start = 0;
    }
    instr_last = top->instr_diff;
    stall = top->stall_n_diff;
#endif
    cpu.pc = top->pc_diff;
    
    
  top->clk = 0;
  top->eval();
#ifdef vcd
  fp ->dump(i+1);
#endif
  // pc = top->pc_decoding;
#ifdef  difftest
  
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
  if(top->regA0 == 0){
    Log("npc: \33[1;32mHIT GOOD TRAP\33[0m at pc = %08x\n",cpu.pc);
    Log("after %d instructions", nr_instr);
  }
    
  else
  {
    Log("npc: \33[1;31mHIT BAD TRAP\33[0m at pc = %08x\n",cpu.pc);
    Log("after %d instructions", nr_instr);
    err = 1;
  }
}

void vmemread(long long raddr,int len, long long *rdata, long long pc){
  //printf("ren = %d, raddr = 0x%08lx,rdata = 0x%016lx\n",ren,raddr,*rdata);
  //raddr = raddr & ~0x7ull;  //clear low 3bit for 8byte align.
  // printf("%llx\n",raddr);
  if(raddr!=0)
    *rdata = memread(raddr, len, pc);
}


void vmemwrite(long long waddr, long long wdata, char wr_mask, long long pc){
  //printf("waddr = 0x%lx,wdata = 0x%lx,wmask = 0x%x\n",waddr,wdata,wmask);
  //waddr = waddr & ~0x7ull;  //clear low 3bit for 8byte align.
    // printf("write: %llx\n",waddr);
          
    // Log("%d\n",(uint8_t)wr_mask);
    // assert(0);
    // switch ((uint8_t)wr_mask)
    // {
    // case 1:
    //   memwrite(waddr, 1, wdata, pc);
    //   break;
    // case 3:
    //   memwrite(waddr, 2, wdata, pc);
    //   break;
    // case 15:
    //   memwrite(waddr, 4, wdata, pc);
    //   break;
    // case 0xff:
    //   memwrite(waddr, 8, wdata, pc);
    //   break;
    // default:
    //   break;
    // }
    memwrite(waddr, (uint8_t)wr_mask, wdata, pc);
}

