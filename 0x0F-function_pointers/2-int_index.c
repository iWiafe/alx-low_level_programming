#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer, returns the index
 * of the first element for which the cmp function does not return 0
 * @array: array containing elements
 * @size: number of elements in the array
 * @cmp: a pointer to be used to compare values
 * Return: -1 if no element matches and if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}

	return (-1);
}
