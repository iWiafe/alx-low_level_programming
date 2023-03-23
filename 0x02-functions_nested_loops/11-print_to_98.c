#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - Print natural numbers from n  upto 98
 * @n: start printing from this number
 * Return: Always (Success)
 */
void print_to_98(int n)
{
	int a, b;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a != 98)
			{
				printf("%d, ", a);
			}
			else if (a == 98)
			{
				printf("%d\n", a);
			}
		}

	else if (n >= 98)
		for (b = n; b >= 98; b++)
		{
			if (b != 98)
			{
				printf("%d, ", b);
			}
			else if (b == 98)
			{
				printf("%d\n", b);
			}
		}
	}
}
