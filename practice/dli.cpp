#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
    node*prev;
};
node*head=NULL;

node*newnode(int val){
    node*temp=new node();
    temp->data=val;
    temp->next=NULL;
    temp->prev=NULL;
    return temp;
}
void insertb(int val){
    node*temp=newnode(val);
    if(head==NULL){
        head=temp;
        return;
    }
    head->prev=temp;
    temp->next=head;
    head=temp;
}
void inserte(int val){
    node*temp=newnode(val);
    node*var=head;
    if(head==NULL){
        head=temp;
        return;
    }
    while (var->next!=NULL)
    {
        var=var->next;
    }
    var->next=temp;
    temp->prev=var;
    
}
void insert(int val,int pos){}
void reverse(){}
void print(){}
void delet(int pos){}
int main(){
    inserte(5);
    insertb(2);
    inserte(4);
    insertb(8);
    inserte(10);
    print();
    reverse();
    delet(1);
    delet(3);
    print();
    insert(43,2);
    print();
}
