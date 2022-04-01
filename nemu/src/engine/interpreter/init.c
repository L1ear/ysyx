#include <cpu/cpu.h>
#include <sdb.h>

void sdb_mainloop();

void engine_start() {
#ifdef CONFIG_TARGET_AM
  cpu_exec(-1);
#else
  /* Receive commands from user. */
  // sdb_mainloop();
  /* Test expr */
  FILE *file = fopen("/home/qw/ysyx-workbench/nemu/tools/gen-expr/input", "r");     
  if(file == NULL)
  {
      printf("open error!\n");
  }
  else printf("open successful!\n");
  char buf[1024] = {0};
  word_t result = 0;
  static bool *success;
  assert(fscanf(file, "%lu %s", &result, buf));
  printf("%lu\n", result);
  printf("%s\n", buf);
  printf("%lu\n", expr(buf, success));
  
#endif
}
