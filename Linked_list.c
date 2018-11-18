#include<stdio.h>
#include<stdlib.h>
struct node{
     int data;
     struct node*link;
};
struct node* head;
void print(){
    struct node * tem;
    tem= head;
    while(tem != NULL){
        printf("%d\n",tem->data);
        tem = tem->link;
    }
}
void insert(int value){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data = value;
    temp->link = NULL;
    if(head==NULL){
        head= temp;
    }
    else{
        struct node* t;
        t= head;
        while(t->link != NULL){
            t = t->link;
        }
        t->link = temp;
    }
}
int main()
{
   head = NULL;
   insert(1);
   insert(4);
   insert(7);


    print();
    return 0;
}
