#include<iostream>
using namespace std;
void pprint(){
    cout<<"helllo world \n";
}
int add(int a,int b){
    int c = a*b;
    return c;
}
void name(char *nam){
printf("%s ",nam);
}
int main(){
    void(*man)();
    man=pprint;
    man();
    int(*val)(int,int);
    val=add;
    printf(" the value is %d ",val(5,2));
    void(*nas)(char*);
    nas=name;
    nas("tom");
}