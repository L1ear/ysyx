#include <device/map.h>

#define NR_MAP 16

static IOMap maps[NR_MAP] = {};
static int nr_map = 0;

static IOMap* fetch_mmio_map(paddr_t addr) {
  int mapid = find_mapid_by_addr(maps, nr_map, addr);
  return (mapid == -1 ? NULL : &maps[mapid]);
}

/* device interface */
void add_mmio_map(const char *name, paddr_t addr, void *space, uint32_t len, io_callback_t callback) {
  assert(nr_map < NR_MAP);
  maps[nr_map] = (IOMap){ .name = name, .low = addr, .high = addr + len - 1,
    .space = space, .callback = callback };
  Log("Add mmio map '%s' at [" FMT_PADDR ", " FMT_PADDR "]",
      maps[nr_map].name, maps[nr_map].low, maps[nr_map].high);

  nr_map ++;
}

/* bus interface */
word_t mmio_read(paddr_t addr, int len) {
  IOMap* map = fetch_mmio_map(addr);
  #ifdef CONFIG_DTRACE
  char namer[32];
  sscanf(map->name,"%s",namer);
  if(strcmp(namer,"rtc")<0||strcmp(namer,"serial")=0)      //如果是rtc或串口，就只写入log不输出，防止挤爆终端，下同
    Log("read device: %s\n",namer);
  else
    log_write("read device: %s\n",namer);
  #endif
  
  return map_read(addr, len, map);
}

void mmio_write(paddr_t addr, int len, word_t data) {
  IOMap* map = fetch_mmio_map(addr);

  #ifdef CONFIG_DTRACE
  char name[32];
  sscanf(map->name,"%s",name);
  if(strcmp(name,"vmem")&&strcmp(name,"serial") == 1)
    Log("write "FMT_WORD" to device: %s\n", data, map->name);
  // else
  //   log_write("write "FMT_WORD" to device: %s\n", data, map->name);
  #endif
  map_write(addr, len, data, map);
}
