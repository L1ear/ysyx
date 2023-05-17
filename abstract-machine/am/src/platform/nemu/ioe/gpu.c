#include <am.h>
#include <nemu.h>

# define W    400
# define H    300
#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
  // int i;
  // int w = W;  // TODO: get the correct width
  // int h = H;  // TODO: get the correct height
  // uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  // for (i = 0; i < w * h; i ++) fb[i] = i;
  // outl(SYNC_ADDR, 1);
  // // while(1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = W, .height = H,
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  uint32_t *framebuffer = (uint32_t *)FB_ADDR;
  uint16_t ps_x = ctl->x, ps_y = ctl->y;
  uint32_t *pixelbuffer = (uint32_t *)ctl->pixels;
  uint16_t px_w = ctl->w, px_h = ctl->h;
  int x,y;
  for(y=0; y<px_h; y++){
    for(x=0; x<px_w; x++){
      framebuffer[(ps_y+y)*W + (ps_x + x)] = *(pixelbuffer + y*px_w +x);
    }
  }

  // uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  // uint32_t *pixels = (uint32_t*)(ctl->pixels);
  // int x = ctl->x, y = ctl->y;
  // int w = ctl->w, h = ctl->h;
  // for(int j = 0; j< h; j++){
  //   for(int i = 0; i< w; i++){
  //     fb[(y+j)*W+(x+i)] = *(pixels+j*w+i);
  //   }
  // }
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
