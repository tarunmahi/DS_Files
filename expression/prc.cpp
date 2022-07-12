#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool equal(char a, char b){
    if(a=='('&&b==')')return true;
    if(a=='['&&b==']')return true;
    if(a=='{'&&b=='}')return true;
    return false;
}
bool isbalance(string val){
    stack <char> s;
  for (int i = 0; i < val.length(); i++)
  {
    
    if(val[i]=='{'||val[i]=='('||val[i]=='[') s.push(val[i]);
    if(val[i]=='}'||val[i]==')'||val[i]==']'){
        if(s.empty()||!equal(s.top(),val[i])) return false;
    else s.pop();
    }
  }return s.empty()?true:false;
}

int main(){
    string expr;
    printf("enter the expression :");
    cin>>expr;
    if(isbalance(expr)) printf("blanaced eqq...");
    else printf("not balanced");

}