#include<stdio.h>
main()
{
    int i;
    int *p;
    printf("Enter the integer\n");
    scanf("%d",&i);
    printf("Value of i is : %d\n",i);
    p=&i;
    if(*p%2==0)
    printf("Given number %d is Even number",*p);
    else
    printf("Given number %d is odd number ",*p);
}