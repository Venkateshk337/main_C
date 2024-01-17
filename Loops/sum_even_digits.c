#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int div;
    int sum=0;
    while(n!=0){
div=n%10;
if(div%2==0){
    sum=sum+div;
}
n=n/10;
    }
    printf("%d",sum);
}