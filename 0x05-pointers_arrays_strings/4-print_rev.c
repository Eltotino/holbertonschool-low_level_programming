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
if (*s)
{
	reverse(s+1);
	_putchar(*s);
}

_putchar('\n');
}
