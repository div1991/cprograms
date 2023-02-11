#include<stdio.h>
main()
{
    int a,b,c,d;
    printf("Select the option:\n");
    scanf("%d",&d);
    printf("Enter the values of a and b:\n");
    scanf("%d%d",&a,&b);
    printf("Value of a :%d\nValue of b:%d\n",a,b);
    if(d==1)
    {
        printf("Addition of a and b:\n");
        c=a+b;
        printf("Addition of a and b =%d",c);
    }
    else if(d==2)
    {
        printf("sub of a and b:\n");
        c=a-b;
        printf("sub of a and b =%d",c);
    }
    else
    {
        printf("mul of a and b:\n");
        c=a*b;
        printf("mul of a and b =%d",c);
    }
}