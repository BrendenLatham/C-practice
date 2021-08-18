#include <stdio.h>

/*
	Brenden Latham
	Computer Programming 02
*/

int main(void) {
 int h,q,d,n,p,number;
 float value;
 printf("How many half dollars do you have?\n");
 scanf("%d",&h);

while (h<0){
 printf("Error! Cannot have a negative number of coins\n");
 printf("How many half dollars?\n");
 scanf("%d",&h);
}

 printf("How many quarters do you have?\n");
 scanf("%d",&q);

while (q<0){
 printf("Error! Cannot have a negative number of coins\n");
 printf("How many quarters?\n");
 scanf("%d",&q);
}

 printf("How many dimes do you have?\n");
 scanf("%d",&d);

while (d<0){
 printf("Error! Cannot have a negative number of coins\n");
 printf("How many dimes?\n");
 scanf("%d",&d);
}

 printf("How many nickels do you have?\n");
 scanf("%d",&n);

while (n<0){
 printf("Error! Cannot have a negative number of coins\n");
 printf("How many nickels?\n");
 scanf("%d",&n);
}

 printf("How many pennies do you have?\n");
 scanf("%d",&p);

while (p<0){
 printf("Error! Cannot have a negative number of coins\n");
 printf("How many pennies?\n");
 scanf("%d",&p);
}

 number = h + q + d + n + p;
 value = 0.5 * h + 0.25 * q + 0.1 * d + 0.05 * n + 0.01 * p;
 printf("\nYou entered the following money:\n\n");
if(h>1)
 printf("%3d half dollars\n",h);
if(h==1)
 printf("%3d half dollar\n",h);
if(q>1)
 printf("%3d quarters\n",q);
if(q==1)
 printf("%3d quarter\n",q);
if(d>1)
 printf("%3d dimes\n",d);
if(d==1)
 printf("%3d dime\n",d);
if(n>1)
 printf("%3d nickels\n",n);
if(n==1)
 printf("%3d nickel\n",n);
if(p>1)
 printf("%3d pennies\n",p);
if(p==1)
 printf("%3d pennie\n",p);
 printf("\nThese %d coins add up to a total of $%.2f\n", number, value);
}

