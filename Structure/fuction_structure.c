#include <stdio.h>

typedef struct date
{
    int date;
    int month;
    int year;
} date;
void fun(date arr[]);

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

    printf("%d\n",arr[0].date);
    printf("%d\n",arr[0].month);
    printf("%d\n",arr[0].year);
    printf("\n");
    fun(arr);
    printf("%d\n",arr[0].date);
    printf("%d\n",arr[0].month);
    printf("%d\n",arr[0].year);
return 0;
}
void fun(date arr[]){
    arr[0].date=16;
    arr[0].month=5;
    arr[0].year=2004;
return;
}