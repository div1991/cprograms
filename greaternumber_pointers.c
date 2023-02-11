#include<stdio.h>
main()
{
    int a,b;
    int *p,*q;
    printf("Enter the value of a and b is \n");
    scanf("%d%d",&a,&b);
    printf("Value of a: %d\nValue of b: %d\n",a,b);
    p=&a;
    q=&b;
    if(*p>*q)
    {
    printf("Value of a is greaterthan b\n");
    printf("         %d   greaterthan %d",a,b);
    }
    else
    {
    printf("Value of b is greaterthan a");
    printf("         %d   greaterthan %d",b,a);
    }
}