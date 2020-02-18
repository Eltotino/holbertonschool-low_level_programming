#include "holberton.h"
/**
* rev_string - reverse string length
*
*@s :pointer
* Return : string length
*/
void rev_string(char *s)
{
	int i = 0, j;
	char c;

	while (s[i])
		i++;
	for (j = 0; j < i / 2; j++)
	{
		c = s[i - j - 1];
		s[i - j - 1] = s[j];
		s[j] = c;
	}
	}
