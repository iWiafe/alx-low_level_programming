#include "main.h"

/**
 * *_strchr - a function that locates a character in a string
 * @s: input to the function
 * @c: input to the function
 * Return: Always (Success)
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (&s[a]);
		}
	}
	return (0);
}

