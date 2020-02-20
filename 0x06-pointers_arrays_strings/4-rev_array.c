#include "holberton.h"
#include <stdio.h>

/**
* reverse_array - compare  strings
*
*@a : pointer
*@n : integer
*Return: reverse array
*/
void reverse_array(int *a, int n)
{
	int vid;
	int j;

for (j = 0; j < (n - 1) / 2; j++)
{
	vid = a[j];
	a[j] = a[(n - 1) - j];
	a[(n - 1) - j] = vid;
}
}
