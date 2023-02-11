#include<stdio.h>
main()
{
    int i,n;
    int t1=0;
    int t2=1;
    int t3=t1+t2;
    printf("Enter the number n:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",t1);
        t1=t2;
        t2=t3;
        t3=t1+t2;
    }
}