#include<iostream>
#include<stack>
using namespace std;
struct node{
    int data;
    struct node*link;
};

struct node*top=NULL;
void push(int x){
    struct node*temp=new node();
    temp->data=x;
    temp->link=top;
    top=temp;
}
void print(){
    struct node*temp=top;
    while (top!=NULL)
    {
        printf("%d => ",temp->data);
        temp=temp->link;
    }
    printf("\n");
    
}
void pop(){
    struct node*temp=top;
    top=temp->link;
    free(temp);
}
void reverse(){
    if(top==NULL)return;
    stack<struct node*>s;
    struct node*temp=top;
    while (top!=NULL)
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
int main(){
    push(5);
    push(10);
    push(9);
    reverse();
    print();
}
