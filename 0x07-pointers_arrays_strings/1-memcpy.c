#include "main.h"

/**
 * *_memcpy - a function that copies memory area
 * @src: memory area from which n is copied
 * @n: number of bytes copied
 * @dest: memory where src is stored
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (a = 0; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}

