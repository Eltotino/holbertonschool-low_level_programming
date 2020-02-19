#include "holberton.h"
#include <stdio.h>
/**
* print_array - print the value of an array
*
*@a :pointer
*@n :integer
* Return : arrays
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
