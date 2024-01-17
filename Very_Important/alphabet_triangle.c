#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter number of rows:");
    scanf("%d",&row);
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            printf("%c ",(char)('A'+j));
        }
        printf("\n");
    }
}