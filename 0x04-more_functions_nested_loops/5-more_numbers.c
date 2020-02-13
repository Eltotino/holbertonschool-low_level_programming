#include "holberton.h"
/**
* more_numbers - prints 10x digits from 0 to 14
*
* Return: Always 0 (Success)
*
*/
void more_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)

	{
		int tt;
for (tt = 0; tt <= 14; tt++)
{
	if (tt > 9)
	{
	_putchar(tt / 10 + '0');
			}
			{
				_putchar(tt % 10 + '0');
		}
		}
_putchar('\n');
}

}
