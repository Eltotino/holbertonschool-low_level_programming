#include "holberton.h"
#include <stdio.h>

/**
* _strcmp - compare  strings
*
*@s1 : pointer
*@s2 : pointer
*@n: inte
*Return: string
*/
int _strcmp(char *s1, char *s2)
{
	int i;

for (i = 0; s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])

return (s1[i] - s2[i]);
}


	return (0);
}
