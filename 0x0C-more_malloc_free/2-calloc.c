#include "main.h"
#include <stdlib.h>

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
