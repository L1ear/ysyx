#include <common.h>
#include "syscall.h"
#include <sys/time.h>
#include <proc.h>

#define strace

int fs_open(const char *pathname, int flags, int mode);
size_t fs_read(int fd, void *buf, size_t len);
size_t fs_write(int fd, const void *buf, size_t len);
size_t fs_lseek(int fd, size_t offset, int whence);
int fs_close(int fd);
int sys_execve(char* filename,char * const argc[],char* const envp[]);
void naive_uload(PCB *pcb, const char *filename);

int sys_gettimeofday(struct timeval *tz,struct timezone *tv);

void do_syscall(Context *c) {
  uint64_t a[4];
  a[0] = c->GPR1;   //a7
  a[1] = c->GPR2;   //a0
  a[2] = c->GPR3;   //a1
  a[3] = c->GPR4;   //a2
    // int fd = a[1];
    // void *buf = (void*) a[2];
    // size_t len = a[3];
  switch (a[0]) {
    case SYS_yield: 
    #ifdef strace
      printf("syscall yield!\n");
    #endif
      yield(); 
      break;
    case SYS_exit:  
    #ifdef strace
      printf("syscall halt: %d\n",a[1]);
    #endif
      halt(a[1]);
      break;
    case SYS_brk:  
    #ifdef strace
      printf("syscall brk\n");
    #endif
      c->GPRx = 0; 
      break;
    case SYS_open: 
      c->GPRx = fs_open((void *)a[1], a[2], a[3]); 
    #ifdef strace
      printf("syscall openat:%s, flag:%d, mode:%d return %d\n",(void *)a[1], a[2], a[3],c->GPRx);
    #endif
      break;
    case SYS_read: 
      c->GPRx = fs_read(a[1], (void*)a[2], a[3]); 
      break;
    case SYS_lseek:
      c->GPRx = fs_lseek(a[1], (long)a[2], a[3]); 
      break;
    case SYS_write:
    //返回写入的数量
      c->GPRx = fs_write(a[1], (const void *)a[2], a[3]); 
      printf("writed:%d\n",c->GPRx);
      break;
    case SYS_close:
      c->GPRx = fs_close(a[1]); 
      break;
    case SYS_gettimeofday: 
      c->GPRx = sys_gettimeofday((struct timeval *)a[1],(struct timezone *)a[2]); 
      break;
    case SYS_execve: 
      c->GPRx = sys_execve((char*)a[1],(char**)a[2],(char**)a[3]); 
      break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}


int sys_execve(char* filename,char * const argc[],char* const envp[])
{
  int ret = 0;
  //  printf("????????%s\n",filename);
  // for(int cnt = 0;envp[cnt] != NULL;cnt+=1)
  // {
  //   char* path = (char*)malloc(strlen(filename)+strlen(envp[cnt])+5);
  //   strcpy(path,envp[cnt]);
  //   memset(path+strlen(envp[cnt])/2+1,0,strlen(envp[cnt]));
  //   path = strcat(path,"/");
  //   path = strcat(path,filename);
    
    printf("????????%s\n",filename);
    if(fs_open(filename,0,0)!= -1)
    {
      printf("************%s\n",filename);
      naive_uload(NULL,filename);
      // break;
    }
  // }
  // printf("*********%s\n", filename);
  ret = fs_open(filename,0,0);
  return ret;
}

