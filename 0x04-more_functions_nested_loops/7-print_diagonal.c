#include "holberton.h"

/**
 * print_diagonal - print diagonals
 *
 *@n: integer
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int column, row;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < n; row++)
		{
			for (column = 0; column <= row - 1; column++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
