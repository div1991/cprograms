#include<stdio.h>
main()
{
    int a;
    int *p;
    printf("Enter the value of i \n");
    scanf("%d",&a);
    printf("value of is a: %d\n",a);
    p=&a;
    printf("Address of a is p = %d\n",p);
    printf("value of *p is *p = %d\n",*p);
    a=12;
    printf("value of a is a=%d\n",a);
    printf("Address of a is p = %d\n",p);
    printf("Value of *p is *p = %d\n",*p);
    *p=32;
    printf("value of *p is *p = %d\n",*p);
    printf("Address of a is p = %d\n",p);
    printf("Value of a is a = %d",a);
}