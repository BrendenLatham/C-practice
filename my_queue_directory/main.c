#include <stdio.h>
#include "queue.h"
/*
    Brenden Latham
    Programming II
    main.c
    using queues
*/
int menu();
int main(){
    int selection, add_data, fetch_data, add_pri, fetch_pri;
    queue myqueue;
    init_queue(&myqueue);
    selection=menu();
    while(selection!=4){
        switch(selection){
            case 1: if(!is_full()){
                        printf("please give a number followed by a space and its priority: ");
                        scanf("%d %d", &add_data, &add_pri);
                        printf("%d was added to queue with priority %d\n", add_data, add_pri);
                        add(&myqueue, add_data, add_pri);
                    }
                    else{
                        printf("Error, queue is full\n");
                    }
                    break;
            case 2: if(!is_empty(myqueue)){
                        fetch_data=fetch(&myqueue);
                        printf("%d was removed from queue\n", fetch_data);
                    }
                    else{
                        printf("Error, queue is empty\n");
                    }
                    break;
            case 3: if(!is_empty(myqueue)){
                        list_queue(myqueue);
                    }
                    else{
                        printf("Error, queue is empty\n");
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
    printf("1 Add\n");
    printf("2 Fetch\n");
    printf("3 List\n");
    printf("4 Quit\n");
    printf("Enter a selection: ");
    scanf("%d", &choice);
    return choice;
}
