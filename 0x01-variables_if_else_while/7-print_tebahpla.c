#include <stdio.h>

/**
 * main - Programme that prints lower case alphabets in reverse
 * Return: Always (Success)
 */
int main(void)
{
	int ch;

	for (ch  = 'a'; ch  <= 'z'; ch--)
	putchar(ch);
	putchar('\n');
	return (0);
}
