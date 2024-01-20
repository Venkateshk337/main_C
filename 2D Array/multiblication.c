#include <stdio.h>
int main()
{
    // First matrix
    int col1, row1;
    printf("Enter the number of rows in 1st matrix:");
    scanf("%d", &row1);
    printf("Enter the number of columns in 1st matrix:");
    scanf("%d", &col1);
    printf("Enter the in 1st matrix elements of matrix:\n");
    int arr1[row1][col1];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    // Second matrix
    int col2, row2;
    printf("Enter the number of rows in 2st matrix:");
    scanf("%d", &row2);
    printf("Enter the number of columns in 2st matrix:");
    scanf("%d", &col2);
    printf("Enter the in 2st matrix elements of matrix:\n");
    int arr2[row2][col2],arr3[row1][col2];
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    if (col1 != row2)
    {
        printf("matrix 1 cann't multiplied by matrix2");
    }
    else
    {
        int k;
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
arr3[i][j]=0;
                for (k =0; k < col1; k++)
                {
                    arr3[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
    }
    printf("\n");

    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
}