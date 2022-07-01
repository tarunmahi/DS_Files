#include<stdio.h>
#include<stdlib.h>
//initialize the pointer variables
struct node{
    int data;
    struct node*next;
};
struct node*head;//declaring head as a global variable for entire process....

//insert function--
void insert(int x ,int pos){
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    if(pos==1){
        temp->next=head;
        head=temp;
        return;
    }
    int i;
    struct node*temp2=head;
    for(i=0;i<pos-2;i++){
        temp2=temp2->next;
    }
    temp->next=temp2->next;
    temp2->next=temp;
    printf("\n");
}
//printing the linked list by traversing them--
void print(){
    struct node*temp=head;
    while (temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    
}
//deleting the node at n'th position 
void delete(int pos){
    struct node*temp =head;
    int i;
    if(pos==1){
        head=temp->next;
        free(temp);
        return;
    }
    for(i=0;i<pos-2;i++){
        temp=temp->next;
    }
    struct node*temp2=temp->next;
    temp->next=temp2->next;
    free(temp2);

}
//reversing the linked list entirely
void reverse(){
    struct node *curr,*prev,*next;
    curr=head;
    prev=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
}
//main function--
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
delete(3);
delete(1);
print();
}

/* expected output
25 -> 5 -> 19 -> 10 -> 6 ->
6 -> 10 -> 19 -> 5 -> 25 ->
10 -> 5 -> 25 ->*/