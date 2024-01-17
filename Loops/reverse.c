#include<stdio.h>
int main(){
    int n;
    printf("Enetr the number:");
    scanf("%d",&n);
    int rev=0;
    int div;
    while(n!=0){
        div=n%10;
        rev=rev*10+div;
        n=n/10;
    }
    printf("Reverse of a number:%d",rev);
}