#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>

uint32_t expr(char *e, bool *success);
int eval(int p, int q);
int check_parentheses(int p, int q);
int fun(int start, int end);
int op_pir(char op);
int operator_find(int p,int q);


#endif
