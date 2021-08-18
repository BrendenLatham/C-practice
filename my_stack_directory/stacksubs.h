#include "boolean.h"
#ifndef STACKSUBS_H
#define STACKSUBS_H
typedef struct stacknode{
    int data;
    struct stacknode *next;
    } *stack;
void init_stack(stack *);
boolean is_full(void);
boolean is_empty(stack);
void push(stack*, int);
int pop(stack *);
void print_stack(stack);
#endif

