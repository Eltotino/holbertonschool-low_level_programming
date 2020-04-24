#include "variadic_functions.h"
/**
*print_numbers - print numbers
*@separator: separate numbers
*@n: amount of number to print 
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lista;
	unsigned int i;

	va_start(lista, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(lista, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(lista);
}
