//array based implementation of stacks
#include<stdio.h>
#define MAX_SIZE 101 //initializing size of the array 

int top=-1; //top varibale empty if top==-1
int a[MAX_SIZE]; //declaring the array

//push function to insert  the element 
void push(int x){
    if(top==MAX_SIZE-1){
        printf("stack overflow has been occured \n");
        return ;
    }
    a[++top]=x;
}

//pop function to remove the top most element
void pop(){
    if (top==-1)
    {
        printf("stack underflow has been occured");
        return;
    }
    top--;
}

//print function to print all the elements in the list 
void print(){
    int i;
    printf("stack is \n");
    for ( i = 0; i <=top; i++)
    {
        printf("%d ",a[i]);

    }
    printf("\n");
    
}

//main function
int main(){
    push(7);
    print();
    push(9);
    print();
    pop();
    print();
    push(90);
    print();

}

/*
PS D:\projects\DS\Stack> g++ stack.c -o stack
PS D:\projects\DS\Stack> ./stack
stack is 
7 
stack is
7 9
stack is 
7
stack is
7 90 */
