#include<stdio.h>
#include<math.h>
int main(){
    int n;
    float a,r;
    printf("Enter the strating point of GP:");
    scanf("%f",&a);
    printf("Enter the GP difference:");
    scanf("%f",&r);
    printf("Enter the how many to print of GP:");
    scanf("%d",&n);
    int GP=1;
    for(int i=1;i<=n;i++){
    if(i==1){
        printf("%.2f ",a);
    }
    else{
        a=a*r;
        printf("%.2f ",a);
    }
    }
}