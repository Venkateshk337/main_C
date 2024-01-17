#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the points on axis:");
    scanf("%d %d",&x,&y);
    if(x==0 && y!=0)
    printf("Points in the y co-ordinate");
    else if(y==0 && x!=0)
    printf("Points in the x co-ordinate");
    else
    printf("Points on Origin");
}