//linked list joining at nth position
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*head;
void insert(int data,int pos){
    struct node*temp1=(struct node*)malloc(sizeof(struct node));
    temp1->data=data;
    temp1->next=NULL;
    if (pos==1){
        temp1->next=head;
        head=temp1;
        return;
    }
    int i;
    struct node*temp2=head;
    for ( i = 0; i < pos-2; i++)
    {
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
}
void print(){
    struct node*temp=head;
    while (temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
    
}

int main(){
 head=NULL;
 insert(4,1);
  insert(5,2);
   insert(1,2);
    insert(6,3);
     insert(3,5);
     print();
}