#include<stdio.h>
main()
{
    int i,j,k;
    char str1[]="xxxx";
    char str2[]="yyyyyyy";
    char str3[]="zz";
    for(i=0;str1[i]!='\0';i++)
    {
        printf("%c",str1[i]);
    }
    printf("\n");
    for(j=0;str2[j]!='\0';j++)
    {
     printf("%c",str2[j]);
    }
     printf("\n");
    for(k=0;str3[k]!='\0';k++)
    {
     printf("%c",str3[k]);
    }
}