#include "function_pointers.h"
/**
*print_name - print name in different cases
*@name: pointer to name
*@f:  function
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
