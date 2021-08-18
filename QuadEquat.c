#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*  Brenden Latham
    Programming II
    Solving quadratic equations
    QuadEquat.c
*/
void solve_linear(int, int);
void solve_quad(int, int, int);
void solve_real(int, int, int);
void solve_complex(int, int, int);
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
void solve_linear(int c, int b){
    float x;
    x=(float)-c/b;
    printf("X is %f\n", x);
}
void solve_quad(int a, int b, int c){
    if(b*b-4*a*c<0){
       solve_complex(a, b, c);
    }
    else{
        solve_real(a, b, c);
    }
}
void solve_real(int a, int b, int c){
    float x1, x2;
    x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    x2=(-b-sqrt(b*b-4*a*c))/(2*a);
    printf("X is %f and %f\n", x1, x2);
}
void solve_complex(int a, int b, int c){
   float x_real, x_imag;
   x_real=-b/(2.0*a);
   x_imag=sqrt(abs(b*b-4*a*c))/(2*a);
   printf("%f + %fi and %f - %fi\n", x_real, x_imag, x_real, x_imag);
}

