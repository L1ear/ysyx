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
  printf("please implement me\n");
  assert(0);
  return 0;
}


int SDL_PollEvent(SDL_Event *ev) {
  //printf("in\n");
  char key[6]={0};
  key[0] = '\0';
  int keycode = 0;
  int ret = NDL_PollEvent(key,sizeof(key));
  //printf("SDL %s\n",key);
  if(key[0] == '\0') {
    ev->key.keysym.sym = SDLK_NONE;
    ev->type = SDL_USEREVENT;
  return 0;
}
  else {
    char* k=key+3;
    keycode =((*k)-48)*10+((*(k+1))-48);
    //printf("in waitevent %d\n",keycode);
    if(key[1] == 'u')
    {
      ev->key.keysym.sym = keycode;
      ev->type = SDL_KEYUP;
      keystate[keycode] = 0;
    }
    else if(key[1] == 'd'){
      ev->key.keysym.sym = keycode;
      ev->type = SDL_KEYDOWN;
      keystate[keycode] = 1;
    }
    else assert(0);
  //printf("please implement me\n");
  //assert(0);
    return 1;
  }
  
}


int SDL_WaitEvent(SDL_Event *event) {
  char key[6]={0};
  memset(key,0,sizeof(key));
  key[0] = '0';
  int keycode = 0;
  while(!NDL_PollEvent(key,sizeof(key)));
  // printf("%s\n",key);
  char* k=key+3;
  keycode =((*k)-48)*10+((*(k+1))-48);
  event->key.keysym.sym = keycode;
  if(key[1] == 'u'){
    event->type = SDL_KEYUP;
    keystate[keycode] = 0;
  }
  else if(key[1] == 'd'){
    event->type = SDL_KEYDOWN;
    keystate[keycode] = 1;
  }
  else assert(0);
  return 0;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  printf("please implement me\n");
  assert(0);
  return 0;
}


uint8_t* SDL_GetKeyState(int *numkeys) {
  if(numkeys == NULL)
    return keystate;
  else assert(0);
  //printf("please implement me\n");
  //assert(0);
  //else assert(0);
}
