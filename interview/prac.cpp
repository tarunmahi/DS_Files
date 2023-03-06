#include<iostream>

using namespace std;
int main(){
    char val[]={'T','A','R','U','N'};
    int tot=sizeof(val)/sizeof(val[0]);
    string a="";
    for (int i = 0; i <  tot; i++)
    {
        a=a+val[i];
    }
    cout<<a<<" ";
    

}