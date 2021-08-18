#include <stdio.h>

/*
	Brenden Latham
	Computer Programmin 1-02
*/

int main (int argc, char *argv[])
{
	int num1, num2, ans;
	
	if (argc == 3) {
		sscanf(argv[1], "%d", &num1);
		sscanf(argv[2], "%d", &num2);
	}
	else {
	printf("Error, Must Enter Exactly 2 Numbers\n");
	return 0;
	}
	ans = num1 - num2;
	printf("Answer: %d\n", ans);
return 0;
}
