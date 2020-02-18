#include "holberton.h"
/**
* puts_half - prints the second half of a string
*
*@str :pointer
*
* Return : string length
*/

void puts_half(char *str)
{
int i, j;

for (i = 0; str[i] != '\0'; i++)

if (i % 2 == 0)
(j = i / 2);
else
	j = i - ((i - 1) / 2);

while (j != i)
	{_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
