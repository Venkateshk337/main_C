#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    printf("Enter the elements of array:\n");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int k;
    printf("Enter the element to find:");
    scanf("%d", &k);
    for (int j = 0; j < k; j++)
    {
        int min=arr[j];
        int ind=j;
        for (int i = j+1; i < n ; i++)
        {
if (min>arr[i])
            {
            min=arr[i];
            ind=i;
            }
        } 
                int temp = arr[j];
                arr[j] = arr[ind];
                arr[ind] = temp;
    }
    printf("The %d element is %d", k, arr[k-1]);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}