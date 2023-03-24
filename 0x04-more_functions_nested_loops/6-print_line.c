#include "main.h"

/**
 * print_line - Draw a straight line
 * @n: number of times the character _ should be printed
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	}
	_putchar('\n');
}
