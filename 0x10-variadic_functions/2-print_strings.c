#include "variadic_functions.h"
/**
*print_strings - prints a string
*@n: number of strings passed
*@separator: string to be printed
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lista;
	unsigned int i;

	va_start(lista, n);
	for (i = 0; i < n; i++)
	{
	char *strings = va_arg(lista, char *);

	if (strings != NULL)
		printf("%s", strings);
	
	else
		printf("(nil)");
	if (i != n - 1 && separator)

		printf("%s", separator);
}
printf("\n");
va_end(lista);
}