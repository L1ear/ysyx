#include <stdio.h>
#include <assert.h>
#include <time.h>

int main(){
    struct timeval tv; 
    tv.tv_sec = 0;
    printf("0 time\n");
    int hsec=5;
    while(1)
    {
        while(tv.tv_usec/100000 < hsec)
        {
            int t = gettimeofday(&tv,NULL);
            assert(t==0);
            // printf("%lx\n",tv.tv_usec/100000);
        }
        printf("half sec passed\n");
        hsec = (hsec==5)?9:5;
    } 
}