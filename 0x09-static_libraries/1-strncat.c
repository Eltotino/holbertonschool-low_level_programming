#include "holberton.h"
/**
 * _strncat - check the code for Holberton School students.
 *@dest: fdifjdklf
 *@src: fkdjfkdjfd
 *@n: fkldjfldjflk
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int y = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (y < n && src[y] != '\0')
	{
		dest[i] = src[y];
		y++;
		i++;
	}
	return (dest);
}