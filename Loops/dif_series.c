#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int sum=0;
    // formula even term=-n/2
    // odd term=-n/2+n
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum=sum-i;
        }
        else{
            sum=sum+i;
        }
    }
    printf("sum=%d",sum);
}