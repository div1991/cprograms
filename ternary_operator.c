#include <stdio.h>
main()
{
   int a,b;
   printf("Enter the values of a and b:\n");
   scanf("%d%d",&a,&b);
   printf("Value of a:%d\nValue of b:%d\n",a,b);
   (a>b)?printf("a:%d is bigger than b:%d",a,b):printf("b:%d is bigger than a:%d",b,a);
}