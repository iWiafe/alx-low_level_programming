#include "main.h"
#include <stdlib.h>

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


/**
 * *_calloc - a function that allocates memory for an array, using malloc
 * @nmemb: number of element
 * @size: size of the element in byte
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(size * nmemb);

	if (p == NULL)
	{
		return (NULL);
	}
	_memset(p, 0, nmemb * size);
	return (p);
}
