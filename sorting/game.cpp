#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

bool ismatch(char a, char b){
    if(a=='('&&a==')')return true;
    else if(a=='['&&a==']')return true;
    else if(a=='{'&&a=='}')return true;
else return false;
}
bool expression(string val){
    stack <char> s;
    for(int i=0;i<val.length();i++){
        if(val[i]=='('||val[i]=='{'||val[i]=='[')s.push(val[i]);
        else if(val[i]==')'||val[i]=='}'||val[i]==']'){
        if(s.empty()||!ismatch(s.top(),val[i]))return false;
       else s.pop();   
    }
    }
   return s.empty()?true:false;
}
int main(){
    string exp;
    printf("enter a expression : ");
   cin>>exp;
    if(expression(exp))printf("eq is balanced..");
    printf("unbalanced equation..");
}