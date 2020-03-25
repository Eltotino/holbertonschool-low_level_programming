#include "holberton.h"
#include <stdlib.h>
/**
* malloc_checked - function to allocate memory.
* @b : unsigned int
* Return: 0 Always Success
*/
void *malloc_checked(unsigned int b)
{
	int *c;

	c = malloc(b);
	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
