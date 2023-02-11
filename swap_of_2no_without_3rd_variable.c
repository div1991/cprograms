#include<stdio.h>
main()
{
    int a,b;
    printf("enter the values of a and b\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
}