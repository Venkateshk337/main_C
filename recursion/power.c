#include<stdio.h>
// int pown=1;
// int power(int a,int b){
//     if(b==0) return 1;
    
//     pown=pown*a;
//     power(a,b-1);
//     return pown;

// }
int power(int a,int b){
    if(b==0) return 1;
    else
    return a*power(a,b-1);
}
int main(){
    int a,b;
    printf("Enter the two number:");
    scanf("%d %d",&a,&b);
    int pown=power(a,b);
    printf("Power=%d",pown);
}