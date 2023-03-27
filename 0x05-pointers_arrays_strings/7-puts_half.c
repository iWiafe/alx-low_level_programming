#include "main.h"

/**
 * puts_half - A function that prints half of a string
 * followed by a newline
 * @str: string as the input
 * Return: half of input
 */
void puts_half(char *str)
{
	int longi = 0;
	int a;
	int b;
	char *str;

	for (a = 0; str[a] != '\0'; a++)
	{
		longi++;
		b = (longi / 2);
	}
	if ((longi % 2) == 1)
	{
		b = ((longi + 1) / 2);
	}
	for (a = b; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}

