#include<stdio.h>
main()
{
    int a[100];
    int i;
    for(i=0;i<5;i++)
    {
    printf("Enter the elements of array a[%d]: ",i);
    scanf("%d",&a[i]);
    }
    printf("Array is ={%d,%d,%d,%d,%d}",a[0],a[1],a[2],a[3],a[4]);
}