#include<stdio.h>
main()
{
    int n,sum=0;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("Value is :%d\n",n);
    int i=0;
    do
    {
      sum=sum+i;
      ++i;  
    }while(i<=n);
    printf("sum of %d natural numbers is :%d",n,sum);
}