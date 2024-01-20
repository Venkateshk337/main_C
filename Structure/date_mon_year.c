#include <stdio.h>
typedef struct date
{
    int date;
    int month;
    int year;
} date;

int main()
{
    date arr[3];
    for (int i = 0; i < 1; i++)
    {
        printf("Enter the date:");
        scanf("%d", &arr[i].date);
        printf("Enter the month:");
        scanf("%d", &arr[i].month);
        printf("Enter the year:");
        scanf("%d", &arr[i].year);
        printf("\n");
    }
    arr[2]=arr[0];

    if (arr[0].date == arr[2].date && arr[0].month == arr[2].month && arr[0].year == arr[2].year)
    {
        printf("Dates are equal");
    }
    else
    {
        printf("Dates are not equal");
    }
}