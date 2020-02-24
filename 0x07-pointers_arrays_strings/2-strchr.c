#include "holberton.h"
#include <stdio.h>


/**
* _strchr - Fonction
* @s: A pointer to the memory area to be filled.
* @c: The character to fill the memory area with.
*
*
* Return: A pointer to the filled memory area @s.
*/
char *_strchr(char *s, char c)
{

	int i = 0;
	int j = 0;

		while (s[i] != '\0')
		{
			i++;
		}

while (j <= i)
{
	if (s[j] == c)

		return (&(s[j]));
	j++;
}

return (0);
}
