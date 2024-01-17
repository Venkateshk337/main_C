

#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter number of rows:");
    scanf("%d",&row);
    int a=1;
    for(int i=0;i<row;i++){
        
        for(int j=0;j<=i;j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
}