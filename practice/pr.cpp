#include<iostream>
using namespace std;

struct node{
    int data;
    node*next;
    node*prev;
};
node*head;
node*newnode(int x){
    node*temp=new node();
    temp->data=x;
    temp->next=temp->prev=NULL;
    return temp;
}
void insert(int x){
    node*temp=newnode(x);
   if(head==NULL){
     head=temp;
     return;
   }
   temp->next=head;
   head=temp;
}
void print(){
    node*temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");

}
int main(){
    head=NULL;
    insert(56);
     insert(10);
      insert(45);
      insert(38);
      insert(80);
      print();

}