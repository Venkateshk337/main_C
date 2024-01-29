#include<stdio.h>
int fibonacci(int c){
    if(c==1) return 0;
    else if(c==3 || c==2) return 1;
    else{
    return fibonacci(c-1)+fibonacci(c-2);
    }
}
int main(){
    int c;
    printf("Enter the number:");
    scanf("%d",&c);
    printf("Fibonacci=%d",fibonacci(c));
}