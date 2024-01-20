#include<stdio.h>
int main(){
    int sub;
    int students;
    printf("Enter the number of students marks to enter:");
    scanf("%d",&students);
    printf("Enter the number of subjects:");
    scanf("%d",&sub);
    int arr[students][sub];
    printf("Enter the marks:\n");
    for(int i=0;i<students;i++){
        for(int j=0;j<sub;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<students;i++){
        for(int j=0;j<sub;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}