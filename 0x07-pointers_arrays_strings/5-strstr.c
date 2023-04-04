#include "main.h"

/**
 * *_strstr - A function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: Always (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	int a;

	if (*needle == 0)
	{
		return (haystack);
	}

	while (*haystack)
	{
		a = 0;

		if (haystack[a] == needle[a])
		{
			do {
				if (needle[a + 1] == '\0')
				{
					return (haystack);
					place++;
				}
			} while (haystack[a] == needle[a]);
		}
		haystack++;
	}
	return ('\0');
}
