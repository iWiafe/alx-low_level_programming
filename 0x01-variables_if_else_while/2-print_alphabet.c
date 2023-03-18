#include <stdio.h>
#include <stdlib.h>

/**
 * main - Programme that prints alphabet in lower case
 * Return: Always (Success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);

	for (low = 'A'; low <= 'A', low++)
	putchar (low);
	putchar ('\n')

	return (0);
}
