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
unsigned int a, b = 0;
if (str == NULL)
return (NULL);

while (str[b] != '\0')
b++;

array = malloc((b + 1) * sizeof(char));
if (array == NULL)
return (NULL);

for (a = 0; a <= b; a++)
{
array[a] = str[a];
}
array[a] = '\0';
return (array);

}
