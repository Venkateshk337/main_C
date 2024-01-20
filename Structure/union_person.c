#include<stdio.h>
#include<string.h>
typedef union person{
    int age;
    int weight;
    char letter;
    char name[15];
}person;
int main(){
    person p1,p2;
    p1.age=30;
    p1.letter='B';
    // strcpy(p1.name,"Arun");
    // p1.weight=40;
    
    printf("%d\n",p1.age);
    // printf("%d\n",p1.weight);
    // printf("%s\n",p1.name);
    p2.age=3;
    p2.letter='a';
    // strcpy(p1.name,"Venkatesh");
    // p1.weight=400;
    
    printf("%d\n",p2.age);
    // printf("%d\n",p1.weight);
    // printf("%s\n",p1.name);
}