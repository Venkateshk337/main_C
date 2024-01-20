#include<stdio.h>
#include<string.h>
struct employee{
    int emp_id;
    char name[30];
    float salary;
};
int main(){
struct employee s2;
struct employee s1={16,"Arun",70000};
printf("%s\n",s1.name);
printf("%d\n",s1.emp_id);
printf("%.2f\n",s1.salary);
printf("\n");
s2.emp_id=15;
strcpy(s2.name,"Venkatesh");
s2.salary=60000;
printf("%s\n",s2.name);
printf("%d\n",s2.emp_id);
printf("%.2f\n",s2.salary);
}