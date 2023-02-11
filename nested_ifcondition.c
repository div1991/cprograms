#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter the values of a,b and c:\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("Value of a :%d\nValue of b:%d\nValue of c:%d\n",a,b,c);
    if(a>b)
    {
        if(a>c)
        {
            printf("a is greater than b and c\n");
            printf("%d is Greater than %d and %d",a,b,c);
        }
    }
    else if(b>a)
    {
        if(b>c)
        {
            printf("b is greater than a and c\n");
            printf("%d is Greater than %d and %d",b,a,c);
        }
    }
    else
    {
        printf("c is greater than a and b");
        printf("%d is Greater than %d and %d",c,a,b);
    }
}