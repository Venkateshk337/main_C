#include <stdio.h>
#include <stdlib.h>
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
        int flag=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                flag=1;
            }
        }
        if(flag==0) break;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("\n");
    int target;
    printf("Enter the target:");
    scanf("%d", &target);
printf("Target:");
int flag=0;
    for (int i = 0; i < n - 1&&flag==0; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] + arr[i] == target)
            {
            printf("(%d + %d)", arr[i], arr[j]);
            flag=1;
            break;
            }
        }
    }
}