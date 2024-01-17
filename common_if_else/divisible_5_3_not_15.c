#include<stdio.h>
int main(){
    int n;
    printf("Enter the numer:");
    scanf("%d",&n);
    if(n%15==0 ){
printf("It is divided by 15 ");
    }
    else{
        printf("It is not divisible by 15\n");
        if(n%5==0)
        printf("It is divisible by 5");
        else if(n%3==0)
        printf("It is divisible by 3");
        else
        printf("It is not divisible by both 3 And 5");

    }
}