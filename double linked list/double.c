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
void inserte(int x){
    struct node*temp3 = getnode(x);
    struct node*temp4=head;
    while (temp4->next!=NULL)
    {
        temp4=temp4->next;
    }
    temp4->next=temp3;
    temp3->prev=temp4;
    
}
void reverse(){
    struct node*temp=head;
    if(temp==NULL)return;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    printf("reverse list");
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->prev;
    }
    printf("\n");
}
void print(){
    struct node*temp2=head;
    while(temp2!=NULL){
       printf("%d ->",temp2->data);
       temp2=temp2->next;
    }
    printf("\n");
}
void delete(int pos){
    struct node*curr ,*next;
    struct node*temp=head;
    int i;
    if(pos==1){
        head=temp->next;
        free(temp);
        return;
    }
    for ( i = 0; i < pos-2; i++)
    {
        temp=temp->next;
    }
    curr=temp->next;
    next=curr->next;
    temp->next=curr->next;
    next->prev=curr->prev;
    free(curr);

    
}
int main(){
    head=NULL;
    insertb(5);
    insertb(1);
    insertb(6);
    insertb(90);
    print();
    inserte(4);
    print();
    reverse();
   delete(2);
   delete(3);
   delete(1);
   print();
}