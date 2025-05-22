#include<stdio.h>
void numbers(int x){
    if(x==5)return;
    numbers(x-1);
    printf("%d",x);
    //nmbers(x-1);
}
void numbersdesc(int x){
    if(x==5)return;
    numbers(x-1);
    printf("%d",x);
}
int main(){
    numbers(10);
}