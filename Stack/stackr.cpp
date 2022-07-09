#include<iostream>
#include<cstring>
using namespace std;

void func(int (*c)[2][3]){
    printf("%d ",c[0][0][1]);
}

int main(){
    int c[1][2][3] = {{{2,5,13},{7,6,10}}};
    func(c);

}