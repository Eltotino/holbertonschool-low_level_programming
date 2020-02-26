/**
 * _natural_sqrt - check if a has natural square
 * @x: int
 * @y: int
 * Return: return success
 */
int _natural_sqrt(int i, int n)
{
	if (i * i == n)
		return (i);

	else if (i == n)
		return (-1);

	else if (n < 0)
		return (-1);

	else
		return (_natural_sqrt(i + 1, n));
}
/**
 * _sqrt_recursion - Finds the natural square root of a number
 * @n: int
 * Return: success
*/
int _sqrt_recursion(int n)
{
		return (_natural_sqrt(1, n));
}
