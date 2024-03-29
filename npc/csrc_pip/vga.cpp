#include <assert.h>
#include "include/common.h"

#define SCREEN_W 400
#define SCREEN_H 300

static uint32_t screen_width() {
  return SCREEN_W;
}

static uint32_t screen_height() {
  return SCREEN_H;
}

static uint32_t screen_size() {
  return screen_width() * screen_height() * sizeof(uint32_t);
}

uint8_t *vmem[400*300*32];              //记得改成static
static uint32_t *vgactl_port_base = NULL;
int vgactl_sync = 0;


#ifdef CONFIG_VGA_SHOW_SCREEN
// #ifndef CONFIG_TARGET_AM
#include <SDL2/SDL.h>

static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;

void init_screen() {
  SDL_Window *window = NULL;
  char title[128];
  sprintf(title, "riscv64-npc");
  SDL_Init(SDL_INIT_VIDEO);
  SDL_CreateWindowAndRenderer(
      800,
      600,
      0, &window, &renderer);
  SDL_SetWindowTitle(window, title);
  texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
      SDL_TEXTUREACCESS_STATIC, 400, 300);
      memset(vmem, 0, screen_size());
}

static inline void update_screen() {
  SDL_UpdateTexture(texture, NULL, (void *)vmem, SCREEN_W * sizeof(uint32_t));
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);
}
// #else
// static void init_screen() {}

// static inline void update_screen() {
//   io_write(AM_GPU_FBDRAW, 0, 0, vmem, screen_width(), screen_height(), true);
// }
// #endif
#endif

void vga_update_screen() {
  // TODO: call `update_screen()` when the sync register is non-zero,
  // then zero out the sync register
  if (vgactl_sync==1) {
    update_screen();
    vgactl_sync = 0;
  }
}



// void init_vga() {
//   vgactl_port_base = (uint32_t *)new_space(8);
//   vgactl_port_base[0] = (screen_width() << 16) | screen_height();
// #ifdef CONFIG_HAS_PORT_IO
//   add_pio_map ("vgactl", CONFIG_VGA_CTL_PORT, vgactl_port_base, 8, NULL);
// #else
//   add_mmio_map("vgactl", CONFIG_VGA_CTL_MMIO, vgactl_port_base, 8, NULL);
// #endif

//   vmem = new_space(screen_size());
//   add_mmio_map("vmem", CONFIG_FB_ADDR, vmem, screen_size(), NULL);
//   IFDEF(CONFIG_VGA_SHOW_SCREEN, init_screen());
//   IFDEF(CONFIG_VGA_SHOW_SCREEN, memset(vmem, 0, screen_size()));
// }
