#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter number of rows:");
    scanf("%d", &row);
    // printf("Enter number of columns:");
    // scanf("%d", &col);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if(j==i||i+j==row+1 )//(row+1)-i==j
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
}