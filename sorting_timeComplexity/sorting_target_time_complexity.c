#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the element of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int target;
    printf("Enter the target:");
    scanf("%d", &target);
    int x = 0, y = n - 1;
    while (y > x)
    {
        if (arr[x] + arr[y] == target)
        {
            printf("Target:(%d,%d)", arr[x], arr[y]);
            break;
        }
        else if (arr[x] + arr[y] > target)
            y--;
        else
            x++;
    }
}