#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: string whose length is to be returned
 * Return: Always (Success)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
}
