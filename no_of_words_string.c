#include <stdio.h>
main()
{
    char str[100];
  	int i, totalwords=1;
  	printf(" Please Enter any String :  ");
  	gets(str);
  	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			totalwords++;	
		} 
	}	
	printf("\n The Total Number of Words in this String %s  = %d", str, totalwords);
}