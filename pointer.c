#include<stdio.h>
main()
{
    int a;
    int *ptr;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Value of a : %d\n",a);
    ptr=&a;
    printf("Address of %d is :%d\n",a,ptr);
    printf("value of *ptr :%d",*ptr);
}