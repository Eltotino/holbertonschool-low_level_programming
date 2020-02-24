#include "holberton.h"
#include <stdio.h>


/**
* _memset - Fills the first @n bytes of the memory area
*          pointed to by @s with the constant byte @c.
* @s: A pointer to the memory area to be filled.
* @b: The character to fill the memory area with.
* @n: The number of bytes to be filled.
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
