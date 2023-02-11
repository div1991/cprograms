#include<stdio.h> 
 main() 
{ 
char s1[100];
printf("Enter the string:\n");
gets(s1);
int i=0; 
while(s1[i]!='\0') 
{ 
if(s1[i]>='0' && s1[i]<='9')
printf(" %c",s1[i]); 
i++; 
} 
}