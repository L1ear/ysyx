#include <dlfcn.h>
#include </home/qw/ysyx-workbench/npc/csrc/common.h>
#include </home/qw/ysyx-workbench/npc/csrc/diff_test.h>

extern uint8_t imem;
extern CPU_state cpu;
extern const char* regs[];

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
// void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;



void init_difftest(char *ref_so_file, long img_size, int port) {
    assert(ref_so_file != NULL);

    void *handle;
    handle = dlopen(ref_so_file, RTLD_LAZY | 0);
    assert(handle);
    
    ref_difftest_memcpy = (void (*)(paddr_t addr, void *buf, size_t n, bool direction))dlsym(handle, "difftest_memcpy");
    assert(ref_difftest_memcpy);

    ref_difftest_regcpy = (void (*)(void *dut, bool direction))dlsym(handle, "difftest_regcpy");
    assert(ref_difftest_regcpy);

    ref_difftest_exec = (void (*)(uint64_t n))dlsym(handle, "difftest_exec");
    assert(ref_difftest_exec);

    // ref_difftest_raise_intr = dlsym(handle, "difftest_raise_intr");
    // assert(ref_difftest_raise_intr);

    void (*ref_difftest_init)(int) = (void (*)(int))dlsym(handle, "difftest_init");
    assert(ref_difftest_init);

    ref_difftest_init(port);
    ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
    ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}

static inline bool difftest_check_reg(const char *name, uint64_t pc, word_t ref, word_t dut) {
  if (ref != dut) {
    Log("%s is different after executing instruction at pc = " FMT_WORD
        ", right = " FMT_WORD ", wrong = " FMT_WORD ", diff = " FMT_WORD,
        name, pc, ref, dut, ref ^ dut);
    return false;
  }
  return true;
}

void difftest_step(uint64_t pc) {
  CPU_state ref_r;

  // ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);

//   checkregs(&ref_r, pc);
    for(int i=0;i<32;i++){
		if(!difftest_check_reg(regs[i],pc,ref_r.gpr[i],cpu.gpr[i]))
			en = 0;
	}
}


