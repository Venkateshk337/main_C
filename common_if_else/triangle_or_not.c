#include<stdio.h>
int main(){
    int side1,side2,side3;
    printf("Enter the sides of triangle:");
    scanf("%d %d %d",&side1,&side2,&side3);
    if(side1+side2>=side3 && side2+side3>=side1 && side1+side3>=side2)
        printf("It is  a triangle");
    else
    printf("It is not a triangle");
}