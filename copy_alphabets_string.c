#include<stdio.h>
main()
{
    char s1[10];
    char s2[10];
    int i;
    int c=0;
    printf("Enter the string:\n");
    gets(s1);
    for(i=0;s1[i]!=0;i++)
    {
        if((s1[i]>='0') && (s1[i]<='9'))
        {
            s1[i]=c;
            c++;
        }
    }
    printf("%s\n",s1);
    for(i=0;s1[i]!=0;i++)
    {
        s2[i]=s1[i];
    }
    s2[i]='\0';
    printf("first string =%s\n",s1);
    printf("second string =%s",s2);
}