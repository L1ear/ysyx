#include <common.h>
#include <sys/mman.h>
#include <elf.h>
#include <link.h>
#include <error.h>
#include <errno.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>



#define ELFW(type)	_ELFW (ELF, __ELF_NATIVE_CLASS, type)
#define _ELFW(e,w,t)	_ELFW_1 (e, w, _##t)
#define _ELFW_1(e,w,t)	e##w##t

extern uint64_t g_nr_guest_inst;
FILE *log_fp = NULL;
FILE *elf_fp = NULL;
Elf64_Ehdr elf_head[1];
Elf64_Shdr shdr[99];
Elf64_Sym symtable[99];
char shstrtable[999];

void init_log(const char *log_file) {
  log_fp = stdout;
  if (log_file != NULL) {
    FILE *fp = fopen(log_file, "w");
    Assert(fp, "Can not open '%s'", log_file);
    log_fp = fp;
  }
  Log("Log is written to %s", log_file ? log_file : "stdout");
}

bool log_enable() {
  return MUXDEF(CONFIG_TRACE, (g_nr_guest_inst >= CONFIG_TRACE_START) &&
         (g_nr_guest_inst <= CONFIG_TRACE_END), false);
}


typedef struct {
  char* logbuf;
}ringbuf;
static ringbuf iringbuf[10];    //10个缓冲区
static int nr_i = 0;

void init_iringbuf(){
  for(int i=0;i<nr_i;i++){
    iringbuf[i].logbuf = NULL;
  }
}

void add_iringbuf(char *newlog){
  nr_i = nr_i % 10;
  free(iringbuf[nr_i].logbuf);
  iringbuf[nr_i].logbuf = (char *) malloc(sizeof(char)*(strlen(newlog)+1));
  strcpy(iringbuf[nr_i].logbuf,newlog);
  nr_i++;
}

void print_iringbuf(){
  for(int i=0; i<nr_i-1; i++){ 
      printf("  %s\n", iringbuf[i].logbuf);
      free(iringbuf[i].logbuf);
  }

  printf("->%s\n", iringbuf[nr_i-1].logbuf);
  free(iringbuf[nr_i-1].logbuf);

  for(int i=nr_i; i<10; i++){
    if(iringbuf[i].logbuf != NULL){
      printf("  %s\n", iringbuf[i].logbuf);
      free(iringbuf[i].logbuf);
    }
  }
}

#ifdef CONFIG_FTRACE
ElfW(Shdr) *shdrs;
size_t shnum;
char *file_mmbase;
void init_ftrace(const char *elf_file) {
  // int rtval;
  // uint64_t stroff=0;
  // uint64_t symoff=0;
  ElfW(Ehdr) *ehdr;
	
   //shstrndx;
	// const char *shstrtab;
  
  size_t fsize;
  int fd;
  struct stat file_status;
  // if (elf_file != NULL) {
  //   FILE *fp = fopen(elf_file, "rb");
  //   Assert(fp, "Can not open '%s'", elf_file);
  //   elf_fp = fp;
  // }
  if ((fd = open(elf_file, O_RDONLY)) < 0) {
		error(EXIT_FAILURE, errno, "open %s failed", elf_file);
	}
 
	if (fstat(fd, &file_status) < 0) {
		error(EXIT_FAILURE, errno, "get file %s info err", elf_file);
	}
	fsize = (size_t)file_status.st_size;
 
	if ((file_mmbase = mmap(NULL, fsize, PROT_READ, 
				MAP_PRIVATE, fd, (off_t)0)) == MAP_FAILED) {
		error(EXIT_FAILURE, errno, "mmap file %s err", elf_file);
	}
  ehdr = (ElfW(Ehdr) *)file_mmbase;
	shdrs = (ElfW(Shdr) *)(file_mmbase + ehdr->e_shoff);
	shnum = ehdr->e_shnum == 0 ? shdrs[0].sh_size : ehdr->e_shnum;
	// shstrndx = ehdr->e_shstrndx == SHN_XINDEX ? shdrs[0].sh_link : ehdr->e_shstrndx;
	// shstrtab = file_mmbase + shdrs[shstrndx].sh_offset;

  for (size_t i = 0; i < shnum; i++) {
		ElfW(Shdr) *shdr = &shdrs[i];	
 
		if (shdr->sh_type == SHT_SYMTAB) {
			// const char *shname = shstrtab + shdr->sh_name;
			ElfW(Sym) *syms = (ElfW(Sym *))(file_mmbase + shdr->sh_offset); 
			size_t entries = shdr->sh_size / shdr->sh_entsize;
			// sh_info: One greater than the symbol table index of 
			// 			the last local symbol (binding STB_LOCAL).
			// printf("shdr->sh_info = %u\n", shdr->sh_info);
			// sh_link: .strtab or .dynstr (The section header index of 
			// 			the associated string table.)
			const char *strtab = file_mmbase + shdrs[shdr->sh_link].sh_offset;
			// print_syms(shdrs, shstrtab, shname, syms, entries, strtab);	
      for (size_t i = 0; i < entries; i++) {
        ElfW(Sym) *sym = &syms[i];
        if(ELFW(ST_TYPE)(sym->st_info)==STT_FUNC){
          printf(" %16.16jx", (uintmax_t)sym->st_value);
          printf(" %5ju", (uintmax_t)sym->st_size);
          printf(" %s\n", strtab + sym->st_name);

        }
      }
		}
	}

  // rtval = fread(elf_head, sizeof(Elf64_Ehdr), 1, elf_fp);
  // int nr_sc = elf_head->e_shnum;
  // fseek(elf_fp,elf_head->e_shoff,SEEK_SET);
  // rtval = fread(shdr, sizeof(Elf64_Shdr),nr_sc, elf_fp);
  // printf("rtval:%d\nnr_sc: %d\n",rtval,nr_sc);
  // fseek(elf_fp, shdr[elf_head->e_shstrndx].sh_offset,SEEK_SET);
  // rtval = fread(shstrtable, 1, shdr[elf_head->e_shstrndx].sh_size,elf_fp);
  // int i = 0;
  // for(; i<nr_sc; i++){
  //   printf("nr:%d   %s\n",i,&shstrtable[shdr[i].sh_name]);
  //   if(strcmp(&shstrtable[shdr[i].sh_name],".strtab")==0) stroff = shdr[i].sh_offset;
  //   if(strcmp(&shstrtable[shdr[i].sh_name],".symtab")==0) symoff = shdr[i].sh_offset;
  // }
  // fseek(elf_fp,symoff,SEEK_SET);
  // rtval = fread(symtable,sizeof(Elf64_Sym));
}

void infunc(uint64_t thisPC,uint64_t nxtPC){
  printf("%08lx: ",thisPC);
  for (size_t i = 0; i < shnum; i++) {
		ElfW(Shdr) *shdr = &shdrs[i];	 
		if (shdr->sh_type == SHT_SYMTAB) {
			ElfW(Sym) *syms = (ElfW(Sym *))(file_mmbase + shdr->sh_offset); 
			size_t entries = shdr->sh_size / shdr->sh_entsize;
			const char *strtab = file_mmbase + shdrs[shdr->sh_link].sh_offset;
			// print_syms(shdrs, shstrtab, shname, syms, entries, strtab);	
      for (size_t i = 0; i < entries; i++) {
        ElfW(Sym) *sym = &syms[i];
        if(ELFW(ST_TYPE)(sym->st_info)==STT_FUNC){
          if(nxtPC>=(uintmax_t)sym->st_value && nxtPC<=(uintmax_t)sym->st_value+(uintmax_t)sym->st_size){
            printf("***********call: %s @%08lx\n",strtab + sym->st_name,nxtPC);
          }
          // printf(" %16.16jx", (uintmax_t)sym->st_value);
          // printf(" %5ju", (uintmax_t)sym->st_size);
          // printf(" %s\n", strtab + sym->st_name);

        }
      }
    }
  }

}

#endif