#include <stdio.h>
main()
{
   int a,b;
   printf("Enter the values of a and b:\n");
   scanf("%d%d",&a,&b);
   printf("value of a :%d\nvalue of b :%d\n",a,b);
   //for =//
   a=b;
   printf("%d\n",a);
   //for +=//
   a+=b;
   printf("addition of a and b is %d\n",a);
   //for -=//
   a-=b;
   printf("subraction of a and b is %d\n",a);
   //for *=//
   a*=b;
   printf("multiplication of a and b is %d\n",a);
   //for /=//
   a/=b;
   printf("division of a and b is %d\n",a);
   //for %=//
   a%=b;
   printf("modular of a and b is %d\n",a);
}