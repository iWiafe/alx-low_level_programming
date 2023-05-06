#include "main.h"
#include <stddef.h>

/**
 * check_correct_string - a function that verifies if
 * a string has only 0's and 1's
 * @b: string to be verified
 * Return: 1 if string is valid, or otherwise 0
 */
int check_correct_string(const char *b)
{
	if (b == NULL)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '1' && *b != '0')
		{
			return (0);
		}
		b++;
	}

	return (1);
}


/**
 * binary_to_uint - a function that converts a binary to an unsigned int
 * @b: the binary number pointing to a string of 0 and 1 chars
 * Return: converted value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int str = 0;
	int base = 1;

	if (!check_correct_string(b))
	{
		return (0);
	}
	while (b[str] != '\0')
	{
		str++;
	}
	while (str)
	{
		number += ((b[str - 1] - '0') * base);
		base *= 2;
		str--;
	}

	return (number);
}
