#include "holberton.h"

/**
* _strcpy - copies a string
*
*@dest : pointer
*@src : pointer
*Return: string
*/
char *_strcpy(char *dest, char *src)
{
int i, j;

	for (i = 0; src[i] != '\0'; i++)
		;
		for (j = 0; j < i; j++)

	dest[j] = src[j];

return (dest);
}
