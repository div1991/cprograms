#include<stdio.h>
main()
{
    int num1,num2;
    printf("Enter the values of num1 and num2:\n");
    scanf("%d%d",&num1,&num2);
    printf("num1:%d\n",num1);
    printf("num2:%d\n",num2);
    if(num1>num2)
    {
    printf("num1 is greater than num2\n");
    printf(" %d is greater than %d",num1,num2);
    }
    else
    {
    printf("num2 is greater than num1\n");
    printf(" %d is greater than %d",num2,num1);
    }
}