#include "variadic_functions.h"

/**
*sum_them_all - sum all the parameters
*@n: integer
*Return: sum of param
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list lista;
	unsigned int i;
	int sum;

	sum = 0;

	va_start(lista, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(lista, int);
	va_end(lista);
	return (sum);

}
