#include<stdio.h>
main()
{
    int age;
    printf("Enter the age of the person:\n");
    scanf("%d",&age);
    printf("Age of the person is:%d\n",age);
    if(age>=18)
    printf("Person is Eligible for vote");
    else
    printf("Person is Not eligible for vote");
}