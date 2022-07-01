#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
    struct node*prev;
};
struct node*head;

struct node*newnode(int x){
    struct node*temp =(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    temp->prev=NULL;
    return temp;
}
void inserthead(int x){
    struct node*temp= newnode(x);
    if(head==NULL){
        head=temp;
        return;
    }
    head->prev=temp;
    temp->next=head;
    head=temp;
    printf("\n");
}
void print(){
    struct node*temp=head;
    while (temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    
}
void reverse(){
    printf("\n");
    struct node*temp=head;
    if(temp==NULL)return;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    printf("reverse ");
    printf("\n");
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->prev;
    }
    printf("\n");
}
int main(){
    head=NULL;
    inserthead(3);
    inserthead(5);
    inserthead(8);
    inserthead(9);
    print();
reverse();
}