#include <stdio.h>
/**
 * main - Print alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char bb;
for (bb = 'a'; bb <= 'z'; ++bb)
{
if (bb != 'e' && bb != 'q')
putchar(bb);
}

putchar('\n');
	return (0);
}
