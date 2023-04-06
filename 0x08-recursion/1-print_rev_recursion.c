#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse
 * @s: string
 * Return: void (Success)
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	_putchar(*s);
}
