#include "main.h"

/**
 * more_numbers - Prints 10 times 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
				_putchar('1');
			_putchar (b % 10 + '0');
		}
		_putchar('\n');
	}
}
