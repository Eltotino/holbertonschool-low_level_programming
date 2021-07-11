#include "search_algos.h"

/**
 * Display_Array - prints array of ints
 *
 * @array: a pointer to the array
 * @First: index
 * @Last: last index
 */

void Display_Array(int *array, size_t First, size_t Last)
{
	size_t inc;

	printf("Searching in array: ");
	for (inc = First; inc <= Last; inc++)
	{
		if (inc != First)
			printf(", ");
		printf("%d", array[inc]);
	}
	printf("\n");
}

/**
 * Middle - searches value in an array of int
 *
 * @array: a pointer
 * @size: number of elements
 * @value: value to search
 * @start: first index
 *
 * Return: value or -1
 */

int Middle(int *array, size_t size, int value, size_t start)
{
	size_t first = start, a = 0, last = size - 1;

	if (array)
	{
		while (first <= last)
		{
			Display_Array(array, first, last);
			a = (first + last) / 2;

			if (value > array[a])
				first = a + 1;
			else if (value < array[a])
				last = a - 1;
			else
				return (a);
		}
	}
	return (-1);
}

/**
 * exponential_search - searches value in array of int
 *
 * @array: Pointer
 * @size: Number of elements
 * @value: Value to search for
 *
 * Return: index for searched value , or -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t inc = 1;

	if (array)
	{
		while (inc < size && array[inc] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", inc, array[inc]);
			inc *= 2;
		}

		inc = inc > size - 1 ? size : inc + 1;
		printf("Value found between indexes [%lu] and [%lu]\n", inc / 2, inc - 1);
		return (Middle(array, inc, value, inc / 2));
	}

	return (-1);
}
