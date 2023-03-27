#include "main.h"

/**
 * puts2 - A function that prints every other character of a string
 * starting with the first character
 * followed by a newline
 * @str: string as an input character
 * Return: void
 */
void puts2(char *str)
{
	int longi = 0;
	int a;
	char *b = str;
	int c;

	while (*b != '\0')
	{
		longi++;
		b++;
	}
	a = longi - 1;
	for (c = longi; c <= a; c++)
	{
		if (0 % 2 == 0)
		_putchar(str[c]);
	}
	_putchar('\n');
}

