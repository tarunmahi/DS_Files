#include<iostream>
using namespace std;



bool prime(int num){
    int m=0,flag=0;
    m=num/2;
    for (int i = 2; i <= m; i++){
        if(num%i==0){
        flag=1;
        return false;
        break;
    }}
    if(flag==0){
        return true;
    }
}
int main(){

   int num,m=0,flag=0;
   cout<<"enter no of prime numbers ";
   cin>>num;
   int arr[num];
   if(prime(num))cout<<"prime number";
   else cout<<"not a prime number";
   }
   
   

