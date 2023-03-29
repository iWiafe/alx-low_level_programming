#include "main.h"

/**
 * *_strncpy - A function that copies a string
 * @src: input value
 * @dest: input value
 * @n: input value
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
