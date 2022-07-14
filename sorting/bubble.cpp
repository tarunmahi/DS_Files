#include<iostream>
int iscompare(int a,int b){
    if(a>b)return -1;
    else return +1;
}
void sort(int* a ,int v ,int(*iscompare)(int,int)){
int i,j,temp;
for(i=0;i<v;i++)
for(j=0;j<v-1;j++){
    if(iscompare(a[j],a[j+1])>0){
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
}
}

int main(){
    int i, a[] = {5,23,11,67,1,42,12};
    int size =sizeof(a)/sizeof(a[0]);
    sort(a,size,iscompare);
    for(i=0;i<size;i++)printf("%d ",a[i]);

}