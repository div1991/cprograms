#include<stdio.h>
void add (int a, int b,int c);
main()
{
    int a,b,c;
    add(a,b,c);
}
void add(int a, int b,int c)
{
    printf("Enter the values of a and b:\n");
    scanf("%d%d",&a,&b);
    printf("value of a :%d\nvalue of b :%d\n",a,b);
    c=a+b;
    printf("Addition of a %d and b %d is c =%d ",a,b,c);
}