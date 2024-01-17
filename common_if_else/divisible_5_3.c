#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num%5==0 && num%3==0)
    printf("Number divisible by both 3 and 5");
    else if(num%5==0)
    printf("Number is divisible by 5");
    else if(num%3==0)
    printf("Number is divisible by 3");
    else
    printf("Number is not divisible by both 3 and 5");

}