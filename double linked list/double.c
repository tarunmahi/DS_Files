#include<stdio.h>
#include<stdlib.h>

struct node{
    int data; 
struct node*next;
struct node*prev;
};
struct node*head;
struct node* newnode(int x){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    (*temp).data=x;
    (*temp).prev=NULL;
    (*temp).next=NULL;
    return &temp;
}
void inserthead(int x){
    struct node *temp = newnode(x);
    if(head==NULL){
        head=temp;
        return;
    }
    head->prev=temp;
    temp->next=head;
    head=temp;
}
void print(){
    struct node*temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
       
    } printf("\n");
}
int main(){
    head=NULL;
    inserthead(5);
    inserthead(4);
    print();

}