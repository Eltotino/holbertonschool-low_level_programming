#include "holberton.h"
#include <stdio.h>

/**
* _strcat- concatenate string
*
*@dest : pointer
*@src : pointer
*Return: string
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; ++i, j++)
;
for (j = 0; src[j] != '\0'; j++, i++)
{

	dest[i] = src[j];
}
dest[i] = '\0';
return (dest);
}
