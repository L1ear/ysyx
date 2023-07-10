// #include <common.h>

// #if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
// # define MULTIPROGRAM_YIELD() yield()
// #else
// # define MULTIPROGRAM_YIELD()
// #endif

// #define NAME(key) 
//   [AM_KEY_##key] = #key,

// static const char *keyname[256] __attribute__((used)) = {
//   [AM_KEY_NONE] = "NONE",
//   AM_KEYS(NAME)
// };

// size_t serial_write(const void *buf, size_t offset, size_t len) {
//   for(int i = 0; i < len;i ++) {
//     putch(((char*)buf)[i]);
//   }
//   return len;
// }

// size_t events_read(void *buf, size_t offset, size_t len) {
//   return 0;
// }

// size_t dispinfo_read(void *buf, size_t offset, size_t len) {
//   return 0;
// }

// size_t fb_write(const void *buf, size_t offset, size_t len) {
//   return 0;
// }

// void init_device() {
//   Log("Initializing devices...");
//   ioe_init();
// }

#include <common.h>
#include <sys/time.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

int fs_open(const char *pathname, int flags, int mode);
size_t fs_read(int fd, void *buf, size_t len);
size_t fs_write(int fd, const void *buf, size_t len);
size_t fs_lseek(int fd, size_t offset, int whence);
int fs_close(int fd);

static int w,h;

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  for(int i = 0; i < len;i ++) {
      putch(((char*)buf)[i]);
    }
  return len;
}

/*
    按下按键事件, 如 kd RETURN  表示按下回车键
    松开按键事件, 如 ku A       表示松开A键
*/

size_t events_read(void *buf, size_t offset, size_t len) {
  AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
  if(ev.keycode == AM_KEY_NONE) {
    return 0;
  }
  else{
    // memset(buf,0,len);
    if(ev.keydown)
    {
      sprintf((char*)buf,"kd %d\0",ev.keycode);
    }
    else sprintf((char*)buf,"ku %d\0",ev.keycode);
    //printf("%s %d",(char*)buf,strlen((char*)buf));
    return strlen((char*)buf);
  }
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {

  return sprintf((char*)buf,"WIDTH:%d\nHEIGHT:%d\n",w,h);
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  size_t offset_byte = offset >> 2;
  int x = offset_byte%w;
  int y = offset_byte/w;
  if(offset+len > w*h*4) len = w*h*4 - offset;
  io_write(AM_GPU_FBDRAW,x,y,(uint32_t*)buf,len/4,1,false);
  assert(offset <= w*h*4);
  return len;
}
//在这里处理超出的字符

size_t fb_sync(const void *buf,size_t offset,size_t len)
{
  assert(((char*)buf)[0] == '1');
  //printf("refresh\n");
  // assert(offset == 0);
  io_write(AM_GPU_FBDRAW, 0, 0, NULL, 0, 0, true);
  return 1;
}


/*其参数tv是保存获取时间结果的结构体，参数tz用于保存时区结果：
struct timezone{
int tz_minuteswest;//格林威治时间往西方的时差
int tz_dsttime;//DST 时间的修正方式
}
timezone 参数若不使用则传入NULL即可。
而结构体timeval的定义为：
struct timeval{
long int tv_sec; // 秒数
long int tv_usec; // 微秒数
}
*/
int sys_gettimeofday(struct timeval *tv,struct timezone *tz)
{
  tv->tv_sec = io_read(AM_TIMER_UPTIME).us /1000000;
  tv->tv_usec = io_read(AM_TIMER_UPTIME).us%1000000;
  return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
  w = io_read(AM_GPU_CONFIG).width;
  h = io_read(AM_GPU_CONFIG).height;
  
}
