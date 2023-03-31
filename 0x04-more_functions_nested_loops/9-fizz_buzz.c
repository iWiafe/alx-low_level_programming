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
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 != 0)
		{
			printf(" Fizz");
		} else if (a % 5 == 0 && a % 3 != 0)
		{
			printf(" Buzz");
		} else if (a % 3 == 0 && a % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (a == 1)
		{
			printf("%d", a);
		} else
		{
			printf(" %d", a);
		}
	}
	printf("\n");

	return (0);
}
