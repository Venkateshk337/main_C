#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter number of rows:");
    scanf("%d",&row);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
        if(i%2!=0){
            printf("%d ",j);
        }
        else{
            printf("%c ",(char)('A'+(j-1)));
        }
        }
        printf("\n");
    }
}