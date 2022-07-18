#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
};
struct node*front;
struct node*rear;
void enqueue(int x){
    struct node*temp =(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    if(front==NULL&&rear==NULL){
        front=rear=temp;
        return;
    }
    rear->next=temp;
    rear=temp;
}
void dequeue(){
    struct node*temp=front;
    if(front==NULL)return;
    else if(front==rear){
        front=rear=NULL;
    }
    else{
        front=temp->next;
        free(temp);
    }

}
void print(){
    struct node*temp=front;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    front=NULL;
    rear=NULL;
    enqueue(5);
    enqueue(10);
    print();
    dequeue();
    print();

}