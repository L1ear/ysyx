#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>

word_t expr(char *e, bool *success);
uint32_t eval(int p, int q);
int check_parentheses(int p, int q);
int fun(int start, int end);
int pir(char op);
int operator_find(p,q);


#endif
