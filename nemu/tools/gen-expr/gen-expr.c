#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65535] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"#include <stdint.h>\n"
"int main() { "
"  uint64_t result = %s; "
"  printf(\"%%lu\", result); "
"  return 0; "
"}";

static int cycle=0;

static int choose(int i){
  return rand()%i;
}
static void gen_num(){
  char str[20];
  int num = choose(64);
  if(num == 0) num++;
 // printf ("%d\n",num);
  sprintf(str,"%d",num);
  strcat(buf,str);
}
static void gen(char cha){
  char pcha[2] = {cha,'\0'};
  strcat(buf,pcha);
}
static int gen_rand_op(){
  char pcha[2]={'\0','\0'};
  switch (choose(4)) {
    case 0:
      pcha[0] = '+';
      strcat(buf,pcha);
      break;
    case 1:
      pcha[0] = '-';
      strcat(buf,pcha);
      break;
    case 2:
      pcha[0] = '/';
      strcat(buf,pcha);
      return 1;
      break;
    case 3:
      pcha[0] = '*';
      strcat(buf,pcha);
      break;
  }
  return 0;
}

static int chuflag = 0;
static void gen_rand_expr() {
  //buf[0] = '\0';
  cycle++;
  int x;
  if(cycle>20||chuflag == 1) x =0;
  else x= choose(3);
    switch (x) {
    case 0: gen_num(); break;
    case 1: gen('('); gen_rand_expr(0); gen(')'); break;
    default: 
      gen_rand_expr(); 
      if (gen_rand_op()) {
        chuflag = 1;
        gen_rand_expr();
        chuflag = 0;
      }
      else gen_rand_expr(); 
      break;
  }
}
//用全局flag? --可以
int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    buf[0] = '\0';
    cycle = 0;
    gen_rand_expr();

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result,fhz;
    fhz = fscanf(fp, "%d", &result);
    assert(fhz);
    //printf("%d\n",fhz);
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
