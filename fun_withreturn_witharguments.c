#include<stdio.h>
int add (int a,int b,int c);
main()
{
    int a;
    int b;
    int c;
    int sum;
    sum=add(a,b,c);
    printf("Addition of a and b is c:%d",sum);
}
int add(int a,int b,int c)
{
    printf("Enter the values of a and b:\n");
    scanf("%d%d",&a,&b);
    printf("value of a :%d\nvalue of b :%d\n",a,b);
    c=a+b;
    return c;
}