#include<stdio.h>
int max(int a[5]);
main()
{
    int a[5];
    int max_num;
    max_num=max(a);
    printf("maximum %d\n",max_num);
}
int max(int a[5])
{
    int i;
    int max=0;
    for(i=0;i<5;i++)
    {
    printf("Enter the elements of array a[%d]: ",i);
    scanf("%d",&a[i]);
    }
    printf("Array is ={%d,%d,%d,%d,%d}\n",a[0],a[1],a[2],a[3],a[4]);
    for(i=0;i<5;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    return max;
}