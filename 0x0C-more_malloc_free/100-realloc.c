#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _realloc - reallocate a memory bloc using malloc + free
* @ptr : pointer
* @old_size: int
* @new_size : int
* Return: 0 Always Success
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);

	if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
	}

	if (ptr == NULL)
	{
		free(ptr);
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
