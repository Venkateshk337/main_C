#include <stdio.h>
#include <string.h>
typedef struct cricketer
{
    char name[30];
    int age;
    int no_of_matches;
    float average;
} cricket;
int main()
{
    cricket arr[20];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the name:");
        scanf("%s",arr[i].name);
        printf("Enter the age:");
        scanf("%d", &arr[i].age);
        printf("Enter the number of macthes played:");
        scanf("%d", &arr[i].no_of_matches);
        printf("Enter the average:");
        scanf("%f", &arr[i].average);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\nname:%s", arr[i].name);

        printf("\nage:%d", arr[i].age);

        printf("\nnumber of macthes played:%d", arr[i].no_of_matches);

        printf("\naverage:%f", arr[i].average);
        printf("\n");
    }
}
