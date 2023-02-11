#include<stdio.h>
main()
{
    int i,n,c,j;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("prime number are:\n");
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=1;j<=n;j++)
       {
        if(i%j==0)
        
         c++;
        }
    if(c==2)
    printf(" %d is a prime number\n",i);
    }
}