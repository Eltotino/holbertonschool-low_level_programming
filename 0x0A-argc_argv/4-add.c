#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char const *argv[])
{
int a;
int b;
int sum = 0;
for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b]; b++)
{
if (argv[a][b] < 48  || argv[a][b] > 57)
{
puts("Error");
return (1);
}
}
sum += atoi(argv[a]);
}
printf("%d\n", sum);
return (0);
}
