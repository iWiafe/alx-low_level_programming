#include "main.h"

/**
 * *_strstr - A function that locates a substring
 * @haystack: input to the function
 * @needle: input to the function
 * Return: Always (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	char haystack;

	for (haystack = 0; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;
	}
	while (*a == *b && *b != '\0')
	{
		a++;
		b++;
	}
	if (*b == '\0')
	{
		return (haystack);
	}
	return (0);
}
