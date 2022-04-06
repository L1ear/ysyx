#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */

} WP;

WP* new_wp();
void free_wp(WP *wp);

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
WP* new_wp(){
  if (free_ == NULL){
    Log("Fatal error:free is null");
    assert(0);
  }
//指针区操作
  WP* new_link= free_;    //新建链表  
  if(head != NULL) {
  	head->next = new_link;
  }
  head = new_link;
  if(free_->next ==NULL){
  	Log("WatchPoint is going to be full, please release some\n");
  }
  free_ = free_->next;    //处理未使用链表指针
  new_link->next = NULL;  //处理下一指针 
  return new_link;
//数据区操作
//TODO

}


