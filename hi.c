#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
    struct node*prev;
};
struct node*head;
struct node*getnode(int x){
    struct node*newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->prev=NULL;
    newnode->next=NULL;
    return newnode;
}
void insertb(int x){
    struct node*temp = getnode(x);
    if (head==NULL)
    {
        head=temp;
        return;
    }
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void inserte(int k){
    struct node*temp=head;
    struct node*temp1=getnode(k);
    if (temp==NULL)return;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=temp1;
    temp1->prev=temp;
    
}
void reverse(){
    struct node*temp=head;
    if(temp==NULL)return;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    printf("\n");
    printf("reverse linked list");
    while (temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->prev;
    }
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
void delete( int pos){
    struct node *curr ,*next;
    struct node*temp=head;
    if (pos==1)
    {
        head=temp->next;
        free(temp);
        return;
    }
    int i;
    for ( i = 0; i < pos-2; i++)
    {
        temp=temp->next;
    }
    curr=temp->next;
    next=curr->next;
    temp->next=curr->next;
    next->prev=curr->prev;
}
void ins(int x , int pos ){
    struct node*temp=head ,*next;
   struct node*curr=getnode(x);
   if(pos==1){
    head=temp;
    return;
   }
   int i;
   for ( i = 0; i < pos-2; i++)
   {
    temp=temp->next;
   }
   next=temp->next;
   curr->next=temp->next;
   curr->prev=temp;
   temp->next=curr;
   next->prev=curr;
}
int main(){
    head=NULL;
    insertb(3);
    inserte(76);
    insertb(5);
    insertb(91);
    inserte(32);
    print();
    reverse();
    delete(3);
    delete(1);
    ins(55,3);
    print();
}