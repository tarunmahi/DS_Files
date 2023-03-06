#include<stdio.h>
#include<iostream>

using namespace std;

void exp(){
    int n1=0,n2=1,n3,num,i;
    cout<<"enter the number ";
    cin>>num;
    cout<<n1<<" "<<n2<<" ";

    for ( i = 2; i < num; i++)
    {
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
    }
}
void fib(int num){
  static int n1=0,n2=1,n3;
  if(num>0){
    n3=n1+n2;
    n1=n2;
    n2=n3;
    cout<<n3<<" ";
  fib(num-1);
  }

  }

int main(){
    //exp();
    int num;
    cout<<"enter num :";
    cin>>num;
    cout<<" series are 0 1 ";
    fib(num-2);
}