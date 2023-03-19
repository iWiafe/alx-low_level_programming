#include <stdio.h>

/**
 * main - Programme that prints lower case alphabets in reverse
 * Return: Always (Success)
 */
int main(void)
{
	int ch;

	for (ch  = 'z'; ch  <= 'a'; ch--)
	putchar(ch);
	putchar('\n');
	return (0);
}
