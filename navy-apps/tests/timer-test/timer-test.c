#include <stdio.h>
#include <assert.h>
#include <time.h>

int main(){
    struct timeval tv; 
    tv.tv_sec = 0;
    printf("time-test starts begin = %d\n",tv.tv_sec);
    int sec = 1;
    while(1)
    {
        while(tv.tv_sec <= sec)
        {
            int t = gettimeofday(&tv,NULL);
            assert(t==0);
        }
        printf("time: seconds = %d  usec=%d usec%d\n",sec,tv.tv_sec,tv.tv_usec);
        sec++;
    } 
}