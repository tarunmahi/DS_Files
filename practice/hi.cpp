#include<iostream>
using namespace std;
int main(){
    int n;
    printf("enter size of array \n");
    scanf("%d ",&n);
    int *p = (int *)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        p[i] = i*i;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d",p[i]);
    }
    
    

}
