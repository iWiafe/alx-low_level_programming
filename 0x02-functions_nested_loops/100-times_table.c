#include "main.h"

/**
 * print_times_table - Prints the n times table
 * @n: n integer as an input
 * Return: void
 */
void print_times_table(int n)
{
	int n = 0;
	int a;
	int b;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			if (n > 15 || n < 0)
			break;
		}
		else
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
