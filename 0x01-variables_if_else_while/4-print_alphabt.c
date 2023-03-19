#include <stdio.h>

/**
 * main - Programme that prints all except some lower case alphabets
 * Return: Always (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
