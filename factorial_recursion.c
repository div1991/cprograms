#include<stdio.h>
int fact(int n);
main()
{
    int n,result;
    printf("Enter the n value:\n");
    scanf("%d",&n);
    result=fact(n);
    printf("%d",result);
}
int fact(int n)
{
    if(n>=1)
    return n*fact(n-1);
    else
    return 1;
}