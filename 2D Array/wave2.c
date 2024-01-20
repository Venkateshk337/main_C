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

    for(int j=0;j<col;j++){
        if(j%2==0){
            for(int i=0;i<row/2;i++){
                int temp=arr[i][j];
                arr[i][j]=arr[row-i-1][j];
                arr[row-i-1][j]=temp;
            }
        }
    }

    printf("\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}