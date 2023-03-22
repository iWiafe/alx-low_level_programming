#include "main.h"

/**
 * _islower - Shows 1 if the input is lower case character
 * if otherwise show 0
 * @c: The character in ACSII code
 * Return: 1 for lowercase and 0 for the others
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
