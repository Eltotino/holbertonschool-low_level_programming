#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* array_range -function that creates an array of integers
* @min: int
* @max :int
* Return: always 0
*/
int *array_range(int min, int max)
{
	int i;
	int *c;

	if (min > max)
		return (NULL);
	c = malloc((max - min + 1) * sizeof(int));
	if (c == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
	{
		c[i] = min + i;
	}
return (c);
}
