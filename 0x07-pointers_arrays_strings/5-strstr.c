#include "main.h"

/**
 * *_strstr - A function that locates a substring
 * @haystack: input to the function
 * @needle: input to the function
 * Return: Always (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	int place;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		place = 0;

		if (haystack[place] == needle[place])
		{
			do {
				if (needle[place + 1] == '\0')
				{
					return (haystack);
					place++;
				}
			} while (haystack[place] == needle[place]);
		}
		haystack++;
	}
	return ('\0');
}
