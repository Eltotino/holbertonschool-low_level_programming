#include "search_algos.h"
#include <math.h>

/**
 * next_element - moving to next element
 *
 * @list: list pointer
 * @index: index to move
 *
 * Return: pointer to specified node
 */
listint_t *next_element(listint_t *list, size_t index)
{
	while (list->next != NULL && list->index < index)
		list = list->next;
	return (list);
}

/**
 * jump_list - searches for  value in sorted list
 *
 * @list: pointer to list head.
 * @size: number of nodes.
 * @value: searched value
 *
 * Return: pointer to the first desired node
*/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump;
	listint_t *left_pointer, *right_pointer;

	if (list != NULL && size > 0)
	{
		jump = sqrt(size);
		left_pointer = list;
		right_pointer = next_element(left_pointer, jump);
		printf("Value checked at index [%ld] = [%d]\n"
				, right_pointer->index, right_pointer->n);
		while (right_pointer->index < (size - 1) && right_pointer->n < value)
		{
			left_pointer = right_pointer;
			right_pointer = next_element(left_pointer, right_pointer->index + jump);
			printf("Value checked at index [%ld] = [%d]\n"
					, right_pointer->index, right_pointer->n);
		}
		printf("Value found between indexes [%ld] and [%ld]\n"
		       , left_pointer->index, right_pointer->index);
		printf("Value checked at index [%ld] = [%d]\n"
				, left_pointer->index, left_pointer->n);
		while (left_pointer->index < size - 1 && left_pointer->n < value)
		{
			left_pointer = left_pointer->next;
			if (left_pointer == NULL)
				return (NULL);
			printf("Value checked at index [%ld] = [%d]\n"
					, left_pointer->index, left_pointer->n);
		}
		if (left_pointer->n == value)
			return (left_pointer);
	}
	return (NULL);
}
