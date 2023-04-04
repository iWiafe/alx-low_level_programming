#include "main.h"

/**
 * *_strstr - A function that locates a substring
 * @haystack: input to the function
 * @needle: input to the function
 * Return: Always (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	char a = 0;
	char *a = haystack;
	char *b = needle;

	for (a = 0; *a != '\0'; a++)
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
		return (*a);
	}
	return (0);
}












}
