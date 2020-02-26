#include"holberton.h"
/**
 * _pow_recursion - function that returns the length of a string
 * @x: integer
 * @y: integer
 * Return: factorial
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));


}
