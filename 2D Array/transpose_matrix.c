#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter the number of rows:");
    scanf("%d", &row);
    printf("Enter the number of columns:");
    scanf("%d", &col);
    // taking matrix input from user
    int arr[row][col];
    printf("Enter the elements of matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // transpose of matrix
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = i; j < col; j++)
    //     {
    //         int temp = arr[i][j];
    //         arr[i][j] = arr[j][i];
    //         arr[j][i] = temp;
    //     }
    // }


    int trans[col][row];
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            trans[i][j]=arr[j][i];
        }
    }
    printf("\n");
    printf("Transposed matrix is:\n");
    // printing transposed matrix
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
}