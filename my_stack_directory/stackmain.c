#include <stdio.h>
#include "stacksubs.h"
/*
    Brenden Latham
    Programming II
    stacks.c
    using stacks
*/
int menu(void);
int main(){
    int selection, pushnum, popnum;
    stack top;
    init_stack(&top);
    selection=menu();
    while(selection!=4){
        switch(selection){
            case 1: if(!is_full()){
                        printf("please give a number: ");
                        scanf("%d", &pushnum);
                        printf("%d was added to stack\n", pushnum);
                        push(&top, pushnum);
                    }
                    else{
                        printf("Error, stack is full\n");
                    }
                    break;
            case 2: if(!is_empty(top)){
                        popnum=pop(&top);
                        printf("%d was removed from stack\n", popnum);
                    }
                    else{
                        printf("Error, stack is empty\n");
                    }
                    break;
            case 3: if(!is_empty(top)){
                        print_stack(top);
                    }
                    else{
                        printf("Error, stack is empty\n");
                    }
                    break;
            default: printf("%d is not a valid selection\n", selection);
        }
        selection=menu();
    }
    printf("Bye!\n");
}
int menu(void){
    int choice;
    printf("1 Push\n");
    printf("2 Pop\n");
    printf("3 Print\n");
    printf("4 Quit\n");
    printf("Enter a selection: ");
    scanf("%d", &choice);
    return choice;
}

