#include "search_algos.h"
/**
* linear_search - linear search
* @array: pointer to first element of list
* @size: size of array
* @value: value searched
*
* Return: first index where to find the value
*
*/
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (!array)
		return (-1);
	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
