//linked list deletion of node at position n
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*head;
void insert(int x,int pos){
    struct node*temp1=(struct node*)malloc(sizeof(struct node));
    temp1->data=x;
    temp1->next=NULL;
    if(pos==1){
        temp1->next=head;
        head=temp1;
        return;}
    struct node*temp2=head;
    int i;
    for ( i = 0; i < pos-2; i++)
    {
      temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
    }

void delete(int x){
    struct node*temp1=head;
    int i;
    if(x==1){
        head=temp1->next;
        free(temp1);
        return;
    }
    for(i=0;i=x-2;i++){
        temp1=temp1->next;
    }
    struct node*temp2=temp1->next;
    temp1->next=temp2->next;
    free(temp2);

}
void print(){
    struct node*temp=head;
    while (temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    
}
int main(){
    head=NULL;
    insert(6,1);
insert(1,1);
insert(7,1);
insert(5,3);
print();
printf("\n");
delete(2);
delete(1);
delete(2);
print();
}