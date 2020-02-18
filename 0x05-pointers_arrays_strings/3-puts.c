#include "holberton.h"
/**
* _puts - string length
*
*@str: pointer
*@i:integer
* Return : string length
*/
void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; ++i)
{
_putchar(str[i]);
}
_putchar('\n');
}
