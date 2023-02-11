#include<stdio.h>
main()
{
    int i,n,sum=0;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("Value is :%d\n",n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum of %d natural numbers is :%d",n,sum);
}