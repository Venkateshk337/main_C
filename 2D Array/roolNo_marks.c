#include<stdio.h>
int main(){
    // int col;
    // printf("Enter number of students:");
    // scanf("%d",&col);
    int arr[4][2];
    printf("Enter the rool no And marks:");
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}