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
  int tab_index;

  while(*fmt != '\0'){
    if(*fmt == '%'){
      fmt ++;
      switch (*fmt){
      case '0':{
        fmt ++;
        if(*fmt>'9' || *fmt<'0'){
          printf("wrong format\n");
          assert(0);
            }
        tab_index = *fmt - '0';
        fmt ++;
        switch (*fmt){
          case 'd':{  
            num = va_arg(ap, int);
            if(num < 0){
              *str = '-';
              str++;
              num = -num;
            }
            itoa(num, buf);
            if(strlen(buf)<tab_index){
              int index;
              for(index = 0; index < tab_index-strlen(buf); index++){
                *str = '0';
                str++;
            }
            }
            strcpy(str, buf);
            str += strlen(buf);
            break;
            }
        }
                break;
            }
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
                    int p;
            for(p=0;p<65;p++){
              putch('x');
              putch(buf[p]);
            }
        strcpy(str, buf);
        str +=strlen(buf);
            }
      case 's': {
        s = va_arg(ap, char *);
        memcpy(str, s, strlen(s));
        str += strlen(s);
            break;
      }
      case 'p':{
        num = va_arg(ap,uint64_t);
        xtoa(num, buf);
        strcpy(str, buf);
        str +=strlen(buf);
            break;  
      }
          default:
        printf("!!!!!!!!!!!!format %c is not implementated yet\n",*fmt);
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
  *str = '\0';
  return str-str_s;
  }
/*
va_start 是一个宏，它用于初始化 va_list 类型的变量，该变量用于访问函数的可变参数列表。
它的原型为 void va_start(va_list ap, last_arg)，其中 ap 是要初始化的 va_list 变量，
last_arg 是函数中最后一个已知的固定参数，即省略号之前的参数1。

在使用 va_arg 和 va_end 宏之前，必须先调用 va_start 宏来初始化 va_list 变量1。
*/
int sprintf(char *out, const char *fmt, ...) {
  // panic("Not implemented");
  va_list ap;
  int ret = 0;
  va_start(ap, fmt);
  ret = vsprintf(out, fmt, ap);
  va_end(ap);
  return ret;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif