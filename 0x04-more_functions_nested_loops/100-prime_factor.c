#include "holberton.h"
#include <stdio.h>
/**
 * print_tr - triangles
 *
 *@size: integer
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int x;

	x = 612852475143;
	for (i = 2; i <= 782849; i++)
	{
		while (x % i == 0)
			{
				x = x / i;

			}
	}
	printf("%ld\n", x);
	return (0);
}
