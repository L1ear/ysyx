#include <stdio.h>
#include <assert.h>
#include <time.h>

int main(){
    struct timeval tv; 
    tv.tv_sec = 0;
    printf("0 time");
    int hsec=5;
    while(1)
    {
        while(tv.tv_sec <= hsec)
        {
            int t = gettimeofday(&tv,NULL);
            assert(t==0);
        }
        printf("half sec passed\n");
        hsec += 5;
    } 
}