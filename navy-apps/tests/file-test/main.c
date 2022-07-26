#include <stdio.h>
#include <assert.h>

int main() {
  FILE *fp = fopen("/share/files/num", "r+");
  assert(fp);

  printf("used fseek to end\n");
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  assert(size == 5000);
  printf("used fseek to set\n");
  fseek(fp, 500 * 5, SEEK_SET);
  int i, n;
  for (i = 500; i < 1000; i ++) {
    fscanf(fp, "%d", &n);
    assert(n == i + 1);
  }
  printf("used fseek to set1\n");
  fseek(fp, 0, SEEK_SET);
  printf("begin write\n");
  for (i = 0; i < 500; i ++) {
    fprintf(fp, "%4d\n", i + 1 + 1000);
    printf("??????????????????");
    fseek(fp, -5, SEEK_CUR);
     fscanf(fp, "%d", &n);
    printf("*******************************************%4x\n",n);
  }

  for (i = 500; i < 1000; i ++) {
    fscanf(fp, "%d", &n);
    // printf("%d\n",n);
    assert(n == i + 1);
  }
  printf("used fseek to set2\n");
  fseek(fp, 0, SEEK_SET);
  for (i = 0; i < 500; i ++) {
    fscanf(fp, "%d", &n);
    printf("%d\n",n);
    assert(n == i + 1 + 1000);
  }

  fclose(fp);

  printf("PASS!!!\n");

  return 0;
}
