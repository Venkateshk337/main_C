#include<stdio.h>
int main()
{
    float x1,x2,x3,x4,x5;
    printf("Enter the 5 subject marks out of 100:");
    scanf("%f %f %f %f %f",&x1,&x2,&x3,&x4,&x5);
    float percent=(x1+x2+x3+x4+x5)/5;
    printf("Percetage is %.2f",percent);
}