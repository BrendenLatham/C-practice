#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
int n, start, stop, step;
/* this gets start, stop, and step values if entered correctly */
if(argc==4){
    sscanf(argv[1], "%d", &start);
    sscanf(argv[2], "%d", &stop);
    sscanf(argv[3], "%d", &step);
    /* this determines if loop is increasing */
    if((start<=stop)&&(step>0)){
        /* this creates increasing loop and prints numbers and their squares */
        for(n=start;n<=stop;n=n+step){
            if(n<0){
                printf("%6d   %3.2fi\n", n, sqrt(abs(n)));
            }
            else{
                printf("%6d   %3.2f\n", n, sqrt(n));
            }
        }
    }
    /* this determines if loop is decreasing */
    else{
        /* this determines if the decreasing loop parameters are valid */
        if((start>=stop)&&(step<0)){
            /* this creates decreasing loop and prints numbers and their squares */
            for(n=start;n>=stop;n=n+step){
                if(n<0){
                    printf("%6d   %3.2fi\n", n, sqrt(abs(n)));
                }
                else{
                    printf("%6d   %3.2f\n", n, sqrt(n));
                }
            }
        }
        else{
            printf("error, start, stop, and step do not produce a valid loop\n");
        }
    }
}
else{
    printf("error, 3 numbers were not provided\n");
    }
    return 0;
}
