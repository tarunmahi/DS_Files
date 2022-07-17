#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
int getweight(char e){
    int weight=-1;
    switch(e)
    {
        case '+':
        case '-':
            weight =1;
        case '*':
        case '/':
            weight=2;
        case '$':
            weight=3; 
    }
    return weight;
}
int rightp(char f){
    if(f=='$')return true;
    return false;
}
bool isoperator(char a){
    if(a=='+'||a=='-'||a=='*'||a=='/'||a=='$')return true;
    return false;
}
bool isoperand(char b){
    if(b>='0'&&b<=9)return true;
    if(b>='a'&&b<='z')return true;
    if(b>='A'&&b<='Z')return true;
    return false;
}
bool higher(char c,char d){
    int weight1 =getweight(c);
    int weight2 =getweight(d);
    if(weight1==weight2){
        if(rightp(weight1))return false;
        else return true;
    } 
    return weight1>weight2?true:false;
}
string convert(string exp){
    stack<char> s;
    string post="";
    for(int i=0;i<exp.length();i++){
       if(exp[i]==' '||exp[i]==',')continue;
       else if(isoperator(exp[i])){
           while(!s.empty()&&s.top()!=
           '('&&higher(s.top(),exp[i])){
            post+=s.top();
             s.pop();
           }
           s.push(exp[i]);
       }
       else if(isoperand(exp[i]))post+=exp[i];
       else if(exp[i]=='(')s.push(exp[i]);
       else if(exp[i]==')'){
        while(!s.empty()&&s.top()!='('){
            post+=s.top();
            s.pop();
        }
        s.pop();
       }

    }
    while(!s.empty()){
        post+=s.top();
        s.pop();
    }return post;
    }

int main(){
    string exp;
    cout<<"enter the infix expresson :";
    getline(cin,exp);
    string postfix = convert(exp);
    cout<<"the postfix expression is "<<postfix<<"";
}