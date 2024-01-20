#include <stdio.h>
#include <limits.h>
#include <string.h>
int main()
{
    char ch[20] = {'V', 'e', 'n', 'k', 'a', 't', 'e', 's', 'h'};
    puts(ch);
    printf("%s\n", ch);
    char ch1[30] = "Venaktesh is good boy";
    puts(ch1);
    printf("%s\n", ch1);
    int i = 0;
    while (ch1[i]!= '\0')
    {
        printf("%c", ch1[i]);
        i++;
    }
    printf("\n");
    i=0;
    while(ch[i]!='\0'){
        i++;
    }
    printf("%d\n",i);
    for(int j=i;j>2;j++){
        ch[j+1]=ch[j];
    }
    ch[2]='a';
    printf("%s\n",ch);

    char ch2[]="Venkatesh K";
    puts(ch2);
    ch2[3]='a';
    printf("%c\n",ch2[3]);
    printf("%d\n",ch2[4]);
}