#include "holberton.h"

/**
* _strcpy - copies a string
*
*@dest : pointer
*@src : pointer
*Return: string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int j;

for (j = 0; j < n; j++)

	dest[j] = src[j];

return (dest);
}
