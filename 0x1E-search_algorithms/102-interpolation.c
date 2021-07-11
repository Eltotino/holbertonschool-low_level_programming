#include "search_algos.h"
/**
 * interpolation_search - searches for a value in an array
 *
 * @array: pointer to first element of array
 * @size: size of array
 * @value: the value to search for
 *
 * Return: first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{

	size_t high = size - 1, low = 0, a = 0; 


	if (array)
	{
		while ((value >= array[low]))
		{
			a = low + (((double)(high - low) /
						(array[high] - array[low])) * (value - array[low]));

			if (a > size)
			{
				printf("Value checked array[%lu] is out of range\n", a);
				break;
			}

			printf("Value checked array[%lu] = [%d]\n", a, array[a]);

			if (array[a] < value)
				low = a + 1;
			else if (array[a] > value)
				high = a - 1;
			else
				return (a);
		}
	}

	return (-1);
}
