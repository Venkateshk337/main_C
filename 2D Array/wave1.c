#include <stdio.h>
int main()
{
    int row, col;
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
    // wave print
    for (int i = 0; i < row; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 0; j < col/2; j++)
            {
                int temp = arr[i][j];
                arr[i][j] = arr[i][col -1- j];
                arr[i][col - 1-j] = temp;
            }
        }
    }

    // printing element
    for (int i = 0; i < row; i++)
    {
        // if (i % 2 == 0)
        // {
            for (int j = 0; j < col; j++)
            {
                printf("%d ", arr[i][j]);
                // }
                // }
                // else{
                //     for(int j=col-1;j>=0;j--){
                //         printf("%d ",arr[i][j]);
                //     }
            }
            printf("\n");
    }
}