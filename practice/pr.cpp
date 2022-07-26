#include<iostream>
using namespace std;

struct node{
    int data;
    node*next;
};
node*head;
node*newnode(int x){
    node*temp=new node();
    temp->data=x;
    temp->next=NULL;
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
void insertp(int pos,int val){
    node*temp=newnode(val);
    if(pos==1){
      temp->next=head;
      head=temp;
      return;
    }
    node*temp1=head;
    for(int i=0;i<pos-2;i++){
      temp1=temp1->next;
    }
    temp->next=temp1->next;
    temp1->next=temp;
} 
void delet(int pos){
    node*temp=head;
    if(pos==1){
        head=temp->next;
        free(temp);
    }
    for(int i=0;i<pos-2;i++){
        temp=temp->next;
    }
    node*temp1=temp->next;
    temp->next=temp1->next;
    free(temp1);
}
void reverse(){
    node*curr,*prev,*next;
    curr=head;
    prev=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
}
void print(){
    node*temp=head;
    while(temp!=NULL){
        printf("%d =>",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    head=NULL;
     insert(5);
     insert(12);
     insert(78);
     insert(1);
     insert(56);
     insert(78);
     insert(11);
     printf("\n");
    insertp(2,45);
     insertp(1,15);
     insertp(5,10);
     print();
     printf("\n");
     delet(5);
     delet(1);
     delet(2);
     print();
}