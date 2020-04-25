#include "holberton.h"
/**
* get_bit - returns value of a bit
*@n: unsigned int
*@index: index
*Return:value of bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 15)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
