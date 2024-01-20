#include <stdio.h>
#include <string.h>
int main()
{
    char s1[]="Venkatesh",s2[]="Arun";
    char *ptr=s1;
    s1[0]='M';
    ptr="Arun";
    printf("%s\n",s1);
    printf("%s\n",ptr);
    printf("%s\n",s1);

    char s2[20];
    strcpy(s2,s1);
    printf("%s\n",s2);

    strcat(s2,s1);
    printf("%s\n",s2);
    printf("%d\n",strlen(s1));
    printf("%d\n",strcmp(s2,s2));

    printf("%s\n",strncpy(s1,s2,3));
}