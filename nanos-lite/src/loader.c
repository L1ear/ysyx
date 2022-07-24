#include <proc.h>
#include <elf.h>
#include <fs.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);
size_t get_ramdisk_size();

static uintptr_t loader(PCB *pcb, const char *filename) {
  // TODO();
  Elf_Ehdr elfhdr;
  Elf_Phdr prohdr;
  //printf("%s\n",filename);
  // size_t fd = fs_open(filename,0,0);
  //printf("%d\n",fd);
  ramdisk_read(&elfhdr, 0, sizeof(Elf_Ehdr));
  //printf("%x %x\n",elfhdr.e_phoff,elfhdr.e_phnum);
  // assert(fd != -1);
  //printf("%x %x %x\n",elfhdr.e_entry,elfhdr.e_phentsize,elfhdr.e_ehsize);
  for(int i = 0;i < elfhdr.e_phnum;i++)
  {
    // fs_lseek(fd,elfhdr.e_phoff+i*sizeof(Elf_Phdr),SEEK_SET);
    // fs_read(fd,&prohdr,sizeof(Elf_Phdr));
    ramdisk_read(&prohdr, elfhdr.e_phoff+i*sizeof(Elf_Phdr), sizeof(Elf_Phdr));
    if(prohdr.p_type == PT_LOAD){
      // fs_lseek(fd,prohdr.p_offset,SEEK_SET);
      // fs_read(fd,(void *)prohdr.p_vaddr,prohdr.p_filesz);
      ramdisk_read((void *)prohdr.p_vaddr, prohdr.p_offset, prohdr.p_filesz);
      //printf("from %x %x size = %x \n",prohdr.p_vaddr,prohdr.p_offset,prohdr.p_filesz);
      memset((void*)(prohdr.p_vaddr+prohdr.p_filesz),0,prohdr.p_memsz-prohdr.p_filesz);
    }
    
  }
  // fd = fs_close(fd);
  // assert(fd == 0);
  printf("%s File Loaded\n",filename);
  return elfhdr.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

