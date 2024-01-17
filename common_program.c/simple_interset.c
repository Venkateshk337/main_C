#include<stdio.h>
int main()
{
    float per,rate,time;
    printf("Enter the principle:");
    scanf("%f",&per);
    printf("Enter the time:");
    scanf("%f",&time);
    printf("Enter the rate:");
    scanf("%f",&rate);
    float simple=(per*rate*time)/100;
    printf("simple interest:%.2f",simple);
}