#include<stdio.h>
main()
{
    char a,e,i,o, u;
    char alp,vowel=(a,e,i,o,u);
    printf("Enter the alphabet:\n");
    scanf("%c",&alp);
    vowel=(alp==vowel);
    if(vowel)
    printf("%c is vowel",alp);
    else
    printf("%c is constant",alp);
}