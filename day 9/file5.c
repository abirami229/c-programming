#include<stdio.h>
void numbers(int x){
    if(x==5)return;
    printf("%d",x);
    numbers(x-1);
    }
    int main(){
        numbers(10);
    }