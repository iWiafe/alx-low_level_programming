#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of flipped bits required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped_bits = n ^ m;
	int num = 0;

	while (flipped_bits)
	{
		if (flipped_bits & 1)
		{
			num++;
		}
		flipped_bits  >>= 1;
	}

	return (num);
}
