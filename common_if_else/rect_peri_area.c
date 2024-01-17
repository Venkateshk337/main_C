#include<stdio.h>
int main(){
int length,breadth;
printf("Enter the length & breadth of rectangle:");
scanf("%d %d",&length,&breadth);
int area=length*breadth;
int peri=2*(length+breadth);
if(area==peri)
printf("Area of reactangle is equal to perimeter");
else if(area>peri)
printf("area of reactangle is greater than perimeter");
else printf("perimeter is greater than area");

}