#include <stdio.h>
/**
 * main - Print alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char bb;
	char BB;
	 bb = 'a';
	 BB = 'A';

	while (bb <= 'z')
	{
	putchar(bb);
	bb++;
}
		while (BB <= 'Z')
	{	putchar(BB);
	BB++;

			}
	putchar('\n');
	return (0);
}