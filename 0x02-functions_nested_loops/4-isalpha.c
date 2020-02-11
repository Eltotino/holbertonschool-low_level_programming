#include "holberton.h"
/**
* _isalpha - checks for lower and upper case characters
*
* Return: Always 0 (Success)
*@c: integer
*/
int _isalpha(int c)
{

if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}

{	return (0);
}


}
