#include<stdio.h>
int add ();
main()
{
    int sum;
    sum=add();
    printf("Addition of a and b is c :%d",sum);
}
int add()
{
    int a;
    int b;
    int c;
    printf("Enter the values of a and b:\n");
    scanf("%d%d",&a,&b);
    printf("value of a :%d\nvalue of b :%d\n",a,b);
    c=a+b;
    return c;
}