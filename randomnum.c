#include <stdio.h>
#include <stdlib.h>
int randu(void);
void bubble(int *, int);
void swap(int *, int *);
int main(int argc, char *argv[]){
int num1, x;
if(argc==2){
	sscanf(argv[1], "%d", &num1);
	printf("getting %d numbers\n", num1);
	}
else {
	printf("Incorrect command line entry\n");
	printf("How many numbers do you wish to generate and sort?\n");
	scanf("%d", &num1);
	printf("getting %d numbers\n", num1);
	}
while(num1<2 || num1>10000){
	printf("Error, must have between 2 and 10000 numbers\n");
	printf("How many numbers do you wish to generate and sort?\n");
	scanf("%d", &num1);
	printf("getting %d numbers\n", num1);
	}
int arr[num1];
for(x=0; x<num1; x++) {
	arr[x] = randu();
	}
bubble(arr, num1);
for(x=0; x<num1; x++){
	printf("%d ", arr[x]);
	}
printf("\n");
}
int randu(void){
	static int seed=17;
    		seed=(25179*seed+23849)%65536;
    			return seed;
}
void bubble(int a[], int n){
	int i, j;
        	for(i=0; i<n-1; i++)
            		for(j=n-1; i<j; j--)
                		if(a[j-1]<a[j])
                    			swap(&a[j-1], &a[j]);
}
void swap(int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
