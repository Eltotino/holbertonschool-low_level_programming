#include "search_algos.h"
#include <unistd.h>
/**
 * print_array - Current Part process.
 *
 * @array: Pointer to first element
 * @first: index of first element
 * @last: last element
 */
void print_array(int *array, size_t first, size_t last)
{
	printf("Searching in array: %d", array[first]);
	first++;
	while (first <= last)
	{
		printf(", %d", array[first]);
		first++;
	}
	printf("\n");
}

/**
 * advanced_binary_search - Middle process
 *
 * @array: array
 * @start: index  of first element
 * @end: number of elements in array
 * @value: value to search for
 *
 * Return: first position of value in array
 */

int advanced_search(int *array, size_t begin, size_t end, int value)
{
	size_t middle;

	if (end >= begin)
	{
		print_array(array, begin, end);

		if (array[begin] == value)
			return (begin);

		middle = (begin + end) / 2;

		if (array[middle] == value && array[middle - 1] != value)
			return (middle);
		if (array[middle] >= value)
			return (advanced_search(array, begin, middle, value));
		if (array[middle] < value)
			return (advanced_search(array, middle + 1, end, value));
	}
	return (-1);
}

/**
 * advanced_binary - initial process
 *
 * @array: pointer
 * @size: number of elements
 * @value: Searched value
 *
 * Return: index of value or (-1) if not exist
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (size > 0)
		return (advanced_search(array, 0, size - 1, value));
	return (-1);
}
