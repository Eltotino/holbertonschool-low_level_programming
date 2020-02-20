#include "holberton.h"
#include <stdio.h>

/**
* _strncat - concatenate strings
*
*@dest : pointer
*@src : pointer
*@n: inte
*Return: string
*/
char *_strncat(char *dest, char *src, int n)
{
	int j, i;

	for (i = 0; dest[i] != '\0'; ++i)
;

for (j = 0; j < n && src[j] != '\0'; j++, i++)
{

	dest[i] = src[j];
}
return (dest);
}
