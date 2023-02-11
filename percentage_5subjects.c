#include<stdio.h>
main()
{
  float sub1,sub2,sub3,sub4,sub5,total,per;
  printf("Enter the markes of sub1,sub2,sub3,sub4,sub5:\n");
  scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
  total=sub1+sub2+sub3+sub4+sub5;
  per=(total/500)*100;
  printf("%f is percentage of Five subjects",per);
}