#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 *
 * i made it
 *Return: Always 0 (Success)
 */
int main(void)
{
int n;
int s;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	s = n % 10;
	if (s > 5)
	 printf("Last Digit of %d is %d greater than 5\n", n, s);
	else if (s == 0)
	 printf("Last Digit of %d is %d and  is 0\n", n, s);
	else
	  printf("Last Digit of %d is %d and  is less than 6 and not 0\n", n, s);
	return (0);
}
