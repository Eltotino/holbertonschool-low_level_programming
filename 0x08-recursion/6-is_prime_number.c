#include "holberton.h"
/**
 * _prime- Increments i to test if prime can be divided by it
 * @x: The number to divide prime by
 * @prime: The number to check against count
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int _prime(int x, int prime)
{
	if (prime < 0)
		return (0);
	if (x == prime)
		return (1);
	if (prime % x == 0)
		return (0);
	else
		return (_prime(++x, prime));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to be checked
 *
 * Return: 1 if number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	return (_prime(2, n));
}
