#include "main.h"

/**
 * _isupper - Shows 1 if the input is upper case character
 * if otherwise show 0
 * @c: The character in ACSII code
 * Return: 1 for upper case and 0 for the others
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
