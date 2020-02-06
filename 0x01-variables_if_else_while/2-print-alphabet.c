#include <stdio.h>
/**
 * main - Print alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char bb;
	 bb = 'a';

	while (bb <= 'z')
	{
	putchar(bb);
	bb++;
			}
	putchar('\n');
	return (0);
}
