#ifndef __DIFF_TEST_H__
#define __DIFF_TEST_H__

#include </home/qw/ysyx-workbench/npc/csrc/common.h>

void difftest_step(uint64_t pc);
void init_difftest(char *ref_so_file, long img_size, int port);
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };




#endif