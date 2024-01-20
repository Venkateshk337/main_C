#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter the number of rows:");
    scanf("%d", &row);
    printf("Enter the number of columns:");
    scanf("%d", &col);

    printf("Enter the elements of first matrix:\n");
    // Enter the elements of first matrixs
    int arr1[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\n");
    printf("Enter the elements of second matrix:\n");
    // Enter the elements of second matrixs
    int arr2[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("\n");
    printf("Addition of two matrixes:\n");

    // addition of matrix without  third array;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {

    //         printf("%d ", arr1[i][j] + arr2[i][j]);
    //     }
    //     printf("\n");
    // }



    
    int arr3[row][col];
    // addition of matrix without  third array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
        printf("\n");
    }
    // printing third matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}