#include<stdio.h>
main()
{
    char s[10];
    int i;
    int c=0;
    printf("Enter the number:\n");
    gets(s);
    for(i=0;s[i]!=0;i++)
    {
        if((s[i]>='0') && (s[i]<='9'))
        {
            c++;
        }
    }
    printf("%d",c);
}