#include "holberton.h"
/**
* set_bit - set a bit
*@n: decimal number
*@index: bit place
* Return: int
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	if (index > 20)
		return (-1);
	bit = 1 << index;
	*n = *n | bit;
	return (1);
}
