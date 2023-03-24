#include "main.h"

/**
 * _isupper - Shows 1 if it is a uppercase character
 * if otherwise show 0
 * @c: The character
 * Return: 1 for uppercase and 0 for the others
 */
int _isupper(int c)
(
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
