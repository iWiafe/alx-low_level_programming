#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int memory = 1;
	char *endianness = (char *)&memory;

	if (*endianness)
	{
		return (1);
	}

	return (0);
}
