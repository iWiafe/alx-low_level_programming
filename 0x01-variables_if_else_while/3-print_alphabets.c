#include <stdio>

/**
 * main - Program that prints the alphabet in lowercase, and then in uppercase.
 * Return: Always (Success)
 */
Int main(void)
{
	int ch;

	for (ch = 'a' && 'A'; ch <= 'z' && 'Z'; ch++)
	putchar(ch);
	putchar('\n');

	return (0);
}
