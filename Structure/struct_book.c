#include<stdio.h>
#include<string.h>
struct book{
    char authore[15];
    int price;
    int no_pages;
};
int main(){
    struct book b1={"ravi",500,150};
    printf("%s\n",b1.authore);
    printf("%d\n",b1.price);
    printf("%d\n",b1.no_pages);
}