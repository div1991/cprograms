#include<stdio.h>
main()
{
    int num1,num2;
    printf("enter the values of num1 and num2\n");
    scanf("%d%d",&num1,&num2);
    num1=num1*1;
    num1=num1*num2;
    printf("multiplication of num1 and num2 is :\n");
    printf("%d is multiplication of given numbers",num1);
}