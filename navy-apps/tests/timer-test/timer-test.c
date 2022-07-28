#include <stdio.h>
#include <assert.h>
#include <time.h>

int main(){
    struct timeval tv; 
    tv.tv_sec = 0;
    printf("0 time\n");
    // int hsec=2;
    int c=0;
    while(1)
    {
        // printf("????????????????");
        // while(tv.tv_usec/100000 < hsec)
        // {
            int t = gettimeofday(&tv,NULL);
            assert(t==0);
        //     // printf("%lx\n",tv.tv_usec/100000);

        // }
        if(tv.tv_usec/100000==4||tv.tv_usec/100000==9) 
        {
            if(c==0){
                printf("half sec passed\n");
                c=1;
            }
        }
        else    c=0;

    } 
}