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
    int find,dupli;
    int arr1[n];
    for (int i = 0; i < n - 1; i++)
    {
        find=arr[i];
        if(find==arr1[find]){
dupli=arr[i];
break;
        }
        arr1[find]=find;
    }
    printf("Duplicate number is %d", dupli);
}