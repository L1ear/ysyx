#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

    void itoa(unsigned int n, char * buf)
    {
            int i;
            
            if(n < 10)
            {
                    buf[0] = n + '0';
                    buf[1] = '\0';
                    return;
            }
            itoa(n / 10, buf);

            for(i=0; buf[i]!='\0'; i++);
            
            buf[i] = (n % 10) + '0';
            
            buf[i+1] = '\0';
    }

    void xtoa(unsigned int n, char * buf)
    {
            int i;
            
            if(n < 16)
            {
                    if(n < 10)
                    {
                            buf[0] = n + '0';
                    }
                    else
                    {
                            buf[0] = n - 10 + 'a';
                    }
                    buf[1] = '\0';
                    return;
            }
            xtoa(n / 16, buf);
            
            for(i = 0; buf[i] != '\0'; i++);
            
            if((n % 16) < 10)
            {
                    buf[i] = (n % 16) + '0';
            }
            else
            {
                    buf[i] = (n % 16) - 10 + 'a';
            }
            buf[i + 1] = '\0';
    }
int printf(const char *fmt, ...) {
  // panic("Not implemented");
    char ans[2000]={0};
  va_list ap;
  int ret = 0;
  va_start(ap, fmt);
  ret = vsprintf(ans, fmt, ap);
  va_end(ap);
  for(int i = 0; ans[i] != '\0';i++)
  {
    putch(ans[i]);
  }
  return ret;
}

/*
fmt is the format string
*/
int vsprintf(char *str, const char *fmt, va_list ap) {
  // panic("Not implemented");
  int num;
  char c;
  char *s;
  // int length;
  char buf[65];
  char *str_s=str;

  while(*fmt != '\0'){
    if(*fmt == '%'){
      fmt ++;
      switch (*fmt)
      {
      case 'd':{  
        num = va_arg(ap, int);
        if(num < 0){
          *str = '-';
          str++;
          num = -num;
        }
        itoa(num, buf);
        strcpy(str, buf);
        str += strlen(buf);
        break;
      }
      case 'c':{
        c = va_arg(ap, int);
        *str = c;
        str++;
        break;
      }
      case 'x':{
        num = va_arg(ap, int);
        xtoa(num, buf);
        strcpy(str, buf);
        str +=strlen(buf);
      }
      case 's': {
        s = va_arg(ap, char *);
        memcpy(str, s, strlen(s));
        str += strlen(s);
        break;
      }
      default:
        assert(0);
        break;
      }
    }
    else{
      *str = *fmt;
      str++;
    }
    fmt++;
  }
  str = '\0';
  return str-str_s;
}

int sprintf(char *out, const char *fmt, ...) {
  panic("Not implemented");
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif