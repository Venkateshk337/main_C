#include<stdio.h>
int main()
{
    int sp,cp,profit,loss;
    printf("Enter the selling price:");
    scanf("%d",&sp);
    printf("Enter the cost price:");
    scanf("%d",&cp);
    if(sp>cp){
        profit=sp-cp;
        printf("Seller made profit:%d ",profit);
    }
    else{
        loss=cp-sp;
        printf("Seller made loss:%d ",loss);
    }
}