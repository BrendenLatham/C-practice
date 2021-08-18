#include <stdlib.h>
#include <stdio.h>
#include "boolean.h"
#include "stacksubs.h"
/*
    All definitions for subprograms
*/
void init_stack(stack *s){
    (*s)=NULL;
}
boolean is_full(void){
    stack temp;
    temp=(stack) malloc(sizeof(struct stacknode));
    if(temp==NULL){
        return TRUE;
    }
    else{
        free(temp);
        return FALSE;
    }
}
boolean is_empty(stack s){
    if(s==NULL){
        return TRUE;
    }
    else{
        return FALSE;
    }
}
void push(stack *s, int x){
    stack temp;
    temp=(stack) malloc(sizeof(struct stacknode));
    temp->data=x;
    temp->next=(*s);
    (*s)=temp;
}
int pop(stack *s){
    stack temp;
    int data_popped;
    temp=*s;
    data_popped=temp->data;
    *s=temp->next;
    free(temp);
    return data_popped;
}
void print_stack(stack s){
    if(!is_empty(s)){
        printf("%d\n", s->data);
        print_stack(s->next);
    }
}

