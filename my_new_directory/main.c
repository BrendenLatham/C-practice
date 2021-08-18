#include <stdio.h>
#include "linear.h"
#include "quad.h"

/*  Brenden Latham
    Programming II
    Solving quadratic equations
    QuadEquat.c
*/
int main(int argc, char *argv[]){
    int a, b, c;
    if(argc==4){
        sscanf(argv[1], "%d", &a);
        sscanf(argv[2], "%d", &b);
        sscanf(argv[3], "%d", &c);
        if(a==0){
            if(b==0){
                printf("Error, degenerate equation\n");
            }
            else{
                solve_linear(b, c);
            }
        }
        else{
            solve_quad(a, b, c);
        }
    }
    else{
        printf("Error, must provide 3 coefficients on command line\n");
    }
return 0;
}

