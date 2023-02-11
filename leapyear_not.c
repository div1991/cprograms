#include<stdio.h>
main()
{
    int year;
    printf("Enter the year:\n");
    scanf("%d",&year);
    printf("year:%d\n",year);
    if(year%4==0)
    printf(" %d is a Leap Year",year);
    else
    printf(" %d is a NOT a Leap Year",year);
}