#include<stdio.h>
int main()
{
    int r;
    printf("Enter the radius of sphere:");
    scanf("%d",&r);
    float vol=(4.0/3.0)*3.14*r*r*r;
    printf("Volume of sphere is %f",vol);
}