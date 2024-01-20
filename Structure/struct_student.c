#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct student{
int roolNo;
char name[30];
char department[30];
int course[30];
int year_of_joining;
}student;
bool fun(student s1,student s2){
    if(strcasecmp(s1.department,s2.department)==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    student s1,s2;
    
    if(fun(s1,s2)){
        printf("Same department");
    }
    else{
        printf("Not same department");
    }
    
}