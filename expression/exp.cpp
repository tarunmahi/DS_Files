#include<iostream>
#include<stack>
#include<string>
using namespace std;
//matching of closure in stack and popping it..
bool sameas(char a, char b){
   if(a=='('&&b==')')return true;//condition for () closure
   else if(a=='['&&b==']')return true;//condition for [] closure
   else if(a=='{'&&b=='}')return true;//condition for {} closure
   return false; //if closure is not found 
}
//test conditions and stack implementation
bool issame(string val){
        stack <char> s; //stack of type char
        for(int i=0;i<val.length();i++){
            if(val[i]=='['||val[i]=='('||val[i]=='{') s.push(val[i]);//push open char symblos on stack
            else if(val[i]==']'||val[i]==')'||val[i]=='}'){
                if(s.empty()||!sameas(s.top(),val[i])) return false;//if stack is empty or values of top and below stack dont match
                else s.pop();//if closure is same pop the items;
            }
        }
        return s.empty()?true:false; //after iterating all elements in stack
}
//main function
int main(){
    string expr; //value of expressions
    cout<<"enter the expression";
    cin>>expr;
    if(issame(expr))cout<<"balanced eq ";
    else  cout<<"unbalanced";
    
}