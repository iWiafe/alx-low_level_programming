#include "main.h"

/**
 * print_alphabet_x10 - Prints 10times the alphabets
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0, c;

	for (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	}	_putchar('\n');
}
