#include<stdio.h>
main()
{
    int n,i,rev=0;
    printf("Enter the value of n:\n ");
    scanf("%d",&n);
    while(n>0)
    {
    i=n%10;
    rev=rev*10+i;
    n=n/10;
    }
    printf("%d ",rev);
}