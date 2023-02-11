#include<stdio.h>
main()
{
    float cel,f;
    printf("Enter tha celsius:\n");
    scanf("%f",&cel);
    printf("celsius value is:%f\n",cel);
    f=(cel*1.8)+32;
    printf("fahrenheit value of given celsius is %f",f);
}