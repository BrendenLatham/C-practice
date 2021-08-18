#include <stdlib.h>
#include <stdio.h>
#include "boolean.h"
#include "queue.h"
/*
    All definitions for subprograms
*/
void init_queue(queue *q){
    (*q)=(queue)malloc(sizeof(struct endpointer));
    (*q)->front=NULL;
    (*q)->back=NULL;
}
boolean is_full(void){
    node_pointer temp;
    temp=(node_pointer)malloc(sizeof(struct queuenode));
    if(temp==NULL){
        return TRUE;
    }
    else{
        free(temp);
        return FALSE;
    }
}
boolean is_empty(queue q){
    if((q->front==NULL)&&(q->back==NULL)){
        return TRUE;
    }
    else{
        return FALSE;
    }
}
void add(queue *q, int d, int p){
    node_pointer newnode, temp;
    newnode=(node_pointer)malloc(sizeof(struct queuenode));
    temp=(node_pointer)malloc(sizeof(struct queuenode));
    newnode->data=d;
    newnode->pri=p;
    if(is_empty(*q)){
        newnode->next=NULL;
        (*q)->front=newnode;
        (*q)->back=newnode;
    }
    else{
        if(newnode->pri<=(*q)->back->pri){
            newnode->next=NULL;
            (*q)->back->next=newnode;
            (*q)->back=newnode;
        }
        else{
            if(newnode->pri>(*q)->front->pri){
                newnode->next=(*q)->front;
                (*q)->front=newnode;
            }
            else{
                temp=(*q)->front;
                while(newnode->pri<=temp->next->pri){
                    temp=temp->next;
                }
                newnode->next=temp->next;
                temp->next=newnode;

            }
        }
    }
}
int fetch(queue *q){
    node_pointer temp;
    int data_fetched;
    temp=(*q)->front;
    data_fetched=temp->data;
    if((*q)->front==(*q)->back){
        (*q)->front=NULL;
        (*q)->back=NULL;
    }
    else{
        (*q)->front=temp->next;
    }
    free(temp);
    return data_fetched;
}
void list_queue(queue q){
    node_pointer temp;
    temp=q->front;
    while(temp!=NULL){
        printf("%d\n", temp->data);
        temp=temp->next;
    }
}

