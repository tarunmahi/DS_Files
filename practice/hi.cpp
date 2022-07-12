#include<iostream>
#include<stack>
using namespace std;
struct node{
    int data;
    node*link;
};
node*top;
void push(int x){
    node*temp=new node();
    temp->data=x;
    temp->link=NULL;
    if (top==NULL)
    {
        top=temp;
        return;
    }
    temp->link=top;
    top=temp;
};
void rev(){
    struct node*temp=top;
    stack<node *> s;
    while (temp!=NULL)
    {
        s.push(temp);
        temp=temp->link;
    }
    temp=s.top();
    top=temp;
    s.pop();
    while (!s.empty())
    {
        temp->link=s.top();
        s.pop();
        temp=temp->link;
    }
    temp->link=NULL;
    
}
void print(){
    node*temp=top;
    while (top!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
}

int main(){
    top=NULL;
    push(50);
    push(24);
    push(11);
    print();
    rev();
    print();
}