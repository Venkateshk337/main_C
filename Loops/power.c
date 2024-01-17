#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    int pow=1;
    for(int i=1;i<=b;i++){
        pow=pow*a;
    }
    printf("Number %d is power %d is %d",a,b,pow);
}