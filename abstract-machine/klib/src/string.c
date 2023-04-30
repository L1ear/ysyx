#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  // panic("Not implemented");
  size_t n=0;
  while(s[n] != '\0'){
    n++;
  }
  return n;
}

char *strcpy(char *dst, const char *src) {
  // panic("Not implemented");
  size_t n;
  for(n=0;src[n] != '\0';n++){    //do not use strlen to reduce call function
    dst[n] = src[n];
  }
  dst[n] = '\0';
  return dst;
}
/*
The  strncpy()  function is similar, except that at most n bytes
of srcare copied.  Warning: If there is no null byte among the first n  
bytes of src, the string placed in dest will not be null-terminated.
*/
char *strncpy(char *dst, const char *src, size_t n) {
  // panic("Not implemented");
  size_t i;
  for(i=0;src[i] != '\0' && i < n;i++){
    dst[i] = src[i];
  }
  for(; i < n;i ++)
    dst[i] = '\0';
  return dst;
}

/*The  strcat() function appends the src string to the dest string, over‐
writing the terminating null byte ('\0') at the end of dest,  and  then
adds  a  terminating  null  byte.  The strings may not overlap, and the
dest string must have enough space for the  result.   If  dest  is  not
large  enough, program behavior is unpredictable; buffer overruns are a
favorite avenue for attacking secure programs.
*/
char *strcat(char *dst, const char *src) {
  // panic("Not implemented");
    size_t i, j;
    for (i = 0; dst[i] != '\0'; i++)
        ;
    for (j = 0; src[j] != '\0'; j++)
        dst[i+j] = src[j];
    dst[i+j] = '\0';
    return dst;
}

/*
The  strcmp() and strncmp() functions return an integer less than, 
equal to, or greater than zero if s1(or the first n bytes thereof) 
is found, respectively, to be less than, to match, or  be  greater  
than s2.
*/
int strcmp(const char *s1, const char *s2) {
  // panic("Not implemented");
  int result;
  asm volatile (
      "strcmploop: \n\t"
      "lb a4, 0(%0) \n\t"
      "lb a5, 0(%1) \n\t"
      "beqz a4, strcmpend \n\t"
      "beqz a5, strcmpend \n\t"
      "bne a4, a5, strcmpend \n\t"
      "addi %0, %0, 1 \n\t"
      "addi %1, %1, 1 \n\t"
      "j strcmploop \n\t"
      "strcmpend: \n\t"
      "sub %2, a4, a5 \n\t"
      : "+r"(s1), "+r"(s2), "=r"(result)
      :
      : "a4", "a5", "memory"
  );
  return result;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  // panic("Not implemented");
  int result;
  asm volatile (
      "li a6, 0 \n\t"
      "strncmploop: \n\t"
      "beq a6, %2, strncmpend \n\t"
      "lb a4, 0(%0) \n\t"
      "lb a5, 0(%1) \n\t"
      "beqz a4, strncmpend \n\t"
      "beqz a5, strncmpend \n\t"
      "bne a4, a5, strncmpend \n\t"
      "addi %0, %0, 1 \n\t"
      "addi %1, %1, 1 \n\t"
      "addi a6, a6, 1 \n\t"
      "j strncmploop \n\t"
      "strncmpend: \n\t"
      "sub %3, a4, a5 \n\t"
      : "+r"(s1), "+r"(s2), "+r"(n), "=r"(result)
      :
      : "a4", "a5", "a6", "memory"
  );
  return result;
}

/*
The  memset()  function  fills  the  first  n  bytes of the memory area
pointed to by s with the constant byte c.
The memset() function returns a pointer to the memory area s.
*/
void *memset(void *s, int c, size_t n) {
  // panic("Not implemented");
  asm volatile (
    "li a6, 0 \n\t"
    "mv a5, %0 \n\t"
    "memsetloop: \n\t"
    "beq a6, %2, memsetend \n\t"
    "sb %1, 0(a5) \n\t"
    "addi a5, a5, 1 \n\t"
    "addi a6, a6, 1 \n\t"
    "j memsetloop \n\t"
    "memsetend: \n\t"
    : "+r"(s), "+r"(c), "+r"(n)
    :
    : "a6", "memory"
  );
  return s;
}

/*
The  memmove()  function  copies n bytes from memory area src to memory
area dest.  The memory areas may overlap: copying takes place as though
the  bytes in src are first copied into a temporary array that does not
overlap src or dest, and the bytes are then copied from  the  temporary
array to dest.
*/
void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

/*
The  memcpy()  function  copies  n bytes from memory area src to memory
area dest.  The memory areas must not overlap.  Use memmove(3)  if  the
memory areas do overlap.
The memcpy() function returns a pointer to dest.
*/
void *memcpy(void *dst, const void *src, size_t n) {
  // panic("Not implemented");
  asm volatile (
    "li a6, 0 \n\t"
    "memcpyloop: \n\t"
    "beq a6, %2, memcpyend \n\t"
    "lb a4, 0(%1) \n\t"
    "sb a4, 0(%0) \n\t"
    "addi %0, %0, 1 \n\t"
    "addi %1, %1, 1 \n\t"
    "addi a6, a6, 1 \n\t"
    "j memcpyloop \n\t"
    "memcpyend: \n\t"
    : "+r"(dst), "+r"(src), "+r"(n)
    :
    : "a4", "a6", "memory"
  );
  return dst;
}

int mymemcmp(const void *s1, const void *s2, size_t n) {
  // panic("Not implemented");
  int result;
  asm volatile (
      "li a6, 0 \n\t"
      "memcmploop: \n\t"
      "beq a6, %2, memcmpend \n\t"
      "lb a4, 0(%0) \n\t"
      "lb a5, 0(%1) \n\t"
      "bne a4, a5, memcmpend \n\t"
      "addi %0, %0, 1 \n\t"
      "addi %1, %1, 1 \n\t"
      "addi a6, a6, 1 \n\t"
      "j memcmploop \n\t"
      "memcmpend: \n\t"
      "sub %3, a4, a5 \n\t"
      : "+r"(s1), "+r"(s2), "+r"(n), "=r"(result)
      :
      : "a4", "a5", "a6", "memory"
  );
  return result;
}
int memcmp(const void *s1, const void *s2, size_t n) {
  // panic("Not implemented");
  size_t i = 0;
  while(((char*)s1)[i] == ((char *)s2)[i] && i < n)
  {
    i++;
  }
  return i == n? 0:((char*)s1)[i] - ((char *)s2)[i];
  
}
#endif
