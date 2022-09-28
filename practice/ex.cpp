#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool issame(char a,char b){
    if(a=='('&&b==')')return true;
    else if(a=='['&&b==']')return true;
    else if(a=='{'&&b=='}')return true;
    else return false;
}

bool sameas(string exp){
    stack<char> s;
    for(int i=0;i<exp.length();i++){
        if(exp[i]=='{'||exp[i]=='['||exp[i]=='(')s.push(exp[i]);
        else if(exp[i]==')'||exp[i]=='}'||exp[i]==']'){
            if(s.empty()||!issame(s.top(),exp[i]))return false;
            else s.pop();
        }
    }
    return s.empty()?true:false;

}

int main(){
    string exp;
    cout<<"enter the string";
    cin>>exp;
    if(sameas(exp))cout<<"balaced";
    else cout<<"not balanced";
}