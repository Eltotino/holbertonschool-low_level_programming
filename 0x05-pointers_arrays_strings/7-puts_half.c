#include "holberton.h"

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i]; i++)
	{	
		if (i % 2 == 0)
	
	j = i / 2;
		}
	for (j = i  / 2; j != i; j++)
		{_putchar(str[j]);
		}
		_putchar('\n');
}