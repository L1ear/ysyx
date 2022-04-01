#include <cpu/cpu.h>

void sdb_mainloop();

void engine_start() {
#ifdef CONFIG_TARGET_AM
  cpu_exec(-1);
#else
  /* Receive commands from user. */
  // sdb_mainloop();
  /* Test expr */
  FILE *file = fopen("../tools/gen_expr/input", "r");     
  if(file == NULL)
  {
      printf("open error!\n");
      return 0;
  }
#endif
}
