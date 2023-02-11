#include<stdio.h>
main()
{
    int a,b,c,d;
    printf("Select the option\n");
    scanf("%d",&d);
    printf("Enter the values of a,b:\n");
    scanf("%d%d",&a,&b);
    printf("Value of a :%d\nValue of b:%d\n",a,b);
    switch(d)
    {
        case 1:
        {
            printf("Addition operation\n");
            c=a+b;
            printf("Addition of a and b is: %d",c);
            break;
        }
        case 2:
        {
            printf("sub operation\n");
            c=a-b;
            printf("sub of a and b is: %d",c);
            break;
        }
        case 3:
        {
            printf("Multiplication operation\n");
            c=a*b;
            printf("Multiplication of a and b is: %d",c);
            break;
        }
        default:
        {
            printf("Invalid input\n");
        }
    }
}