#include<iostream>
using namespace std;

int main(){
    int num,r,sum=0,temp;
    cout<<"enter num :";
    cin>>num;
    temp=num;
    while (num>0)
    {
        r=num%10;
        sum=(sum*10)+r;
        num=num/10;
    }
    
    if(temp==sum)cout<<"prime";
    else cout<<"not a prime";
}