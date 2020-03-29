#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
#ifndef __FILE__
#define __FILE__
#endif

/**
* main - prints the name of the file it was compiled from 
*
* Return: name
*/
int main(void)
{
	printf("%s\n", __FILE__);
	
	return 0;
}
