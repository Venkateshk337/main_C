#include<stdio.h>
int main(){
    int row;
    int col;
    printf("Enter the number of rows:");
    scanf("%d",&row);
    printf("Enter the number of columns:");
    scanf("%d",&col);
    int arr[row][col];

    printf("Enter the elements of matrix:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    printf("\n");

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        sum=sum+arr[i][j];
    }
}
printf("Sum of matrix is: %d",sum);
}