#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the two number:");
    scanf("%d %d",&a,&b);
    int c=a/b;
    int re=a-(b*c);
    printf("quotient of number: %d\n",c);
    printf("%d",re);
}