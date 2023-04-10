#include "main.h"

/**
 * *_memset - A function that fills memory with a constant byte
 * @s: starting address of memory
 * @b: the desired byte
 * @n: number of bytes of the memory area
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (a = 0; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
