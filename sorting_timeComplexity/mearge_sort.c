#include <stdio.h>
void meargeSort(int arr[], int l, int r);
void merge(int arr[], int l, int mid, int r);
int main()
{
    int n;
    printf("Enter the number of elemnts:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    meargeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void meargeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        meargeSort(arr, l, mid);
        meargeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}
void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int larr[n1], rarr[n2];
    for (int i = 0; i < n1; i++)
    {
        larr[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        rarr[i] = arr[mid + i + 1];
    }
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (larr[i] <= rarr[j])
        {
            arr[k] = larr[i];
            i++;
        }
        else
        {
            arr[k] = rarr[j];
            j++;
        }
        k++;
    }
    while (j < n2)
    {
        arr[k] = rarr[j];
        j++;
        k++;
    }
    while (i < n1)
    {
        arr[k] = larr[i];
        i++;
        k++;
    }
}