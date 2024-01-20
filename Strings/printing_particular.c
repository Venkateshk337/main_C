#include <stdio.h>
#include <string.h>
int main()
{
    char ch[20] = "Venkatesh";
    int i = 0;
    while (ch[i] != '\0')
    {
        printf("%c", ch[i]);
        i++;
    }
    printf("\n");
    i = 0;
    while (ch[i] != '\0')
    {
        printf("%c", i[ch]);
        i++;
    }
    printf("\n");
    char *ch2 = ch;
    i = 0;
    while (*ch2 != '\0')
    {
        printf("%c", *ch2);
        *ch2++;
        i++;
    }
    printf("\n");
    i = 0;
    while (*ch2 != '\0')
    {
        printf("%c", *(i + ch2));
        i++;
    }
    printf("\n");
}