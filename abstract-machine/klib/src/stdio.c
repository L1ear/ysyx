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
int vsprintf(char *out, const char *fmt, va_list ap) {
  // panic("Not implemented");
  size_t j = 0, k = 0 ,i = 0;
  int val, num[64] = {0};
  uint32_t v;
  const char* str;
  char nums[20];
  while (*fmt != '\0')
  {
    switch (*fmt)
    {
    case '%':
      //精度,中间还没留精度的选项
      fmt++;
      if (*fmt >= 'a' && *fmt <= 'z')
      {
        switch (*fmt)
        {
          case 'd':
            val = va_arg(ap, int);
            k = 0;
            if (val == 0x80000000)
            {
              out[j++] = '-';out[j++] = '2';out[j++] = '1';out[j++] = '4';out[j++] = '7';out[j++] = '4';
              out[j++] = '8';out[j++] = '3';out[j++] = '6';out[j++] = '4';out[j++] = '8';
              fmt++;
              break;
            }
            else if (val < 0)
            {
              val = (-1) * val;
              out[j++] = '-';
            }
            do
            {
              num[k++] = val % 10 + '0';
              val = val / 10;
            } while (val != 0);
            for (int ii = k - 1; ii >= 0; ii--)
            {
              out[j++] = num[ii];
            }
            fmt++;
            break;
          case 's':
            str = va_arg(ap, char *);
            i= 0;
            while(str[i] != '\0')
            {
              out[j++] = str[i++];
            }
            fmt++;
            break;  
          case 'x':  
            v = va_arg(ap,uint32_t);
            k = 0;
            out[j++]='0';
            out[j++]='x';
            if(v == 0){
                out[j++] = '0';
                fmt++;
                break;
            }
            while(v != 0)
            {
              nums[k++] = v%16 < 10? v%16+'0':'a'+v%16-10;
              v = v/16;
            }
            for(int ii=k-1;ii>=0;ii--){
              out[j++]=nums[ii];
            }
            fmt++;
            break; 
          case 'p':
            v = va_arg(ap,uint32_t);
            k = 0;
            out[j++]='0';
            out[j++]='x';
            if(v == 0){
              out[j++] = '0';
              fmt++;
              break;
            }
            while(v != 0)
            {
              nums[k++] = v%16 < 10? v%16+'0':'a'+v%16-10;
              v = v/16;
            }
            for(int ii=k-1;ii>=0;ii--){
              out[j++]=nums[ii];
            }
            fmt++;
            break;
          case 'c':
            out[j++] = va_arg(ap,int);
            fmt++;
            break;  
          default:
            assert(0);
          //other fuctions remaining to be realized.
        }
      } //处理标志符及一个字母中间的数
      else{
        out[j++] = *fmt;
        fmt++;
      }
      break;
    default:
      out[j++] = *fmt;
      fmt++;
    }
  }
  out[j] = '\0';
  return j;
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