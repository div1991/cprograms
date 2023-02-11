#include<stdio.h>
main()
{
    int i;
    printf("Enter the integer:\n");
    scanf("%d",&i);
    printf("Given interger is:%d\n",i);
    if(i>=0)
    printf("Given interger :%d is a positive number",i);
    else
    printf("Given interger %d is a negative number",i);
}