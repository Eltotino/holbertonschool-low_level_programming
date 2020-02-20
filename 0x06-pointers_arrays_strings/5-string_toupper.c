#include "holberton.h"
#include <stdio.h>

/**
**string_toupper - change lower case fo a string into upper case
*
*@s : pointer
*
*Return: upper case
*/
char *string_toupper(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 97 && s[i] <= 122)



	s[i] -= 32;
}
return (s);
}
