#include "holberton.h"
/**
* swap_int - swap 2 values
*
* Return : always success (0)
*@a: pointer
*@b: pointer
*/
void swap_int(int *a, int *b)
{
	int c;
	 c = *a;
	 *a = *b;
	 *b = c;

}
