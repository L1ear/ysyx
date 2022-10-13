#include "include/common.h"

extern CPU_state cpu;
extern axi4_mem<64,64,4> mem;
extern axi4_ptr<64,64,4> mem_ptr;
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

    axi4<64,64,4> mem_sigs;
    axi4_ref<64,64,4> mem_sigs_ref(mem_sigs);
    axi4_ref<64,64,4> mem_ref(mem_ptr);
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

    mem_ptr.arid    = &(top->axi_ar_id_o); 
    mem_ptr.araddr  = &(top->axi_ar_addr_o);  
    mem_ptr.arlen   = &(top->axi_ar_len_o);  
    mem_ptr.arsize  = &(top->axi_ar_size_o);  
    mem_ptr.arburst = &(top->axi_ar_burst_o);  
    mem_ptr.arvalid = &(top->axi_ar_valid_o);  
    mem_ptr.arready = &(top->axi_ar_ready_i);  
    mem_ptr.rid     = &(top->axi_r_id_i);  
    mem_ptr.rdata   = &(top->axi_r_data_i);  
    mem_ptr.rresp   = &(top->axi_r_resp_i);  
    mem_ptr.rlast   = &(top->axi_r_last_i);  
    mem_ptr.rvalid  = &(top->axi_r_valid_i);  
    mem_ptr.rready  = &(top->axi_r_ready_o); 
    mem_ptr.awid    = &(top->axi_aw_id_o);
    mem_ptr.awaddr  = &(top->axi_aw_addr_o);
    mem_ptr.awlen   = &(top->axi_aw_len_o);
    mem_ptr.awsize  = &(top->axi_aw_size_o);
    mem_ptr.awburst = &(top->axi_aw_burst_o);
    mem_ptr.awvalid = &(top->axi_aw_valid_o);
    mem_ptr.awready = &(top->axi_aw_ready_i);
    mem_ptr.wdata   = &(top->axi_w_data_o);
    mem_ptr.wstrb   = &(top->axi_w_strb_o);
    mem_ptr.wlast   = &(top->axi_w_last_o);
    mem_ptr.wvalid  = &(top->axi_w_valid_o);
    mem_ptr.wready  = &(top->axi_w_ready_i);
    mem_ptr.bid     = &(top->axi_b_id_i);
    mem_ptr.bresp   = &(top->axi_b_resp_i);
    mem_ptr.bvalid  = &(top->axi_b_valid_i);
    mem_ptr.bready  = &(top->axi_b_ready_o);
    
    assert(mem_ptr.check());
    
    Log("axi check complete!");

    
    sim_time = reset(sim_time);
    Log("after reset");
    
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
  mem_sigs.update_input(mem_ref);
  top->eval();

  mem.beat(mem_sigs_ref);
  mem_sigs.update_output(mem_ref);
  //读指令
  if(top->sram_ren){
    if(top->sram_addr!=0 && top->sram_addr_valid){
      uint64_t buf;
      mem.read(top->sram_addr & ~0x7ull, 8, (uint8_t *)(&buf));
      top->sram_rdata = buf;
      // top->sram_rdata = memread(top->sram_addr & ~0x7ull, 8, pc);
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
    //  uint64_t buf;
    // buf = top->ls_sram_wr_data;
    // mem.write(top->ls_sram_addr, (uint8_t)top->ls_sram_wr_mask, (uint8_t *)(&buf));
    memwrite(top->ls_sram_addr, (uint8_t)top->ls_sram_wr_mask, top->ls_sram_wr_data, pc);
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


