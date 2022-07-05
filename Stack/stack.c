//stack array based implementation

#include<stdio.h>
#define MAX_SIZE 101
int a[MAX_SIZE];
int top =-1;

void push(int x){
    if(top==MAX_SIZE-1){
        printf("stack overflow error\n");
        return;
    }
    a[++top] =x;
}
void pop(){
    if(top==-1){
        printf("stack underflow error \n");
        return;
    }
    top--;

}
void print(){
    int i ;
    printf("stack is ");
    for(i=0;i<=top;i++){
        printf(" %d => ",a[i]);
    }
    printf("\n");
}
int main(){
    push(5);
    print();
    push(12);
    print();
    push(1);
    print();
    pop();
    print();
    push(7);
    print();
}
