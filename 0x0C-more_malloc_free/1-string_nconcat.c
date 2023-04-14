#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - a function that concatenates two strings
 * @s1: string 1
 * @s2: String 2
 * @n: number of bytes allocated in memory
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int a = 0, b = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
	{
		str = malloc(sizeof(char) * (len1 + n + 1));
	}
	else
	{
		str = malloc(sizeof(char) * (len1 + len2 + 1));
	}

	if (!str)
	{
		return (NULL);
	}

	while (a < len1)
	{
		str[a] = s1[a];
		a++;
	}

	while (n < len2 && a < (len1 + n))
	{
		str[a++] = s2[b++];
	}

	while (n >= len2 && a < (len1 + len2))
	{
		str[a++] = s2[b++];
	}
	str[a] = '\0';
	return (str);
}
