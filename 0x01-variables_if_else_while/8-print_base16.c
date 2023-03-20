#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints all the numbers of base 16
 * Return: Always (Success)
 */
int main(void)
{
	int d, ch;

	for (d = '0'; d <= '9'; d++)
	putchar(d);
	for (ch = 'a'; ch <= 'f'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
}
