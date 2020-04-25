#include "holberton.h"

/**
* binary_to_uint - from binary to decimal
*@b : string of binary chars
* Return: decimal int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j;

	j = 0;
	i = 0;

		while(b[i] != '\0')
		{
			if (b[i] != '0' && b[i] != '1')
			return (0);
		j = j << 1;

		if (b[i] == '1')
			j = j ^ 1;
		i++;
	}
	return (j);

	if(b == NULL)
		return(0);
}
