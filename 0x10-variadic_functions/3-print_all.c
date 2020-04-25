#include "variadic_functions.h"

/**
* character - prints a character
*@lista: list of arguments
*/
void character(va_list lista)
{
	printf("%c", va_arg(lista, int));
}

/**
*string - prints a string
*@lista: list of arguments
*/

void string(va_list lista)
{
	char *string;

	string = va_arg(lista, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}

/**
*integer - prints an integer
*@lista: list of arguments
*/

void integer(va_list lista)
{
	printf("%d", va_arg(lista, int));
}

/**
*floats - prints a float
*@lista: list of arguments
*/

void floats(va_list lista)
{
	printf("%f", va_arg(lista, double));
}

/**
*print_all - print all arguments
*@format: string with arguments
*/

void print_all(const char * const format, ...)
{
	int i, j;

	i = 0;
	j = 0;

	va_list lista;

	listall list[] = {
		{"c", character},
		{"i", integer},
		{"s", string},
		{"f", floats},
	};
	va_start(lista, format);

	while (j < 4)
	{
		while (format[i] != '\0')
		{
			if (format[i] == *(list[j].letter))
				list[j].fct(lista);
			i++;
		}
		j++;
	}
va_end(lista);
printf("\n");
}
