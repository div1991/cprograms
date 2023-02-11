#include<stdio.h>
main()
{
    int a,b;
    printf("Enter the values of a and b:\n");
    scanf("%d%d",&a,&b);
    printf("Value of a :%d\nValue of b:%d\n",a,b);
    if(a>b)
    {
        printf("a is greater than b\n");
        printf("%d is greater than %d",a,b);
    }
    else
    {
        printf("b is greater than a\n");
        printf("%d is greater than %d",b,a);
    }
}