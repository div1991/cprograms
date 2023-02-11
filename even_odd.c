#include<stdio.h>
main()
{
    int i;
    printf("Enter the value of i\n");
    scanf("%d",&i);
    if(i%2==0)
    printf("%d is even number",i);
    else
    printf("%d is odd number",i);
}   