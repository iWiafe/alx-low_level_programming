#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: number
 * @index: index starting from 0 of the bit required
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
