#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*head;
void insert(int x,int pos){
    struct node*temp1 = (struct node*)malloc(sizeof(struct node));
    temp1->data=x;
    temp1->next=NULL;
    if(pos==1){
        temp1->next=head;
        head=temp1;
        return;
    }
    int i;
    struct node*temp2=head;
    for(i=0;i<pos-2;i++){
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
    printf("\n");
}
void print(){
    struct node*temp=head;
    while (temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    
}
void reverse(){
    struct node*current,*prev,*next;
    current=head;
    prev=NULL;
    while (current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    printf("\n");
}
void delete(int pos){
    struct node*temp1=head;
    if(pos==1){
        head=temp1->next;
        free(temp1);
    }
    int i;
    for ( i = 0; i < pos-2; i++)
    {
        temp1=temp1->next;
    }
    struct node*temp2=temp1->next;
    temp1->next=temp2->next;
    free(temp2);
    printf("\n");
}
int main(){
    head=NULL;
    insert(3,1);
    insert(4,1);
    insert(7,2);
    insert(8,4);
    print();
    reverse();
    print();
    delete(2);
    print();
}