#include <readline/readline.h>
#include <readline/history.h>
#include <stdlib.h>
#include </home/qw/ysyx-workbench/npc/csrc/common.h>

#define CLOSE "\001\033[0m\002"                 // 关闭所有属性
#define BLOD  "\001\033[1m\002"                 // 强调、加粗、高亮
#define BEGIN(x,y) "\001\033["#x";"#y"m\002"    // x: 背景，y: 前景

extern int sim_time;
extern int en;


CPU_state cpu = {};
uint64_t htoi(char s[])
{
    int i;
    uint64_t n = 0;
    if (s[0] == '0' && (s[1]=='x' || s[1]=='X'))
    {
            i = 2;
        }
    else
    {
            i = 0;
        }
    for (; (s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >='A' && s[i] <= 'Z');++i)
    {
            if (tolower(s[i]) > '9')
            {
                        n = 16 * n + (10 + tolower(s[i]) - 'a');
                    }
            else
            {
                        n = 16 * n + (tolower(s[i]) - '0');
                    }
        }
    return n;
}

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
// 一个输出RTL中通用寄存器的值的示例
void dump_gpr() {
  int i;
  for (i = 0; i < 32; i++) {
    printf("%s is: 0x%08lx    ",reg_name(i,64), cpu_gpr[i]);
    if (i % 3 == 0)   printf("\n");
  }
  printf("\n");
}



static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline(BEGIN(49, 34)"(npc) "CLOSE);

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_q(char *args) {
  return -1;
}

static int cmd_c(char *args) {
    while(en)
    {
      single_cycle(sim_time);
        // nvboard_update();
      sim_time = sim_time+2;
        //if(i>=1000) en = 0;
    }
  return 0;
}

static int cmd_si(char *args) {
    if(en == 1){
        if (args == NULL) { 
            single_cycle(sim_time);
            sim_time = sim_time+2;
    // Log("PC: %lx\n",cpu.pc);
            dump_gpr();
        }
        else
            for(int i = atoi(args);i>0;i++){
                single_cycle(sim_time);
                sim_time = sim_time+2;
            }
        return 0;
    }
  else 
    Log("program has finished,please quit and restart\n");
    return 0;
}

static int cmd_info(char *args) {
  if(*args == 'r')  dump_gpr();
//   if(*args == 'w')  print_wp();
  return 0;
}

static int cmd_x(char *args) {
  int i;
  if (args == NULL) { 
    printf("Please enter the number of mem you want show, and the address where to begin\n");
    return 0;
  }
  char *mem_end = args + strlen(args);
  //printf("%p,%p\n",args,mem_end);
  /* extract the first token as the command */
  char *mem_cnt = strtok(args, " ");
  if (mem_cnt == NULL) { 
    printf("Please enter the number of mem you want show, and the address where to begin\n");
    return 0;
  }

  /* treat the remaining string as the arguments,
    * which may need further parsing
    */
  char *bg_addr = mem_cnt + strlen(mem_cnt) + 3;
  if (bg_addr >= mem_end) {
    bg_addr = NULL;
  }
  if (bg_addr == NULL) { 
    printf("Please enter the number of mem you want show, and the address where to begin in format:0x(xxxxxxxx) \n");
    return 0;
  }
  //printf("the amount of mem: %d\nthe begin addr: %lx \n",atoi(mem_cnt),htoi(bg_addr));
  for(i = 0; i<atoi(mem_cnt); i++)
  {
    printf("0x%lx: %08lx\n",htoi(bg_addr)+i*4,memread(htoi(bg_addr)+i*4,4,NULL));
  }
  return 0;
}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },

//   /* TODO: Add more commands */
  { "si", "Single excute",  cmd_si},
  { "info", "Print program state",  cmd_info},
  { "x",  "scan the mem", cmd_x},
//   { "p",  "expression evaluation",  cmd_p},
//   { "w",  "set watchpoint", cmd_w},
//   { "d",  "delete watchpoint", cmd_d}
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

static int is_batch_mode = false;

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    // cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }


    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; } 
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}
