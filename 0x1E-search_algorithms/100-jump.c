#include "search_algos.h"
/**
 * jump_search - jump search
 * @array: pointer to first element of searched list
 * @size: size of array
 * @value: value to search for
 *
 * Return: first index where value is located
 *
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0;
	size_t next = sqrt(size);

	if (!array)
		return (-1);
	while (array[next < size ? next : size - 1] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev = next;
		next = next + sqrt(size);
		if (next >= size)
			break;
	}
	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	printf("Value found between indexes [%lu] and [%lu]\n", prev, next);
	while (array[prev] <= value)
	{

		if (prev == (next < size ? next : size))
			return (-1);
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
