#include <stdio.h>
int main()
{
    // int a[][3]={{1,2,3},{3,4,5},{6,7,8}};
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // }
    int row;
    int col;

    printf("Enter the number of rows:");
    scanf("%d", &row);
    printf("Enter the number of columns:");
    scanf("%d", &col);
    int arr[row][col];
    printf("Enter the elements of array:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    printf("Elements of matrix are:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}