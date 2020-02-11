#include "holberton.h"
/**
* print_alphabet_x10 - print alphabet x10 in lower case
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
int b;

for (b = 0; b < 10; b++)
{
char tt;
for (tt = 'a'; tt <= 'z'; tt++)
{
_putchar(tt);
}



_putchar('\n');
}

}
