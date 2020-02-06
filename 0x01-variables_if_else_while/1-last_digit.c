#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
    int s;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	s = n % 10;
	if (s > 5)
	  printf ("Last Digit of %d is %d greater than 5\n", n, s); 
	else if  (s == 0)
	  printf ("Last Digit of %d is %d and  is 0\n", n, s);
	else
	  printf ("Last Digit of %d is %d and  is less than 6 and not 0\n", n, s);
	return (0);
}
