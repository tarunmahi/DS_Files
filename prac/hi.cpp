#include<iostream>
#include<stdlib.h>
using namespace std;
void print(int *arr,int val){
for(int i=0;i<val;i++){
    cout<<" "<<arr[i];
}
}
void change (int *ar,int k,int size){
    int temp;
    for(int i=0;i<k;i++){
        temp=ar[size];
        ar[size]=ar[0];
        ar[0]=temp;
    }
    for(int i=0;i<size;i++){
        cout<<" "<<ar[i];
    }
}
using namespace std;
int main(){
    int size;
    cout<<"enter the size of array";
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++){
       cout<<"enter the" <<size<<"elements ";
       cin>>a[i];
    }
    int val = sizeof(a)/sizeof(a[0]);
    print(a,val);
    int k;
    cout<<"enter k value : ";
    cin>>k;
    change(a,k,size);

}
