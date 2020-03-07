#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	int b;
	int c;
	printf("%lu %p\n", sizeof(a), &a);
	printf("%lu %p\n", sizeof(b), &b);
	printf("%lu %p\n", sizeof(c), &c);
}