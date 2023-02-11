#include<stdio.h>
main()
{
    int n,i,rev=0,temp;
    printf("Enter the value of n:\n ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
    i=n%10;
    rev=rev*10+i;
    n=n/10;
    }
    if(temp==rev)
    printf("%d is a palindrome number",rev);
    else
    printf("%d is a NON-Palindrome number",rev);
}