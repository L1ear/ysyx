#include <common.h>
#include <elf.h>

extern uint64_t g_nr_guest_inst;
FILE *log_fp = NULL;
FILE *elf_fp = NULL;
Elf64_Ehdr elf_head;
Elf64_Shdr shdr[99];

void init_log(const char *log_file) {
  log_fp = stdout;
  if (log_file != NULL) {
    FILE *fp = fopen(log_file, "w");
    Assert(fp, "Can not open '%s'", log_file);
    log_fp = fp;
  }
  Log("Log is written to %s", log_file ? log_file : "stdout");
}

bool log_enable() {
  return MUXDEF(CONFIG_TRACE, (g_nr_guest_inst >= CONFIG_TRACE_START) &&
         (g_nr_guest_inst <= CONFIG_TRACE_END), false);
}


typedef struct {
  char* logbuf;
}ringbuf;
static ringbuf iringbuf[10];    //10个缓冲区
static int nr_i = 0;

void init_iringbuf(){
  for(int i=0;i<nr_i;i++){
    iringbuf[i].logbuf = NULL;
  }
}

void add_iringbuf(char *newlog){
  nr_i = nr_i % 10;
  free(iringbuf[nr_i].logbuf);
  iringbuf[nr_i].logbuf = (char *) malloc(sizeof(char)*(strlen(newlog)+1));
  strcpy(iringbuf[nr_i].logbuf,newlog);
  nr_i++;
}

void print_iringbuf(){
  for(int i=0; i<nr_i-1; i++){ 
      printf("  %s\n", iringbuf[i].logbuf);
      free(iringbuf[i].logbuf);
  }

  printf("->%s\n", iringbuf[nr_i-1].logbuf);
  free(iringbuf[nr_i-1].logbuf);

  for(int i=nr_i; i<10; i++){
    if(iringbuf[i].logbuf != NULL){
      printf("  %s\n", iringbuf[i].logbuf);
      free(iringbuf[i].logbuf);
    }
  }
}

#ifdef CONFIG_FTRACE
void init_ftrace(const char *elf_file) {
  elf_fp = stdout;
  int rtval;
  int nr_sc;
  if (elf_file != NULL) {
    FILE *fp = fopen(elf_file, "w");
    Assert(fp, "Can not open '%s'", elf_file);
    elf_fp = fp;
  }
  rtval = fread(&elf_head, sizeof(Elf64_Ehdr), 1, elf_fp);
  nr_sc = elf_head.e_shnum;
  fseek(elf_fp,elf_head.e_shoff,SEEK_SET);
  rtval = fread(shdr, sizeof(Elf64_Shdr),nr_sc, elf_fp);
  printf("rtval:%d\nnr_sc: %d\n",rtval,nr_sc);
  for(int i = 0; i<nr_sc; ++i){
    printf("%d  %c\n",i,shdr[i].sh_name);
  }
}
#endif