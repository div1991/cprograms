#include<stdio.h>
main()
{
  float area,cir,radius,PI=3.14;
  printf("Enter the radius: \n");
  scanf("%f",&radius);
  area=PI*radius*radius;
  printf(" %.2f is area of circle\n",area);
  cir=2*PI*radius;
  printf("%.2f is circumference of circle",cir);
}