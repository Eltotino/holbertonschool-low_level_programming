#include "holberton.h"
/**
 * _strncpy - check the code for Holberton School students.
 *@dest: fdfdf
 *@src: fkdljflkdjfd
 *@n: fkdjfkdjfkldfj
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;
	int z = 0;
	int i;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[z] != '\0')
	{
		z++;
	}
	for (i = 0; i < n; i++)
	{
		if (src[n - 1] != '\0')
			dest[i] = 0;
		if (i > z)
			dest[i] = '\0';
		else
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}