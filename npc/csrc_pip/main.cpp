#include "include/common.h"
#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <thread>

extern CPU_state cpu;
extern axi4_mem<64,64,4> mem;
extern axi4_ptr<64,64,4> mem_ptr;

void device_update();
void init_screen();

uint64_t nr_cycle = 0;
uint64_t nr_instr = 0;
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


void uart_input(uartlite &uart) {
    termios tmp;
    tcgetattr(STDIN_FILENO,&tmp);
    tmp.c_lflag &=(~ICANON & ~ECHO);
    tcsetattr(STDIN_FILENO,TCSANOW,&tmp);
    while (1) {
      // assert(0);
        char c = getchar();
        
        if (c == 10) c = 13; // convert lf to cr
        uart.putc(c);
        // printf("1\n");
        
    }
}

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
    axi4_ref<64,64,4> * memref;

    axi4     <64,64,4> mmio_sigs;
    axi4_ref <64,64,4> mmio_sigs_ref(mmio_sigs);
    axi4_ref <64,64,4> * mmioref;
    axi4_ptr <64,64,4> mmio_ptr;

    axi4_xbar<64,64,4> mmio; 

    uartlite           uart;
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
    init_screen();
   
    //********************************************************************
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
    // mmio_ptr.arid    = &(top->axi_mmio_ar_id_o); 
    // mmio_ptr.araddr  = &(top->axi_mmio_ar_addr_o);  
    // mmio_ptr.arlen   = &(top->axi_mmio_ar_len_o);  
    // mmio_ptr.arsize  = &(top->axi_mmio_ar_size_o);  
    // mmio_ptr.arburst = &(top->axi_mmio_ar_burst_o);  
    // mmio_ptr.arvalid = &(top->axi_mmio_ar_valid_o);  
    // mmio_ptr.arready = &(top->axi_mmio_ar_ready_i);  
    // mmio_ptr.rid     = &(top->axi_mmio_r_id_i);  
    // mmio_ptr.rdata   = &(top->axi_mmio_r_data_i);  
    // mmio_ptr.rresp   = &(top->axi_mmio_r_resp_i);  
    // mmio_ptr.rlast   = &(top->axi_mmio_r_last_i);  
    // mmio_ptr.rvalid  = &(top->axi_mmio_r_valid_i);  
    // mmio_ptr.rready  = &(top->axi_mmio_r_ready_o); 
    // mmio_ptr.awid    = &(top->axi_mmio_aw_id_o);
    // mmio_ptr.awaddr  = &(top->axi_mmio_aw_addr_o);
    // mmio_ptr.awlen   = &(top->axi_mmio_aw_len_o);
    // mmio_ptr.awsize  = &(top->axi_mmio_aw_size_o);
    // mmio_ptr.awburst = &(top->axi_mmio_aw_burst_o);
    // mmio_ptr.awvalid = &(top->axi_mmio_aw_valid_o);
    // mmio_ptr.awready = &(top->axi_mmio_aw_ready_i);
    // mmio_ptr.wdata   = &(top->axi_mmio_w_data_o);
    // mmio_ptr.wstrb   = &(top->axi_mmio_w_strb_o);
    // mmio_ptr.wlast   = &(top->axi_mmio_w_last_o);
    // mmio_ptr.wvalid  = &(top->axi_mmio_w_valid_o);
    // mmio_ptr.wready  = &(top->axi_mmio_w_ready_i);
    // mmio_ptr.bid     = &(top->axi_mmio_b_id_i);
    // mmio_ptr.bresp   = &(top->axi_mmio_b_resp_i);
    // mmio_ptr.bvalid  = &(top->axi_mmio_b_valid_i);
    // mmio_ptr.bready  = &(top->axi_mmio_b_ready_o);

    
    assert(mem_ptr.check());
    // assert(mmio_ptr.check());

    
    // axi4_ref <64,64,4> mmio_ref(mmio_ptr);
    
    // mmioref = &mmio_ref;
  
      
    
    
    // std::thread uart_input_thread(uart_input,std::ref(uart));
    // assert(mmio.add_dev(0xa00003f8,8,&uart));

    Log("axi check complete!");

    axi4_ref<64,64,4> mem_ref(mem_ptr);
    memref = &mem_ref;
    //*****************************************************************************************
    // assert(&((*memref).awid));
    sim_time = reset(sim_time);
  
    
    // int ff=40;
    // while(ff-->0){
    //   single_cycle(sim_time);
    //   sim_time = sim_time+2;
    // }
    

    en = 1;
    sdb_mainloop();
    // uart_input_thread.join();
    top->final();
    
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
  device_update();
//上升沿
  top->clk = 1; 
  //********************************************
  // mmio_sigs.update_input(*mmioref);
  mem_sigs.update_input(*memref);
  //********************************************
  top->eval();
  //********************************************
  mem.beat(mem_sigs_ref);
  // mmio.beat(mmio_sigs_ref);
  // while (uart.exist_tx()) {
  //   // assert(0);
  //   //             printf("1\r\n");
  //   // printf("%lx\n",top->axi_mmio_w_data_o);
  //               char c = uart.getc();
  //               printf("%c",c);
  //               fflush(stdout);
  //           }
  // mmio_sigs.update_output(*mmioref);
  mem_sigs.update_output(*memref);
  //********************************************
  // assert(!uart.irq());
  // //读指令
  // if(top->sram_ren){
  //   if(top->sram_addr!=0 && top->sram_addr_valid){
  //     uint64_t buf;
  //     mem.read(top->sram_addr & ~0x7ull, 8, (uint8_t *)(&buf));
  //     top->sram_rdata = buf;
  //     // top->sram_rdata = memread(top->sram_addr & ~0x7ull, 8, pc);
  //     int x = rand();
  //     top->sram_data_valid = 1;
  //   }
  //   else {
  //     top->sram_rdata = 0;
  //     top->sram_data_valid = 0;
  //   }
  // }
  // //读数据
  // if(top->ls_sram_rd_en){
  //   // uint64_t buf;
  //   // mem.read(top->sram_addr, 8, (uint8_t *)(&buf));
  //   // top->ls_sram_rd_data = buf;
  //   top->ls_sram_rd_data = memread(top->ls_sram_addr, 8, pc);
  //   top->ls_sram_rd_data_valid = rand() & 1;
  // }
  // else{
  //   top->ls_sram_rd_data = 0;
  //   top->ls_sram_rd_data_valid = 0;
  // }
  // //写数据
  // if(top->ls_sram_wr_en){
  //   //  uint64_t buf;
  //   // buf = top->ls_sram_wr_data;
  //   // mem.write(top->ls_sram_addr, (uint8_t)top->ls_sram_wr_mask, (uint8_t *)(&buf));
  //   memwrite(top->ls_sram_addr, (uint8_t)top->ls_sram_wr_mask, top->ls_sram_wr_data, pc);
  //   top->ls_sram_wr_data_ok = rand() & 1;
  // }
  // else{
  //   top->ls_sram_wr_data_ok = 0;
  // }
  top->eval();
#ifdef vcd
  fp ->dump(i);
#endif

#ifdef  difftest    
    int r;
    for (r = 0; r < 32; r++) {
      cpu.gpr[r] = cpu_gpr[r];
    }
#endif
    if((cpu.pc != 0x7ffffffc) && (cpu.pc != 0) && (instr_last != 0)&& (instr_last != 0x100073) && (stall == 1)){ 
      // assert(0); 
      if(en == 1 )
        {
#ifdef  difftest
          //               写串口的指令
          if(instr_last == 0x3ea78c23 ||instr_last == 0x0487b783){    //跳过printf和读取时间
            difftest_skip_ref();
          }
          Log("%08lx",instr_last);
          difftest_step(cpu.pc);
#endif          
        
          nr_instr++;
        }
      start = 0;
    }

    instr_last = top->instr_diff;
    stall = top->stall_n_diff;
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

  }
    
  else
  {
    Log("npc: \33[1;31mHIT BAD TRAP\33[0m at pc = %08x\n",cpu.pc);
    Log("after %d instructions", nr_instr);
    err = 1;
  }
}

extern "C"  void axiSlaveRead(long long raddr, char size, long long* rdata){
      // printf("addr:%016llx \nsize: %d\ndata: %016llx\n",raddr, 2^size, memread(raddr & ~0x7ull, 8, pc));
      // assert(0);
      *rdata = memread(raddr & ~0x7ull, pow(2,(double)size), 0);
}
extern "C"  void axiSlaveWrite(long long waddr, char size, long long wdata, char wmask){
    uint8_t WRdata[8] = {wdata, wdata>>8, wdata>>16, wdata>>24, wdata>>32, wdata>>40, wdata>>48, wdata>>56};
    // printf("addr:%016llx\n",raddr);
    // printf("addr:%016llx \nmask:%d\no_data:%016llx\nWRdata:%016llx\n\n",waddr,(uint8_t)wmask, wdata, *(uint8_t*)(WRdata+7));
    // assert(0);

  int t;
  // printf("addr:%lx mask:%d\n",waddr, (uint8_t)wmask);
  for(t=0;t<8;t++){
    if((uint8_t)wmask & (uint8_t)1){
      memwrite(waddr+t, 1, WRdata[t], 0);
    }
    wmask>>1;
  }
  

    // switch (size)
    // {
    // case 0:
    //     switch ((uint8_t)wmask)
    //     {
    //     case 1:
    //       memwrite(waddr, 1, WRdata[0], 0);
    //       break;
    //     case 2:
    //       memwrite(waddr, 1, WRdata[1], 0);
    //       break;
    //     case 4:
    //       memwrite(waddr, 1, WRdata[2], 0);
    //       break;
    //     case 8:
    //       memwrite(waddr, 1, WRdata[3], 0);
    //       break;
    //     case 16:
    //       memwrite(waddr, 1, WRdata[4], 0);
    //       break;
    //     case 32:
    //       memwrite(waddr, 1, WRdata[5], 0);
    //       break;
    //     case 64:
    //       memwrite(waddr, 1, WRdata[6], 0);
    //       break;
    //     case 128:
    //       memwrite(waddr, 1, WRdata[7], 0);
    //       // printf("**************************\naddr:%016llx \no_data:%016llx\nWRdata:%016llx\n*********************\n",waddr, wdata, *(uint8_t*)(WRdata+7));
    //       break;
    //     default:
    //       break;
    //     }
    //   break;
    // case 1:
    //   switch ((uint8_t)wmask)
    //   {
    //   case 3:
    //   // assert(0);
    //     // printf("addr:%016llx \nsize: %d\ndata: %016llx\n",waddr, 2, *(uint16_t *)WRdata);
    //     memwrite(waddr, 2, *(uint16_t *)WRdata, 0);
    //     break;
    //   case 12:
    //     memwrite(waddr, 2, *(uint16_t *)(WRdata+2), 0);
    //     break;
    //   case 48:
    //     memwrite(waddr, 2, *(uint16_t *)(WRdata+4), 0);
    //     break;
    //   case 192:
    //     memwrite(waddr, 2, *(uint16_t *)(WRdata+6), 0);
    //     break;
    //   default:
    //     break;
    //   }
    //   break;
    // case 2:
    //   switch ((uint8_t)wmask)
    //   {
    //   case 15:
    //     memwrite(waddr, 4, *(uint32_t *)WRdata, 0);
    //     break;
    //   case 240:
    //     memwrite(waddr, 4, *(uint32_t *)(WRdata+4), 0);
    //     break;
    //   default:
    //     break;
    //   }
    // break;
    // case 3:
    //   memwrite(waddr, 8, *(uint64_t *)WRdata, 0);
    // break;
    // default:
    //   break;
    // }
}
