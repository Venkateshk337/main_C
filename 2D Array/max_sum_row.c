#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter the number of row:");
    scanf("%d", &row);
    printf("Enter the number of column:");
    scanf("%d", &col);
    int arr[row][col], sum[row];
    printf("Enter the elements of matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int i = 0;
    while (i <row)
    {
        sum[i]=0;
        for (int j = 0; j < col; j++)
        {
            sum[i] += arr[i][j];
        }
        i++;
    }
    int max,index=0;
    for(int i=0;i<row;i++){
    max=sum[0];
    if(sum[i]>max){
index=i;
        max=sum[i];
    }
    }
    printf("\n");
    printf("Maximum sum row is %d and sum is %d",index,max);
}
