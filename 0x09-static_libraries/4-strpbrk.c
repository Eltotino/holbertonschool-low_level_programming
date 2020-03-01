#include "holberton.h"

/**
 * _strpbrk - check the code for Holberton School students.
 *@s: fkdhfjkdf
 *@accept: fkdhfkld
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int y = 0;
	int z = 0;

	while (s[i] != '\0')
		i++;
	while (y <= i)
	{
		z = 0;
		while (z <= i)
		{
			if (s[y] == accept[z])
				return (&s[y]);
			z++;
		}
		y++;
	}
	return (0);
}