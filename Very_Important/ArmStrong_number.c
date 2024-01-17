#include<stdio.h>
int main(){
int n;
printf("Enter the number:");
scanf("%d",&n);
printf("Anstrong numbers:");
for(int i=1;i<=n;i++){
    int n,ans=0;
    int j=i;
    while(j!=0){
        n=j%10;
        ans=ans+n*n*n;
        j=j/10;

    }
    if(ans==i)
    printf("%d ",ans);
}
}