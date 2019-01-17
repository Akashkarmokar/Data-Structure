//
// Created by akash_karmokar on 1/17/19.
//
#include<stdio.h>
#define  size 5
int front=0,rare=0;
int queue[size];
void enqueue(int value){
    if(rare==size){
        printf("Queue is full\n");
    }
    else{
        queue[rare]=value;
        rare++;
    }
}
void dequeue(){
    if(front==rare){
        printf("Queue is empty");
    }
    else{
        front++;
    }
}
void display(){
    int i;
    for (i=front;i<rare;i++) {
        printf("%d ",queue[i]);
    }
    printf("\n");
}
int main()
{
    enqueue(5);
    enqueue(4);
    enqueue(3);
    display();
    dequeue();
    display();
    return 0;
}
