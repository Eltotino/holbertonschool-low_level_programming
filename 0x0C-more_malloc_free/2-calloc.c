#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _calloc - function that allocates memory for an array
*@nmemb : int
*@size : int
*Return: c
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(size * nmemb);
	if (c == 0)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
	{
		c[i] = 0;
	}
	return (c);
}
