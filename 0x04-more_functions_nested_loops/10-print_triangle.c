#include "holberton.h"

/**
 * print_tr - triangles
 *
 *@size: integer
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
		_putchar('\n');
	for (a = 1; a <= size; a++)
	{
		for (b = size - a; b >= 1; b--)
			_putchar(' ');
		for (c = 0; c < a; c++)
			_putchar('#');
		_putchar('\n');
	}
}
