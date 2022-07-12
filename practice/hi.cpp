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
    node*temp=top;
    if(top==NULL)return;
    stack<node *>s;
    while (temp!=NULL)
    {
        s.push(temp);
        temp=temp->link;
    }
    struct node*temp1 =s.top();
    top=temp1;
    s.pop();
    while (!s.empty())
    {
        temp1->link=s.top();
        s.pop();
        temp1=temp1->link;
    }
    temp1->link=NULL;
    

    
}
void print(){
    node*temp=top;
    while (top!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->link;

    }
    printf("\n");
    
}

int main(){
    top=NULL;
    push(50);
    push(24);
    push(11);
    rev();
    print();
}