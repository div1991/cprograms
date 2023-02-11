#include<stdio.h>
main()
{
    int i;
    char str[100]="Hello";
    for(i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
    }
}