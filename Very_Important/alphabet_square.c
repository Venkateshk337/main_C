#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter number of rows:");
    scanf("%d",&row);
    // printf("Enter number of columns:");
    // scanf("%d",&col);
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            printf("%c ",(char)('A'+j));
        }
        printf("\n");
    }
}