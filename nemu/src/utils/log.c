#include <common.h>

extern uint64_t g_nr_guest_inst;
FILE *log_fp = NULL;

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


// typedef struct {
//   char* logbuf;
// }ringbuf;
// static ringbuf iringbuf[10];    //10个缓冲区
// static int nr_i = 0;

// void init_iringbuf(){
//   for(int i=0;i<nr_i;i++){
//     iringbuf[i].logbuf = NULL;
//   }
// }

// void add_iringbuf(char *newlog){
//   nr_i = nr_i % 10;
//   free(iringbuf[nr_i].logbuf);
//   iringbuf[nr_i].logbuf = (char *) malloc(sizeof(char)*(strlen(newlog)+1));
//   strcpy(iringbuf[nr_i].logbuf,newlog);
//   nr_i++;
// }

// void print_iringbuf(){
//   for(int i=0; i<nr_i-1; i++){ 
//       printf("  %s\n", iringbuf[i].logbuf);
//       free(iringbuf[i].logbuf);
//   }

//   printf("->%s\n", iringbuf[nr_i-1].logbuf);
//   free(iringbuf[nr_i-1].logbuf);

//   for(int i=nr_i; i<10; i++){
//     if(iringbuf[i].logbuf != NULL){
//       printf("  %s\n", iringbuf[i].logbuf);
//       free(iringbuf[i].logbuf);
//     }
//   }
// }