#include<stdio.h>
main()
{
  int num1,num2,i;
  printf("Enter the number num1, num2:\n");
  scanf("%d%d",&num1,&num2);
  for(i=0;i<num2;i++)
  num1++;
  printf("%d is addition of num1 and num2",num1);
}