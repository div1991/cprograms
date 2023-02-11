#include<stdio.h>
main()
{
    char a;
    int b;
    float c;
    double d;
    printf("Enter the values for below data types:\n");
    scanf("%c\n%d\n%f\n%lf",&a,&b,&c,&d);
    printf("character :%c\ninteger :%d\nfloat :%f\ndouble :%lf",a,b,c,d);
}