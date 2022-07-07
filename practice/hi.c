#include<stdio.h>


void increment(int *p){
    *p=(*p)+1;
}
int main(){
    int i=9;
    increment(&i);
    printf("i value is : %d",i);

}