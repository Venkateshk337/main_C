#include<stdio.h>
int main(){
    int row,col;
    printf("Enter the number of rows:");
    scanf("%d",&row);
    printf("Enter the number of col:");
    scanf("%d",&col);
printf("\n");
int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j]=10;
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}