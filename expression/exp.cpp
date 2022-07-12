#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
bool areparser(char a,char b){
    if(a=='('&&b==')')return true;
    else if(a=='{'&&b=='}')return true;
    else if(a=='['&&b==']')return true;
    return false;
}
bool isexpression(string ex){
    stack<char> s;
    for (int i = 0; i < ex.length(); i++)
    {
       if(ex[i]=='('||ex[i]=='{'||ex[i]=='[') 
       s.push(ex[i]);
       else if(ex[i]==')'||ex[i]=='}'||ex[i]==']'){
        if(s.empty()||!areparser(s.top(),ex[i]))
        return false;
        else s.pop();
       }
    }
    return s.empty()? true:false;

}
int main(){
    string exp;
    printf("enter the expression : ");
    cin>>exp;
    if(isexpression(exp))
        printf("balanced eq..");
    else printf("unbalanced");

}