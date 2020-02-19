#include "holberton.h"
#include <stdio.h>

/**
* _strcpy - copies a string
*
*
*
* Return : arrays
*/
char *_strcpy(char *dest, char *src)
{
int i;

	for (i = 0; src[i]; i++)
	{
	dest[i] = src[i];
}
	i++;
	dest[i] = '\0';

return (dest);
}
