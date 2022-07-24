#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  // panic("Not implemented");
  size_t i = 0;
  while(s[i] != '\0'){
    i++;
  } 
  return i;
}

char *strcpy(char *dst, const char *src) {
  // panic("Not implemented");
  size_t i = 0;
  while(src[i] != '\0'){
    dst[i] = src[i];
    i++;
  }
  dst[i] = '\0';
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  // panic("Not implemented");
  size_t i;
  for(i = 0;i < n&& src[i] != '\0';i++)
    dst[i] = src[i];
  for(; i < n;i ++)
    dst[i] = '\0';
  return dst;
}

char *strcat(char *dst, const char *src) {
  // panic("Not implemented");
  size_t i = 0;
  size_t j = 0;
  while(dst[i] != '\0') {
    i++;
  }
  while ((dst[i++] = src[j++]) != '\0');
  return dst;
}

int strcmp(const char *s1, const char *s2) {
  // panic("Not implemented");
  char const *p1 = s1,*p2 = s2;
  while(*p1 == *p2 && *p1 != '\0' && *p2 != '\0')
  {
    //printf("%c %c\n",*p1,*p2);
    p1++;
    p2++;
  }
  return *p1-*p2;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  // panic("Not implemented");
  size_t i = 0;
  for (i=0; i<n; i++) {
      if (s1[i] == s2[i]) {
          continue;
      } else {
          return s1[i] - s2[i];
      }
  }
  return 0;

}

void *memset(void *s, int c, size_t n) {
  // panic("Not implemented");
  size_t i = 0;
  for(i = 0; i < n;i ++)
  {
    ((char*)s)[i] = c; 
  }
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  // panic("Not implemented");
  size_t i = 0;
  while(n--)
  {
    ((char*) out)[i] = *(char*)in;
    in++;
    i++;
  }
  return out;
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
