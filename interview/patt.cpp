#include<iostream>
using namespace std;

void p1(){ 
    int rows,cols;
    cin>>rows>>cols;

    for (int i = 0; i < rows; i++){
        for (int j = 0; i < cols; j++){
            if(i==1||i==rows){
                cout<<"*";
            }else if(j==1||j==cols){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        
    }cout<<"endl";

}
void pyramid(){
int n=5;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }cout<<endl;
        
    }
    
}
void inverted_pyramid(){
    int n=5;
    for (int i = n; i >=1; i--){
        for (int j = 0; j <=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }}

void space_pyramid(){
      int n=5;
    for (int i = 1; i <= n; i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" "; 
            }else{
                cout<<"*";
            }
        }cout<<endl;
    }
    /*
        *
   **
  ***
 ****
    */
}
void nummber_triangle(){
     int n=5;
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= i; j++)
    {
        cout<<i;
    }cout<<endl;
    
  }

}
void flyod_triangle(){
    int n=5,count=1;
    for (int i = 1; i <= n; i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }cout<<endl;
    }
}

int main(){
    
}