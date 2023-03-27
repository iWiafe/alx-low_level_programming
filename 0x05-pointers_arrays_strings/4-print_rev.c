#include "main.h"

/**
 * print_rev - A function that prints a string in reverse
 * followed by a newline
 * @s: string to be printed
 * Return: void
 */
void print_rev(char *s)
{
	int longi = 0;
	int a;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (a = longi; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
