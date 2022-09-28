#include<iostream>
using namespace std;

struct node{
    int data;
    node*next;
    node*prev;
};
node*head=NULL;

node*newnode(int x){
    node*temp=new node();
    temp->data=x;
    temp->next=NULL;
    temp->prev=NULL;
    return temp;
}

void insertb(int val){
    node*temp=head;
    node*temp2=newnode(val);
    if(head==NULL){
        temp2=head;
        return;
    }
    temp2->next=head;
    temp->prev=temp2;

}
void inserte(int val){
    node*temp=head;
    node*temp2=newnode(val);
    if(head==NULL){
        head=temp2;
        return;
    }
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=temp2;
    temp2->prev=temp;
    
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
    node*temp2=temp->next;
    node*temp3=temp2->next;
    temp->next=temp3;
    temp3->prev=temp;
    free(temp2);
    
}
void reverse(){
    node*temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    cout<<"reverse linked list is : \n";
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->prev;
    }
    printf("\n");
    
}
void insert(int val,int pos){
    node*temp=head;
    if(pos==1){
        temp->next=head;
        head=temp;
        return;
    }
    for (int i = 0; i < pos-2; i++)
    {
        temp=temp->next;
    }
    node*te=newnode(val);
    node*temp2=temp->next;
    te->prev=temp;
    te->next=temp2;
    temp->next=te;
    temp2->prev=te;
    

}
int main(){
     inserte(5);
    inserte(2);
    inserte(4);
    inserte(8);
    inserte(10);
    print();
    reverse();
    delet(1);
    delet(3);
    print();
    insert(43,1);
    print();
}