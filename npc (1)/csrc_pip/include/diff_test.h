#ifndef __DIFF_TEST_H__
#define __DIFF_TEST_H__

#include "common.h"

void difftest_step(long long pc);
void init_difftest(char *ref_so_file, long img_size, int port);
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

void difftest_skip_ref();


#endif