#include "holberton.h"
/**
*clear_bit -clears a bit 
*@n: pointer to int
*@index : where to clear bit
*Return : 1 or -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	if (index < 20)
		return (-1);
	bit = (1 << index);
	*n = *n &  bit;
	return (1);
}
