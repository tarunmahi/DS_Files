#include<stdio.h>
#include<stdlib.h>
//initialize pointer variables
struct node{
    int data;
    struct node*prev;
    struct noode*next;
};
struct node*head;//initialize head as a global variable..

//node generating function used to create a node whenever called..
struct node*getnode(int x){
    struct node*temp1 = (struct node*)malloc(sizeof(struct node));
    temp1->data=x;
    temp1->prev=NULL;
    temp1->next=NULL;
    return temp1;
}
//insert at beginning function
void insertb(int x){
    struct node*temp1=getnode(x);
    if(head==NULL){
        head=temp1;
        return;
    }
    head->prev=temp1;
    temp1->next=head;
    head=temp1;
}
//insert at ending function
void inserte(int x){
    struct node*temp=head;
    struct node*temp2 = getnode(x);
    if(head==NULL){
        head=temp2;
        return;
    }
    
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp2->prev=temp;
    temp->next=temp2;
}
//print function /traversing call function
void print(){
    struct node*temp=head;
    while (temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    
}
//main function--
int main(){
    head=NULL;
    inserte(5);
    insertb(2);
    inserte(4);
    insertb(8);
    inserte(10);
    print();
}