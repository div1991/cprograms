#include<stdio.h>
main()
{
    char s1[10];
    char s2[10];
    int i;
    printf("Enter the string:\n");
    gets(s1);
    for(i=0;s1[i]!=0;i++)
    {
        s2[i]=s1[i];
    }
    s2[i]='\0';
    printf("First string =%s\n",s1);
    printf("second string = %s\n",s2);
}