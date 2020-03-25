#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *@str : char
 *Return: char
 */
char *_strdup(char *str)
{
char *array;
unsigned int a, b;
a = 0;
b = 0;

if (str == NULL)
return (NULL);

while (str[a] != '\0')
{
	a++;
}

array = malloc(sizeof(char) * a + 1);
if (array == NULL)
{
return (NULL);
}

for (b = 0; b < a; b++)

array[b] = str[b];

array[b + 1] = '\0';
return (array);
}
