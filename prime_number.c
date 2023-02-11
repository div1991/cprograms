#include<stdio.h>
main()
{
    int i,n,c=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    if(n==1)
    {
    printf("%d is prime number",n);
    exit(0);
    }
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
         c++;
        }
    }
    if(c==2)
    {
    printf(" %d is a prime number",n);
    }
    else 
    {
    printf("%d not prime number",n);
    }
}