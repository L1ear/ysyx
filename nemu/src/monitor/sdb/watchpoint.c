#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  bool used;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */

} WP;

WP* new_wp();
void free_wp(int n);
void set_WP();
void print_wp();

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL, *begin = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
    wp_pool[i].used = false;
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
  WP* new_link;    //新建链表 
  new_link= free_;
  if (head == NULL){
    begin = new_link;
  } 
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


void free_wp(int n){
  int i = 0;
  WP* p = begin,*q = NULL;
  for (i = 1; p != NULL; i++){
    if((p->next)->next == NULL){
      Log("????????");
      q = p;         //提前预判要删除的是不是最后一个
    }
    if ((i+1) == n) p->next = (p->next)->next;
    if(i == n){
      p->next = free_;
      free_ = p;
      Log("delete watchpoint: %d",n);
      break;
    }
    p = p->next;
  }
  if (p != NULL && q != NULL){
    head = q;
    //head->next =NULL;
  }
  if (p == NULL){
    Log("Have not find watchpoint :%d\n", n);
  }
}


void print_wp(){
  if (begin == NULL){
    Log("There is no watchpoint!\n");
  }
  else{
    WP *p = begin;
    int i=1;
    do{
      printf("%d  %d\n",i,p->NO);
      p=p->next;
      i++;
    }while(p != NULL);
  }

} 

void set_WP(){
  printf("Set new watchpoint:%lx\n",(word_t)new_wp());
}