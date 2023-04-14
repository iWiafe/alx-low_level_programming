#include "main.h"
#include <stdlib.h>

/**
 * *array_range - a function that creates an array of integers
 * @min: minimum value in the array
 * @max: maximum value of the array
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *p;
	int a, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (a = 0; min <= max; a++)
	{
		p[a] = min++;
	}

	return (p);
}
