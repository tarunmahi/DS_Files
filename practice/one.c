#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*link;
};
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
    while(temp!=NULL){
        printf("%d => ",temp->data);
        temp=temp->link;
    }
    printf("\n");
}
int main(){
    push(9);
    push(78);
    push(10);
    print();
    pop();
    print();
}