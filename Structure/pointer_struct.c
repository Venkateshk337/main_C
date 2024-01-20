#include<stdio.h>
typedef struct person{
int age;
int weight;
}person;
person *p1,*p2,s1,s2;

int main()
{
s1.age=30;
s1.weight=40;
s2.age=30;
s2.weight=40;
p1=&s1;
p2=&s2;
printf("%d\n",p1->age);
printf("%d\n",p1->weight);
printf("%d\n",p2->age);
printf("%d\n",p2->weight);
p1->age=100;
printf("%d",p1->age);

}