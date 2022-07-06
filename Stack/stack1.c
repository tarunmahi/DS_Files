#include<stdio.h>
#include<stdlib.h>
struct node{int data; struct node *link;};
struct node*top=NULL;
void push(int x){
    struct node*temp =(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->link=top;
    top=temp;
}
void pop(){
    struct node*temp=top;
    top=temp->link;
    free(temp);
    
}
void print(){
    struct node*temp=top;
    printf("stack is :");
    while(temp!=NULL){
        printf("%d => ",temp->data);
        temp=temp->link;
    }
    printf("\n");
}
void topval(){
    struct node*temp=top;
    printf("the top element is : %d \n",temp->data);
}
void isempty(){
    struct node*temp=top;
    if(top==NULL)printf("\n true");
    else printf("false") ;
}
void reverse(){
    struct node*prev,*curr,*next;
    prev=top;
    while(curr!=NULL){
    curr=prev->link;
    next=curr->link;
    curr->link=prev;
    next->link=curr;
    prev=curr;
    curr=next;
    }
    top=prev;
    struct node*temp=top;
    while(top!=NULL){
        printf("%d => ",temp->data);
        temp=temp->link;
    }
    printf("\n");

}
int main(){
    push(12);
    push(87);
    print();
    pop();
    push(10);
    print();
    topval();
    isempty();
    reverse();
    print();
}