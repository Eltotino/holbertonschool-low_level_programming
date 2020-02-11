#include "holberton.h"
/**
* print_last_digit - prints a number's last digit
*
* Return: Always 0 (Success)
*@n: integer
*/
int print_last_digit(int n)
{
int x = n % 10;
if (n < 0)
x = x * -1;
_putchar(x + '0');
return (x);
}
