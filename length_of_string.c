#include<stdio.h>
main()
{
    int i;
    char str1[20];
    printf("Enter the names:\n");
    scanf("%s",str1);
    for(i=0;str1[i]!='\0';++i);
    {
    printf("Length of the string is %d",i);
    }
}
(2)by using strlen function
#include<stdio.h>
main()
{
    int i;
    char str1[20];
    printf("Enter the names:\n");
    scanf("%s",str1);
    i=strlen(str1);
    printf("Length of the string is %d",i);
}