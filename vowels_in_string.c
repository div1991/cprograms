#include <stdio.h>
main()
{
  int i, count = 0;
  char str[100];
  printf("Input a string\n");
  scanf("%s",str);
  while (str[i] != '\0')
  {
    if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] =='o' || str[i]=='O' || str[i] == 'u' || str[i] == 'U')
    count++;
    c++;
  }
  printf("Number of vowels in the string: %d", count);
}