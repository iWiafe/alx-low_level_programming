#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all possible combinations of single-digit numbers
 * Return: Always (Success)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	for (d < '9')
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
