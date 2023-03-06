#include<iostream>
using namespace std;

int main(){
    int num,r,temp,sum=0;
    cout<<"enter the number";
    cin>>num;
    temp=num;
   while (num>0){
    r=num%10;
    sum=(sum)+(r*r*r);
    num=num/10;
   }
   
    if(temp==sum)cout<<"armstrong";
    else cout<<"no";
    
}