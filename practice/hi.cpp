#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
};
node*head;
void insert(int val,int pos){
    node*temp=new node();
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
void print(){
    node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    printf("\n");
    
}
void reverse(){
    node*prev,*curr,*next;
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
void delet(int pos){
    node*temp=head;
    if(pos==1){
        head=temp->next;
        free(temp);
        return;
    }
    for (int i = 0; i < pos-2; i++)
    {
        temp=temp->next;
    }
    node*temp1=temp->next;
    node*temp2=temp1->next;
    temp->next=temp2;
    free(temp1);
    
} 
int main(){
    head=NULL;
insert(5,1);//insert function takes two arguments namely data value and position of the node
insert(10,2);
insert(6,3);
insert(25,1);
insert(19,3);
print();
reverse();
print();
reverse();
delet(3);
delet(1);
print();
}
//linked list completed....!!!!!