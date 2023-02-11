#include<stdio.h>
main()
{
    int a,b,c;
    char op;
    printf("select the option(+,-,*,/):\n");
    scanf("%c",&op);
    printf("enter the values of a and b:\n");
    scanf("%d%d",&a,&b);
    printf("%d is value of a\n",a);
    printf("%d is value of b\n",b);
    switch(op)
    {
    case '+':
    {
    printf("addition of a and b\n");
    c=a+b;
    printf("Addition of a and b is:%d",c);
    break;
    }
    case '-':
    {
    printf("sub of a and b\n");
    c=a-b;
    printf("sub a and b is:%d",c);
    break;
    }
    case '*':
    {
    printf("mul of a and b\n");
    c=a*b;
    printf("mul a and b is:%d",c);
    break;
    }
    case '/':
    {
    printf("div of a and b\n");
    c=a/b;
    printf("div a of b is:%d",c);
    break;    
    }
    default:
    printf("invalid input");
    }
}