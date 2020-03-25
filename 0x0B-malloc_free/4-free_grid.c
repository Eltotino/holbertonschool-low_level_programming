#include "holberton.h"
#include <stdlib.h>
/**
* free_grid- empty allocation in memory
* @grid : pointer
* @height : int;
* Return: 0 (Always success)
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
