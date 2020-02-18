#include "holberton.h"
/**
* puts2 - prints every other character
*
*@str :pointer
*
* Return : string length
*/
void puts2(char *str)
{
	int i, k;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (k = 0; k <= i - 1; k = k + 2)
{
	_putchar(str[k]);
	_putchar('\n');
}
}
