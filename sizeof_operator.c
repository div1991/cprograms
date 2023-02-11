#include <stdio.h>
main()
{
   int a;
   float b;
   double c;
   char d;
   printf("%d bytes\n%d bytes\n%d bytes\n%d bytes",sizeof(a),sizeof(b),sizeof(c),sizeof(d));
}