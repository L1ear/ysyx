#include <am.h>
// #include <nemu.h>

# define W    400
# define H    300
#define FB_ADDR         (0xa1000000)
#define VGACTL_ADDR     (0xa0000100)

#define SYNC_ADDR (VGACTL_ADDR + 4)
static inline void outl(uintptr_t addr, uint32_t data) { *(volatile uint32_t *)addr = data; }
static inline void outb(uintptr_t addr, uint8_t  data) { *(volatile uint8_t  *)addr = data; }

void __am_gpu_init() {
//   int i;
//   int w = W;  // TODO: get the correct width
//   int h = H;  // TODO: get the correct height
//   uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
//   for (i = 0; i < w * h; i ++) fb[i] = i;
//   outl(SYNC_ADDR, 1);
//   while(1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = W, .height = H,
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  uint32_t *pixels = (uint32_t*)(ctl->pixels);
  int x = ctl->x, y = ctl->y;
  int w = ctl->w, h = ctl->h;
 
  for(int j = 0; j< h; j++){
    for(int i = 0; i< w; i++){
      fb[(y+j)*W+(x+i)] = *(pixels+j*w+i);
    }
  }
  if (ctl->sync) {
    outb(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
