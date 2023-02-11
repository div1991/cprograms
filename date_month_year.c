#include <stdio.h>
main()
{
    int date,month,year;
    printf("Enter date,month and year:\n");
    scanf("%d%d%d",&date,&month,&year);
    if(date>0 && date<=31)
    printf("date=%d\n",date);
    else
    printf("%d is invalid input",date);
    if(month>0 && month<=12)
    printf("month=%d\n",month);
    else
    printf("%d is invalid input",month);
    if(year)
    printf("year=%d",year);
    else
    printf("%d is invalid input");
}