#include "holberton.h"
/**
 * _strstr - strings
 * @haystack: later
 * @needle: google
 *
 * Return: rotle dfds
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)

		n = needle;
	h = haystack;
	while (*n)
	{
		if (*h == *n)
		{
			n++;
			h++;
		}
		else
			break;
	}
	if (*n == '\0')
		return (haystack);
	haystack++;
return (0);
}
