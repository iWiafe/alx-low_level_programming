#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints all single digit numbers of base 10
 * Return: Always (Success)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	putchar(d);
	putchar('\n');
	return (0);
}
