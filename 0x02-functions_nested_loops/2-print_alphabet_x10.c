#include "main.h"

/**
 * print_alphabet_x10 - Prints 10times the alphabets
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int c;

	for (c = 1; i <= 10; i++)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
