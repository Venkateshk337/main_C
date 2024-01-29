#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    int find;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                find = arr[i];
                break;
            }
        }
    }
    printf("Duplicate number is %d", find);
}