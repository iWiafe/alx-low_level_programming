#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all possible combinations of single-digit numbers
 * Return: Always (Success)
 */
int main(void)
{
	int p, q;

	for (p = 0; p <= 98; p++)
	{
	for (q = p + 1; q <= 99; q++)
	{
	putchar((p / 10) + '0');
	putchar((p % 10) + '0');
	putchar(' ');
	putchar((q / 10) + '0');
	putchar((q % 10) + '0');
	if (a == 98 && b == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar("\n");
	return (0);
}
