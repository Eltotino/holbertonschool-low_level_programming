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
unsigned int a = 0, b = 0, c, d = 0, x = 0;
if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";


while (s1[b] != '\0')
b++;
while (s2[a] != '\0')
a++;

array = malloc((a + b + 1) * sizeof(char));
if (array == NULL)
return (NULL);

for (c = 0; c <= b; c++)
{
array[c] = s1[c];
}
for (d = b; d <= a + b; d++)
{
array[d] = s2[x];
x++;
}


array[d] = '\0';
return (array);

}
