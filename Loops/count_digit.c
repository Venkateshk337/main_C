#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int i;
    int sum=0;
    while(n!=0){
        
i=n%10;
sum=sum+i;
n=n/10;
    }
    printf("%d",sum);
}