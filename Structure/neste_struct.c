#include <stdio.h>
#include <string.h>
struct book
{
    char name[20];
    int price;
};
struct specialbook
{
    struct book e;
    int no_pages;
};
int main()
{
    struct specialbook b1 = {
        "Heart", 500, 300};
    printf("%s\n", b1.e.name);
    printf("%d\n", b1.e.price);
    printf("%d\n", b1.no_pages);

    printf("\n");
    struct book b2;
    b2.price = 600;
    strcpy(b2.name, "Ravi");
    printf("%s\n", b2.name);
    printf("%d\n", b2.price);

    printf("\n");
    struct specialbook b3;
    b3.e.price=700;
    strcpy(b3.e.name,"Arun");
    b3.no_pages=800;
    printf("%s\n", b3.e.name);
    printf("%d\n", b3.e.price);
    printf("%d\n", b3.no_pages);

}