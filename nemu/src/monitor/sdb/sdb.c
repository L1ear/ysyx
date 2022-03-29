#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include "memory/paddr.h"

#define CLOSE "\001\033[0m\002"                 // 关闭所有属性
#define BLOD  "\001\033[1m\002"                 // 强调、加粗、高亮
#define BEGIN(x,y) "\001\033["#x";"#y"m\002"    // x: 背景，y: 前景



static int is_batch_mode = false;

void init_regex();
void init_wp_pool();
bool make_token();

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


/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline(BEGIN(49, 34)"(nemu) "CLOSE);

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}

static int cmd_si(char *args) {
  cpu_exec(*args -48);
  return 0;
}

static int cmd_q(char *args) {
  return -1;
}

static int cmd_info(char *args) {
  if(*args == 'r')  isa_reg_display();
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
    printf("0x%lx: %08lx\n",htoi(bg_addr)+i*4,paddr_read(htoi(bg_addr)+i*4,4));
  }
  return 0;
}

static int cmd_p(char *args) {
  //int i;
  if (args == NULL) { 
    printf("Please enter the expression\n");
    return 0;
  }
  make_token(args);
  return 0;
}

static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },

  /* TODO: Add more commands */
  { "si", "Single excute",  cmd_si},
  { "info", "Print program state",  cmd_info},
  { "x",  "scan the mem", cmd_x},
  { "p",  "expression evaluation",  cmd_p}
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

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
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

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

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

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
