#include<stdio.h>
int main(){
    int ram,shyam,ajay;
    printf("Enter Ram age:");
    scanf("%d",&ram);
    printf("Enter shyam age:");
    scanf("%d",&shyam);
    printf("Enter ajay age:");
    scanf("%d",&ajay);
    if(ram<shyam && ram<ajay){
        printf("Ram is youngest");
    }
    else if(ram>shyam && shyam<ajay){
        printf("Shyam is youngest");
    }
    else{
        printf("Ajay is youngest");
    }
}