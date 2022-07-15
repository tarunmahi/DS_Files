#include<iostream>
#include<time.h>
using namespace std;
int cash=100;

void play(int bet){
    int temp;;
    char c[3]={'J','Q','K'};
    printf("shuffling  \n");
    srand(time(NULL));;
    for(int i=0;i<5;i++){
        int x = rand()%3;
        int y =rand()%3;
        temp=c[x];
        c[x]=c[y];
        c[y]=temp;
    }
    int guess;
    printf("enter the guess : ");
    scanf("%d",&guess);
    if(c[guess-1]=='Q'){
        cash+=3*bet;
        printf("you won the game the order is %c,%c,%c and cash is %d \n ",c[0],c[1],c[2],cash);
    }
    else{
        cash-=bet;
        printf("you have lost the bet order is %c,%c,%c and cash is %d \n ",c[0],c[1],c[2],cash);
    }

}
int main(){
    int bet;
    printf("virtual casino \n");
    while(cash>0){
    printf("enter the bet amount : ");
    scanf("%d",&bet);
    if(bet==0||bet>cash)break;
    play(bet);
    }

}
