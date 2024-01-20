#include<stdio.h>
#include<string.h>
typedef struct person{
    char name[30];
    float salary;
    int age;
}person;
int main(){
    person p1,p2,p3;
    p1.age=30;
    p1.salary=30000;
    strcpy(p1.name,"Venkatesh");
    p2.age=40;
    p2.salary=40000;
    strcpy(p2.name,"Arun");

    printf("Name of first person:%s\n",p1.name);
    printf("Age of second person:%d\n",p2.age);
    printf("\n");
    p3=p1;
    printf("Name of first person:%s\n",p3.name);
    printf("Age of second person:%d\n",p3.age);
}