#include "main.h"

/**
 * _isupper - Shows 1 if it is a uppercase character
 * if otherwise show 0
 * @c: The character in ACSII code
 * Return: 1 for uppercase and 0 for the others
 */
int _isupper(int c)
{
	int c;

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
