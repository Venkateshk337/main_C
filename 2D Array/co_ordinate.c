#include <stdio.h>
#include <limits.h>

int main()
{
    int row;
    int col;
    printf("Enter the number of rows:");
    scanf("%d", &row);
    printf("Enter the number of columns:");
    scanf("%d", &col);
    int arr[row][col];
    printf("Enter the elements of matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    int l1, l2, r1, r2;
    printf("Enter the Co_ordinates of first point:\n");
    scanf("%d%d", &l1, &r1);
    printf("Enter the Co_ordinates of second point:\n");
    scanf("%d%d", &l2, &r2);
    int sum = 0;
    printf("\n");
    if (l1 < 0 || l2 < 0 || r1 < 0 || r2 < 0 || l1 > l2 || l2 >= row || r1 > r2 || r2 >= col)
        printf("Invalide input");
    else
    {
        for (int i = l1; i <= l2; i++)
        {
            for (int j = r1; j <= r2; j++)
            {
                sum = sum + arr[i][j];
            }
        }
    }
    printf("Sum is:%d", sum);
}