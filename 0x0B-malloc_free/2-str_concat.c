#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat - concatenates two strings.
 *@s1 : char
 *@s2 : char
 *Return: char
 */
char *str_concat(char *s1, char *s2)
{
char *array;
unsigned int a = 0;
unsigned int b = 0;
unsigned int c = 0;
unsigned int d = 0;

if (*s1 != '\0')


for (a = 0; s1[a]; a++)

if (*s2 != '\0')

for (b = 0; s2[b]; b++)

array = malloc((a + b) * sizeof(char) + 1);

if (array == NULL)
	return (NULL);

for (c = 0; c < a; c++)
array[c] = s1[c];

for (d = 0; d < b; d++)
{
	array[c + d] = s2[d];
}
array[a + b] = '\0';
return (array);
}
