#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter the number of rows:");
    scanf("%d", &row);
    printf("Enter the number of columns:");
    scanf("%d", &col);
    int arr[row][col], coun[row];
    printf("Enter the elements of matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int i = 0;
    while (i < row)
    {
        int count = 0;
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
        coun[i] = count;
        i++;
    }
    int max_1 = coun[0], index = 0;
    for (int i = 0; i < row; i++)
    {
        
        if (coun[i] > max_1)
        {
            index = i;
            max_1 = coun[i];
        }
    }
    printf("Maximum of 1's in row  %d  with %d ones present", index, max_1);
    return 0;
}
