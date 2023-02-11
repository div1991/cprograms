#include<stdio.h>
main()
{
    int a,b,swap;
    printf("enter the values of a and b\n");
    scanf("%d%d",&a,&b);
    swap=a;
    a=b;
    b=swap;
    printf("%d %d",a,b);
}