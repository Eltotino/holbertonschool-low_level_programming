#include "holberton.h"
/**
* print_rev - reverse string length
*
*@s :pointer
*
* Return : string length
*/
void print_rev(char *s)
{
	int i;
	int length;

	for (i = 0; s[i] != '\0'; ++i)
	length = i;
	for (i = length; s[i] != 0; --i)
	{	_putchar(s[i]);
	}
		_putchar('\n');
}
