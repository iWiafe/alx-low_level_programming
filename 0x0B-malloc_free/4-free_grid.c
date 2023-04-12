#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: pointer of pointer grid
 * @height: dimension of the grid
 * Return: NULL
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
