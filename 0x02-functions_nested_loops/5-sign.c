#include "main.h"

/**
 * print_sign - Shows 1 and print + if n is greater than zero
 * Shows 0 if n is zero print 0
 * shows -1 if n is less than zero
 * @n: Input number as an integer
 * Return: Always (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
