#include "holberton.h"
#include <stdio.h>
/**
 * main- fizzbuzz game
 *
 * Return: Always 0.
 */
int main(void)
{
	int b;

	for (b = 1; b <= 100; b++)
	{
if ((b % 3 == 0) && (b % 5 == 0))
			{
				printf("FizzBuzz ");
			}
else if (b % 3 == 0)
			{
				printf("Fizz ");
			}
else if (b % 5 == 0)
			
		{			
			if (b == 100)
				
					printf("Buzz");
					else 
				printf("Buzz ");
		}
			
else 
	printf("%d ", b);
	}

	putchar('\n');
	return (0);
}
