#include<iostream>
#include<cstring>
void print(char *p,int x){
    while (*p!='\0')
    {
        printf("%c ",*(p));
        printf("\n");
       
        p++;
    }
     printf("%d ",x);

    
}
int main(){

    char c[]="TARUN";
    int siz =strlen(c);
    print(c,siz);

}