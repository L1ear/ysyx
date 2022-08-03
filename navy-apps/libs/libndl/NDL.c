#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>
#include <assert.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
static int canvas_w = 0, canvas_h = 0;//记录打开的画布的大小
static uint32_t* canvas =NULL;
static struct timeval now;
static int place_x = 0,place_y = 0;
static int fb_sync = 0, fb_dispinfo = NULL,fb = NULL,fb_event = NULL;


void get_screen();

uint32_t NDL_GetTicks() {
  gettimeofday(&now,NULL);
  //printf("sec %d ms%d\n",now.tv_sec,now.tv_usec/1000);
  return now.tv_sec*1000+now.tv_usec/1000;
}


int NDL_PollEvent(char *buf, int len) {
  lseek(fb_event,0,SEEK_SET);
  assert(fb_event != NULL);
  memset(buf,0,len);
  /* int ret = fread(buf ,1,3,fp);
  fscanf(fp,"%s",buf+3); */
  //printf("%d\n",len);
  int ret = read(fb_event,buf,len);
  if(ret == 0) return 0;
  for(int i = 0; i < len&&ret != 0;i++)
  {
    if(buf[i] == '\n') 
    {
      buf[i] = '\0';
      return ret;
    }
  }
  /* if(buf[0]=='0') {
    //printf("NDL NULL\n");
    return 0;
  } */
  /* char * str = buf+3;
  fscanf(fp,"%s", str);
  //if(l != -1) printf("%s l = %d len = %d\n",buf,l,len);
  fclose(fp);
  return 1;
  assert(0); */
}

void NDL_OpenCanvas(int *w, int *h) {
  //printf("h = %d  w = %d\n",*h,*w);
  get_screen();
  if(*w == 0&&*h == 0) {
    canvas_w = screen_w;
    canvas_h = screen_h;
    *w = screen_w;
    *h = screen_h;
  }
  else {
    if(*h <= screen_h)
      canvas_h = *h;
    else canvas_h = screen_h;
    if(*w <= screen_w)
      canvas_w = *w;
    else canvas_w = screen_w;
  }
  /* if(canvas) {
    assert(0);
    free(canvas);
  }   */
  assert(canvas == NULL);
  canvas = (uint32_t*)malloc(sizeof(uint32_t)*(*w)*(*h));
  memset(canvas,0,sizeof(canvas));
  place_x = (screen_w - canvas_w)/2;
  place_y = (screen_h - canvas_h)/2;
  //printf("Open canvas h = %d w = %d   ",*w,*h);
  //printf("screen h = %d w = %d\n",screen_w,screen_h);
  
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }//pa3 ignore
}

//不能用fscanf，要改    //已改
void get_screen() {
  // char buf[128]={0};
  // read(fb_dispinfo,buf,sizeof(buf));
  // sscanf(buf,"%*[^:]:%*[ ]%d\n%*[^:]:%*[ ]%d\n",&screen_w,&screen_h);
  // printf("w: %d   h: %d\n", screen_w, screen_h);
  screen_w = 400;
  screen_h = 300;
  assert(screen_w >=0);
  return;
}

//static int k = 0;
void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  assert(fb != NULL);
  if(h == 0||h > canvas_h)
    h = canvas_h;
  if(w == 0||w > canvas_w)
    w = canvas_w;
  //printf("Draw in: w = %d h = %d,canvas: w=%d h=%d\n",w,h,canvas_w,canvas_h);
  //printf("screen h = %d w = %d\n",screen_w,screen_h);
  //printf("%d\n",4*(y*wid+x)); 
  for(int i = 0;i < h;i ++)
    for(int j = 0;j < w;j ++)
    {
      canvas[(y+i)*canvas_w+x+j] = pixels[i*w+j];
    }
    
  for(int i = 0;i < canvas_h;i ++)
  {
    //printf("seek %d color = %d\n",4*((i+place_y)*screen_w+place_x),*(canvas+i*canvas_w+canvas_w/2));
    lseek(fb,4*((i+place_y)*screen_w+place_x),SEEK_SET);
    write(fb,(void*)(canvas+i*canvas_w),4*canvas_w);
  }
  //有可能有问题的部分  
  //画布应该是一个虚拟对象，而不是一个实体数组(不知道）
  // fseek(fb_sync,0,SEEK_SET);
  
  write(fb_sync,"1",1);
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  fb = open("/dev/fb","w");
  fb_event = open("/dev/events","r");
  fb_sync = open("/dev/sync","w");
  fb_dispinfo = open("/proc/dispinfo","r");
  assert(fb_sync != NULL);
  now.tv_sec = now.tv_usec = 0;
  return 0;
}

void NDL_Quit() {
  now.tv_sec = now.tv_usec = 0;
  free(canvas);
  // assert(0);
  close(fb_event);
 
  close(fb); 
  close(fb_sync);
  close(fb_dispinfo);
}
