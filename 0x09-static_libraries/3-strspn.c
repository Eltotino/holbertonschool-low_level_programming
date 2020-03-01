#include "holberton.h"

/**
 * _strspn - check the code for Holberton School students.
 *@s: rfkjdgfhjdk
 *@accept: fjkdfhjdkf
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int y = 0;
	int n = 0;
	int z = 0;

	while (s[i] != ' ' && s[i] != '\0')
	{
		i++;
	}
	while (y <= i)
	{
		z = 0;
		while (accept[z] != '\0')
		{
			if (s[y] == accept[z])
				n = n + 1;
			z++;
		}
		y++;
	}
	return (n);
}

