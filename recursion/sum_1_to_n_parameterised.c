#include<stdio.h>
int s=0;
void sum(int n){
s=s+n;
if(n==0) {
    printf("%d",s);
    return;
}
sum(n-1);
return;
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    sum(n);
//     printf("\n%d",s);
}