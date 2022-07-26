#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

int fs_open(const char *pathname, int flags, int mode);
size_t fs_read(int fd, void *buf, size_t len);
size_t fs_write(int fd, const void *buf, size_t len);
size_t fs_lseek(int fd, size_t offset, int whence);
int fs_close(int fd);

size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);
size_t get_ramdisk_size();

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
  size_t seek_offset;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, invalid_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, invalid_write},
#include "files.h"
};

void init_fs() {
  // TODO: initialize the size of /dev/fb
}

int nr_files = sizeof(file_table)/sizeof(Finfo);

int fs_open(const char *pathname, int flags, int mode){
  int i=0;
  for(; i<nr_files; i++){
    if(strcmp(pathname, file_table[i].name)==0) {
      file_table[i].seek_offset = 0;
      break;
    }
  }
  if(i == nr_files) assert(0);
  return i;
}

size_t fs_read(int fd, void *buf, size_t len){
//   ramdisk_read(buf, file_table[fd].disk_offset + file_table[fd].seek_offset, len);
//   file_table[fd].seek_offset += len; 
// }
  if(file_table[fd].read == NULL)
  {
    if(file_table[fd].seek_offset >= file_table[fd].size)
    {
      assert(file_table[fd].seek_offset <= file_table[fd].size);
      return 0;
    }
    else {
      len = len <= file_table[fd].size - file_table[fd].seek_offset? len:file_table[fd].size - file_table[fd].seek_offset;
      ramdisk_read(buf,file_table[fd].disk_offset+file_table[fd].seek_offset,len);
      file_table[fd].seek_offset += len;
      assert(file_table[fd].seek_offset <= file_table[fd].size);
      return len;
    }
  }
  else{
    int ret = file_table[fd].read(buf,file_table[fd].seek_offset,len);
    file_table[fd].seek_offset += len;
    return ret;
  }
}

int fs_close(int fd)
{
  return 0;
}

size_t fs_lseek(int fd, size_t offset, int whence)
{
  Finfo* f = &file_table[fd];
  size_t ret=-1;
  switch(whence){
    case SEEK_SET:{
      if(0<=offset && offset<=f->size){
        f->seek_offset = offset;
        ret=f->seek_offset;
      }
      break;
    }
    case SEEK_CUR:{
      if((offset+f->seek_offset>=0)&&(offset+f->seek_offset<=f->size)){
        f->seek_offset+=offset;
        ret = f->seek_offset;
      }
      break;
    }
    case SEEK_END:{
      if((offset+f->size>=0)&&(offset+f->size<=f->size)){
        f->seek_offset = f->size+offset;
        ret = f->seek_offset;
      }
      break;
    }
  }
  return ret;
}

size_t fs_write(int fd, const void *buf, size_t len){
  Finfo* f = &file_table[fd];
  if(f->write == NULL){
    int rem = f->size - f->seek_offset<=len?f->size - f->seek_offset:len;
    ramdisk_write(buf, f->disk_offset + f->seek_offset, rem);
    f->seek_offset += rem;
    assert(f->seek_offset <= f->size);
    return rem;
  }
  return 0;
}
