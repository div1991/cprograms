#include<stdio.h>
main()
{
    int n,i,fact=1;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       fact=fact*i;
    }
    printf("factorial of given number is = %d",fact);
}