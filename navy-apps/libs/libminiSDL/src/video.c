#include <NDL.h>
#include <sdl-video.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <SDL.h>

//SDL_BlitSurface(): 将一张画布中的指定矩形区域复制到另一张画布的指定位置
void SDL_BlitSurface(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
  //assert(0);
  assert(dst && src);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  int dst_x,dst_y,dst_w = dst->w,dst_h = dst->h;
  int src_x,src_y,src_w = src->w, src_h = src->h;
  if(srcrect == NULL)
  {
    src_x = src_y = 0;
    src_w = src->w;
    src_h = src->h;
  }
  else {
    src_x = srcrect->x;
    src_y = srcrect->y;
    src_w = srcrect->w;
    src_h = srcrect->h;
  }
  if(dstrect == NULL)
  {
    dst_x = dst_y = 0;
    dst_w = dst->w;
    dst_h = dst->h;
  }
  else {
    dst_x = dstrect->x;
    dst_y = dstrect->y;
    dst_w = dstrect->w;
    dst_h = dstrect->h;
  }
  uint8_t* dst_color = dst->pixels,*src_color = src->pixels;
  uint32_t color_width = dst->format->palette?1:4;
  for(int i = 0;i < src_h;i++)
    memcpy(dst_color+color_width*((i+dst_y)*dst->w+dst_x),src_color+color_width*((i+src_y)*src->w+src_x),color_width*src_w);
}

/*
SDL_Surface 结构体中的 pixels 和 ncolors 字段与 SDL_Palette 结构体的调色板相关。
pixels 字段是 SDL_Surface 结构体中的一个指针，指向存储图像像素数据的内存区域。它表示图像的像素数据，
可以通过访问该指针来读取或修改图像的像素值。ncolors 字段是 SDL_Palette 结构体中的一个整数，表示调色板中的颜色数量。它指示调色板中包含的颜色个数。
这两个字段之间的联系是：当使用索引颜色模式（Indexed Color Mode）时，SDL_Surface 结构体中的 pixels 指针所指向的像素数据是一个索引数组，每个索引值对应于调色板中的一个颜色。
换句话说，pixels 中的每个像素值都是一个索引，通过调色板中的颜色数组来获取实际的颜色值。
因此，ncolors 字段表示调色板中的颜色数量，而 pixels 字段中的每个像素值都是一个索引，通过调色板来映射为实际的颜色值。这样做可以有效地减少存储索引颜色模式图像所需的内存，并提供对颜色的灵活管理。
请注意，当使用直接颜色模式（如 RGB 或 RGBA）时，不使用调色板，而是直接在 pixels 中存储实际的颜色值。此时，ncolors 字段在 SDL_Surface 结构体中没有意义，可以忽略。
*/

//SDL_FillRect(): 往画布的指定矩形区域中填充指定的颜色
void SDL_FillRect(SDL_Surface *dst, SDL_Rect *dstrect, uint32_t color) {
  //assert(0);
  assert(dst);
  int x,y,w,h;
  uint32_t s_w = dst->w;
  uint32_t * value = (uint32_t*)dst->pixels;
  if(dstrect == NULL)
  {
    x = y = 0;
    w = dst->w;
    h = dst->h;
  }
  else{
    x = dstrect->x;
    y = dstrect->y;
    w = dstrect->w;
    h = dstrect->h;
  }
  int offset = x + y*dst->w;
  if(dst->format->palette == NULL)
  {
    for(int i = 0;i < h;i ++)
      for(int j = 0;j < w;j ++)
      {
        value[(i+y)*s_w+j+x] = color;
      }
  } else if (dst->format->BitsPerPixel == 8) {

    for (size_t i = 0; i < h ; i++) {
      for (size_t j = 0; j < w ; j++) {
        dst->pixels[(i+y)*s_w+j+x] = color;
      }
    }
  } else
    assert(0);
}

//SDL_UpdateRect()的作用是将画布中的指定矩形区域同步到屏幕上.
void SDL_UpdateRect(SDL_Surface *s, int x, int y, int w, int h) {
  if(s->format->palette == NULL)
    NDL_DrawRect((uint32_t*)s->pixels,x,y,w,h);//32位的颜色,直接使用NDL
  else{
    uint32_t s_h = s->h,s_w = s->w;
    if(w == 0||w > s_w) w = s_w;
    if(h == 0||h > s_h) h = s_h;
    uint32_t * palette = malloc(sizeof(uint32_t)*w*h);
    memset(palette,0,sizeof(palette));
    for(int i = 0;i < h;i++)
      for(int j = 0;j < w;j++)
      {
        uint8_t r = s->format->palette->colors[s->pixels[(i+y)*s_w+j+x]].r;
        uint8_t g = s->format->palette->colors[s->pixels[(i+y)*s_w+j+x]].g;
        uint8_t b = s->format->palette->colors[s->pixels[(i+y)*s_w+j+x]].b;
        palette[i*w+j] = ((r<<16)|(g<<8)|b);
      }
    NDL_DrawRect(palette,x,y,w,h);
    free(palette);
  }
}

// APIs below are already implemented.

static inline int maskToShift(uint32_t mask) {
  switch (mask) {
    case 0x000000ff: return 0;
    case 0x0000ff00: return 8;
    case 0x00ff0000: return 16;
    case 0xff000000: return 24;
    case 0x00000000: return 24; // hack
    default: assert(0);
  }
}

SDL_Surface* SDL_CreateRGBSurface(uint32_t flags, int width, int height, int depth,
    uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  assert(depth == 8 || depth == 32);
  SDL_Surface *s = malloc(sizeof(SDL_Surface));
  assert(s);
  s->flags = flags;
  s->format = malloc(sizeof(SDL_PixelFormat));
  assert(s->format);
  if (depth == 8) {
    s->format->palette = malloc(sizeof(SDL_Palette));
    assert(s->format->palette);
    s->format->palette->colors = malloc(sizeof(SDL_Color) * 256);
    assert(s->format->palette->colors);
    memset(s->format->palette->colors, 0, sizeof(SDL_Color) * 256);
    s->format->palette->ncolors = 256;
  } else {
    s->format->palette = NULL;
    s->format->Rmask = Rmask; s->format->Rshift = maskToShift(Rmask); s->format->Rloss = 0;
    s->format->Gmask = Gmask; s->format->Gshift = maskToShift(Gmask); s->format->Gloss = 0;
    s->format->Bmask = Bmask; s->format->Bshift = maskToShift(Bmask); s->format->Bloss = 0;
    s->format->Amask = Amask; s->format->Ashift = maskToShift(Amask); s->format->Aloss = 0;
  }

  s->format->BitsPerPixel = depth;
  s->format->BytesPerPixel = depth / 8;

  s->w = width;
  s->h = height;
  s->pitch = width * depth / 8;
  assert(s->pitch == width * s->format->BytesPerPixel);

  if (!(flags & SDL_PREALLOC)) {
    s->pixels = malloc(s->pitch * height);
    assert(s->pixels);
  }

  return s;
}

SDL_Surface* SDL_CreateRGBSurfaceFrom(void *pixels, int width, int height, int depth,
    int pitch, uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  SDL_Surface *s = SDL_CreateRGBSurface(SDL_PREALLOC, width, height, depth,
      Rmask, Gmask, Bmask, Amask);
  assert(pitch == s->pitch);
  s->pixels = pixels;
  return s;
}

void SDL_FreeSurface(SDL_Surface *s) {
  if (s != NULL) {
    if (s->format != NULL) {
      if (s->format->palette != NULL) {
        if (s->format->palette->colors != NULL) free(s->format->palette->colors);
        free(s->format->palette);
      }
      free(s->format);
    }
    if (s->pixels != NULL && !(s->flags & SDL_PREALLOC)) free(s->pixels);
    free(s);
  }
}

SDL_Surface* SDL_SetVideoMode(int width, int height, int bpp, uint32_t flags) {
  if (flags & SDL_HWSURFACE) NDL_OpenCanvas(&width, &height);
  return SDL_CreateRGBSurface(flags, width, height, bpp,
      DEFAULT_RMASK, DEFAULT_GMASK, DEFAULT_BMASK, DEFAULT_AMASK);
}

void SDL_SoftStretch(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
  assert(src && dst);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  assert(dst->format->BitsPerPixel == 8);

  int x = (srcrect == NULL ? 0 : srcrect->x);
  int y = (srcrect == NULL ? 0 : srcrect->y);
  int w = (srcrect == NULL ? src->w : srcrect->w);
  int h = (srcrect == NULL ? src->h : srcrect->h);

  assert(dstrect);
  if(w == dstrect->w && h == dstrect->h) {
    /* The source rectangle and the destination rectangle
     * are of the same size. If that is the case, there
     * is no need to stretch, just copy. */
    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.w = w;
    rect.h = h;
    SDL_BlitSurface(src, &rect, dst, dstrect);
  }
  else {
    assert(0);
  }
}


void SDL_SetPalette(SDL_Surface *s, int flags, SDL_Color *colors, int firstcolor, int ncolors) {
  assert(s);
  assert(s->format);
  assert(s->format->palette);
  assert(firstcolor == 0);

  s->format->palette->ncolors = ncolors;
  memcpy(s->format->palette->colors, colors, sizeof(SDL_Color) * ncolors);
  /* for(int i = 0;i < ncolors;i++)
      printf("%dth r = %x g = %x b = %x\n",i,colors[i].r,colors[i].g,colors[i].b); */
  //printf("%d\n",s->flags);    
  if(s->flags & SDL_HWSURFACE) {
    assert(ncolors == 256);
    /* for(int i = 0;i < ncolors;i++)
      printf("%dth r = %x g = %x b = %x\n",i,colors[i].r,colors[i].g,colors[i].b); */
    /* printf("\nnew\n");
    for(int i = 0;i < s->w;i++)
      printf("%dth  color = %x\n",i,colors[s->pixels[i]]); */
    for (int i = 0; i < ncolors; i ++) {
      uint8_t r = colors[i].r;
      uint8_t g = colors[i].g;
      uint8_t b = colors[i].b;
      //printf("ith = %d r = %x g = %x b = %x\n",r,g,b);
    }
    /* for(int i = 0; i< s->w;i ++)
      printf("place %d   idx = %d color = %x\n",i,s->pixels[i],colors[s->pixels[i]]); */
    SDL_UpdateRect(s, 0, 0, 0, 0);
    //while(1);
  }
}//在这里设置调色板

static void ConvertPixelsARGB_ABGR(void *dst, void *src, int len) {
  int i;
  uint8_t (*pdst)[4] = dst;
  uint8_t (*psrc)[4] = src;
  union {
    uint8_t val8[4];
    uint32_t val32;
  } tmp;
  int first = len & ~0xf;
  for (i = 0; i < first; i += 16) {
#define macro(i) \
    tmp.val32 = *((uint32_t *)psrc[i]); \
    *((uint32_t *)pdst[i]) = tmp.val32; \
    pdst[i][0] = tmp.val8[2]; \
    pdst[i][2] = tmp.val8[0];

    macro(i + 0); macro(i + 1); macro(i + 2); macro(i + 3);
    macro(i + 4); macro(i + 5); macro(i + 6); macro(i + 7);
    macro(i + 8); macro(i + 9); macro(i +10); macro(i +11);
    macro(i +12); macro(i +13); macro(i +14); macro(i +15);
  }

  for (; i < len; i ++) {
    macro(i);
  }
}

SDL_Surface *SDL_ConvertSurface(SDL_Surface *src, SDL_PixelFormat *fmt, uint32_t flags) {
  assert(src->format->BitsPerPixel == 32);
  assert(src->w * src->format->BytesPerPixel == src->pitch);
  assert(src->format->BitsPerPixel == fmt->BitsPerPixel);

  SDL_Surface* ret = SDL_CreateRGBSurface(flags, src->w, src->h, fmt->BitsPerPixel,
    fmt->Rmask, fmt->Gmask, fmt->Bmask, fmt->Amask);

  assert(fmt->Gmask == src->format->Gmask);
  assert(fmt->Amask == 0 || src->format->Amask == 0 || (fmt->Amask == src->format->Amask));
  ConvertPixelsARGB_ABGR(ret->pixels, src->pixels, src->w * src->h);

  return ret;
}

uint32_t SDL_MapRGBA(SDL_PixelFormat *fmt, uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
  assert(fmt->BytesPerPixel == 4);
  uint32_t p = (r << fmt->Rshift) | (g << fmt->Gshift) | (b << fmt->Bshift);
  if (fmt->Amask) p |= (a << fmt->Ashift);
  return p;
}

int SDL_LockSurface(SDL_Surface *s) {
  printf("please implement me\n");
  assert(0);
  return 0;
}

void SDL_UnlockSurface(SDL_Surface *s) {
  printf("please implement me\n");
  assert(0);
}
