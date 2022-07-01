#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
    struct node*prev;
};
struct node*head;
struct node*getnode(int x){
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->prev=NULL;
    temp->next=NULL;
    return temp;
}
void insertb(int x){
    struct node*temp1=getnode(x);
    if(head==NULL){
        head=temp1;
        return;
    }
    head->prev=temp1;
    temp1->next=head;
    head=temp1;
    printf("\n");
}
void print(){
    struct node*temp2=head;
    while(temp2!=NULL){
       printf("%d",temp2->data);
       temp2=temp2->next;
    }
    printf("\n");
}
int main(){
    head=NULL;
    insertb(5);
    insertb(1);
    insertb(6);
    insertb(90);
    print();

}