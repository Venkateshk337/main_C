#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    int prime = 1;
    if (n == 1 || n <= 0)
        printf("Enter number is not prime");
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1)
            printf("Enter the number is prime");
        else
            printf("Enter number is not prime number");
    }
}
