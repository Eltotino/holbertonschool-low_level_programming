#include "search_algos.h"

/**
 * linear_skip - Search value in list.
 *
 * @list: pointer to list head.
 * @value: searched value.
 *
 * Return: pointer to first node where value is located
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *spot, *prev;

	if (!list)
		return (NULL);

	spot = list;
	while (spot->next && spot->n < value)
	{
		prev = spot;
		if (spot->express)
			spot = spot->express;
		else
		{
			while (spot->next)
				spot = spot->next;
		}
		if (spot->next)
			printf("Value checked at index [%lu] = [%i]\n", spot->index, spot->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", spot->index,
	       spot->index);

	spot = prev;
	while (spot && spot->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n", spot->index, spot->n);
		if (spot->next)
			spot = spot->next;
		else
			return (NULL);
	}

	if (spot && spot->n == value)
	{
		printf("Value checked at index [%lu] = [%i]\n", spot->index, spot->n);
		return (spot);
	}

	return (NULL);
}
