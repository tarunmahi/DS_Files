#include<iostream>
#include<stack>
using namespace std;

bool sameas(char a,char b){
    if(a=='{'&&b=='}')return true;
    else if(a=='('&&b==')')return true;
    else if(a=='['&&b==']')return true;
    else return false;

}
bool value(string exp){
    stack<char> s;
    for (int i = 0; i < exp.length(); i++){
        if(exp[i]=='['||exp[i]=='{'||exp[i]=='(')s.push(exp[i]);
        else if(exp[i]=='}'||exp[i]==']'||exp[i]==')'){
            if(s.empty()||!sameas(s.top(),exp[i])) return false;
            else s.pop();
        }
    }
    return s.empty()?true:false;
}
int main(){
    string val;
    cin>>val;
    if(value(val))cout<<"balanced eq";
    else cout<<"not a balanced equation";


}

//completed expression matching!!!!
