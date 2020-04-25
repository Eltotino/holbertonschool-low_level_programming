#include "function_pointers.h"

/**
*main - program to print opcode
*@argc: argument count
*@argv: argument vector
*/

void main(int argc, char *argv[])
{
	int i, n;
	char *code;

		if (argc != 2)
		{
			printf("Error\n");
			exit(1);
				}
	n = atoi(argv[1]);

		if (n < 0)
		{
			printf("Error\n");
			exit(2);
		}
		code = (char *) main;
		for (i = 0; i < n; i++)
		{

			printf("%02x", code[i] & 0xFF);
			if (i != n - 1)
				printf(" ");
		}
		printf("\n");
}
