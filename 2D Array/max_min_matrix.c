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

    int min;
    int max;
    int id_max_i = 0, id_min_i = 0;
    int id_max_j = 0, id_min_j = 0;
    printf("Enter the elements of matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            min = max = arr[0][0];
            if (max < arr[i][j])
            {
                id_max_i=i;
                id_max_j=j;
                max = arr[i][j];
            }
            if (max > arr[i][j])
            {
                id_min_i=i;
                id_min_j=j;
                min = arr[i][j];
            }
        }
    }
    printf("\n");
    printf("Maximum element is %d and idex is (%d,%d)\n",max,id_max_i,id_max_j);
    printf("Minimum element is %d and idex is (%d,%d)\n",min,id_min_i,id_min_j);
}