#include<iostream>
using namespace std;

struct node{
    int data;
    node*next;
};
node*head=NULL;


void insert(int val,int pos){
    node*temp = new node();
    temp->data=val;
    temp->next=NULL;
    if(pos==1){
        temp->next=head;
         head=temp;
         return;
    }
    node*temp2=head;
    for (int i = 0; i < pos-2; i++)
    {
        temp2=temp2->next;
    }
    temp->next=temp2->next;
    temp2->next=temp;
    
}
void delet(int pos){
    node*temp=head;
    if(pos==1){
        head=temp->next;
        free(temp);
        return;
    }
    for(int i=0;i<pos-2;i++){
        temp=temp->next;
    }
    node*temp2=temp->next;
    temp->next=temp2->next;
    free(temp2);

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
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    printf("\n");
}
int main(){
   // head=NULL;
   insert(45,1);
    insert(55,1);
     insert(40,2);
      insert(4,3);
       insert(32,4);
        insert(90,1);
         insert(400,6);
    print();
    reverse();
    print();
    delet(6);
    delet(2);
    delet(1);
    print();
}