#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of element:");
    scanf("%d", &n);
    printf("Enter the element of array:\n");
    int arr[n], sum = 0, sum1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    sum1 =( n * (n -1) )/ 2;
    int duplicate = sum - sum1;
    printf("Duplicate element is %d", duplicate);
}