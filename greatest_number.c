#include<stdio.h>
main()
{
    float num1,num2,num3;
    printf("enter the three numbers num1,num2,num3:\n");
    scanf("%f%f%f",&num1,&num2,&num3);
    if(num1>num2 && num1>num3)
    printf("%.2f is greater than other two numbers ",num1);
    if(num2>num1 && num2>num3)
    printf("%.2f is greater than other two numbers",num2);
    if(num3>num1 && num3>num2)
    printf("%.2f is greater than other two numbers",num3);   
}