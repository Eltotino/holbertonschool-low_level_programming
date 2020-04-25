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
		string = "(nil)";
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

	j = 0;
	char *separator = "";
	va_list lista;

	listall list[] = {
		{"c", character},
		{"s", string},
		{"i", integer},
		{"f", floats},
		{NULL, NULL},
		
	};
	va_start(lista, format);

	i = 0;
		while (format[i] != '\0' && format != NULL)
		{
			while (list[j].letter != NULL)
			{
			if (format[i] == *(list[j].letter))
				printf("%s", separator);
			list[j].fct(lista);
			separator = ",";
			j++;
		}
		i++;
		
	}
	printf("\n");
	va_end(lista);
}
