#include "main.h"

/**
 * print_diagonal - Draw a diagonal line
 * @n: number of times the character \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
	for (i = 1; i <= n; i++)
	{
		_putchar('\\');
	}
	}
	_putchar('\n');
}

