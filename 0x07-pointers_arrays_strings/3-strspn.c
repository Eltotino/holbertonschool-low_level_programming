#include "holberton.h"
/**
* _strspn- counts bytes from accept in the prefix substring of s
*
* @s: A pointer
* @accept : pointer
* Return: number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j = 0;

	while (s[j] != '\0')
	{
		int k = 0;

		while (accept[k] != '\0')
		{
			if (s[j] == accept[k])
			{
				i++;
				break;
			}
			else if (accept[k + 1] ==  '\0')
			{
				return (i);
			}
			k++;
		}
		j++;
	}
	return (i);
}
