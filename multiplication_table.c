#include<stdio.h>
main()
{
    int i,n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("Given number is :%d\n",n);
    i=1;
    while(i<=10)
    {
        printf("%d * %d = %d\n",n,i,(n*i));
        i++;
    }
}