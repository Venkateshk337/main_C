#include<stdio.h>
int main()
{
    float pi;
    printf("Enter the fractinal number:");
    scanf("%f",&pi);
    pi=pi-(int)pi;
    printf("Fractinal part is:%f",pi);
}