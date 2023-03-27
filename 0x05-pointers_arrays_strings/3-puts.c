#include "main.h"

/**
 * _puts - A function that prints a string
 * followed by a newline
 * @str: string to be printed
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
