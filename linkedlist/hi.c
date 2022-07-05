#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};
struct node*head;
void insert(int x,int pos){
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    if (pos==1){
        temp->next=head;
        head=temp;
        return;
    }
    struct node*temp1 =head;
    int i;
    for ( i = 0; i < pos-2; i++)
    {
        temp1=temp1->next;
    }
    temp1->next=temp;

}
void print(){
    struct node*temp=head;
    while (temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    head=NULL;
    insert(5,1);
    insert(6,2);
    insert(10,1);
    print();
}
