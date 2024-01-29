#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elemets of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++){
        int min=__INT_MAX__;
        int index=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                index=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[index];
        arr[index]=temp;
    }
    printf("\n");
    for(int i=0;i<n;i++){
printf("%d ",arr[i]);
    }
}