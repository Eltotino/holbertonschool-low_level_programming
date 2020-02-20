#include "holberton.h"

/**
**cap_string - change lower case fo a string into upper case
*
*@s : pointer
*
*Return: capital first letter
*/
char *cap_string(char *s)
{
	int i = 0, j;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (j = 0; s[j] != '\0'; j++)
	{
		if (j == 0)
		{
			if (s[j] >=  97 && s[j] <= 122)
			{
				s[j] -= 32;
			}
		}
		if (s[j] == '\n' || s[j] == '\t' || s[j] == ' '
			|| s[j] == '.' || s[j] == ',' || s[j] == '!'
			|| s[j] == '?' || s[j] == '"' || s[j] == '('
			|| s[j] == ')' || s[j] == '{' || s[j] == '}')
	{
		if (s[j + 1] >= 97 && s[j + 1] <= 122)
			s[j + 1] -= 32;
	}
		}
		return (s);
}
