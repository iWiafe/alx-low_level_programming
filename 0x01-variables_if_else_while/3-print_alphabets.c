#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase, and then in uppercase.
 * Return: Always (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar('\n');

	return (0);
}
