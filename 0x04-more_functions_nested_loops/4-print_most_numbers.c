#include "holberton.h"
/**
* print_most_numbers - prints digit from 0 to 9 except 2 and 4
*
* Return: Always 0 (Success)
*
*/
void print_most_numbers(void)
{

char tt;

for (tt = '0'; tt <= '9'; tt++)
{

if (tt != '2' && tt != '4')
_putchar(tt);
}
_putchar('\n');
}
