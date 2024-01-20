#include<stdio.h>
#include<string.h>
struct student{
    char name[30];
    int roolNo;
};
struct student x;
void fun(struct student x){
    strcpy(x.name,"Venkatesh");
    x.roolNo=40;
}
int main(){
    
    strcpy(x.name,"Arun");
    x.roolNo=50;
    printf("%s\n",x.name);
    printf("%d\n",x.roolNo);

    fun(x);
    printf("%s\n",x.name);
    printf("%d\n",x.roolNo);
}