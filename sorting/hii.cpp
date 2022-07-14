#include<iostream>

int compare(const void* a,const void *b){
    int A=*((int *)a);
    int B =*((int*)b);
    return B-A;
    
    }
int main(){
    int i ,a[]={-11,24,12,-5,5,-20};
    int size= sizeof(a)/sizeof(a[0]);
    qsort(a,size,sizeof(int),compare);
    for(int j =0;j<size;j++)printf("%d ",a[j]);
}