#include "main.h"

/**
 * _isdigit - Checks for digits 0 through to 9
 * @c: The char to check
 * Return: 1 for a digit and 0 for otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
