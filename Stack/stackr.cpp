#include<iostream>
#include<cstring>
using namespace std;

void func(int (*c)[2][3] ,int (*p)[2]){
    printf("%d and %d \n",&c[0][1][1],p[0][1]);
    printf("tarun ");
}

int main(){
    int c[1][2][3] = {{{2,5,13},{7,6,10}}};
    int a[2][2]={{12,1},{45,4}};
    func(c ,a);

}