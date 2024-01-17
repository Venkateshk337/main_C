#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int a=0,b=1;
    int fib=0;
    printf("Fibbonacii series is:");
    for(int i=1;i<=n;i++){
printf("%d,",fib);
fib=a+b;
b=a;
a=fib;
    }
}