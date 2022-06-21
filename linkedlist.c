#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;

};
struct Node*head;
void insert(int x){
    Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=NULL;

}

int main(){
    head=NULL;
    int n,i,x;
    printf("how many elements to add ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("enter the element");
        scanf("%d",&x);
        insert(x);
        print();
    }
    
}