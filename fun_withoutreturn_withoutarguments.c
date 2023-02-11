#include<stdio.h>
void add ();
main()
{
    add();
}
void add()
{
    int a,b,c;
    printf("Enter the values of a and b:\n");
    scanf("%d%d",&a,&b);
    printf("value of a :%d\nvalue of b :%d\n",a,b);
    c=a+b;
    printf("Addition of a %d and b %d is c =%d ",a,b,c);
}