#include <stdio.h>
int addTwoNumbers(int *n1,int *n2);
main()
{
    int fno,sno,sum;
    int *n1;
    int *n2;
    printf("Enter the values of f.no and s.no\n");
    scanf("%d%d",&fno,&sno);
    printf("Value of fno = %d\n",fno);
    printf("Value of sno = %d\n",sno);
    n1=&fno;
    n2=&sno;
    sum= addTwoNumbers(n1,n2);
    printf("Addition of Two Numbers is *n1 and *n2 = sum\n");
    printf("                            %d  +   %d   = %d\n",*n1,*n2,sum);
}
int addTwoNumbers(int *n1,int *n2)
{
    int sum;
    sum = *n1 +*n2;
    return sum;
}