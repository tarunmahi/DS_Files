#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isoperator(char c){
    if(c=='+'||c=='-'||c=='*'||c=='/'||c=='$')return true;
    return false;
}
int getweight(char c){
    int weight=0;
    switch(c){
        case '+':
        case '-':
         weight=1;
         break;
        case '*':
        case '/':
        weight =2;
        break;
        case '$':
        weight =3;
        break;
    }
    return weight;
}
int rightp(char c){
    if(c=='$')return true;
    return false;
}
int higherorder(char op1,char op2){
        int wop1 = getweight(op1);
        int wop2 = getweight(op2);
        if(wop1==wop2){
            if(rightp(op1))return false;
            return true;
        }
        return wop1>wop2?true:false;
}
bool isoperand(char c){
    if(c>='0'&&c<='9')return true;
    if(c>='a'&&c<='z')return true;
    if(c>='A'&&c<='Z')return true;
    return false;
}

string convert(string val){
stack<char> s;
string postfix="";
for(int i=0;i<val.length();i++){
    if(val[i]==' '||val[i]==',')continue;
    else if(isoperator(val[i])){
        while(!s.empty()&&s.top()!='('&&higherorder(s.top(),val[i])){
            postfix+=s.top();
            s.pop();
        }
        s.push(val[i]);
    }
    else if(isoperand(val[i]))postfix+=val[i];
    else if(val[i]=='(')s.push(val[i]);
    else if(val[i]==')'){
        while(!s.empty()&&s.top()!='('){
            postfix+=s.top();
            s.pop();
        }
        s.pop();
    }

}
while(!s.empty()){
    postfix+=s.top();
    s.pop();
}
return postfix;
}
int main(){
    string exp;
    cout<<"enter the infix expression \n";
    getline(cin,exp);
    string postfix = convert(exp);
    cout<<"postfix is : "<<postfix<<"\n";
}