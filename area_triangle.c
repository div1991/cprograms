#include<stdio.h>
main()
{
  int b,h,area;
  printf("Enter the values of b,h:\n");
  scanf("%d%d",&b,&h);
  area=(b*h)/2;
  printf("%d is area of triangle of given parameters",area);
}