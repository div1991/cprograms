#include<stdio.h>
main()
{
    int a,b,add;
    int *p,*q;
    printf("Enter the values of a and b\n");
    scanf("%d%d",&a,&b);
    printf("Value of a : %d\nValue of b : %d\n",a,b);
    p=&a;
    q=&b;
    add=(*p)+(*q);
    printf("Addition of a and b is add\n");
    printf("            %d    %d     %d",a,b,add);
}