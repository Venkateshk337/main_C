#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter the three number:");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3)
    printf("First number is greater");
    else if(num2>num3 && num2>num1)
    printf("Second number is greater");
    else
    printf("Third number is greater");
}