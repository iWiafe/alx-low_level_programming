#include "main.h"

/**
 * swap_int - A function that swaps the value of two  integers
 * @a: integer swaps with b
 * @b: integer swaps with a
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

