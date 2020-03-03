#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array -creates an array of chars
 *@size: unsigned integer
 *@c : char
 *Return: char
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int a;

array = malloc(size * sizeof(char));
if (size <= 0 || array == NULL)
return (NULL);
for (a = 0; a < size; a++)
{
array[a] = c;
}


return (array);

}
