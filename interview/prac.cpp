#include<iostream>

using namespace std;


int output(int arr[],int n,int key){
 for (int i = 0; i < n; i++)
 {
    if(arr[i]==key){
        return i;
    }
    
 }return -1;
}
int binary(int arr[],int n,int key){
 int s=0,e=n;
 int mid=(s+e)/2;
 if(arr[mid]==key){
    return mid;
 }else if(arr[mid]>key){
    e=mid-1;
 }else{
    s=mid+1;
 }
}
int main(){
    int n;
    int key;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"enter key";
    cin>>key;

    cout<<binary(arr,n,key);
}