#include <stdio.h>
main()
{
  int i=3;
  float f= 30.2;
  char ch = 'a';
  int *pt1;
  float *pt2;
  char *pt3;
  pt1= &i;
  pt2= &f;
  pt3=&ch;
  printf("i = %d\n",i);
  printf("f = %.2f\n",f);
  printf("ch = %c\n",ch);
  printf("\n Using & operator :\n"); 
  printf( " address of i = %d\n",&i);
  printf( " address of f = %d\n",&f);
  printf( " address of ch = %d\n",&ch);
  printf("\n Using & and * operator :\n"); 
  printf( " value at address of i = %d\n",*(&i));
  printf( " value at address of f = %.2f\n",*(&f));
  printf( " value at address of ch = %c\n",*(&ch));
  printf("\n Using only pointer variable :\n"); 
  printf( " address of m = %d\n",pt1);
  printf( " address of f = %d\n",pt2);
  printf( " address of ch = %d\n",pt3);
  printf("\n Using only pointer operator :\n"); 
  printf( " value at address of i = %d\n",*pt1);
  printf( " value at address of f= %.2f\n",*pt2);
  printf( " value at address of ch= %c\n\n",*pt3);
}