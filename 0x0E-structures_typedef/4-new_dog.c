#include "dog.h"
#include <stdlib.h>
/**
* new_dog - create a new dog
* @name: char
* @age :float
* @owner : char
*Return: 0
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k, l;
	char *x, *y;
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (!new)
	return (NULL);

	for (i = 0; name[i]; i++)
		;
	x = malloc(sizeof(char) * i + 1);
	if (!x)
	{
		free(new);
		return (NULL);
	}

	for (k = 0; k <= i; k++)
		x[k] = name[k];


	for (j = 0; owner[j]; j++)
		;
	y = malloc(sizeof(char) * j + 1);
	if (!y)
	{
		free(new);
		free(x);
		return (NULL);
	}
		for (l = 0; l <= j; l++)

			y[l] = owner[l];

	new->name = x;
	new->owner = y;
	new->age = age;

	return (new);
}
