#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
if(j+i>=n+1)
printf("%c ",'A'+j);
else printf("  ");

        }
        printf("\n");
    }
}