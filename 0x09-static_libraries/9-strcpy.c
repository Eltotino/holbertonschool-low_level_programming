#include "holberton.h"
/**
 * _strcpy - copy string pointed to src to the buffer pointed to dest
 * @dest: destination
 * @src: source
 * Return: a character.
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int i;

	while ((*(src + a) != '\0'))
	{
		a++;
	}
	for (i = 0; i < a; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (&dest[0]);
}
