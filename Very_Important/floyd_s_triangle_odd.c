#include <stdio.h>
int main()
{
    int row;
    printf("Enter the number of rows:");
    int a = 1;
    scanf("%d", &row);
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            printf("%d ", a);
            a = a + 2;
        }
        printf("\n");
    }
}