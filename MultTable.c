#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
   	Brenden Latham
   	Programming II
	Displaying multiplication table	
   	MultTable.c
*/
int main(int argc, char *argv[])
{
int n, inc, col, row;
/* this gets from command line or gets from scan */
if(argc==3){
	sscanf(argv[1], "%d", &n);
	sscanf(argv[2], "%d", &inc);
}
else{
	printf("please enter range\n");
	scanf("%d", &n);
	printf("please enter increment\n");
	scanf("%d", &inc);
}
/* this makes sure numbers are correct */
while((n<0)||(n>10)){
	printf("error, unacceptaple range\n");
	printf("please enter range from 0 to 10\n");
	scanf("%d", &n);
}
while(inc<=0){
	printf("error, unacceptable increment\n");
	printf("please enter a positive increment\n");
	scanf("%d", &inc);
}
/* this constructs table */
printf("     ");
for(col=-n;col<=n;col=col+inc){
	printf("%4d ", col);
}
printf("\n\n");
for(row=-n;row<=n;row=row+inc){
	printf("%4d ", row);
	for(col=-n;col<=n;col=col+inc){
		printf("%4d ", col*row);
	}
printf("\n");
}
	return 0;
}
	
