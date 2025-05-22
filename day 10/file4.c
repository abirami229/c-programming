#include <stdio.h>
#define z 50
void swap(int a,int b){
    int t=a;        //a=80;
    a=b;            //b=100;
    b=t;
    printf("\nswap : %d %d",a,b);
    printf("\n%d\n",z+20);
}

int main() {
    printf("\n%d\n",z);
int a=5,b=10;
printf("%d %d",a,b);
swap(a,b);
printf("\n%d %d",a,b);

}