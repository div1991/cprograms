#include<stdio.h>
main()
{
    int num, originalNum, remainder, result = 0,n;
    printf("Enter a integer: ");
    scanf("%d", &num);
    originalNum = num;
    for(originalNum = num; originalNum != 0; ++n) 
    {
       originalNum /= 10;
    }
    for (originalNum = num; originalNum != 0; originalNum /= 10)
    {
       remainder = originalNum % 10;
       result += pow(remainder, n);
    }
    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
}