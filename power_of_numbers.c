#include<stdio.h>
main()
{
    int N,a,b,c;
    printf("Enter the integer:\n");
    scanf("%d",&N);
    printf("Given interger is:%d\n",N);
    a=pow(N,1);
    b=pow(N,2);
    c=pow(N,3);
    printf("FIRST THREE POWERS OF %d are:\n",N);
    printf("%d %d %d",a,b,c);
}