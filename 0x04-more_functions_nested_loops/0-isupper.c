#include "main.h"

/**
 * _isupper - Shows uppercase character
 * @c: The char to check
 * Return: 1 for uppercase and 0 for the others
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
}
