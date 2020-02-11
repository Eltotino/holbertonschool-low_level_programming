#include "holberton.h"
/**
* jack_bauer - its the final countdown
*
* Return: Always 0 (Success)
*
*/
void jack_bauer(void)
{
	int n, m;
for (n = 0; n <= 23; n++)
{
for (m = 0; m <= 59; m++)
	{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');

_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
_putchar('\n');
}
}
}
