#include<stdio.h>
int main(){
    int a,d,n;
    printf("Enter the strating point of AP:");
    scanf("%d",&a);
    printf("Enter the difference between the point of AP:");
    scanf("%d",&d);
    printf("Enter the how many to print of AP:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
printf("%d,",a+d*(i-1));
    }
    
    
}