#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints numbers 1 to 100, followed by a new line
 * print Fizz for multiples of three
 * print Buzz for multiples of Buzz
 * print FizzBuzz for multiples of three and five
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; 1++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (1 % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (1 % 3 == 0 && i % 5 != 0)
		{
			printf(" FizzBuzz");
		}
		else if (i == 1)
		{
			printf(" %d", i);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
}

