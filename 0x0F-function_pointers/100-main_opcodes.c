#include "function_pointers.h"

/**
*main - program to print opcode
*@argc: argument count
*@argv: argument vector
*/

void main(int argc, char *argv[])
{
	if (argc != 2)
		printf("Error\n");
		exit(1);

	if (argv[1] < 0)
		printf("Error\n");
		exit(2);
}
