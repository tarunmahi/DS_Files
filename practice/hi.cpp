#include<iostream>
using namespace std;
struct node{
    int data;
    struct node*next;
};
struct node*head;
struct node* newnode(int x){
    struct node*temp =new node();
    temp->data=x;
    temp->next=NULL;
    return temp;
}
void insert(int x){
    struct node*temp1 =newnode(x);
    if(head==NULL){
        head=temp1;
        return;
    }
     node*temp2 =head;
    while (temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=temp1;
    

}
void print(){
    node*temp=head;
    while (temp!=NULL)
    {
        printf("%d => ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void delet(int pos){
 node*temp=head;
 if(pos==1){
    head=temp->next;
    free(temp);
    return;
 }
 for ( int i = 0; i < pos-2; i++)
 {
    temp=temp->next;
 }
struct node*temp2=temp->next;
temp->next=temp2->next;
free(temp2);
 
}
void reverse(){
    node*curr,*prev,*next;
    curr=head;
    prev=NULL;
    while (curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    

}

int main(){
    head=NULL;
    insert(5);
    insert(25);
    insert(12);
    insert(54);
    insert(90);
    print();
    delet(3);
    print();
    reverse();
    print();

}