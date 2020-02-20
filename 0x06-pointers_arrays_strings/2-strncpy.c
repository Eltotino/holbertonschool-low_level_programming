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
	int i, j, k;

for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; src[j] != '\0'; j++)
;
for (k = 0; k < n; k++)
{
	if (src[n - 1] != '\0')
		dest[k] = 0;
	if (k > j)
		dest[k] = '\0';
	else
		{ dest[k] = src[k];
		}

}
return (dest);
}
