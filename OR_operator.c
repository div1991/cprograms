#include<stdio.h>
main()
{
    char ch;
    printf("Enter the character:\n");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z'))
    {
        printf("Enter is character %c",ch);
    }
    else
    {
        printf("Invalid input");
    }
}