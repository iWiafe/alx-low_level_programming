#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - a function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: NULL on failure and if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			for (i = 0; i >= 0; i--)

			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			a[i][j] = 0;

	}

	free(a);
	return (a);
}
