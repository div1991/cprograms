#include<stdio.h>
main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("Given number is :%d\n",n);
    if(n%11==0)
    printf("Given number %d is divisible by 11",n);
    else
    printf("Given number %d is Not divisible by 11",n);
}