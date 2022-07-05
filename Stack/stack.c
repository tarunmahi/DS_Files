#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
    struct node*prev;
};
struct node*head;
struct node *getnode(int x){
    struct node*newnode =(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->prev=NULL;
    newnode->next=NULL;
    return newnode;
}
void insert(int x,int pos){
    struct node*next;
    struct node*temp1=head;
    struct node*temp2 = getnode(x);
    if (pos==1)
    {
        head=temp2;
        return;
    }
    int i;
    for ( i = 0; i < pos-2; i++)
    {
        temp1=temp1->next;
    }
    

    

    
}
int main(){
    head=NULL;
    insert(5,1);
    insert(56,2);
    insert(95,1);
    print();
}