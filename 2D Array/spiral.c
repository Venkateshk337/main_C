#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter number of rows:");
    scanf("%d", &row);
    printf("Enter number of columns:");
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
    int row_min = 0, row_max = row - 1, col_min = 0, col_max = col - 1;
    int count = 0;
    while (count < row * col)
    {
        for (int j = col_min; j <= col_max; j++)
        {
            printf("%d ", arr[row_min][j]);
            count++;
        }
        row_min++;
        for (int i = row_min; i <= row_max; i++)
        {
            printf("%d ", arr[i][col_max]);
            count++;
        }
        col_max--;
        for (int j = col_max; j >= col_min; j--)
        {
            printf("%d ", arr[row_max][j]);
            count++;
        }
        row_max--;
        for (int i = row_max; i >= row_min; i--)
        {
            printf("%d ", arr[i][col_min]);
            count++;
        }
        col_min++;
    }
}