#include <stdio.h>
int main()
{
    int row;
    printf("enter the number of rows:");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == j || (i + j) % 2 == 0)
                printf("1 ");
            else
                printf("0 ");
        }
        printf(" \n");
    }

    // 2nd Method
    // int a = 0;
    // for (int i = 1; i <= row; i++)
    // {
    //     if (i % 2 == 0)
    //         a == 0;
    //     else
    //         a == 1;
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("%d ", a);
    //         if (a == 0)
    //             a = 1;
    //         else
    //             a = 0;
    //     }
    //     printf(" \n");
    // }

    // 1st method

    // for(int i=1;i<=row;i++)
    // {
    //     for(int j=1;j<=i;j++){
    //         if(i%2==0){
    //             if(j%2==0){
    //                 printf("1 ");
    //             }
    //             else printf("0 ");
    //         }
    //         else{
    //             if(j%2==0)
    //             printf("0 ");
    //             else printf("1 ");
    //         }
    //     }
    //     printf("\n");
    // }
}