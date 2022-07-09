#include<iostream>
#include<cstring>
using namespace std;

void func(int (*c)[2][3]){
    printf("%d \n",&c[0][1][1]);
    printf("tarun ");
}

int main(){
    int c[1][2][3] = {{{2,5,13},{7,6,10}}};
    func(c);

}