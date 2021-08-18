#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 Brenden Latham
 Computer Programming 02
*/
int menu(void);
int main(void) {
 int selection, num1, num2, ans;
  float fans;
  selection = menu();
  while (selection != 8) {
   switch (selection) {
    case 1: printf("Enter 1st number: ");
            scanf("%d", &num1);
            printf("Enter 2nd number: ");
            scanf("%d", &num2);
            ans = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, ans);
            break;
    case 2: printf("Enter 1st number: ");
            scanf("%d", &num1);
            printf("Enter 2nd number: ");
            scanf("%d", &num2);
            ans = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, ans);
            break;
    case 3: printf("Enter 1st number: ");
            scanf("%d", &num1);
            printf("Enter 2nd number: ");
            scanf("%d", &num2);
            ans = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, ans);
            break;
    case 4: printf("Enter 1st number: ");
            scanf("%d", &num1);
            printf("Enter 2nd number: ");
            scanf("%d", &num2);
             if (num2 == 0) {
                 printf("Error! Division by zero!!!\n");
                }
             else {
                 fans = (float)num1 / num2;
                 printf("%d / %d = %.2f\n", num1, num2, fans);
                }
            break;
    case 5: printf("Enter number: ");
	    scanf("%d", &num1);
	    ans = abs(num1);
            printf("|%d| = %d\n", num1, ans);
	    break;
    case 6: printf("Enter number: ");
	    scanf("%d", &num1);
	    if (num1 < 0) {
                printf("Error! Can't take square root of negative number!!!\n");
               }
            else {
                fans = sqrt(num1);
                printf("Sqrt(%d) = %f\n", num1, fans);
               }
            break;
    case 7: printf("Enter 1st number: ");
  	    scanf("%d", &num1);
	    printf("Enter 2nd number: ");
	    scanf("%d", &num2);
	    if ((num1 == 0) && (num2 <= 0)) {
                 printf("Error! %d ^ %d can't be represented!!!\n", num1, num2);
                }
            else {
                 fans = pow(num1, num2);
                 printf("%d ^ %d = %f\n", num1, num2, fans);
                }
            break;
    
   default: printf("%d is not a valid selection\n", selection);
  }
 selection = menu();
 }
 printf("Bye!\n");
}


int menu(void) {
    int choice;
    printf("\n");
    printf("1 Add\n");
    printf("2 Subtract\n");
    printf("3 Multiply\n");
    printf("4 Divide\n");
    printf("5 Absolute Value\n");
    printf("6 Square Root\n");
    printf("7 Powers\n");
    printf("8 Quit\n");
    printf("Enter a Selection: ");
    scanf("%d", &choice);
    return choice;
}
