#include<iostream>
#include<stack>
#include<string>
using namespace std;
struct node{
    int data;
    node*link;
};
node*top;
void push(int x){
    node*temp = new node();
    temp->data=x;
    temp->link=NULL;
    if(temp==NULL){
        temp->link=top;
        top=temp;
        return;
    }
    temp->link=top;
    top=temp;
}
void print(){
    node*temp=top;
    while (temp!=NULL)
    {
        printf("%d \n",temp->data);
        temp=temp->link;
    }
    printf("\n");
    
}
void pop(){
    node*temp=top;
    if(top==NULL)printf("stack underflow ");
    top=temp->link;
    free(temp);
}
void isemp(){
    if(top==NULL)printf("true");
    else printf("false");
}
void reverse(){
    node*temp=top;
    stack<node*> s;
    while (temp!=NULL)
    {
        s.push(temp);
        temp=temp->link;
    }
    temp=s.top();
    top=temp;
    s.pop();
    while(!s.empty()){
        temp->link=s.top();
        s.pop();
        temp=temp->link;
    }
    temp->link=NULL;

    
}
int main(){
    top=NULL;
    push(5);
    push(10);
    push(90);
    reverse();
    print();
    
}