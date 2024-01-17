#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    int copy = n;
    int rev = 0, div;
    while (copy != 0)
    {
        div = copy % 10;
        rev = rev * 10 + div;
        copy = copy / 10;
    }
    printf("Reverse is %d\n", rev);
    printf("Sum of number and its reverse is %d", n + rev);
}