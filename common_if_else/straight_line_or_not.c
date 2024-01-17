#include <stdio.h>
int main()
{
    int x1, x2, x3, y1, y2, y3;
    printf("Enter 1st point:");
    scanf("%d %d", &x1, &y1);
    printf("Enter the 2nd point:");
    scanf("%d %d", &x2, &y2);
    printf("Enter the 3rd point:");
    scanf("%d %d", &x3, &y3);
    float m1 =(float) (y2 - y1) / (x2 - x1);
    float m2 =(float) (y3 - y2) / (x3 - x2);
    if (m1 == m2)
        printf("Three lines are in straight line");
    else
        printf("Three lines are not in straight line");
}