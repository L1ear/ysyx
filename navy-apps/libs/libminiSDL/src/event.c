#include <NDL.h>
#include <SDL.h>
#include <assert.h>
#include <string.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};


static uint8_t keystate[83]={0};
int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
  char key[64]={0};
  memset(key,0,sizeof(key));
  key[0] = '0';
  int keycode = 0;
  while(!NDL_PollEvent(key,sizeof(key)));
  printf("%s\n",key);
  char* str = key+3;
  char* k=key+3;
  keycode =((*k)-48)*10+((*(k+1))-48);

  printf("%02d: %s\n",keycode,keyname[keycode]);

  //printf("in waitevent\n");
  if(key[1] == 'u')
  {
    event->key.keysym.sym = keycode;
    event->type = SDL_KEYUP;
    keystate[keycode] = 0;
  }
  else if(key[1] == 'd'){
    event->key.keysym.sym = keycode;
    event->type = SDL_KEYDOWN;
    keystate[keycode] = 1;
  }
  else assert(0);
  return 0;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  return NULL;
}