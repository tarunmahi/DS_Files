#include<iostream>
using namespace std;

int fact(int num){
    if(num==0){
        return 1;
    }
    else if(num<0) return -1;
    else{
        return num*fact(num-1);
    }
}
int main(){
    int num;
    cout<<"enter the number";
    cin>>num;
    cout<<fact(num);

}