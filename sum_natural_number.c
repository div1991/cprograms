#include<stdio.h>
main()
{
    int sum=0,i,n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("Given number is :%d\n",n);
    i=0;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("Sum of given natural number %d is %d",n,sum);
}