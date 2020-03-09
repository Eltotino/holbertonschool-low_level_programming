#include "holberton.h"
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (SUCCESS)
*/
int main(void)
{
	int sum, n;

	sum = 23;

	for (n = 10; n < 1024; i++)
	{
		if (n  % 3 == 0 || n % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
}
