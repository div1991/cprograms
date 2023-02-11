#include<stdio.h>
main()
{
    int i;
    printf("Enter the value of i:\n");
    scanf("%d",&i);
    if(i>=30 && i<=40)
    {
        printf("Given number is b/w 30 to 40\n");
    }
    else if(i>40 && i<=50)
    {
        printf("Given number is b/w 40 to 50\n");
    }
    else
    {
        printf("Invalid input");
    }
}