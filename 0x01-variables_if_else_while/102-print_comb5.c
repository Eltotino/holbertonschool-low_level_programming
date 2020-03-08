#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
*Main :Entry point
*
*@n : integer
*@m: integer
* Return : 0 Always SUCCESS
*/

int main(void)
{
	int n, o;

	for (n = 0; n < 99; n++)
	{

		for (o = n + 1; o < 100; o++)
		{
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
			putchar(' ');
			putchar(o / 10 + '0');
			putchar(o % 10 + '0');

	if (n != 98 || o != 99)
	{	putchar(',');
		putchar(' ');
}
}
}
	putchar('\n');
		return (0);
}
