#include "search_algos.h"

/**
* print_array - prints array
* @array: pointer to first element in searched list
* @size: size of array
*
* Return: (void)
*/
void print_array(int *array, size_t size)
{
	size_t index = 0;

	printf("Searching in array: ");
	while (index < size)
	{
		printf("%d, ", array[index]);
		index++;
	}
	printf("%d\n", array[index]);
}

/**
* binary_search - binary search
* @array: pointer to first element of the searched list
* @size: size of array
* @value: value to search for
*
* Return: first index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
	size_t index;
	size_t prev = 0;
	size_t next = size - 1;

	if (!array)
		return (-1);
	while (prev <= next)
	{
		print_array(array + prev, next - prev);
		index = ((prev + next) / 2);
		if (array[index] < value)
			prev = index + 1;
		else if (array[index] > value)
			next = index - 1;
		else
			return (index);
	}
	return (-1);
}
