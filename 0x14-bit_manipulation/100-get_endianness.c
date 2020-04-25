#include "holberton.h"
/**
* get_endianness - check endianness
*Return: 0 - 1
*/
int get_endianness(void)
{
	int i;
	char *ch;

	i = 1;
	ch = (char *)&i;
	if (*ch)
		return (1);
	else
		return (0);
}
