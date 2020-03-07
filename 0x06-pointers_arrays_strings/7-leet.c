#include "holberton.h"

/**
**leet - prints the world in leet language
*
*@s : pointer
*
*Return: leet language
*/
char *leet(char *s)
{
	int i = 0, j;
	char a[] = {65, 97, 69, 101, 84, 116, 79, 111, 76, 108};
	char b[] = {52, 52, 51, 51, 55, 55, 48, 48, 49, 49};
while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
			i++;
		}
	}
	return (s);
}
