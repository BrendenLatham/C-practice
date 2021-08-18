#include <stdio.h>
#include <stdlib.h>
/*
	Brenden Latham
	Computer Programming II
	Calculating the sum of [1,100]and[-25,-1]
	sum.c
*/
int main()
{
int i, sum=0;
/* this gets numbers 1 through 100 */
for(i=1;i<=100;i++){
/* this adds the numbers */
	sum=sum+i;
}
printf("sum of the integers = %d\n", sum);
/* this resets the sum to 0 */
sum=0;
/* this gets numbers -25 through -1 */
for(i=-1;i>=-25;i--){
/* this adds the numbers */
	sum=sum+i;
}
printf("sum of the negative integers = %d\n", sum);
return 0;
}
