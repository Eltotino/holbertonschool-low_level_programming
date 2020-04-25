#include "holberton.h"
/**
*flip_bits - numbers of bits needed to flip
*@n: decimal number
*@m: decimal number
*Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit = 0, num;

	num = n ^ m;
	while (num != 0)
	{
		bit += num & 1;
		num >>= 1;
	}
	return (bit);
}
