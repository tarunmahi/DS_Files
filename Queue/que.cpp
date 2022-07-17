//array based implementation
#include<iostream>
# define MAX_SIZE 101
using namespace std;
class Queue
{
    private:
             int a[MAX_SIZE];
             int front,rear;
    public:
         Queue(){
            front=-1;
            rear=-1;
         }
         bool isempty(){
            if(front==-1&&rear==-1)return true;
            return false;
         }
         bool isfull(){
            return (rear+1)%MAX_SIZE==front?true:false;
         }
         void enqueue(int x){
            if(isfull())cout<<"queue is full ..."; return;
            if(isempty())front=rear=0;
            else{
                rear = (rear+1)%MAX_SIZE;
            }
            a[rear]=x;
         }

};
int main(){
}